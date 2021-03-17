#include <stdio.h>

struct student{
    char lastName[13]; /*lasrName = 13bytes인데 padding이 일어나 16bytes로 적용*/
    int studentId;   /*Integer = 4bytes*/
    short grade;   /*short = 2bytes인데 padding이 일어나 4bytes로 적용*/
}; /*student1 구조체 선언(typedef x)*/

int main()
{
    struct student pst; /*typedef가 없으면 struct라는 키워드를 명시해 구조체라는걸 알려주어야 되고  student타입에 pst를 선언*/

    printf("[----- 김현민  2018038088 -----]\n");

    printf("\nsize of student = %ld\n", sizeof(struct student));  /*student 구조체의 사이즈 값(padding이 적용되어 원래의 값보다 커짐*/
    printf("size of int = %ld\n", sizeof(int)); /*studentId Integer의 사이즈 값*/
    printf("size of short = %ld\n", sizeof(short));  /*grade Short의 사이즈 값*/

    return 0;

}