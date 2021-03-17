#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];  /*list[5] �迭 ����*/
    int *plist[5];  /*Integet�� �����͸� ����ִ� plist�� NULL�� �ʱ�ȭ*/

    list[0] = 10;  /*list[0]�� 10�� �־� ��*/
    list[1] = 11;  /*list[1]�� 11�� �־� ��*/

    plist[0] = (int*)malloc(sizeof(int));  /*plist[0]�� malloc�� ���� Integer ������ ��ŭ�� �޸𸮸� heap�������� �޾� �ּҸ� �Ѱ��ִ� ����*/

    printf("[----- ������  2018038088 -----]\n");

    printf("\nlist[0] \t = %d\n", list[0]);  /*list[0]�� ������ �ִ� ��*/
    printf("address of list \t = %p\n", list);  /*list �̸��� �ּ� ��*/
    printf("address of list[0] \t = %p\n", &list[0]); /*list[0]�� �ּ� ��*/
    printf("address of list + 0 \t = %p\n", list+0);  /*list+0�� �ּ� ��(+1�����Ҷ� ���� �ּҰ� Integerũ���� 4bytes��ŭ �̵�)*/
    printf("address of list + 1 \t = %p\n", list+1);  /*list+1�� list+0���� 4bytes��ŭ �̵��� �ּ� ��*/
    printf("address of list + 2 \t = %p\n", list+2);  /*list+2�� list+0���� 8bytes��ŭ �̵��� �ּ� ��*/
    printf("address of list + 3 \t = %p\n", list+3);  /*list+5�� list+0���� 12bytes��ŭ �̵��� �ּ� ��*/
    printf("address of list + 4 \t = %p\n", list+4);  /*list+4�� list+0���� 16bytes��ŭ �̵��� �ּ� ��*/
    printf("address of list[4] \t = %p\n", &list[4]); /*list[4]�� �ּ� ��*/

    free(plist[0]);  /*�Ҵ��� plist[0] �ش��ϴ� �޸� �� ���� ���ִ� ����*/
    
}