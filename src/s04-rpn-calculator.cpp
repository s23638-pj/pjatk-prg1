#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
<<<<<<< HEAD
#include <stdexcept>
#include <stack>
#include <cmath>

auto pop_top(std::stack<double>& stack) -> double
{
	if (stack.empty()){
		throw std::logic_error{"empty stack"};
	}
	auto element = std::move(stack.top());
	stack.pop();
	return element;
}


auto evaluate_addition(std::stack<double>& stack) -> void
{
	if (stack.size() < 2) {
		throw std::logic_error{"not enought operands for +"};
	}
	auto const b = pop_top(stack);
	auto const a = pop_top(stack);
	stack.push(a + b);
}

auto evaluate_subtraction(std::stack<double>& stack) -> void
{
	if (stack.size() < 2) {
		throw std::logic_error{"not enought operands for -"};
	}
	auto const b = pop_top(stack);
	auto const a = pop_top(stack);
	stack.push(a - b);
}


auto evaluate_multi(std::stack<double>& stack) -> void
{
        if (stack.size() < 2) {
                throw std::logic_error{"not enought operands for *"};
        }
        auto const b = pop_top(stack);
        auto const a = pop_top(stack);
        stack.push(a * b);
}


auto evaluate_division(std::stack<double>& stack) -> void
{
        if (stack.size() < 2) {
                throw std::logic_error{"not enought operands for /"};
        }
        auto const b = pop_top(stack);
        auto const a = pop_top(stack);
	if (b == 0) {
		std::cout << "Don't dividide by zero \n";
	} else {
        	stack.push(a / b);
	}
}


auto evaluate_division_simple(std::stack<double>& stack) -> void
{
        if (stack.size() < 2) {
                throw std::logic_error{"not enought operands for /""/"};
        }
        auto const b = pop_top(stack);
        auto const a = pop_top(stack);
	if (b == 0) {
  		std::cout << "Don't dividide by zero \n";
        } else {
        stack.push((int)a / (int)b);
	}
}


auto evaluate_modulo(std::stack<double>& stack) -> void
{
        if (stack.size() < 2) {
                throw std::logic_error{"not enought operands for %"};
        }
        auto const b = pop_top(stack);
        auto const a = pop_top(stack);
        if (b == 0) {
                std::cout << "Don't dividide by zero \n";
        } else {
        stack.push((int)a % (int)b);
        }
}


auto evaluate_expo(std::stack<double>& stack) -> void
{
        if (stack.size() < 2) {
                throw std::logic_error{"not enought operands for **"};
        }
        auto const b = pop_top(stack);
        auto const a = pop_top(stack);
        stack.push(pow(a, b));
}


auto evaluate_sqrt(std::stack<double>& stack) -> void
{
        if (stack.size() < 1) {
                throw std::logic_error{"not enought operands for sqrt"};
        }
        auto const a = pop_top(stack);
	stack.push(sqrt(a));
}


auto evaluate_pi(std::stack<double>& stack) -> void
{
        if (stack.size() < 1) {
                throw std::logic_error{"not enought operands for pi"};
        }
        auto const a = pop_top(stack);
        stack.push(a * M_PI);
}







auto make_args(int argc, char* argv[]) -> std::vector<std::string>
{
	auto args = std::vector<std::string>{};
	std::copy_n(argv, argc, std::back_inserter(args));
	return args;
}

auto main(int argc, char* argv[]) -> int
{
	auto const args = make_args(argc - 1, argv + 1);

	auto stack = std::stack<double>{};
	for (auto const each : args) {
		try {
			if (each == "p") {
				std::cout << pop_top(stack) << "\n";
			} else if (each == "+") {
				evaluate_addition(stack);
			} else if (each == "-") {
				evaluate_subtraction(stack);
			} else if (each == "*") {
				evaluate_multi(stack);
			} else if (each == "/") {
				evaluate_division(stack);
			} else if (each == "/""/") {
				evaluate_division_simple(stack);
			} else if (each == "%") {
                                evaluate_modulo(stack);
			} else if (each == "**") {
                                evaluate_expo(stack);
			} else if (each == "sqrt") {
                                evaluate_sqrt(stack);
			} else if (each == "pi") {
                                evaluate_pi(stack);

			} else {
				stack.push(std::stod(each));
			}
		} catch (std::logic_error const& e) {
			std::cerr << "error: " << each << ": " << e.what() << "\n";
		}
	}
=======

auto main(int argc, char* argv[]) -> int
{
        auto args = std::vector<std::string>{};
	std::copy_n(argv, argc, std::back_inserter(args));
	//auto w = 0;

	for (auto const& each : args) {
		std::cout << each << "\n";
		//w += args;
		std::cout << w << "\nn";
	}

>>>>>>> a458242eaddd01f92ac980d390d1171d108d0940
	return 0;
}
