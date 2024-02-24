#ifndef VIEW_H
#define VIEW_H

typedef struct _view view_t;

typedef void (*funcMenuDisplay)(view_t *this);
typedef void (*funcSelectDisplay)(view_t *this, int Number);

#endif // VIEW_H