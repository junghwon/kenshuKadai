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

// --- method
static node_t createNode (model_t *this)
{

}

// --- groval function
void model_Constructor (model_t *this)
{
    this->createNode = &createNode;
}