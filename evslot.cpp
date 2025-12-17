#include "evslot.h"

bool EVSlot::canPark(Vehicle* v) const {
    return dynamic_cast<EV*>(v) != nullptr;
}
