#pragma once

#include "PiSubmarine/Motor/Telemetry/Api/Faults.h"
#include "PiSubmarine/Motor/Telemetry/Api/OperationalState.h"
#include "PiSubmarine/Motor/Telemetry/Api/Warnings.h"

namespace PiSubmarine::Motor::Telemetry::Api
{
    struct State
    {
        OperationalState OperationalState{};
        Faults Faults{};
        Warnings Warnings{};

        [[nodiscard]] constexpr bool operator==(const State&) const = default;
    };
}
