#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Head.h"
#define RECURSO_INICIAL 50
#define DINHEIRO_INICIAL 200

using namespace std;

class Player {
public:
    /* funcionalidades */
    bool compra_GeraRecurso(int recurso);

    bool compra_Fabrica();

    bool atualizar_recursos();
    int pedregulho; //pedra
    int celulose;   //papel
    int metal;      //tesoura
    int dinheiro;
    int pontos;

    /*Listas de Objetos*/
    vector<GeraRecursos> lista_GeraRecursos;
    vector<Fabrica> lista_Fabrica;
    vector<Unidade> lista_Unidade;
    /* Construtor e destrutor */
    Player();

    virtual ~Player();

    /* Get e Set*/
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

#endif //PLAYER_H
