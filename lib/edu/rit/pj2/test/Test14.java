//******************************************************************************
//
// File:    Test14.java
// Package: edu.rit.pj2.test
// Unit:    Class edu.rit.pj2.test.Test14
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

package edu.rit.pj2.test;

import edu.rit.io.InStream;
import edu.rit.io.OutStream;
import edu.rit.pj2.Job;
import edu.rit.pj2.Rule;
import edu.rit.pj2.Task;
import edu.rit.pj2.TaskSpec;
import edu.rit.pj2.Tuple;
import java.io.IOException;

/**
 * Class Test14 is a unit test main program for classes {@linkplain
 * edu.rit.pj2.Job Job} and {@linkplain edu.rit.pj2.Task Task}. The job puts
 * tuples into tuple space, each tuple containing a string from the command
 * line. The job then spawns one task. The task repeatedly takes a tuple out of
 * tuple space and prints it, until there are no more tuples.
 * <P>
 * Usage: <TT>java pj2 edu.rit.pj2.test.Test14 <I>string</I> ...</TT>
 *
 * @author  Alan Kaminsky
 * @version 30-May-2014
 */
public class Test14
	extends Job
	{

// Exported operations.

	/**
	 * Perform this job's computation.
	 *
	 * @param  args  Array of zero or more command line argument strings.
	 *
	 * @exception  Exception
	 *     The <TT>main()</TT> method can throw any exception.
	 */
	public void main
		(String[] args)
		{
		for (int i = 0; i < args.length; ++ i)
			putTuple (new StringTuple (i, args[i]));
		rule() .task (OutputTask.class);
		}

// Hidden helper classes.

	/**
	 * Class StringTuple contains one command line argument string.
	 *
	 * @author  Alan Kaminsky
	 * @version 30-Nov-2013
	 */
	private static class StringTuple
		extends Tuple
		{
		private int index;
		private String string;

		public StringTuple()
			{
			}

		public StringTuple (int index, String string)
			{
			this.index = index;
			this.string = string;
			}

		public void print()
			{
			System.out.printf ("Argument %d = %s%n", index, string);
			}

		public void writeOut
			(OutStream out)
			throws IOException
			{
			out.writeInt (index);
			out.writeString (string);
			}

		public void readIn
			(InStream in)
			throws IOException
			{
			index = in.readInt();
			string = in.readString();
			}
		}

	/**
	 * Class OutputTask repeatedly prints a tuple containing a command line
	 * string as part of a {@linkplain Test14 Test14} job.
	 *
	 * @author  Alan Kaminsky
	 * @version 12-Dec-2013
	 */
	private static class OutputTask
		extends Task
		{
		public void main
			(String[] args)
			throws Exception
			{
			StringTuple template = new StringTuple();
			StringTuple tuple;
			while ((tuple = (StringTuple) tryToTakeTuple (template)) != null)
				tuple.print();
			}

		protected static int coresRequired()
			{
			return 1;
			}
		}

	}
