/**
  @file src/components/components_symbian/audiomixer/src/BellagioOpenMaxAudioMixer.cpp
    
  Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies).

  This library is free software; you can redistribute it and/or modify it under
  the terms of the GNU Lesser General Public License as published by the Free
  Software Foundation; either version 2.1 of the License, or (at your option)
  any later version.

  This library is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
  details.

  You should have received a copy of the GNU Lesser General Public License
  along with this library; if not, write to the Free Software Foundation, Inc.,
  51 Franklin St, Fifth Floor, Boston, MA
  02110-1301  USA
*/

#include "BellagioOpenMaxAudioMixer.h"

// The actual implementation header
extern "C"
{
#include "omx_audiomixer_component.h"
}

CBellagioOpenMaxAudioMixer* CBellagioOpenMaxAudioMixer::NewL(TAny* aInitParams)
{
    CBellagioOpenMaxAudioMixer *self = new(ELeave) CBellagioOpenMaxAudioMixer;

    self->component = new OMX_COMPONENTTYPE;

    if (!self->component) 
    {
        delete self;
        self = 0;
        User::Leave(KErrNoMemory);
    }

	self->component->pComponentPrivate = 0;

    if (omx_audio_mixer_component_Constructor(self->component, (OMX_STRING) aInitParams) != OMX_ErrorNone)
    {
        delete self;
        self = 0;
        User::Leave(KErrNoMemory);
    }

    return self;
}

CBellagioOpenMaxAudioMixer::~CBellagioOpenMaxAudioMixer()
{
	if (component != 0)
	{
		omx_audio_mixer_component_Destructor(component);
		delete component;
		component = 0;
	}
}