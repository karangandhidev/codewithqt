include(E:/QT Karan Projects/project2/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/project2-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE E:/QT Karan Projects/project2/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/project2.exe
    GENERATE_QT_CONF
)
