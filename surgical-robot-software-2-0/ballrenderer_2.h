#ifndef BALLRENDERER_2_H
#define BALLRENDERER_2_H

#include <QVTKOpenGLNativeWidget.h>
#include "sharedrenderer.h"

class Ballrenderer_2
{
public:
    Ballrenderer_2();
    static void renderBall(QVTKOpenGLNativeWidget* vtkWidget);
};

#endif // BALLRENDERER_2_H
