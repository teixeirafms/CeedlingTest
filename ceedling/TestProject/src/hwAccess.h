#ifndef _HWACCESS_H
#define _HWACCESS_H

#include <stdbool.h>

int readHWRegister(int regId);
int writeHWRegister(int regId);

#endif // _HWACCESS_H
