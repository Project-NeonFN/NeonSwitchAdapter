
#include <switch.h>

int RestartInput(int argc, char* argv[])
{
    consoleInit(NULL);
    padConfigure(1, HidNpadStyleSet_NpadStandard);

    PadState pad;
    padInitializeDefault(&pad);

    while(appletMainLoop())
    {
        padUpdate(&pad);

        u64 kDown = padGetButtonsDown(&pad);
        if(kDown & HiddbgNpadButton_Home) break;
        consoleUpdate(NULL);
    }
    consoleExit(NULL);
    return 0;
}