#pragma once

#include "engine/core/main/module.h"

namespace Echo
{
	class AIModule : public Module
	{
	public:
		AIModule();

		// register all types of the module
		virtual void registerTypes();
	};
}
