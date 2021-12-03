#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	cout << "Enter number" << endl;
	cin >> a;
	if ((a % 2) == 0)
	{
		cout << "Even number" << endl;
	}
	if ((a % 2) != 0)
	{
		cout << "Odd number" << endl;
	}
	system("pause");
	return 0;
}