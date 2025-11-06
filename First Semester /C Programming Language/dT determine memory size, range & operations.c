/* 
  Purpose: Show that data types determine memory size, range and operations.
*/

#include <stdio.h>
#include <limits.h>   // integer ranges like INT_MIN, INT_MAX
#include <float.h>    // float/double ranges like FLT_MAX, DBL_MAX

int main(void) {
    /* -------------------- SIZES -------------------- */
    printf("=== Sizes (bytes) using sizeof() ===\n");
    printf("sizeof(char)        = %zu\n", sizeof(char));
    printf("sizeof(unsigned char) = %zu\n", sizeof(unsigned char));
    printf("sizeof(short)       = %zu\n", sizeof(short));
    printf("sizeof(int)         = %zu\n", sizeof(int));
    printf("sizeof(unsigned int)= %zu\n", sizeof(unsigned int));
    printf("sizeof(long)        = %zu\n", sizeof(long));
    printf("sizeof(long long)   = %zu\n", sizeof(long long));
    printf("sizeof(float)       = %zu\n", sizeof(float));
    printf("sizeof(double)      = %zu\n", sizeof(double));
    printf("sizeof(long double) = %zu\n\n", sizeof(long double));

    /* -------------------- RANGES -------------------- */
    printf("=== Ranges (approx.) using limits.h and float.h ===\n");
    printf("char                : %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char       : 0 to %u\n", UCHAR_MAX);
    printf("short               : %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short      : 0 to %u\n", USHRT_MAX);
    printf("int                 : %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int        : 0 to %u\n", UINT_MAX);
    printf("long                : %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long       : 0 to %lu\n", ULONG_MAX);
    printf("long long           : %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long  : 0 to %llu\n", ULLONG_MAX);

    printf("float               : %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double              : %e to %e\n", DBL_MIN, DBL_MAX);
    printf("long double         : %Le to %Le\n\n", LDBL_MIN, LDBL_MAX);

    /* -------------------- OPERATIONS -------------------- */
    printf("=== Example operations showing behavior per type ===\n");

    /* Integer arithmetic (int) */
    int a = 7, b = 3;
    printf("-- int arithmetic --\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d   (integer addition)\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d   (integer division truncates fractional part)\n", a / b);
    printf("a %% b = %d   (remainder)\n\n", a % b);

    /* Floating-point arithmetic (float/double) */
    float x = 7.0f, y = 3.0f;
    printf("-- float arithmetic --\n");
    printf("x = %.2f, y = %.2f\n", x, y);
    printf("x / y = %.6f   (floating-point division keeps fraction)\n\n", x / y);

    /* Character arithmetic */
    char ch1 = 'A'; // ASCII 65
    char ch2 = 1;
    printf("-- char arithmetic (actually numbers) --\n");
    printf("ch1 = '%c' (ASCII %d)\n", ch1, (int)ch1);
    printf("ch1 + 1 => '%c' (ASCII %d)\n\n", (char)(ch1 + 1), (int)(ch1 + 1));

    /* Unsigned wrap-around example */
    unsigned int u = UINT_MAX;
    printf("-- unsigned wrap-around --\n");
    printf("u = %u (UINT_MAX)\n", u);
    printf("u + 1 = %u  (wraps to 0 because unsigned overflow is well-defined modulo 2^n)\n\n", u + 1);

    /* Signed overflow warning (undefined) - show that signed overflow is not safe */
    int large = INT_MAX;
    printf("-- signed overflow (undefined behaviour) --\n");
    printf("INT_MAX = %d\n", large);
    printf("large + 1 => (this is undefined behaviour for signed int; do NOT rely on it)\n\n");

    /* Bitwise operators (work on integer bit patterns) */
    unsigned int p = 6;  // binary 0110
    unsigned int q = 3;  // binary 0011
    printf("-- bitwise operators (on integers) --\n");
    printf("p = %u (binary 0110), q = %u (binary 0011)\n", p, q);
    printf("p & q = %u  (AND)\n", p & q);
    printf("p | q = %u  (OR)\n", p | q);
    printf("p ^ q = %u  (XOR)\n", p ^ q);
    printf("~p    = %u  (NOT, bitwise complement)\n", ~p);
    printf("p << 1 = %u (left shift)\n", p << 1);
    printf("p >> 1 = %u (right shift)\n\n", p >> 1);

    /* sizeof operator usage as an expression */
    printf("sizeof(int) returns %zu — it is compile-time info used by compiler to allocate memory.\n\n", sizeof(int));

    printf("=== Short summary ===\n");
    printf("1) Type decides memory (sizeof).\n");
    printf("2) Type decides legal value range (limits.h / float.h).\n");
    printf("3) Type decides what operations make sense and how they behave\n");
    printf("   (e.g., integer division vs float division, bitwise ops are for integers, \n");
    printf("    unsigned overflow wraps modulo 2^n; signed overflow is undefined).\n");

    return 0;
}

