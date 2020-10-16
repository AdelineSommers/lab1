#pragma hdrstop
#include <iomanip>
#include <conio.h>
#include "bitfield.h"
#include "set.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char* argv[]) {
	int n, m, k, count;
	setlocale(LC_ALL, "Russian");
	std::cout << "Тестирование программ поддержки понятия множества" << std::endl;
	std::cout << "Решето Эратосфена" << std::endl;
	std::cout << "Введите верхнюю границу целых значений - ";
	std::cin >> n;
	TSet s(n + 1);
	for (m = 2; m <= n; m++) s.InsElem(m);
	for (m = 2; m * m <= n; m++)
		if (s.IsMember(m))
			for (k = 2 * m; k <= n; k += m)
				if (s.IsMember(k)) s.DelElem(k);
	std::cout << "Печать простых чисел" << std::endl;
	count = 0; k = 1;
	for (m = 2; m <= n; m++)
		if (s.IsMember(m)) {
			count++;
			std::cout << TSet(m) << m << " ";
			if (k++ % 10 == 0) std::cout << std::endl;
		}
	std::cout << std::endl;
	std::cout << "В первых " << n << " числах " << count << " простых" << std::endl;
	




	std::cout << std::endl;
	srand(time(NULL));
	int b, c, d, i, a;
	a = 4;
	b = 4;
	c = 4;
	d = 4;
	int del = 5;
	count = 0;
	TSet s1(a + 1);
	TSet s2(b + 1);
	TSet s3(c + 1);
	TSet s4(d + 1);
	for (i = 0; i <= a; i++) {
		int k = rand() % del;
		s1.InsElem(k);
		k = rand() % del;
		s2.InsElem(k);
		k = rand() % del;
		s3.InsElem(k);
		 k = rand() % del;
		s4.InsElem(k);
	}
	std::cout << "Числа в первом множестве: " << std::endl;
	for (i = 0; i<= del; i++)
		if (s1.IsMember(i)) {
			std::cout << TSet(i) << i << " ";
		}std::cout << std::endl;
	std::cout << "Числа во втором множестве: " << std::endl;
	for (i = 0; i <= del; i++)
		if (s2.IsMember(i)) {
			std::cout << TSet(i) << i << " ";
		}std::cout << std::endl;
	std::cout << "Числа в третьем множестве: " << std::endl;
	for (i = 0; i <= del; i++)
		if (s3.IsMember(i)) {
			std::cout << TSet(i) << i << " ";
		}std::cout << std::endl;
	std::cout << "Числа в четвертом множестве: " << std::endl;
	for (i = 0; i <= del; i++)
		if (s4.IsMember(i)) {
			std::cout << TSet(i) << i << " ";
		}std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Общие числа: " << std::endl;
	for (i = 0; i <= del; i++)
		if ((s1.IsMember(i)) && (s2.IsMember(i)) && (s3.IsMember(i)) && (s4.IsMember(i))) {
			count++;
			std::cout << TSet(i) << i << " ";

		}std::cout << std::endl;
		
	std::cout << "Количество общих чисел: "  << count << std::endl;
	_getch();
	return 0;
	}

