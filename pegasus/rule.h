#ifndef PEGASUS_INCLUDED_RULE_H
#define PEGASUS_INCLUDED_RULE_H

#include "rule_func.h"

#define PEGASUS_DECLARE(...) \
    static PEGASUS_RULE_FUNC_TYPE(__VA_ARGS__)

#define PEGASUS_DEFINE(...) \
    static PEGASUS_RULE_FUNC_TYPE(__VA_ARGS__) \
    { \
        do \
        {

#define PEGASUS_DEFINE_END \
        } \
        while (0); \
    } \

#endif
