
# add_executable(test_make test_make.cc)
# target_link_libraries(test_make net_base)
set(CXX_FLAGS
    -g
    # -DVALGRIND
    -DCHECK_PTHREAD_RETURN_VALUE
    -D_FILE_OFFSET_BITS=64
    -Wall
    -Wextra
    -Werror
    -Wconversion
    -Wno-unused-parameter
    -Wold-style-cast
    -Woverloaded-virtual
    -Wpointer-arith
    -Wshadow
    -Wwrite-strings
    -march=native
    -std=c++11
    -Wc++11-extensions
    -rdynamic
    )

# add_executable(test_processinfo test_processinfo.cc)
# target_link_libraries(test_processinfo net_base)

add_executable(test_exception test_exception.cc)
target_link_libraries(test_exception net_base)