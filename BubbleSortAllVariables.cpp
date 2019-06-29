//SortAllVariables.cpp by: sekif
#include <iostream>
#include <vector>
#include <list>

template <typename T>
bool m_verification(T, T);

template <typename T>
void swap(T&, T&);

template <typename T>
void bubbleSort(T&);

int main() {
	int size, option;
	std::cout << "Container size: ";
	std::cin >> size;

	std::cout << "Variable types : \n";
	std::cout << "\n\t(1)Int";
	std::cout << "\n\t(2)Double";
	std::cout << "\n\t(3)Char";
	std::cout << "\n\tWhat do you want? ";
	std::cin >> option;

	std::cout << "\n";

	switch (option) {
	case 1:
	{
		int var;
		std::vector<int>v(size);
		std::list<int>l;

		std::cout << "Container elements (vector): ";
		for (int i = 0; i < size; i++) {
			std::cin >> v[i];
		}

		std::cout << "Container elements (list): ";
		for (int i = 0; i < size; i++) {
			std::cin >> var;
			l.push_back(var);
		}

		bubbleSort(v);
		bubbleSort(l);

		std::cout << "\nResults: \n\n";

		for (auto x : v) {
			std::cout << x << " ";
		}
		std::cout << "\n";
		for (auto x : l) {
			std::cout << x << " ";
		}
		std::cout << "\n";

		break;
	}
	case 2:
	{
		double var;
		std::vector<double>v(size);
		std::list<double>l;

		std::cout << "Container elements (vector): ";
		for (int i = 0; i < size; i++) {
			std::cin >> v[i];
		}

		std::cout << "Container elements (list): ";
		for (int i = 0; i < size; i++) {
			std::cin >> var;
			l.push_back(var);
		}

		bubbleSort(v);
		bubbleSort(l);

		std::cout << "\nResults: \n\n";

		for (auto x : v) {
			std::cout << x << " ";
		}
		std::cout << "\n";
		for (auto x : l) {
			std::cout << x << " ";
		}
		std::cout << "\n";

		break;
	}
	case 3:
	{
		char var;
		std::vector<char>v(size);
		std::list<char>l;

		std::cout << "Container elements (vector): ";
		for (int i = 0; i < size; i++) {
			std::cin >> v[i];
		}

		std::cout << "Container elements (list): ";
		for (int i = 0; i < size; i++) {
			std::cin >> var;
			l.push_back(var);
		}

		bubbleSort(v);
		bubbleSort(l);

		std::cout << "\nResults: \n\n";

		for (auto x : v) {
			std::cout << x << " ";
		}
		std::cout << "\n";
		for (auto x : l) {
			std::cout << x << " ";
		}
		std::cout << "\n";

		break;
	}
	}

	return EXIT_SUCCESS;
}

template <typename T>
bool m_verification(T x, T y) {
	return x < y;
}

template <typename T>
void swap(T& var, T& var2) {
	T aux = var;
	var = var2;
	var2 = aux;
}

template <typename T>
void bubbleSort(T &container) {
	typename T::iterator i;
	typename T::iterator j;
	typename T:: iterator aux;

	for (i = container.begin(); i != container.end(); ++i) {
		aux = i;
		for (j = i; j != container.end(); ++j) {
			if (*j < *aux) {
				aux = j;
			}
			swap(*i, *aux);
		}
	}
}