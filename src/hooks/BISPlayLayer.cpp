#include "../hooks/BISPlayLayer.hpp"
#include "../util/Settings.hpp"

bool BISPlayLayer::init(GJGameLevel* level, bool useReplay, bool dontCreateObjects){
    if (!PlayLayer::init(level, useReplay, dontCreateObjects)) return false;
    if (!Settings::getModEnabled()) return true;

    schedule(schedule_selector(BISPlayLayer::myUpdate));

    return true;
}

void BISPlayLayer::myUpdate(float d){

    if (m_player1 != nullptr){
        m_fields->isNegativeP1 = m_player1->m_mainLayer->getScaleY() < 0;
        m_fields->isFlippedP1 = m_player1->m_mainLayer->getScaleX() < 0;

        if (!Settings::getIconExtraEnabled(IconType::Special)){
            if (m_fields->isFlippedP1)
                m_player1->m_mainLayer->setScaleX(-Settings::getIconScale(IconType::Special));
            else
                m_player1->m_mainLayer->setScaleX(Settings::getIconScale(IconType::Special));

            if (m_fields->isNegativeP1)
                m_player1->m_mainLayer->setScaleY(-Settings::getIconScale(IconType::Special));
            else
                m_player1->m_mainLayer->setScaleY(Settings::getIconScale(IconType::Special));
        }
        else{
            m_player1->m_mainLayer->setScaleX(Settings::getIconScaleX(IconType::Special));
            if (m_fields->isNegativeP1)
                m_player1->m_mainLayer->setScaleY(-Settings::getIconScaleY(IconType::Special));
            else
                m_player1->m_mainLayer->setScaleY(Settings::getIconScaleY(IconType::Special));
        }
    }

    if (m_player2 != nullptr){
        m_fields->isNegativeP2 = m_player2->m_mainLayer->getScaleY() < 0;
        m_fields->isNegativeP2 = m_player2->m_mainLayer->getScaleX() < 0;

        if (!Settings::getIconExtraEnabled(IconType::Special)){
            if (m_fields->isFlippedP2)
                m_player2->m_mainLayer->setScaleX(-Settings::getIconScale(IconType::Special));
            else
                m_player2->m_mainLayer->setScaleX(Settings::getIconScale(IconType::Special));

            if (m_fields->isNegativeP2)
                m_player2->m_mainLayer->setScaleY(-Settings::getIconScale(IconType::Special));
            else
                m_player2->m_mainLayer->setScaleY(Settings::getIconScale(IconType::Special));
        }
        else{
            m_player2->m_mainLayer->setScaleX(Settings::getIconScaleX(IconType::Special));
            if (m_fields->isNegativeP2)
                m_player2->m_mainLayer->setScaleY(-Settings::getIconScaleY(IconType::Special));
            else
                m_player2->m_mainLayer->setScaleY(Settings::getIconScaleY(IconType::Special));
        }
    }
}