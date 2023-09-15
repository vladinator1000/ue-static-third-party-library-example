// Copyright Epic Games, Inc. All Rights Reserved.

#include "Vod.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Counter.h"
#include "lager/event_loop/manual.hpp"

THIRD_PARTY_INCLUDES_START
#include "UndefineMacros_UE_4.17.h"
#include <lager/event_loop/manual.hpp>
#include <lager/store.hpp>
#include "RedefineMacros_UE_4.17.h"
THIRD_PARTY_INCLUDES_END

void FVodModule::StartupModule()
{
	// auto store = lager::make_store<counter::action>(
	// 	counter::model{}, lager::with_manual_event_loop{});
}

void FVodModule::ShutdownModule()
{
}

IMPLEMENT_MODULE(FVodModule, Vod)
