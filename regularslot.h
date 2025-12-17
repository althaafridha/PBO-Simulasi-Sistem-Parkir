#ifndef REGULARSLOT_H
#define REGULARSLOT_H

#include "parkingslot.h"

class RegularSlot : public ParkingSlot {
public:
    bool canPark(Vehicle*) const override;
};

#endif
