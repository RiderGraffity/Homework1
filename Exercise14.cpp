//#include <iostream>
//using namespace std;
//////14
////Пользователь вводит с клавиатуры объем одного фильма в гигабайтах.
////Посчитать, сколько дискет понадобится для переноса фильма на другой компьютер(размер дискеты считать равным 1.44 Мбайт).
//
//int main() {
//	std::cout << "pls write the volume of one movie in gigabytes:";
//	double volume;
//	std::cin >> volume;
//	volume *= 1000;
//	int result;
//	if (typeid(volume / 1.44) == typeid(double)) {
//		result = (volume / 1.44) + 1;
//		std::cout << "value of discet:" << result << std::endl;
//	}
//	else {
//		std::cout << "value of discet:" << volume / 1.44 << std::endl;
//	}
//}