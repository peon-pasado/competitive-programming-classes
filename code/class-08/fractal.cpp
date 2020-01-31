#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

vector <string> grid;
int DR[] = {-1, -1, 1, 1, 0};
int DC[] = {1, -1, 1, -1, 0};

void print () {
  for (int i = 0; i < grid.size(); i++) {
    string& row = grid[i];
    int j = row.size() - 1;
    while (row[j] == ' ') row.erase(row.begin() + j);
    cout << row << endl;
  }
  cout << '-' << endl;
}

void rec (int r, int c, int step) {
  if (step == 0) {
    grid[r][c] = 'X';
    return;
  }
  for (int d = 0; d < 5; d++) {
    rec(r + DR[d] * step, c + DC[d] * step, step / 3);
  }
}

int main () {
  int n;
  while (cin >> n, n != -1) {
    int gridSize = int(pow(3, n - 1));
    grid = vector <string> (gridSize, string(gridSize, ' '));
    int initial = (n == 1) ? 0 : gridSize / 3 + gridSize / 6; 
    int step = gridSize / 3;
    rec(initial, initial, step);
    print();
  }
  return (0);
}
