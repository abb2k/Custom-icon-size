#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include "geode/modify/PlayerObject.hpp"
class $modify(BISPlayerObject, PlayerObject){
    bool init(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);

    void myUpdate(float d);
};