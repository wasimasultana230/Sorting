#include<iostream>
using namespace std ;
int main (){
cout<< "Enter array size : ";
    int n;
    cin >> n;
    int array[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // bubblr sort in descending order 
    int counter = 1;
    while(counter < n){
        for (int i = 0 ; i < n-counter ; i++){
            if(array[i] < array[i+1]){
            int temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
            }           
        }
        counter++;
    } 
    cout<<"Sort in descending order : \n";
    for ( int i = 0; i < n; i++){
        cout << array[i] <<" ";
    }

    return 0;
}