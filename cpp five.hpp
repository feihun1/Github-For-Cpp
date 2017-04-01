//The use of the default parameters
#include <iostream>
using namespace std;
char * spy(char *p, int i = 1);
char * spy(char *p, int i)
{
	char *q = new char[i+1];
	int a;
	for ( a = 0; a < i&&p[a]; a++)
	{
		q[a] = p[a];
	}
	while (a<=i)
	{
		q[a++] = '\0';
	}
	return q;
}
int main()
{
	char sth[10];
	cin.get(sth, 10);
	cin.get();
	char *p=spy(sth, 3);
	cout << p << endl;
	delete[]p;
	p=spy(sth);
	cout << p << endl;
	delete[]p;
	cin.get();
    return 0;
}