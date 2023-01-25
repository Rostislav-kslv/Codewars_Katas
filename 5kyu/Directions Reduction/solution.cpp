class DirReduction
{
public:
 static std::vector<std::string> dirReduc(std::vector<std::string> &arr){
      bool done = false;
      while(true){
        if(done) break;
        done = true;
        for(auto next = arr.begin(); next != arr.end(); ){
          auto cur = next++;
          if(next == arr.end()) break;
          //std::cout  << "SET CUR " << *cur << std::endl;
          //std::cout  << "SET NEXT " << *next << std::endl;
          if((*cur == "NORTH" && *next == "SOUTH") || (*cur == "SOUTH" && *next == "NORTH") || (*cur == "WEST" && *next == "EAST") || (*cur == "EAST" && *next == "WEST")){
            //std::cout  << "DELETE CUR " << *cur << std::endl;
            next = arr.erase(cur);
            //std::cout  << "DELETE NEXT " << *next << std::endl;
            next = arr.erase(next);
            done = false;
          }
        }
      }
      return arr;
  }
};
