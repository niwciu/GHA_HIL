from py_micro_hil.assertions import *
from py_micro_hil.framework_API import *
import time

slave_id =1
start_address = 0
count = 2

def setup_group():
    global gpio
    global modbus 
    gpio = get_RPiGPIO_peripheral()
    modbus = get_ModBus_peripheral()
    TEST_INFO_MESSAGE("Setting up ModbusOutputTestsGroup")


def teardown_group():
    TEST_INFO_MESSAGE("Tearing down ModbusOutputTestsGroup")


def test_GivenDutResetWhenUserKeyNotPushThenPbStatusDisInEqual0():
    generate_rst()

    gpio.write("USER_KEY","high")
    expected_resp = [False,False,False,False,False,False,False,False]
    readed_disIn = modbus.read_discrete_inputs(slave_id,start_address,count)
    TEST_ASSERT_EQUAL(expected_resp, readed_disIn)

def test_GivenDutResetWhenUserKeyPushThenPbStatusDisInEqual1():
    generate_rst()

    gpio.write("USER_KEY","low")
    expected_resp = [False,True,False,False,False,False,False,False]
    readed_disIn = modbus.read_discrete_inputs(slave_id,start_address,count)
    gpio.write("USER_KEY","high")
    TEST_ASSERT_EQUAL(expected_resp, readed_disIn)


def generate_rst():
    gpio.write("NRST","low")
    time.sleep(0.001)
    gpio.write("NRST","high")