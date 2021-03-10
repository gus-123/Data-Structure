#include <stdio.h>

int main()
{
    int i;/*�������� i�� ������(int)��������*/
    int *ptr;/*���������͸� ��Ÿ���� ������(int)��������*/
    int **dptr;/*���������͸� ��Ÿ���� ������(int)��������*/
    
    i = 1234;/*i�� �� 1234*/
    
    printf("[----- ������  2018038088 -----] \n");
    
    printf("\n[checking values before ptr= &i] \n");
    printf("value of i== %d\n", i);/*i�� ���� ��Ÿ��*/
    printf("address of i== %p\n", &i);/*i�� �ּҰ��� ��Ÿ��*/
    printf("value of ptr== %p\n", ptr);/*ptr�� ���� ��Ÿ��*/
    printf("address of ptr== %p\n", &ptr);/*ptr�� �ּҰ��� ��Ÿ��*/

    ptr= &i;/* ptris now holding the address of i*/

    printf("\n[checking values after ptr= &i] \n");
    printf("value of i== %d\n", i);/*i�� ���� ��Ÿ��*/
    printf("address of i== %p\n", &i);/*i�� �ּҰ��� ��Ÿ��*/
    printf("value of ptr== %p\n", ptr);/*ptr�� i�� �ּҰ��� ������ �����Ƿ� i�� �ּҰ��� ��Ÿ��*/
    printf("address of ptr== %p\n", &ptr);/*ptr�� �ּҰ��� ��Ÿ��*/
    printf("value of *ptr== %d\n", *ptr);/*ptr�� i�� �ּҰ��� ������ �����Ƿ� i�� ���� ��Ÿ��*/

    dptr = &ptr;/* dptr is now holding the address of ptr */
    
    printf("\n[checking values after dptr= &ptr] \n");
    printf("value of i== %d\n", i);/*dptr�� ptr�� �ּҰ��� ������ ptr�� i�� �ּҰ��� �����Ƿ� i�� ���� ��Ÿ��*/
    printf("address of i== %p\n", &i);/*i�� �ּҰ��� ��Ÿ��*/
    printf("value of ptr== %p\n", ptr);/*ptr�� i�� �ּҰ��� ������ �����Ƿ� i�� �ּҰ��� ��Ÿ��*/
    printf("address of ptr== %p\n", &ptr);/*ptr�� �ּҰ��� ��Ÿ��*/
    printf("value of *ptr== %d\n", *ptr);/*ptr�� i�� �ּҰ��� ������ �����Ƿ� i�� ���� ��Ÿ��*/
    printf("value of dptr== %p\n", dptr);/*dptr�� ptr�� �ּҰ��� ������ �����Ƿ� ptr�� �ּҰ��� ��Ÿ��*/
    printf("address of ptr== %p\n", &dptr);/*dptr�� �ּҰ��� ��Ÿ��*/
    printf("value of *dptr== %p\n", *dptr);/*dptr�� ptr�� �ּҰ��� ������ �ְ� ptr�� i�� �ּҰ��� �����Ƿ� i�� �ּҰ��� ��Ÿ��*/
    printf("value of **dptr== %d\n", **dptr);/*dptr�� ptr�� �ּҰ��� ������ �ְ� ptr�� i�� �ּҰ��� ������ �����Ƿ� i�� ���� ��Ÿ��*/

    *ptr= 7777;/* changing the value of *ptr*/

    printf("\n[after *ptr= 7777] \n");
    printf("value of i== %d\n", i);/*i�� ���� 7777�� �ٲ���� ��Ÿ������*/
    printf("value of *ptr== %d\n", *ptr);/*i�ǰ��� ��Ÿ��*/
    printf("value of **dptr== %d\n", **dptr);/*i�ǰ��� ��Ÿ��*/

    **dptr= 8888;/* changing the value of **dptr*/

    printf("\n[after **dptr= 8888] \n");
    printf("value of i== %d\n", i);/*i�� ���� 8888�� �ٲ���� ��Ÿ������*/
    printf("value of *ptr== %d\n", *ptr);/*i�ǰ��� ��Ÿ��*/
    printf("value of **dptr== %d\n", **dptr);/*i�ǰ��� ��Ÿ��*/
    
    return 0;
}