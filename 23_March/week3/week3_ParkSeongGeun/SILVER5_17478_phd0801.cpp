#include <bits/stdc++.h>	

using namespace std;

int cnt;
int K;

void print_result(int N) {
	if (N == 0) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4 * (K - N); j++) {
				cout << "_";
			}
			if (i == 0) {
				cout << "\"재귀함수가 뭔가요?\"" << "\n";
			}
			else if (i == 1) {
				cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << "\n";
			}
			else {
				cout << "라고 답변하였지." << "\n";
			}
		}
		for (int i = cnt; i > 0; i--) {
			for (int j = 0; j < (cnt-1) * 4; j++) {
				cout << "_";
			}
			cout << "라고 답변하였지."<<"\n";
			cnt--;
		}
		return;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4*(K-N); j++) {
			cout << "_";
		}
		if (i == 0) {
			cout << "\"재귀함수가 뭔가요?\""<<"\n";
		}
		else if (i == 1) {
			cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어."<<"\n";
		}
		else if (i == 2) {
			cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << "\n";
		}
		else {
			cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << "\n";
		}
	}
	print_result(N - 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> K;
	cnt = K;
	cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
	print_result(K);
}