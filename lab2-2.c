#include <stdio.h>

int main()
{
    int i;/*변수명이 i인 정수형(int)변수선언*/
    int *ptr;/*단일포인터를 나타내는 정수형(int)변수선언*/
    int **dptr;/*더블포인터를 나타내는 정수형(int)변수선언*/
    
    i = 1234;/*i의 값 1234*/
    
    printf("[----- 김현민  2018038088 -----] \n");
    
    printf("\n[checking values before ptr= &i] \n");
    printf("value of i== %d\n", i);/*i의 값을 나타냄*/
    printf("address of i== %p\n", &i);/*i의 주소값을 나타냄*/
    printf("value of ptr== %p\n", ptr);/*ptr의 값을 나타냄*/
    printf("address of ptr== %p\n", &ptr);/*ptr의 주소값을 나타냄*/

    ptr= &i;/* ptris now holding the address of i*/

    printf("\n[checking values after ptr= &i] \n");
    printf("value of i== %d\n", i);/*i의 값을 나타냄*/
    printf("address of i== %p\n", &i);/*i의 주소값을 나타냄*/
    printf("value of ptr== %p\n", ptr);/*ptr이 i의 주소값을 가지고 있으므로 i의 주소값을 나타냄*/
    printf("address of ptr== %p\n", &ptr);/*ptr의 주소값을 나타냄*/
    printf("value of *ptr== %d\n", *ptr);/*ptr이 i의 주소값을 가지고 있으므로 i의 값을 나타냄*/

    dptr = &ptr;/* dptr is now holding the address of ptr */
    
    printf("\n[checking values after dptr= &ptr] \n");
    printf("value of i== %d\n", i);/*dptr이 ptr의 주소값을 가지고 ptr은 i의 주소값을 가지므로 i의 값을 나타냄*/
    printf("address of i== %p\n", &i);/*i의 주소값을 나타냄*/
    printf("value of ptr== %p\n", ptr);/*ptr이 i의 주소값을 가지고 있으므로 i의 주소값을 나타냄*/
    printf("address of ptr== %p\n", &ptr);/*ptr의 주소값을 나타냄*/
    printf("value of *ptr== %d\n", *ptr);/*ptr이 i의 주소값을 가지고 있으므로 i의 값을 나타냄*/
    printf("value of dptr== %p\n", dptr);/*dptr이 ptr의 주소값을 가지고 있으므로 ptr의 주소값을 나타냄*/
    printf("address of ptr== %p\n", &dptr);/*dptr의 주소값을 나타냄*/
    printf("value of *dptr== %p\n", *dptr);/*dptr이 ptr의 주소값을 가지고 있고 ptr은 i의 주소값을 가지므로 i의 주소값을 나타냄*/
    printf("value of **dptr== %d\n", **dptr);/*dptr이 ptr의 주소값을 가지고 있고 ptr은 i의 주소값을 가지고 있으므로 i의 값을 나타냄*/

    *ptr= 7777;/* changing the value of *ptr*/

    printf("\n[after *ptr= 7777] \n");
    printf("value of i== %d\n", i);/*i의 값이 7777로 바뀌어져 나타내어짐*/
    printf("value of *ptr== %d\n", *ptr);/*i의값을 나타냄*/
    printf("value of **dptr== %d\n", **dptr);/*i의값을 나타냄*/

    **dptr= 8888;/* changing the value of **dptr*/

    printf("\n[after **dptr= 8888] \n");
    printf("value of i== %d\n", i);/*i의 값이 8888로 바뀌어져 나타내어짐*/
    printf("value of *ptr== %d\n", *ptr);/*i의값을 나타냄*/
    printf("value of **dptr== %d\n", **dptr);/*i의값을 나타냄*/
    
    return 0;
}