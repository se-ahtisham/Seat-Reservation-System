#include"list.h"

int main()
{
	list l;
	int choice = 1;
	int seatnumber = 0;
	string newname = "";
	int newseatnumber = 0;
	string name = "";
	cout << endl;
	cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t\t\t::::::::::::  Ticket Management System  ::::::::::::" << endl;
	cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << endl;
	while (choice != 0)
	{
		int schoice = 0;
		cout << endl;
		cout << " 1. Press 1 to Book Ticket" << endl;
		cout << " 2. Press 2 to Search for Seat" << endl;
		cout << " 3. Press 3 to Update Seat info" << endl;
		cout << " 4. Press 4 to Display reserve Seats" << endl;
		cout << " 5. Press 5 to Cancel Ticket" << endl;
		cout << endl;
		cout << " Please Enter your choice:  ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << endl;
			cout << "Please Enter Name: ";
			cin >> name;
			cout << "Please Enter Ticket Number: ";
			cin >> seatnumber;
			l.BookTicket(name, seatnumber);
			cout << endl;
		}
		break;

		case 2:
		{
			cout << endl;
			cout << "Please Enter Ticket Number: ";
			cin >> seatnumber;
			l.SearchforSeat(seatnumber);
		}
		break;

		case 3:
		{
			cout << endl;
			cout << "Please Enter Old Name: ";
			cin >> name;
			cout << "Please Enter New Name: ";
			cin >> newname;
			l.UpdatSeatinfo(name, newname);
		}
		break;

		case 4:
		{
			l.printreserveSeats();
			cout << endl;
		}
		break;

		case 5:
		{
			cout << endl;
			cout << "Please Enter Ticket Number: ";
			cin >> seatnumber;
			l.CancelTicket(seatnumber);
		}
		break;



		default:
		{
			cout << endl;
			cout << "Error. Invaild Input!" << endl;
		}
		break;
		} //Switch Cases

		cout << endl;
		cout << " >>> Press Any key run again and 0 for exit: ";
		cin >> choice;
	}



	system("pause");
}