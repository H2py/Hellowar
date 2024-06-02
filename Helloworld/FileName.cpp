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

	printf("숫자 3개를 입려갷주세요");
	scanf_s("%lf%lf%lf", &x, &y, &z);
	printf("%g와 %g의 평균: %g\n", x, y, get_average(x, y));
	printf("%g와 %g의 평균: %g\n", y, z, get_average(y, z));
	printf("%g와 %g의 평균: %g\n", x, z, get_average(x, z));

	return 0;
}


#include <stdio.h>

void print_count(int number)
{
	printf("T빼기 %d, 세는 중", number);
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
	printf("c언어냐 아니냐, 그것이 문제다\n");

}

int main(void) {
	print_pun();

	return 0;
}

함수의 정의
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
		printf("소수임\n");
	}
	else {
		printf("소수 아님\n");

		
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


1 - 한 학생의 국어 성적, 영어 성적, 수학 성적을 관리하는 배열을 선언하세요.
그리고 초기값으로 국어 성적은 80, 영어 성적은 60, 수학 성적은 90으로 지정하고 각 원소의 값을 출력하세요.

2- 다음의 출력 결과를 예측하시오.

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
3- 세 학생의 국어 성적, 영어 성적, 수학 성적을 관리하는 배열을 선언하세요.
그리고 세 명의 성적을 입력받아 과목별 합계와 평균을 출력하시오.
그리고 학생별로 합계와 평균을 출력하시오.

*/

#include <stdio.h>

