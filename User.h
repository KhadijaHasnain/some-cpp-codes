#ifndef USER_H
#define USER_H

class User {

private:
	String Name;
	String Status;
	Int ID;
	int password;

public:
	void Login();

	void Logout();
};

#endif
