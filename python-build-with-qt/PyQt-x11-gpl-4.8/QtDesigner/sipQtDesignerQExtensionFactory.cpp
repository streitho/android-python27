/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:10 2012
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

#include "sipAPIQtDesigner.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtDesigner/default_extensionfactory.sip"
#include <default_extensionfactory.h>
#line 39 "sipQtDesignerQExtensionFactory.cpp"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtDesigner/qextensionmanager.sip"
#include <qextensionmanager.h>
#line 43 "sipQtDesignerQExtensionFactory.cpp"
#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 46 "sipQtDesignerQExtensionFactory.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 49 "sipQtDesignerQExtensionFactory.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtDesignerQExtensionFactory.cpp"
#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtDesignerQExtensionFactory.cpp"
#line 303 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtDesignerQExtensionFactory.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 61 "sipQtDesignerQExtensionFactory.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 64 "sipQtDesignerQExtensionFactory.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 67 "sipQtDesignerQExtensionFactory.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 70 "sipQtDesignerQExtensionFactory.cpp"
#line 125 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 73 "sipQtDesignerQExtensionFactory.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 76 "sipQtDesignerQExtensionFactory.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 79 "sipQtDesignerQExtensionFactory.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 82 "sipQtDesignerQExtensionFactory.cpp"


class sipQExtensionFactory : public QExtensionFactory
{
public:
    sipQExtensionFactory(QExtensionManager *);
    virtual ~sipQExtensionFactory();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject * sipProtect_sender() const;
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);
    QObject * sipProtectVirt_createExtension(bool,QObject *,const QString&,QObject *) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QObject * extension(QObject *,const QString&) const;
    QObject * createExtension(QObject *,const QString&,QObject *) const;
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQExtensionFactory(const sipQExtensionFactory &);
    sipQExtensionFactory &operator = (const sipQExtensionFactory &);

    char sipPyMethods[9];
};

sipQExtensionFactory::sipQExtensionFactory(QExtensionManager *a0): QExtensionFactory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQExtensionFactory::~sipQExtensionFactory()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQExtensionFactory::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QExtensionFactory);
}

int sipQExtensionFactory::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QExtensionFactory,_c,_id,_a);

    return _id;
}

void *sipQExtensionFactory::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast && sip_QtDesigner_qt_metacast(sipPySelf,sipType_QExtensionFactory,_clname)) ? this : QExtensionFactory::qt_metacast(_clname);
}

QObject * sipQExtensionFactory::extension(QObject *a0,const QString& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_extension);

    if (!meth)
        return QExtensionFactory::extension(a0,a1);

    extern QObject * sipVH_QtDesigner_1(sip_gilstate_t,PyObject *,QObject *,const QString&);

    return sipVH_QtDesigner_1(sipGILState,meth,a0,a1);
}

QObject * sipQExtensionFactory::createExtension(QObject *a0,const QString& a1,QObject *a2) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_createExtension);

    if (!meth)
        return QExtensionFactory::createExtension(a0,a1,a2);

    extern QObject * sipVH_QtDesigner_6(sip_gilstate_t,PyObject *,QObject *,const QString&,QObject *);

    return sipVH_QtDesigner_6(sipGILState,meth,a0,a1,a2);
}

bool sipQExtensionFactory::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[5]))(sipGILState,meth,a0);
}

bool sipQExtensionFactory::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[18]))(sipGILState,meth,a0,a1);
}

void sipQExtensionFactory::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t,PyObject *,QTimerEvent *);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[9]))(sipGILState,meth,a0);
}

void sipQExtensionFactory::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t,PyObject *,QChildEvent *);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[25]))(sipGILState,meth,a0);
}

void sipQExtensionFactory::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQExtensionFactory::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

void sipQExtensionFactory::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

QObject * sipQExtensionFactory::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQExtensionFactory::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQExtensionFactory::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQExtensionFactory::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQExtensionFactory::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQExtensionFactory::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQExtensionFactory::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

QObject * sipQExtensionFactory::sipProtectVirt_createExtension(bool sipSelfWasArg,QObject *a0,const QString& a1,QObject *a2) const
{
    return (sipSelfWasArg ? QExtensionFactory::createExtension(a0,a1,a2) : createExtension(a0,a1,a2));
}


