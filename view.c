#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "viewClass.h"

// --- method
static void menuDisplay (view_t *this)
{
    printf ("******* MENU *******\n");
    printf ("1) View\n");
    printf ("2) Insert\n");
    printf ("3) Delete\n");
    printf ("9) Quit\n");
}

static void selectDisplay (view_t *this, int Number)
{
    printf ("Input No = %d\n", Number);
}

// --- groval function
void view_Constructor (view_t *this)
{
    this->menuDisplay = &menuDisplay;
    this->selectDisplay = &selectDisplay;
}