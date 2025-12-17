#include "vehicle.h"

Vehicle::Vehicle(std::string p) : plate(p) {
    arrivalTime = time(nullptr);
}

time_t Vehicle::getArrivalTime() const {
    return arrivalTime;
}
