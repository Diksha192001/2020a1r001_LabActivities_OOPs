#include<iostream>
using namespace std;
struct students{
    char name[32];
    int rollno;
    float marks;
};
int main(){
    students s[100];
    int i, n;
    int loc=0;
    float marks =0.0;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(i=0; i<n; i++){
        cout<<"\n"<<"Enter the name of the student "<<i+1<<": ";
        cin>>s[i].name;
        cout<<"Enter the roll number: ";
        cin>>s[i].rollno;
        cout<<"Enter the marks: ";
        cin>>s[i].marks;
    }
    for(i=0; i<n; i++){
        if(s[i].marks>marks){
            marks=s[i].marks;
            loc=i;
        }
    }
    cout<<"\n"<<s[loc].marks<<" is the highest marks scored by "<<s[loc].name;
    return 0; 
}