#ifndef MODEL_H
#define MODEL_H

typedef struct {
    int value; // データ
    struct node_t *pPrev; // 前方のノードアドレス
    struct node_t *pNext; // 後方のノードアドレス
} node_t;

typedef struct _model model_t;
typedef void (*funcInsertNode)(model_t *this, int value);

#endif // MODEL_H