#pragma once

#include <Boolean/BooleanEngine.h>

class CarveEngine : public BooleanEngine {
    public:
        virtual ~CarveEngine();

    public:
        virtual void compute_union();
        virtual void compute_intersection();
        virtual void compute_difference();
        virtual void compute_symmetric_difference();
};