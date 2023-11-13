using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	int h;
	cout << "введите высоту фигур: ";
	cin >> h;

	cout << "равнобедренный треугольник " << endl;
	for (int i = 1; i <= h; i++)
	{
		for (int g = 1; g <= h - i; g++)
			cout << " ";
		for (int a = 1; a <= 2 * i - 1; a++)
			cout << "*";
		cout << endl;
	}

	cout << endl << "трапеция" << endl;
	for (int q = 1; q <= h; q++)
	{
		for (int b = 1; b <= h - q; b++)
			cout << "   ";
		for (int y = 2; y <= 1 * q - 1; y++)
			cout << "******";
		cout << endl;
	}
	return 0;
}
