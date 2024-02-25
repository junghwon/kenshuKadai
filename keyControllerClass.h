#ifndef KEY_CONTROLLER_CLASS_H
#define KEY_CONTROLLER_CLASS_H

#include "keyController.h"

struct _keyController {
    int inputValue;

    funcScanKey scanKey;
};

void keyController_Constructor (keyController_t *this);

#endif // KEY_CONTROLLER_CLASS_H