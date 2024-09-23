
#include<iostream>
#include<string>
using namespace std;

class Seat {
private:
	int seatnumber;
	string name;

	Seat* pre;
	Seat* next;

	bool status;

public:

	Seat();

	void Setname(string name1);
	string getname();

	void Setnumber(int n1);
	int getnumber();

	void Setstatus(bool s1);
	bool getstatus();

	void setprelink(Seat* pre1);
	Seat* getprelink();

	void setnextlink(Seat* next1);
	Seat* getnextlink();


};
