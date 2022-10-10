#include <iostream>

using namespace std;

class Animals
{
public:
	 void sound()
	{
		cout << "This is parent class" << endl;
	}
};

class Dogs : public Animals
{
public:
	void sound()
	{
		cout << "Dogs bark" << endl;
	}
};

int main()
{
	cout << "Git workbranch" << endl;
	cout << "Git workbranch" << endl;
	cout << "Another change" << endl;
	cout << "Too many tries" << endl;

	cout << "These are the changes in workbranch" << endl;
	cout << "Git changed to see changes" << endl;
	Animals *a;
	Animals b;
	Dogs d;
	a = &d;
	d.sound();
	a->sound();//  early binding
	return 0;
}