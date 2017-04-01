//The use of the getline:
#include <iostream>
int main()
{
	using namespace std;
	char ch1[10],ch2[5];
	char ch;
	int a;
	cout << "What is your first name?";
	cin.getline(ch1, 10);			//getline to "Enter" as a symbol of the end of the input
	cout << endl<<"What is your last name?";
	cin.getline(ch2, 5);
	cout << endl << "What letter grade do you deserve?";
	cin >> ch;
	cin.get();
	cout << endl << "What is your age?";
	cin >> a;
	cin.get();
	cout << endl << "Name:" << ch1 <<" "<< ch2<<endl;
	cout << "Grade:" << char(ch + 1)<<endl;
	cout << "Age:" << a;
	cin.get();
    return 0;
}