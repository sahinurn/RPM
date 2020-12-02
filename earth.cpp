#include "earth.hpp"
#include <iostream>
#include <fstream>

void Earth::print(std::string pok_name){
    std::ofstream myfile;
    myfile.open("end.txt", std::ios::app);
    myfile << "— "<<  pok_name << ":" << std::endl;
    myfile << " " << std::endl;
    if(m_pokemonName != ""){myfile << "      Name: " << m_pokemonName << std::endl;}
    myfile<< " " << std::endl;
    myfile << "      HP: " << m_pokemonHP << std::endl;
    myfile << " " << std::endl;
    myfile << "      Attack: " << m_pokemonATK << std::endl;
    myfile << " " << std::endl;
    myfile << "      Defense: " << m_pokemonDEF << std::endl;
    myfile << " " << std::endl;
    myfile << "      Speed: " << m_pokemonSPD << std::endl;
    myfile << " " << std::endl;
    myfile << "      Special Attack: " << m_pokemonSpecATK << std::endl;
    myfile << " " << std::endl; 
    myfile << "      Special Defense: " << m_pokemonSpecDEF << std::endl;
    myfile << " " << std::endl; 
    myfile << std::endl;
    myfile.close();
}