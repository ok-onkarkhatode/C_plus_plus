
#include<iostream>
#include<conio.h>

 class Employee
 {
 private:
   int empid;
    int age;
    int salary;

  public:

	Employee()
	{
	   std::cout<<"Default employee consructor"<<std::endl;

	}

	Employee(int empid, int age, int salary)
	{
	   this->empid=empid;
	   this->age=age;
	   this->salary=salary;

	
	}
    

   void setEmpid(int empid)
  {
   this->empid = empid;
  }

  void setAge(int age)
  {
   this->age = age;
  }

  void setSalary(int salary)
  {
   this->salary = salary;
  }

  int getEmpid()
 {
  return this->empid;
 }

  int getAge()
   {
    return this->age;
   }

   int getSalary()
   {
    return this->salary;
   }

   void display()
   {
      std::cout << "The id of the employee is\n" << this->empid << std::endl;
      std::cout << "Age of the employeee is\n" << this->age << std::endl;
      std::cout << "Salary of the employee is\n" << this->salary << std::endl;
   
   }
 };

 class Manager:public Employee
 {
 private:
	 int bouns;

	 Manager()
	 {
	   std::cout<<"Default manager consructor"<<std::endl;
	 }
 public:

	 Manager(int empid, int age, int salary,int bouns)
		 :Employee(empid,age,salary)
	 {
	  this->bouns=bouns;
	 }
    
	 void setBouns(int bouns)
     {
      this->bouns = bouns;
     }

	 
   int getBouns()
   {
    return this->bouns;
   }

     void display()
   {
	   Employee::display();
      std::cout << "The bounsof the employee is\n" << this->bouns << std::endl;
 
 };

int main()
{
  Manager ok(11,21,30000, 5000);

_getch();
return 0;
}