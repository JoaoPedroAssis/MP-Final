//
// Created by pedro on 14/11/18.
//
#include <GeraRecursos.h>


void produzirRecurso(Player jogador){

}
/**
 * Construtor da class GeraRecursos
 * @brief
 *
 *
 */
GeraRecursos::GeraRecursos(int tipo) : tipo(tipo) {
    tipo = tipo;
}

/* Destructor */
GeraRecursos::~GeraRecursos() {

}

/* Get e Setters */
int GeraRecursos::getNivel() const {
    return nivel;
}

void GeraRecursos::setNivel(int nivel) {
    GeraRecursos::nivel = nivel;
}

int GeraRecursos::getTaxa() const {
    return taxa;
}

void GeraRecursos::setTaxa(int taxa) {
    GeraRecursos::taxa = taxa;
}

int GeraRecursos::getTipo() const {
    return tipo;
}

void GeraRecursos::setTipo(int tipo) {
    GeraRecursos::tipo = tipo;
}
