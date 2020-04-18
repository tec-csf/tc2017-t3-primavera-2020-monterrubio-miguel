/*
**Si se desea solucionar el problema del laberinto, el cual consiste en encontrar un camino cualquiera que permita salir del mismo ¿qué técnica de diseño de algoritmo deberá usarse?
**
**Algoritmo: Backtracking
**
*/

#include <iostream> 

#define size 6

using namespace std;
  
void printSol(int path[size][size]) 
{ 
    for (int i = 0; i < size; i++) 
    { 
        for (int j = 0; j < size; j++)
        {
          cout << path[i][j];
        } 
        cout << endl;
    } 
}
  
bool findPath(int maze[size][size], int x, int y, int targX, int targY, int path[size][size]) 
{ 
    if (x == 6 - 1 && y == 6 - 1 && maze[x][y] == 1) { 
        path[x][y] = 1; 
        return true; 
    } 
  
    if ((x >= 0 && x < 6) && (y >= 0 && y < 6) && (maze[x][y] == 1)) 
    { 
        path[x][y] = 1; 
  
        if ((path[x+1][y] != 1) && (findPath(maze, x + 1, y, targX, targY, path) == true))
        {
            return true; 
        } 
  
        else if ((path[x][y+1] != 1) && (findPath(maze, x, y + 1, targX, targY, path) == true))
        {
            return true; 
        }

        else if ((path[x-1][y] != 1) && (findPath(maze, x - 1, y, targX, targY, path) == true))
        {
            return true; 
        }

        else if ((path[x][y-1] != 1) && (findPath(maze, x, y - 1, targX, targY, path) == true))
        {
            return true; 
        }
        
        else
        {
            path[x][y] = 0; 
            return false; 
        }
    } 
  
    return false; 
} 
  
int main() 
{ 
    int maze[size][size] = {{ 1, 1, 1, 1, 1, 1}, 
                            { 0, 1, 0, 0, 0, 0}, 
                            { 1, 1, 0, 1, 1, 1}, 
                            { 1, 0, 0, 1, 0, 1},
                            { 1, 1, 1, 1, 0, 1},
                            { 1, 1, 0, 1, 1, 1}}; 
  
    int path[size][size] = {{ 0, 0, 0, 0, 0, 0}, 
                            { 0, 0, 0, 0, 0, 0}, 
                            { 0, 0, 0, 0, 0, 0}, 
                            { 0, 0, 0, 0, 0, 0},
                            { 0, 0, 0, 0, 0, 0},
                            { 0, 0, 0, 0, 0, 0}}; 
    
    findPath(maze, 0, 0, 6, 6, path);
    printSol(path); 
    return 0; 
} 