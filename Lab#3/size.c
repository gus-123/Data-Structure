#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **x; /*������ ������ x ����*/

    printf("[----- ������  2018038088 -----]\n");

    printf("\nsizeof(x) = %lu\n", sizeof(x));  /*�ּҸ� �����ϰ� �ִ� x�� ������ ��*/
    printf("sizeof(*x) = %lu\n", sizeof(*x));  /*�ּҸ� �����ϰ� �ִ� x�� ������ ������ ��*/
    printf("sizeof(**x) = %lu\n", sizeof(**x));  /*Integer���� �����ϰ� �ִ� x�� ������ ������ ������ ��*/ /*32��Ʈ �ӽ�*/
}