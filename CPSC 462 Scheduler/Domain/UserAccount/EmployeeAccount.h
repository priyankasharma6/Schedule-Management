#pragma once
#include <iostream>

namespace Domain
{
	//Represents an employee account - a collection of a username, password, role, and other information
	class EmployeeAccount
	{
	public:
		EmployeeAccount(std::string newUsername, std::string newPassword, int newRole);
		virtual ~EmployeeAccount() {}

		//Getter methods
		std::string getUsername();
		std::string getPassword();
		int getRole();

	private:
		std::string username;
		std::string password;
		int role = -1; //0 for admin, 1 for manager, 2 for employee
		//more attributes could be added
	};
}