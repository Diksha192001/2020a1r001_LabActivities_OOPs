#include<iostream>
using namespace std;
struct players{

    char name[30];
    int runs;
    int innings;
    int notOut;
    float avg;

};
int main(){
    players p[30];
    cout<<"\t\t\t\tPLAYER RECORDS\n";
    cout<<"How many records do you want to enter? \n";
    int n, i;
    cin>>n;
    
    for(i=0; i<n; i++){
        cout<<"Enter the name, no. of runs scored, no. of innings, no. of times not out :\n";
        cin>>p[i].name>>p[i].runs>>p[i].innings>>p[i].notOut;
        p[i].avg=(p[i].runs)/((p[i].innings)-(p[i].notOut));
        cout<<"Average of "<<p[i].name<<" is "<<p[i].avg<<"\n";
    }
    int count=0;
    for(i=0; i<n; i++)
    {
        if (p[i].avg>50.0)
        {
            
            cout<<p[i].name;
            count++;
            cout<<" is having score more than average\n";
        }
        //cout<<"are having score more than average\n";
    }
    //cout<<"are having score more than average\n";
    cout<<"\n"<<count<<" players are having score more than average";
    return 0;
}