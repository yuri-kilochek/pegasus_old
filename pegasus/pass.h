#ifndef PEGASUS_INCLUDED_PASS_H
#define PEGASUS_INCLUDED_PASS_H

#include "argc.h"

#define PEGASUS_FIRST(FIRST, ...) \
    FIRST

#define PEGASUS_REST(FIRST, ...) \
    __VA_ARGS__

#define PEGASUS_JUST(...) \
    __VA_ARGS__

#define PEGASUS_UNPACK(PACKET) \
    PEGASUS_JUST PACKET

#define PEGASUS_PICK_COMMA_PACKET(...) \
    PEGASUS_PICK_64(__VA_ARGS__, (,), (,), (,), (,), (,), (,), (,), \
                            (,), (,), (,), (,), (,), (,), (,), (,), \
                            (,), (,), (,), (,), (,), (,), (,), (,), \
                            (,), (,), (,), (,), (,), (,), (,), (,), \
                            (,), (,), (,), (,), (,), (,), (,), (,), \
                            (,), (,), (,), (,), (,), (,), (,), (,), \
                            (,), (,), (,), (,), (,), (,), (,), (,), \
                            (,), (,), (,), (,), (,), (,), (,), (,), \
                            ( ))

#define PEGASUS_PASS_REST(...) \
    PEGASUS_UNPACK(PEGASUS_PICK_COMMA_PACKET(__VA_ARGS__)) PEGASUS_REST(__VA_ARGS__)

#endif
