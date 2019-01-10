/*
 * AirController.cpp
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>
#include <fstream>

namespace atcsim{

AirController::AirController() {
	// TODO Auto-generated constructor stub

}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
  std::list<Flight*> flights = Airport::getInstance()->getFlights();
  std::list<Flight*>::iterator it;

  Position pos_circuito_0(5000.0, -18000, 2000.0);
  Position pos_circuito_1(15000.0, -18000, 2000.0);
  Position pos_circuito_2(15000.0, -12000, 2000.0);
  Position pos_circuito_3(5000.0, -12000, 2000.0);
  Position pos2_circuito_0(5000.0, -18000, 1000.0);
  Position pos2_circuito_1(15000.0, -18000, 1000.0);
  Position pos2_circuito_2(15000.0, -12000, 1000.0);
  Position pos2_circuito_3(5000.0, -12000, 1000.0);

  Position pos_circuito1_0(5000.0, 18000, 2000.0);
  Position pos_circuito1_1(15000.0, 18000, 2000.0);
  Position pos_circuito1_2(15000.0, 12000, 2000.0);
  Position pos_circuito1_3(5000.0, 12000, 2000.0);
  Position pos2_circuito1_0(5000.0, 18000, 1000.0);
  Position pos2_circuito1_1(15000.0, 18000, 1000.0);
  Position pos2_circuito1_2(15000.0, 12000, 1000.0);
  Position pos2_circuito1_3(5000.0, 12000, 1000.0);

  Position pos_circuito0_0(4000.0, -18000, 2000.0);
  Position pos_circuito0_1(-4000.0, -18000, 2000.0);
  Position pos_circuito0_2(-4000.0, -12000, 2000.0);
  Position pos_circuito0_3(4000.0, -12000, 2000.0);
  Position pos2_circuito0_0(4000.0, -18000, 1000.0);
  Position pos2_circuito0_1(-4000.0, -18000, 1000.0);
  Position pos2_circuito0_2(-4000.0, -12000, 1000.0);
  Position pos2_circuito0_3(4000.0, -12000, 1000.0);

  Position pos_circuito10_0(4000.0, 18000, 2000.0);
  Position pos_circuito10_1(-4000.0, 18000, 2000.0);
  Position pos_circuito10_2(-4000.0, 12000, 2000.0);
  Position pos_circuito10_3(4000.0, 12000, 2000.0);
  Position pos2_circuito10_0(4000.0, 18000, 1000.0);
  Position pos2_circuito10_1(-4000.0, 18000, 1000.0);
  Position pos2_circuito10_2(-4000.0, 12000, 1000.0);
  Position pos2_circuito10_3(4000.0, 12000, 1000.0);

  Position pos_circuito2_0(5000.0, -8000, 2000.0);
  Position pos_circuito2_1(15000.0, -8000, 2000.0);
  Position pos_circuito2_2(15000.0, -2000, 2000.0);
  Position pos_circuito2_3(5000.0, -2000, 2000.0);
  Position pos2_circuito2_0(5000.0, -8000, 1000.0);
  Position pos2_circuito2_1(15000.0, -8000, 1000.0);
  Position pos2_circuito2_2(15000.0, -2000, 1000.0);
  Position pos2_circuito2_3(5000.0, -2000, 1000.0);

  Position pos_circuito3_0(5000.0, 8000, 2000.0);
  Position pos_circuito3_1(15000.0, 8000, 2000.0);
  Position pos_circuito3_2(15000.0, 2000, 2000.0);
  Position pos_circuito3_3(5000.0, 2000, 2000.0);
  Position pos2_circuito3_0(5000.0, 8000, 1000.0);
  Position pos2_circuito3_1(15000.0, 8000, 1000.0);
  Position pos2_circuito3_2(15000.0, 2000, 1000.0);
  Position pos2_circuito3_3(5000.0, 2000, 1000.0);

  Position pos_aterrizaje_0(3500.0, 0.0, 100.0);
  Position pos_aterrizaje_1(1500.0, 0.0, 50.0);
  Position pos_aterrizaje_2(200.0, 0.0, 25.0);
  Position pos_aterrizaje_3(-750.0, 0.0, 25.0);

  Position pos_aprox_0(6000.0, -10000.0, 1000.0);
  Position pos_aprox_1(5000.0, -6500.0, 500.0);
  Position pos_aprox_2(4000.0, -4000.0, 25.0);

  Position pos_aprox_10(6000.0, -2000.0, 1000.0);
  Position pos_aprox_11(5000.0, -1200.0, 500.0);
  Position pos_aprox_12(4000.0, -500.0, 25.0);

  Position pos_aprox_20(6000.0, 2000.0, 1000.0);
  Position pos_aprox_21(5000.0, 1200.0, 500.0);
  Position pos_aprox_22(4000.0, 500.0, 25.0);

  Position pos_aprox_30(6000.0, 10000.0, 1000.0);
  Position pos_aprox_31(5000.0, 6500.0, 500.0);
  Position pos_aprox_32(4000.0, 4000.0, 25.0);

  Route ra0, ra1, ra2, ra3;
  Route rc0, rc1, rc2, rc3;
  Route rc0A, rc1A, rc2A, rc3A;
  Route rc10, rc11, rc12, rc13;
  Route rc100, rc110, rc120, rc130;
  Route rc20, rc21, rc22, rc23;
  Route rc30, rc31, rc32, rc33;
  Route rcc0, rcc1, rcc2, rcc3;
  Route rcc0A, rcc1A, rcc2A, rcc3A;
  Route rcc10, rcc11, rcc12, rcc13;
  Route rcc100, rcc110, rcc120, rcc130;
  Route rcc20, rcc21, rcc22, rcc23;
  Route rcc30, rcc31, rcc32, rcc33;
  Route ap0, ap1, ap2;
  Route ap10, ap11, ap12;
  Route ap20, ap21, ap22;
  Route ap30, ap31, ap32;



  ra0.pos = pos_aterrizaje_0;
  ra0.speed = 150.0;
  ra1.pos = pos_aterrizaje_1;
  ra1.speed = 100.0;
  ra2.pos = pos_aterrizaje_2;
  ra2.speed = 70.0;
  ra3.pos = pos_aterrizaje_3;
  ra3.speed = 10.0;

  rc0.pos = pos_circuito_0;
  rc0.speed = 500.0;
  rc1.pos = pos_circuito_1;
  rc1.speed = 500.0;
  rc2.pos = pos_circuito_2;
  rc2.speed = 500.0;
  rc3.pos = pos_circuito_3;
  rc3.speed = 500.0;

  rc0A.pos = pos_circuito0_0;
  rc0A.speed = 500.0;
  rc1A.pos = pos_circuito0_1;
  rc1A.speed = 500.0;
  rc2A.pos = pos_circuito0_2;
  rc2A.speed = 500.0;
  rc3A.pos = pos_circuito0_3;
  rc3A.speed = 500.0;

  rc10.pos = pos_circuito1_0;
  rc10.speed = 500.0;
  rc11.pos = pos_circuito1_1;
  rc11.speed = 500.0;
  rc12.pos = pos_circuito1_2;
  rc12.speed = 500.0;
  rc13.pos = pos_circuito1_3;
  rc13.speed = 500.0;

  rc100.pos = pos_circuito10_0;
  rc100.speed = 500.0;
  rc110.pos = pos_circuito10_1;
  rc110.speed = 500.0;
  rc120.pos = pos_circuito10_2;
  rc120.speed = 500.0;
  rc130.pos = pos_circuito10_3;
  rc130.speed = 500.0;

  rc20.pos = pos_circuito2_0;
  rc20.speed = 500.0;
  rc21.pos = pos_circuito2_1;
  rc21.speed = 500.0;
  rc22.pos = pos_circuito2_2;
  rc22.speed = 500.0;
  rc23.pos = pos_circuito2_3;
  rc23.speed = 500.0;

  rc30.pos = pos_circuito3_0;
  rc30.speed = 500.0;
  rc31.pos = pos_circuito3_1;
  rc31.speed = 500.0;
  rc32.pos = pos_circuito3_2;
  rc32.speed = 500.0;
  rc33.pos = pos_circuito3_3;
  rc33.speed = 500.0;

  rcc0.pos = pos2_circuito_0;
  rcc0.speed = 500.0;
  rcc1.pos = pos2_circuito_1;
  rcc1.speed = 500.0;
  rcc2.pos = pos2_circuito_2;
  rcc2.speed = 500.0;
  rcc3.pos = pos2_circuito_3;
  rcc3.speed = 500.0;

  rcc0A.pos = pos2_circuito0_0;
  rcc0A.speed = 500.0;
  rcc1A.pos = pos2_circuito0_1;
  rcc1A.speed = 500.0;
  rcc2A.pos = pos2_circuito0_2;
  rcc2A.speed = 500.0;
  rcc3A.pos = pos2_circuito0_3;
  rcc3A.speed = 500.0;

  rcc10.pos = pos2_circuito1_0;
  rcc10.speed = 500.0;
  rcc11.pos = pos2_circuito1_1;
  rcc11.speed = 500.0;
  rcc12.pos = pos2_circuito1_2;
  rcc12.speed = 500.0;
  rcc13.pos = pos2_circuito1_3;
  rcc13.speed = 500.0;

  rcc100.pos = pos2_circuito10_0;
  rcc100.speed = 500.0;
  rcc110.pos = pos2_circuito10_1;
  rcc110.speed = 500.0;
  rcc120.pos = pos2_circuito10_2;
  rcc120.speed = 500.0;
  rcc130.pos = pos2_circuito10_3;
  rcc130.speed = 500.0;

  rcc20.pos = pos2_circuito2_0;
  rcc20.speed = 500.0;
  rcc21.pos = pos2_circuito2_1;
  rcc21.speed = 500.0;
  rcc22.pos = pos2_circuito2_2;
  rcc22.speed = 500.0;
  rcc23.pos = pos2_circuito2_3;
  rcc23.speed = 500.0;

  rcc30.pos = pos2_circuito3_0;
  rcc30.speed = 500.0;
  rcc31.pos = pos2_circuito3_1;
  rcc31.speed = 500.0;
  rcc32.pos = pos2_circuito3_2;
  rcc32.speed = 500.0;
  rcc33.pos = pos2_circuito3_3;
  rcc33.speed = 500.0;

  ap0.pos = pos_aprox_0;
  ap0.speed = 400.0;
  ap1.pos = pos_aprox_1;
  ap1.speed = 300.0;
  ap2.pos = pos_aprox_2;
  ap2.speed = 200.0;

  ap10.pos = pos_aprox_10;
  ap10.speed = 400.0;
  ap11.pos = pos_aprox_11;
  ap11.speed = 300.0;
  ap12.pos = pos_aprox_12;
  ap12.speed = 200.0;

  ap20.pos = pos_aprox_20;
  ap20.speed = 400.0;
  ap21.pos = pos_aprox_21;
  ap21.speed = 300.0;
  ap22.pos = pos_aprox_22;
  ap22.speed = 200.0;

  ap30.pos = pos_aprox_30;
  ap30.speed = 400.0;
  ap31.pos = pos_aprox_31;
  ap31.speed = 300.0;
  ap32.pos = pos_aprox_32;
  ap32.speed = 200.0;

  for(it = flights.begin(); it!=flights.end(); ++it)
  {
   if((*it)->getRoute()->empty())
   {
    if (Airport::getInstance()->is_booked_landing()) {

      if ((*it)->getPosition().get_y() > 10000 && (*it)->getPosition().get_x() > 5000)
      {
        (*it)->getRoute()->push_back(rc10);
        (*it)->getRoute()->push_back(rc11);
        (*it)->getRoute()->push_back(rc12);
        (*it)->getRoute()->push_back(rc13);
        (*it)->getRoute()->push_back(rcc10);
        (*it)->getRoute()->push_back(rcc11);
        (*it)->getRoute()->push_back(rcc12);
        (*it)->getRoute()->push_back(rcc13);

      } else if ((*it)->getPosition().get_y() > 10000 && (*it)->getPosition().get_x() < 5000)
      {
        (*it)->getRoute()->push_back(rc100);
        (*it)->getRoute()->push_back(rc110);
        (*it)->getRoute()->push_back(rc120);
        (*it)->getRoute()->push_back(rc130);
        (*it)->getRoute()->push_back(rcc100);
        (*it)->getRoute()->push_back(rcc110);
        (*it)->getRoute()->push_back(rcc120);
        (*it)->getRoute()->push_back(rcc130);

      }else if ((*it)->getPosition().get_y() > 0 && (*it)->getPosition().get_y() < 10000){

        (*it)->getRoute()->push_back(rc30);
        (*it)->getRoute()->push_back(rc31);
        (*it)->getRoute()->push_back(rc32);
        (*it)->getRoute()->push_back(rc33);
        (*it)->getRoute()->push_back(rcc30);
        (*it)->getRoute()->push_back(rcc31);
        (*it)->getRoute()->push_back(rcc32);
        (*it)->getRoute()->push_back(rcc33);

      }else if ((*it)->getPosition().get_y() < 0 && (*it)->getPosition().get_y() > -10000){

        (*it)->getRoute()->push_back(rc20);
        (*it)->getRoute()->push_back(rc21);
        (*it)->getRoute()->push_back(rc22);
        (*it)->getRoute()->push_back(rc23);
        (*it)->getRoute()->push_back(rcc20);
        (*it)->getRoute()->push_back(rcc21);
        (*it)->getRoute()->push_back(rcc22);
        (*it)->getRoute()->push_back(rcc23);

      } else if ((*it)->getPosition().get_y() < -10000 && (*it)->getPosition().get_x() > 5000){

        (*it)->getRoute()->push_back(rc0);
        (*it)->getRoute()->push_back(rc1);
        (*it)->getRoute()->push_back(rc2);
        (*it)->getRoute()->push_back(rc3);
        (*it)->getRoute()->push_back(rcc0);
        (*it)->getRoute()->push_back(rcc1);
        (*it)->getRoute()->push_back(rcc2);
        (*it)->getRoute()->push_back(rcc3);

      }else if ((*it)->getPosition().get_y() < -10000 && (*it)->getPosition().get_x() < 5000){

        (*it)->getRoute()->push_back(rc0A);
        (*it)->getRoute()->push_back(rc1A);
        (*it)->getRoute()->push_back(rc2A);
        (*it)->getRoute()->push_back(rc3A);
        (*it)->getRoute()->push_back(rcc0A);
        (*it)->getRoute()->push_back(rcc1A);
        (*it)->getRoute()->push_back(rcc2A);
        (*it)->getRoute()->push_back(rcc3A);

      }

    }else{
       Flight* primero = *(flights.begin());
       primero -> getRoute()->clear();     //limpia la ruta de vuelo


     Airport::getInstance()->book_landing();

/*     if((*it)->getPosition().get_y() < -10000){

       (*it)->getRoute()->push_back(ap0);
       (*it)->getRoute()->push_back(ap1);
       (*it)->getRoute()->push_back(ap2);

     }else if ((*it)->getPosition().get_y() < -50 && (*it)->getPosition().get_y() > -10000){

       (*it)->getRoute()->push_back(ap10);
       (*it)->getRoute()->push_back(ap11);
       (*it)->getRoute()->push_back(ap12);

     }else if ((*it)->getPosition().get_y() > 50 && (*it)->getPosition().get_y() < 10000){

       (*it)->getRoute()->push_back(ap20);
       (*it)->getRoute()->push_back(ap21);
       (*it)->getRoute()->push_back(ap22);

     } else {

       (*it)->getRoute()->push_back(ap30);
       (*it)->getRoute()->push_back(ap31);
       (*it)->getRoute()->push_back(ap32);
     }
*/
     (*it)->getRoute()->push_back(ra0);
     (*it)->getRoute()->push_back(ra1);
     (*it)->getRoute()->push_back(ra2);
     (*it)->getRoute()->push_back(ra3);

    }
   }
  }

  }

 }// namespace atcsim
