#include <iostream>

using namespace std;

int main()
{ double x,y,i,f,z=0,q=0 ,w;
  cout<<"How many exercises to input? ";
  cin>>x;
  for (i=0;i<x;i+=1){

        cout<<"Score received for exercise = ";
        cin>>y;
        cout<<"Total points possible for exercise = ";
        cin>>f;
        q=q+y;
        z=z+f;
       w=(q/z)*100;
  }
  cout<<"Your total is "<<q<<"out of"<<z<<endl;
  cout<<"or"<<w<<"%";

















    return 0;
    }



