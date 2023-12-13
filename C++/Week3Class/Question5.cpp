// Jaspreet Singh 2022BCSE019
#include<iostream>
using namespace std;
#define r 2
#define c 2

int add(int m1[r][c], int m2[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m1[i][j] + m2[i][j] << " ";
        }
        cout << endl;
    }
}

double add(double m1[r][c], double m2[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m1[i][j] + m2[i][j] << " ";
        }
        cout << endl;
    }
}

int sub(int m1[r][c], int m2[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m1[i][j] - m2[i][j] << " ";
        }
        cout << endl;
    }
}

double sub(double m1[r][c], double m2[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m1[i][j] - m2[i][j] << " ";
        }
        cout << endl;
    }
}

int mul(int m1[r][c], int m2[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m1[i][j] * m2[i][j] << " ";
        }
        cout << endl;
    }
}

double mul(double m1[r][c], double m2[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m1[i][j] * m2[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int m1[r][c] = {{32,23},{34,48}};
    int m2[r][c] = {{5,6},{7,8}};

    double m11[r][c] = {{1.2, 3.4}, {5.6, 7.8}};
    double m22[r][c] = {{9.10, 11.12}, {13.14, 15.16}};
    
    add(m1, m2);
    cout << endl;

    add(m11, m22);
    cout << endl;

    sub(m1,m2);
    cout << endl;

    sub(m11, m22);
    cout << endl;

    mul(m1,m2);
    cout << endl;

    mul(m11, m22);

    return 0;
}