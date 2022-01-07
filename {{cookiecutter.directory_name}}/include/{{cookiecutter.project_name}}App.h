#pragma once

#ifndef __HAS__{{ cookiecutter.project_name.upper() }}App.h
#define __HAS__{{ cookiecutter.project_name.upper() }}App.h

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

{%- if cookiecutter.framework == 'Arduino' -%}
class {{ cookiecutter.project_name}}App
{
    private:
        // Instance variables
    public:
        {{ cookiecutter.projectName }}App();
        ~{{ cookiecutter.projectName }}App();
        virtual void Setup();
        virtual void Loop();
};

{%- elif cookiecutter.framework == 'ESP-IDF'-%}
{%- endif -%}

#endif /* __HAS__{{ cookiecutter.project_name.upper() }}APP_H */
