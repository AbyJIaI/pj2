//******************************************************************************
//
// File:    FileNotFoundCudaException.java
// Package: edu.rit.gpu
// Unit:    Class edu.rit.gpu.FileNotFoundCudaException
//
// This Java source file is copyright (C) 2014 by Alan Kaminsky. All rights
// reserved. For further information, contact the author, Alan Kaminsky, at
// ark@cs.rit.edu.
//
// This Java source file is part of the Parallel Java 2 Library ("PJ2"). PJ2 is
// free software; you can redistribute it and/or modify it under the terms of
// the GNU General Public License as published by the Free Software Foundation;
// either version 3 of the License, or (at your option) any later version.
//
// PJ2 is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
// A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//
// A copy of the GNU General Public License is provided in the file gpl.txt. You
// may also obtain a copy of the GNU General Public License on the World Wide
// Web at http://www.gnu.org/licenses/gpl.html.
//
//******************************************************************************

package edu.rit.gpu;

/**
 * Class FileNotFoundCudaException is thrown if a CUDA_ERROR_FILE_NOT_FOUND
 * error occurred.
 *
 * @author  Alan Kaminsky
 * @version 19-Feb-2014
 */
public class FileNotFoundCudaException
	extends CudaException
	{

	/**
	 * Construct a new file not found CUDA exception.
	 */
	public FileNotFoundCudaException()
		{
		super();
		}

	/**
	 * Construct a new file not found CUDA exception with the given detail
	 * message.
	 *
	 * @param  msg  Detail message.
	 */
	public FileNotFoundCudaException
		(String msg)
		{
		super (msg);
		}

	/**
	 * Construct a new file not found CUDA exception with the given chained
	 * exception.
	 *
	 * @param  exc  Chained exception.
	 */
	public FileNotFoundCudaException
		(Throwable exc)
		{
		super (exc);
		}

	/**
	 * Construct a new file not found CUDA exception with the given detail
	 * message and chained exception.
	 *
	 * @param  msg  Detail message.
	 * @param  exc  Chained exception.
	 */
	public FileNotFoundCudaException
		(String msg,
		 Throwable exc)
		{
		super (msg, exc);
		}

	}
