#include "vojd.h"

void generator(float** matrix, int n){
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j]=(((float)rand()/RAND_MAX)*(9190)-190);
        }
    }
    outer(matrix, n, "Generated matrix: ");
}

void founder(float** matrix, int n){
    for (int i = 0; i < n; ++i) {
        cout<<"Element of main diagonal in row "<<i+1<<" is "<<setprecision(6)<<matrix[i][i]<<endl;
        if(matrix[i][i]<0){
            int min_pos;
            int min_sum=0;
            for (int j = 0; j < n; ++j) {
                if(sum_f(matrix[i][j])>min_sum){
                    min_sum=sum_f(matrix[i][j]);
                    min_pos=j;
                }
            }
        cout<<"Max sum of numbers in row "<<i+1<<" is "<<setprecision(6)<<matrix[i][min_pos]<<" with sum "<<min_sum<<endl<<endl;
        }
    }
}

int sum_f(float number){
    int number1=abs(number);
    int sum=0;
    while(number1){
        sum+=number1%10;
        number1 /=10;
    }
    return sum;
}

void outer(float** matrix, int n, string name){
    cout<<name<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<setw(9)<<setprecision(6)<<matrix[i][j];
        }
    cout<<endl;
    }
}