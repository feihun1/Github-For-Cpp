//The use of the array:
#include <iostream>
#include <array>
int main()
{
	using namespace std;
	int a, b, c;
	cin >> a >> b >> c;
	array <int, 3> ar;	//Pay attention to the array
	ar = { a,b,c };
	cout << (a + b + c) / 3;
	cin.get();
	cin.get();
    return 0;
}