#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Method Declaration */
int** create_matrix(int row, int col);
void print_matrix(int** matrix, int row, int col);
int free_matrix(int** matrix, int row, int col);
int fill_data(int** matrix, int row, int col);
int addition_matrix(int** matrix_a, int** matrix_b, int row, int col);
int subtraction_matrix(int** matrix_a, int** matrix_b, int row, int col);
int transpose_matrix(int** matrix, int** matrix_t, int row, int col);
int multiply_matrix(int** matrix_a, int** matrix_t, int row, int col);

int main() {

	char command;
	printf("[----- [김현민]  [2018038088] -----]\n");

	int row, col;
	srand((unsigned)time(NULL));

	printf("Input row and col : ");
	scanf("%d %d", &row, &col);
	int** matrix_a = create_matrix(row, col);
	int** matrix_b = create_matrix(row, col);
	int** matrix_a_t = create_matrix(col, row);

	printf("Matrix Created.\n");

	if (matrix_a == NULL || matrix_b == NULL) { return -1; }

	do {
		printf("----------------------------------------------------------------\n");
		printf("                     Matrix Manipulation                        \n");
		printf("----------------------------------------------------------------\n");
		printf(" Initialize Matrix   = z           Print Matrix        = p \n");
		printf(" Add Matrix          = a           Subtract Matrix     = s \n");
		printf(" Transpose matrix_a  = t           Multiply Matrix     = m \n");
		printf(" Quit                = q \n");
		printf("----------------------------------------------------------------\n");

		printf("Command = ");
		scanf(" %c", &command);

		switch (command) {
		case 'z': case 'Z':
			fill_data(matrix_a, row, col);
			fill_data(matrix_b, row, col);
			printf("Matrix Initialized\n");
			break;
		case 'p': case 'P':
			printf("Print matrix\n");
			printf("matrix_a\n");
			print_matrix(matrix_a, row, col);
			printf("matrix_b\n");
			print_matrix(matrix_b, row, col);
			break;
		case 'a': case 'A':
			printf("Add two matrices\n");
			addition_matrix(matrix_a, matrix_b, row, col);
			break;
		case 's': case 'S':
			printf("Subtract two matrices \n");
			subtraction_matrix(matrix_a, matrix_b, row, col);
			break;
		case 't': case 'T':
			printf("Transpose matrix_a \n");
			printf("matrix_a\n");
			transpose_matrix(matrix_a, matrix_a_t, row, col);
			print_matrix(matrix_a_t, col, row);
			break;
		case 'm': case 'M':
			printf("Multiply matrix_a with transposed matrix_a \n");
			transpose_matrix(matrix_a, matrix_a_t, row, col);
			multiply_matrix(matrix_a, matrix_a_t, row, col);
			break;
		case 'q': case 'Q':
			printf("Free all matrices..\n");
			free_matrix(matrix_a_t, col, row);
			free_matrix(matrix_a, row, col);
			free_matrix(matrix_b, row, col);
			break;
		default:
			printf("\n       >>>>>   Concentration!!   <<<<<     \n");
			break;
		}

	} while (command != 'q' && command != 'Q');

	return 1;
}

/* create a 2d array whose size is row x col using malloc() */
int** create_matrix(int row, int col){
	if (row <= 0 || col <= 0){
		printf("Check the sizes of row and col!\n");

		return NULL;
	}/*전처리 검사*/

	int **matrix = (int **)malloc(sizeof(int *)*row); /*matrix에 row크기 만큼 동적 메모리 할당*/
	
	for (int i = 0; i < row; i++){
		matrix[i] = (int *)malloc(sizeof(int)*col); /*matrix에 col크기 만큼 동적 메모리 할당*/
	}

	if (matrix == NULL){ /*후처리 검사(메모리 할당이 해제되어 있는 경우 다시 동적 메모리 재할당)*/

		matrix = (int **)realloc(matrix, sizeof(int **)*row); /*matrix에 row크기 만큼 동적 메모리 재할당*/

		for (int i = 0; i < row; i++){
			matrix[i] = (int *)realloc(matrix[i], sizeof(int *)*col); /*matrix에 col크기 만큼 동적 메모리 재할당*/
		}
	}

	for (int i = 0; i < row; i++){ 
		for (int j = 0; j < col; j++){
			matrix[i][j] = 0; /*matrix값을 0으로 초기화*/
		}
	}

	return matrix;
}

