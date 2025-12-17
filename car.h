#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
    bool vip;

public:
    Car(std::string p, bool isVIP);
    bool isVIPCar() const;
    double calculateRate(int hours) const override;
};

#endif
