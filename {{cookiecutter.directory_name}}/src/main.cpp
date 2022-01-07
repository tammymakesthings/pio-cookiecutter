{%- if cookiecutter.framework == 'Arduino' -%}
#include <Arduino.h>
{%- elif cookiecutter.framework == 'ESP-IDF'-%}
{%- endif -%}

#include "config.h"

{%- if cookiecutter.use_u8g2 -%}
#include <U8g2lib.h>
{%- endif -%}
{%- if cookiecutter.use_fastled -%}
#include <FastLED.h>
{%- endif -%}

#include "{{ cookiecutter.project_name  }}App.h"

{{ cookiecutter.project_name }}App gApp = {{ cookiecutter.project_name }}App();

void setup() {
    gApp.Setup();
}

void loop() {
    gApp.Loop();
}

{%- elif cookiecutter.framework == 'ESP-IDF'-%}
{%- endif -%}
