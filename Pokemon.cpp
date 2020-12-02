 #include "Pokemon.hpp"
 #include <iostream>


Pokemon::Pokemon(){};
Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonATK, int l_pokemonDEF, int l_pokemonSPD){
    m_pokemonName = l_pokemonName;
    m_pokemonATK = l_pokemonATK;
    m_pokemonHP = l_pokemonHP;
    m_pokemonDEF = l_pokemonDEF;
    m_pokemonSPD = l_pokemonSPD;
}

Pokemon::~Pokemon(){}

void Pokemon::setPokemonName(std::string l_pokemonName){
    m_pokemonName = l_pokemonName;
}

void Pokemon::setPokemonHP(int l_pokemonHP){
    m_pokemonHP = l_pokemonHP;
}

void Pokemon::setPokemonATK(int l_pokemonATK){
    m_pokemonATK = l_pokemonATK;
}

void Pokemon::setPokemonDEF(int l_pokemonDEF){
    m_pokemonDEF = l_pokemonDEF;
}

void Pokemon::setPokemonSPD(int l_pokemonSPD){
    m_pokemonSPD = l_pokemonSPD;
}

void Pokemon::print() {
    if(m_pokemonName != ""){std::cout << "Name: " << m_pokemonName << std::endl;}
    std::cout << "HP: " << m_pokemonHP << std::endl;
    std::cout << "Attack: " << m_pokemonATK << std::endl;
    std::cout << "Defense: " << m_pokemonDEF << std::endl;
    std::cout << "Speed: " << m_pokemonSPD << std::endl;
    std::cout << std::endl;
}