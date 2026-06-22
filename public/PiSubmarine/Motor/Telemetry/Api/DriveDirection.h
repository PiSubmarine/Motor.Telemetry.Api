#pragma once
#include <cstdint>

namespace PiSubmarine::Motor::Telemetry::Api
{
	enum class DriveDirection : int8_t
	{
		Reverse = -1,
		Idle = 0,
		Forward = 1
	};
}