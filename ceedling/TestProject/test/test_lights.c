#include "unity.h"
#include "lights.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_WhenTheHeadlightSwitchIsOn_ThenTheHeadLightsAreOn2(void)
{
  // When the headlight switch is on...
  lights_SetHeadlightSwitchValueBool(true);
  // then the headlights are on.
  TEST_ASSERT_EQUAL(true, lights_AreHeadlightsOn());
}

void test_WhenTheHeadlightSwitchIsOn_ThenTheHeadLightsAreOff2(void)
{
  // When the headlight switch is on...
  lights_SetHeadlightSwitchValueBool(false);
  // then the headlights are on.
  TEST_ASSERT_EQUAL(false, lights_AreHeadlightsOn());
}

void test_WhenTheHeadlightSwitchIsOn_ThenTheHeadLightsAreOn(void)
{
  // When the headlight switch is on...
  lights_SetHeadlightSwitchOn();
  // then the headlights are on.
  TEST_ASSERT_EQUAL(true, lights_AreHeadlightsOn());
}

void test_WhenTheHeadlightSwitchIsOff_ThenTheHeadLightsAreOff(void)
{
  // When the headlight switch is off...
  lights_SetHeadlightSwitchOff();
  // then the headlights are off.
  TEST_ASSERT_EQUAL(false, lights_AreHeadlightsOn());
}

void test_lights_SetHeadlightSwitchValueUint_withNegativeValueShouldNotChange(void)
{
  bool lightPreviousValue;

  lights_SetHeadlightSwitchOn();
  lightPreviousValue = lights_AreHeadlightsOn();
  lights_SetHeadlightSwitchValueInt(-1);
  TEST_ASSERT_EQUAL(lightPreviousValue, lights_AreHeadlightsOn());

  lights_SetHeadlightSwitchOff();
  lightPreviousValue = lights_AreHeadlightsOn();
  lights_SetHeadlightSwitchValueInt(-1);
  TEST_ASSERT_EQUAL(lightPreviousValue, lights_AreHeadlightsOn());
}


void test_lights_SetHeadlightSwitchValueUint_withValue_1(void)
{
  lights_SetHeadlightSwitchOn();
  lights_SetHeadlightSwitchValueInt(1);
  TEST_ASSERT_EQUAL(true, lights_AreHeadlightsOn());

  lights_SetHeadlightSwitchOff();
  lights_SetHeadlightSwitchValueInt(1);
  TEST_ASSERT_EQUAL(true, lights_AreHeadlightsOn());
}

void test_lights_SetHeadlightSwitchValueUint_withValue_0(void)
{
  lights_SetHeadlightSwitchOn();
  lights_SetHeadlightSwitchValueInt(0);
  TEST_ASSERT_EQUAL(false, lights_AreHeadlightsOn());

  lights_SetHeadlightSwitchOff();
  lights_SetHeadlightSwitchValueInt(0);
  TEST_ASSERT_EQUAL(false, lights_AreHeadlightsOn());
}

#if 1
void test_lights_SetHeadlightSwitchValueUint_withValue_Higher1(void)
{
  lights_SetHeadlightSwitchOn();
  lights_SetHeadlightSwitchValueInt(2);
  TEST_ASSERT_EQUAL(true, lights_AreHeadlightsOn());

  lights_SetHeadlightSwitchOff();
  lights_SetHeadlightSwitchValueInt(3);
  TEST_ASSERT_EQUAL(false, lights_AreHeadlightsOn());
}
#endif