#ifndef PEGASUS_INCLUDED_PARSE_H
#define PEGASUS_INCLUDED_PARSE_H

#define PEGASUS_PARSE(INPUT_TEXT) \
    { \
        int *PEGASUS_HIDE(status) = &(int) {1}; \
        pegasus_text_t *PEGASUS_HIDE(input_text) = (INPUT_TEXT); \
        pegasus_text_position_t PEGASUS_HIDE(backup_position) = pegasus_text_position(PEGASUS_HIDE(input_text)); \
        do \
        {
            /*
                ...
            */
#define PEGASUS_PARSE_END \
        } \
        while (0); \
        if (*PEGASUS_HIDE(status) == 0) \
            pegasus_text_position_set(PEGASUS_HIDE(input_text), PEGASUS_HIDE(backup_position)); \
    }

#endif
