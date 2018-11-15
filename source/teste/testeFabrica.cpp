// Copyright 2018 João Pedro Assis
#define CATCH_CONFIG_MAIN
#include "../../include/Fabrica.h"
#include "../../lib/catch.hpp"

TEST_CASE("Compile") {
    SECTION("Compile") {
        REQUIRE(1 == 1);
    }
}

TEST_CASE("Class Fabrica") {
    SECTION("Check inheritance") {
        Fabrica fbrc(30, 40, "gera_pedra.png", PEDRA);
        int x, y;
        char* img;
        x = fbrc.get_x();
        y = fbrc.get_y();
        img = fbrc.get_img();

        fbrc.set_vida(100);

        REQUIRE(x == 30);
        REQUIRE(y == 40);
        REQUIRE(img == "gera_pedra.png");
        REQUIRE(fbrc.get_vida() == 100);
    }
}

