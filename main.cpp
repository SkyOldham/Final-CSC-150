/*
    Program Authors: Sky Oldham, Aaron Wilson, Orion Hidy, Keaton Harpham
    Program Date: 11/28/16
    Program Description: This program is used to keep track of college intramural sports.

   Our Algorithm
   1)
    

*/


#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

void printIntro();
void decision(int trunk,int branch,int stick);

int main()
{
	top:

	printIntro();

	decision(23,23,23);

	int goagain = 0;
	cout << "Enter 1 to go again." << endl;
	cin >> goagain;

	if(goagain == 1)
	{
		goto top;
	}

	cout << "Program finished enter some value and hit enter to exit." << endl; int a;cin >> a;
	return 0;
}

void printIntro()
{
	cout << "Welcome to College Intramurals." << endl;
	cout << "At any time press -1 to exit and -2 to go back a step." << endl;
}

void decision(int trunk,int branch,int stick)
{
	const int basketballtrunk = 0;
	const int baseballtrunk = 1;

	const int statsbranch = 0;
	const int rosterbranch = 1;
	const int schedulebranch = 2;

	const int playerind = 0;
	const int playertotal = 1;
	const int teamind = 2;
	const int teamtotal = 3;

	const int teamrosterstick = 0;
	const int allteamviewstick = 1;

	const int nochoiceyet = 23;

	int amountofoptions = 0;
	int leveldeciding = 0;

	bool endaction = false;

	string options[8];

	switch(trunk)
	{
		case basketballtrunk:
			switch(branch)
			{
				case statsbranch:
					switch(stick)
					{
						case playerind:
							//Select Team Select Player
							//Display List of all games with that player in it
							cout << "End Action Basketball -> Stats -> Player Individual" << endl;
							endaction = true;
						break;

						case playertotal:
							//Select Team Select Player
							//Display List of all games with player totals and stats
							cout << "End Action Basketball -> Stats -> Player Total" << endl;
							endaction = true;
						break;

						case teamind:
							//Select Team and Display all games with selected team
							cout << "End Action Basketball -> Stats -> Player -> Team Individual" << endl;
							endaction = true;
						break;

						case teamtotal:
							//Select Team and Display Overall
							cout << "End Action Basketball -> Stats -> Team Total" << endl;
							endaction = true;
						break;

						case nochoiceyet:
							leveldeciding = 2;
							amountofoptions = 4;

							options[0] = "Player Individual Stats.";
							options[1] = "Player Total Stats.";
							options[2] = "Team Individual Games Stats";
							options[3] = "Team Total Stats.";
						break;
					}
				break;

				case rosterbranch:
					switch(stick)
					{
						case teamrosterstick:
							cout << "End Action Basketball -> Roster -> Team Roster" << endl;
							endaction = true;
						break;

						case allteamviewstick:
							cout << "Team 1: Ball is Life\n" << "Team 2: Wildcats\n" << "Team 3: Blue Devils\n";
							endaction = true;
						break;

						case nochoiceyet:
							leveldeciding = 2;
							amountofoptions = 2;

							options[0] = "Team Rosters";
							options[1] = "All Team View";
						break;
					}
				break;

				case schedulebranch:
					cout << "Week 1\n" << "Ball is Life vs. Wildcats\n" << "Blue Devils BYE\n"
                        << "Week 2\n" << "Wildcats vs. Blue Devils\n" << "Ball is Life BYE\n"
                        << "Week 3\n" << "Ball is Life vs. Blue Devils\n" << "Wildcats BYE\n";
					endaction = true;
				break;

				case nochoiceyet:
					leveldeciding = 1;
					amountofoptions = 3;

					options[0] = "Stats";
					options[1] = "Roster";
					options[2] = "Schedule";
				break;
			}
		break;

		case baseballtrunk:
			switch(branch)
			{
				case statsbranch:
					switch(stick)
					{
						case playerind:
							cout << "End action Baseball -> Stats -> Player Individual" << endl;
							endaction = true;
						break;

						case playertotal:
							cout << "End action Baseball -> Stats -> Player Total" << endl;
							endaction = true;
						break;

						case teamind:
							cout << "End action Baseball -> Stats -> Team Individual" << endl;
							endaction = true;
						break;

						case teamtotal:
							cout << "End action Baseball -> Stats -> Team Total" << endl;
							endaction = true;
						break;

						case nochoiceyet:
							leveldeciding = 2;
							amountofoptions = 4;

							options[0] = "Player Individual Stats.";
							options[1] = "Player Total Stats.";
							options[2] = "Team Individual Games Stats";
							options[3] = "Team Total Stats.";
						break;
					}
				break;

				case rosterbranch:
					switch(stick)
					{
						case teamrosterstick:
							cout << "End Action Baseball -> Roster -> Team Roster" << endl;
							endaction = true;
						break;

						case allteamviewstick:
							cout << "Team 1: Going Going Gone\n" << "Team 2: Jeters Never Prosper\n" << "Team 3: Honey Nut Ichiros\n";
							endaction = true;
						break;

						case nochoiceyet:
							leveldeciding = 2;
							amountofoptions = 2;
							options[0] = "Team Rosters";
							options[1] = "All Team View";
							options[2] = "Schedule";
						break;
					}
					//Get a team and display roster

				break;

				case schedulebranch:
					cout << "Week 1\n" << "Jeters Never Prosper vs. Honey Nut Ichiros\n" << "Going Going Gone BYE\n"
                        << "Week 2\n" << "Going Going Gone vs. Jeters Never Prosper\n" << "Honey Nut Ichiros BYE\n"
                        << "Week 3\n" << "Going Going Gone vs. Honey Nut Ichiros\n" << "Jeters Never Prosper BYE\n";
					endaction = true;
				break;

				case nochoiceyet:
					leveldeciding = 1;
					amountofoptions = 3;

					options[0] = "Stats";
					options[1] = "Roster";
					options[2] = "Schedule";
				break;
			}
		break;

		case nochoiceyet:
			amountofoptions = 2;
			leveldeciding = 0;

			options[0] = "Basketball";
			options[1] = "Baseball";
		break;
	}

	if(endaction)
	{
		return;
	}

	int currentdecision = 0;

	for(int i = 0;i < amountofoptions;i ++)
	{
		cout << "Enter: " << i << " for: " << options[i] << endl;
	}

	cin >> currentdecision;



	if((currentdecision >= 0) && (currentdecision < amountofoptions))
	{
		switch(leveldeciding)
		{
			case 0:
				decision(currentdecision,nochoiceyet,nochoiceyet);
			break;

			case 1:
				decision(trunk,currentdecision,nochoiceyet);
			break;

			case 2:
				decision(trunk,branch,currentdecision);
			break;
		}
	}
	else if(currentdecision == -1)
	{
		//Completely Reset
		decision(nochoiceyet,nochoiceyet,nochoiceyet);
	}
	else if(currentdecision == -2)
	{
		switch(leveldeciding)
		{
			case 0:
				decision(nochoiceyet,nochoiceyet,nochoiceyet);
			break;

			case 1:
				decision(nochoiceyet,nochoiceyet,nochoiceyet);
			break;

			case 2:
				decision(trunk,nochoiceyet,nochoiceyet);
			break;
		}
	}
	else
	{
		cout << "No menu option in that range." << endl;
		decision(nochoiceyet,nochoiceyet,nochoiceyet);
	}
}
