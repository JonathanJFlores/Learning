#include<iostream>

using namespace std;

int main(){
    float note_one, note_two, note_three, note_four, final_average = 0;

    cout<<"\n Write note one: "; cin>>note_one;
    cout<<" Write note two: "; cin>>note_two;
    cout<<" Write note three: "; cin>>note_three;
    cout<<" Write note four: "; cin>>note_four;

    final_average = (note_one + note_two + note_three + note_four)/4;

    cout<<"\n The final average is: "<<final_average<<endl;
    
    return 0;
}