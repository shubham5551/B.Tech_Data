#include <stdio.h>
#include <limits.h>   // for range constants like INT_MAX, INT_MIN, etc.
#include <float.h>    // for float and double ranges

int main() {
    // Integer modifiers
    short int a;
    unsigned short int b;
    int c;
    unsigned int d;
    long int e;
    unsigned long int f;
    long long int g;
    unsigned long long int h;

    // Character modifiers
    signed char i;
    unsigned char j;

    // Floating-point types
    float k;
    double l;
    long double m;

    // Display size of all modified data types
    printf("----- Size of Data Types with Modifiers -----\n");
    printf("Size of short int               : %lu bytes\n", sizeof(a));
    printf("Size of unsigned short int      : %lu bytes\n", sizeof(b));
    printf("Size of int                     : %lu bytes\n", sizeof(c));
    printf("Size of unsigned int            : %lu bytes\n", sizeof(d));
    printf("Size of long int                : %lu bytes\n", sizeof(e));
    printf("Size of unsigned long int       : %lu bytes\n", sizeof(f));
    printf("Size of long long int           : %lu bytes\n", sizeof(g));
    printf("Size of unsigned long long int  : %lu bytes\n", sizeof(h));
    printf("Size of signed char             : %lu bytes\n", sizeof(i));
    printf("Size of unsigned char           : %lu bytes\n", sizeof(j));
    printf("Size of float                   : %lu bytes\n", sizeof(k));
    printf("Size of double                  : %lu bytes\n", sizeof(l));
    printf("Size of long double             : %lu bytes\n", sizeof(m));

    // Display ranges for integer modifiers
    printf("\n----- Range of Integer Types -----\n");
    printf("Range of short int              : %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short int     : 0 to %u\n", USHRT_MAX);
    printf("Range of int                    : %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int           : 0 to %u\n", UINT_MAX);
    printf("Range of long int               : %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int      : 0 to %lu\n", ULONG_MAX);
    printf("Range of long long int          : %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Range of unsigned long long int : 0 to %llu\n", ULLONG_MAX);

    // Display ranges for character modifiers
    printf("\n----- Range of Character Types -----\n");
    printf("Range of signed char            : %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char          : 0 to %u\n", UCHAR_MAX);

    // Floating point ranges
    printf("\n----- Range of Floating-Point Types -----\n");
    printf("Range of float                  : %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Range of double                 : %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Range of long double            : %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}

