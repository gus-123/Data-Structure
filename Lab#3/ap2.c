#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];  /*list[5] 배열 선언*/
    int *plist[5];  /*Integet형 포인터를 담고있는 plist를 NULL로 초기화*/

    list[0] = 10;  /*list[0]에 10을 넣어 줌*/
    list[1] = 11;  /*list[1]에 11을 넣어 줌*/

    plist[0] = (int*)malloc(sizeof(int));  /*plist[0]에 malloc을 통해 Integer 사이즈 만큼의 메모리를 heap영역에서 받아 주소를 넘겨주는 역할*/

    printf("[----- 김현민  2018038088 -----]\n");

    printf("\nlist[0] \t = %d\n", list[0]);  /*list[0]이 가지고 있는 값*/
    printf("address of list \t = %p\n", list);  /*list 이름의 주소 값*/
    printf("address of list[0] \t = %p\n", &list[0]); /*list[0]의 주소 값*/
    printf("address of list + 0 \t = %p\n", list+0);  /*list+0의 주소 값(+1증가할때 마다 주소가 Integer크기인 4bytes만큼 이동)*/
    printf("address of list + 1 \t = %p\n", list+1);  /*list+1은 list+0에서 4bytes만큼 이동한 주소 값*/
    printf("address of list + 2 \t = %p\n", list+2);  /*list+2은 list+0에서 8bytes만큼 이동한 주소 값*/
    printf("address of list + 3 \t = %p\n", list+3);  /*list+5은 list+0에서 12bytes만큼 이동한 주소 값*/
    printf("address of list + 4 \t = %p\n", list+4);  /*list+4은 list+0에서 16bytes만큼 이동한 주소 값*/
    printf("address of list[4] \t = %p\n", &list[4]); /*list[4]의 주소 값*/

    free(plist[0]);  /*할당한 plist[0] 해당하는 메모리 값 해지 해주는 역할*/
    
}