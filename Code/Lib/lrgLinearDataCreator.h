/*=============================================================================

  PHAS0100ASSIGNMENT1: PHAS0100 Assignment 1 Linear Regression

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef lrgLinearDataCreator_h
#define lrgLinearDataCreator_h

#include "lrgDataCreatorI.h"
#include "lrgNormalDistributionNoise.h"

#include <memory>


namespace lrg {

  class LinearDataCreator : public DataCreatorI {
  public:
    LinearDataCreator(const double theta0, const double theta1, NormalDistributionNoise noise);
    ~LinearDataCreator();
    vector_of_pairs GetData();
  private:
    const double theta0_;
    const double theta1_;
    // LinearDataCreator HAS-A NoiseGenerator.
    std::unique_ptr<NormalDistributionNoise> noise_;  // Take ownership.
  };

} // end namespace

#endif
