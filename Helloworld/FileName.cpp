/*#include <stdio.h>

void print_count(int n)
{
	printf("T minus %d and counting \n", n);
}

int main(void)
{
	int i;

	for (i = 10; i > 0; --i)
		print_count(i);

	return 0;
}


#include <stdio.h>

double get_average(double left, double right)
{
	return (left + right) / 2;
}

int main(void) {
	double x, y, z;

	printf("���� 3���� �Է��c�ּ���");
	scanf_s("%lf%lf%lf", &x, &y, &z);
	printf("%g�� %g�� ���: %g\n", x, y, get_average(x, y));
	printf("%g�� %g�� ���: %g\n", y, z, get_average(y, z));
	printf("%g�� %g�� ���: %g\n", x, z, get_average(x, z));

	return 0;
}


#include <stdio.h>

void print_count(int number)
{
	printf("T���� %d, ���� ��", number);
}

int main(void) {
	int i;
	for (i = 10; i > 0; --i) {
		print_count(i);
	}
	return 0;
}
*/

/*#include <stdio.h>

void print_pun(void)
{
	printf("c���� �ƴϳ�, �װ��� ������\n");

}

int main(void) {
	print_pun();

	return 0;
}

�Լ��� ����
return type function-name (parameters)
{
	declarations
	statements
}



#include <stdbool.h>
#include <stdio.h>

bool is_prime(int number)
{
	int divisor;

		if (number <= 1) {
			return false;
	}

	for (divisor = 2; divisor * divisor <= number; ++divisor) {
		if (number % divisor == 0) {
			return false;
		}
	}
	return true;
}

int main(void) {
	int number;

	printf("Enter a number:");
	scanf_s("%d", &number);

	if (is_prime(number)) {
		printf("�Ҽ���\n");
	}
	else {
		printf("�Ҽ� �ƴ�\n");

		
	}
	return 0;
}



#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
	int divisor;

	if (n <= 1)
		return false;
	for (divisor = 2; divisor * divisor <= n; divisor++)
		if (n % divisor == 0)
			return false;
	return true;
}

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf_s("%d", &n);
	if (is_prime(n))
		printf("Prime\n");
	else
		printf("Not prime\n");
	return 0;
}



#include <stdio.h>

int power_recursive(int number, int exponent)
{
	if (exponent == 0) {
		return 1;
	}
	else {
		return number * power_recursive(number, exponent - 1);
	}
}


1 - �� �л��� ���� ����, ���� ����, ���� ������ �����ϴ� �迭�� �����ϼ���.
�׸��� �ʱⰪ���� ���� ������ 80, ���� ������ 60, ���� ������ 90���� �����ϰ� �� ������ ���� ����ϼ���.

2- ������ ��� ����� �����Ͻÿ�.

#include <stdio.h>
int main()
{
	int arr[10]={1};
	int index = 0;

	for(index = 0; index<10; index++)
	{
		printf("%d\n",arr[index]);
	}
	return 0;
}
3- �� �л��� ���� ����, ���� ����, ���� ������ �����ϴ� �迭�� �����ϼ���.
�׸��� �� ���� ������ �Է¹޾� ���� �հ�� ����� ����Ͻÿ�.
�׸��� �л����� �հ�� ����� ����Ͻÿ�.



#include <stdio.h>
#define MAX_STUDENT 3
enum SubjectType
{
	Korean, English, Math, MAX_SUBJECT
};

int main(void)
{
	int scores[MAX_STUDENT][MAX_SUBJECT];
	const char* titles[MAX_SUBJECT] = { "����", "����", "����" };
	int ni, si;
	int sum;
	for (ni = 0; ni < MAX_STUDENT; ni++)
	{
		printf("%d��° �л� ���� �Է�\n", ni + 1);
		for (si = 0; si < MAX_SUBJECT; si++)
		{
			printf("%s ���� �Է�:", titles[si]);
			scanf_s("%d", score[ni] + si);
		}
	}

	for (ni = 0; ni < MAX_STUDENT; ni++)
	{
		for (sum = 0, si = 0; si < MAX_SUBJECT; si++)
		{
			sum += scores[ni][si];
		}
		printf("%d��° �л� ���� �հ� %d, ���:%.2f\n,", ni + 1, sum, sum / (double)MAX_SUBJECT);
	}

	return 0;
}


#include <stdio.h>
int Add(int a, int b);

int main(void)
{
	int re = 0;
	re = Add(2, 3);
	printf("re:%d\n", re);
}

int Add(int a, int b)
{
	return a + b;
}


#include <stdio.h>

void swap(int a, int b);

int main(void)
{
	int i = 1, j = 2;

	swap(i, j);
	printf("i = %d, j = %d\n", i, j);
	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

	Write a program that asks the user to enter a series of integers (which it sotres in an array), 
	then sorts the integers by calling the function selection
	_sort. When given an array with n elements, selction_sort must do the following:

	1. Search the array to find the largest element, then move it to the last position in the array
	2. Call itself recursively to sort the first n-1 elements of the array


#include <stdio.h>
int main(void) {
	float income, tax;

	printf("input your income: ");
	scanf_s("%f", &income);

	if (income <= 750.00f)
	{
		tax = 0.01f * income;
	}
	else if (income <= 2250.00f)
	{
		tax = 7.50f + (income - 750.00f) * 0.02f;
	}
	else if (income <= 3750.00f)
	{
		tax = 37.50f + (income = 2250.00f) * 0.03f;
	}

	printf("Your tax is .. : %.2f", tax);

	return 0;
}



#include <stdio.h>
#include <math.h>

double polynomial(double x);

int main(void)
{

	double x;
	double reuslt;

	printf("Enter the 'x' valuable :");
	scanf_s("%lf", &x);

	reuslt = polynomial(x);

	printf("The value of the polynomial for x = %.2f is %.2f\n", x, result);

	return 0;
}
	
double polynomial(double x) {
	return 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}



#include <stdio.h>
int main(void)
{
	int digit_count[10] = { 0 };
	int digit;
	long n;

	printf("Enter a number whatever:");
	scanf_s("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		digit_count[digit]++;
		n /= 10;
	}

	printf("Digit:   ");
	for (digit = 0; digit <= 9; digit++)
		printf("%3d", digit);
	printf("\nOccurance");
	for (digit = 0; digit <= 9; digit++)
		printf("%3d", digit_count[digit]);
	printf("\n");

	return 0;
}


#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
	int i, low_rate, num_years, year;
	double value[5];

	printf("Enter interest rate:");
	scanf_s("%d", &low_rate);
	printf("Enter number of years: ");
	scanf_s("%d", &num_years);

	printf("\nYears");
	for (i = 0; i < NUM_RATES; i++) {
		printf("%6d%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	for (year = 1; year <= num_years; year++)
	{
		printf("%3d    ", year);
		for (i = 0; i < NUM_RATES; i++) {
			value[i] += (low_rate + i) / 100.0 * value[i];
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}
	return 0;
}


#include <stdio.h>

int main() {
	int matrix[5][5];
	int rowSums[5] = { 0 };
	int colSums[5] = { 0 };

	// Read the 5x5 array
	for (int i = 0; i < 5; i++) {
		printf("Enter row %d: ", i + 1);
		for (int j = 0; j < 5; j++) {
			scanf_s("%d", &matrix[i][j]);
			rowSums[i] += matrix[i][j]; // Calculate row sum
			colSums[j] += matrix[i][j]; // Calculate column sum
		}
	}

	// Print row sums
	printf("Row totals: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", rowSums[i]);
	}
	printf("\n");

	// Print column sums
	printf("Column totals: ");
	for (int j = 0; j < 5; j++) {
		printf("%d ", colSums[j]);
	}
	printf("\n");

	return 0;
}


#include <stdio.h>

int main(void)
{
	int matrix[5][5];
	int rowSums[5] = { 0 };
	int colSums[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		printf("Enter row %d", i + 1);
		for (int j = 0; j < 5; j++) {
			scanf_s("%d", &matrix[i][j]);
			rowSums[i] += matrix[i][j];
			colSums[j] += matrix[i][j];
		}
	}
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printArray(char array[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%c ", array[i][j]);
		}
		printf("\n");
	}
}

int main() {
	char array[SIZE][SIZE];
	int directions[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
	int x = 0, y = 0, newX, newY, direction, step;
	char letter = 'A';

	// Initialize the array with dots
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			array[i][j] = '.';
		}
	}

	srand(time(NULL));

	array[x][y] = letter++;

	while (letter <= 'Z') {
		// Try to move to a new random direction
		step = 0;
		while (step < 4) {
			direction = rand() % 4;
			newX = x + directions[direction][0];
			newY = y + directions[direction][1];

			if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE && array[newX][newY] == '.') {
				x = newX;
				y = newY;
				array[x][y] = letter++;
				break;
			}
			else {
				step++;
			}
		}

		// If no direction is possible, break the loop
		if (step == 4) {
			break;
		}
	}

	printArray(array);

	return 0;
}




#include <stdio.h>


int main(void)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 5; j > 0; j--) {
			printf(" ");
		}
	}
}

*/

