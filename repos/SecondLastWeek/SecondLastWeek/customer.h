#pragma once
#include <iostream>

class Customer
{
public:
	void setName(std::string nParam);
	void setID(int idParam);

	std::string getName() const;
	int getID() const;

	void setNext(Customer* custParam);
	void setPrev(Customer* custParam);

	Customer* getNext() const;
	Customer* getPrev() const;

	void removeFromList();
	void addToList(Customer* toAdd);

	Customer(std::string nParam, int idParam);

private:
	std::string name;
	int id;
	Customer* next;
	Customer* prev;
};