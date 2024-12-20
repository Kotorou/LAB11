#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
cout << "Press Enter 3 times to reveal your future.";
cin.ignore();
cin.ignore();
cin.ignore();
string grade[9] ={"A","B+","B","C+","C","D+","D","F","W"};
srand(time(0));
int randomnum = rand()%9;
cout << "You will get "<< grade[randomnum] <<" in this 261102.";
}
