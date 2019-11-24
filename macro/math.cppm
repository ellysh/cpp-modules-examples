// Includes should come before modules. Otherwise, there is a linker error
#include <cstdio>

export module math;

export void print_message()
{
#ifdef PROGRAM_MACRO
    printf("PROGRAM_MACRO is defined\n");
#else
    printf("PROGRAM_MACRO is undefined\n");
#endif

#ifdef ENVIRONMENT_MACRO
    printf("ENVIRONMENT_MACRO is defined\n");
#else
    printf("ENVIRONMENT_MACRO is undefined\n");
#endif
}
