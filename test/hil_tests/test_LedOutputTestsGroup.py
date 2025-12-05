from py_micro_hil.assertions import *
from py_micro_hil.framework_API import *
import time


def setup_group():
    global gpio
    gpio = get_RPiGPIO_peripheral()
    TEST_INFO_MESSAGE("Setting up LedOutputTestsGroup")


def teardown_group():
    TEST_INFO_MESSAGE("Tearing down LedOutputTestsGroup")


def test_GivenDutResetWhenUserKeyLongPushThenLedOn():
    generate_rst()
    generate_long_push()
    intpu_state = gpio.read("LED_OUT_PIN")
    TEST_ASSERT_EQUAL(1,intpu_state)

def test_GivenDutResetAndLedOnWhenUserKeyShortPushThenLedOff():
    generate_rst()
    generate_long_push()
    intpu_state = gpio.read("LED_OUT_PIN")

    generate_short_push()
    intpu_state = gpio.read("LED_OUT_PIN")
    TEST_ASSERT_EQUAL(0,intpu_state)

def generate_rst():
    gpio.write("NRST","low")
    time.sleep(0.001)
    gpio.write("NRST","high")

def generate_long_push():
    gpio.write("USER_KEY","low")
    time.sleep(1.1) # LONG_PUSH_BUTTON_TIME
    gpio.write("USER_KEY","high")

def generate_short_push():
    gpio.write("USER_KEY","low")
    time.sleep(0.1) # SHORT_PUSH_BUTTON_TIME
    gpio.write("USER_KEY","high")