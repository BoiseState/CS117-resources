#include "Part.h"

void Part::setQuantity(int qty)
{
    if(qty <= 0){
        //throw exception??
        return;
    }
    this->m_quantity = qty;
}

int Part::getQuantity()
{
    //check who is calling us??
    return this->m_quantity;
}


void Part::setId(string id)
{
    //enforce name standard
    this-> = id;
}


string Part::getId()
{
    return this->m_id;
}

/**
 * Returns a string representation of the part
 * Do NOT modify this function or you will
 * cause the tests to fail.
 */
string Part::toString()
{
    return "Id: " + this->m_id + " drawing: " + this->m_drawing + " qty: " + to_string(this->m_quantity);
}

