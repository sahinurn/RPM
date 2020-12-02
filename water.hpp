#pragma once
#include "Pokemon.hpp"


class Water : protected Pokemon{
    public:
        Water(std::string l_pokemonName, int l_pokemonHP, int l_pokemonATK, int l_pokemonDEF, int l_pokemonSPD, std::string l_pokemonSpecATK, std::string l_pokemonSpecDEF)
        {
            m_pokemonName = l_pokemonName;
            m_pokemonHP = l_pokemonHP;
            m_pokemonATK = l_pokemonATK;
            m_pokemonDEF = l_pokemonDEF;
            m_pokemonSPD = l_pokemonSPD;
            m_pokemonSpecATK = l_pokemonSpecATK;
            m_pokemonSpecDEF = l_pokemonSpecDEF;
        }
        void print(std::string pok_name);

        void setPokemonSpecATK(std::string l_pokemonSpecATK);
        std::string getPokemonSpecATK(){return m_pokemonSpecATK;};

        void setPokemonSpecDEF(std::string l_pokemonSpecDEF);
        std::string getPokemonSpecDEF(){return m_pokemonSpecDEF;};


    private:
        std::string m_pokemonSpecATK;
        std::string m_pokemonSpecDEF;

};