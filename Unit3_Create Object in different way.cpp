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
	Human_Being P1; // P1 will be locate in stack memory(static object)
	P1.m_GetInfo();
	P1.m_Show();
	
	Human_Being * Ptr_P2 = new Human_Being(); // Ptr_P2 is pointer will be locate in Heap Memory (dynamic object)
	Ptr_P2->m_GetInfo();
	Ptr_P2->m_Show();

	delete(Ptr_P2);

	return 0;
}