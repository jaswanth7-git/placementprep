#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap(){
        size =  0;
    }
    void insert(int ele){
        size++;
        int index = size;
        arr[index] = ele;
        int parent = index/2;
        while(parent >= 1){
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
                index = index/2;
                parent = parent/2;
            }else{
                break;
            }
            
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void del(){
        if(size == 0){
            cout<<"Nothing to Delete"<<endl;
        }
        arr[1] = arr[size];
        size--;
        int index =  1;
        while(index < size){
            int left = 2*index;
            int right = 2*index + 1;
            if(arr[index]<arr[left] && left<size){
                    swap(arr[index],arr[left]);
                    index = left;
            }else if(arr[index]<arr[right] && right<size){
                    swap(arr[index],arr[right]);
                    index = right;
            }else{
                    return ;
            }
        }
    }
};


void heapify(int arr[],int n,int index){
    int largest = index;
    int left = index*2;
    int right = index*2 + 1;
    if(arr[largest] < arr[left] && left <= n){
        largest = left;
    }
    if(arr[largest] < arr[right] && right <= n){
        largest = right;
    }
    if(largest != index){
        swap(arr[largest],arr[index]);
        heapify(arr,n,largest);
    } 
    
}




int main(){
    // heap h;
    // h.insert(77);
    // h.insert(7);
    // h.insert(0);
    // h.insert(12);
    // h.insert(777);
    // h.insert(2001);
    // h.print();
    // h.del();
    // h.print();
    int arr[6] = {-1,12,21,34,4,32};
    int n=5;
    for(int i = n/2 ; i>0 ;i--){
        heapify(arr,n,i);
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}