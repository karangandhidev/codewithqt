# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\project0_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\project0_autogen.dir\\ParseCache.txt"
  "project0_autogen"
  )
endif()
