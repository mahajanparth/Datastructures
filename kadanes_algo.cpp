//
// Created by parth on 09/04/20.
//

#include "kadanes_algo.h"

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<int> vint;
    cout<<"Enter n";
    cin>>n;
    int val=0;
    for(int i=0;i<n;i++){
        cin>>val;
        //vint[i]=val;
        vint.push_back(val);
        cout<< vint[i]<<endl;
    }
    int csum=0,msum=0,i=0,j=0;

    vector<int>::iterator var;
    for(var=vint.begin();var!=vint.end();var++){
        csum+=*var;
        csum=max(csum,0);
        msum=max(csum,msum);

    }
    cout<<"MX_SUM "<<msum;



}