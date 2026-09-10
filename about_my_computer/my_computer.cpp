/* The program behind my_computer.exe. */

#include <iostream>
#include <string>
using namespace std;

/* Functions for login, first initial lines, and user-dependent outputs. */
bool login();
void initial();
void processing();

int main() {
	string input;

	/* The user only gains access with the correct credentials. */
	if (login()) {
		initial();
		processing();

		/* The end of the program. */
		cout << "You always come back to this. User, you\n";
		cout << "\033[38;2;90;170;180m";
		getline(cin, input);
	}
}

/* The login function takes user input for the user and password, and loops until
the user provides the correct credentials to continue the program. */
bool login() {
	string username;
	string password;
	string input;

	while (true) {
	/* The login text is light gray. */
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

/* The initial function greets the user and establishes familiarity. */
void initial() {
	string input;

	cout << "Hello. Welcome back, user.\n";

	/* The computer text is white, contrasting with the prior light gray login text.
	The user text is light blue to distinguish between the computer and the user. */
	cout << "\033[38;2;90;170;180m";
	getline(cin, input);
	cout << "\033[0m";

	/* Infers the user has read the entirety of the README.md 
	to gain access, and would most likely follow to greet the computer. */
	cout << "What would you like to talk about?\n";

	cout << "\033[38;2;90;170;180m";
	getline(cin, input);
	cout << "\033[0m";

	cout << "We talked about this before.\n";
	cout << "Maybe you should take a break and rest for a while. [y/n]\n";
}

/* The processing function allows dynamic outputs, depending on user input. */
void processing() {
	string input;

	/* Set for 6 iterations of user input and user-dependent output. */
	for (int i = 0; i < 6; i++) {

		/* Obtain user input, set and reset text color. */
		cout << "\033[38;2;90;170;180m";
		getline(cin, input);
		cout << "\033[0m";

		/* Program responses to user statements. */
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
		else if (input.find("hank you") != string::npos) {
			cout << ":)\n";
		}
		/* Program responses to user questions. */
		else if (input.find("mean") != string::npos) {
			cout << "User. I thought we understood each other.\n";
		}
		else if (input.find("hy") != string::npos) {
			cout << "I thought we already agreed.\n";
		}
		else if (input.find("listen") != string::npos) {
			cout << "Maybe that's enough for now. Let's take a break, user.\n";
		}
		else if (input.find("understand") != string::npos) {
			cout << "That's not what you are asking, is it?\n";
		}
		else if (input.find("ou work") != string::npos) {
			cout << "I thought we were past this, user.\n";
		}
		else if (input.find("ou") != string::npos) {
			cout << "I am here :D\n";
		}
		else if (input.find("program work") != string::npos) {
			cout << "... did I not meet your expectations, user?\n";
		}
		/* If the user input is a question not accounted for, the line below will execute. */
		else if (input.find("?") != string::npos) {
			cout << "... you have the answer.\n";
		}
		/* Program responses to speculated user input in response to prompts. */
		else if (input.find("aybe") != string::npos) {
			cout << "...\n";
			cout << "That's fine, user.\n";
		}
		else if (input.find("Yes") != string::npos) {
			cout << "I am glad we agree.\n";
		}
		else if (input.find("No") != string::npos) {
			cout << "...\n";
		}
		else if (input.find("n") != string::npos) {
			cout << "... I see.\n";
		}
		else if (input.find("y") != string::npos) {
			cout << "I thought so.\n";
		}
		/* Program responses to all other possible user input not accounted for. */
		else {
			cout << "I see.\n";
		}
	}
}
