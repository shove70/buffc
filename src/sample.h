//#ifndef _Included_BUFFC_MESSAGE_SAMPLE_H
//#define _Included_BUFFC_MESSAGE_SAMPLE_H
//
//#include <vector>
//#include "message.h"
//
//using namespace std;
//using namespace buffc;
//
//class Sample : Message {
//public:
//    string _className = "Sample";
//
//    int32   id;
//    string  name;
//    int32   age;
//
//    void setValue(vector<Any>& params) {
//        id      = params[0].cast<int32>();
//        name    = params[1].cast<string>();
//        age     = params[2].cast<int32>();
//    }
//
//    void serialize(vector<ubyte>& buffer, string method = "") {
//        Message::serialize(buffer, "Sample", method, id, name, age);
//    }
//};
//
//#endif
