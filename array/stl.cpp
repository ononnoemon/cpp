#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void take_Input_Muliple_Pair_Data(int n,int age,string name){
    pair<int ,string>student[n];
    for ( int i = 0; i <n; i++)
    {
       cin>>student[i].first>>student[i].second;
    }
}
void inputPairs(pair<int, string> students[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> students[i].first >> students[i].second;
    }
}

pair<int,string>* take_pair_input(int n){
   pair<int, string>* p= new pair<int,string>[n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    return p;
}
void print_pair(pair<int ,string>p[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}

int main(){
    
  int n;
  cin>>n;
    //pair<int, string> students[n];

    
    //inputPairs(students, n);
    //print_pair(students,n);
    pair<int, string>* studentss=take_pair_input(n);
    print_pair(studentss,n);
    delete[] studentss; 
    return 0;
}

//হিন্ট: vector<pair<string, int>> students;