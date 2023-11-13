using namespace std;
#include <iostream>
int main()
{
	setlocale(0, "");
	int n;
	cout << "введите число до кокого числа выдавать таблицу: ";
	cin >> n;

	cout << "число\t\tквадрат\t\tкуб" << endl;

	for (int i = 1; i <= n; ++i) {
		int square = i * i;
		int cube = i * i * i;
		cout << i << "\t\t" << square << "\t\t" << cube << endl;
	}

	return 0;
}