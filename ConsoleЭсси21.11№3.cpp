// ConsoleЭсси21.11№3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() 
{
	setlocale(0, "");
	int n;
	cout << "введите размер масива ";
	cin >> n;
	int arr[3];
	cout << "введите элемент масива:\n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "содержимое массмва: \n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "";
	}
	cout << endl;
	int sum = 0;
	int count = 0;
	for (int i = 0;i < n; ++i) {
		if (arr[i] % 3 == 0) {
			sum += arr[i];
			count++;
		}
	}
	cout << "количество чисел в масиве" << n << endl;
	cout << "сумма элементов макссива кратных 3 >>" << sum << endl;
	cout << "количество элеменитов массива кратных 3 >>" << sum << endl;
	return 0;
}
