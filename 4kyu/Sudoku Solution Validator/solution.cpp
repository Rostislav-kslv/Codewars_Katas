bool validate(std::vector<int> &v){
  for(int i = 1; i <= 9; i++){
    if(std::find(v.begin(), v.end(), i) == v.end()){
      return false;
    }
  }
  return true;
}

bool validSolution(unsigned int board[9][9]){
    for(int i = 0; i < 9; i++){
        std::vector<int> vr;
        std::vector<int> vc;
        std::vector<int> vs;
      for(int j = 0; j < 9; j++){
        if(board[i][j] == 0 || board [j][i] == 0 || board[j/3+(i/3)*3][j%3+(i%3)*3] == 0) return false;
        vr.push_back(board[i][j]);
        vc.push_back(board[j][i]);
        vs.push_back(board[j/3+(i/3)*3][j%3+(i%3)*3]);
      }
      if(!validate(vr) || !validate(vc) || !validate(vs)) return false;
    }
   return true;
}
