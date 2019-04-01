/*============================================================================*/
/*                              ViSTA VR toolkit                              */
/*               Copyright (c) 1997-2016 RWTH Aachen University               */
/*============================================================================*/
/*                                  License                                   */
/*                                                                            */
/*  This program is free software: you can redistribute it and/or modify      */
/*  it under the terms of the GNU Lesser General Public License as published  */
/*  by the Free Software Foundation, either version 3 of the License, or      */
/*  (at your option) any later version.                                       */
/*                                                                            */
/*  This program is distributed in the hope that it will be useful,           */
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of            */
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             */
/*  GNU Lesser General Public License for more details.                       */
/*                                                                            */
/*  You should have received a copy of the GNU Lesser General Public License  */
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.     */
/*============================================================================*/
/*                                Contributors                                */
/*                                                                            */
/*============================================================================*/


#ifndef _VISTAOPENSGHALOSHADER_H_
#define _VISTAOPENSGHALOSHADER_H_

/*============================================================================*/
/* INCLUDES                                                                   */
/*============================================================================*/

#include "VistaKernelOpenSGExtConfig.h"

#include <string>
#include "VistaOpenSGPerMaterialShader.h"

/*============================================================================*/
/* MACROS AND DEFINES                                                         */
/*============================================================================*/

/*============================================================================*/
/* FORWARD DECLARATIONS                                                       */
/*============================================================================*/

class VistaGeometry;
class IVistaNode;
class VistaOpenSGPerMaterialShader;

/*============================================================================*/
/* CLASS DEFINITIONS                                                          */
/*============================================================================*/

class VISTAKERNELOPENSGEXTAPI VistaOpenSGHaloShader : public VistaOpenSGPerMaterialShader
{
public:
	VistaOpenSGHaloShader();
	VistaOpenSGHaloShader( const std::string& sVertexShaderFile,
							const std::string& sFragmentShaderFile );
	~VistaOpenSGHaloShader();

	virtual bool ApplyToOSGMaterial( osg::ChunkMaterialPtr& pGeometry );
	virtual bool ApplyToOSGMaterial( osg::ChunkMaterialPtr& pMaterial,
				const std::vector<CShaderUniformParam>& vecUniformParams );

private:
	static const std::string s_sVertexShader;
	static const std::string s_sFragmentShader;
};

/*============================================================================*/
/* LOCAL VARS AND FUNCS                                                       */
/*============================================================================*/

#endif //_VISTAOPENSGHALOSHADER_H_
