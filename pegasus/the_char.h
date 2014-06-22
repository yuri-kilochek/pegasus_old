#ifndef PEGASUS_INCLUDED_THE_CHAR_H
#define PEGASUS_INCLUDED_THE_CHAR_H

#include "rule_func.h"

static inline PEGASUS_RULE_FUNC_TYPE(PEGASUS_THE_CHAR, char character)
{
    if (pegasus_text_read(PEGASUS_HIDE(input_text)) != character)
        *PEGASUS_HIDE(status) = 0;
}

#endif
