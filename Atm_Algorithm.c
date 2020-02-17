#include <stdio.h>


int main()
{
	//This is an atm machine algorithm

	//declaring all the variables to be used
	float card, password, service, withdraw, validate;

	//1. Card validation(assuming the following card number)
	printf('Enter card number: ');
	scanf('%f', &card);

	if (card != 9876543210){
		printf('Sorry Invalid Card, insert another card\n');
	}
	else{

		//2. Password Validation
		printf('Enter password: \n');
		scanf('%f', &password);

		if (password != 0000)
		{
			printf('invalid password\n');
		}
		else
		{
			//3. Choose Service
			printf('Welcome to NBC BANK\n 1. Withdraw\n 2. Balance\n');
			scanf('%f', &service);

			if (service != 2)
			{
				//4. Withdraw
				printf('State the amount of cash to withdraw\n');
				scanf('%f', &withdraw);

				//5. Cross check to withdraw

				printf('Are you sure you want to withdraw(1 for yes and 2 for no?: \n');
				scanf('%f', &validate);

				if (validate == 1)
				{
					//6. validate withdraw
					printf('You have withdrawn %f tsh\n', withdraw);
				}
				else
				{
					printf('Wrong amount entered.\n');
				}

			}
			else
			{
				//7. Amounts displayed
				printf('Your balance is Tsh 780,000/=\n');
			}
		}
}

