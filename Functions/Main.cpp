#include <iostream>

//Перегруженная функция
	/*int max(int num1, int num2)
	{
		std::cout << "TWO INTS\n";
		return num1 > num2 ? num1 : num2;
	}

	double max(double num1, double num2)
	{
		std::cout << "TWO doubles\n";
		return num1 > num2 ? num1 : num2;
	}

	char max(char sym1, char sym2)
	{
		std::cout << "TWO chars\n";
		return sym1 > sym2 ? sym1 : sym2;
	}

	int max(int num1, int num2, int num3) 
	{
		std::cout << "THREE chars\n";
		return num1 > (max(num2, num3)) ? num1 : max(num2, num3);
	}
	*/

template <typename T>
void print_Arr(T arr[], const int lenght)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << ' ';
		std::cout << std::endl;

	}
}


	

	
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Шаблонная функция
const int size = 5;
int arr[size]{ 10,20,30,40,50 };
std::cout << "Массив\n";


print_Arr(arr, size);

	return 0;
}
