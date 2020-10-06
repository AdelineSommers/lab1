#pragma hdrstop
#include <iomanip>
#include <conio.h>
#include "bitfield.h"
#include "set.h"


int main(int argc, char* argv[]) {
	int n, m, k, count;
	setlocale(LC_ALL, "Russian");
	std::cout << "������������ �������� ��������� ������� ���������" << std::endl;
	std::cout << "������ ����������" << std::endl;
	std::cout << "������� ������� ������� ����� �������� - ";
	std::cin >> n;
	TSet s(n + 1);
	for (m = 2; m <= n; m++) s.InsElem(m);
	for (m = 2; m * m <= n; m++)
		if (s.IsMember(m))
			for (k = 2 * m; k <= n; k += m)
				if (s.IsMember(k)) s.DelElem(k);
	std::cout << "������ ������� �����" << std::endl;
	count = 0; k = 1;
	for (m = 2; m <= n; m++)
		if (s.IsMember(m)) {
			count++;
			std::cout << TSet(3) << m << " ";
			if (k++ % 10 == 0) std::cout << std::endl;
		}
	std::cout << std::endl;
	std::cout << "� ������ " << n << " ������ " << count << " �������" << std::endl;
	_getch();
	return 0;
}