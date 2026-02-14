#include<bits/stdc++.h>
#include<conio.h>
using namespace std;


//crate array
int* createArray(int size){
    int* array= new int[size];
    for (int i = 0; i <size; i++)
    {
        cin>>array[i];
    }
    return array;
}
//print array
void printArray(char array[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
//insert element by index
void insertElentByIndex(int array[],int index,int value){
 for (int i = 7; i >index; i--)
    {
        array[i]=array[i-1];
    }
    array[index]=value;

}
//Delete by Index
void deleteByIndex(int array[],int index){
    for(int i=index;i<8-1;i++){
        array[i]=array[i+1];
        //array[i-1]=array[i] --->i=index+1
  }}
//Reverse Element
  void reverseElement(int array[],int size){
    int temp;
    for (int i = 0; i<=size/2; i++)
    {
        temp=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=temp;
    }
}
// Reverse arra by two pointer technique
void reversArrayByTwoPointer(int array[]){
    int left=0,right=7,temp;
   while(left<right){
    temp=array[left];
    array[left]=array[right];
    array[right]=temp;
    right--;
    left++;
   }
}
// swap function
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
//merge array
int mergeArrayByNewArray(int a[],int b[]){
    int c[6];
     for (int  i = 0; i <6; i++)
    {
        if(i<3){
            c[i]=a[i];
        }
        else{
            c[i]=b[i-3];
        }
        
    }
    return c[6];

    /*
         for (int i = 0; i <6; i++)
    {
        if(i>=3){
            a[i]=b[i-3];
        }
    }
    */
}
int mergeSortedArray(int a[],int b[]){
    int c[8];
     int x=0; int y=0;int i=0;
    while (x<3 && y<5)
    {
        if(a[x]<b[y]){// x
            c[i++]=a[x];
            x++;
        } else{
             c[i++]=b[y];
            y++;
        }
        
    }
    while (y<5)
    {
         c[i++]=b[y];
            y++;
    }
    while (x<3)
    {
         c[i++]=a[x];
            x++;
    }
    return c[8];

}
int main(){
    //int* array=createArray(7);
    char num[4]={'a','b','c','d'};
    printArray(num,4);
    for (int j = 1; j <=4; j++)
    {
        for (int i = 0; i <3; i++)
    {
        char temp1=num[i];
        num[i]=num[i+1];
        num[i+1]=temp1;
    }
    printArray(num,4);
    }
    //delete[] array;
    
    return 0;
}