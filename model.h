#ifndef MODEL_H
#define MODEL_H

#define NODE_MAX (1)
#define NODE_NUM (NODE_MAX + 1)

typedef struct {
    int value; // データ
    struct _node *pPrev; // 前方のノードアドレス
    struct _node *pNext; // 後方のノードアドレス
} node_t;

typedef struct _model model_t;
typedef void (*funcInsertNode)(model_t *this, int value);

#endif // MODEL_H