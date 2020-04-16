#include<iostream>
using namespace std;

struct Alumn{
    char name[30];
    int age;
    float average;
}alumn[3], *point_a = alumn;

void requestData();
void calculateBestAverage(Alumn *);

int main(){
    requestData();
    calculateBestAverage(point_a);

   return 0;
}

void requestData(){
    for(int i=0; i < 3; i++ ){
        fflush(stdin);
         cout<<"\n Write your name: ";
         cin.getline((point_a+i)->name, 30, '\n');
         cout<<" Write your age: ";
         cin>>(point_a+i)->age;
         cout<<" Write your average: ";
         cin>>(point_a+i)->average;
    }
};

void calculateBestAverage(Alumn *point_a){
    float heigher = 0.0;
    int position = 0;

    for(int i=0; i < 3; i++ ){
         if((point_a+i)->average>heigher){
             heigher = (point_a)->average;
             position = i;
         }
    }

    cout<<"\n student with the best average is: \n";
    cout<<" Name: "<<(point_a+position)->name<<endl;
    cout<<" Age: "<<(point_a+position)->age<<endl;
    cout<<" Average: "<<(point_a+position)->average<<endl;
};