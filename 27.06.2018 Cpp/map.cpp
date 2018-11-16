#include <iostream>
#include <map>

class PlateCode{
  std::map<std::string,int> m;
public:
  PlateCode(){};
  ~PlateCode(){};

  std::map<std::string,int> &initMap(){
    m["istanbul"] = 34;
    m["ankara"]   = 6;
    m["izmir"]    = 35;

    return m;
  }
};

int main(){

  PlateCode pc;
  std::string strCity;
  std::map<std::string,int> m;

  m = pc.initMap();

  m["adana"] = 1;
  m.insert(std::pair<std::string,int>("canakkale",17));
  m.insert(std::make_pair("nigde",51));

  std::cout << "enter a city name : " << std::endl;

  std::cin >> strCity;

  if(m.find(strCity) != m.end()){
    std::map<std::string,int>::iterator it;
    it = m.find(strCity);
    std::cout << "City : " << it->first << " Plate Code : " << it->second << std::endl;
  }
  else{
    std::cout << "cannot find city name!" << std::endl;
  }

  std::cout << "Final Map : " << std::endl;

  for(std::map<std::string,int>::iterator it = m.begin(); it !=m.end(); it++){
    std::pair<std::string,int> p = *it;

    std::cout << p.first << " : " << p.second << std::endl;
  }
}
