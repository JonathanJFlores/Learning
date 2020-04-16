#include<iostream>

using namespace std;

int main(){
    float practical_note, theoretical_note, participation_note, final_note;

    cout<<"\n Write practical note: "; cin>>practical_note;
    cout<<" Write practical note: "; cin>>theoretical_note;
    cout<<" Write practical note: "; cin>>participation_note;

    practical_note *= 0.3;
    theoretical_note *= 0.6;
    participation_note *= 0.1;

    cout<<"\n practical note is: "<<practical_note<<endl;
    cout<<" theoretical note is: "<<theoretical_note<<endl;
    cout<<" participation note is: "<<participation_note<<endl;

    final_note = (practical_note)+(theoretical_note)+(participation_note);
    cout<<"\n final note is: "<<final_note<<endl;

    return 0;
}