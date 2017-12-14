#include <iostream>
#include <process.h>

using namespace std;

const int LEN = 80;

class Employee
{
protected:
	char name[LEN]; //Employee name
	unsigned long number; //Employee number

public:
	//Employee() : number(0) {name[0] = '\0'; }
	/*Employee(char* nm, unsigned long num)
	{ 
		number = num;
		strcpy(name, nm); 
	}*/
	void getdata()
	{
		cout << "\nEnter Employee name : "; cin >> name;
		cout << "\nEnter Employee number :  "; cin >> number;
	}

	void putdata()
	{
		cout << "\n  Name : " << name;
		cout << "\n  Number : "<< number;
	}
};

class Manager:public Employee
{
protected:
	char title[LEN];
	float clubDues;
public:
	void getdata()
	{
		cout << "\nEnter Manager Title : "; cin >> title;
		cout << "\nEnter Manager clubdues :  "; cin >> clubDues;
		Employee::getdata();
	}

	void putdata()
	{
		cout << "\n Manager Title : " << title;
		cout << "\n Manager clubdues : " << clubDues;
		Employee::putdata();
	}
};

class Scientist :public Employee // Scients class
{
protected:
	int publications;

public:
	void getdata()
	{
		Employee::getdata();
		cout << "\nEnter number of publications :  "; cin >> publications;
	}

	void putdata()
	{
		Employee::putdata();
		cout << "\n Scientist publications : " << publications;
	}
};

class Labour :public Employee
{
public:
	void getdata()
	{
		Employee::getdata();
	}

	void putdata()
	{
		Employee::putdata();
	}
};


int main()
{
	Labour L1;
	Scientist S1;
	Manager M1, M2;
	
	cout << "\nEnter data for Labour L1:";
	L1.getdata();

	cout << "\nEnter data for Manager M1 :";
	M1.getdata();

	cout << "\nEnter data for Manager M2 :";
	M2.getdata();

	cout << "\nEnter data for Scientist S1 :";
	S1.getdata();

	cout << "\nDetails of Labour L1 : ";
	L1.putdata();

	cout << "\nDetails of Manager M1 : ";
	M1.putdata();

	cout << "\nDetails of Manager M2 : ";
	M2.putdata();

	cout << "\nDetails of Scientist :";
	S1.putdata();

	return 0;
}