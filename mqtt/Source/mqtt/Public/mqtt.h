// Copyright 2019 Warp Studios, All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FmqttModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
