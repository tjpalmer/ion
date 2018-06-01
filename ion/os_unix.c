#include <dirent.h>

void path_absolute(char path[MAX_PATH]) {
    char rel_path[MAX_PATH];
    ion_path_copy(rel_path, path);
    realpath(rel_path, path);
}

void dir_list_free(ion_DirListIter *iter) {
    if (iter->valid) {
        iter->valid = false;
        iter->error = false;
        closedir(iter->handle);
    }
}

void dir_list_next(ion_DirListIter *iter) {
    if (!iter->valid) {
        return;
    }
    do {
        struct dirent *entry = readdir(iter->handle);
        if (!entry) {
            dir_list_free(iter);
            return;
        }
        ion_path_copy(iter->name, entry->d_name);
        iter->is_dir = entry->d_type & DT_DIR;
    } while (ion_dir_excluded(iter));
}

void dir_list(ion_DirListIter *iter, const char *path) {
    memset(iter, 0, sizeof(*iter));
    DIR *dir = opendir(path);
    if (!dir) {
        iter->valid = false;
        iter->error = true;
        return;
    }
    iter->handle = dir;
    ion_path_copy(iter->base, path);
    iter->valid = true;
    dir_list_next(iter);
}
