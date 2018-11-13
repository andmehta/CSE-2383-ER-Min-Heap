/*
 * ER_queue.h
 *
 *  Created on: Nov 7, 2018
 *      Author: pie_0
 */

#ifndef ER_QUEUE_H_
#define ER_QUEUE_H_

#include <vector>
#include <string>

class patient
{
public:
	//attributes
	std::string name;
	std::string complaint;
	int priority;
	int ticket;


	//constructors
	patient();
	patient(std::string, std::string, int, int);


};


class ER_queue
{
private:
	//attributes
	std::vector<patient*> heap;
	bool mode;
	int next_ticket;

public:
	//constructors
	ER_queue();

	//methods
	bool insert(std::string, std::string, int);
	int assign_next_ticket();//also increments next_ticket
	patient* remove();
	void set_mode(bool);
	bool get_mode();
};




#endif /* ER_QUEUE_H_ */
