#pragma once
#include <iostream>

// Deze code geeft voorbeelden van het gebruik van 'const'
//  De code runt niet, maar geeft compile-errors
namespace const_voorbeeld {

    // We beloven i niet te veranderen. Wat is dan toch het voordeel van 'pass by reference'?
    void addOne(const int &i) {
        i++;
    }

    // achter de functiedeclaratie van een memberfunctie. De functie kan geen membervariabele aanpassen
    void myClass::my_func() const {
        // doe iets
    }

    void my_main() {

        const int a = 5; // variabele a kan niet worden aangepast
    }

}