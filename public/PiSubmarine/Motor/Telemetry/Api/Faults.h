#pragma once
#include <cstdint>

namespace PiSubmarine::Motor::Telemetry::Api
{
    enum class Faults : uint32_t
    {
        Overcurrent = (1 << 0),
        Overtemperature = (1 << 1),
        Undervoltage = (1 << 2),
        Overvoltage = (1 << 3),
        OpenLoad = (1 << 4),
    };
}
