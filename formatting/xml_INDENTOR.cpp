#include "xml_INDENTOR.h"
string xmlindentor(string& xml_content){
		string edited_line;
		vector<string> lines;
		int indent = 0;
		vector<string> elements = oneElementPerLine(xml_content);
		for(string element:elements){

			if (element.substr(0, 2) == "</") {
            	--indent;
    		}
    		edited_line= string(indent*4,' ') + element;
    		if (element.substr(0, 1) == "<" && element.substr(1, 1) != "/" ) {
    			string str ="/";
    			size_t found = element.find(str);
    			if(found!= string::npos){
    				indent=indent;
				}
				else{
					++indent;
				}
        }
        	lines.push_back(edited_line);
		}
        string IndentingOutput = "";
        for(int i=0;i< (int) lines.size();i++){
            IndentingOutput += (lines[i]+"\n");
			}
        return IndentingOutput;
}




