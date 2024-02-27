#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "modelClass.h"

// --- initial value
const node_t nodeInitialvalue = {
    0,
    NULL,
    NULL,
};

// --- static function
static node_t *createNode (void)
{
    return ((node_t*)malloc (sizeof (node_t)));
}

// --- method
static void insertNode (model_t *this, int value)
{
    this->node = createNode ();

    this->node->value = nodeInitialvalue.value;
    this->node->pPrev = nodeInitialvalue.pPrev;
    this->node->pNext = nodeInitialvalue.pNext;

    this->node->value = value;
}

// --- groval function
void model_Constructor (model_t *this)
{
    this->insertNode = &insertNode;
}