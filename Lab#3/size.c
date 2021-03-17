#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **x; /*더블형 포인터 x 선언*/

    printf("[----- 김현민  2018038088 -----]\n");

    printf("\nsizeof(x) = %lu\n", sizeof(x));  /*주소를 저장하고 있는 x의 사이즈 값*/
    printf("sizeof(*x) = %lu\n", sizeof(*x));  /*주소를 저장하고 있는 x의 포인터 사이즈 값*/
    printf("sizeof(**x) = %lu\n", sizeof(**x));  /*Integer값을 저장하고 있는 x의 더블형 포인터 사이즈 값*/ /*32비트 머신*/
}