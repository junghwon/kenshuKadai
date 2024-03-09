#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "viewClass.h"
#include "model.h"

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

static void viewDisplay (node_t *node)
{
    printf ("Node addr = %d\n", node);
    printf ("value = %d\n", node->value);
    printf ("p_prev = %d\n", node->pPrev);
    printf ("p_next = %d\n", node->pNext);
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
    this->viewDisplay = &viewDisplay;
}