#include "xml_minifier.h"
string xmlminifier(string& xml_content){
		string line;
		string oneLineFile = "";
			vector<string> elements = oneElementPerLine(xml_content);
			for(string element : elements){

			element.erase(remove(element.begin(), element.end(), '\t'),element.end());
			element.erase(remove(element.begin(), element.end(), '\f'),element.end());
			element.erase(remove(element.begin(), element.end(), '\n'),element.end());
			element.erase(remove(element.begin(), element.end(), '\v'),element.end());
			oneLineFile += element;
}
            return oneLineFile;
}





