#include <iostream> 
using namespace std;
int main()
{
	int t = 0;
	for (int s = 1; s <= 150; s++)
	{
		if (s % 5 == 0 || s % 7 == 0)
		{
			t += 1;

		}
	}
	cout << "Сумма чисел кратных 5 или 7: " << t << endl;
	return 0;
}
