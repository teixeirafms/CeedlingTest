#include "buttons.h"
#include <stdbool.h>
#include "hwAccess.h"

bool buttons_GetState(int buttonId)
{
  return (bool)readHWRegister(buttonId);
}
