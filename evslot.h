#ifndef EVSLOT_H
#define EVSLOT_H

#include "parkingslot.h"
#include "ev.h"

class EVSlot : public ParkingSlot {
public:
    bool canPark(Vehicle* v) const override;
};

#endif
