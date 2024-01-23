#include <iostream>
#include "flight.h"
#include "passenger.h"
#include "booking.h"

int main() {
    // Create flight object
    Flight flight("FL123", "New York", "Los Angeles", "2023-06-01 10:00");

    // Create passenger objects
    Passenger passenger1("Shashwat Kamdi", "Shashwatkamdi@example.com");
    Passenger passenger2("Kritika Singh", "KritikaSingh@example.com");

    // Create booking objects
    Booking booking1(flight, passenger1);
    Booking booking2(flight, passenger2);

    // Display flight information
    std::cout << "Flight Information:" << std::endl;
    std::cout << "Flight Number: " << flight.getFlightNumber() << std::endl;
    std::cout << "Source: " << flight.getSource() << std::endl;
    std::cout << "Destination: " << flight.getDestination() << std::endl;
    std::cout << "Departure Time: " << flight.getDepartureTime() << std::endl;

    // Display passenger information
    std::cout << std::endl << "Passenger Information:" << std::endl;
    std::cout << "Passenger 1: " << passenger1.getName() << " (" << passenger1.getEmail() << ")" << std::endl;
    std::cout << "Passenger 2: " << passenger2.getName() << " (" << passenger2.getEmail() << ")" << std::endl;

    // Display booking information
    std::cout << std::endl << "Booking Information:" << std::endl;
    std::cout << "Booking 1: Flight " << booking1.getFlight().getFlightNumber() << " - Passenger "
              << booking1.getPassenger().getName() << std::endl;
    std::cout << "Booking 2: Flight " << booking2.getFlight().getFlightNumber() << " - Passenger "
              << booking2.getPassenger().getName() << std::endl;

    return 0;
}
