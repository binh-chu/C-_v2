#include <iostream>
#include <string>

using namespace std;

class Human_Being
{
private:
	string m_Sz_name;

public:
	void m_GetInfo()
	{
		cout << "Enter name:\n";
		getline(cin, m_Sz_name);
	}
	void m_Show()
	{
		cout << "My name is: " << m_Sz_name << endl;
	}
};

int main()
{
	Human_Being P1;
	P1.m_GetInfo();
	P1.m_Show();
	return 0;
}