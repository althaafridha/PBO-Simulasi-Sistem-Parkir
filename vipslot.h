#ifndef VIPSLOT_H
#define VIPSLOT_H

#include "parkingslot.h"
#include "car.h"

class VIPSlot : public ParkingSlot {
public:
    bool canPark(Vehicle* v) const override;
};

#endif
