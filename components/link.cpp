#include "link.h"
#include "types.h"
using namespace std;

int Link::transmission_delay(const Packet &p) const
{
    return p.size / bandwidth;
}
