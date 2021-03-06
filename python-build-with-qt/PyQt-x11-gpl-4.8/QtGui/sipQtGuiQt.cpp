/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:16 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 39 "sipQtGuiQt.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtGuiQt.cpp"


extern "C" {static PyObject *meth_Qt_convertFromPlainText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_Qt_convertFromPlainText(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        Qt::WhiteSpaceMode a1 = Qt::WhiteSpacePre;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|E", sipType_QString,&a0, &a0State, sipType_Qt_WhiteSpaceMode, &a1))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(Qt::convertFromPlainText(*a0,a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_convertFromPlainText, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_Qt_escape(PyObject *, PyObject *);}
static PyObject *meth_Qt_escape(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(Qt::escape(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_escape, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_Qt_mightBeRichText(PyObject *, PyObject *);}
static PyObject *meth_Qt_mightBeRichText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = Qt::mightBeRichText(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_mightBeRichText, NULL);

    return NULL;
}


static PyMethodDef methods_Qt[] = {
    {SIP_MLNAME_CAST(sipName_convertFromPlainText), (PyCFunction)meth_Qt_convertFromPlainText, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_escape), meth_Qt_escape, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mightBeRichText), meth_Qt_mightBeRichText, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_Qt[] = {
    {sipName_ExactHit, Qt::ExactHit, 761},
    {sipName_FuzzyHit, Qt::FuzzyHit, 761},
    {sipName_WhiteSpaceModeUndefined, Qt::WhiteSpaceModeUndefined, 762},
    {sipName_WhiteSpaceNoWrap, Qt::WhiteSpaceNoWrap, 762},
    {sipName_WhiteSpaceNormal, Qt::WhiteSpaceNormal, 762},
    {sipName_WhiteSpacePre, Qt::WhiteSpacePre, 762},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_Qt = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_NAMESPACE,
        sipNameNr_Qt,
        {0}
    },
    {
        -1,
        {262, 0, 0},
        3, methods_Qt,
        6, enummembers_Qt,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
