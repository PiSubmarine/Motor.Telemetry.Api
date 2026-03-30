#pragma once
#include <cstdint>

namespace PiSubmarine::Motor::Telemetry::Api
{
    enum class Warnings : uint32_t
    {
        Temperature = (1 << 0)
    };
}
