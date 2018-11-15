// Copyright 2018 João Pedro Assis
#define CATCH_CONFIG_MAIN
#include "../../include/Objeto.h"
#include "../../lib/catch.hpp"

TEST_CASE("Compile") {
    SECTION("Compile") {
        REQUIRE(1 == 1);
    }
}

TEST_CASE("Object") {
    SECTION("INIT X Y") {
        Objeto obj(30, 40, "tesoura.png");
        int x, y;
        char* img;

        x = obj.get_x();
        y = obj.get_y();
        img = obj.get_img();

        REQUIRE(x == 30);
        REQUIRE(y == 40);
        REQUIRE(img == "tesoura.png");
    }

    SECTION("SET/GET") {
        Objeto obj(30, 40, "tesoura.png");
        obj.set_x(50);
        obj.set_y(60);
        obj.set_img("papel.png");
        int x, y;
        char* img;
        x = obj.get_x();
        y = obj.get_y();
        img = obj.get_img();

        REQUIRE(x == 50);
        REQUIRE(y == 60);
        REQUIRE(img == "papel.png");
    }
}
