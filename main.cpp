#include <iostream>
#include <list>

#include "include_files.h"

int main()
{
    std::cout << "-----------------------------------------\n";
    SingletonClient();
    LazySingletonClient();

    HR *hr = new HR();
    IFactory *managerFactory = new ManagerFactory();
    IFactory *employeeFactory = new EmployeeFactory();


    std::list<Employee*> emp_list;
    emp_list.push_back(managerFactory->Create());
    emp_list.push_back(managerFactory->Create());
    emp_list.push_back(employeeFactory->Create());
    emp_list.push_back(employeeFactory->Create());

    for(Employee* emp : emp_list)
    {
        emp->PrintInfo();
    }


    HR2 *hr2 = new HR2();
    IManagerFactory2 *managerFactory2 = new ManagerFactory2();
    IEmployeeFactory2 *employeeFactory2 = new EmployeeFactory2();

    std::list<Employee2*> emp_list2;
    emp_list2.push_back(managerFactory2->Create("sami", "gebes"));
    emp_list2.push_back(managerFactory2->Create("sami", "sakarya"));
    emp_list2.push_back(employeeFactory2->Create("osman"));
    emp_list2.push_back(employeeFactory2->Create("mustafa"));

    for(Employee2* emp : emp_list2)
    {
        emp->PrintInfo();
    }

    prototype::Test();
    
    return 0;
}