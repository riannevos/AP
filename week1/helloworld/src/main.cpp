#include <iostream>
#include <climits>
#include <cfloat>
#include <cstdlib>

/* Opdracht 2 */
int main()
{   char my_char = ' ';
    unsigned long max_long = ULONG_MAX;
    int my_int = max_long;
    long my_long = my_int;
    std::cout << "This is my_char: " <<  max_long <<std::endl;
    return 0;
}


/* Opdracht 5
int main(){
    int random_ints[100] {};
    for (int i=0; i <100; i++){
        random_ints[i] = std::rand();
    }

    int max_elt = 0;
    for(int i=0; i<100; i++){
        if(max_elt < random_ints[i]){
            max_elt = random_ints[i];
        } else {continue;}
    }

    int sum_elt = 0;
     for(int i=0; i<100; i++){
        sum_elt = sum_elt + random_ints[i];
    }

    double avg_elt = sum_elt / 100;

    long sum_elt_while = 0;
    int i = 0;
    while (i < 100)
    {
        sum_elt_while += random_ints[i];
        i++;
    }
    
    std::cout << sum_elt_while;
}

*/