#include <stdio.h>

#define MAX_SIZE 100  /*�ִ� input�� ����� 100���� ����*/

float sum(float list [], int);  /*�Ǽ��� ���� sum(float list [], int) ����*/
float input[MAX_SIZE], answer;  /*�Ǽ��� ���� input[MAX_SIZE], answer ����*/
int i;  /*������ ���� i ����*/

void main(void)
{
    printf("[----- ������  2018038088 -----]\n");

    for(i=0; i<MAX_SIZE; i++)  
        input[i] =i;
    
    printf("\naddress of input = %p\n", input);  /*input �迭�� �ּ� ��*/

    answer = sum(input, MAX_SIZE);
    printf("The sum is : %f\n", answer);  
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list);  /*sum�� call �Ǿ����� ��� �ִ� input�� �ּҸ� ������ list�� ��*/
    printf("address of list = %p\n\n", &list);  /*list�� �ּ� ��*/

    int i;  /*������ ���� i ����*/
    float tempsum = 0;  /*�Ǽ��� ���� tempsum�� 0���� ����*/

    for(i=0; i<n; i++)
        tempsum += list[i];
    
    return tempsum;

}