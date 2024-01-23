#include "booking.h"

Booking::Booking(const Flight& flight, const Passenger& passenger)
    : flight(flight), passenger(passenger) {}

Flight Booking::getFlight() const {
    return flight;
}

Passenger Booking::getPassenger() const {
    return passenger;
}
