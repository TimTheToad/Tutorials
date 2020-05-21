////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "LocalizationGame.h"
#include "MainWindow.h"
#include "LevelToColorConverter.h"

DEFINE_LOG_CATEGORY(LogNoesisLocalization)

class LocalizationSampleModule : public FDefaultGameModuleImpl
{
    virtual void StartupModule() override
    {
        Noesis::RegisterComponent<Localization::LevelToColorConverter>();
        Noesis::RegisterComponent<Localization::MainWindow>();
    }

    virtual void ShutdownModule() override
    {
        Noesis::UnregisterComponent<Localization::LevelToColorConverter>();
        Noesis::UnregisterComponent<Localization::MainWindow>();
    }
};

IMPLEMENT_PRIMARY_GAME_MODULE(LocalizationSampleModule, LocalizationSample, "LocalizationSample" );
