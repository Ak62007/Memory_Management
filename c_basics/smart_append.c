#include <string.h>
#include "smart_append.h"

int smart_append(TextBuffer *desk, const char *src){
    if ((desk == NULL) || (src == NULL)){
        return 1;
    }

    const int buffer = 64;
    int src_len = strlen(src);
    // int remaining_buffer = desk->length - strlen(desk->buffer);
    if ((63 - desk->length) >= src_len){
        strcat(desk->buffer, src);
        desk->length = desk->length + strlen(src);
        return 0;
    } else {
        strncat(desk->buffer, src, desk->length);
        desk->length = 64;
        return 1;
    }
}

int main(){
    printf("%d",smart_append(NULL, NULL));
    return 0;
}