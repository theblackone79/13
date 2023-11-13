using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	int count = 0;
	int number;
	int sum = 0;
	int chet = 0;

	while (true)
	{
		cout << "Введите число (0 для завершения): ";
		cin >> number;

		if (number == 0)
		{
			break;
		}

		sum += number;
		count++;
		chet++;
	}

	cout << "Введенные числа: " << endl;



	if (count > 0) {

		cout << "введенно чисел:" << count << endl;

	}

	cout << "Сумма: " << sum << endl;
	cout << "Среднее арифметическое: " << sum / chet;
	cout << endl;

	return 0;


}
