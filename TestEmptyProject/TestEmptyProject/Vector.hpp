#pragma once

template<typename T>
class Vector {
public:
	Vector() : size(0), capacity(8), arr(new T[capacity]) {}
	~Vector() {
		delete[] this->arr;
	}

	std::size_t getSize() const {
		return this->size;
	}

	Vector& pushBack(const T& newObject) {
		if (this->size == this->capacity) {
			// resize()
		}
		this->arr[this->size] = newObject;
		this->size++;

		return *this;
	}
private:
	std::size_t size, capacity;
	T* arr;
};