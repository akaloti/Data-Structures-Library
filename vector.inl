template <typename T>
Vector<T>::Vector()
    : mSize{0}
    , mCapacity{8}
{
    mArr = std::make_unique<T[]>(mCapacity);
}

template <typename T>
void Vector<T>::pushBack(const T& elem)
{
    if (++mSize > mCapacity)
        increaseCapacity();
    mArr[mSize - 1] = elem;
}

template <typename T>
T& Vector<T>::operator[](std::size_t i)
{
    // TODO: Runtime bounds checking. Which type of exception to throw?

    return mArr[i];
}

template <typename T>
const T& Vector<T>::operator[](std::size_t i) const
{
    // TODO: Use a C++ style cast instead.
    return (*((Vector *) this))[i];
}

template <typename T>
void Vector<T>::increaseCapacity()
{
    // Create a larger underlying array and transfer contents from
    // the old array to the new one.
    auto oldArr = std::move(mArr);
    std::size_t oldCapacity = mCapacity;
    mCapacity *= 2;
    mArr = std::make_unique<T[]>(mCapacity);
    for (std::size_t i = 0; i < oldCapacity; ++i)
        mArr[i] = oldArr[i];
}

template <typename T>
void Vector<T>::decreaseCapacity()
{
    // TODO: Implement.

}
