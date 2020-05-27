cmake_minimum_required(VERSION 3.15.0)

project(aa)





set(core_src  
a.cc
) 
add_library(net_core ${core_src}) 
set(app
b.cc
)
add_executable(app ${app})
target_link_libraries(app net_core)

