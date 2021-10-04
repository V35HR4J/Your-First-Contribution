#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    
    if(argc < 2){
        cout << "Usage: "<< endl << "fibonacci n" << endl << "With n=number of terms" << endl;
        return 0;
    }
    cout << "Calculating fibonacci for n = " << argv[1] << endl;
    int n = atoi(argv[1]);
    int no1 = 0;
    int no2 = 1;
    int next = 0;

    for(int i = 1; i <=n; i++){
        switch(i){
            case 1:
                cout << no1 << " - ";
            continue;
            case 2:
                cout << no2 << " - ";
            continue;
        }
        
        next = no1 + no2;
        no1 = no2;
        no2 = next;

        cout << next << " - ";
    }
    cout << '\b' <<'\b' << "  " << endl << "Done." << endl;
}