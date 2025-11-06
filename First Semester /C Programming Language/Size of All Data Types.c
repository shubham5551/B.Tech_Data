// Size of All Data Types
#include <stdio.h>

int main() 
{
    // Primary (Basic) Data Types
    char ch;
    unsigned char uch;
    int i;
    unsigned int ui;
    short int si;
    unsigned short int usi;
    long int li;
    unsigned long int uli;
    float f;
    double d;
    long double ld;

    // Derived and User-defined data types (just for example)
    int arr[5];
    int *ptr;
    struct Student {
        int id;
        char name[20];
    };
    union Data {
        int i;
        float f;
    };
    enum week {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

    // Display sizes of all data types
    printf("----- Size of Primary Data Types -----\n");
    printf("Size of char               : %lu bytes\n", sizeof(ch));
    printf("Size of unsigned char      : %lu bytes\n", sizeof(uch));
    printf("Size of int                : %lu bytes\n", sizeof(i));
    printf("Size of unsigned int       : %lu bytes\n", sizeof(ui));
    printf("Size of short int          : %lu bytes\n", sizeof(si));
    printf("Size of unsigned short int : %lu bytes\n", sizeof(usi));
    printf("Size of long int           : %lu bytes\n", sizeof(li));
    printf("Size of unsigned long int  : %lu bytes\n", sizeof(uli));
    printf("Size of float              : %lu bytes\n", sizeof(f));
    printf("Size of double             : %lu bytes\n", sizeof(d));
    printf("Size of long double        : %lu bytes\n", sizeof(ld));

    printf("\n----- Size of Derived Data Types -----\n");
    printf("Size of int array (5 elements): %lu bytes\n", sizeof(arr));
    printf("Size of pointer               : %lu bytes\n", sizeof(ptr));

    printf("\n----- Size of User-Defined Data Types -----\n");
    printf("Size of structure             : %lu bytes\n", sizeof(struct Student));
    printf("Size of union                 : %lu bytes\n", sizeof(union Data));
    printf("Size of enum                  : %lu bytes\n", sizeof(enum week));

    printf("\n----- Special Type -----\n");
    printf("Size of void (not applicable)\n");

    return 0;
}

