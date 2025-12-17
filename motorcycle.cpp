#include "motorcycle.h"

Motorcycle::Motorcycle(std::string p) : Vehicle(p) {}

double Motorcycle::calculateRate(int hours) const {
    double cost = hours * 2000;
    if (hours > 24) cost *= 0.9;
    return cost;
}
