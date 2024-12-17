#include <switch.h>

int main(int argc, char* argv[])
{
    consoleInit(NULL);
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    PadState pad;
    padInitializeDefault(&pad);


    while(appletMainLoop())
    {
        //printf("Getting Fortnite Data Information!\n");
        padUpdate(&pad);
        u64 kDown = padGetButtonsDown(&pad);

        if(kDown & HiddbgNpadButton_Home) break;

        consoleUpdate(NULL);
    }

    consoleExit(NULL);
    return 0;
}