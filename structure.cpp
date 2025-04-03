//simple code
#include<iostream>
#include<string>
using namespace std;

struct person{
    string name;
    int age;
}; 

int main(){
    person p;
    cout<<"Enter your name : ";
    cin>>p.name;
    cout<<"Enter your age : ";
    cin>>p.age;
    
    cout<<"Your Name : "<<p.name<<endl;
    cout<<"Age : "<<p.age<<endl;
    return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//taking multiple input using vectior  

#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct person{
    string name;
    int age;
}; 

int main(){
    vector<person> people;
    int n; //take the total no. of persons .
    cout<<"Enter the no. person : ";
    cin>>n;
    for(int i =0 ;i<n;i++){
        person p;
        cout<<"Perosn ["<<i<<"] details"<<endl;
        cout<<"Enter your name : ";
        cin>>p.name;
        cout<<"Enter your age : ";
        cin>>p.age;
        people.push_back(p);
    }
    
    for(const auto& p : people){
        cout<<"Your Name : "<<p.name<<endl;
        cout<<"Age : "<<p.age<<endl;
    }
    return 0;
}
