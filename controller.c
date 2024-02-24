#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "controllerClass.h"

// --- static function
static void modeTransition (controllerMode_t *mode, int selectNo)
{
    switch (selectNo) {
        default:
        break;
        case 1:
        break;
        case 2:
        break;
        case 3:
        break;
        case 9:
            *mode = controllerMode_quit;
        break;
    }
}

static void menuManager (controller_t *this)
{
    static subMode_t subMode = subMode_1;
    int selectNo = 0;

    switch (subMode) {
        default:
        case subMode_1:
            subMode = subMode_2;
            this->view.menuDisplay (&this->view);
        break;
        case subMode_2:
            if (this->keyController.scaned) {
                subMode = subMode_1;
                selectNo = this->keyController.asciiToVinaly (&this->keyController);
                this->view.selectDisplay (&this->view, selectNo);
                modeTransition (&this->controllerMode, selectNo);
            }
        break;
    }
}

static void quitManager (void)
{
    exit (0);
}

// --- method
static void controllerManager (controller_t *this)
{
    switch (this->controllerMode) {
        default:
        case controllerMode_menu:
            menuManager (this);
        break;
        case controllerMode_view:
        break;
        case controllerMode_insert:
        break;
        case controllerMode_delete:
        break;
        case controllerMode_quit:
            quitManager ();
        break;
    }
}

// --- groval function
void controller_Constructor (controller_t *this)
{
    this->controllerMode = controllerMode_menu;
    this->controllerManager = &controllerManager;

    keyController_Constructor (&this->keyController);
    view_Constructor (&this->view);
}