extern "C" {static PyObject *meth_QExtensionFactory_sender(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        sipQExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QExtensionFactory, &sipCpp))
        {
            QObject *sipRes = 0;

#line 529 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        typedef QObject *(*helper_func)(QObject *);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_sender");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp->sender());
        #else
            sipRes = helper(sipCpp->sipProtect_sender());
        #endif
#line 380 "sipQtDesignerQExtensionFactory.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_sender, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QExtensionFactory_receivers(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        char * a0;
        sipQExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QExtensionFactory, &sipCpp, &a0))
        {
            int sipRes = 0;

#line 546 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp, a0, sipCpp->receivers(a0));
        #else
            sipRes = helper(sipCpp, a0, sipCpp->sipProtect_receivers(a0));
        #endif
#line 422 "sipQtDesignerQExtensionFactory.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_receivers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QExtensionFactory_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QExtensionFactory, &sipCpp, sipType_QTimerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QExtensionFactory_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QExtensionFactory, &sipCpp, sipType_QChildEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QExtensionFactory_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QExtensionFactory, &sipCpp, sipType_QEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QExtensionFactory_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QExtensionFactory, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_connectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QExtensionFactory_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QExtensionFactory, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_disconnectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QExtensionFactory_extension(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_extension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QObject * a0;
        const QString * a1;
        int a1State = 0;
        QExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QExtensionFactory, &sipCpp, sipType_QObject, &a0, sipType_QString,&a1, &a1State))
        {
            QObject *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QExtensionFactory::extension(a0,*a1) : sipCpp->extension(a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_extension, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QExtensionFactory_extensionManager(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_extensionManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QExtensionFactory, &sipCpp))
        {
            QExtensionManager *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->extensionManager();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QExtensionManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_extensionManager, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QExtensionFactory_createExtension(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_createExtension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QObject * a0;
        const QString * a1;
        int a1State = 0;
        QObject * a2;
        sipWrapper *sipOwner = 0;
        sipQExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1JH", &sipSelf, sipType_QExtensionFactory, &sipCpp, sipType_QObject, &a0, sipType_QString,&a1, &a1State, sipType_QObject, &a2, &sipOwner))
        {
            QObject *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_createExtension(sipSelfWasArg,a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QObject,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_createExtension, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QExtensionFactory(void *, const sipTypeDef *);}
static void *cast_QExtensionFactory(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QExtensionFactory)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QExtensionFactory *)ptr,targetType)) != NULL)
        return res;

    if ((res = ((const sipClassTypeDef *)sipType_QAbstractExtensionFactory)->ctd_cast((QAbstractExtensionFactory *)(QExtensionFactory *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QExtensionFactory(void *, int);}
static void release_QExtensionFactory(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQExtensionFactory *>(sipCppV);
    else
        delete reinterpret_cast<QExtensionFactory *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QExtensionFactory(sipSimpleWrapper *);}
static void dealloc_QExtensionFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQExtensionFactory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QExtensionFactory(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QExtensionFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QExtensionFactory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQExtensionFactory *sipCpp = 0;

    {
        QExtensionManager * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QExtensionManager, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQExtensionFactory(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QExtensionFactory[] = {{133, 0, 0}, {0, 255, 1}};


static PyMethodDef methods_QExtensionFactory[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QExtensionFactory_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QExtensionFactory_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_createExtension), meth_QExtensionFactory_createExtension, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QExtensionFactory_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QExtensionFactory_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_extension), meth_QExtensionFactory_extension, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_extensionManager), meth_QExtensionFactory_extensionManager, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QExtensionFactory_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), meth_QExtensionFactory_sender, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QExtensionFactory_timerEvent, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QExtensionFactory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QExtensionFactory,
        {0}
    },
    {
        sipNameNr_QExtensionFactory,
        {0, 0, 1},
        10, methods_QExtensionFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QExtensionFactory,
    0,
    init_QExtensionFactory,
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
    dealloc_QExtensionFactory,
    0,
    0,
    0,
    release_QExtensionFactory,
    cast_QExtensionFactory,
    0,
    0,
    0
},
    &QExtensionFactory::staticMetaObject,
    0,
    0
};
