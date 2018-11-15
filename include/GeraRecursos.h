#pragma once
#include "Predio.h"

class GeraRecursos : public Predio {
public:
    GeraRecursos() : Predio() {} 
    void mudaTaxa();
    void geraRecuros(Player jogador, string recurso);
    ~GeraRecursos();
private:
    int nivel;
    int taxa;
    int tipo;

};