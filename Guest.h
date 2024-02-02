#ifndef GUEST_H
#define GUEST_H

class Guest : User {

private:
	String Email;
	Int Phone_no;

public:
	void SearchRoom();

	void GiveFeedback();
};

#endif
