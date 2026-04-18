#pragma once

#include "PiSubmarine/Motor/Telemetry/Api/State.h"
#include "PiSubmarine/Error/Api/Result.h"

namespace PiSubmarine::Motor::Telemetry::Api
{
    class IProvider
    {
    public:
        virtual ~IProvider() = default;

        [[nodiscard]] virtual Error::Api::Result<State> GetState() const = 0;
    };
}

