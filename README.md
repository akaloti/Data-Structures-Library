# C++ Data Structures Library

The goal is for this repository to contain some modern C++ (C++17) implementations of different, sometimes unconventional data structures that I happen to be curious about implementing.

Each data structure implementation will be templated, support iterators (if sensible), and make use of move semantics.

Unit testing is done with the Catch framework.

## Currently Implementing

- Vector whose capacity shrinks if enough of it is unused.

## Hope to Implement

- Hash table with a collision resolution method that you don't commonly see in a data structures course.
- Stable vector, as inspired by [this](https://www.boost.org/doc/libs/1_68_0/doc/html/container/non_standard_containers.html#container.non_standard_containers.stable_vector).
