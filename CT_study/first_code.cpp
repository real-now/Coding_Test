#include <vector> //vector를 쓰기 위한 헤더
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer; // 결과를 담을 빈 벡터
    
    answer.push_back(arr[0]); // 첫번째 숫자는 그냥 넣기
    
    for(int i = 1; i < arr.size(); i++) { // 두번째 숫자부터 끝까지 돌면서
        if(arr[i] != arr[i-1]) { // 지금 숫자가 바로 앞 숫자랑 다를때만
            answer.push_back(arr[i]); // answer에 넣기
        }
    }

    return answer;
}