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

*/

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