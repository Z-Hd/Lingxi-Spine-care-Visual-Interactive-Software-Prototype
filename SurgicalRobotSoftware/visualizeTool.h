#ifndef VISUALIZETOOL_H
#define VISUALIZETOOL_H
#include "vtkAutoInit.h"
#include <vtkImageReslice.h>
#include <vtkImageData.h>
#include <vtkRenderWindow.h>
VTK_MODULE_INIT(vtkRenderingOpenGL2);
VTK_MODULE_INIT(vtkInteractionStyle);
VTK_MODULE_INIT(vtkRenderingVolumeOpenGL2);
VTK_MODULE_INIT(vtkRenderingFreeType);

class VisualizeTool
{
public:
    enum Type{
        Axial,
        Coronal,
        Sagittal
    };
    VisualizeTool(){};
    ~VisualizeTool(){};
    vtkSmartPointer<vtkImageReslice> getReslice(vtkImageData* imageData, Type type, double index);
    void showReslice(vtkImageData* imageData,vtkSmartPointer<vtkRenderWindow>& renderWindow,Type type,double index,bool isSegment);
    void show3D(vtkSmartPointer<vtkRenderWindow>& renderWindow,vtkImageData* imageSegment,bool update);
private:
    // 平行于XY平面的切片
    double axialElements[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };
    // 平行于XZ平面的切片
    double coronalElements[16] = { 1, 0, 0, 0, 0, 0, 1, 0, 0,-1, 0, 0, 0, 0, 0, 1 };
    // 平行于YZ平面的切片
    double sagittalElements[16] = { 0, 0,-1, 0, 1, 0, 0, 0, 0,-1, 0, 0, 0, 0, 0, 1 };
    //

};

#endif // VISUALIZETOOL_H
