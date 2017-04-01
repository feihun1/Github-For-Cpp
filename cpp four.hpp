//The use of the function pointer
#include <iostream>
using namespace std;
double sam(int minutes);
double sufei(int minutes);
void sum(int count, double(*p)(int));
void sum(int count, double(*p)(int))	//The return value of a function and parameters need to declare
{
	cout << count<<endl << "it will take:";
	cout << (*p)(count) << endl;
}
double sam(int minutes)
{
	return 0.5*minutes;
}
double sufei(int minutes)
{
	return 0.4*minutes;
}
int main()
{
	int code;
	cout << "please input a number:" << endl;
	cin >> code;
	cout << "Here is sam's time:";
	sum(code, sam);		//The function name as address directly
	cout << "Here is sufei's sum:";
	sum(code, sufei);
	cin.get();
	cin.get();
    return 0;
}