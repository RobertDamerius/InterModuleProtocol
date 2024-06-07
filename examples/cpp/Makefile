# Get source files
rwildcard      = $(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))
SOURCES_CPP    = Main.cpp
SOURCES_CPP   += $(call rwildcard,../../source,*.cpp)


# Build settings
CPP           := g++
CPP_FLAGS     := -std=c++17 -Wall -Wextra -O3
LIBS_WINDOWS  := -lstdc++ -lpthread -lwsock32
LIBS_LINUX    := -lstdc++ -lpthread
INCLUDE_PATHS := -I/usr/include -I/usr/local/include -I../../source/InterModuleProtocol
LIBRARY_PATHS := -L/usr/lib -L/usr/local/lib


# Compile example
.PHONY: all
all:
ifeq ($(OS), Windows_NT)
    $(CPP) $(CPP_FLAGS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) -o example.exe $(SOURCES_CPP) $(LIBS_WINDOWS)
else
    $(CPP) $(CPP_FLAGS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) -o example $(SOURCES_CPP) $(LIBS_LINUX)
endif

