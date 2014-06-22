#ifndef PEGASUS_INCLUDED_EACH_H
#define PEGASUS_INCLUDED_EACH_H

#include "join.h"
#include "argc.h"

#define  PEGASUS_EACH_1(F, X     ) F(X)
#define  PEGASUS_EACH_2(F, X, ...) F(X)  PEGASUS_EACH_1(F, __VA_ARGS__)
#define  PEGASUS_EACH_3(F, X, ...) F(X)  PEGASUS_EACH_2(F, __VA_ARGS__)
#define  PEGASUS_EACH_4(F, X, ...) F(X)  PEGASUS_EACH_3(F, __VA_ARGS__)
#define  PEGASUS_EACH_5(F, X, ...) F(X)  PEGASUS_EACH_4(F, __VA_ARGS__)
#define  PEGASUS_EACH_6(F, X, ...) F(X)  PEGASUS_EACH_5(F, __VA_ARGS__)
#define  PEGASUS_EACH_7(F, X, ...) F(X)  PEGASUS_EACH_6(F, __VA_ARGS__)
#define  PEGASUS_EACH_8(F, X, ...) F(X)  PEGASUS_EACH_7(F, __VA_ARGS__)

#define  PEGASUS_EACH_9(F, X, ...) F(X)  PEGASUS_EACH_8(F, __VA_ARGS__)
#define PEGASUS_EACH_10(F, X, ...) F(X)  PEGASUS_EACH_9(F, __VA_ARGS__)
#define PEGASUS_EACH_11(F, X, ...) F(X) PEGASUS_EACH_10(F, __VA_ARGS__)
#define PEGASUS_EACH_12(F, X, ...) F(X) PEGASUS_EACH_11(F, __VA_ARGS__)
#define PEGASUS_EACH_13(F, X, ...) F(X) PEGASUS_EACH_12(F, __VA_ARGS__)
#define PEGASUS_EACH_14(F, X, ...) F(X) PEGASUS_EACH_13(F, __VA_ARGS__)
#define PEGASUS_EACH_15(F, X, ...) F(X) PEGASUS_EACH_14(F, __VA_ARGS__)
#define PEGASUS_EACH_16(F, X, ...) F(X) PEGASUS_EACH_15(F, __VA_ARGS__)

#define PEGASUS_EACH_17(F, X, ...) F(X) PEGASUS_EACH_16(F, __VA_ARGS__)
#define PEGASUS_EACH_18(F, X, ...) F(X) PEGASUS_EACH_17(F, __VA_ARGS__)
#define PEGASUS_EACH_19(F, X, ...) F(X) PEGASUS_EACH_18(F, __VA_ARGS__)
#define PEGASUS_EACH_20(F, X, ...) F(X) PEGASUS_EACH_19(F, __VA_ARGS__)
#define PEGASUS_EACH_21(F, X, ...) F(X) PEGASUS_EACH_20(F, __VA_ARGS__)
#define PEGASUS_EACH_22(F, X, ...) F(X) PEGASUS_EACH_21(F, __VA_ARGS__)
#define PEGASUS_EACH_23(F, X, ...) F(X) PEGASUS_EACH_22(F, __VA_ARGS__)
#define PEGASUS_EACH_24(F, X, ...) F(X) PEGASUS_EACH_23(F, __VA_ARGS__)

#define PEGASUS_EACH_25(F, X, ...) F(X) PEGASUS_EACH_24(F, __VA_ARGS__)
#define PEGASUS_EACH_26(F, X, ...) F(X) PEGASUS_EACH_25(F, __VA_ARGS__)
#define PEGASUS_EACH_27(F, X, ...) F(X) PEGASUS_EACH_26(F, __VA_ARGS__)
#define PEGASUS_EACH_28(F, X, ...) F(X) PEGASUS_EACH_27(F, __VA_ARGS__)
#define PEGASUS_EACH_29(F, X, ...) F(X) PEGASUS_EACH_28(F, __VA_ARGS__)
#define PEGASUS_EACH_30(F, X, ...) F(X) PEGASUS_EACH_29(F, __VA_ARGS__)
#define PEGASUS_EACH_31(F, X, ...) F(X) PEGASUS_EACH_30(F, __VA_ARGS__)
#define PEGASUS_EACH_32(F, X, ...) F(X) PEGASUS_EACH_31(F, __VA_ARGS__)

