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

bool Player::compra_GeraRecurso(int recurso){
    bool success = true; // Incializa a flag de sucesso
    /* Se tiver recursos e dinheiro para comprar*/
    if( Player::pedregulho > PRECO_RECURSO_GERA && Player::dinheiro > PRECO_DINHEIRO_GERA) {
        /* Retira os recusos da compra */
        Player::pedregulho -= PRECO_RECURSO_GERA;
        Player::dinheiro -= PRECO_DINHEIRO_GERA;
        /* Compra*/
        success = true;
    }else{
        success = false;
    }
    return success;

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
