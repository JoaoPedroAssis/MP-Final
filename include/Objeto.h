// Copyright 2018 João Pedro Assis
#pragma once
#include "Objeto.h"

/**
 * @class Objeto Objeto.h 
 * 
 * @brief Classe Objeto, responsável pela rederização da posição
 * e imagem de todos os objetos do jogo (unidades, prédios e menus)
 * 
 * A classe de testes possui três variáveis, pos_x, pox_y e imagem.
 * São responsáveis pela devida inicialização da classe, que será herdada
 * por qualquer instância que precisar de tais atributos
 */
class Objeto {
 public:
    Objeto(int X, int Y, char* image_name);
    char* imagem;
    // por fazer
    void render();

    /**
     * @brief Retorna a coordenada Y da posição do objeto
     * 
     * @return int pos_X 
     */
    int get_x();
    /**
     * @brief Inicializa a coordenada X do objeto
     *  
     * @param X - coordenada x
     */
    void set_x(int X);

    /**
     * @brief Retorna a coordenada Y da posição do objeto
     * 
     * @return int pos_Y
     */
    int get_y();
    /**
     * @brief Inicializa a coordenada Y do objeto
     * 
     * @param Y - coordenada y
     */
    void set_y(int Y);

    /**
     * @brief Retorna o nome do arquivo que contém a imagem do objeto
     * 
     * @return char* - imagem
     */
    char* get_img();
    /**
     * @brief Inicializa o nome do arquivo que contém a imagem do objeto
     * 
     * @param img 
     */
    void set_img(char* img);

    ~Objeto();

 protected:
    int pos_X;
    int pos_Y;
};
