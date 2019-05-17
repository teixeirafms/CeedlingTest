#ifndef _LIGHTS_H
#define _LIGHTS_H

#include <stdbool.h>

void lights_SetHeadlightSwitchOff(void);
void lights_SetHeadlightSwitchOn(void);
bool lights_AreHeadlightsOn(void);
void lights_SetHeadlightSwitchValueBool(bool bVal);
void lights_SetHeadlightSwitchValueInt(int iVal);

#endif // _LIGHTS_H
