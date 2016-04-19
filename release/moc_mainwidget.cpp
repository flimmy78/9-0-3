/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      33,   11,   11,   11, 0x08,
      62,   11,   11,   11, 0x08,
      82,   11,   11,   11, 0x08,
     105,  103,   11,   11, 0x08,
     145,   11,   11,   11, 0x08,
     181,   11,   11,   11, 0x08,
     218,   11,   11,   11, 0x08,
     250,   11,   11,   11, 0x08,
     273,   11,   11,   11, 0x08,
     296,   11,   11,   11, 0x08,
     319,   11,   11,   11, 0x08,
     342,   11,   11,   11, 0x08,
     375,   11,   11,   11, 0x08,
     408,   11,   11,   11, 0x08,
     426,   11,   11,   11, 0x08,
     451,   11,   11,   11, 0x08,
     485,  477,   11,   11, 0x08,
     514,   11,   11,   11, 0x08,
     550,   11,   11,   11, 0x08,
     591,  585,   11,   11, 0x08,
     632,  585,   11,   11, 0x08,
     672,  585,   11,   11, 0x08,
     713,  585,   11,   11, 0x08,
     753,  585,   11,   11, 0x08,
     792,  585,   11,   11, 0x08,
     832,   11,   11,   11, 0x08,
     866,   11,   11,   11, 0x08,
     900,   11,   11,   11, 0x08,
     933,   11,   11,   11, 0x08,
     969,   11,   11,   11, 0x08,
    1001,   11,   11,   11, 0x08,
    1034,   11,   11,   11, 0x08,
    1062,   11,   11,   11, 0x08,
    1095,  477,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWidget[] = {
    "MainWidget\0\0changeButtonStatus()\0"
    "slot_serPort_shorCut_PsBtn()\0"
    "slot_serPort_open()\0slot_serPort_close()\0"
    ",\0slt_serPort_RecDataToUI(QByteArray,int)\0"
    "on_serPort_CleanRec_PsBtn_clicked()\0"
    "on_serPort_CleanSend_PsBtn_clicked()\0"
    "on_serPort_Send_PsBtn_clicked()\0"
    "slt_RD_update(pRDTYPE)\0slt_RS_update(pRSTYPE)\0"
    "slt_ME_update(pMETYPE)\0slt_ES_update(pESTYPE)\0"
    "slt_ENERGY_PUL_update(pPULSEPOW)\0"
    "slt_ENERGY_STD_update(pPULSEPOW)\0"
    "slt_wave_update()\0slt_RRF_update(pRRFTYPE)\0"
    "slt_elapseTimer_timeout()\0checked\0"
    "on_start_PsBtn_clicked(bool)\0"
    "on_serPort_write_SP_PsBtn_clicked()\0"
    "on_serPort_read_SP_PsBtn_clicked()\0"
    "index\0on_serPort_portName_CbBox_activated(int)\0"
    "on_serPort_dataBit_CbBox_activated(int)\0"
    "on_serPort_baudRate_CbBox_activated(int)\0"
    "on_serPort_stopBit_CbBox_activated(int)\0"
    "on_serPort_parity_CbBox_activated(int)\0"
    "on_serPort_flowCtl_CbBox_activated(int)\0"
    "on_RSMV_clearFrom_PsBtn_clicked()\0"
    "on_RSMV_buildFrom_PsBtn_clicked()\0"
    "on_RSMV_readFrom_PsBtn_clicked()\0"
    "on_RSMV_saveFormMsg_PsBtn_clicked()\0"
    "on_ES_PE_zoomIn_PsBtn_clicked()\0"
    "on_ES_PE_zoomOut_PsBtn_clicked()\0"
    "on_keyBoard_PsBtn_clicked()\0"
    "on_ES_insertForm_PsBtn_clicked()\0"
    "on_lock_RdBtn_clicked(bool)\0"
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWidget *_t = static_cast<MainWidget *>(_o);
        switch (_id) {
        case 0: _t->changeButtonStatus(); break;
        case 1: _t->slot_serPort_shorCut_PsBtn(); break;
        case 2: _t->slot_serPort_open(); break;
        case 3: _t->slot_serPort_close(); break;
        case 4: _t->slt_serPort_RecDataToUI((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_serPort_CleanRec_PsBtn_clicked(); break;
        case 6: _t->on_serPort_CleanSend_PsBtn_clicked(); break;
        case 7: _t->on_serPort_Send_PsBtn_clicked(); break;
        case 8: _t->slt_RD_update((*reinterpret_cast< pRDTYPE(*)>(_a[1]))); break;
        case 9: _t->slt_RS_update((*reinterpret_cast< pRSTYPE(*)>(_a[1]))); break;
        case 10: _t->slt_ME_update((*reinterpret_cast< pMETYPE(*)>(_a[1]))); break;
        case 11: _t->slt_ES_update((*reinterpret_cast< pESTYPE(*)>(_a[1]))); break;
        case 12: _t->slt_ENERGY_PUL_update((*reinterpret_cast< pPULSEPOW(*)>(_a[1]))); break;
        case 13: _t->slt_ENERGY_STD_update((*reinterpret_cast< pPULSEPOW(*)>(_a[1]))); break;
        case 14: _t->slt_wave_update(); break;
        case 15: _t->slt_RRF_update((*reinterpret_cast< pRRFTYPE(*)>(_a[1]))); break;
        case 16: _t->slt_elapseTimer_timeout(); break;
        case 17: _t->on_start_PsBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->on_serPort_write_SP_PsBtn_clicked(); break;
        case 19: _t->on_serPort_read_SP_PsBtn_clicked(); break;
        case 20: _t->on_serPort_portName_CbBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_serPort_dataBit_CbBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_serPort_baudRate_CbBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_serPort_stopBit_CbBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_serPort_parity_CbBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_serPort_flowCtl_CbBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_RSMV_clearFrom_PsBtn_clicked(); break;
        case 27: _t->on_RSMV_buildFrom_PsBtn_clicked(); break;
        case 28: _t->on_RSMV_readFrom_PsBtn_clicked(); break;
        case 29: _t->on_RSMV_saveFormMsg_PsBtn_clicked(); break;
        case 30: _t->on_ES_PE_zoomIn_PsBtn_clicked(); break;
        case 31: _t->on_ES_PE_zoomOut_PsBtn_clicked(); break;
        case 32: _t->on_keyBoard_PsBtn_clicked(); break;
        case 33: _t->on_ES_insertForm_PsBtn_clicked(); break;
        case 34: _t->on_lock_RdBtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWidget,
      qt_meta_data_MainWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget))
        return static_cast<void*>(const_cast< MainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
