#include "unity.h"
#include "buttons.h"

#define ENABLE_MOCKED_HARDWARE_ACCESS

// We should include needed header files or declare it as a mock
#ifdef ENABLE_MOCKED_HARDWARE_ACCESS
  #include "mock_hwAccess.h"
#else
  #include "hwAccess.h"
#endif


// Include file with the mocked functions
#ifdef ENABLE_MOCKED_HARDWARE_ACCESS
#include "mock_hwAccess.c"
#endif

void setUp(void)
{
  #ifdef ENABLE_MOCKED_HARDWARE_ACCESS
  InitArray();
  readHWRegister_StubWithCallback(mock_readHWRegister);
  writeHWRegister_StubWithCallback(mock_writeHWRegister);
  #endif
}

void tearDown(void)
{
}


void test_GetButtonsState(void)
{
  TEST_ASSERT_EQUAL(false, buttons_GetState(2));
  TEST_ASSERT_EQUAL(false, buttons_GetState(2));

  TEST_ASSERT_EQUAL(false, buttons_GetState(1));
  TEST_ASSERT_EQUAL(true, buttons_GetState(1));
  TEST_ASSERT_EQUAL(false, buttons_GetState(1));
  TEST_ASSERT_EQUAL(true, buttons_GetState(1));
  TEST_ASSERT_EQUAL(false, buttons_GetState(1));
}
