#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int masiv[11];
	masiv[0] = 0;
	masiv[1] = 1;
	masiv[2] = 2;
	masiv[3] = 3;
	masiv[4] = 4;
	masiv[5] = 5;
	masiv[6] = 6;
	masiv[7] = 7;
	masiv[8] = 8;
	masiv[9] = 9;
	masiv[10] = 10;
	int sum = 0;
	for (int i = 0; i <= 10; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	cout << "Сумма нечётных чисел >>" << sum << endl;
}