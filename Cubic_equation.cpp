#include <stdio.h>
#include <math.h>
double a, b, c, x1, x2, rute1, rute2, flag=2,demention=2;

/*
변수 설명:
기본적으로 이차방정식의 형태는 ax^2+bx+c=0
a : 이차방정식의 이차항의 계수
b : 이차방정식의 일차항의 계수
c : 이차방정식의 상수항

1차 방정식의 형태는 ax+b=c의 형태
만약에 a가 0일경우에도 flag값은 0으로 설정
*/

x1, x2 : 이차방정식의 유리수 부분
rute1, rute2 : 이차방정식의 정수 부분
flag : 근의 개수 (값을 설정하지 않는 이상 기본적으로 2)

void first_touch()
{
	if (demention!=2) break;
	for (i=2;i<5;i++) {
	if (a%i==0 && b%i==0 && c%i==0) { // a, b, c 의 최대공약수로 나누기
		a/=i;
		b/=i;
		c/=i;
	}
}

void gesan1() // 1차방정식의 계산기
{
	x1=(c-b)/a
}

void gesan2()
double gen1() {
	return pow(b,2)-4*a*c;
	}

double gen2() {
	return	(-1*b+sqrt(pow(b,2)-4*a*c))
	}
	
	

