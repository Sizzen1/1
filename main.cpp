#include <iostream>
#include <iomanip>
int main()
{ 
	setlocale(LC_ALL, "RUS");
	std::cout << "1. ���������� � ����� ���������������� C++ - ��� ����������� ������ ������ ����������." << std::endl; 
    std::cout << "2-5. �������������: \n"
		<<" I)  int� ������������ ����� �������� �����. � ����������� �� ����������� ���������� ����� �������� 2 ����� (16 ���) ��� 4 ����� (32 ����). �������� ���������� �������� �������������� ����� ����� ������������� �� �32768 �� 32767 (��� 2 ������) ��� �� ?2 147 483 648 �� 2 147 483 647 (��� 4 ������)..\n"
		<<" II) short� ������������ ����� �������� ����� � ��������� �� 0 �� 65535. �������� � ������ 2 ����� (16 ���). \n"
		<<" III) long- � ����������� �� ����������� ����� �������� 4 ��� 8 ���� � ������������ ����� ����� � ��������� �� ?2 147 483 648 �� 2 147 483 647 (��� 4 ������) ��� �� ?9 223 372 036 854 775 808 �� +9 223 372 036 854 775 807 (��� 8 ������). \n"
		<<" IV) long long- ������������ ����� ����� � ��������� �� ?9 223 372 036 854 775 808 �� +9 223 372 036 854 775 807. �������� � ������ 8 ���� (64 ����). \n"
		<<" 	������ �������������: \n" 
		<<" 	int a = 10; \n"
		<<"		long b = 20; \n"
		<<" 	short c = 30; \n"
		<<" 	long long d = 40; \n"
		<<" ������������: \n" 
		<<" I)  float� ������������ ������������ ����� ��������� �������� � ��������� ������ � ��������� -3.4E-38 �� 3.4E+38. � ������ �������� 4 ����� (32 ����). \n" 
		<<" II) double� ������������ ������������ ����� ������� �������� � ��������� ������ � ��������� -1.7E-308 �� 1.7E+308. � ������ �������� 8 ���� (64 ����). \n"
		<<" ������ �������������: \n"
		<<" float a = 10.5; \n"
		<<" double b = 20.5; \n"
		<<" ����������: \n"
		<<" I)  bool� ���������� ���. ����� ��������� ���� �� ���� ��������: true (������) � false (����). \n"
		<<" ������ �������������: \n"
		<<" bool a = true; \n"
		<<" bool b = false; \n"
		<<" ����������: \n"
		<<" I)  char � ������������ ���� ������ � ��������� ASCII. �������� � ������ 1 ���� (8 ���). ����� ������� ����� �������� �� ��������� �� -128 �� 127, ���� �� 0 �� 255 \n"
		<<" ������ �������������: \n"
		<<" char a = 'A'; \n"
		<<" char b = 'B'; " << std::endl;
	std::cout << "������ ���������� �������������� �������� � ������ ����� ������. \n"
			<<" �������������: " << std::endl; 

	// ЦЕЛОЧИСЛЕННЫЙ ТИП		
	int a {10}; 
	int b {7}; 
	int c = a + b;
	int d = 4 + b; 
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	char q = 1;
	char w = 2;
	char s=q+w;
	std::cout << (int)s << std::endl;
	// int(s)-приведение из char в int

	short n=60000;
	std::cout << n << std::endl;

	long long u=70'000'000'000;
	std::cout << u << std::endl;



	// СИМВОЛЬНЫЙ ТИП
	char f=33;
	std::cout << f << std::endl;



	// ВЕЩЕСТВЕННЫЙ ТИП
	float v1=4.4;
	float v2=0.0001;
	std::cout << v1-v2 << std::endl;

	float g1=20/3;
	std::cout << g1 << std::endl;
	float g2=13/3.0f;
	std::cout << g2 << std::endl;
	std::cout << std::setprecision(10) << g2 << std::endl;
	double gg=13/3.0;
	std::cout << std::setprecision(20) << gg << std::endl;



	// ЛОГИЧЕСКИЙ ТИП
	bool l1=false;
	bool l2=true;
	std::cout << l1 << std::endl;
	std::cout << l2 << std::endl; 



	// АРИФМЕТИЧЕСКИЕ ОПЕРАЦИИ
	//   +, -, *, /, %, +=, -=, ++, -- 
	//   pow (степень), sqrt, sin, cos, tan, atan  
	const double pi = acos(-1);
	//int sum += 10;
	//std::cout << sum << std::endl;

	int numsSum; // lower camel case - переменные
	int NumSum; // upper camel case - функции


}

 


