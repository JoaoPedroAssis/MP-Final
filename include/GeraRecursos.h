#ifndef GERA_RECURSOS_H
#define GERA_RECURSOS_H

#include "Predio.h"
#include "Player.h"
#include "Head.h"

#define TAXA_COLETA 5

class GeraRecursos : public Predio {
public:

    GeraRecursos(int tipo);

    void geraRecuros(Player jogador, char* recurso);

    ~GeraRecursos();

    int getNivel() const;

    void setNivel(int nivel);

    int getTaxa() const;

    void setTaxa(int taxa);

    int getTipo() const;

    void setTipo(int tipo);

    //~GeraRecursos();

private:
    int nivel = 0; //Nivel incial 0
    int taxa = TAXA_COLETA; //Taxa de coleta inicial TAXA_COLETA
    int tipo; //Selecionado pelo construtor

};

#endif //GERA_RECURSOS_H
