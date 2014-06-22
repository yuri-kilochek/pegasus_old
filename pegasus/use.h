#ifndef PEGASUS_INCLUDED_USE_H
#define PEGASUS_INCLUDED_USE_H

#include "rule_func.h"

#define PEGASUS_USE(...) \
    if (1) \
    { \
        PEGASUS_RULE_FUNC_CALL(__VA_ARGS__); \
        if (*PEGASUS_HIDE(status) == 0) \
            break; \
    } \
    else \
        do {} while (0)

#endif
