#include <iostream>
#include <string>
#include "interprete.h"
#include "cuack.h"
#include "fecha.h"
using namespace std;

int main() {
    string comando;

    while(cin >> comando && comando != "exit"){
        Interprete(comando);
    }
}