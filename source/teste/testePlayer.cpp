//
// Created by pedro on 15/11/18.
//
#include"../include/Player.h"
#include"../include/catch.hpp"

TEST_CASE("Construtor da classe Player"){
    Player cpu;
    REQUIRE(cpu.getCelulose() == RECURSO_INICIAL);
    REQUIRE(cpu.getPedregulho() == RECURSO_INICIAL);
    REQUIRE(cpu.getPontos()== 0);
    REQUIRE(cpu.getDinheiro() == DINHEIRO_INICIAL);
    REQUIRE(cpu.getMetal() == RECURSO_INICIAL);
}