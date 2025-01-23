include(E:/QT Karan Projects/project0/build/Desktop_Qt_6_9_0_MinGW_64_bit-Release/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/project0-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE E:/QT Karan Projects/project0/build/Desktop_Qt_6_9_0_MinGW_64_bit-Release/project0.exe
    GENERATE_QT_CONF
)
