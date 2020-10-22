#include <stdio.h>
#include <math.h>

struct equbation
{
	int constant_term; // 상수항
	int linear_term; // 일차항
	int quadratic_term; // 이차항
}eq;

struct answer
{
	int	x1; // 첫번째근
	int x2; // 2번째근
	char error[30]; //근 오류들 
}set;

/*
error 타입들 
*/ 
void getEqubation_1(); // ax+b=0
 
void getEqubation_2();// ax^2+bx+c=0

void getEqubation_3(); // ax^3+bx^2+cx+d=0


int main()
{

}

void getEqubation_1(int a, int b)
{
	if (a==0) {
				
	}
}
