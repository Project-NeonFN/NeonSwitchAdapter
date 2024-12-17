#pragma once
#include <switch.h>
#include "restartInput.h"
int Fortnite(int argc, char* argv[])
{
	static bool FortniteConsoleInformation()
	{
		const bool NintendoSwitchFortniteConsoleVersion(bool version = "2.2.0");
		const bool NintendoSwitchFortniteGameDevelopers(bool developers = "Epic Games Inc.");

		switch(NintendoSwitchFortniteConsoleVersion())
		{
			RestartConsoleInput input;
			input.InputRestart;
		}

		return 0;
	}
}