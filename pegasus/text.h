#ifndef PEGASUS_TEXT_INCLUDED
#define PEGASUS_TEXT_INCLUDED

#include <stdlib.h>
#include <stdio.h>

#define PEGASUS_TEXT_END (-1)

struct pegasus_text_poistion {
    fpos_t fpos;
} typedef pegasus_text_position_t;

struct pegasus_text {
    FILE *file;
} typedef pegasus_text_t;


static inline pegasus_text_t *pegasus_text_create_from_stdio(FILE *file) {
    pegasus_text_t *text = malloc(sizeof(pegasus_text_t));

    text->file = file;

    return text;
}

static inline void pegasus_text_destroy(pegasus_text_t *text) {
    free(text);
}

static inline pegasus_text_position_t pegasus_text_position(pegasus_text_t *text) {
    pegasus_text_position_t position;

    fgetpos(text->file, &position.fpos);

    return position;
}

static inline void pegasus_text_position_set(pegasus_text_t *text, pegasus_text_position_t position) {
    fsetpos(text->file, &position.fpos);
}

static inline int pegasus_text_read(pegasus_text_t *text) {
    int c = fgetc(text->file);
    if (c == EOF)
        return PEGASUS_TEXT_END;
    return c;
}

#endif

