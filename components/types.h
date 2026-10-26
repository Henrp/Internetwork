#pragma once

struct Event
{
    int time;
    int link_state; // 1 = in queue, 2 = in link, 3 = complete
};

struct Packet
{
    int input_time;
    int size;
};