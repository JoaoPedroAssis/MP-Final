//
// Created by pedro on 15/11/18.
//

#include <../include/Predio.h>

Predio::Predio(char *imagem, int pos_X, int pos_Y, int vida) : Objeto(imagem, pos_X, pos_Y), vida(vida) {}

Predio::Predio(int vida) : vida(vida) {}

Predio::~Predio() {

}
