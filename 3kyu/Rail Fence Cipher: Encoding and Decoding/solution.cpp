#include <string>

std::string encode_rail_fence_cipher(const std::string &str, int n) {
  char rail[n][str.size()];
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < str.size(); j++){
      rail[i][j] = '\n';
    }
  }

  bool down = false;
  int row = 0;

  for(int i = 0; i < str.size(); i++){
    if(row == 0 || row == n - 1){
      down = !down;
    }

    rail[row][i] = str[i];

    if(down) row++; else row--;
    
  }

  std::string res = "";

  for(int i = 0; i < n; i++){
    for(int j = 0; j < str.size(); j++){
      if(rail[i][j] != '\n'){
        res += rail[i][j];
      }
    }
  }
  
  return res;
}

std::string decode_rail_fence_cipher(const std::string &str, int n) {
  char rail[n][str.size()];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < str.size(); j++){
      rail[i][j] = '\n';
    }
  }

  bool down = false;
  int row = 0;

  for(int i = 0; i < str.size(); i++){
    if(row == 0 || row == n - 1){
      down = !down;
    }

    rail[row][i] = '\t';

    if(down) row++; else row--;
  }

  int idx = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < str.size(); j++){
      if(rail[i][j] == '\t'){
        rail[i][j] = str[idx];
        idx++;
      }
    }
  }

  std::string res = "";
  down = false;
  row = 0;

  for(int i = 0; i < str.size(); i++){
    if(row == 0 || row == n - 1){
      down = !down;
    }

    res += rail[row][i];

    if(down) row++; else row--;
  }
  
  return res;
}
