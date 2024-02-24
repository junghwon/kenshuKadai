#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <pthread.h>
#include "controllerClass.h"

static void mainThread (controller_t *instance);
static void keyScanThread (keyController_t *instance);

int main (int agc, char *argv[])
{
    controller_t controller;
    controller_Constructor (&controller);

    pthread_t thread1, thread2;
    int ret1, ret2;

    ret1 = pthread_create (&thread1, NULL, (void *)mainThread, &controller);
    ret2 = pthread_create (&thread2, NULL, (void *)keyScanThread, &controller.keyController);

    ret1 = pthread_join (thread1, NULL);
    ret2 = pthread_join (thread2, NULL);

    return (0);
}

static void mainThread (controller_t *instance)
{
    while (1) {
        instance->controllerManager (instance);
    }
}

static void keyScanThread (keyController_t *instance)
{ 
    while (1) {
        instance->scanKey (instance);
    }
}

