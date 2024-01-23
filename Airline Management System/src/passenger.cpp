#include "passenger.h"

Passenger::Passenger(const std::string& name, const std::string& email)
    : name(name), email(email) {}

std::string Passenger::getName() const {
    return name;
}

std::string Passenger::getEmail() const {
    return email;
}