#define PEGASUS_EACH_33(F, X, ...) F(X) PEGASUS_EACH_32(F, __VA_ARGS__)
#define PEGASUS_EACH_34(F, X, ...) F(X) PEGASUS_EACH_33(F, __VA_ARGS__)
#define PEGASUS_EACH_35(F, X, ...) F(X) PEGASUS_EACH_34(F, __VA_ARGS__)
#define PEGASUS_EACH_36(F, X, ...) F(X) PEGASUS_EACH_35(F, __VA_ARGS__)
#define PEGASUS_EACH_37(F, X, ...) F(X) PEGASUS_EACH_36(F, __VA_ARGS__)
#define PEGASUS_EACH_38(F, X, ...) F(X) PEGASUS_EACH_37(F, __VA_ARGS__)
#define PEGASUS_EACH_39(F, X, ...) F(X) PEGASUS_EACH_38(F, __VA_ARGS__)
#define PEGASUS_EACH_40(F, X, ...) F(X) PEGASUS_EACH_39(F, __VA_ARGS__)

#define PEGASUS_EACH_41(F, X, ...) F(X) PEGASUS_EACH_40(F, __VA_ARGS__)
#define PEGASUS_EACH_42(F, X, ...) F(X) PEGASUS_EACH_41(F, __VA_ARGS__)
#define PEGASUS_EACH_43(F, X, ...) F(X) PEGASUS_EACH_42(F, __VA_ARGS__)
#define PEGASUS_EACH_44(F, X, ...) F(X) PEGASUS_EACH_43(F, __VA_ARGS__)
#define PEGASUS_EACH_45(F, X, ...) F(X) PEGASUS_EACH_44(F, __VA_ARGS__)
#define PEGASUS_EACH_46(F, X, ...) F(X) PEGASUS_EACH_45(F, __VA_ARGS__)
#define PEGASUS_EACH_47(F, X, ...) F(X) PEGASUS_EACH_46(F, __VA_ARGS__)
#define PEGASUS_EACH_48(F, X, ...) F(X) PEGASUS_EACH_47(F, __VA_ARGS__)

#define PEGASUS_EACH_49(F, X, ...) F(X) PEGASUS_EACH_48(F, __VA_ARGS__)
#define PEGASUS_EACH_50(F, X, ...) F(X) PEGASUS_EACH_49(F, __VA_ARGS__)
#define PEGASUS_EACH_51(F, X, ...) F(X) PEGASUS_EACH_50(F, __VA_ARGS__)
#define PEGASUS_EACH_52(F, X, ...) F(X) PEGASUS_EACH_51(F, __VA_ARGS__)
#define PEGASUS_EACH_53(F, X, ...) F(X) PEGASUS_EACH_52(F, __VA_ARGS__)
#define PEGASUS_EACH_54(F, X, ...) F(X) PEGASUS_EACH_53(F, __VA_ARGS__)
#define PEGASUS_EACH_55(F, X, ...) F(X) PEGASUS_EACH_54(F, __VA_ARGS__)
#define PEGASUS_EACH_56(F, X, ...) F(X) PEGASUS_EACH_55(F, __VA_ARGS__)

#define PEGASUS_EACH_57(F, X, ...) F(X) PEGASUS_EACH_56(F, __VA_ARGS__)
#define PEGASUS_EACH_58(F, X, ...) F(X) PEGASUS_EACH_57(F, __VA_ARGS__)
#define PEGASUS_EACH_59(F, X, ...) F(X) PEGASUS_EACH_58(F, __VA_ARGS__)
#define PEGASUS_EACH_60(F, X, ...) F(X) PEGASUS_EACH_59(F, __VA_ARGS__)
#define PEGASUS_EACH_61(F, X, ...) F(X) PEGASUS_EACH_60(F, __VA_ARGS__)
#define PEGASUS_EACH_62(F, X, ...) F(X) PEGASUS_EACH_61(F, __VA_ARGS__)
#define PEGASUS_EACH_63(F, X, ...) F(X) PEGASUS_EACH_62(F, __VA_ARGS__)
#define PEGASUS_EACH_64(F, X, ...) F(X) PEGASUS_EACH_63(F, __VA_ARGS__)

#define PEGASUS_EACH(F, ...) \
    PEGASUS_JOIN(PEGASUS_EACH_, PEGASUS_ARGC(__VA_ARGS__))(F, __VA_ARGS__)

#endif