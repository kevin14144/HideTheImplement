#include "myimagelib.h"

myImageLib::myImageLib()
{

}

myImageLib::~myImageLib()
{
    std::cout<<"Destroy my image lib.\n";
}


void myImageLib::ThresholdValue(int, float, float)
{
  std::cout<<"This is threshold processing form my image lib.\n";
}
