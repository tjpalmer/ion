#ifndef MAX_PATH
# if defined _MAX_PATH
#   define MAX_PATH _MAX_PATH
# elif defined PATH_MAX
#   define MAX_PATH PATH_MAX
# else
#   define MAX_PATH 256
// #   error "No suitable MAX_PATH surrogate"
# endif
#endif

struct ion_DirListIter;

void path_absolute(char path[MAX_PATH]);
void dir_list_free(struct ion_DirListIter *iter);
void dir_list_next(struct ion_DirListIter *iter);
void dir_list(struct ion_DirListIter *iter, const char *path);

#include "out_ion.c"

#ifdef _WIN32
# include "ion/os_win32.c"
# define strdup _strdup
#else
# include "ion/os_unix.c"
#endif
