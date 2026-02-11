#include <string.h>

typedef struct 
{   
    size_t length;
    char buffer[64];

}TextBuffer;

int smart_append(TextBuffer *desk, const char *src);