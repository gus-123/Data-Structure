#include <stdio.h>

int main()
{
    char charType; /*변수명이 charType인 문자형(char)변수선언*/
    int integerType; /*변수명이 integerType인 정수형(int)변수선언*/
    float floatType; /*변수명이 floatType이라는 실수형(float)변수선언*/
    double doubleType; /*변수명이 doubleType이라는 실수(double)형변수선언*/

    printf("[----- 김현민  2018038088 -----]\n");

    printf("\nSize of char: %ld byte\n",sizeof(charType)); /*charType이라는 변수명에 대한 크기*/
    printf("Size of int: %ld bytes\n",sizeof(integerType)); /*integerType이라는 변수명에 대한 크기*/
    printf("Size of float: %ld bytes\n",sizeof(floatType)); /*floatType이라는 변수명에 대한 크기*/
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); /*doubleType이라는 변수명에 대한 크기*/

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char)); /*char타입에 대한 크기*/
    printf("Size of int: %ld bytes\n",sizeof(int)); /*int타입에 대한 크기*/
    printf("Size of float: %ld bytes\n",sizeof(float)); /*float타입에 대한 크기*/
    printf("Size of double: %ld bytes\n",sizeof(double)); /*double타입에 대한 크기*/

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*)); /*char포인터타입에 대한 크기*/
    printf("Size of int*: %ld bytes\n",sizeof(int*)); /*int포인터타입에 대한 크기*/
    printf("Size of float*: %ld bytes\n",sizeof(float*)); /*float포인터타입에 대한 크기*/
    printf("Size of double*: %ld bytes\n",sizeof(double*)); /*double포인터타입에 대한 크기*/
    
    return 0;
}