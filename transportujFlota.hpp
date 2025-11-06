#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    Stocznia stocznia{};
    unsigned int ileprzewiezionego=0;
    unsigned int ilezeglowcow=0;
    while(ileprzewiezionego<towar)
    {
        Statek* statek = stocznia(); 
        ileprzewiezionego+= statek->transportuj();
        if (dynamic_cast<Zaglowiec*>(statek))
        {
            ++ilezeglowcow;
        }
        delete statek;
    }
    return ilezeglowcow;
}