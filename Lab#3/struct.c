#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
}; /*student1 ����ü ����(typedef x)*/

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2; /*student1 ����ü ����(typedef o)*/

int main()
{
    printf("[----- ������  2018038088 -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; /*typedef�� ������ struct��� Ű���带 ������ ����ü��°� �˷��־�� �ǰ� st1�� �ش��ϴ� ���� �־� ��*/

    printf("\nst1.lastName = %c\n", st1.lastName);  /*st1�� lastName�� ��*/
    printf("st1.studentId = %d\n", st1.studentId);  /*st1�� studentId�� ��*/
    printf("st1.grade = %c\n", st1.grade);  /*st1�� grade�� ��*/

    student2 st2 = {'B', 200, 'B'};  /*typedef�� �־ struct��� Ű���带 ���� �ʾƵ� �ǰ� st2�� �ش��ϴ� ���� �־� ��*/

    printf("\nst2.lastName = %c\n", st2.lastName);  /*st2�� lastName�� ��*/
    printf("st2.studentId = %d\n", st2.studentId);  /*st2�� studentId�� ��*/
    printf("st2.grade = %c\n", st2.grade);  /*st2�� grade�� ��*/

    student2 st3;  /*student2Ÿ�Կ� st3�� ����*/

    st3 = st2;  /*st2�� ���� st3�� �����Ͽ� ���� ġȯ ��*/

    printf("\nst3.lastName = %c\n", st3.lastName);  /*st3�� lastName�� ��*/
    printf("st3.studentId = %d\n", st3.studentId);  /*st3�� studentId�� ��*/
    printf("st3.grade = %c\n", st3.grade);  /*st3�� grade�� ��*/

    return 0;

}