//
// Created by pedro on 16/11/18.
//

#include <Objeto.h>
#include <Unidade.h>

Unidade::Unidade(char *imagem, int pos_X, int pos_Y, int vida, int velocidade, int dano) : Objeto(imagem, pos_X, pos_Y),
                                                                                           vida(vida),
                                                                                           velocidade(velocidade),
                                                                                           dano(dano) {}
