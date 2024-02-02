#ifndef BOOKING_H
#define BOOKING_H

class Booking {

private:
	Int BookingNo;
	int CheckinDate;
	Int CheckoutDate;
	String BookingStatus;

public:
	void RoomBooking();

	void UpdateBooking();

	void CancelBooking();

	void ConfirmBooking();

	void ViewBooking();
};

#endif
