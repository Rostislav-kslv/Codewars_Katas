class Pong {
  public:
    int max_score;
    int player1;
    int score1;
    int score2;
    bool ended;
    Pong(int _max_score): max_score(_max_score), player1(0), score1(0), score2(0),ended(false){};
    
    std::string play(int ball_pos, int player_pos) { 
      if(ended) return "Game Over!";
     bool miss;
      player1++;
     if(ball_pos > player_pos + 3 || ball_pos < player_pos - 3) miss = true;
      else miss = false;
     
      if(miss){
        if(player1 % 2== 1) {
          score2++; 
          if(score2 == max_score) {ended = true;
          return "Player 2 has won the game!";}
          return "Player 1 has missed the ball!";
        }
        else {
          score1++;
          if(score1 == max_score){ended = true;
            return "Player 1 has won the game!";}
          return "Player 2 has missed the ball!";
        }
      }
      else {
        if(player1%2 == 1){ 
           return "Player 1 has hit the ball!";
        }
        else return "Player 2 has hit the ball!";
      }
    };
};
