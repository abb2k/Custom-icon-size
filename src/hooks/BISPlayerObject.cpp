#include "../hooks/BISPlayerObject.hpp"
#include "../util/Settings.hpp"

bool BISPlayerObject::init(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4){
    if (!PlayerObject::init(p0, p1, p2, p3, p4)) return false;

    schedule(schedule_selector(BISPlayerObject::myUpdate));

    return true;
}

void BISPlayerObject::myUpdate(float d){
    if (!Settings::getIconExtraEnabled(IconType::Special)){
        this->m_mainLayer->setScale(Settings::getIconScale(IconType::Special));
    }
    else{
        this->m_mainLayer->setScaleX(Settings::getIconScaleX(IconType::Special));
        this->m_mainLayer->setScaleY(Settings::getIconScaleY(IconType::Special));
    }
}