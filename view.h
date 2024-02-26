#ifndef VIEW_H
#define VIEW_H

#include "model.h"

typedef struct _view view_t;

typedef void (*funcMenuDisplay)(void);
typedef void (*funcSelectDisplay)(int number);
typedef void (*funcInsertDisplay)(void);
typedef void (*funcViewDisplay)(node_t *node);

#endif // VIEW_H