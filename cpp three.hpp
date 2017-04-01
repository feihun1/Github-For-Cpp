//The String class parameters used by the function:
#include <iostream>
#include <string>
using namespace std;
void _stdout(string std[], int x);
int main()
{
	const int a=5;
	string sth[a];			//string **[] amount to 2 d array
	cout << "please input string:" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "please" << endl;
		getline(cin, sth[i]);
	}
	cout << "your list:"<<endl;
	_stdout(sth, a);
	cin.get();
	return 0;
}
void _stdout(string std[], int x)
{
	for (int i = 0; i < x; i++)
	{
		cout << std[i] << endl;
	}
	cin.get();
}