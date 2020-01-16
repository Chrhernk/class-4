#include <iostream>
#include <string>


using namespace std;

int main()
{
	//welecome message, and title  

	cout << "\n\n\t\t***welecome to my adventure!***\n\n";
	//giving the layout
	
	cout << "\nYou wake up in a park, and while looking around you see a large spider!\n";
	cout << "\nThe spider is coming right at you!!\n";
	//giving the choice

	cout << "\nType run or hide than press enter!\n";
	string userChoice;

	// to get the users choice

	getline(cin, userChoice);
	// based on the choice, it changes the story

	if (userChoice == "Run" || userChoice == "run")
	{
		//than do this
		cout << "\n\n You run, but get captured because it has 6 more legs than you. \n\n";



	}


	else


		if (userChoice == "Hide" || userChoice == "hide")
		{


			cout << "\n\n the spider passes by your hiding place, legs scuttling loudly. \n\n";

		}

		else
		{

			cout << "\n while trying to type, the spider caught you\n";
		}
	return 0;
}