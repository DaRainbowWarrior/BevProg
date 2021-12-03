#include "../std_lib_facilities.h"

int* ga = new int[10] {1,2,4,8,16,32,64,128,256,512};

void f(int* a,int f)
{
	int* la = new int[10];
	for(int i=0;i<10;i++)
		la[i] = ga[i];
	for(int i=0;i<10;i++)
		cout << la[i] << " ";
	cout << "\n";

	int* p = new int[f];
	for(int i=0;i<f;i++)
		p[i] = a[i];
	for(int i=0;i<f;i++)
		cout << p[i] << " ";
	cout << "\n";

	delete[] la;
	delete[] p;
}

int main()
{
	f(ga,10);
	cout << "\n";
	int* aa = new int[10] {1,2,6,24,120,720,5040,40320,362880,3628800};

	f(aa,10);

	delete[] ga;
	delete[] aa;
	return 0;
}