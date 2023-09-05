function spread(team, opp) {
  var initialSpread =  team - opp;
 
  if(initialSpread > 15){
    return 15;
  } else if(initialSpread < -15){
    return -15
  } else {
    return initialSpread;
  }
  
}
