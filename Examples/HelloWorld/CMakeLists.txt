##########################################
# HelloWorld
##########################################

file(GLOB_RECURSE sources 
	*.cpp 
	*.hpp)

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/../../Headers
)

add_library(HelloWorld SHARED ${sources})
set_target_properties(HelloWorld PROPERTIES SUFFIX ".${BUILD_ARCH}")
set_property(TARGET HelloWorld PROPERTY FOLDER "Projects")