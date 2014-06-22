#ifndef PEGASUS_INCLUDED_END_OF_INPUT_H
#define PEGASUS_INCLUDED_END_OF_INPUT_H

#include "rule_func.h"

static inline PEGASUS_RULE_FUNC_TYPE(PEGASUS_END_OF_INPUT)
{
    if (pegasus_text_read(PEGASUS_HIDE(input_text)) != PEGASUS_TEXT_END)
        *PEGASUS_HIDE(status) = 0;
}

#endif
