#include <iostream>
#include <vector>

void quickSort(std::vector<int> &v, int low, int high);
int partition(std::vector<int> &v, int low, int high);
void swap(std::vector<int> &v, int x, int y);
int main(){

    std::vector<int> v{56,3,56,2,54,89,3,2,78,0,56,3,2,54,7,23,4,4,34,3,5,2,1,5,67};
    quickSort(v,0,v.size()-1);
    std::cout << "Final Vector: " << std::endl;

    for(auto &a : v){
        std::cout << a << " , "; 
    }
    std::cout << std::endl;
    return 0;
}

void quickSort(std::vector<int> &v, int low, int high){

    if(high > low){
        int pivotIndex = partition(v,low,high);

        quickSort(v,low,pivotIndex-1);
        quickSort(v,pivotIndex+1,high);
    }
}

int partition(std::vector<int> &v, int low, int high){

    int pivot = v.at(high);
    int wall = low - 1;

    for(int current = low; current <= high-1; current++){
        if(v.at(current) <= pivot){
            wall++;
            swap(v,wall,current);
        }
    }
    swap(v,wall+1,high);
    return wall+1;
}

void swap(std::vector<int> &v, int x, int y){
    int temp = v.at(x);
    v.at(x) = v.at(y);
    v.at(y) = temp;
}