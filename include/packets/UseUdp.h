#pragma once

#include "Packet.h"

struct PACKED UseUdp : Packet {
    UseUdp() : Packet() {this->mType = PacketType::USEUDP; mPacketSize = sizeof(UseUdp) - sizeof(UseUdp);};
    bool useUdp = true;
};