#include <stdio.h>

void print1 (int *ptr,int rows);

int main()
{
    int one[] = {0, 1, 2, 3, 4};  /*one 배열 선언*/

    printf("[----- 김현민  2018038088 -----]\n");

    printf("\none = %p\n", one);  /*one 배열 이름의 주소 값*/
    printf("&one = %p\n", &one);  /*one 배열의 주소 값*/
    printf("&one[0] = %p\n", &one[0]);  /*one[0]의 주소 값*/
    printf("\n");

    print1(&one[0], 5);

    return 0;

}

void print1 (int *ptr, int rows)
{
    int i; /*정수형 변수 i 선언*/
    printf("Address \t Contents\n");
    for(i=0; i<rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));  /*one배열의 값 0,1,2,3,에 들어가는 주소가 Integer배열이여서 4bytes만큼 이동하는 걸 보여줌*/
    printf("\n");
}
