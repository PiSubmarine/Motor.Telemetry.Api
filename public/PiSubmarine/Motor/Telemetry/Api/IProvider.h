#pragma once

#include "PiSubmarine/Motor/Telemetry/Api/OperationalState.h"
#include "PiSubmarine/Motor/Telemetry/Api/Faults.h"
#include "PiSubmarine/Motor/Telemetry/Api/Warnings.h"
#include "PiSubmarine/Error/Api/Result.h"

namespace PiSubmarine::Motor::Telemetry::Api
{
    class IProvider
    {
    public:
        virtual ~IProvider() = default;

        [[nodiscard]] virtual Error::Api::Result<OperationalState> GetOperationalState() const = 0;
        [[nodiscard]] virtual Error::Api::Result<Faults> GetFaults() const = 0;
        [[nodiscard]] virtual Error::Api::Result<Warnings> GetWarnings() const = 0;
    };
}

