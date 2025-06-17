#ifndef GLOBALVTKDATAMANAGER_H
#define GLOBALVTKDATAMANAGER_H

#include <vtkSmartPointer.h>
#include <vtkPolyData.h>
#include <vtkImageData.h>
#include <QString.h>
#include <QMap.h>
class GlobalVTKDataManager{
public:
    static GlobalVTKDataManager& instance(){
        static GlobalVTKDataManager instance;
        return instance;
    }
    vtkSmartPointer<vtkImageData> getImage(){return image;}
    vtkSmartPointer<vtkImageData> getSegment(){return segmentImage;}
    vtkSmartPointer<vtkPolyData> getData3D(){return data3D;}
    void setImage(vtkSmartPointer<vtkImageData> img){image = img;}
    void setSegment(vtkSmartPointer<vtkImageData> segment){segmentImage= segment;}
    void setData3D(vtkSmartPointer<vtkPolyData> data3d){data3D= data3d;}
    void setDicomTags(QMap<QString, QString> dicomtags){dicomTags=dicomtags;}
    void setIsLoaded(bool load){isLoad=load;}
    bool isLoaded(){return isLoad;}
private:
    GlobalVTKDataManager() {image = vtkSmartPointer<vtkImageData>::New();
        segmentImage = vtkSmartPointer<vtkImageData>::New();
        data3D = vtkSmartPointer<vtkPolyData>::New();}
    vtkSmartPointer<vtkImageData> image;
    vtkSmartPointer<vtkImageData> segmentImage;
    vtkSmartPointer<vtkPolyData> data3D;
    QMap<QString, QString> dicomTags;
    bool isLoad;
};

#endif // GLOBALVTKDATAMANAGER_H
