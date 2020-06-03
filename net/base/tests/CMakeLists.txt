
# cmake_minimum_required(VERSION 3.11.4)

# project(net_base_p)
# set(CMAKE_CXX_COMPILER "g++-8")
# set(CMAKE_CXX_STANDARD 17
#     )

find_package(GTEST REQUIRED
    )

if(GTEST_FOUND)
    message(STATUS "--the envirment can support gtest")
    message(STATUS "-- the gtest lib " ${GTEST_LIBRALIES} ${GTEST_INCLUDE_DIRS})
    include_directories(${GTEST_INCLUDE_DIRS})

    add_executable(g_test g_test.cc)
    target_link_libraries(g_test ${GTEST_LIBRARIES})
endif()



add_executable(test_hpp test_hpp.cc)
target_link_libraries(test_hpp net_core)



#ADD_DEFINITIONS(
#    -O3 -g -W -Wall
#    -Wunused-variable -Wunused-parameter -Wunused-function -Wunused
#    -Wno-deprecated -Woverloaded-virtual -Wwrite-strings
#    -D__WUR= -D_REENTRANT -D_FILE_OFFSET_BITS=64 -DTIXML_USE_STL
#    )





# add_executable(test_make test_make.cc)
# target_link_libraries(test_make net_base)
# add_executable(test_processinfo test_processinfo.cc)
# target_link_libraries(test_processinfo net_base)

# add_executable(test_exception test_exception.cc)
# target_link_libraries(test_exception net_base)

# find_package(Boost COMPONENTS system filesystem REQUIRED regex thread )
# if(Boost_FOUND)
#     message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
#     message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
#     message(STATUS "Boost_VERSION: ${Boost_VERSION}")
#     include_directories(${Boost_INCLUDE_DIRS})
# endif()


# add_executable(app b.cc)
# target_link_libraries(app ${Boost_LIBRARIES})





