#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

#include "vehicle.h"

class ParkingSlot {
protected:
    bool occupied;

public:
    ParkingSlot();
    virtual ~ParkingSlot() {}
    bool isOccupied() const;
    void occupy();
    void release();
    virtual bool canPark(Vehicle* v) const = 0;
};

#endif
