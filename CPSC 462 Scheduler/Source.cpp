#include <iostream>

#include "User Interface/SchedulerInteraction/SchedulerInteration.h"
#include "Domain/UserAccount/UserList.h"

using namespace UI;
using namespace Domain;

int main()
{
	//Creates the user interface object
	SchedulerInteraction schi;
	//Launches the UI for authentication (May change in the future
	schi.authenticationUI();

	return 0;
}