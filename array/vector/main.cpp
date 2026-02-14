#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void printVector(vector<int> &v1){
   for (int i = 0; i <v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int>v1;
    v1.push_back(1);
 
    printVector(v1);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;

    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(3);
    v1.push_back(5);
    
    printVector(v1);

    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    cout<<*v1.begin()+1<<endl;
    return 0;
}