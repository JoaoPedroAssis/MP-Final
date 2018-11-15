#pragma once

#define RECURSO_INICIAL 50
#define DINHEIRO_INICIAL 200

class Player {
public:
    int pedregulho; //pedra
    int celulose;   //papel
    int metal;      //tesoura
    int dinheiro;
    int pontos;

    Player();

    bool compra_GeraRecurso();
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
