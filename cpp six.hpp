//A function template(can overloading)
#include <iostream>
using namespace std;
template <typename T>
void Swap(T &a, T &b);
template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int i = 10,j=20;
	cout << "i,j=" << i << "," << j << endl;
	Swap(i, j);
	cout << "using compiler-generated int swapper:" << endl;
	cout << "Now i,j=" << i << "," << j << endl;
	double x = 24.5;
	double y = 81.7;
	cout << "x,y=" << x << "," << y << endl;
	Swap(x, y);
	cout << "using compiler-generated double swapper:"<<endl;
	cout << "Now x,y=" << x << "," << y << endl;
	cin.get();
    return 0;
}