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

static void connect (node_t *pNode1, node_t *pNode2)
{
    pNode1->pNext = (struct _node *)pNode2;
    pNode2->pPrev = (struct _node *)pNode1;
}

// --- method
static void insertNode (model_t *this, int value)
{
    if (this->nodeNum <= NODE_MAX) {
        this->node[this->nodeNum] = createNode ();

        this->node[this->nodeNum]->value = nodeInitialvalue.value;
        this->node[this->nodeNum]->pPrev = nodeInitialvalue.pPrev;
        this->node[this->nodeNum]->pNext = nodeInitialvalue.pNext;

        this->node[this->nodeNum]->value = value;

        if (this->nodeNum == NODE_MAX) {
            connect (this->node[0], this->node[1]);
        }

        this->nodeNum++;
    }    
}

// --- groval function
void model_Constructor (model_t *this)
{
    this->insertNode = &insertNode;
    this->nodeNum = 0;
}