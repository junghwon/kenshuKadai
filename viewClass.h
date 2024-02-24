#ifndef VIEW_CLASS_H
#define VIEW_CLASS_H

#include "view.h"

#define VIEW_LINE   10
#define VIEW_COLUMN 30

struct _view {
    // method
    funcMenuDisplay menuDisplay;
    funcSelectDisplay selectDisplay;
};

// --- groval function
void view_Constructor (view_t *this);

#endif // VIEW_CLASS_H