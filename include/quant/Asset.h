//
// Created by Anson Nazeba on 27/05/2026.
//

#ifndef C_PRACTICE_ASSET_H
#define C_PRACTICE_ASSET_H

#include <string>
#include "AssetType.h"

namespace quant {
    class Asset {
    private:
        std::string name;
        AssetType type;

    public:
        Asset(const std::string& name, AssetType type);
        virtual ~Asset() = default;

        // getters
        const std::string& getName() const;
        AssetType getType() const;

        // virtual methods
        virtual double getValue() const = 0;
        virtual std::string getSummary() const = 0;
    };
}


#endif //C_PRACTICE_ASSET_H
