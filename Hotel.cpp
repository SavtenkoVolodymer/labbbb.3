#include <iostream>
#include "Hotel.h"

Hotel Hotel::operator -()const{
    return Hotel (-years);
}
Hotel Hotel::operator - (const Hotel &other) const {
    return Hotel(years -other.years);
}
void Hotel::PrintHotel(){
    cout<< "Years: "<<years;
}
