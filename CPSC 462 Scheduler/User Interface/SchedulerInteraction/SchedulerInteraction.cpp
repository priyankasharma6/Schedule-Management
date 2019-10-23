#include <iostream>

#include "SchedulerInteration.h"
#include "../../Domain/UserAccount/UserList.h"
//include the userlist

using namespace Domain;

namespace UI
{
	//The inputed username and password (Check if in good style)
	std::string username;
	std::string password;

	//Prompts the user for authentication.
	void SchedulerInteraction::authenticationUI()
	{
		std::cout << "Username: ";
		std::cin >> username;
		std::cout << "Password: ";
		std::cin >> password;

		UserList uList;
		bool success = uList.authenticate(username, password);
		if (success)
			std::cout << "Authentication successful" << std::endl;
		else
			std::cout << "Invalid username and/or password" << std::endl;
		//Main menu options, etc...???
	}
}