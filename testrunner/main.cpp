#include "/Users/dulanja/Documents/AlgoC++/tasks/CTwoTeamsComposing.cpp"

#include <bits/stdc++.h>

namespace jhelper {

struct Test {
	string input;
	string output;
	bool active;
	bool has_output;
};

bool check(string expected, string actual) {
	while(!expected.empty() && isspace(*--expected.end()))
		expected.erase(--expected.end());
	while(!actual.empty() && isspace(*--actual.end()))
		actual.erase(--actual.end());
	return expected == actual;
}

} // namespace jhelper

int main() {
	vector<jhelper::Test> tests = {
		{"4\n7\n4 2 4 1 4 3 4\n5\n2 1 5 4 3\n1\n1\n4\n1 1 1 3\n", "3\n1\n0\n2\n", true, true},
	};
	bool allOK = true;
	int testID = 0;
	cout << fixed;
	double maxTime = 0.0;
	for(const jhelper::Test& test: tests ) {
		cout << "Test #" << ++testID << endl;
		cout << "Input: \n" << test.input << endl;
		if (test.has_output) {
			cout << "Expected output: \n" << test.output << endl;
		}
		else {
			cout << "Expected output: \n" << "N/A" << endl;
		}
		if (test.active) {
			stringstream in(test.input);
			ostringstream out;
			clock_t start = clock();
			CTwoTeamsComposing solver;
			solver.solve(in, out);
			clock_t finish = clock();
			double currentTime = double(finish - start) / CLOCKS_PER_SEC;
			maxTime = max(currentTime, maxTime);
			cout << "Actual output: \n" << out.str() << endl;
			if (test.has_output) {
				bool result = jhelper::check(test.output, out.str());
				allOK = allOK && result;
				cout << "Result: " << (result ? "OK" : "Wrong answer") << endl;
			}
			cout << "Time: " << currentTime << endl;
		}
		else {
			cout << "SKIPPED\n";
		}

		cout << endl;

	}
	if(allOK) {
		cout << "All OK" << endl;
	}
	else {
		cout << "Some cases failed" << endl;
	}
	cout << "Maximal time: " << maxTime << "s." << endl;
	return 0;
}
