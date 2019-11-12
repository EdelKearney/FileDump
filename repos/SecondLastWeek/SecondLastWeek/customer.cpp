#include <iostream>
#include "customer.h"

std::string Customer::getName() const
{
	return name;
}

int Customer::getID() const
{
	return id;
}

void Customer::setName(std::string nParam)
{
	name = nParam;
}

void Customer::setID(int idParam)
{
	id = idParam;
}

Customer::Customer(std::string nParam, int idParam)
	:name(nParam), id(idParam)
{
	next = NULL;
	prev = NULL;
}

void Customer::setNext(Customer* custParam)
{
	next = custParam;
}

void Customer::setPrev(Customer* custParam)
{
	prev = custParam;
}

Customer* Customer::getNext() const
{
	return next;
}

Customer* Customer::getPrev() const
{
	return prev;
}

void Customer::removeFromList()
{
	if (next != NULL)
	{
		next->setPrev(prev);
	}
	
	if (prev != NULL)
	{
		prev->setNext(next);
	}
	


	next = NULL;
	prev = NULL;

}

void Customer::addToList(Customer* toAdd)
{
	Customer* after = next;
	toAdd->setNext(next);
	toAdd->setPrev(this);

	this->next = toAdd;

	if (after != NULL)
	{
		after->setPrev(toAdd);
	}
	
}
