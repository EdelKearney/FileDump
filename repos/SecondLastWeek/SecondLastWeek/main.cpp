#include <iostream>
#include "customer.h"

Customer* createCustomerLinkedList()
{

	Customer* sean = new Customer("Sean", 777);
	Customer* damien = new Customer("Damien", 666);
	Customer* joel = new Customer("Joel", 555);
	

	sean->setNext(damien);
	sean->setPrev(NULL);

	damien->setNext(joel);
	damien->setPrev(sean);

	joel->setNext(NULL);
	joel->setPrev(damien);

	Customer* marie = new Customer("Marie", 888);
	damien->addToList(marie);
	
//	damien->removeFromList();

	return sean;
}

void printCustomerLinkedList(Customer* start)
{
	Customer* c = start;

	while (c != NULL)
	{
		c->getName();
		c->getID();

		//std::cout << "Name: " << c->getName() << ", ID: " << c->getID() << std::endl;
	
		c = c->getNext();
	}
}

int main()
{
	Customer* startOfList = createCustomerLinkedList();

	

	printCustomerLinkedList(startOfList);

	return 1;
}