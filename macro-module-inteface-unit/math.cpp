// Includes should come before modules. Otherwise, there is a linker error
#include <cstdio>

module math;

void print_message()
{
#ifdef MACRO_INTERFACE
    printf("MACRO_INTERFACE is defined\n");
#else
    printf("MACRO_INTERFACE is undefined\n");
#endif

#ifdef MACRO_IMPLEMENTATION
    printf("MACRO_IMPLEMENTATION is defined\n");
#else
    printf("MACRO_IMPLEMENTATION is undefined\n");
#endif
}

