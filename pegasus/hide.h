#ifndef PEGASUS_INCLUDED_HIDE_H
#define PEGASUS_INCLUDED_HIDE_H

#include "join.h"

#define PEGASUS_HIDE(IDENTIFIER) \
    PEGASUS_JOIN(pegasus_hidden_, IDENTIFIER)

#endif
