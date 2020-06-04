import os
import ycm_core
PWD = os.path.dirname(os.path.realpath(__file__))
flags = [
        '-Wall',
        '-Wextra',
        '-Werror',
        '-Wno-long-long',
        '-Wno-variadic-macros',
        '-fexceptions',
        #  '-DNDEBUG',
        '-std=c++17',
        '-x',
        'c++',
        '-I',
        '/usr/include',
        '-isystem',
        '/usr/lib/gcc/x86_64-linux-gnu/5/include',
        '-isystem',
        '/usr/include/x86_64-linux-gnu',
        '-isystem'
        '/usr/include/c++/5',
        '-isystem',
        '/usr/include/c++/5/bits',

        '-isystem',
        '/usr/local/include',
        '-isystem',
        '/Library/Developer/CommandLineTools/usr/include/c++/v1',
        '-isystem',
        '/Library/Developer/CommandLineTools/usr/lib/clang/10.0.1/include',
        '-isystem',
        '/Library/Developer/CommandLineTools/usr/include',
        '-isystem',
        '/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr/include',
        '-isystem',
        '/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/System/Library/Frameworks' ,
        '-isystem',
        '../../'

        ]
SOURCE_EXTENSIONS = [ '.cpp', '.cxx', '.cc', '.c', ]
def FlagsForFile( filename, **kwargs ):
    return {
            'flags': flags,
            'do_cache': True
            }

