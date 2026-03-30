#pragma once

#include "PiSubmarine/Motor/Telemetry/Api/OperationalState.h"
#include "PiSubmarine/Motor/Telemetry/Api/Faults.h"
#include "PiSubmarine/Motor/Telemetry/Api/Warnings.h"

namespace PiSubmarine::Motor::Telemetry::Api
{
    class IProvider
    {
    public:
        virtual ~IProvider() = default;

        [[nodiscard]] virtual OperationalState GetOperationalState() const = 0;
        [[nodiscard]] virtual Faults GetFaults() const = 0;
        [[nodiscard]] virtual Warnings GetWarnings() const = 0;
    };
}

