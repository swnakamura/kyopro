#include <iostream>
using namespace std;

int N, M;
char f[100][100];

void dft(int x, int y) {
  f[x][y] = '.';
  for (int i = -1; i < 2; i++) {
    for (int j = -1; j < 2; j++) {
      int xd = x + i, yd = y + j;
      if (xd >= 0 && xd < N && yd >= 0 && yd < M && f[xd][yd] == 'W')
        dft(xd, yd);
    }
  }
  return;
}

void solve() {
  int res = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (f[i][j] == 'W') {
        dft(i, j);
        res++;
      }
    }
  }
  cout << res << endl;
  return;
}

int main() {
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> f[i][j];
    }
  }
  solve();
  return 0;
}
