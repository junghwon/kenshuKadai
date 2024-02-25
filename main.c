#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <pthread.h>
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