// Copyright 2018 Switch Dreams
#pragma once

#include <iostream>
#include <SDL2/SDL.h>
#include "Jogo.h"
#include "Objeto.h"
#include "Menu.h"
#include "Predio.h"
#include "Unidade.h"
#include "Fabrica.h"
#include "GeraRecursos.h"
#include "Player.h"

#define TAXA_COLETA 10

using namespace std;

enum UNIDADE {Papel, Pedra, Tesoura};

enum RECURSO {Celulose, Pedregulho, Metal};
