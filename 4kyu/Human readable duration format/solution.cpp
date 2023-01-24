#include <string>

std::string format_duration(int seconds) {
  if(seconds <= 0) return "now";
  std::string res = "";
  int years = 0;
  int days = 0;
  int hours = 0;
  int mins = 0;
  int words = 0;
  if(seconds > (60 * 60 * 24 * 365)){
    years = seconds / (60 * 60 * 24 * 365);
    seconds %= (60 * 60 * 24 * 365);
    words++;
  }
  if(seconds > (60 * 60 * 24)){
    days = seconds / (60 * 60 * 24);
    seconds %= (60 * 60 * 24);
    words++;
  }
  if(seconds > (60 * 60)){
    hours = seconds / (60 * 60);
    seconds %= (60 * 60);
    words++;
  }
  if(seconds > 60){
    mins = seconds / 60;
    seconds %= 60;
    words++;
  }
  if(seconds > 0){
    words++;
  }

  int max_words = words;

  for(;words > 0; words--){
    if (words == 1 && max_words > 1){
      res += " and ";
    }
    if(words != max_words && words != 1){
      res += ", ";
    }
    if(years > 0){
      res +=  std::to_string(years);
      if(years == 1){
        res += " year";
      }
      else{ res += " years";}
      years = 0;
      continue;
    }
    if(days > 0){
      res +=  std::to_string(days);
      if(days == 1){
        res += " day";
      }
      else{ res += " days";}
      days = 0;
      continue;
    }
    if(hours > 0){
      res +=  std::to_string(hours);
      if(hours == 1){
        res += " hour";
      }
      else{ res += " hours";}
      hours = 0;
      continue;
    }
    if(mins > 0){
      res +=  std::to_string(mins);
      if(mins == 1){
        res += " minute";
      }
      else{ res += " minutes";}
      mins = 0;
      continue;
    }
    if(seconds > 0){
      res += std::to_string(seconds);
      if(seconds == 1){
        res += " second";
      }
      else{ res += " seconds";}
      seconds = 0;
      continue;
    }
  }
  return res;
}
