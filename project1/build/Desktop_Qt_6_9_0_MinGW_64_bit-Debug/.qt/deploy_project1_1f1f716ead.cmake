include(E:/QT Karan Projects/project1/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/project1-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE E:/QT Karan Projects/project1/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/project1.exe
    GENERATE_QT_CONF
)
