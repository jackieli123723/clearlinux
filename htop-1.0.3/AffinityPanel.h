/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_AffinityPanel
#define HEADER_AffinityPanel
/*
htop - AffinityPanel.h
(C) 2004-2011 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#include "Panel.h"
#include "Affinity.h"
#include "ProcessList.h"
#include "ListItem.h"

extern PanelClass AffinityPanel_class;

Panel* AffinityPanel_new(ProcessList* pl, Affinity* affinity);

Affinity* AffinityPanel_getAffinity(Panel* this);

#endif