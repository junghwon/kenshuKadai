#ifndef MODEL_CLASS_H
#define MODEL_CLASS_H

#include "model.h"

struct _node {
    int value; // データ
    struct node_t *pPrev; // 前方のノードアドレス
    struct node_t *pNext; // 後方のノードアドレス
};

struct _model {
    // method
    funcCreateNode createNode;
};

// --- groval function
void model_Constructor (model_t *this);

#endif // MODEL_CLASS_H
