// x_y.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "");

	int x, y, sum = 0;
	cout << "Введите число" << endl;
	cin >> x;
	cout << "Введите степень" << endl;
    cin>> y;
	if (x == 0 || y == 0)
		cout << "Ошибка";
	else
	{
		sum = pow(x, y);
		cout << sum << endl;
	}
	
	
}

