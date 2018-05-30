#include <io.h>
#include <errno.h>

void path_absolute(char path[MAX_PATH]) {
    char rel_path[MAX_PATH];
    ion_path_copy(rel_path, path);
    _fullpath(path, rel_path, MAX_PATH);
}

void dir_list_free(ion_DirListIter *iter) {
    if (iter->valid) {
        _findclose((intptr_t)iter->handle);
        iter->valid = false;
        iter->error = false;
    }
}

void dir__update(ion_DirListIter *iter, bool done, struct _finddata_t *fileinfo) {
    iter->valid = !done;
    iter->error = done && errno != ENOENT;
    if (!done) {
        iter->size = fileinfo->size;
        memcpy(iter->name, fileinfo->name, sizeof(iter->name) - 1);
        iter->name[MAX_PATH - 1] = 0;
        iter->is_dir = fileinfo->attrib & _A_SUBDIR;
    }
}

void dir_list_next(ion_DirListIter *iter) {
    if (!iter->valid) {
        return;
    }
    do {
        struct _finddata_t fileinfo;
        int result = _findnext((intptr_t)iter->handle, &fileinfo);
        dir__update(iter, result != 0, &fileinfo);
        if (result != 0) {
            dir_list_free(iter);
            return;
        }
    } while (ion_dir_excluded(iter));
}

void dir_list(ion_DirListIter *iter, const char *path) {
    memset(iter, 0, sizeof(*iter));
    ion_path_copy(iter->base, path);
    char filespec[MAX_PATH];
    ion_path_copy(filespec, path);
    ion_path_join(filespec, "*");
    struct _finddata_t fileinfo;
    intptr_t handle = _findfirst(filespec, &fileinfo);
    iter->handle = (void *)handle;
    dir__update(iter, handle == -1, &fileinfo);
    if (ion_dir_excluded(iter)) {
        ion_dir_list_next(iter);
    }
}
