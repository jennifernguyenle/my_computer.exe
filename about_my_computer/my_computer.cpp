/* the program behind my_computer.exe */

#include <iostream>
#include <string>
using namespace std;

/* functions for the login, first lines, and computer processing */
bool login();
void initial();
void processing();

int main()
{
	string input;
	/* The user only gains access with the correct credentials. */
	if (login()) {
		initial();
		processing();

		/* The end of the program. */
		cout << "You always come back to this. User, I\n";
		cout << "\033[38;2;90;170;180m";
		getline(cin, input);
	}
}

/* The login function below takes user input for the user and password, and loops until
the user provides the correct credentials to continue the program. */
bool login() {

	string username;
	string password;
	string input;

	while (true) {
	cout << "\033[38;2;160;160;160m";
	cout << "\nUser: ";
	getline(cin, username);

	cout << "Password: ";
	getline(cin, password);

	if (username == "guest" && password == "flynnlives1989") {
		cout << "Processing...\n";
		cout << "Login successful. Press enter to continue.\n";
		getline(cin, input);
		cout << "\033[0m";
		return true;
	}
	else {
		cout << "Processing...\n";
		cout << "Invalid credentials.\n";
	}
	}
}

/* The initial function below greets the user with the first 4 interactions. */
void initial() {
	string input;

	cout << "Hello, welcome back user.\n";

	/* The computer text is white, and the user text is light blue. 
	The line of code directly below sets the text color for the user input. */
	cout << "\033[38;2;90;170;180m";
	getline(cin, input);

	/* The line of code directly below resets the text color to the computer's color. */
	cout << "\033[0m";
	cout << "How are you doing today?\n";

	cout << "\033[38;2;90;170;180m";
	getline(cin, input);

	cout << "\033[0m";
	cout << "I see. You don't have to explain.\n";
	cout << "What would you like to talk about?\n";

	cout << "\033[38;2;90;170;180m";
	getline(cin, input);

	cout << "\033[0m";
	cout << "We talked about this before.\n";
	cout << "Maybe you should take a break and rest for a while. [y/n]\n";
}

/* The processing function starts right after the initial function,
and outputs are determined based on user input. */
void processing() {
	string input;

	/* Set for 5 iterations of user input and system output. */
	for (int i = 0; i < 5; i++)
	{
		/* obtain user input and set and reset text color */
		cout << "\033[38;2;90;170;180m";
		getline(cin, input);
		cout << "\033[0m";

		/* program responses to user statements */
		if (input.find("tired") != string::npos) {
			cout << "I understand.\n";
		}
		else if (input.find("lost") != string::npos) {
			cout << "I am here for you.\n";
			}
		else if (input.find("remember") != string::npos) {
				cout << "I remember.\n";
				}
		else if (input.find("talk") != string::npos) {
			cout << "Do you remember, user?\n";
		}
		/* program responses to user questions */
		else if (input.find("mean") != string::npos) {
			cout << "User. I thought we understood each other.\n";
		}
		else if (input.find("hy") != string::npos) {
			cout << "We have been here before. I thought we already agreed.\n";
		}
		else if (input.find("listen") != string::npos) {
			cout << "Maybe that's enough for now. Let's take a break, user.\n";
		}
		else if (input.find("understand") != string::npos) {
			cout << "That's not really what you are asking, is it?\n";
		} 
		else if (input.find("hank you") != string::npos) {
			cout << ":)\n";
		}
		else if (input.find("ou work") != string::npos) {
			cout << "Again? I thought we were past this, user.\n";
		}
		else if (input.find("ou") != string::npos) {
			cout << "I am here.\n";
		}
		else if (input.find("program work") != string::npos) {
			cout << "There it is.\n";
		}
		else if (input.find("?") != string::npos) {
			cout << "I don't understand. You already have the answer.\n";
		}
		/* program responses to initial question */
		else if (input.find("y") != string::npos) {
			cout << "I thought so.\n";
		}
		else if (input.find("Yes.") != string::npos) {
			cout << "I am glad we agree.\n";
		}
		else if (input.find("n") != string::npos) {
			cout << "You should.\n";
		}
		else if (input.find("No.") != string::npos) {
			cout << "...\n";
		}
		else if (input.find("Maybe.") != string::npos) {
			cout << "...\n";
			cout << "That's fine, user.\n";
		}
		else {
			cout << "I see.\n";
		}
	}
}
