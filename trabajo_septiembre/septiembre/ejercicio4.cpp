#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "ejercicio1.h"
#include "utils.h"

using namespace std;

string FILE_PATH_EDGES = "files/arcos.txt";
string FILE_PATH_VERTICES = "files/vertices.txt";

// Estructura del arco que une los vertices
struct Arco {
    int src, dest;
};
// Vectores para almacenar vertices y arcos
vector<string> vertices;
vector<Arco> arcos;

// Implementacion del grafo, mediante listas de adyacencia de enteros.
class Grafo {
public:
    vector<vector<int>> adjList;

    // Constructor para vector de arcos y numero de vertices
    Grafo(vector<Arco> const &arcos, int N) {
        adjList.resize(N);

        // Asociacion de vertices en ambas direcciones
        for (auto &arco: arcos) {
            adjList[arco.src].push_back(arco.dest);
            adjList[arco.dest].push_back(arco.src);
        }
    }
};

/*
 * Muestra el grafo
 */
void printGraph(Grafo const &grafo, int N) {
    for (int i = 0; i < N; i++) {
        cout << vertices.at(i) << " : ";

        for (int v : grafo.adjList[i])
            cout << vertices.at(v) << " ";
        cout << endl;
    }
}

/*
 * Carga del fichero de vertices.
 * Los nombres de los vertices se almacenan en un vector que permite asociar
 * la cadena del nombre con el entero que representa al vertice en el grafo.
 */
vector<string> readVertices() {
    std::ifstream ifs(FILE_PATH_VERTICES);
    std::string buffer;
    vector<string> vertices;

    if (!ifs) {
        cerr << "Error abriendo archivo: " << FILE_PATH_VERTICES.c_str();
        exit(EXIT_FAILURE);
    }
    std::string line;
    while (getline(ifs, line)) {
        vertices.push_back(line);
    }
    sort(vertices.begin(), vertices.end());
    return vertices;
}

/*
 * Devuelve el entero asociado al nombre del vertice.
 */
int getIndexOfVertice(string vertice) {
    vector<string>::iterator it = find(vertices.begin(), vertices.end(), vertice);
    int pos = distance(vertices.begin(), it);
    return pos;
}

/*
 * Carga del fichero de arcos.
 */
vector<Arco> readArcos() {
    std::ifstream ifs(FILE_PATH_EDGES);
    std::string buffer;

    if (!ifs) {
        cerr << "Error abriendo archivo: " << FILE_PATH_EDGES.c_str();
        exit(EXIT_FAILURE);
    }
    std::string line;
    while (getline(ifs, line)) {
        std::stringstream ss(line);
        std::vector<std::string> item;
        std::string tmp;
        //Punto punto;
        while (getline(ss, tmp, ' ')) {
            item.push_back(tmp);
        }
        Arco edge = {
                getIndexOfVertice(item.at(0)),
                getIndexOfVertice(item.at(1))
        };
        arcos.push_back(edge);
    }

    return arcos;
}

/*
 * Funcion principal del ejercicio 4.
 * - Lee los ficheros de vertices y arcos.
 * - Almacena la informacion del grafo.
 * - Muestra la informacion del grafo.
 */
int ejercicio4(bool debug) {

    printBanner("EJERCICIO 4");
    print("Representacion de grafo no dirigido.");

    // Carga de ficheros
    vertices = readVertices();
    arcos = readArcos();

    int N = vertices.size();

    // Construccion del grafo
    Grafo graph(arcos, N);

    // Muestra el grafo
    printGraph(graph, N);

    // Comprobacion de que la importacion ha sido correcta
    if (debug) {
        bool resultOk = graph.adjList[0].size() == 0 && graph.adjList[1].size() == 1 && graph.adjList[2].size() == 2;
        printResult(resultOk);
    }
    return 0;
}