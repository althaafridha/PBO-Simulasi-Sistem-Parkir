#include "ev.h"

EV::EV(std::string p, bool c) : Vehicle(p), charging(c) {}

bool EV::needsCharging() const {
    return charging;
}

double EV::calculateRate(int hours) const {
    double cost = hours * 4000;
    if (charging) cost += 3000;
    if (hours > 24) cost *= 0.9;
    return cost;
}
