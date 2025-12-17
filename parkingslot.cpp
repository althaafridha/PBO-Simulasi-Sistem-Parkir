#include "parkingslot.h"

ParkingSlot::ParkingSlot() : occupied(false) {}

bool ParkingSlot::isOccupied() const { return occupied; }
void ParkingSlot::occupy() { occupied = true; }
void ParkingSlot::release() { occupied = false; }
