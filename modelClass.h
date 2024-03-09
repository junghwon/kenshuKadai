#ifndef MODEL_CLASS_H
#define MODEL_CLASS_H

#include "model.h"

struct _model {
    // field
    node_t *node[NODE_NUM];
    int nodeNum;
    // method
    funcInsertNode insertNode;
};

// --- groval function
void model_Constructor (model_t *this);

#endif // MODEL_CLASS_H
