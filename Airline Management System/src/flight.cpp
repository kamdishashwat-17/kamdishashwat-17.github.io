#include "flight.h"

Flight::Flight(const std::string& flightNumber, const std::string& source,
               const std::string& destination, const std::string& departureTime)
    : flightNumber(flightNumber), source(source), destination(destination), departureTime(departureTime) {}

std::string Flight::getFlightNumber() const {
    return flightNumber;
}

std::string Flight::getSource() const {
    return source;
}

std::string Flight::getDestination() const {
    return destination;
}

std::string Flight::getDepartureTime() const {
    return departureTime;
}
