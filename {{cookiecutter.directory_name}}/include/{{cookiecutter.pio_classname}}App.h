#pragma once

#ifndef __HAS__{%- cookiecutter.pio_classname.upper() -%}_APP_H__
#define __HAS__{%- cookiecutter.pio_classname.upper() -%}_APP_H__

{%- if cookiecutter.framework == 'Arduino' -%}
#include <Arduino.h>
{%- elif cookiecutter.framework == 'ESP-IDF'-%}
#include <stdlib.h>
#include <string.h>
#include <sys/cdefs.h>

#include "esp_log.h"
#include "esp_attr.h"
{%- endif -%}

#include "config.h"

{%- if cookiecutter.use_u8g2 -%}
#include <U8g2lib.h>
{%- endif -%}
{%- if cookiecutter.use_fastled -%}
#include <FastLED.h>
{%- endif -%}

#include "{{ cookiecutter.pio_classname  }}App.h"

{%- if cookiecutter.framework == 'Arduino' -%}
class {{ cookiecutter.pio_classname}}App
{
    private:
        // Instance variables
    public:
        {{ cookiecutter.pio_classname }}App();
        ~{{ cookiecutter.pio_classname }}App();
        virtual void Setup();
        virtual void Loop();
};

{%- elif cookiecutter.framework == 'ESP-IDF'-%}
{%- endif -%}

#endif /* __HAS__{%- cookiecutter.pio_classname.upper() -%}_APP_H__ */
