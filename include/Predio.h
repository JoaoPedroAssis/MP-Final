// Copyright 2018 João Pedro Assis
#pragma once
#include "Objeto.h"
// #include "Menu.h"


class Predio : public Objeto {
 public:
    int vida;
    Predio(int X, int Y, char* image_name) : Objeto(X, Y, image_name) {}
    void destroy();

    ~Predio() {}

    void set_vida(int vida);

 
    //  Menu menu();
};

