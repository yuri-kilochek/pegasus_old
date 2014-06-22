#ifndef PEGASUS_INCLUDED_RULE_FUNC_H
#define PEGASUS_INCLUDED_RULE_FUNC_H

#include "hide.h"
#include "pass.h"

#define PEGASUS_RULE_FUNC_TYPE(...) \
    void PEGASUS_FIRST(__VA_ARGS__)(int *PEGASUS_HIDE(status), \
                                    pegasus_text_t *PEGASUS_HIDE(input_text) \
                                        PEGASUS_PASS_REST(__VA_ARGS__))

#define PEGASUS_RULE_FUNC_CALL(...) \
    PEGASUS_FIRST(__VA_ARGS__)(PEGASUS_HIDE(status), \
                               PEGASUS_HIDE(input_text) \
                                   PEGASUS_PASS_REST(__VA_ARGS__))

#endif
