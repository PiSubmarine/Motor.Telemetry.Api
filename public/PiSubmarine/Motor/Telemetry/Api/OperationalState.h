#pragma once

namespace PiSubmarine::Motor::Telemetry::Api
{
    enum class OperationalState
    {
        Operational,
        Degraded,
        Faulted
    };
}
