#include <iostream>
#include <string>
#include <windows.h>

void SimpleText(void);

int main(int argc, char** argv)
{

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	std::string sex;
	std::string zodiac;
	int zodiac_count{10};
	int age{0};


	std::cout << "Введите пол: ";
	std::cin >> sex;
	std::cout << std::endl;


	std::cout << "Введите знак зодиака: ";
	std::cin >> zodiac;
	std::cout << std::endl;

	std::cout << "Введите знак возраст: ";
	std::cin >> age;
	std::cout << std::endl;

	if (zodiac == "Cancer")
	{
		zodiac_count = 0;
	}
	else if (zodiac == "Scorpio")
	{
		zodiac_count = 1;
	}
	else if (zodiac == "Pisces")
	{
		zodiac_count = 2;
	}
	else if (zodiac == "Taurus")
	{
		zodiac_count = 3;
	}
	else if (zodiac == "Virgo")
	{
		zodiac_count = 4;
	}
	else if (zodiac == "Capricorn")
	{
		zodiac_count = 5;
	}
	else {
		zodiac_count = 6;
	}

	switch (zodiac_count)
	{
		//water
		case(0):
		case(1):
		case(2):
		{
			if ((sex == "m") && (age < 40))
			{
				std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
			}
			else {
				SimpleText();
			}
			break;
		}
		// ground
		case(3):
		case(4):
		case(5):
		{
			if ((sex == "w") && ((age >= 15) && (age <= 30)))
			{
				std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.";
				std::cout << "Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех.";
			}
			else {
				SimpleText();
			}
			break;
		}
		default: {
			SimpleText();
			break;
		}
	}


}


void SimpleText(void) 
{
	std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";
}