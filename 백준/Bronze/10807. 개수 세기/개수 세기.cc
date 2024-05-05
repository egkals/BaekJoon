#include <iostream>

using namespace std;
int A[100];
int v_n = 0;

int main()
{
    int N, v;    // N = 입력받을 정수의 개수, v = 찾는 수
    int num;    // num = 입력 받는 정수들, v_n = v랑 같은 정수 개수
    int loop = 1;
    
    while(loop){
        cin >> N;
        if(N>=1 && N <=100) loop = 0;
        else cout << "다시 입력하세요.\n";
    }
    
    for(int i =0; i<N; i++){
        cin >> num;
        A[i] = num;
    }
    cin >> v;
    
    for(int i =0; i<N; i++){
        if(A[i] == v) v_n++;
    }
    
    cout << v_n;
    
    return 0;
}