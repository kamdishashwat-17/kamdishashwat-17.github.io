#ifndef BOOKING_H
#define BOOKING_H

#include "flight.h"
#include "passenger.h"

class Booking {
private:
    Flight flight;
    Passenger passenger;

public:
    Booking(const Flight& flight, const Passenger& passenger);

    Flight getFlight() const;
    Passenger getPassenger() const;
};

#endif  // BOOKING_H
