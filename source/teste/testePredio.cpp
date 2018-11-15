// Copyright 2018 João Pedro Assis
#define CATCH_CONFIG_MAIN
#include "../../include/Predio.h"
#include "../../include/Objeto.h"
#include "../../lib/catch.hpp"

TEST_CASE("Compile") {
    SECTION("Compile") {
        REQUIRE(1 == 1);
    }
}

TEST_CASE("Constructor") {
    SECTION("Check inheritance") {
        // test case que verifica se a herança foi feita
        // corretamente
        Predio prd(30, 40, "papeleira.png");
        int x, y;
        char* img;
        x = prd.get_x();
        y = prd.get_y();
        img = prd.get_img();

        REQUIRE(x == 30);
        REQUIRE(y == 40);
        REQUIRE(img == "papeleira.png");
    }
}
