//
// Created by pedro on 15/11/18.
//
#include "../include/Player.h"

/**Construtor da classe Player
 * -------------------------
 * Seta todos os atributos para os valores inciais, e os pontos para 0
 */
Player::Player() {
    pedregulho = RECURSO_INICIAL;
    celulose = RECURSO_INICIAL;
    metal = RECURSO_INICIAL;
    pontos = 0;
    dinheiro = DINHEIRO_INICIAL;
}

bool compra_GeraRecurso(int recurso){

}


int Player::getPedregulho() const {
    return pedregulho;
}

void Player::setPedregulho(int pedregulho) {
    Player::pedregulho = pedregulho;
}

int Player::getCelulose() const {
    return celulose;
}

void Player::setCelulose(int celulose) {
    Player::celulose = celulose;
}

int Player::getMetal() const {
    return metal;
}

void Player::setMetal(int metal) {
    Player::metal = metal;
}

int Player::getDinheiro() const {
    return dinheiro;
}

void Player::setDinheiro(int dinheiro) {
    Player::dinheiro = dinheiro;
}

int Player::getPontos() const {
    return pontos;
}

void Player::setPontos(int pontos) {
    Player::pontos = pontos;
}
