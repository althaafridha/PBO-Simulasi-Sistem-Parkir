#include "parkinggarage.h"
#include <cmath>

ParkingGarage::ParkingGarage() : nextTicket(1) {}

int ParkingGarage::park(Vehicle* v) {
    ParkingSlot* slot = nullptr;

    // Prioritas: VIP Car -> VIP Slot, EV -> EV Slot, sisanya -> Regular
    if (vip.canPark(v) && !vip.isOccupied()) {
        slot = &vip;
    }
    else if (ev.canPark(v) && !ev.isOccupied()) {
        slot = &ev;
    }
    else if (regular.canPark(v) && !regular.isOccupied()) {
        slot = &regular;
    }

    if (!slot) throw NoAvailableSlotException();

    slot->occupy();
    tickets[nextTicket] = v;
    usedSlots[nextTicket] = slot;
    return nextTicket++;
}

double ParkingGarage::unpark(int ticketId) {
    if (tickets.find(ticketId) == tickets.end())
        throw InvalidTicketException();

    Vehicle* v = tickets[ticketId];
    ParkingSlot* s = usedSlots[ticketId];

    int hours = std::ceil(
        difftime(time(nullptr), v->getArrivalTime()) / 3600.0
    );
    if (hours < 1) hours = 1;

    double cost = v->calculateRate(hours);

    s->release();
    tickets.erase(ticketId);
    usedSlots.erase(ticketId);
    delete v;

    return cost;
}
