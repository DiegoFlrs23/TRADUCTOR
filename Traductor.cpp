#include <iostream>
#include <map>
#include <string>

using namespace std;


map<string, string> espanol = {
{"asm","gestión automática de almacenamiento"},
{"auto","automatico"},
{"bool","bool"},
{"break","romper"},
{"case","caso"},
{"catch","atrapar"},
{"char","caracter"},
{"class","clase"},
{"const","constante"},
{"const_cast","casting constante"},
{"continue","continuar"},
{"default","predeterminado"},
{"delete","borrar"},
{"do","hacer"},
{"double", "doble"},
{"dynamic_cast","casting dinamico"},
{"else", "sino"},
{"enum","enumeracion"},
{"explicit","explicito"},
{"extern","externo"},
{"false","falso"},
{"float","flotante"},
{"for","para"},
{"friend","amistad"},
{"goto","etiqueta"},
{"if","si"},
{"inline","en linea"},
{"int","entero"},
{"long","largo"},
{"mutable","mudable"},
{"namespace","espacio de nombre"},
{"new","nuevo"},
{"operator","operador"},
{"private","privado"},
{"protected","protegido"},
{"public","publico"},
{"register","registrar"},
{"reinterpret_cast","reinterpretar casting"},
{"return","regresar"},
{"short","corto"},
{"signed","firmado"},
{"sizeof","tamano de"},
{"static","estatico"},
{"static_cast","casting estatico"},
{"struct","estructura"},
{"switch","cambiar"},
{"template","plantilla"},
{"this","esto"},
{"throw","tirar"},
{"true","verdadero"},
{"try","intento"},
{"typedef","definición de tipo"},
{"typeid","identificacion de tipo"},
{"typename","nombre de tipo"},
{"union","union"},
{"unsigned","sin asignar"},
{"using","usando"},
{"virtual","virtual"},
{"void","vacio"},
{"volatile","volatil"},
{"while","entre"},

};


string traducEs(string code) {
    string traducCod = "";
    string palabras = "";

    for (char c : code) {
        if (isalnum(c) || c == '_') {
            palabras += c;
        } else {
            if (!palabras.empty()) {
                if (espanol.count(palabras) > 0) {
                    traducCod += espanol[palabras];
                } else {
                    traducCod += palabras;
                }
                palabras = "";
            }
            traducCod += c;
        }
    }

    if (!palabras.empty()) {
        if (espanol.count(palabras) > 0) {
            traducCod += espanol[palabras];
        } else {
            traducCod += palabras;
        }
    }

    return traducCod;
}

int main() {
    string code = "float x = 10;\nif (x > 5) {\n    cout << \"x es mayor que 5\";\n} else {\n    cout << \"x es menor o igual a 5\";\n}";

    cout << "C++ code: \n" << code << endl;

    string traducCod = traducEs(code);

    cout << "\nCódigo traducido: \n" << traducCod << endl;

}
