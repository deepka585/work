#include <iostream> 
using namespace std;
int main()
{
	int n;
	cout << "Vvedite chislo: ";
	cin >> n;
	int kv = n * n;
	int cu = n * n * n;
	cout << "Kvadrat chisla: " << kv << endl;
	cout << "Kub chisla: " << cu << endl;
	return 0;
}