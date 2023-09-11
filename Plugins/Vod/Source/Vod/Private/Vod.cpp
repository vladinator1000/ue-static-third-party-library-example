// Copyright Epic Games, Inc. All Rights Reserved.

#include "Vod.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Counter.h"

void FVodModule::StartupModule()
{
	auto store = lager::make_store<counter::action>(
		counter::model{}, lager::with_manual_event_loop{});
}

void FVodModule::ShutdownModule()
{
}

IMPLEMENT_MODULE(FVodModule, Vod)
