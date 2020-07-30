//
// Created by parth on 12/04/20.
//

#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> var;
    vector<int> val;
    int value;
    int row,col;

    cout<<"ENTER ROW AND COLUMN";
    cin>>row>>col;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>value;
            val.push_back(value);
        }
        var.push_back(val);
        val.clear();
    }
    int  item;
    cout<<"Enter item"<<endl;
    cin>>item;
    int i=0,j=col-1;
   while(i<row and j>=0){
            if(var[i][j]==item){
                cout<<"item found at index "<<i<<" "<<j;
                break;
            }
            else if(var[i][j]<item){
               i++ ;
            }
            else
                j--;

        }

    return 0;
}