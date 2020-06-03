

# set(CMAKE_CXX_COMPILER "g++-8")
# set(CMAKE_CXX_STANDARD 17)

set(base_src
    LogFile.cc
    FileUtil.cc
    ProcessInfo.cc
    Logging.cc
    Exception.hpp
    CurrentThread.cc
    )


message("--" ${base_src})

find_package(Boost COMPONENTS system filesystem REQUIRED regex thread)


if(Boost_FOUND)
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")
    include_directories(${Boost_INCLUDE_DIRS})
endif()

add_library(net_base ${base_src})
target_link_libraries(net_base pthread )

if(Boost_FOUND)
    target_link_libraries(net_base ${Boost_LIBRARIES})
endif()



install(TARGETS net_base DESTINATION lib)

file(GLOB HEADERS "*.h[pp]")
install(FILES ${HEADERS} DESTINATION include/net/base)

# INSTALL(TARGETS myrun mylib mystaticlib
#        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
# )

if(NET_TEST)
    add_subdirectory(tests)
endif()
