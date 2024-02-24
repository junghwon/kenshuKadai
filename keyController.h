#ifndef KEY_CONTROLLER_H
#define KEY_CONTROLLER_H

typedef struct _keyController keyController_t;

typedef void (*funcScanKey)(keyController_t *this);
typedef int (*funcAsciiToVinaly)(keyController_t *this);

#endif // KEY_CONTROLLER_H