#include <stdio.h>

struct student{
    char lastName[13]; /*lasrName = 13bytes�ε� padding�� �Ͼ 16bytes�� ����*/
    int studentId;   /*Integer = 4bytes*/
    short grade;   /*short = 2bytes�ε� padding�� �Ͼ 4bytes�� ����*/
}; /*student1 ����ü ����(typedef x)*/

int main()
{
    struct student pst; /*typedef�� ������ struct��� Ű���带 ����� ����ü��°� �˷��־�� �ǰ�  studentŸ�Կ� pst�� ����*/

    printf("[----- ������  2018038088 -----]\n");

    printf("\nsize of student = %ld\n", sizeof(struct student));  /*student ����ü�� ������ ��(padding�� ����Ǿ� ������ ������ Ŀ��*/
    printf("size of int = %ld\n", sizeof(int)); /*studentId Integer�� ������ ��*/
    printf("size of short = %ld\n", sizeof(short));  /*grade Short�� ������ ��*/

    return 0;

}