/* print matrix whose size is row x col */
void print_matrix(int** matrix, int row, int col){ 
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			printf("%2d  ", matrix[i][j]); /*matrix값을 출력*/
		}
		printf("\n");
	}
}


/* free memory allocated by create_matrix() */
int free_matrix(int** matrix, int row, int col){
	if (matrix == NULL) return -1; /*메모리 할당이 해제되어 있는 경우 비정상 종료*/
	
	for (int i = 0; i < row; i++){
		free(matrix[i]); /*matrix의 row 공간 메모리 할당 해제*/
	}
	free(matrix); /*matrix의 col 공간 메모리 할당 해제*/

	return matrix == NULL ? 1 : -1; /*메모리 할당 해제 성공시 정상종료(1), 실패시 비정상종료(-1) 출력*/
}


/* assign random values to the given matrix */
int fill_data(int** matrix, int row, int col){
	if (matrix == NULL) return -1; /*메모리 할당이 해제되어 있는 경우 비정상 종료*/

	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			matrix[i][j] = rand() % 20; /*matrix값을 랜덤함수로 숫자(1 ~ 20)를 채움*/
		}
	}

	return 1; /*matrix 값이 채워졌을 경우 정상 종료*/
}

/* matrix_sum = matrix_a + matrix_b */
int addition_matrix(int** matrix_a, int** matrix_b, int row, int col){
	if (matrix_a == NULL || matrix_b == NULL) return -1; /*메모리 할당이 해제되어 있는 경우 비정상 종료*/

	int **temp = create_matrix(row, col); /*temp(row*col)생성*/

	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			temp[i][j] = matrix_a[i][j] + matrix_b[i][j]; /*matrix_a와 matrix_t의 더하기의 값을 temp에 추가*/
		}
	}
	print_matrix(temp, row, col);

	return free_matrix(temp, row, col) ? 1 : -1; /*temp 메모리 할당 해제 성공시 정상종료(1), 실패시 비정상종료(-1) 출력*/
}

/* matrix_sub = matrix_a - matrix_b */
int subtraction_matrix(int** matrix_a, int** matrix_b, int row, int col){
	if (matrix_a == NULL || matrix_b == NULL) return -1; /*메모리 할당이 해제되어 있는 경우 비정상 종료*/

	int **temp = create_matrix(row, col); /*temp(row*col)생성*/

	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			temp[i][j] = matrix_a[i][j] - matrix_b[i][j]; /*matrix_a와 matrix_b의 빼기의 값을 temp에 추가*/
		}
	}
	print_matrix(temp, row, col);

	return free_matrix(temp, row, col) ? 1 : -1; /*temp 메모리 할당 해제 성공시 정상종료(1), 실패시 비정상종료(-1) 출력*/
}

/* transpose the matrix to matrix_t */
int transpose_matrix(int** matrix, int** matrix_t, int row, int col){
	if (matrix == NULL || matrix_t == NULL) return -1; /*메모리 할당이 해제되어 있는 경우 비정상 종료*/

	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			matrix_t[j][i] = matrix[i][j]; /*matrix의 col,row를 자리를 변환하여 matrix_t에 값을 추가*/
		}
	}

	return 1; /*전치행렬 된 상태일 경우 정상 종료*/
}

/* matrix_axt - matrix_a x matrix_t */
int multiply_matrix(int** matrix_a, int** matrix_t, int row, int col){
	if (matrix_a == NULL || matrix_t == NULL) return -1; /*메모리 할당이 해제되어 있는 경우 비정상 종료*/

	int **temp = create_matrix(row, row); /*temp(row*row)생성*/
	
	for (int i = 0; i < row; i++){
		for (int j = 0; j < row; j++){
			for (int k = 0; k < col; k++){
				temp[i][j] += matrix_a[i][k] * matrix_t[k][j]; /*matrix_a와 matrix_t의 곱의 값을 temp에 추가*/
			}
		}
	}
	print_matrix(temp, row, row);

	return free_matrix(temp, row, row) ? 1 : -1; /*temp 메모리 할당 해제 성공시 정상종료(1), 실패시 비정상종료(-1) 출력*/
}
