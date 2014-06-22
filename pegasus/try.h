#ifndef PEGASUS_INCLUDED_TRY_H
#define PEGASUS_INCLUDED_TRY_H

#define PEGASUS_TRY \
    { \
        pegasus_text_position_t PEGASUS_HIDE(backup_position) = pegasus_text_position(PEGASUS_HIDE(input_text)); \
        do \
        {
            /*
                ...
            */
#define PEGASUS_TRY_END \
        } \
        while (0); \
        if (*PEGASUS_HIDE(status) == 0) \
        { \
            pegasus_text_position_set(PEGASUS_HIDE(input_text), PEGASUS_HIDE(backup_position)); \
            *PEGASUS_HIDE(status) = 1; \
        } \
    }

#endif
