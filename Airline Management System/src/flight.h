#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>

class Flight {
private:
    std::string flightNumber;
    std::string source;
    std::string destination;
    std::string departureTime;

public:
    Flight(const std::string& flightNumber, const std::string& source,
           const std::string& destination, const std::string& departureTime);

    std::string getFlightNumber() const;
    std::string getSource() const;
    std::string getDestination() const;
    std::string getDepartureTime() const;
};

#endif  // FLIGHT_H
