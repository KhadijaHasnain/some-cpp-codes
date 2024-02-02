#ifndef ROOM_H
#define ROOM_H

class Room {

private:
	Int RoomNo;
	Int RoomPrice;
	String RoomType;
	String RoomStatus;

public:
	void Checkavaliblity();

	void Checkin();

	void Checkout();
};

#endif
