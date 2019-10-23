#include <iostream>

#include "EmployeeAccount.h"

namespace Domain
{
	//Overrides constructor to allow creation of new employee by putting in the attributes
	EmployeeAccount::EmployeeAccount(std::string newUsername, std::string newPassword, int newRole)
	{
		username = newUsername;
		password = newPassword;
		role = newRole; //No purpose for it yet
	}

	//Defined getter methods
	std::string EmployeeAccount::getUsername()
	{
		return username;
	}

	std::string EmployeeAccount::getPassword()
	{
		return password;
	}

	int EmployeeAccount::getRole()
	{
		return role;
	}
}