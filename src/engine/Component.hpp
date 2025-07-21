
// Base class for all components in the engine
class Component {
    public:
        virtual ~Component() = default; // Virtual destructor for proper cleanup
        virtual void update() = 0; // Pure virtual function to be implemented by derived classes
        virtual std::string getType() const = 0;
};

class TransformComponent : public Component {
    public:
        float x = 0.0f, y = 0.0f;
        std::string getType() const override {
            return "Transform";
        }
};

class VelocityComponent : public Component {
    public:
        float dx = 0.0f, dy = 0.0f;
        std::string getType() const override {
            return "Velocity";
        }
};