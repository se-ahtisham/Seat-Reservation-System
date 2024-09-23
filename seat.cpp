#include"seat.h"

Seat::Seat() {
	seatnumber = 0;
	string name = "";
	status = false;

	pre = nullptr;
	next = nullptr;
}

void Seat::Setname(string name1) {
	this->name = name1;
}
string  Seat::getname() {
	return name;
}

void Seat::Setstatus(bool s1)
{
	this->status = s1;

}
bool Seat::getstatus()
{
	return status;
}

void Seat::Setnumber(int n1) {
	this->seatnumber = n1;
}
int Seat::getnumber()
{
	return seatnumber;
}


void Seat::setprelink(Seat* pre1) {
	pre = pre1;
}
Seat* Seat::getprelink() {
	return pre;
}

void Seat::setnextlink(Seat* next1) {
	next = next1;
}
Seat* Seat::getnextlink()
{
	return next;
}



