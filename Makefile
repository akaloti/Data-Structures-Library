CPP = g++
CPPFLAGS = -Wall -Werror -std=c++17 $(DEBUG)
ifeq ($(D), 1)
	DEBUG = -g
endif
EXECUTABLES = $(VECTOR_EXECUTABLES)
VECTOR_EXECUTABLES = demo_vector test_vector

all: $(EXECUTABLES)

$(VECTOR_EXECUTABLES): vector.hpp vector.inl

%: %.cpp
	$(CPP) $(CPPFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f $(EXECUTABLES)
