#include <stdio.h>

void print1 (int *ptr,int rows);

int main()
{
    int one[] = {0, 1, 2, 3, 4};  /*one �迭 ����*/

    printf("[----- ������  2018038088 -----]\n");

    printf("\none = %p\n", one);  /*one �迭 �̸��� �ּ� ��*/
    printf("&one = %p\n", &one);  /*one �迭�� �ּ� ��*/
    printf("&one[0] = %p\n", &one[0]);  /*one[0]�� �ּ� ��*/
    printf("\n");

    print1(&one[0], 5);

    return 0;

}

void print1 (int *ptr, int rows)
{
    int i; /*������ ���� i ����*/
    printf("Address \t Contents\n");
    for(i=0; i<rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));  /*one�迭�� �� 0,1,2,3,�� ���� �ּҰ� Integer�迭�̿��� 4bytes��ŭ �̵��ϴ� �� ������*/
    printf("\n");
}
