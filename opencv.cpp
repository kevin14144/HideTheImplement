#include "opencv.h"

OpenCV::OpenCV()
{

}

OpenCV::~OpenCV()
{
     std::cout<<"Destroy Opencv lib.\n";
}

void OpenCV::ThresholdValue(int, float, float)
{
    std::cout<<"This is threshold processing form openCV.\n";
}
