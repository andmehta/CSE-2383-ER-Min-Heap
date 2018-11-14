/*
 * Student Name: Andrew Mehta
 * Student NetID: am3258
 * Compiler Used: Eclipse
 * Program Description:
 * This program runs the interface for the ER queue
 */


#include <iostream>
#include <string>
#include "ER_queue.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int options_build();
int options_run();
void display_patient(ER_queue &ER_queue);
void add_pat(ER_queue &ER_queue);


int main()
{
	ER_queue ER_queue;


	ER_queue.insert("Andrew", "headache", 3);

	add_pat(ER_queue);
	display_patient(ER_queue);
	display_patient(ER_queue);

	return 0;
}
/*int main()
{
	cout << "WELCOME TO THE ER\n" << endl;

	ER_queue ER_queue;

	while (!ER_queue.get_mode())
	{
	switch (options_build()){
	//add a patient
	case 1: add_pat(ER_queue);
			break;
	//enter run mode
	case 2: ER_queue.set_mode(true);
			cout << "\nRun Mode\n" << endl;
			//run mode
				while (ER_queue.get_mode())
				{
					switch(options_run())
					{
					//peek
					case 1: display_patient(ER_queue);
							break;
					//remove
					case 2: display_patient(ER_queue);
							break;
					//exit
					case 3: ER_queue.set_mode(false);
							break;
					}


				}
			break;

	//exit
	case 3: ER_queue.set_mode(true);
			break;
							}
	}


	return 0;
}*/

int options_build()
{
	int answer;

	//display options and ask for an option
	cout << "1: ADD \t2: RUN \t3: EXIT " << endl;
	cout << "What would you like to do? ";
	cin >> answer;


	return answer;
}

int options_run()
{
	int answer;

	//display options and ask for one
	cout << "1: PEEK \t2: REMOVE \t3: EXIT " << endl;
	cout << "What would you like to do? ";
	cin >> answer;

	return answer;
}

void display_patient(ER_queue &ER_queue)
{
	patient* pop = ER_queue.remove();

	cout << "Name: " << pop->name << "\n"
		 <<	"Complaint: " << pop->complaint << "\n"
		 << "Ticket: " << pop->ticket << endl;

	delete pop;
}
void add_pat(ER_queue &ER_queue)
{
	string name;
	string complaint;
	int priority;
	cout << "what is the patients name? ";
	cin >> name;

	cout << "What is the patients complaint? ";
	cin >> complaint;

	cout << "What is the patients priority?(1-5) ";
	cin >> priority;

	ER_queue.insert(name, complaint, priority);


}
