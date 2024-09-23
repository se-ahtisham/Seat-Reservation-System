#include"seat.h"

class list {
private:
	int count;
	Seat* head;

public:
	list();
	void BookTicket(string name, int ticketnumber);
	void CancelTicket(int ticketnumber);
	void printreserveSeats();
	void SearchforSeat(int ticketnumber);
	void UpdatSeatinfo(string oldname, string newname);



};