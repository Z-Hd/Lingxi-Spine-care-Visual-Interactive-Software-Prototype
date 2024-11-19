#ifndef RESLICETOOL_H
#define RESLICETOOL_H
#include "vtkAutoInit.h"
#include <vtkImageReslice.h>
#include <vtkImageData.h>
#include <vtkRenderWindow.h>
VTK_MODULE_INIT(vtkRenderingOpenGL2);
VTK_MODULE_INIT(vtkInteractionStyle);
VTK_MODULE_INIT(vtkRenderingVolumeOpenGL2);
VTK_MODULE_INIT(vtkRenderingFreeType);

class ResliceTool
{
public:
    enum Type{
        Axial,
        Coronal,
        Sagittal
    };
    ResliceTool(){};
    ~ResliceTool(){};
    vtkSmartPointer<vtkImageReslice> getReslice(vtkImageData* imageData, Type type, double index);
    void showReslice(vtkImageData* imageData,vtkSmartPointer<vtkRenderWindow>& renderWindow,Type type,double index,bool isSegment);
private:
    // 平行于XY平面的切片
    double axialElements[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };
    // 平行于XZ平面的切片
    double coronalElements[16] = { 1, 0, 0, 0, 0, 0, 1, 0, 0,-1, 0, 0, 0, 0, 0, 1 };
    // 平行于YZ平面的切片
    double sagittalElements[16] = { 0, 0,-1, 0, 1, 0, 0, 0, 0,-1, 0, 0, 0, 0, 0, 1 };

};

#endif // RESLICETOOL_H
