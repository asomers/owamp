/*
 *      $Id$
 */
/************************************************************************
*									*
*			     Copyright (C)  2002			*
*				Internet2				*
*			     All Rights Reserved			*
*									*
************************************************************************/
/*
 *	File:		endpoint.h
 *
 *	Author:		Jeff W. Boote
 *			Internet2
 *
 *	Date:		Wed May 29 11:05:56 MDT 2002
 *
 *	Description:	
 */
#ifndef	_OWAMP_ENDPOINT_H
#define	_OWAMP_ENDPOINT_H

/*
 * The endpoint init function is responsible for opening a socket, and
 * allocating a local port number.
 * If this is a recv endpoint, it is also responsible for allocating a
 * session id.
 */
extern OWPErrSeverity
_OWPEndpointInit(
	void		*app_data,
	OWPTestSession	tsession,
	OWPAddr		localaddr,
	FILE		*fp,
	void		**end_data_ret
);

extern OWPErrSeverity
_OWPEndpointInitHook(
	void		*app_data,
	OWPTestSession	tsession,
	void		**end_data
);

extern OWPErrSeverity
_OWPEndpointStart(
	void	*app_data,
	void	**end_data
	);

extern OWPErrSeverity
_OWPEndpointStatus(
	void		*app_data,
	void		**end_data,
	OWPAcceptType	*aval
	);

extern OWPErrSeverity
_OWPEndpointStop(
	void		*app_data,
	void		**end_data,
	OWPAcceptType	aval
	);

#endif	/*	_OWAMP_ENDPOINT_H	*/
