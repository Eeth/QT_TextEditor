# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CSE_165_Project_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CSE_165_Project_autogen.dir\\ParseCache.txt"
  "CSE_165_Project_autogen"
  )
endif()
