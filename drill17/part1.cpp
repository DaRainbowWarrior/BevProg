#include "../std_lib_facilities.h"

ofstream c;


void print_array(ostream& os, int*a)
{
	for(int i=0;i<10;i++)
		os << a[i] << " ";
		os << endl;
}

void print_array2(ostream&os, int*a, int n)
{
	for(int i=0;i<n;i++)
		os << a[i] << " ";
		os << endl;
}

void print_vector(ostream&os, vector<int> a, int n)
{
	for(int i=0;i<n;i++)
		os << a[i] << " ";
		os << endl;
}

int main()
{
	c.open("output.txt");

	int* pi = new int[10];
	for(int i=0;i<10;i++)
		cout << pi[i] << " ";

	print_array(c,pi);

	int* tenints = new int[10] {101,102,103,104,105,106,107,108,109,110};
	print_array(c,tenints);
	int* elevenints = new int[11] {101,102,103,104,105,106,107,108,109,110,111};
	print_array(c,elevenints);

	int* twentyints = new int[20] {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120};
	print_array2(c,twentyints,20);

	delete[] tenints;
	delete[] elevenints;
	delete[] twentyints;
	delete[] pi;


	vector<int> tizint {101,102,103,104,105,106,107,108,109,110};
	print_vector(c,tizint,10);

	vector<int> tizegyint {101,102,103,104,105,106,107,108,109,110,111};
	print_vector(c,tizegyint,11);

	vector<int> huszint {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120};
	print_vector(c,huszint,20);

	c.close();

}