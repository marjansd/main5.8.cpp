#include <iostream>
using namespace std;


int main(){
    int counter;


    cout<<"enter the counter";
    cin>>counter;

    int number[counter];
    for (int i=0; i<counter; i++){
        cout<<"enter number: ";
        cin>>number[i];
    }
    int min=number[0];
    for (int i=0; i<counter;i++){
        if (number[i]<min)
            min=number[i];
    }
    int max=number[0];
    for (int i=0;i<counter;i++){
        if (number[i]>max)
            max=number[i];

    }
    cout<<"the maximum number is : "<<max<<endl;
    cout<<"the minimum  number is : "<<min<<endl;
    return 0;

}