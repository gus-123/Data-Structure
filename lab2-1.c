#include <stdio.h>

int main()
{
    char charType; /*�������� charType�� ������(char)��������*/
    int integerType; /*�������� integerType�� ������(int)��������*/
    float floatType; /*�������� floatType�̶�� �Ǽ���(float)��������*/
    double doubleType; /*�������� doubleType�̶�� �Ǽ�(double)����������*/

    printf("[----- ������  2018038088 -----]\n");

    printf("\nSize of char: %ld byte\n",sizeof(charType)); /*charType�̶�� ������ ���� ũ��*/
    printf("Size of int: %ld bytes\n",sizeof(integerType)); /*integerType�̶�� ������ ���� ũ��*/
    printf("Size of float: %ld bytes\n",sizeof(floatType)); /*floatType�̶�� ������ ���� ũ��*/
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); /*doubleType�̶�� ������ ���� ũ��*/

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char)); /*charŸ�Կ� ���� ũ��*/
    printf("Size of int: %ld bytes\n",sizeof(int)); /*intŸ�Կ� ���� ũ��*/
    printf("Size of float: %ld bytes\n",sizeof(float)); /*floatŸ�Կ� ���� ũ��*/
    printf("Size of double: %ld bytes\n",sizeof(double)); /*doubleŸ�Կ� ���� ũ��*/

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*)); /*char������Ÿ�Կ� ���� ũ��*/
    printf("Size of int*: %ld bytes\n",sizeof(int*)); /*int������Ÿ�Կ� ���� ũ��*/
    printf("Size of float*: %ld bytes\n",sizeof(float*)); /*float������Ÿ�Կ� ���� ũ��*/
    printf("Size of double*: %ld bytes\n",sizeof(double*)); /*double������Ÿ�Կ� ���� ũ��*/
    
    return 0;
}