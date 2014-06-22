#ifndef PEGASUS_INCLUDED_JOIN_H
#define PEGASUS_INCLUDED_JOIN_H

#define PEGASUS_JOIN_(A, B) \
    A ## B

#define PEGASUS_JOIN(A, B) \
    PEGASUS_JOIN_(A, B)

#endif
