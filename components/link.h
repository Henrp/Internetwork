#pragma once

#include <queue>
#include "types.h"
using namespace std;

struct Link
{
    int bandwidth;
    int propagation_delay;
    bool busy = false;
    queue<Packet> q;

    int transmission_delay(const Packet &p) const;
};
