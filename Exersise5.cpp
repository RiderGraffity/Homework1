//#include <iostream>

//using namespace std;
///*������������ ������ � ���������� ����� � ������� � ���� �������, ���� � �����.
//���������, ������� ������������ ������ ������ ��������, ���� � ������.
//��� ���� ���������� ��������,���� � ������ ������ ���� �����.
//������������� ������� �� ����� ����� � �������.*/
//	
//
//int main() {
//	/*��� �� ���*/
//	cout << "print amount in hryvnia:";
//	double amount_hryvnia;	
//	std::cin >> amount_hryvnia;
//	/*����*/
//	cout << "print UAH/USD exchange rate:";
//	double USD;
//	std::cin >> USD;
//
//	cout << "print UAH/EUR exchange rate:";
//	double EUR;
//		std::cin >> EUR	;
//
//	cout << "print UAH/RUB exchange rate:";
//	double RUB;
//	std::cin >> RUB;
//	//���������	
//	double result1 = amount_hryvnia / USD;
//	int result11 = int(result1);
//
//	double result2 = amount_hryvnia / EUR;
//	int result21 = int(result2);
//	
//	double result3 = amount_hryvnia / RUB;
//	int result31 = int(result3);
//	//�����
//	std::cout << "on " << amount_hryvnia << " you can by: " << std::endl;
//	std::cout << result11 << "USD" << std::endl;
//	std::cout << "change:" << (result1 - result11) * USD <<" USH" << std::endl;
//	std::cout<<"---------------------------------------------------------"<<std::endl;
//
//	std::cout << (int)result2 << "EUR" << std::endl;
//	std::cout << "change:" << (result2 - result21) * EUR <<" USH" << std::endl;
//	std::cout << "--------------------------------------------------------" << std::endl;
//
//	std::cout << (int)result3 << "RUB" << std::endl;
//	std::cout << "change:" << (result3 - result31) * RUB <<" USH" << std::endl;
//
//}