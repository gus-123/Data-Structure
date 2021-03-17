#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];  /*list[5] 배열 선언*/
    int *plist[5] =  {NULL,};  /*Integet형 포인터를 담고있는 plist를 NULL로 초기화*/

    plist[0] = (int*)malloc(sizeof(int));  /*plist[0]에 malloc을 통해 Integer 사이즈 만큼의 메모리를 heap영역에서 받아 주소를 넘겨주는 역할*/

    list[0] = 1;  /*list[0]에 1을 넣어 줌*/
    list[1] = 100;  /*list[1]에 100을 넣어 줌*/

    *plist[0] = 200; /*plist[0]가 가리키는 곳에 200인 값을 넣어 줌*/

    printf("[----- 김현민  2018038088 -----]\n");

    printf("\nvalue of list[0] = %d\n", list[0]);  /*list[0]이 가지고 있는 값*/
    printf("address of list[0] = %p\n", &list[0]);  /*list[0]의 주소 값*/
    printf("value of list = %p\n", list);  /*list 이름의 주소 값*/
    printf("address of list (&list)= %p\n", &list);  /*list의 주소 값*/  /*17~19라인이 의미하는것이 동일*/

    printf("--------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);  /*list[1]이 가지고 있는 값*/
    printf("address of list[1] = %p\n", &list[1]);  /*list[1]의 주소 값*/
    printf("value of *(list+1) = %d\n", *(list+1));  /*list주소에 1을 더한 주소 값의 역참조 값*/
    printf("address of list+1 = %p\n", list+1); /*list주소에 1을 더한 주소 값, (즉, list 주소에 Integer크기인 4bytes만큼 이동한 곳의 주소 값)*/

    printf("--------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]);  /**plist[0]이 가지고 있는 값*/
    printf("&plist[0] = %p\n", &plist[0]);  /*plist[0]의 주소 값*/
    printf("&plist = %p\n", &plist);  /*plist의 주소 값*/
    printf("plist = %p\n", plist);  /*plist 이름의 주소 값*/
    printf("plist[0] = %p\n", plist[0]);  /*plist[0]이 가지고 있는 값*/
    printf("plist[1] = %p\n", plist[1]);  /*첫 번째 list[0]의 값만 mallc을 통해 받고 나머지는 NULL로 세팅해서 값이 00000000(즉, NULL)로 나옴*/ 
    printf("plist[2] = %p\n", plist[2]);  /*첫 번째 list[0]의 값만 mallc을 통해 받고 나머지는 NULL로 세팅해서 값이 00000000(즉, NULL)로 나옴*/
    printf("plist[3] = %p\n", plist[3]);  /*첫 번째 list[0]의 값만 mallc을 통해 받고 나머지는 NULL로 세팅해서 값이 00000000(즉, NULL)로 나옴*/
    printf("plist[4] = %p\n", plist[4]);  /*첫 번째 list[0]의 값만 mallc을 통해 받고 나머지는 NULL로 세팅해서 값이 00000000(즉, NULL)로 나옴*/

    free(plist[0]);  /*할당한 plist[0] 해당하는 메모리 값 해지 해주는 역할*/
    
}