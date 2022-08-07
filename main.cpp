//#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int cantAp(vector<char> &v, char x){
    int res = 0;
    for (char i : v){
        if (i == x){
            res++;
        }
    }
    return res;
}

bool filaValida(vector<char> v){
    bool res = true;
    for (int i = 0; i < v.size() && res; i++ ){
        if (v[i] == '.'){
        }
        else if (cantAp(v,v[i]) == 1){
            res = true;
        } else {
            res = false;
        }
    }
    return res;
}

bool filasValidas(vector<vector<char>> board){
    bool res = true;
    for(int i = 0; i < board.size() && res; i++){
        if (!filaValida(board[i])){
            res = false;
        }
    }
    return res;
}

void transponer(vector<vector<char>> &m){
    vector<vector<char> > m0 = m;
    int i = 0;
    int j = 0;
    while(i < m.size()){
        if (j < m.size() && i < m.size()) {
            m[i][j] = m0[j][i];
            j++;
        } else {
            i++;
            j = 0;
        }
    }
}

bool columnasValidas(vector<vector<char>> board){
//    vector<vector<char>> boardColumna = transponer(board);
    bool res = filasValidas(boardColumna);
    return res;
}

/*bool isValidSudoku(vector<vector<char>>& board) {

}*/
