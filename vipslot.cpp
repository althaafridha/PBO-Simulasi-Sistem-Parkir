#include "vipslot.h"

bool VIPSlot::canPark(Vehicle* v) const {
    Car* c = dynamic_cast<Car*>(v);
    return c && c->isVIPCar();
}
