#include <iostream>



namespace faqtr {
	int factorial(int n) {
		if (n <= 1) {
			return 1;
		}
		else {
			return n * factorial(n - 1);
		}
	}
	int Get(int n) {
		return factorial(n);
	}
}


bool Check_num(int number) {

	for (int i = number; i != 1; --i) {
		if (number % i == 0 && i != number && i != 1) {
			return false;
		}
	}
	return true;

}

int Get_st_3(int a) {
	return a*a*a;
}

void Draw_q(int n, int k) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}

int MaxItem(int a, int b) {
	return a > b ? a : b;
}

bool ChechNegative(int a) {
	return a > 0 ? true : false;
}

int main() {
	Draw_q(5, 4);
	std::cout << "Факториал: " << faqtr::Get(5) << std::endl;
	std::cout << std::boolalpha << Check_num(12) << std::endl;
	std::cout << Get_st_3(3) << std::endl;
	std::cout << MaxItem(1, 2) << std::endl;
	std::cout << std::boolalpha << ChechNegative(1) << std::endl;
	return 0;
}