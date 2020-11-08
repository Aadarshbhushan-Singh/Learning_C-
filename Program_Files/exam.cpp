#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <regex>
#include <sstream>
using namespace std;

void rotatematrix(*int mat[5][4]) 
{ 
    int row = 0, col = 0; 
    int prev, curr; 
    int m=5;
    int n=4;
    while (row < m && col < n) 
    { 
  
        if (row + 1 == m || col + 1 == n) 
            break; 
        prev = mat[row + 1][col];
        for (int i = col; i < n; i++) 
        { 
            curr = mat[row][i]; 
            mat[row][i] = prev; 
            prev = curr; 
        } 
        row++; 
        for (int i = row; i < m; i++) 
        { 
            curr = mat[i][n-1]; 
            mat[i][n-1] = prev; 
            prev = curr; 
        } 
        n--; 
        if (row < m) 
        { 
            for (int i = n-1; i >= col; i--) 
            { 
                curr = mat[m-1][i]; 
                mat[m-1][i] = prev; 
                prev = curr; 
            } 
        } 
        m--; 
  
        if (col < n) 
        { 
            for (int i = m-1; i >= row; i--) 
            { 
                curr = mat[i][col]; 
                mat[i][col] = prev; 
                prev = curr; 
            } 
        } 
        col++; 
    } 
  
    
} 


int main(){
    string file_name;
    cin>>file_name;
    //open files
    // ifstream stop_word_file("stopwords.txt");
    ifstream matrix_file(file_name);

    //Read lines from stop words
    vector<string> word;
    string b;
    ifstream fin;
    string str;
    vector<string>::iterator iter;
    fin.open("stopwords.txt");
    while (getline(fin, b)){
    fin>>str;
    word.push_back(str);
    }
    // for (iter=word.begin(); iter!=word.end(); iter++){
    //     cout<<*iter<<endl;
    // }

    //Read lines from matrix 
    vector<string> matrix_word;
    string b2;
    ifstream fin2;
    string str2;
    fin2.open(file_name);
    while (getline(fin2, b2)){
        fin2>>str2;
        matrix_word.push_back(str2);
    }

    int matrix[5][4];
    string ser;

    vector<string>::iterator iter2;
    int i=0;
    int j=0;
    for (iter=matrix_word.begin(); iter!=matrix_word.end(); iter++){
        ser=*iter;
        if (find(word.begin(), word.end(), ser)!=word.end()){
            int index = distance(word.begin(), iter);
            matrix[i][j]= index;
        }else{
            matrix[i][j]=0;
        }
        i++;
        j++;
    }

    while (matrix[0][0]!=0){
        rotatematrix(&matrix[5][4]);
    }
    
    cout<<"Hello world"<<endl;
    return 0;
};