#include <string>

namespace CaveRun {
    // Forward declaration of the GameObject class
    class GameObject;

    class GameObject {
        std::string name;
        std::string tag;
        bool enable;

    public:
        void SetName(const std::string& name) {
            this->name = name;
        }

        void SetTag(const std::string& tag) {
            this->tag = tag;
        }

        void SetEnabled(bool enable) {
            this->enable = enable;
        }

        const std::string& GetTag() const {
            return tag;
        }

        bool IsEnabled() const {
            return enable;
        }

        virtual void onMove(GameObject& other) {
            // Implementation of onMove() function
        }
    };
}