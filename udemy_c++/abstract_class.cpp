#include <iostream>

class Document{
public:
  virtual void Serialize(float version) = 0;
};

class Text : public Document{
public:
  void Serialize(float version) override final{
    std::cout << "Text::Serialize" << std::endl;
  }
};

class RichText : public Text{
public:
  //virtual void Serialize(float version){
  //  std::cout << "RichText::Serialize" << std::endl;
  //}
};

class XML : public Document{
public:
    void Serialize(float version) override {
    std::cout << "XML::Serialize" << std::endl;
  }
};

void Write(Document *d){
  d->Serialize(1.1f);
}
int main(){
  Document *d = new Document();
  XML xml;
  Write(&xml);
}