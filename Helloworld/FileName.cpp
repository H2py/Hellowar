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

*/