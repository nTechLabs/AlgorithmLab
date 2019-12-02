#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool compare (pair<string, pair<int, int> > a, 
				pair<string, pair<int, int> > b){
	if(a.second.first == b.second.first){  // 두학생의 점수가 같을 경우  
		return a.second.second > b.second.second;  // 생년월일 까지 비교해서 어린순으로 비교소팅 
	}else{
		return a.second.first > b.second.first; // 점수가 다를 경우는 높은 점수로 소팅 
	}
}


int main(void){
	vector<pair <string, pair<int, int> > > v;
	
	v.push_back(pair<string, pair<int, int> >("A", make_pair(91, 1999)));
	v.push_back(pair<string, pair<int, int> >("B", make_pair(95, 1995)));
	v.push_back(pair<string, pair<int, int> >("C", make_pair(95, 1996)));
	v.push_back(pair<string, pair<int, int> >("D", make_pair(94, 1997)));
	v.push_back(pair<string, pair<int, int> > ("E", make_pair(92, 1995)));
	
	sort(v.begin(), v.end(), compare);
	
	for(int i=0; i<v.size(); i++){
		cout << v[i].first << ' ';  // 첫번째 인자인 이름 순으로 소팅. 
	}
return 0;
}
