#include<iostream>

using namespace std;

struct  average{
    float note1;
    float note2;
    float note3;
};

struct alumn{
    char name[20];
    char sex[10];
    int age;
    struct average aver; 
}alumn[100];


int main(){
    int number_alumn, pos_greather;
    float average_alumn[100], heigher= 0;


    cout<<"\n Write el number of students: ";
    cin>>number_alumn;
   
    for(int i=0; i<number_alumn; i++){
        fflush(stdin);

        cout<<i+1<<" Write your name: "; cin.getline(alumn[i].name, 20, '\n');
        cout<<i+1<<" Write your sex: "; cin.getline(alumn[i].sex, 10, '\n');
        cout<<i+1<<" Write your age: "; cin>>alumn[i].age;

        cout<<"\n Write a first note: "; cin>>alumn[i].aver.note1;
        cout<<"\n Write a second note: "; cin>>alumn[i].aver.note2;
        cout<<"\n Write a third note: "; cin>>alumn[i].aver.note3;

        average_alumn[i] = (alumn[i].aver.note1+alumn[i].aver.note2+alumn[i].aver.note3)/3;

        if(average_alumn[i]>heigher){
            heigher = average_alumn[i];
            pos_greather = i;
        }
    }

    cout<<"\n Showing the better average ";
    cout<<" Name: "<<alumn[pos_greather].name<<endl;
    cout<<" Sex: "<<alumn[pos_greather].sex<<endl;
    cout<<" Age: "<<alumn[pos_greather].age<<endl;
    cout<<" Sex: "<<average_alumn[pos_greather]<<endl;


   return 0;
}