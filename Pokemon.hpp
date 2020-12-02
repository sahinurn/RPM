#pragma once

#include <string>

class Pokemon{


    protected:
        std::string m_pokemonName;
        int m_pokemonHP;
        int m_pokemonATK;
        int m_pokemonDEF;
        int m_pokemonSPD;


    public:
        Pokemon();
        Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonATK, int l_pokemonDEF, int l_pokemonSPD);
        ~Pokemon();

        void setPokemonName(std::string l_pokemonName);
        std::string getPokemonName(){return m_pokemonName;};

        void setPokemonHP(int l_pokemonHP);
        int getPokemonHP(){return m_pokemonHP;};

        void setPokemonATK(int l_pokemonATK);
        int getPokemonATK(){return m_pokemonATK;};

        void setPokemonDEF(int l_pokemonDEF);
        int getPokemonDEF(){return m_pokemonDEF;};

        void setPokemonSPD(int l_pokemonSPD);
        int getPokemonSPD(){return m_pokemonSPD;};


        void print();
        
};