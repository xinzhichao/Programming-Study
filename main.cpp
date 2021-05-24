#include<iostream>
#include <limits>

using namespace std;

typedef enum{
    red =10,
    blue,
    green
}haha_enum;
bool i = false;
int main()
{

    haha_enum haha;
    //haha = blue;
    cout << "***************" << endl;
    cout << '\t'<< haha <<endl;
    if(i == false){
        cout << '\t'<< i <<endl;
    }
    cout << "***************" << endl;

}