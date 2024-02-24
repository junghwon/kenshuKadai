#ifndef CONTROLLER_CLASS_H
#define CONTROLLER_CLASS_H

#include "controller.h"
#include "keyControllerClass.h"
#include "viewClass.h"

typedef enum {
    controllerMode_menu = 0,
    controllerMode_view,
    controllerMode_insert,
    controllerMode_delete,
    controllerMode_quit = 9,
} controllerMode_t;

typedef enum {
    subMode_1,
    subMode_2,
} subMode_t;

struct _controller {
    // field
    controllerMode_t controllerMode;
    // method
    funcControllerManager controllerManager;
    // composition
    keyController_t keyController;
    view_t view;
};

// --- groval function
void controller_Constructor (controller_t *this);

#endif // CONTROLLER_CLASS_H