#ifndef PEGASUS_INCLUDED_SELECT_H
#define PEGASUS_INCLUDED_SELECT_H

#define PEGASUS_SELECT \
    { \
        pegasus_text_position_t PEGASUS_HIDE(backup_position) = pegasus_text_position(PEGASUS_HIDE(input_text)); \
        do \
        { \
            do \
            {
                /*
                    ...
                */
#define PEGASUS_OTHERWISE \
            } \
            while (0); \
            if (*PEGASUS_HIDE(status) == 1) \
                break; \
            pegasus_text_position_set(PEGASUS_HIDE(input_text), PEGASUS_HIDE(backup_position)); \
            *PEGASUS_HIDE(status) = 1; \
            do \
            {
                /*
                    ...
                */
#define PEGASUS_SELECT_END \
            } \
            while (0); \
            if (*PEGASUS_HIDE(status) == 1) \
                break; \
            pegasus_text_position_set(PEGASUS_HIDE(input_text), PEGASUS_HIDE(backup_position)); \
        } \
        while (0); \
        if (*PEGASUS_HIDE(status) == 0) \
            break; \
    }

#endif
