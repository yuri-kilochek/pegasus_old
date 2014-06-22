#ifndef PEGASUS_INCLUDED_REPEAT_H
#define PEGASUS_INCLUDED_REPEAT_H

#include <stdint.h>

#define PEGASUS_REPEAT(...) \
    PEGASUS_REPEAT_(__VA_ARGS__, UINTMAX_MAX, DUMMY)

#define PEGASUS_REPEAT_(MIN, MAX, ...) \
    { \
        static uintmax_t const PEGASUS_HIDE(min_repeat_count) = MIN; \
        static uintmax_t const PEGASUS_HIDE(max_repeat_count) = MAX; \
        pegasus_text_position_t PEGASUS_HIDE(global_position_backup) = pegasus_text_position(PEGASUS_HIDE(input_text)); \
        for (uintmax_t PEGASUS_HIDE(repeat_count) = 0; PEGASUS_HIDE(repeat_count) < PEGASUS_HIDE(max_repeat_count); ++PEGASUS_HIDE(repeat_count)) \
        { \
            pegasus_text_position_t PEGASUS_HIDE(local_position_backup) = pegasus_text_position(PEGASUS_HIDE(input_text)); \
            do \
            {
                /*
                    ...
                */
#define PEGASUS_REPEAT_END \
            } \
            while (0); \
            if (*PEGASUS_HIDE(status) == 0) \
            { \
                if (PEGASUS_HIDE(repeat_count) < PEGASUS_HIDE(min_repeat_count)) \
                { \
                    pegasus_text_position_set(PEGASUS_HIDE(input_text), PEGASUS_HIDE(global_position_backup)); \
                } \
                else \
                { \
                    pegasus_text_position_set(PEGASUS_HIDE(input_text), PEGASUS_HIDE(local_position_backup)); \
                    *PEGASUS_HIDE(status) = 1; \
                } \
                break; \
            } \
        } \
        if (*PEGASUS_HIDE(status) == 0) \
            break; \
    }

#endif
