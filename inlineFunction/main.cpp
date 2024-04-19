#include <iostream>

using namespace std;

inline int max(int a, int b) {

    return a > b ? a : b;
}

int main() {
    int a, b;
    cout << "비교할 두개의 숫자를 공백을 기준으로 입력해주세요 : ";
    cin >> a >> b;
    int result  = max(a,b);

    cout << "가장 큰 숫자는 " << result << "입니다.";

    return 0;
}
