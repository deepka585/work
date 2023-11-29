#include <iostream> 
using namespace std;
int main()
{
	int n1 = 0, n2 = 1;
	cout << "Первые 10 чисел Фибоначчи: ";

	for (int s = 1; s <= 10; s++)
	{
		{
			cout << n1 << " ";
			int n = n1 + n2;
			n1 = n2;
			n2 = n;
		}
	}
	cout << endl;
	return 0;
}