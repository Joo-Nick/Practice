#ifndef __POLYNOMIAL_H__
#define __POLYNOMIAL_H__

#include <iostream>
#define MAX_DEGREE	80 // 배열 크기 80으로 설정

using namespace std;

class Polynomial {
private:
	int	degree;				    // 다항식의 최고 차수
	int coef[MAX_DEGREE];    	// 각 항에 대한 계수

public:
	Polynomial(); 
	~Polynomial();
	
	void read();
	void add(Polynomial a, Polynomial b);
	void display();
	
};

#endif
