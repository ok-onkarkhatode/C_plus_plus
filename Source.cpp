#include<iostream>
#include<conio.h>

class Employee
{
public:
  int eid;

//protected:
public:
  double esalary;

  void salary()
  {
  std::cout<<"salary of Employee";
  }

  Employee()
  {
  
  }

  Employee(int eid,double esalary)
  {
    this->eid=eid;
    this->esalary=esalary;

  }

};


class Manager:public Employee
{
public:
	int bouns;

	Manager(int eid,double esalary,int bouns)
	{
	 this->bouns=bouns;

	}

};

int main()
{

 Manager Onkar(10,10000,500);
 Onkar.bouns;
 Onkar.salary();

 std::cout<<

 _getch();
 return 0;
}
