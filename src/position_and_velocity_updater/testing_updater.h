/**
* @file   testing_updater.h
* @author Alexander Raß (alexander.rass@fau.de)
* @date   August, 2015
* @brief  This file contains an experimental position and velocity updater.
*
* @copyright
* This project is released under the MIT License (MIT).
*
* @copyright
* The MIT License (MIT)
*
* @copyright
* Copyright (c) 2016 by Friedrich-Alexander-Universität Erlangen-Nürnberg and
* Alexander Raß
*
* @copyright
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* @copyright
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* @copyright
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
*/

#ifndef HIGH_PRECISION_PSO_POSITION_AND_VELOCITY_UPDATER_TESTING_UPDATER_H_
#define HIGH_PRECISION_PSO_POSITION_AND_VELOCITY_UPDATER_TESTING_UPDATER_H_

#include "position_and_velocity_updater/position_and_velocity_updater.h"

namespace highprecisionpso {

/**
* @brief The testing updater implements an experimental position and velocity update procedure.
*
* The explicit behavior will not be specified.
* It may change on software updates or even during a single particle swarm simulation.
*
* @warning Usage of this class is not recommended!
*
*/
class TestingUpdater : public PositionAndVelocityUpdater {
public:
	/**
	* @brief Processes a single movement of the specified particle.
	*
	* The explicit behavior will not be specified.
	* It may change on software updates or even during a single particle swarm simulation.
	*
	* @warning Usage of this class is not recommended!
	*
	* @param p The particle, which should be updated.
	*/
	void Update(Particle* p);
	std::string GetName();
};

} // namespace highprecisionpso

#endif /* HIGH_PRECISION_PSO_POSITION_AND_VELOCITY_UPDATER_TESTING_UPDATER_H_ */