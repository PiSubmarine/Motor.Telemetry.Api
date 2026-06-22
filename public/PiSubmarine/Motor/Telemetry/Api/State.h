#pragma once

#include "PiSubmarine/Motor/Telemetry/Api/Faults.h"
#include "PiSubmarine/Motor/Telemetry/Api/OperationalState.h"
#include "PiSubmarine/Motor/Telemetry/Api/Warnings.h"
#include "PiSubmarine/NormalizedFraction.h"
#include "PiSubmarine/Motor/Telemetry/Api/DriveDirection.h"

namespace PiSubmarine::Motor::Telemetry::Api
{
    struct State
    {
        OperationalState Operational{};
        Faults ActiveFaults{};
        Warnings ActiveWarnings{};
        DriveDirection Direction{DriveDirection::Idle};
        NormalizedFraction DriveEffort{0};

        [[nodiscard]] constexpr bool operator==(const State&) const = default;
    };
}
