#include <iostream>

using namespace std;

int main()
{

    char ch;
    short int a, b, c;
    cout << "enter the number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;
    cout << "result" << endl;
    cin >> c;
    if (c == a * b) {
        cout << "right";
    }
    else cout << "Wrong.Correct answer >> " << a * b;
    return 0;

}