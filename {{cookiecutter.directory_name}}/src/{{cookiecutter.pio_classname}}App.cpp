{%- if cookiecutter.framework == 'Arduino' -%}
#include <Arduino.h>

{%- if cookiecutter.use_u8g2 -%}
#include <U8g2lib.h>
{%- endif -%}
{%- if cookiecutter.use_fastled -%}
#include <FastLED.h>
{%- endif -%}
{%- elif cookiecutter.framework == 'ESP-IDF'-%}
#include <stdlib.h>
#include <string.h>
#include <sys/cdefs.h>
#include "esp_log.h"
#include "esp_attr.h"
{%- endif -%}

#include "config.h"

#include "{{  cookiecutter.pio_classname   }}App.h"

{{ cookiecutter.pio_classname }}App::{{  cookiecutter.pio_classname }}App() {

}

{{ cookiecutter.pio_classname }}App::~{{  cookiecutter.pio_classname }}App() {

}

virtual void {{ cookiecutter.pio_classname }}App::Setup() {

}

virtual void {{ cookiecutter.pio_classname }}App::Loop() {

}
{%- elif cookiecutter.framework == 'ESP-IDF'-%}
{%- endif -%}
