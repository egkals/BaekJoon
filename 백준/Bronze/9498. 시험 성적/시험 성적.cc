#include <iostream>

using namespace std;

int main()
{
    int score;
    int state =1;
    
    while (state){
        cin >> score;
       
        if (score >= 0 && score <= 100) state = 0;
        else cout << "다시 입력하세요.";
    }
    
    if (score >= 90 && score <=100) cout << "A";
    else if (score >= 80 && score <=89) cout << "B";
    else if (score >= 70 && score <=79) cout << "C";
    else if (score >= 60 && score <=69) cout << "D";
    else cout << "F";
    
    return 0;
}