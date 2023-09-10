// Copyright Epic Games, Inc. All Rights Reserved.

#include "Vod.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "example.h"

#define LOCTEXT_NAMESPACE "FVodModule"

void FVodModule::StartupModule()
{
	auto message = hello::sayHello();
	FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(message));
}

void FVodModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FVodModule, Vod)
