#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>

/**
 * Vector implementation that resizes as necessary.
 * Unlike std::vector, this implementation does decrease its capacity if appropriate.
 * The capacity will always be a power of 2 that is at least 8.
 */
template <typename T>
class Vector
{
public:
    Vector();
    // TODO: other constructors, etc.

    std::size_t size() const { return mSize; }
    std::size_t capacity() const { return mCapacity; }

    bool empty() const { return 0 == mSize; }

    void pushBack(const T& elem);
    // TODO: move version
    // TODO: How to verify the move semantics version works?

    // TODO: method for deletion, policy for shrinking capacity

    /**
     * These do NOT perform bounds checking.
     */
    T& operator[](std::size_t i);
    const T& operator[](std::size_t i) const;

    /**
     * These DO perform bounds checking.
     */
    T& at(std::size_t i);
    const T& at(std::size_t i) const;

    /**
     * Unlike with std::vector, these methods throw an exception
     * if used on an empty container.
     */
    T& front();
    const T& front() const;
    T& back();
    const T& back() const;

private:  // helper methods

    // Doubles capacity.
    void increaseCapacity();

    // Halves capacity.
    void decreaseCapacity();

private:  // data members

    std::unique_ptr<T[]> mArr = nullptr;
    std::size_t mSize;
    std::size_t mCapacity;
};

#include "vector.inl"
#endif  // VECTOR_HPP
