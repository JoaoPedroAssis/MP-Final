#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

int main(){
    cout << "Hello World!" << endl;
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Quit();
}

