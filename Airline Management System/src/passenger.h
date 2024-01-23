#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
private:
    std::string name;
    std::string email;

public:
    Passenger(const std::string& name, const std::string& email);

    std::string getName() const;
    std::string getEmail() const;
};

#endif  // PASSENGER_H
