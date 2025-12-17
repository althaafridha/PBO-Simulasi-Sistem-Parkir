#ifndef PARKINGGARAGE_H
#define PARKINGGARAGE_H

#include <map>
#include "exceptions.h"
#include "regularslot.h"
#include "evslot.h"
#include "vipslot.h"

class ParkingGarage {
    RegularSlot regular;
    EVSlot ev;
    VIPSlot vip;

    std::map<int, Vehicle*> tickets;
    std::map<int, ParkingSlot*> usedSlots;
    int nextTicket;

public:
    ParkingGarage();
    int park(Vehicle* v);
    double unpark(int ticketId);
};

#endif
