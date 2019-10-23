#include <iostream>
#include <vector>

#include "EmployeeAccount.h"
#include "UserList.h"

namespace Domain
{
	//Overrides the constructer
	UserList::UserList()
	{
		//Creates a hardcoded list of employees
		//This is temporary, for testing purposes
		//Roles don't have any function yet
		EmployeeAccount newEmployee = EmployeeAccount("Master", "Master", 0);
		addEmployee(newEmployee);
		newEmployee = EmployeeAccount("Super", "Visor", 1);
		addEmployee(newEmployee);
		newEmployee = EmployeeAccount("Hello", "World", 2);
		addEmployee(newEmployee);
	}

	//Returns the list of employees; getter method
	std::vector<EmployeeAccount> UserList::getEmployeeList()
	{
		return employeeList;
	}

	//Adds an employee to the list
	//Could be useful for the Admin use case
	void UserList::addEmployee(EmployeeAccount newEmployee)
	{
		employeeList.push_back(newEmployee);
	}

	//authenticate
	bool UserList::authenticate(std::string username, std::string password)
	{
		//Check all the users in the list
		std::vector<EmployeeAccount> allAccounts = getEmployeeList();

		for (EmployeeAccount emp : allAccounts)
		{
			if (emp.getUsername().compare(username) == 0)
			{
				if (emp.getPassword().compare(password) == 0)
				{
					return true;
				}
			}
		}
		return false;
	}
}