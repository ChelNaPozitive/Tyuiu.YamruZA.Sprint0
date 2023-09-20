#include <iostream>
using namespace std;

int main()
{
	int num, sum = 0, prod = 1;
	cout << "number?";
	cin >> num;
	int a = num % 10;
	int b = (num / 10) % 10;
	int c = num / 100;
	prod = a * b * c;
	count << "a * b * c =" << prod << endl;
	return 0;

}