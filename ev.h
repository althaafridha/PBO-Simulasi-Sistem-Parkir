#ifndef EV_H
#define EV_H

#include "vehicle.h"

class EV : public Vehicle {
    bool charging;

public:
    EV(std::string p, bool c);
    bool needsCharging() const;
    double calculateRate(int hours) const override;
};

#endif
