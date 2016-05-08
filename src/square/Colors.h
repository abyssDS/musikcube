#pragma once

#include "stdafx.h"

#define BOX_COLOR_WHITE_ON_BLUE 1
#define BOX_COLOR_RED_ON_BLUE 2
#define BOX_COLOR_YELLOW_ON_BLUE 3
#define BOX_COLOR_BLACK_ON_GREY 4
#define BOX_COLOR_BLACK_ON_GREEN 5

class Colors {
    private:
        Colors();

    public:
        static void Init();
};