#include "filter.h"
#include <cstring>

std::set<std::string> processNameFilter;

void addProcessFilter(const char* name) {
	processNameFilter.insert(name);
}

// Currently `name` is the command line found in
// /proc/$PID/cmdline
//
bool acceptProcessName(const char* name) {
	// No filters, accept all
	if(processNameFilter.empty()) {
		return true;
	}

	// Check for a match in the command line
	//	
	// The current implementation only checks if the process command line
	// contains the filter string.
	std::set<std::string>::iterator it;
	for(it = processNameFilter.begin(); it != processNameFilter.end(); ++it) {
		if(std::strstr(name, (*it).c_str()) != NULL) {
			return true;
		}
	}

	return false;
}

