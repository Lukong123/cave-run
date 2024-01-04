#include <String>

namespace CaveRun {
    class GemeObject {
        std::string name;
        std::string tag;
        bool enable; 

    public:
    void SetName(const std::string &name) {
        this->name = name; 
    }
    void SetTag(const std::string &tag) {
        this->tag = tag;
    }

    void SetEnabled(bool enable) {
        this->enable;
    }

    const std::string &GetTag() const {
        return tag;
    }
    
    bool IsEnable() {
        return enable;
    }

    virtual void OnMove(GameObject &other) {

    }
    }


}