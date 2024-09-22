#include <Geode/Geode.hpp>

using namespace geode::prelude;

class Settings{
    public:
        static bool getModEnabled();

        static float getOverallIconScale();
        static float getIconScale(IconType icon);
        static bool getIconExtraEnabled(IconType icon);
        static float getIconScaleX(IconType icon);
        static float getIconScaleY(IconType icon);
    private:
        static std::string IconTypeToNameString(IconType icon);
};