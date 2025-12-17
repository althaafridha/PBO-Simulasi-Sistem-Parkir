#include "car.h"

Car::Car(std::string p, bool isVIP) : Vehicle(p), vip(isVIP) {}

bool Car::isVIPCar() const {
    return vip;
}

double Car::calculateRate(int hours) const {
    double cost = hours * 5000;
    if (vip) cost *= 1.5;  
    if (hours > 24) cost *= 0.9;
    return cost;
}
