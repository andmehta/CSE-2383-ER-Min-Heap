/*
 * Student Name: Andrew Mehta
 * Student NetID: am3258
 * Compiler Used: Eclipse
 * Program Description:
 * This program has the implementation for the  ER queue and the patients
 */

#include "ER_queue.h"
//patient constructors
patient::patient(std::string N, std::string C, int P, int T): name(N), complaint(C), priority(P), ticket(T)
{

}
patient::patient()
{
	name = "";
	complaint = "";
	priority = 5;
	ticket = -1;
}


//ER_queue constructor
ER_queue::ER_queue()
{
	mode = 0;
	next_ticket = 1;
}

//ER_queue methods
int ER_queue::assign_next_ticket()
{
	int next = next_ticket;
	next_ticket++;

	return next;

}

bool ER_queue::insert(std::string N, std::string C, int P)
{
	bool works = 0;
	int ticket = assign_next_ticket();


	patient* add_patient = new patient(N, C, P, ticket);
	heap.push_back(add_patient);

	works = !works;
	return works;
}

patient* ER_queue::remove()
{
	if(!heap.empty()){
		patient* pop = heap.back();
		heap.pop_back();
		return pop;
	}

}

//setters
void ER_queue::set_mode(bool new_mode)
{
	mode = new_mode;
}

//getters
bool ER_queue::get_mode(){return mode;}

