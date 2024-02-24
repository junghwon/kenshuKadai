#ifndef KEY_CONTROLLER_CLASS_H
#define KEY_CONTROLLER_CLASS_H

#include "keyController.h"

struct _keyController {
    char keyCode;
    char keyCodeBuff;
    int scaned;

    funcScanKey scanKey;
    funcAsciiToVinaly asciiToVinaly;
};

void keyController_Constructor (keyController_t *this);

#endif // KEY_CONTROLLER_CLASS_H