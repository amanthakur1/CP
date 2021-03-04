#include<bits/stdc++.h>
using namespace std;
int cost[10][10], split[10][10];
string answer(int i,int j){
    if(i==j) return " A" + to_string(i+1) + " ";
    if(i==split[i][j]) return "(" + answer(i,i) + answer(i+1, j) + ")";
    if(j==split[i][j]) return "(" + answer(i,j-1) + answer(j, j) + ")";
    return "";
}
int main(){
    int n; cout<<"Enter no. of matrices to be multiplied: "; cin>>n;
    int k=0, p[n+1];
    cout<<"\nEnter order of matrices: \n";
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        if(i==0) p[k++] = x;
        p[k++] = y;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cost[i][j] = 1e9;
            split[i][j] = 1e9;
            if(i==j){
                cost[i][j] = 0;
            }
        }
    }
    for(int i=1;i<n;i++){
        int row = 0, col = i;
        while(row<n && col<n){
            int x = 1e9, k =0 ;
            for(int g=row;g<col;g++){
                int h = cost[row][g] + cost[g+1][col] + p[row]*p[g+1]*p[col+1];
                if(h<x) x = h, k = g;
            }
            cost[row][col] = x;
            split[row][col] = k;
            row++, col++;
        }
    }
    cout<<"\nCost Matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            (cost[i][j] == 1e9 ? cout<<"inf" : cout<<cost[i][j]); cout<<" ";
        }
        cout<<endl;
    }
    cout<<"\nSplit Matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            (split[i][j] == 1e9 ? cout<<"inf" : cout<<split[i][j]+1); cout<<" ";
        }
        cout<<endl;
    }

    cout<<"\nAnswer: "<<answer(0,n-1);
    return 0;
}

