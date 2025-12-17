#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <ctime>

class Vehicle {
protected:
    std::string plate;
    time_t arrivalTime;

public:
    Vehicle(std::string p);
    virtual ~Vehicle() {}
    time_t getArrivalTime() const;
    virtual double calculateRate(int hours) const = 0;
};

#endif
