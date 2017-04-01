//The function template and display
#include <iostream>
//define the function
template <typename T>
void Swap(T &a, T &b);
struct job
{
	char name[20];
	double salary;
	int floor;
};
//define the display
template <>void Swap<job>(job &j1, job &j2);
void Show(job &j);
using namespace std;
int main()
{
	//cout.precision(4);
	//cout.setf(ios::fixed);
	int i = 10, j = 20;
	cout << "i,j=" << i << "," << j << endl;
	cout << "Using compiler generated int swapper:" << endl;
	Swap(i, j);
	cout << "Now i,j=" << i << "," << j << endl;
	job s1 = { "Susan Yaffee",73000.60,7 };
	job s2 = { "Sidney Taffee",78060.72,9 };
	cout << "Before job swapping:" << endl;
	Show(s1);
	Show(s2);
	Swap(s1, s2);
	cout << "After job swapping:" << endl;
	Show(s1);
	Show(s2);
	cin.get();
    return 0;
}
//struct of the exchange
template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
//the exchange of variables in different structs
template <>void Swap<job>(job &j1, job &j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}
void Show(job &j)
{
	cout << j.name << ":$" << j.salary << " on floor " << j.floor << endl;
}