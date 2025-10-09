#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");

	std::string previous = " ";
	std::string current;

	
	int a;
	std::cin >> a;
	if (a == 1) {
		std::cout << "Сейчас лето одевайтесь легко" << std::endl;
	}
	else if(a == 2) {
		std::cout << "Сейчас осень одевайтесь теплее и возьмите зонт"<<std::endl;
	}
	else if (a == 3) {
		std::cout << "Сейчас зима одевайтесь очень тепло" << std::endl;
	}
	else if (a == 4) {
		std::cout << "Сейчас весна одевайтесь тепло и возьмите зонт" << std::endl;
	}
	else {
		std::cout << "Неверно" << std::endl;
	}






}
