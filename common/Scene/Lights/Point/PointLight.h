#pragma once

#include "common/Scene/Lights/Light.h"

class PointLight : public Light
{
public:
    virtual void ComputeSampleRays(std::vector<Ray>& output, glm::vec3 origin) const override;
    virtual float ComputeLightAttenuation(glm::vec3 origin) const override;
};