# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\surgical-robot-software-2-0_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\surgical-robot-software-2-0_autogen.dir\\ParseCache.txt"
  "surgical-robot-software-2-0_autogen"
  )
endif()
