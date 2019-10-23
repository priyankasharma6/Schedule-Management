#pragma once
#include <iostream>
#include <vector>
#include "EmployeeAccount.h"

namespace Domain
{
	//A class that represents a list of users
	class UserList
	{
	public:
		UserList();
		virtual ~UserList() {}

		bool authenticate(std::string username, std::string password);
		std::vector<EmployeeAccount> getEmployeeList();
		void addEmployee(EmployeeAccount newEmployee);

	private:
		std::vector<EmployeeAccount> employeeList;
	};
}