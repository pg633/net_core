
include(CheckFunctionExists)

check_function_exists(accept4 HAVE_ACCEPT4)
if(NOT HAVE_ACCEPT4)
    set_source_files_properties(SocketsOps.cc PROPERTIES COMPILE_FLAGS "-DNO_ACCEPT4")
    message("-- net don't having lib accept4")
endif()


set(core_src  
log.cc
)


add_library(net_core ${core_src})
target_link_libraries(net_core net_base)

install(TARGETS net_core DESTINATION lib)

# set(HEADERS
#   Buffer.h
#   Callbacks.h
#   Channel.h
#   Endian.h
#   EventLoop.h
#   EventLoopThread.h
#   EventLoopThreadPool.h
#   InetAddress.h
#   TcpClient.h
#   TcpConnection.h
#   TcpServer.h
#   TimerId.h
#   )


file(GLOB HEADERS "*.h")
install(FILES ${HEADERS} DESTINATION include/net/core)


if(NET_TEST)
    add_subdirectory(tests)
endif()
