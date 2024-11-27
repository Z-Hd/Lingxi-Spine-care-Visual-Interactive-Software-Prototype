#ifndef GLOBALVTKDATAMANAGER_H
#define GLOBALVTKDATAMANAGER_H

#include <vtkSmartPointer.h>
#include <vtkImageData.h>
class GlobalVTKDataManager{
public:
    static GlobalVTKDataManager& instance(){
        static GlobalVTKDataManager instance;
        return instance;
    }
    vtkSmartPointer<vtkImageData> getImage(){return image;}
    vtkSmartPointer<vtkImageData> getSegment(){return segmentImage;}
    void setImage(vtkSmartPointer<vtkImageData> img){image = img;}
    void setSegment(vtkSmartPointer<vtkImageData> segment){segmentImage= segment;}
private:
    GlobalVTKDataManager() {image = vtkSmartPointer<vtkImageData>::New();
                            segmentImage = vtkSmartPointer<vtkImageData>::New();}
    vtkSmartPointer<vtkImageData> image;
     vtkSmartPointer<vtkImageData> segmentImage;
};

#endif // GLOBALVTKDATAMANAGER_H
