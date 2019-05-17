#include "lights.h"
#include <stdbool.h>


static bool areLightsOn = false;

void lights_SetHeadlightSwitchOff(void)
{
    areLightsOn = false;
}

void lights_SetHeadlightSwitchOn(void)
{
    areLightsOn = true;
}

bool lights_AreHeadlightsOn(void)
{
  return areLightsOn;
}

void lights_SetHeadlightSwitchValueInt(int val)
{
  if (val < 0)
  {
    return;
  }

  if (val == 0)
  {
    areLightsOn = false;
  }
  else if (val == 1)
  {
    areLightsOn = true;
  }
  else
  {
    areLightsOn != areLightsOn;
  }
}

void lights_SetHeadlightSwitchValueBool(bool bVal)
{
  if (bVal)
  {
    areLightsOn = true;
  }
  else
  {
    areLightsOn = false;
  } 
}