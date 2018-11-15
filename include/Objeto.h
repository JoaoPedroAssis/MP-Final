// Copyright 2018 João Pedro Assis
#pragma once
#include "Objeto.h"

class Objeto {
 public:
    Objeto(int X, int Y, char* image_name);
    char* imagem;
    void render();

    int get_x();
    void set_x(int X);

    int get_y();
    void set_y(int Y);

    char* get_img();
    void set_img(char* img);
    ~Objeto();
 protected:
    int pos_X;
    int pos_Y;
};