/* ��ȯ�� �Լ��̸� (�Ű�����)

�Լ��� �տ� �����ϴ� ������ : ������ �Ǳ� ���� �Լ��� ����� ���°� �ִٰ� �˷��ִ� ����, main �Լ� �տ� �Լ��� ���¸� '����'�Ѵ�.

�Լ� ������ 4����

1)�Ű����� �ְ�, ��ȯ�� ����
int add(int a, int b){
	int result = a + b;

	return result
}

2)�Ű����� �ְ�, ��ȯ�� ����
void reuslt(int num)
{
	printf("���� ��� : %d\n", num);
}


#include <stdio.h>
#include <stdbool.h>
 External varialbes
int contents[STACK_SIZE];
int top = 0;

void make_empty(void) {
	top = 0;
}
bool is_empty(void) {
	return top == 0;
}
bool is_full(void)
{
	return top == STACK_SIZE;
}
void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		contetns[top++] = i;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER (100)

int g_secret_number;

void initialize_number_generaor(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main(void)
{
	char command = '\0';
	initialize_number_generaor();
	do {
		choose_new_secret_number();
		printf("��ǻ�Ͱ� ������ �����߽��ϴ�. ���纸����\n");
		read_guesses();
		printf("�� �� ��? (Y/N)");
		printf("\n");
	} while (command == 'y' || command == 'Y');

	return 0;
}

void initalize_number_genrator(void)
{
	srand((unsigned)time(NULL));
}

void choose_new_secret_number(void)
{
	return rand() % MAX_NUMBER + 1;
}

void read_guesses(int secret_number)
{
	int guess = 0;
	int num_guesses = 0;

	for (;;) {
		++num_guesses;
		printf("������?");
		scanf_s("%d", &guess);

		if (guess == secret_number) {
			printf("%d��° �õ� ���� ���߼̳׿�\n\n", num_guesses);
			return;
		}
		else if (guess < secret_number) {
			printf("�ʹ� �۳׿� �ٽ� �غ�\n");
		}
		else {
			printf("�ʹ� ũ�׿� �ٽ� ����\n");
		}
	}
}


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS (13)
#define NUM_SUITS (4)
#define NUME_CARDS (5)

int g_num_in_rank[NUM_RANKS] = { 0, };
int g_num_in_suit[NUM_SUITS] = { 0, };
bool g_is_straight = false;
bool g_is_flush = false;
bool g_is_four = false;
bool g_is_three = false;
int g_pairs = 0;

void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
	for (;;) {
		read_cards();
		analyze_hand();
		print_result();
	}
}

void read_cards(void)
{
	bool does_card_exists[NUM_RANKS][NUM_SUITS];
	char ch = '\0';
	char rank_ch = '\0';
	char suit_ch = '\0';
	int rank = 0;
	int suit = 0;
	bool is_bad_card = false;
	int cards_read = 0;

	for (rank = 0; rank < NUM_RANKS; ++rank) {
		g_num_in_rank[rank] = 0;
		for (suit = 0; suit < NUM_SUITS; ++suit) {
			does_card_exists[rank][suit] = false;
		}
	}

	for (suit = 0; suit < NUM_SUITS; ++suit) {
		g_num_in_suit[suit] = 0;
	}

	while (cards_read < NUME_CARDS)
	{
		is_bad_card = false;

		rank_ch = getchar();
		switch (rank_ch)
		{
		case '0':
			exit(EXIT_SUCCESS);
		case '2':
			rank = 0;
			break;
		case '3':
			rank = 1;
			break;
		case '4':
			rank = 2;
			break;
		case '5':
			rank = 3;
			break;
		case '6':
			rank = 4;
			break;
		case '7':
			rank = 5;
			break;
		case '8':
			rank = 6;
			break;
		case '9':
			rank = 7;
			break;
		case 't':
			
		case 'T':
			rank = 8;
			break;
		case 'j':
			/* intentional fallthrough 
		case 'J':
			rank = 9;
			break;
		case 'q':
			/* intentional fallthrough 
		case 'Q':
			rank = 10;
			break;
		case 'k':
			/* intentional fallthrough 
		case 'K':
			rank = 11;
			break;
		case 'a':
			/* intentional fallthrough 
		case 'A':
			rank = 12;
			break;
		default:
			is_bad_card = true;
			break;
		}
		suit_ch = getchar();
		switch (suit_ch) {
		case 'c':
			/* intentional fallthrough 
		case 'C':
			suit = 0;
			break;
		case 'd':
			/* intentional fallthrough
		case 'D':
			suit = 1;
			break;
		case 'h':
			/* intentional fallthrough 
		case 'H':
			suit = 2;
			break;
		case 's':
			/* intentional fallthrough 
		case 'S':
			suit = 3;
			break;
		default:
			is_bad_card = true;
			break;
		}

		while ((ch = getchar()) != '\n') {
			if (ch != ' ') {
				is_bad_card = true;
			}
		}

		if (is_bad_card) {
			printf("��ȿ���� ���� ī���Դϴ�; �ٽ� �Է����ּ���.\n");
		}
		else if (card_exists[rank][suit]) {
			printf("�̹� �����ϴ� ī���Դϴ�; �ٽ� �Է����ּ���.\n");
		}
		else {
			++g_num_in_rank[rank];
			++g_num_in_suit[suit];
			does_card_exists[rank][suit] = true;
			++cards_read;
		}
	}
}

void analyze_hand(void)
{
	int num_consec = 0;
	int rank = 0;
	int suit = 0;
	g_is_straight = false;
	g_is_flush = false;
	g_is_four = false;
	g_is_three = false;
	g_pairs = 0;

	/* �÷������� Ȯ�� 
	for (suit = 0; suit < NUM_SUITS; ++suit) {
		if (g_num_in_suit[suit] == NUM_CARDS) {
			g_is_flush = true;
		}
	}

	/* ��Ʈ����Ʈ���� Ȯ�� 
	rank = 0;
	while (g_num_in_rank[rank] == 0) {
		++rank;
	}

	for (; rank < NUM_RANKS && g_num_in_rank[rank] > 0; ++rank) {
		++num_consec;
	}

	if (num_consec == NUM_CARDS) {
		g_is_straight = true;
		return;
	}

	/* ��ī��/����ī�� ���ο� ����� ������ Ȯ��
	for (rank = 0; rank < NUM_RANKS; ++rank) {
		if (g_num_in_rank[rank] == 4) {
			g_is_four = true;
		}

		if (g_num_in_rank[rank] == 3) {
			g_is_three = true;
		}

		if (g_num_in_rank[rank] == 2) {
			++g_pairs;
		}
	}
}

void print_result(void)
{
	if (g_is_straight && g_is_flush) {
		printf("��Ʈ����Ʈ �÷���");
	}
	else if (g_is_four) {
		printf("��ī��");
	}
	else if (g_is_three && g_pairs == 1) {
		printf("Ǯ�Ͽ콺");
	}
	else if (g_is_flush) {
		printf("�÷���");
	}
	else if (g_is_straight) {
		printf("��Ʈ����Ʈ");
	}
	else if (g_is_three) {
		printf("����ī��");
	}
	else if (g_pairs == 2) {
		printf("�����");
	}
	else if (g_pairs == 1) {
		printf("�����");
	}
	else {
		printf("����ī��");
	}

	printf("\n\n");
}


#include <stdio.h>

#define ARRAY_SIZE 10

void get_max_min(int arr[], int size, int* out_max, int* out_min);

int main(void)
{
	int int_arr[ARRAY_SIZE] = { 0, };
	int i = 0;
	int big = 0;
	int small = 0;

	printf("���� %d���� �Է��ϼ���:", ARRAY_SIZE);
	for (i = 0; i < ARRAY_SIZE; ++i) {
		scanf_s("%d", &int_arr[i]);
	}

	get_max_min(int_arr, ARRAY_SIZE, &big, &small);

	printf("�ִ밪: %d\n", big);
	printf("Min: %d\n", small);

	return 0;
}

void get_max_min(int arr[], int size, int* out_max, int* out_min)
{
	*out_max = *out_min = arr[0];
	for (int i = 0; i < size; ++i) {
		if (*out_max < arr[i]) {
			*out_max = arr[i];
		}
		else if (arr[i] < *out_min) {
			*out_min = arr[i];
		}
	}
}

Pointer is good

# include <stdio.h>

#define N 10

int main(void)
{
	int a[N], * p;

	printf("Enter %d numbers: ", N);
	for (p = a; p < a + N; p++)
		scanf_s("%d", p);

	printf("In reverse order:");
	for (p = a + N - 1; p >= a; p--)
		printf(" %d", *p);
	printf("\n");

	return 0;
}


#include <stdio.h>

void swap(int a, int b);
void swap_addr(int* a, int* b);

int main(void)
{
	int a = 10;
	int b = 20;
	printf("a�� �ּҴ� : %d\n", &a);
	printf("b�� �ּҴ� : %d\n", &b);

	printf("swap �Լ� �� a : %d, b : %d\n", a, b);
	swap(a, b);
	printf("swap �Լ� �� a : %d, b : %d\n", a, b);

	printf("(�ּҰ� ����)swap �Լ� �� a : %d, b : %d\n", a, b);
	swap_addr(&a, &b);
	printf("(�ּҰ� ����)swap �Լ� �� a : %d, b : %d\n", a, b);
	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;


}

void swap_addr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
*/