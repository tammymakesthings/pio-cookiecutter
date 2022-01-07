{%- if cookiecutter.framework == 'Arduino' -%}
#include <Arduino.h>
{%- elsif cookiecutter.framework == 'ESP-IDF' -%}
#include <stdlib.h>
#include <string.h>
#include <sys/cdefs.h>
#include "esp_log.h"
#include "esp_attr.h"
{%- endif -%}

#include "config.h"
#include "{{cookiecutter.pio_classname}}App.h"
#include "unity.h"

void Test_{{cookiecutter.pio_classname}}App_Setup() {
    TEST_ASSERT_EQUAL(true, true);
}

void Test_{{cookiecutter.pio_classname}}App_Loop() {
    TEST_ASSERT_EQUAL(true, true);
}

{{cookiecutter.pio_classname}}App gApp = {{cookiecutter.pio_classname}}App();

const uint16_t  iStartupDelay       = 2000;
const uint16_t  iTestDelay          = 250;
const uint8_t   iMaxTestCycles      = 5;
uint8_t         iCurrentTestCycle   = 0;

void setup() {
    delay(iStartupDelay);    // Wait for the board to come online

    UNITY_BEGIN();

    RUN_TEST(Test_{{cookiecutter.pio_classname}}App_Setup);
}

void loop() {
    if (iCurrentTestCycle < iMaxTestCycles) {
        RUN_TEST(Test_{{cookiecutter.pio_classname}}App_Loop);
        delay(iTestDelay);
    }
    else if (iCurrentTestCycle == iMaxTestCycles) {
        UNITY_END();
    }
}
