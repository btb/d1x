/*
THE COMPUTER CODE CONTAINED HEREIN IS THE SOLE PROPERTY OF PARALLAX
SOFTWARE CORPORATION ("PARALLAX").  PARALLAX, IN DISTRIBUTING THE CODE TO
END-USERS, AND SUBJECT TO ALL OF THE TERMS AND CONDITIONS HEREIN, GRANTS A
ROYALTY-FREE, PERPETUAL LICENSE TO SUCH END-USERS FOR USE BY SUCH END-USERS
IN USING, DISPLAYING,  AND CREATING DERIVATIVE WORKS THEREOF, SO LONG AS
SUCH USE, DISPLAY OR CREATION IS FOR NON-COMMERCIAL, ROYALTY OR REVENUE
FREE PURPOSES.  IN NO EVENT SHALL THE END-USER USE THE COMPUTER CODE
CONTAINED HEREIN FOR REVENUE-BEARING PURPOSES.  THE END-USER UNDERSTANDS
AND AGREES TO THE TERMS HEREIN AND ACCEPTS THE SAME BY USE OF THIS FILE.  
COPYRIGHT 1993-1998 PARALLAX SOFTWARE CORPORATION.  ALL RIGHTS RESERVED.
*/
// 
// Auto-generated include file 
// Generated by MAKE from INFERNO.INI settings 
// 


#define VERSION_NAME	"Registered v1.5 Jan 5, 1996"
#define VERSION_TYPE	"REGISTERED"
//edited on 10/04/98 by Matt Mueller to keep version info consistant
#define D1X_VERSION "v" D1XMAJOR "." D1XMINOR
//end edit -MM
#define DESCENT_VERSION "D1X " D1X_VERSION
#define D1X_DATE        "10-16-98"

//added 4/19/99 Mat Mueller - the atois are a bit ugly, but oh well
#define D1X_IVER (atoi(D1XMAJOR)*1000+atoi(D1XMINOR)*10)
//end addition

//moved on 04/19/99 by Victor Rachels from network.h
//added on 03/05/99 by Matt Mueller
//minimum version needed to use these features:
#define D1X_DIRECTDATA_IVER	1340
#define D1X_DIRECTPING_IVER	1340
#define D1X_POS_FIRE_IVER	1350
#define D1X_POS_EXPLODE_IVER	1350
//end addition -MM
//added on 04/19/99 by Victor Rachels for alt vulcan fire
#define D1X_ALT_VULCAN_IVER     1360
//end addition - VR