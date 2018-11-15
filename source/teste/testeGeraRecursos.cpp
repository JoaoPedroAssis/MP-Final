//
// Created by pedro on 15/11/18.
//

#define CATCH_CONFIG_MAIN
#include"../include/Head.h"
#include"../include/GeraRecursos.h"
#include"../include/catch.hpp"
/** Teste Construtor
 *  -----------------
 *  Testa se as variaveis são incializadas da seguinte forma:
 *  nivel = 0
 *  tipo = RECURSO[tipo]
 *  taxa = TAXA_COLETA
 */
TEST_CASE("Construtor da Classe"){
    GeraRecursos geradora( RECURSO::PEDREGULHO );


    REQUIRE(geradora.getNivel() == 0);
    REQUIRE(geradora.getTaxa() == TAXA_COLETA);
    REQUIRE(geradora.getTipo() == RECURSO::PEDREGULHO);
}

TEST_CASE("Testando Enum"){
    REQUIRE(RECURSO::CELULOSE == 0);
    REQUIRE(RECURSO::PEDREGULHO == 1);
    REQUIRE(RECURSO::METAL == 2);
}
