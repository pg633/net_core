
set(base_src
    # LogFile.cc
    # FileUtil.cc
    # ProcessInfo.cc
    a.cc
)


message("++++++" ${base_src})

add_library(net_base ${base_src})
target_link_libraries(net_base pthread )



install(TARGETS net_base DESTINATION lib)

file(GLOB HEADERS "*.h")
install(FILES ${HEADERS} DESTINATION include/net/base)

# INSTALL(TARGETS myrun mylib mystaticlib
#        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
# )

if(NET_TEST)
    add_subdirectory(tests)
endif()
