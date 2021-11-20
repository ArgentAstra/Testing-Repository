#include <string>
#include <math.h>
#include <iostream>
#include <algorithm>

//I'm lazy okay?
using namespace std;

//for less clutter
bool isDigit(string s);

//she's a main-eater
int main()
{
	//default value because its easier to keep an eye on
	string input = "failure state";

	//to store the guess goal
	int goal, guess, max;
	max = 10;

	//while loop, also checks for the quit statement
	while (input != "quit")
	{
		//let em know what they got into...
		cout << "guess between 0 and " << max << " to escape" << '\n';

		//prep the trap between 0 and max (modulo (x+1) allows for 0s, rather than (modulo x) + 1, which is between 1 and max)
		goal = rand() % (max+1);

		//get the guess
		cout << "Guess => ";

		//getline so we don't keep any clogs in the cin buffer
		getline(cin, input);

		//if its a number...
		if (isDigit(input))
		{
			// store once rather than calculate 20 times
			guess = stoi(input);


			//easter eggs

			/*
			* for copy/paste purposes because i'm not reformatting this now...
			*		<< '\n' << "however..." << '\n' << '\n';
			*/

			if (guess == 420)
				cout << "Blaze it!" << '\n' << "however..." << '\n' << '\n';
			else if (guess == 69)
				cout << "Nice!" << '\n' << "however..." << '\n' << '\n';
			else if (guess == 343)
				cout << "Bungie is better tbh..." << '\n' << "however..." << '\n' << '\n';
			else if (guess == 88 || guess == 1488 || guess == 14)
				cout << "what are you, a nazi?" << '\n' << "however..." << '\n' << '\n';
			else if (guess == 117)
				cout << "What a badass he was..." << '\n' << "however..." << '\n' << '\n';
			else if (guess == 42)
				cout << "THERE IS AS YET INSUFFICIENT DATA FOR A MEANINGFUL ANSWER. hah, out-nerded you." << '\n' << "however..." << '\n' << '\n';
			else if (guess == 42069 || guess == 69420)
				cout << "Calm down there, what are you, 14?" << '\n' << "however..." << '\n' << '\n';
			else if (guess == 80085 || guess == 8008135)
				cout << "BOOB(IE)S!" << '\n' << "however..." << '\n' << '\n';
			else if (guess == 24601)
				cout << "AND I'M JAVERT!" << '\n' << "however..." << '\n' << '\n';
			else if (guess == 777)
				cout << "BUNGIE day erry day" << '\n' << "however..." << '\n' << '\n';
			else if (guess == 525600)
				cout << "How do you measure, measure a year?" << '\n' << "however..." << '\n' << '\n';
			else if (guess == 19691 || guess == 61991)
				cout << "Founding of Bungie, good on ya" << '\n' << "however..." << '\n' << '\n';
			else if (guess == 101910 || guess == 191010)
				cout << "best Open World RPG known to man. Don't @ me." << '\n' << "however..." << '\n' << '\n';


			
			//are they even in range?
			if (guess < 0 || guess > max)
			{
				cout << "That's not between 0 and " << max << " idiot, what are you doing? " <<'\n';
			}

			//and its the right one...
			else if (guess == goal)
			{
				//then insult them and let them go
				cout << "took you long enough to figure out " << input << " is equal to " << goal << '\n';
			}

			//but its the wrong one...
			else
				// annoy them and keep them here
				cout << "Nope, it was " << goal << " idiot, try again!" << '\n';
		}

		//otherwise...
		else
			//insult them extra, and make them retry
			cout << "that's not a number, idiot!" << '\n';

		//debugging reminder for my dumb bitch hours.  comment out for runtime. Can't be telling secrets now can we?
		//cout << "input \"quit\", or guess correctly, to quit" << '\n';

		//spacer between attempts
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << '\n' << '\n';
	}

	//you win!!!!11!1!!!1!1!!!
	return 0;
}

//abuses useful all_of function in <algorithm>, which is my new best friend. Checks the whole string is digits.
bool isDigit(string s)
{
	//because its a single behavior, no storing needed, so just slap that together in one go
	//oh, and friendship with forEach ended. all_of is new best friend
	if (!s.empty() && std::all_of(s.begin(), s.end(), ::isdigit))
	{
		return true;
	}
	return false;
}