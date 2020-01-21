#include <iostream>
#include <string>


using namespace std;

int main()
{
	//welecome message, and title  

	cout << "\n\n\t\t***Welecome to the Adventure through the Abyss!!!***\n\n";
	cout << "\n\n\t\t***This is best played in full screen!***\n\n\t\t";
	//giving the layout



	cout << "\n You awake, laying on a blood-stained steel table, having no memory of who you are.\n";
	cout << "\n You look down, seeing you are wearing a simple jumpsuit, with your name stitched into the front.\n";
	cout << "\n The room you are in is massive, tables all around you made of cold steel, and as you get up, you can see that the other tables have bodies on them.\n";
	cout << "\n What will player do now?\n";
	//giving the choice

	cout << "\nWill you check another table near you or Go to the door to escape this room?\n";
	cout << "\nEnter 1 or 2 to continue.\n";


	string userChoice;

	// to get the users choice

	getline(cin, userChoice);
	// based on the choice, it changes the story

	if (userChoice == "1" || userChoice == "One")
	{
		//than do this
		cout << "\n\nyou check another table near yourself, and to your horror sees that the sheet-covered body is your own!! you quickly check another, and another, and they are all the same, its all you, each body was autopsied, stitched back together professisionally, now you know you need to escape. \n\n";
		cout << "\n\nBut before you can think of running, a man walks into the room, a knife in hand, killing you where you stand, and as your blood joins the stains on the floor, you can only think 'why didnt I run away???'./n/n";
	}


	else


		if (userChoice == "2" || userChoice == "Two")
		{


			cout << "\n\n You run to the door, passing through it and into a large hallway, you have two directions you can run from here. \n\n";
			cout << "\n\n You could run to the Left (1), or to the Right(2).\n\n";
			cout << "\n\nWhich direction do you choose?\n\n";


			getline(cin, userChoice);
			// based on the choice, it changes the story

			if (userChoice == "1" || userChoice == "One" || userChoice == "Left" || userChoice == "left")
			{
				//than do this
				cout << "\n\n You run to the left, passing doors and what appear to be surgury bays, hitting double doors after double doors.\n\n";
				cout << "\n\nYou eventually get to another set, passing through them and into a lobby, this was once a Hospital, but your kidnapper has turned it into a lair, camera feeds and alarms were watching the exits, what do you do now?\n\n";
				cout << "\n\ndo you 1. find the security room and disable the alarms or 2. risk it and exit now?\n\n";

				getline(cin, userChoice);
				// based on the choice, it changes the story

				if (userChoice == "1" || userChoice == "One")
				{
					//than do this
					cout << "\n\nyou check the nearby rooms, finding the computer and shutting off the security\n\n";
					cout << "\n\nafter shutting it all off, you run out of the building, fianally free!!!!\n\n";
					cout << "\n\n THE END \n\n";
				}


				else


					if (userChoice == "2" || userChoice == "Two")
					{


						cout << "\n\n You decide to chance this, charging out of the doors before somthing swang down from the cieling, puncturing the entire front of your chest, you have died\n\n";


					}


					else


						if (userChoice == "2" || userChoice == "two" || userChoice == "right" || userChoice == "Right")
						{


							cout << "\n\n You take a right, and begin running past doors and windows, before you hit something, someone actually \n\n";
							cout << "\n\n This someone is your kidnapper apparantly, as you run into him he grabs you, hitting you across your head and making you collapse, you blood staining the floor around you as you fade to black.\n\n";
							cout << "\n\n THE END  \n\n";

						}
			}
			else
			{
				cout << "\n\n Your indicision left you vunrable, while you waited your kidnapper came back in, and slit your throat, your blood pooling and staining the floor. \n\n";
				cout << "\n\n THE END \n\n";
			}

			//return 0;
		}
}