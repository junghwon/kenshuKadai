#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "viewClass.h"

// --- method
static void menuDisplay (void)
{
    printf ("******* MENU *******\n");
    printf ("1) View\n");
    printf ("2) Insert\n");
    printf ("3) Delete\n");
    printf ("9) Quit\n");
}

static void selectDisplay (int number)
{
    printf ("Input No = %d\n", number);
}

static void insertDisplay (void)
{
    printf ("Input value = ");
}

// --- groval function
void view_Constructor (view_t *this)
{
    this->menuDisplay = &menuDisplay;
    this->selectDisplay = &selectDisplay;
    this->insertDisplay = &insertDisplay;
}