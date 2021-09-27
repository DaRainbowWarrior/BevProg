#include "../std_lib_facilities.h"

string first_name,friend_name;
char friend_sex=0;
int friend_age;

int main()
{
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name; 
	cout << "Dear " + first_name + ",\n";
	
	cout << "How are you? I am fine. I miss you.\n";
	cout << "Enter name of friend: ";
	cin >> friend_name;
	cout << "Have You seen " + friend_name + " lately?\n";
	
	cout << "m if friend is male, f if female: ";
	cin >> friend_sex;
	if(friend_sex == 'm')
		cout << "If you see " + friend_name + " please ask him to call me.\n";
	else if (friend_sex == 'f')
		cout << "If you see " + friend_name + " please ask her to call me.\n";
	else
		cout << "If you see " + friend_name + " please ask them to call me.\n";
		
	cout << "Age of recipient: ";
	cin >> friend_age;
	if((friend_age>=0)&&(friend_age<=110))
		cout << "I hear you just had a birthday and you are " << friend_age << " years old.\n";
	else
		simple_error("you're kidding!");
	
	if(friend_age < 12)
		cout << "Next year you will be " << friend_age+1 << ".\n";
	else if(friend_age == 17)
		cout << "Next year you will be able to vote.\n";
	else if(friend_age > 70)
		cout << "I hope you are enjoying retirement.\n";
	
	cout << "Yours sincerely,";
	cout << "\n";
	cout << "Gergo\n";
	return 0;
}
