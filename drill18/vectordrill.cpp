#include "../std_lib_facilities.h"

vector<int> gv {1,2,4,8,16,32,64,128,256,512};

void f(vector<int> a)
{
	vector<int> lv;
	
	lv = gv;
	for(int i=0;i<a.size();i++)
		cout << lv[i] << " ";
	cout << "\n";



	vector<int> lv2 = a;
	for(int i=0;i<a.size();i++)
		cout << lv2[i] << " ";
	cout << "\n";
}

int main()
{
	f(gv);
	cout << "\n";
	vector<int> vv {1,2,6,24,120,720,5040,40320,362880,3628800};

	f(vv);
	return 0;
}