// Copyright 2018 João Pedro Assis
#include "../include/Objeto.h"

Objeto::Objeto(int X, int Y, char* image_name) {
    pos_X = X;
    pos_Y = Y;
    imagem = image_name;
}

int Objeto::get_x() {
    return pos_X;
}

int Objeto::get_y() {
    return pos_Y;
}

void Objeto::set_x(int X) {
    pos_X = X;
}

void Objeto::set_y(int Y) {
    pos_Y = Y;
}

char* Objeto::get_img() {
    return imagem;
}

void Objeto::set_img(char* img) {
    imagem = img;
}

Objeto::~Objeto() {
}
