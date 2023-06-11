#include <ncbjTask.h>

#include <iostream>
#include <stdexcept>

using namespace std;

    int Derived::getValue() const {
        return value;
    }

    void Derived::setValue(int value) const {
        this -> value = value;
        counter++;
    }

    int Derived::getCounter() const {
        return counter;
    }

    int ncbj_function(const isimple &a, int b){

        if (a.getValue() == 10) // ten warunek nigdy nie zostanie spelniony w tej funkcji
            throw runtime_error("a.getValue() = 10");
        
        if (b == 34) 
            throw runtime_error("b = 34");
    
        if (b < 10)
            a.setValue(b);
        
        if (b >= 10){
            for(int i = 0; i <= getRandomNumber(); ++i)
                a.setValue(2 * b);
        }
            
        if (b == 10)
            return b;
        else
            return a.getValue();
    }

    int getRandomNumber(){
        int number{};
        srand(time(NULL));

        number = rand()% 4 + 1;
        return number; 
    }

