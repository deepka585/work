#include <iostream> 
using namespace std;
int main()
{
	int s, e;
	int t = 0;

	cout << "vvedite nachalo diapazona: ";
	cin >> s;
	cout << "vvedite konec diapazona: ";
	cin >> e;
	for (int w = s; w <= e; w++)
	{
		if (w % 2 == 0)
		{
			t += 1;
		}
	}
	cout << "cymma chetnbIx chicel: " << t << endl;
	return 0;
}