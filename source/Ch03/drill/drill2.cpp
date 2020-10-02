#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name!\n";

	string first_name;

	cin >> first_name;

	cout << "Hello, " << first_name << "!\n";

	cout << "How are you?\n";
	cout << "I am fine. I miss you!\n";

	cout << "Please enter your friend name!\n";

	string friend_name;

	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	cout << "Please enter your friend sex!\n";

	char friend_sex = 0;

	cin >> friend_sex;

	if(friend_sex=='m')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if(friend_sex=='f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";

	int age = 0;

	cout << "Please enter your age!\n";

	cin >> age;

	if(age > 0 && age < 110)
		cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	else
		simple_error("you're kidding!");

	if(age < 12)
		cout << "Next year you will be " << age + 1 << ".\n";

	if(age == 17)
		cout << "Next year you will be able to vote.\n";

	if(age > 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "Yours sincerely,\n";

	return 0;
}