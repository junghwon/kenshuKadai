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
            *mode = controllerMode_view;
        break;
        case 2:
            *mode = controllerMode_insert;
        break;
        case 3:
        break;
        case 9:
            *mode = controllerMode_quit;
        break;
    }
}

static void menuMode (controller_t *this)
{
    this->view.menuDisplay ();

    if (this->keyController.scanKey (&this->keyController)) {
        modeTransition (&this->controllerMode, this->keyController.inputValue);
    }
}

static void viewMode (controller_t *this)
{
    this->view.viewDisplay (this->model.node);
    this->controllerMode = controllerMode_menu;
}

static void insertMode (controller_t *this)
{
    this->view.insertDisplay ();

    if (this->keyController.scanKey (&this->keyController)) {
        this->controllerMode = controllerMode_menu;
        this->model.insertNode (&this->model, this->keyController.inputValue);
    }
}

static void quitMode (void)
{
    exit (0);
}

// --- method
static void controllerManager (controller_t *this)
{
    switch (this->controllerMode) {
        default:
        case controllerMode_menu:
            menuMode (this);
        break;
        case controllerMode_view:
            viewMode (this);
        break;
        case controllerMode_insert:
            insertMode (this);
        break;
        case controllerMode_delete:
        break;
        case controllerMode_quit:
            quitMode ();
        break;
    }
}

// --- groval function
void controller_Constructor (controller_t *this)
{
    this->controllerMode = controllerMode_menu;
    this->controllerManager = &controllerManager;

    keyController_Constructor (&this->keyController);
    model_Constructor (&this->model);
    view_Constructor (&this->view);
}