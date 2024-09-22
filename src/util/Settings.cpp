#include "../util/Settings.hpp"

bool Settings::getModEnabled(){
    return Mod::get()->getSettingValue<bool>("mod-enabled");
}

float Settings::getIconScale(IconType icon){
    return Mod::get()->getSettingValue<double>(fmt::format("{}-size-overall", IconTypeToNameString(icon)));
}

bool Settings::getIconExtraEnabled(IconType icon){
    return Mod::get()->getSettingValue<bool>(fmt::format("{}-size-extra-enabled", IconTypeToNameString(icon)));
}

float Settings::getIconScaleX(IconType icon){
    return Mod::get()->getSettingValue<double>(fmt::format("{}-size-x", IconTypeToNameString(icon)));
}

float Settings::getIconScaleY(IconType icon){
    return Mod::get()->getSettingValue<double>(fmt::format("{}-size-y", IconTypeToNameString(icon)));
}

std::string Settings::IconTypeToNameString(IconType icon){
    std::string iconNameString = "";

    switch (icon)
    {
        case IconType::Cube:
            iconNameString = "cube";
            break;

        case IconType::Ship:
            iconNameString = "ship";
            break;
        
        case IconType::Ball:
            iconNameString = "ball";
            break;

        case IconType::Ufo:
            iconNameString = "ufo";
            break;

        case IconType::Robot:
            iconNameString = "robot";
            break;

        case IconType::Spider:
            iconNameString = "spider";
            break;

        case IconType::Swing:
            iconNameString = "swing";
            break;

        case IconType::Jetpack:
            iconNameString = "jatpack";
            break;

        case IconType::Special:
            iconNameString = "icon";
            break;
        
        default:
            iconNameString = "icon";
            break;
    }

    return iconNameString;
}