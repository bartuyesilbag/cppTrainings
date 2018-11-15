#include <iostream>

class Stream{
public:
  Stream(const std::string fileName){
    mStr = fileName;
    std::cout << fileName << std::endl;
  }
  std::string getFileName(){
    return mStr;
  }
  ~Stream(){
     std::cout << "~Stream" << std::endl;
  }
private:
  std::string mStr;
};

class IStream : virtual public Stream{
public:
  IStream(std::istream & i,const std::string &iname) : is(i), Stream(iname){
    std::cout << "IStream" << std::endl;
  }
  std::istream & operator >> (std::string & data){
    is >> data;
    return is;
  }
  ~IStream(){
     std::cout << "~IStream" << std::endl;
  }
private:
  std::istream &is;
};

class OStream : virtual public Stream{
public:
  OStream(std::ostream & o,const std::string &oname) : os(o), Stream(oname){
    std::cout << "OStream" << std::endl;
  }
  std::ostream & operator << (std::string & data){
    os << data;
    return os;
  }
  ~OStream(){
     std::cout << "~OStream" << std::endl;
  }
private:
  std::ostream &os;
};

class IOStream : public IStream, public OStream{
public:
  IOStream(const std::string & fileName): OStream(std::cout,fileName), IStream(std::cin,fileName), Stream(fileName){
    std::cout << "IOStream" << std::endl;
  }
  ~IOStream(){
     std::cout << "~IOStream" << std::endl;
  }
};
int main(){
  IOStream stream("deneme");
  std::string test;
  stream >> test;
  stream << test;
  stream.getFileName();
  return 0;
}