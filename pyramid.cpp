#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i = 0, j = 0, k = 0, height = 0;
	cout << "\n What the height of the pyramid which you want to construct ? : ";
	cin >> height;
	for (i = height; i >= 1; i--)
	{
		cout << endl;
		for (j = i; j >= 1; j--)
		{
			cout << " ";
		}
		for (k = (2 * (height - i)) - 1; k >= 1; k--)
		{
			cout << "*";
		}

	}
	return 0;
}