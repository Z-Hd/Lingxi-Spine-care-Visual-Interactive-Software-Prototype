cmake_minimum_required(VERSION 3.16)

project(SurgicalRobotSoftware VERSION 0.1 LANGUAGES CXX)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(VTK_DIR "path/VTK/lib/cmake/vtk-9.4")
find_package(VTK 9.4 REQUIRED)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

find_package(Qt6 REQUIRED COMPONENTS Multimedia)
find_package(Qt6 REQUIRED COMPONENTS MultimediaWidgets)

set(PROJECT_SOURCES
        main.cpp
        login.cpp
        login.h
        login.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(SurgicalRobotSoftware
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        image.qrc
        spinalimage.h spinalimage.cpp spinalimage.ui
        intraoperativeimage.h intraoperativeimage.cpp intraoperativeimage.ui
        RoutePlan.h
        RoutePlan.cpp
        RoutePlan.ui
        mainwidget.h mainwidget.cpp mainwidget.ui
        visualizeTool.h visualizeTool.cpp
        GlobalVTKDataManager.h




    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET SurgicalRobotSoftware APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(SurgicalRobotSoftware SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(SurgicalRobotSoftware
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(SurgicalRobotSoftware PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
                                            Qt${QT_VERSION_MAJOR}::OpenGL
                                            Qt${QT_VERSION_MAJOR}::Multimedia
                                            Qt${QT_VERSION_MAJOR}::MultimediaWidgets
                                            ${VTK_LIBRARIES}
                                            ${PCL_LIBRARIES}
                                            ${ITK_LIBRARIES})

vtk_module_autoinit(TARGETS SurgicalRobotSoftware MODULES ${VTK_LIBRARIES})


# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.SurgicalRobotSoftware)
endif()
set_target_properties(SurgicalRobotSoftware PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS SurgicalRobotSoftware
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(SurgicalRobotSoftware)
endif()
