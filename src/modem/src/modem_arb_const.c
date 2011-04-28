/*
 * Copyright (c) 2007, 2009 Joseph Gaeddert
 * Copyright (c) 2007, 2009 Virginia Polytechnic Institute & State University
 *
 * This file is part of liquid.
 *
 * liquid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * liquid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with liquid.  If not, see <http://www.gnu.org/licenses/>.
 */

//
// modem_arb_const.c
//
// Constant arbitrary linear modems
//

#include <stdlib.h>
#include "liquid.internal.h"

// V.29 star constellation
const float complex modem_arb_V29[16] = {
      0.06804100+  0.06804100*_Complex_I,   0.20412000+  0.00000000*_Complex_I, 
      0.00000000+  0.20412000*_Complex_I,  -0.06804100+  0.06804100*_Complex_I, 
      0.00000000+ -0.20412000*_Complex_I,   0.06804100+ -0.06804100*_Complex_I, 
     -0.06804100+ -0.06804100*_Complex_I,  -0.20412000+  0.00000000*_Complex_I, 
      0.20412000+  0.20412000*_Complex_I,   0.34021000+  0.00000000*_Complex_I, 
      0.00000000+  0.34021000*_Complex_I,  -0.20412000+  0.20412000*_Complex_I, 
      0.00000000+ -0.34021000*_Complex_I,   0.20412000+ -0.20412000*_Complex_I, 
     -0.20412000+ -0.20412000*_Complex_I,  -0.34021000+  0.00000000*_Complex_I
};

// Virginia Tech logo
const float complex modem_arb_vt64[64] = {
     -1.5633e+00+  5.5460e-01*_Complex_I,  -1.3833e+00+  5.5460e-01*_Complex_I, 
     -1.2034e+00+  5.5460e-01*_Complex_I,  -1.0234e+00+  5.5460e-01*_Complex_I, 
     -9.5146e-01+  4.2863e-01*_Complex_I,  -8.7948e-01+  3.0267e-01*_Complex_I, 
     -8.0750e-01+  1.7671e-01*_Complex_I,  -7.3553e-01+  5.0750e-02*_Complex_I, 
     -6.6355e-01+ -7.5211e-02*_Complex_I,  -6.0956e-01+  5.0750e-02*_Complex_I, 
     -5.5558e-01+  1.7671e-01*_Complex_I,  -5.0160e-01+  3.0267e-01*_Complex_I, 
     -4.4761e-01+  4.2863e-01*_Complex_I,  -3.9363e-01+  5.5460e-01*_Complex_I, 
     -2.1368e-01+  5.5460e-01*_Complex_I,  -3.3740e-02+  5.5460e-01*_Complex_I, 
      1.4621e-01+  5.5460e-01*_Complex_I,   3.2615e-01+  5.5460e-01*_Complex_I, 
      5.0610e-01+  5.5460e-01*_Complex_I,   6.8604e-01+  5.5460e-01*_Complex_I, 
      8.6599e-01+  5.5460e-01*_Complex_I,   1.0459e+00+  5.5460e-01*_Complex_I, 
      1.2259e+00+  5.5460e-01*_Complex_I,   1.4058e+00+  5.5460e-01*_Complex_I, 
      1.5858e+00+  5.5460e-01*_Complex_I,   1.7657e+00+  5.5460e-01*_Complex_I, 
      1.6757e+00+  4.0434e-01*_Complex_I,   1.5858e+00+  2.5499e-01*_Complex_I, 
      1.4958e+00+  1.0473e-01*_Complex_I,   1.3158e+00+  1.0473e-01*_Complex_I, 
      1.1359e+00+  1.0473e-01*_Complex_I,   9.5596e-01+  1.0473e-01*_Complex_I, 
      8.5069e-01+ -7.5211e-02*_Complex_I,   7.4632e-01+ -2.5516e-01*_Complex_I, 
      6.4105e-01+ -4.3510e-01*_Complex_I,   5.3579e-01+ -6.1505e-01*_Complex_I, 
      4.3142e-01+ -7.9499e-01*_Complex_I,   3.2615e-01+ -9.7494e-01*_Complex_I, 
      1.4621e-01+ -9.7494e-01*_Complex_I,  -3.3740e-02+ -9.7494e-01*_Complex_I, 
     -2.1368e-01+ -9.7494e-01*_Complex_I,  -1.0842e-01+ -7.9499e-01*_Complex_I, 
     -4.0488e-03+ -6.1505e-01*_Complex_I,   1.0122e-01+ -4.3510e-01*_Complex_I, 
      2.0649e-01+ -2.5516e-01*_Complex_I,   3.1086e-01+ -7.5211e-02*_Complex_I, 
      4.1612e-01+  1.0473e-01*_Complex_I,   2.8116e-01+  1.0473e-01*_Complex_I, 
      1.4621e-01+  1.0473e-01*_Complex_I,   1.1247e-02+  1.0473e-01*_Complex_I, 
     -1.2371e-01+  1.0473e-01*_Complex_I,  -2.1368e-01+ -7.5211e-02*_Complex_I, 
     -3.0366e-01+ -2.5516e-01*_Complex_I,  -3.9363e-01+ -4.3510e-01*_Complex_I, 
     -4.8360e-01+ -6.1505e-01*_Complex_I,  -5.7358e-01+ -7.9499e-01*_Complex_I, 
     -6.6355e-01+ -9.7494e-01*_Complex_I,  -7.7601e-01+ -7.8420e-01*_Complex_I, 
     -8.8848e-01+ -5.9255e-01*_Complex_I,  -1.0009e+00+ -4.0181e-01*_Complex_I, 
     -1.1134e+00+ -2.1017e-01*_Complex_I,  -1.2259e+00+ -1.8529e-02*_Complex_I, 
     -1.3383e+00+  1.7221e-01*_Complex_I,  -1.4508e+00+  3.6385e-01*_Complex_I
};

// optimal 16-QAM
const float complex modem_arb_opt16[16] = {
      7.0000e-03+  7.6700e-01*_Complex_I,   1.2600e-01+  1.0600e-01*_Complex_I, 
      6.4400e-01+  5.4500e-01*_Complex_I,   1.2790e+00+  3.0500e-01*_Complex_I, 
      9.0600e-01+ -7.7100e-01*_Complex_I,  -1.0320e+00+ -1.0300e-01*_Complex_I, 
     -5.0400e-01+  3.3200e-01*_Complex_I,  -6.1100e-01+  1.0200e+00*_Complex_I, 
      7.5800e-01+ -1.1900e-01*_Complex_I,  -9.1100e-01+ -7.7200e-01*_Complex_I, 
     -3.8800e-01+ -3.2900e-01*_Complex_I,   2.4500e-01+ -5.5200e-01*_Complex_I, 
     -2.7200e-01+ -1.0010e+00*_Complex_I,   3.7600e-01+ -1.2150e+00*_Complex_I, 
     -1.1360e+00+  5.7100e-01*_Complex_I,   5.1200e-01+  1.2110e+00*_Complex_I
};
