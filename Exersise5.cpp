//#include <iostream>

//using namespace std;
///*ѕользователь вводит с клавиатуры сумму в гривнах и курс доллара, евро и рубл€.
//ѕосчитать, сколько пользователь сможет купить долларов, евро и рублей.
//ѕри этом количество долларов,евро и рублей должно быть целым.
//ƒополнительно вывести на экран сдачу в гривнах.*/
//	
//
//int main() {
//	/*кол во грн*/
//	cout << "print amount in hryvnia:";
//	double amount_hryvnia;	
//	std::cin >> amount_hryvnia;
//	/*курс*/
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
//	//результат	
//	double result1 = amount_hryvnia / USD;
//	int result11 = int(result1);
//
//	double result2 = amount_hryvnia / EUR;
//	int result21 = int(result2);
//	
//	double result3 = amount_hryvnia / RUB;
//	int result31 = int(result3);
//	//вывод
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