/*
  This file is part of the FIRE -- Flexible Image Retrieval System

  FIRE is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  FIRE is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with FIRE; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
#ifndef __dist_lfhungarian_hpp__
#define __dist_lfhungarian_hpp__

#include "vectorfeature.hpp"
#include "diag.hpp"
#include "basedistance.hpp"
#include "localfeatures.hpp"
#include "hungarian.hpp"
#include <stdlib.h>
#include <iostream>

class LFHungarianDistance : public BaseDistance {
public:

  virtual double distance(const BaseFeature* queryFeature, const BaseFeature* databaseFeature);
  virtual ::std::string name() {return "lfhungarian";}

  virtual void start(const BaseFeature *);
  virtual void stop();

private:
  double eucdist(const ::std::vector<double> &a, const ::std::vector<double>& b) const;
};

#endif
