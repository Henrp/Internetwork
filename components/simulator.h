#pragma once

#include <queue>
#include "types.h"
#include "link.h"
using namespace std;

struct simulator
{
    priority_queue<Event> events;
    vector<Link> links;
};