#include <stdio.h>

#define MAX_SIZE 100  /*최대 input의 사이즈를 100으로 지정*/

float sum(float list [], int);  /*실수형 변수 sum(float list [], int) 선언*/
float input[MAX_SIZE], answer;  /*실수형 변수 input[MAX_SIZE], answer 선언*/
int i;  /*정수형 변수 i 선언*/

void main(void)
{
    printf("[----- 김현민  2018038088 -----]\n");

    for(i=0; i<MAX_SIZE; i++)  
        input[i] =i;
    
    printf("\naddress of input = %p\n", input);  /*input 배열의 주소 값*/

    answer = sum(input, MAX_SIZE);
    printf("The sum is : %f\n", answer);  
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list);  /*sum이 call 되었을때 담고 있는 input의 주소를 가지는 list의 값*/
    printf("address of list = %p\n\n", &list);  /*list의 주소 값*/

    int i;  /*정수형 변수 i 선언*/
    float tempsum = 0;  /*실수형 변수 tempsum을 0으로 선언*/

    for(i=0; i<n; i++)
        tempsum += list[i];
    
    return tempsum;

}