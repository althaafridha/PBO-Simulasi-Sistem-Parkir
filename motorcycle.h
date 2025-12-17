#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "vehicle.h"

class Motorcycle : public Vehicle {
public:
    Motorcycle(std::string p);
    double calculateRate(int hours) const override;
};

#endif
