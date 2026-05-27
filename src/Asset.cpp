//
// Created by Anson Nazeba on 27/05/2026.
//

#include "../include/quant/Asset.h"

quant::Asset::Asset(const std::string &name, AssetType type):
    name(name), type(type) {};

const std::string & quant::Asset::getName() const {
    return name;
}

quant::AssetType quant::Asset::getType() const {
    return type;
}
