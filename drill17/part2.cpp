#include "../std_lib_facilities.h"

int main()
{
	int x =7;
	int* p1 = &x;

	cout << p1 << "    " << x << "\n";

	int* p2 = new int[7] {1,2,4,8,16,32,64};

	cout << p2 << " ";
	for(int i=0;i<7;i++)
		cout << p2[i] << " ";
	cout << "\n";

	int* p3 = p2;
	p2 = p1;
	p2 = p3;

	cout << p1 << "    " << *p1 << "\n";
	cout << p2 << "    " << *p2 << "\n";

	delete[] p2;

	p1 = new int[10] {1,2,4,8,16,32,64,128,256,512};
	p2 = new int[10];

	for(int i=0;i<10;i++)
		p2[i] = p1[i];
	for(int i=0;i<10;i++)
		cout << p2[i] << " ";
	cout << "\n";

	delete[] p1;
	delete[] p2;



	vector<int> v1 {1,2,4,8,16,32,64,128,256,512};
	vector<int> v2;

	v2 = v1;

	for(int i=0;i<10;i++)
		cout << v2[i] << " ";
	cout << "\n";
	
	return 0;
}