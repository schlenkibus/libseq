#pragma once

#include <chrono>
#include <vector>
#include <algorithm>
#include <mutex>
#include "sequenceable.h"

template <class T>
class Track {
public:
    typedef std::vector<std::tuple<std::chrono::time_point<T>, sequenceable>> ItemVector;
    Track();
    explicit Track(const std::chrono::duration<T>& length);
    const std::chrono::duration<T>& getLength();
    void put(const sequenceable& item);
    const ItemVector& getItems() const;
protected:
    std::chrono::duration<T> m_length;
    ItemVector m_items;
    std::mutex m_itemMutex;
};

//IMPL

template<class T>
Track<T>::Track() : m_length(std::chrono::duration<T>()) {
}

template<class T>
Track<T>::Track(const std::chrono::duration<T>& length) : m_length(length) {
}

template<class T>
const std::chrono::duration<T> &Track<T>::getLength() {
    return m_length;
}

template<class T>
void Track<T>::put(const sequenceable &item) {
    std::lock_guard<std::mutex> lockGuard(m_itemMutex);
    m_items.push_back(std::make_tuple(T::now(), item));
}

template<class T>
const std::vector<std::tuple<std::chrono::time_point<T>, sequenceable>>
        &Track<T>::getItems() const {
    std::lock_guard<std::mutex> lockGuard(m_itemMutex);
    return m_items;
}


