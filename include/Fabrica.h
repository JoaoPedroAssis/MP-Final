// Copyright 2018 João Pedro Assis
#pragma once
#include "Predio.h"

enum TIPO {PAPEL, PEDRA, TESOURA};
/**
 * @brief 
 * 
 */
class Fabrica : public Predio {
 public:
    Fabrica(int X, int Y, char* image_name, TIPO tipo)
    : Predio(X, Y, image_name) {
       Fabrica::tipo = tipo;
    }

    void geraUnidade();
    ~Fabrica() {}
 protected:
    int tempoEspera;
    int nivel;
    int tipo;
};
