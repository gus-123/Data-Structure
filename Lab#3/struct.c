#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
}; /*student1 구조체 선언(typedef x)*/

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2; /*student1 구조체 선언(typedef o)*/

int main()
{
    printf("[----- 김현민  2018038088 -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; /*typedef가 없으면 struct라는 키워드를 명시해 구조체라는걸 알려주어야 되고 st1에 해당하는 값을 넣어 줌*/

    printf("\nst1.lastName = %c\n", st1.lastName);  /*st1의 lastName의 값*/
    printf("st1.studentId = %d\n", st1.studentId);  /*st1의 studentId의 값*/
    printf("st1.grade = %c\n", st1.grade);  /*st1의 grade의 값*/

    student2 st2 = {'B', 200, 'B'};  /*typedef가 있어서 struct라는 키워드를 적지 않아도 되고 st2에 해당하는 값을 넣어 줌*/

    printf("\nst2.lastName = %c\n", st2.lastName);  /*st2의 lastName의 값*/
    printf("st2.studentId = %d\n", st2.studentId);  /*st2의 studentId의 값*/
    printf("st2.grade = %c\n", st2.grade);  /*st2의 grade의 값*/

    student2 st3;  /*student2타입에 st3를 선언*/

    st3 = st2;  /*st2의 값을 st3에 대입하여 구조 치환 함*/

    printf("\nst3.lastName = %c\n", st3.lastName);  /*st3의 lastName의 값*/
    printf("st3.studentId = %d\n", st3.studentId);  /*st3의 studentId의 값*/
    printf("st3.grade = %c\n", st3.grade);  /*st3의 grade의 값*/

    return 0;

}