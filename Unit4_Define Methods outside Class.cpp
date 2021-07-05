#include <iostream>
#include <string>

using namespace std;

class Human_Being
{
private:
	string m_Sz_name;

public:
	void m_GetInfo();
	void m_Show();

};
	void Human_Being::m_GetInfo()
	{
		cout << "Enter name:\n";
		getline(cin, m_Sz_name);
	}
	void Human_Being::m_Show()
	{
		cout << "My name is: " << m_Sz_name << endl;
	}
int main()
{
	Human_Being* Ptr_P1 = new Human_Being();
	Ptr_P1->m_GetInfo();
	Ptr_P1->m_Show();
	delete(Ptr_P1);
	return 0;
}