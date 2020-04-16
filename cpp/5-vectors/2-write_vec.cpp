#include<iostream>

using namespace std;

int main(){
    int n, higher = 0, higher_two = 0, sum = 0; 
    int number[50];
    int vec[] = {6, 56, 4, 10, 25, 70, 171};

    for (int i = 0; i < 6; i++){
        sum += vec[i];
        
        if(vec[i]>higher_two){
            higher_two = vec[i];
        }
    }

    if( higher_two == sum-higher_two){
        cout<<"\n Number "<<higher_two<<" Equals the sum of the others";
    } else{
        cout<<"\n There is no matching sum";
    }
    

    cout<<"\n Write the number of elements of array: ";
    cin>>n;

    for(int i = 0; i<n; i++){
        cout<<i<<" Write a number: ";
        cin>>number[i];
    }

    for(int i=0; i<n; i++){
        cout<<i<<" -> "<<number[i]<<endl;
    }
    
    cout<<" "<<endl;

    for(int i=n-1; i>=0; i--){
        cout<<i<<" -> "<<number[i]<<endl;
        if(number[i]>higher){
            higher = number[i];
        }
    }

    cout<<"\n Number higher is: "<<higher<<endl;
    
    return 0;
}