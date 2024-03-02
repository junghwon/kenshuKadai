#include <stdio.h>
#include <stdlib.h>
#include "controllerClass.h"

int main (int argc, char *argv[])
{
    controller_t controller;
    controller_Constructor (&controller);

    while (1) {
        controller.controllerManager (&controller);
    }

    return (0);
}