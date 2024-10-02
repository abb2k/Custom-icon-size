#include <Geode/Geode.hpp>

using namespace geode::prelude;


#include <Geode/modify/PlayLayer.hpp>
class $modify(BISPlayLayer, PlayLayer){
    struct Fields{
        bool isNegativeP1;
        bool isNegativeP2;

        bool isFlippedP1;
        bool isFlippedP2;
    };

    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects);

    void myUpdate(float d);
};