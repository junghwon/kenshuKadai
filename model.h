#ifndef MODEL_H
#define MODEL_H

typedef struct _model model_t;
typedef struct _node node_t;

typedef node_t (*funcCreateNode)(model_t *this);

#endif // MODEL_H