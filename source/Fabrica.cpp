//
// Created by pedro on 16/11/18.
//

#include <Predio.h>
#include <Fabrica.h>

Fabrica::Fabrica(char *imagem, int pos_X, int pos_Y, int vida, int tempoEspera, int nivel, int tipo) : Predio(imagem,
                                                                                                              pos_X,
                                                                                                              pos_Y,
                                                                                                              vida),
                                                                                                       tempoEspera(
                                                                                                               tempoEspera),
                                                                                                       nivel(nivel),
                                                                                                       tipo(tipo) {}

Fabrica::~Fabrica() {

}
