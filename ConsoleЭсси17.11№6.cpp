#include <iostream> 
using namespace std;
int main()
{
	int n;
	cout << "Введите число: ";
	cin >> n;
	cout << "Делители числа " << n << " ";
	for (int s = 1; s <= n; s++)
	{
		if (n % s == 0)
		{
			cout << s << " ";
		}
	}
	cout << endl;
	return 0;
}