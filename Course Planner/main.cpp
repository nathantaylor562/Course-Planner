#include <iostream>
#include "Menu.h"

#include "CourseModule.h"//DEBUGGING
#include <string>
#include "CourseInputChecker.h"
#include "CourseGraph.h"

namespace easy {
	static void pause() {
		std::cout << "Press enter to continue...";
		std::cin.get();
	}
}

using std::cout;
using std::endl;

int main() {

	CourseGraph test;
	test.insert(CourseModule("CECS", 100));
	test.insert(CourseModule("CECS", 200));
	test.insert(CourseModule("CECS", 102));
	test.insert(CourseModule("CECS", 101));
	test.insert(CourseModule("CECS", 150));
	test.addEdge(CourseModule("CECS", 228), CourseModule("CECS", 229));
	test.addEdge(CourseModule("CECS", 101), CourseModule("CECS", 102));

	test.printCourses();

	easy::pause();
	return 0;

	CourseGraph graph;
	graph.insert(CourseModule("CECS", 100));
	graph.insert(CourseModule("CECS", 200));
	graph.insert(CourseModule("CECS", 101));
	graph.insert(CourseModule("CECS", 100));

	graph.printCourses();

	easy::pause();
	return 0;

	Menu menu;
	menu.runMenu();

	return 0;
}