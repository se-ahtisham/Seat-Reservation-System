#include"list.h"



list::list()
{
	head = NULL;
	count = 0;
}


void list::BookTicket(string name, int ticketnumber) {
	Seat* newseat = new Seat();
	newseat->Setname(name);
	newseat->Setnumber(ticketnumber);

	if (head == nullptr) {
		head = newseat;
		count++;
		cout << "Successfully reserved seat" << endl;
		newseat->Setstatus(true);
		return;
	}

	Seat* temp = head;
	while (temp != nullptr) {
		if (temp->getnumber() == ticketnumber) {
			cout << "Seat already taken" << endl;
			delete newseat; // Delete the newly created seat if not used
			return;
		}
		else if (temp->getnextlink() == nullptr) {
			temp->setnextlink(newseat);
			newseat->setprelink(temp);
			newseat->setnextlink(NULL);
			count++;
			newseat->Setstatus(true);
			cout << "Successfully reserved seat" << endl;
			return;
		}
		temp = temp->getnextlink();
	}
}


void list::SearchforSeat(int ticketnumber) {
	if (head == nullptr)
	{
		cout << "List is Empty" << endl;
	}

	else {

		Seat* temp = head;
		while (temp->getnextlink() != NULL && temp->getnumber() != ticketnumber)
		{
			temp = temp->getnextlink();
		}

		if (temp->getnumber() == ticketnumber)
		{
			cout << " Record Found " << endl;
			cout << " Name is: " << temp->getname() << endl;;
			cout << " Number is: " << temp->getnumber() << endl;
			return;
		}
		else {
			cout << " Record Not Found " << endl;
		}

	}



}
// false not reserved true for reserved
void list::printreserveSeats() {
	if (head == nullptr)
	{
		cout << "List is Empty" << endl;
	}

	else {

		Seat* temp = head;
		while (temp != NULL)
		{
			if (temp->getstatus() == true)
			{
				cout << endl;
				cout << "------------------------------------------" << endl;
				cout << " Name is: " << temp->getname() << endl;
				cout << " Number is: " << temp->getnumber() << endl;
				cout << "------------------------------------------";

			}
			else {
				cout << "Not found" << endl;
			}
			temp = temp->getnextlink();
		}

	}

}



void list::UpdatSeatinfo(string oldname, string newname) {

	if (head == nullptr)
	{
		cout << "List is Empty" << endl;
	}
	else {

		Seat* temp = head;
		while (temp->getnextlink() != NULL && temp->getname() != oldname)
		{
			temp = temp->getnextlink();
		}

		if (temp->getname() == oldname)
		{

			cout << endl;
			cout << " Previous Record Found " << endl;
			cout << " Name is: " << temp->getname() << endl;
			cout << " Number is: " << temp->getnumber() << endl;
			cout << " Record is Updated " << endl;
			temp->Setname(newname);
			return;
		}
		else {
			cout << " Record Not Found " << endl;
		}
	}

}


void list::CancelTicket(int ticketnumber) {

	if (head == NULL)
	{
		delete head;
		count--;
		cout << "Delete Successfully" << endl;
	}
	else
	{
		Seat* temp = head;
		Seat* previous = nullptr;
		Seat* delet = nullptr;
		while (temp != NULL && temp->getnumber() != ticketnumber)
		{
			previous = temp;
			temp = temp->getnextlink();
		}
		previous->setnextlink(temp->getnextlink());
		delet = temp;
		if (temp->getnextlink() == NULL)
		{
			// means This is Last elemnet"
			delete temp;
			previous->setnextlink(NULL);
			cout << "Delete Successfully" << endl;
			count--;
		}
		else
		{
			temp = temp->getnextlink();
			temp->setprelink(delet->getprelink());
			delete delet;
			cout << "Delete Successfully" << endl;
			count--;
		}



	}




}

