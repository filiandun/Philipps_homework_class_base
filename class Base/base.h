#pragma once
#include <iostream>


template<typename T>
class Base
{
public:
	Base() = default;

	Base(const Base& base)
	{
		this->value_1 = base.value_1;
		this->value_2 = base.value_2;
	}

	Base(T value_1, T value_2)
	{
		this->value_1 = value_1;
		this->value_2 = value_2;
	}


	~Base() = default;

protected:
	T value_1;
	T value_2;

public:
	void display_base() const
	{
		std::cout << "Значение 1: " << this->value_1 << std::endl
			<< "Значение 2: " << this->value_2 << std::endl << std::endl;
	}
};




template<typename T>
class Sqrt : public Base<T>
{
public:
	Sqrt() = delete;

	Sqrt(const Sqrt& sqrt)
	{
		this->value_1 = sqrt.value_1;
		this->value_2 = sqrt.value_2;

		this->sqrt_value_1 = sqrt.sqrt_value_1;
		this->sqrt_value_2 = sqrt.sqrt_value_2;
	}

	Sqrt(T value_1, T value_2)
	{
		this->value_1 = value_1;
		this->value_2 = value_2;

		this->sqrt_value_1 = (T) sqrt(this->value_1);
		this->sqrt_value_2 = (T) sqrt(this->value_2);
	}

	~Sqrt() = default;

private:
	T sqrt_value_1;
	T sqrt_value_2;

public:
	void display_sqrt() const
	{
		std::cout << "Значение 1 в корне: " << this->sqrt_value_1 << std::endl
			<< "Значение 2 в корне: " << this->sqrt_value_2 << std::endl << std::endl;
	}
};




template<typename T>
class Pow : public Base<T>
{
public:
	Pow() = delete;

	Pow(const Pow& pow)
	{
		this->value_1 = pow.value_1;
		this->value_2 = pow.value_2;

		this->pow_value_1 = pow.pow_value_1;
		this->pow_value_2 = pow.pow_value_2;
	}

	Pow(T value_1, T value_2)
	{
		this->value_1 = value_1;
		this->value_2 = value_2;

		this->pow_value_1 = (T) pow(this->value_1, 2);
		this->pow_value_2 = (T) pow(this->value_2, 2);
	}

	~Pow() = default;

private:
	T pow_value_1;
	T pow_value_2;

public:
	void display_pow() const
	{
		std::cout << "Значение 1 в квадрате: " << this->pow_value_1 << std::endl
			<< "Значение 2 в квадрате: " << this->pow_value_2 << std::endl << std::endl;
	}
};
