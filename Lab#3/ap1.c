#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];  /*list[5] �迭 ����*/
    int *plist[5] =  {NULL,};  /*Integet�� �����͸� ����ִ� plist�� NULL�� �ʱ�ȭ*/

    plist[0] = (int*)malloc(sizeof(int));  /*plist[0]�� malloc�� ���� Integer ������ ��ŭ�� �޸𸮸� heap�������� �޾� �ּҸ� �Ѱ��ִ� ����*/

    list[0] = 1;  /*list[0]�� 1�� �־� ��*/
    list[1] = 100;  /*list[1]�� 100�� �־� ��*/

    *plist[0] = 200; /*plist[0]�� ����Ű�� ���� 200�� ���� �־� ��*/

    printf("[----- ������  2018038088 -----]\n");

    printf("\nvalue of list[0] = %d\n", list[0]);  /*list[0]�� ������ �ִ� ��*/
    printf("address of list[0] = %p\n", &list[0]);  /*list[0]�� �ּ� ��*/
    printf("value of list = %p\n", list);  /*list �̸��� �ּ� ��*/
    printf("address of list (&list)= %p\n", &list);  /*list�� �ּ� ��*/  /*17~19������ �ǹ��ϴ°��� ����*/

    printf("--------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);  /*list[1]�� ������ �ִ� ��*/
    printf("address of list[1] = %p\n", &list[1]);  /*list[1]�� �ּ� ��*/
    printf("value of *(list+1) = %d\n", *(list+1));  /*list�ּҿ� 1�� ���� �ּ� ���� ������ ��*/
    printf("address of list+1 = %p\n", list+1); /*list�ּҿ� 1�� ���� �ּ� ��, (��, list �ּҿ� Integerũ���� 4bytes��ŭ �̵��� ���� �ּ� ��)*/

    printf("--------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]);  /**plist[0]�� ������ �ִ� ��*/
    printf("&plist[0] = %p\n", &plist[0]);  /*plist[0]�� �ּ� ��*/
    printf("&plist = %p\n", &plist);  /*plist�� �ּ� ��*/
    printf("plist = %p\n", plist);  /*plist �̸��� �ּ� ��*/
    printf("plist[0] = %p\n", plist[0]);  /*plist[0]�� ������ �ִ� ��*/
    printf("plist[1] = %p\n", plist[1]);  /*ù ��° list[0]�� ���� mallc�� ���� �ް� �������� NULL�� �����ؼ� ���� 00000000(��, NULL)�� ����*/ 
    printf("plist[2] = %p\n", plist[2]);  /*ù ��° list[0]�� ���� mallc�� ���� �ް� �������� NULL�� �����ؼ� ���� 00000000(��, NULL)�� ����*/
    printf("plist[3] = %p\n", plist[3]);  /*ù ��° list[0]�� ���� mallc�� ���� �ް� �������� NULL�� �����ؼ� ���� 00000000(��, NULL)�� ����*/
    printf("plist[4] = %p\n", plist[4]);  /*ù ��° list[0]�� ���� mallc�� ���� �ް� �������� NULL�� �����ؼ� ���� 00000000(��, NULL)�� ����*/

    free(plist[0]);  /*�Ҵ��� plist[0] �ش��ϴ� �޸� �� ���� ���ִ� ����*/
    
}