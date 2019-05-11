#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("minimum of signed char : %d\n",SCHAR_MIN);
    printf("maximum of signed char : %d\n",SCHAR_MAX);
    printf("maximum of unsigned char : %d\n",UCHAR_MAX);
    printf("minimum of signed short int : %d\n",SHRT_MIN);
    printf("maximum of signed short int : %d\n",SHRT_MAX);
    printf("maximum of unsigned short int : %d\n",USHRT_MAX);
    printf("minimum of signed int : %d\n",INT_MIN);
    printf("maximum of signed int : %d\n",INT_MAX);
    printf("maximum of unsigned int : %lu\n",UINT_MAX);
    printf("minimum of signed long int : %ld\n",LONG_MIN);
    printf("maximum of signed long int : %ld\n",LONG_MAX);
    printf("maximum of unsigned long int : %lu\n",ULONG_MAX);
    printf("minimum of float : %e\n",FLT_MIN);
    printf("maximum of float : %e\n",FLT_MAX);
    printf("minimum of double : %e\n",DBL_MIN);
    printf("maximum of double : %e\n",DBL_MAX);
}