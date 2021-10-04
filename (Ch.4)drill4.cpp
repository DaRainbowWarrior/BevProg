#include "../std_lib_facilities.h"

double var1,var2,sum = 0;
string unit;
int legnagyobb = -10000,legkisebb = 10000, numof = 0;
vector<double> entered;

int main()
{

	while(cout << "Enter a number: ", cin >> var1 >> unit)
	{
		/*while(cout << "Enter 2 numbers: ", cin >> var1 >> var2)
		if(int1 > int2)
			cout << "bigger number: " << var1 << "   smaller number: " << var2 << "\n";
		else if(int2 > int1)
			cout << "smaller number: " << var1 << "   bigger number: " << var2 << "\n";
		else if(int1 == int2)
			cout << "the numbers are equal: " << var1 << "   " << var2 << "\n";

		if(abs(var1-var2)<0.01)
			cout << "the numbers are almost equal\n";

		cout << "\n";
		*/ 
		//elso 5 feladat

		if((unit=="cm")||(unit=="m")||(unit=="in")||(unit=="ft"))
		{

			if(var1>legnagyobb)
			{
				legnagyobb = var1;
				cout << "Largest so far.\n";
			}
			if(var1<legkisebb)
			{
				legkisebb = var1;
				cout << "Smallest so far.\n";
			}

			if(unit=="m")
			{
				sum = sum + var1;
				entered.push_back(var1);
				//cout << var1;
			}
			else if(unit=="cm")
			{
				sum = sum + var1/100;
				entered.push_back(var1/100);
				//cout << var1/100;
			}
			else if(unit=="in")
			{
				sum = sum + var1*0.0254;
				entered.push_back(var1*0.0254);
				//cout << var1*0.0254;
			}
			else if(unit=="ft")
			{
				sum = sum + var1*0.3048;
				entered.push_back(var1*0.3048);
				//cout << var1*0.3048;
			}


			numof=numof+1;

		}
		else cout << "Invalid Unit!\n";
	}

	sort(entered);
	
	cout << "Sum of values(in m ): " << sum << "\n" << "Number of values entered: " << numof << "\n";
	cout << "Smallest number: " << legkisebb << "\n" << "Largest number: " << legnagyobb << "\n";

	cout << "Elements entered: ";
	for(double x: entered)
		cout << x << "   ";
	cout << "\n";
	
	return 0;
}
