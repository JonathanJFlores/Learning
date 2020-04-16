#include<iostream>
using namespace std;

struct Stage{
    int hours, min, sec;
}stages[3], *point_stage = stages;

void requestData();
void calculateTime(Stage *);

int main(){
    requestData();
    calculateTime(point_stage);

   return 0;
}

void requestData(){
    for(int i=0; i<3; i++){
        cout<<"\n Hours: "; cin>>(point_stage+i)->hours;
        cout<<" minutes: "; cin>>(point_stage+i)->min;
        cout<<" seconds: "; cin>>(point_stage+i)->sec;
    }
};

void calculateTime(Stage *point_stage){
    int hoursT=0, minutesT=0, secondsT=0;

    for(int i=0; i <3; i++ ){
    hoursT = hoursT+(point_stage+i)->hours;
    minutesT= minutesT+(point_stage+i)->min;
    if(minutesT>=60){
        minutesT -=60;
        hoursT++;
    }
    secondsT= secondsT+(point_stage+i)->sec;
    if(secondsT>=60){
        secondsT-= 60;
        minutesT++;
    }    
    }

    cout<<"\n Showing time total: \n";
    cout<<" Hours: "<<hoursT<<endl;
    cout<<" Minutes: "<<minutesT<<endl;
    cout<<" seconds: "<<secondsT<<endl;

};