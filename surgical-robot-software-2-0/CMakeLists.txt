cmake_minimum_required(VERSION 3.16)

project(surgical-robot-software-2-0 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(VTK_DIR "path/VTK/lib/cmake/vtk-9.2")
find_package(VTK 9.2 REQUIRED)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

find_package(Qt6 REQUIRED COMPONENTS Multimedia)
find_package(Qt6 REQUIRED COMPONENTS MultimediaWidgets)

set(PROJECT_SOURCES
        main.cpp
        mainwidget.cpp

        mainwidget.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(surgical-robot-software-2-0
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        mainwidget.h
        mainwidget.h
        simulationwidget.h simulationwidget.cpp simulationwidget.ui
        patientinfowidget.h patientinfowidget.cpp patientinfowidget.ui
        equipinfowidget.h equipinfowidget.cpp equipinfowidget.ui
        imagedisplaywidget.h imagedisplaywidget.cpp imagedisplaywidget.ui
        imageinputwidget.h imageinputwidget.cpp imageinputwidget.ui
        armcontrolwidget.h armcontrolwidget.cpp armcontrolwidget.ui
        ndiwidget.h ndiwidget.cpp ndiwidget.ui
        image.qrc
        segmentationwidget.h segmentationwidget.cpp segmentationwidget.ui
        registrationwidget.h registrationwidget.cpp registrationwidget.ui
        routeplan1widget.h routeplan1widget.cpp routeplan1widget.ui
        vertebraselectionwidget.h vertebraselectionwidget.cpp vertebraselectionwidget.ui
        routeplan2widget.h routeplan2widget.cpp routeplan2widget.ui
        executewidget.h executewidget.cpp executewidget.ui
        intraoperativewidget.h intraoperativewidget.cpp intraoperativewidget.ui
        averagewidget.h averagewidget.cpp averagewidget.ui
        averagewidget.h averagewidget.cpp averagewidget.ui
        enlargedwidget.h enlargedwidget.cpp enlargedwidget.ui
        enlargedmodel3dwidget.h enlargedmodel3dwidget.cpp enlargedmodel3dwidget.ui
        login.h login.cpp login.ui
        directionalpadwidget.cpp directionalpadwidget.h
        GlobalVTKDataManager.h visualizetool.cpp visualizetool.h
        ballrenderer.h ballrenderer.cpp
        ballrenderer_2.h ballrenderer_2.cpp
        sharedrenderer.h
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET surgical-robot-software-2-0 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(surgical-robot-software-2-0 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(surgical-robot-software-2-0
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(surgical-robot-software-2-0 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
                                                          Qt${QT_VERSION_MAJOR}::OpenGL
                                                          Qt${QT_VERSION_MAJOR}::Multimedia
                                                          Qt${QT_VERSION_MAJOR}::MultimediaWidgets
                                                          ${VTK_LIBRARIES}
                                                          ${PCL_LIBRARIES}
                                                          ${ITK_LIBRARIES}
)

vtk_module_autoinit(TARGETS surgical-robot-software-2-0 MODULES ${VTK_LIBRARIES})

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.surgical-robot-software-2-0)
endif()
set_target_properties(surgical-robot-software-2-0 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS surgical-robot-software-2-0
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(surgical-robot-software-2-0)
endif()
