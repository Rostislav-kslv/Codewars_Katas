#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>> &sv) {
  std::vector<int> v;
  int rows = sv.size();
  int cols = sv[0].size();
  int r[] = {0,1,0,-1};
  int c[] = {1,0,-1,0};
  int x = 0, y = 0;
  std::vector<std::vector<bool> > seen(rows, std::vector<bool>(cols, false));
  int d = 0;

  for(int i = 0; i < rows * cols; i++){
    v.push_back(sv[x][y]);
    seen[x][y] = true;

    int nx = x + r[d];
    int ny = y + c[d];

    if(nx >= 0 && nx < rows && ny >= 0 && ny < cols && seen[nx][ny] == false){
      x = nx;
      y = ny;
    } else {
      d = (d + 1) % 4;
      x = x + r[d];
      y = y + c[d];
    }
  }
  
  return v;
}
