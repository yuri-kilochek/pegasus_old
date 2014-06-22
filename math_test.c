#include <stdio.h>

#include "pegasus.h"

#include "pegasus/begin.h"

define(digit, int *res)
    select
        use(the_char, '0');
        *res = 0;
    otherwise
        use(the_char, '1');
        *res = 1;
    otherwise
        use(the_char, '2');
        *res = 2;
    otherwise
        use(the_char, '3');
        *res = 3;
    otherwise
        use(the_char, '4');
        *res = 4;
    otherwise
        use(the_char, '5');
        *res = 5;
    otherwise
        use(the_char, '6');
        *res = 6;
    otherwise
        use(the_char, '7');
        *res = 7;
    otherwise
        use(the_char, '8');
        *res = 8;
    otherwise
        use(the_char, '9');
        *res = 9;
    select_end
define_end

define(constant, double *res)
    *res = 0.0;
    repeat(1)
        int d;
        use(digit, &d);
        *res = *res * 10 + d;
    repeat_end
    try
        use(the_char, '.');
        int p = 1;
        repeat(1)
            int d;
            use(digit, &d);
            p *= 10;
            *res += (double)d / p;
        repeat_end
    try_end
define_end

declare(prefix, double *res);

define(negation, double *res)
    use(the_char, '-');
    double tmp;
    use(prefix, &tmp);
    *res = -tmp;
define_end

declare(additive, double *res);

define(atomic, double *res)
    select
        use(the_char, '(');
        use(additive, res);
        use(the_char, ')');
    otherwise
        use(constant, res);
    select_end
define_end

define(prefix, double *res)
    select
        use(negation, res);
    otherwise
        use(atomic, res);
    select_end
define_end

define(multiplicative, double *res)
    use(prefix, res);
    repeat(0)
        select
            use(the_char, '*');
            double tmp;
            use(prefix, &tmp);
            *res *= tmp;
        otherwise
            use(the_char, '/');
            double tmp;
            use(prefix, &tmp);
            *res /= tmp;
        select_end
    repeat_end
define_end

define(additive, double *res)
    use(multiplicative, res);
    repeat(0)
        select
            use(the_char, '+');
            double tmp;
            use(multiplicative, &tmp);
            *res += tmp;
        otherwise
            use(the_char, '-');
            double tmp;
            use(multiplicative, &tmp);
            *res -= tmp;
        select_end
    repeat_end
define_end

define(expression, double *res)
    use(additive, res);
    use(end_of_input);
define_end

int main() {
    FILE *file = fopen("math_test_input.txt", "r");
    pegasus_text_t *input_text = pegasus_text_create_from_stdio(file);
    parse(input_text)
        select
            double result;
            use(expression, &result);
            printf("%lf", result);
        otherwise
            printf("error");
        select_end
    parse_end
    return 0;
}

#include "pegasus/end.h"
