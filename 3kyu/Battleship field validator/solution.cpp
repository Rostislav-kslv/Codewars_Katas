#include <vector>

bool validate_battlefield(std::vector< std::vector<int> > field) {
  int battleship = 0; //size 4
  int cruisers = 0;   //size 3
  int destroyers = 0; //size 2
  int submarines = 0; //size 1
  
  for(int row = 0; row < 10; row++){
    for(int col = 0; col < 10; col++){
      if(field[row][col] != 0){
        if(row < 9 && col < 9 && field[row + 1][col + 1] == 1) return false;// check
        if(row < 9 && col > 0 && field[row + 1][col - 1] == 1) return false;// diagonal

        if(field[row][col] == 1){
          submarines++;
        }
        
        if(col < 9 && field[row][col + 1] != 0){// check horizontal
          field[row][col + 1] =  field[row][col] + 1;
          if(field[row][col + 1] == 2){
            destroyers++;
          }
          else if(field[row][col + 1] == 3){
            cruisers++;
          }
          else if(field[row][col + 1] == 4){
            battleship++;
          }
          else return false;
        }
        
        if(row < 9 && field[row + 1][col] != 0){// check vertical
          field[row + 1][col] =  field[row][col] + 1;
          if(field[row + 1][col] == 2){
            destroyers++;
          }
          else if(field[row + 1][col] == 3){
            cruisers++;
          }
          else if(field[row + 1][col] == 4){
            battleship++;
          }
          else return false;
        }
      }
    }
  }

  if(battleship != 1) return false;
  if(cruisers != 3) return false;
  if(destroyers != 6) return false;
  if(submarines != 10) return false;
  

  return true;
}
