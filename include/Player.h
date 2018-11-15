#pragma once

#include <vector>
#include "Head.h"
#define RECURSO_INICIAL 50
#define DINHEIRO_INICIAL 200

using namespace std;

class Player {
public:
    Player();

    int pedregulho; //pedra
    int celulose;   //papel
    int metal;      //tesoura
    int dinheiro;
    int pontos;

    /*Listas de Objetos*/
    vector<GeraRecursos> lista_GeraRecursos;
    vector<Fabrica> lista_Fabrica;
    vector<Unidade> lista_Unidade;

    bool compra_GeraRecurso(int recurso);

    bool compra_Fabrica();

    int getPedregulho() const;

    void setPedregulho(int pedregulho);

    int getCelulose() const;

    void setCelulose(int celulose);

    int getMetal() const;

    void setMetal(int metal);

    int getDinheiro() const;

    void setDinheiro(int dinheiro);

    int getPontos() const;

    void setPontos(int pontos);
    /* Listas ver como fazer */

};
