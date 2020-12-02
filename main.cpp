#include <iostream>
#include "Pokemon.hpp"
#include "fire.hpp"
#include "water.hpp"
#include "earth.hpp"
#include <fstream>


int main(){

    std::ofstream myfile;
    myfile.open("end.txt");
    Fire pokemonOne("Charizard", 200, 30, 40, 150, "Big Fire", "Frie wall");
    Water pokemonTwo("Wartortle", 200, 40, 60, 100, "Water blast", "Water blocks");
    Earth pokemonThree("Chumba", 170, 20, 10, 200, "Bone flip", "Skull block");

    pokemonOne.print("pokemon One");
    pokemonTwo.print("pokemon Two");
    pokemonThree.print("pokemon Three");
    myfile.close();
    return 0;

}