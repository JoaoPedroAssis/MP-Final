// Copyright 2018 João Pedro Assis
#pragma once
#include "Predio.h"

/**
 * @brief 
 * 
 */
class Fabrica : public Predio {
 public:
    Fabrica() : Predio() {}
    void geraUnidade();
    ~Fabrica();
 protected:
    int tempoEspera;
    int nivel;
    int tipo;
};
