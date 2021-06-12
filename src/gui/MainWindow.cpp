/****************************************************************************//*
 * Copyright (C) 2021 Marek M. Cel
 *
 * Creative Commons Legal Code
 *
 * CC0 1.0 Universal
 *
 *     CREATIVE COMMONS CORPORATION IS NOT A LAW FIRM AND DOES NOT PROVIDE
 *     LEGAL SERVICES. DISTRIBUTION OF THIS DOCUMENT DOES NOT CREATE AN
 *     ATTORNEY-CLIENT RELATIONSHIP. CREATIVE COMMONS PROVIDES THIS
 *     INFORMATION ON AN "AS-IS" BASIS. CREATIVE COMMONS MAKES NO WARRANTIES
 *     REGARDING THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS
 *     PROVIDED HEREUNDER, AND DISCLAIMS LIABILITY FOR DAMAGES RESULTING FROM
 *     THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS PROVIDED
 *     HEREUNDER.
 *
 * Statement of Purpose
 *
 * The laws of most jurisdictions throughout the world automatically confer
 * exclusive Copyright and Related Rights (defined below) upon the creator
 * and subsequent owner(s) (each and all, an "owner") of an original work of
 * authorship and/or a database (each, a "Work").
 *
 * Certain owners wish to permanently relinquish those rights to a Work for
 * the purpose of contributing to a commons of creative, cultural and
 * scientific works ("Commons") that the public can reliably and without fear
 * of later claims of infringement build upon, modify, incorporate in other
 * works, reuse and redistribute as freely as possible in any form whatsoever
 * and for any purposes, including without limitation commercial purposes.
 * These owners may contribute to the Commons to promote the ideal of a free
 * culture and the further production of creative, cultural and scientific
 * works, or to gain reputation or greater distribution for their Work in
 * part through the use and efforts of others.
 *
 * For these and/or other purposes and motivations, and without any
 * expectation of additional consideration or compensation, the person
 * associating CC0 with a Work (the "Affirmer"), to the extent that he or she
 * is an owner of Copyright and Related Rights in the Work, voluntarily
 * elects to apply CC0 to the Work and publicly distribute the Work under its
 * terms, with knowledge of his or her Copyright and Related Rights in the
 * Work and the meaning and intended legal effect of CC0 on those rights.
 *
 * 1. Copyright and Related Rights. A Work made available under CC0 may be
 * protected by copyright and related or neighboring rights ("Copyright and
 * Related Rights"). Copyright and Related Rights include, but are not
 * limited to, the following:
 *
 *   i. the right to reproduce, adapt, distribute, perform, display,
 *      communicate, and translate a Work;
 *  ii. moral rights retained by the original author(s) and/or performer(s);
 * iii. publicity and privacy rights pertaining to a person's image or
 *      likeness depicted in a Work;
 *  iv. rights protecting against unfair competition in regards to a Work,
 *      subject to the limitations in paragraph 4(a), below;
 *   v. rights protecting the extraction, dissemination, use and reuse of data
 *      in a Work;
 *  vi. database rights (such as those arising under Directive 96/9/EC of the
 *      European Parliament and of the Council of 11 March 1996 on the legal
 *      protection of databases, and under any national implementation
 *      thereof, including any amended or successor version of such
 *      directive); and
 * vii. other similar, equivalent or corresponding rights throughout the
 *      world based on applicable law or treaty, and any national
 *      implementations thereof.
 *
 * 2. Waiver. To the greatest extent permitted by, but not in contravention
 * of, applicable law, Affirmer hereby overtly, fully, permanently,
 * irrevocably and unconditionally waives, abandons, and surrenders all of
 * Affirmer's Copyright and Related Rights and associated claims and causes
 * of action, whether now known or unknown (including existing as well as
 * future claims and causes of action), in the Work (i) in all territories
 * worldwide, (ii) for the maximum duration provided by applicable law or
 * treaty (including future time extensions), (iii) in any current or future
 * medium and for any number of copies, and (iv) for any purpose whatsoever,
 * including without limitation commercial, advertising or promotional
 * purposes (the "Waiver"). Affirmer makes the Waiver for the benefit of each
 * member of the public at large and to the detriment of Affirmer's heirs and
 * successors, fully intending that such Waiver shall not be subject to
 * revocation, rescission, cancellation, termination, or any other legal or
 * equitable action to disrupt the quiet enjoyment of the Work by the public
 * as contemplated by Affirmer's express Statement of Purpose.
 *
 * 3. Public License Fallback. Should any part of the Waiver for any reason
 * be judged legally invalid or ineffective under applicable law, then the
 * Waiver shall be preserved to the maximum extent permitted taking into
 * account Affirmer's express Statement of Purpose. In addition, to the
 * extent the Waiver is so judged Affirmer hereby grants to each affected
 * person a royalty-free, non transferable, non sublicensable, non exclusive,
 * irrevocable and unconditional license to exercise Affirmer's Copyright and
 * Related Rights in the Work (i) in all territories worldwide, (ii) for the
 * maximum duration provided by applicable law or treaty (including future
 * time extensions), (iii) in any current or future medium and for any number
 * of copies, and (iv) for any purpose whatsoever, including without
 * limitation commercial, advertising or promotional purposes (the
 * "License"). The License shall be deemed effective as of the date CC0 was
 * applied by Affirmer to the Work. Should any part of the License for any
 * reason be judged legally invalid or ineffective under applicable law, such
 * partial invalidity or ineffectiveness shall not invalidate the remainder
 * of the License, and in such case Affirmer hereby affirms that he or she
 * will not (i) exercise any of his or her remaining Copyright and Related
 * Rights in the Work or (ii) assert any associated claims and causes of
 * action with respect to the Work, in either case contrary to Affirmer's
 * express Statement of Purpose.
 *
 * 4. Limitations and Disclaimers.
 *
 *  a. No trademark or patent rights held by Affirmer are waived, abandoned,
 *     surrendered, licensed or otherwise affected by this document.
 *  b. Affirmer offers the Work as-is and makes no representations or
 *     warranties of any kind concerning the Work, express, implied,
 *     statutory or otherwise, including without limitation warranties of
 *     title, merchantability, fitness for a particular purpose, non
 *     infringement, or the absence of latent or other defects, accuracy, or
 *     the present or absence of errors, whether or not discoverable, all to
 *     the greatest extent permissible under applicable law.
 *  c. Affirmer disclaims responsibility for clearing rights of other persons
 *     that may apply to the Work or any use thereof, including without
 *     limitation any person's Copyright and Related Rights in the Work.
 *     Further, Affirmer disclaims responsibility for obtaining any necessary
 *     consents, permissions or other rights required for any use of the
 *     Work.
 *  d. Affirmer understands and acknowledges that Creative Commons is not a
 *     party to this document and has no duty or obligation with respect to
 *     this CC0 or use of the Work.
 ******************************************************************************/

#include <gui/MainWindow.h>
#include <ui_MainWindow.h>

#include <iostream>

#include <QCloseEvent>
#include <QDesktopServices>
#include <QFileDialog>
#include <QMessageBox>

#include <qwt_plot_curve.h>
#include <qwt_plot_marker.h>
#include <qwt_scale_engine.h>
#include <qwt_symbol.h>

#include <gui/DialogAddAngle.h>

////////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow( QWidget *parent ) :
    QMainWindow ( parent ),
    _ui ( new Ui::MainWindow ),

    _scSave   ( NULLPTR ),
    _scExport ( NULLPTR ),

    _penPlotDrag_1 ( QPen( Qt::gray  , 2 ) ),
    _penPlotDrag_2 ( QPen( Qt::black , 2 ) ),
    _penPlotLift_1 ( QPen( Qt::gray  , 2 ) ),
    _penPlotLift_2 ( QPen( Qt::black , 2 ) ),

    _currentDragAngleIndex ( -1 ),
    _currentLiftAngleIndex ( -1 ),

    _saved ( true )
{
    _ui->setupUi( this );

    _scSave   = new QShortcut( QKeySequence(Qt::CTRL + Qt::Key_S), this, SLOT(on_actionSave_triggered())   );
    _scExport = new QShortcut( QKeySequence(Qt::CTRL + Qt::Key_E), this, SLOT(on_actionExport_triggered()) );

    _ui->labelCL_0->hide();
    _ui->spinBoxCL_0->hide();

    _ui->plotDrag->setAxisTitle( 0, tr( "Drag Coefficient [-]" ) ) ;
    _ui->plotDrag->setAxisTitle( 2, tr( "Angle of Attack [deg]" ) ) ;
    _ui->plotDrag->setAxisScale( 2, -180.0, 180.0, 30.0 );

    _ui->plotLift->setAxisTitle( 0, tr( "Lift Coefficient [-]" ) ) ;
    _ui->plotLift->setAxisTitle( 2, tr( "Angle of Attack [deg]" ) ) ;
    _ui->plotLift->setAxisScale( 2, -180.0, 180.0, 30.0 );

    connect( _ui->spinBoxAD_1, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxAD_2, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxAD_3, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxAD_4, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );

    connect( _ui->spinBoxCD_0, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxCD_1, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxCD_2, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxCD_3, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxCD_4, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxCD_5, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );

    connect( _ui->spinBoxCL_0, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxCL_S, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxCL_1, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxCL_2, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );

    connect( _ui->spinBoxAL_S, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxAL_1, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );
    connect( _ui->spinBoxAL_2, SIGNAL(editingFinished()), this, SLOT(parametersChanged()) );

    settingsRead();

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

MainWindow::~MainWindow()
{
    settingsSave();

    DELPTR( _scSave   );
    DELPTR( _scExport );

    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::closeEvent( QCloseEvent *event )
{
    askIfSave();

    /////////////////////////////////
    QMainWindow::closeEvent( event );
    /////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::askIfSave()
{
    if ( !_saved )
    {
        QString title = windowTitle();
        QString text = tr( "File have unsaved changes." );

        QMessageBox::StandardButton result = QMessageBox::question( this, title, text,
                                                                    QMessageBox::Save | QMessageBox::Discard,
                                                                    QMessageBox::Save );

        if ( result == QMessageBox::Save )
        {
            saveFile();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::newFile()
{
    askIfSave();

    _currentFile = "";

    _doc.newEmpty();

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::openFile()
{
    askIfSave();

    QString caption = "Open...";
    QString dir = ( _currentFile.length() > 0 ) ? QFileInfo( _currentFile ).absolutePath() : "";
    QString filter;
    QString selectedFilter;

    filter += selectedFilter = "XML (*.xml)";

    QString file = QFileDialog::getOpenFileName( this, caption, dir, filter, &selectedFilter );

    if ( file.length() > 0 )
    {
        _currentFile = file;

        updateRecentFiles( _currentFile );
        readFile( _currentFile );
    }

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::saveFile()
{
    if ( _currentFile.length() > 0 )
    {
        saveFile( _currentFile );
    }
    else
    {
        saveFileAs();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::saveFileAs()
{
    QString caption = "Save as...";
    QString dir = ( _currentFile.length() > 0 ) ? QFileInfo( _currentFile ).absolutePath() : ".";
    QString filter;
    QString selectedFilter;

    filter += selectedFilter = "XML (*.xml)";

    QString newFile = QFileDialog::getSaveFileName( this, caption, dir, filter, &selectedFilter );

    if ( newFile.length() > 0 )
    {
        _currentFile = newFile;
        saveFile( _currentFile );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::exportFileAs()
{
    QString fileName = "";

    QString caption = "Export as...";
    QString dir = ( fileName.length() > 0 ) ? QFileInfo( fileName ).absolutePath() : ".";
    QString filter;
    QString selectedFilter;

    filter += selectedFilter = "Text File (*.txt)";

    fileName = QFileDialog::getSaveFileName( this, caption, dir, filter, &selectedFilter );

    if ( fileName.length() > 0 )
    {
        exportAs( fileName );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::readFile( QString fileName )
{
    if ( QFileInfo( fileName ).suffix() == QString( "xml" ) )
    {
        if ( !_doc.readFile( fileName.toStdString().c_str() ) )
        {
            QMessageBox::warning( this, tr( APP_TITLE ),
                                 tr( "Cannot read file %1." ).arg( fileName ) );
        }
    }

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::saveFile( QString fileName )
{
    if ( _doc.saveFile( fileName.toStdString().c_str() ) )
    {
        _saved = true;
    }
    else
    {
        QMessageBox::warning( this, tr( APP_TITLE ),
                             tr( "Cannot save file %1." ).arg(fileName) );
    }

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::exportAs( QString fileName )
{
    if ( !_doc.exportAs( fileName.toStdString().c_str() ) )
    {
        QMessageBox::warning( this, tr( APP_TITLE ),
                             tr( "Cannot export file %1." ).arg(fileName) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsRead()
{
    QSettings settings( ORG_NAME, APP_NAME );
    
    settings.beginGroup( "main_window" );

    restoreState( settings.value( "state" ).toByteArray() );
    restoreGeometry( settings.value( "geometry" ).toByteArray() );

    settingsRead_RecentFiles( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsRead_RecentFiles( QSettings &settings )
{
    _recentFilesList = settings.value( "recent_files" ).toStringList();

    updateRecentFiles();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsSave()
{
    QSettings settings( ORG_NAME, APP_NAME );
    
    settings.beginGroup( "main_window" );

    settings.setValue( "state", saveState() );
    settings.setValue( "geometry", saveGeometry() );

    settingsSave_RecentFiles( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsSave_RecentFiles( QSettings &settings )
{
    settings.setValue( "recent_files", _recentFilesList );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateGUI()
{
    _ui->spinBoxCD_0->setValue( _doc.getCD_0() );
    _ui->spinBoxCD_1->setValue( _doc.getCD_1() );
    _ui->spinBoxCD_2->setValue( _doc.getCD_2() );
    _ui->spinBoxCD_3->setValue( _doc.getCD_3() );
    _ui->spinBoxCD_4->setValue( _doc.getCD_4() );
    _ui->spinBoxCD_5->setValue( _doc.getCD_5() );

    _ui->spinBoxAD_1->setValue( _doc.getAD_1() );
    _ui->spinBoxAD_2->setValue( _doc.getAD_2() );
    _ui->spinBoxAD_3->setValue( _doc.getAD_3() );
    _ui->spinBoxAD_4->setValue( _doc.getAD_4() );

    _ui->spinBoxCL_0->setValue( _doc.getCL_0() );
    _ui->spinBoxCL_S->setValue( _doc.getCL_S() );
    _ui->spinBoxCL_1->setValue( _doc.getCL_1() );
    _ui->spinBoxCL_2->setValue( _doc.getCL_2() );

    _ui->spinBoxAL_S->setValue( _doc.getAL_S() );
    _ui->spinBoxAL_1->setValue( _doc.getAL_1() );
    _ui->spinBoxAL_2->setValue( _doc.getAL_2() );

    _ui->listDragAngles->clear();
    _ui->listLiftAngles->clear();

    std::vector< double > ad = _doc.getDragAnglesList();
    std::vector< double > al = _doc.getLiftAnglesList();

    for ( std::vector< double >::iterator it = ad.begin(); it != ad.end(); it++ )
    {
        QString ang = locale().toString( *it, 'f', 1 );
        _ui->listDragAngles->addItem( new QListWidgetItem( ang, _ui->listDragAngles ) );
    }

    for ( std::vector< double >::iterator it = al.begin(); it != al.end(); it++ )
    {
        QString ang = locale().toString( *it, 'f', 1 );
        _ui->listLiftAngles->addItem( new QListWidgetItem( ang, _ui->listLiftAngles ) );
    }

    updatePlotDrag();
    updatePlotLift();

    QString title = tr( APP_TITLE );

    if ( _currentFile.length() > 0 )
    {
        title += " - " + QFileInfo( _currentFile ).fileName();
    }

    if ( !_saved ) title += " (*)";

    setWindowTitle( title );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updatePlotDrag()
{
    _ui->plotDrag->detachItems( QwtPlotItem::Rtti_PlotCurve  , true );
    _ui->plotDrag->detachItems( QwtPlotItem::Rtti_PlotMarker , true );

    std::vector< double > ad = _doc.getDragAnglesList();

    QVector< double > vx1;
    QVector< double > vy1;

    for ( std::vector< double >::iterator it = ad.begin(); it != ad.end(); it++ )
    {
        double x = (*it);
        double y = _doc.getCoefDrag( x );

        if ( x == x && y == y )
        {
            vx1.push_back( x );
            vy1.push_back( y );
        }
    }

    if ( vx1.length() > 0 && vy1.length() > 0 && vx1.length() == vy1.length() )
    {
        QwtPlotCurve *curve = new QwtPlotCurve( "" );

        curve->setSamples( vx1, vy1 );
        curve->setPen( _penPlotDrag_1 );

        curve->attach( _ui->plotDrag );
    }

    QVector< double > vx2;
    QVector< double > vy2;

    for ( int i = -180; i <=180; i++ )
    {
        double x = i;
        double y = _doc.getCoefDrag( x );

        vx2.push_back( x );
        vy2.push_back( y );
    }

    if ( vx2.length() > 0 && vy2.length() > 0 && vx2.length() == vy2.length() )
    {
        QwtPlotCurve *curve = new QwtPlotCurve( "" );

        curve->setSamples( vx2, vy2 );
        curve->setPen( _penPlotDrag_2 );

        curve->attach( _ui->plotDrag );
    }

    if ( vx1.length() > 0 && vy1.length() > 0 && vx1.length() == vy1.length() )
    {
        QwtPlotMarker *m0 = new QwtPlotMarker();
        QwtPlotMarker *m1 = new QwtPlotMarker();
        QwtPlotMarker *m2 = new QwtPlotMarker();
        QwtPlotMarker *m3 = new QwtPlotMarker();
        QwtPlotMarker *m4 = new QwtPlotMarker();
        QwtPlotMarker *m5 = new QwtPlotMarker();

        m0->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 6, 6 ) ) );
        m1->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 6, 6 ) ) );
        m2->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 6, 6 ) ) );
        m3->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 6, 6 ) ) );
        m4->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 6, 6 ) ) );
        m5->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 6, 6 ) ) );

        m0->setLabel( QwtText( "CD_0" ) );
        m1->setLabel( QwtText( "CD_1" ) );
        m2->setLabel( QwtText( "CD_2" ) );
        m3->setLabel( QwtText( "CD_3" ) );
        m4->setLabel( QwtText( "CD_4" ) );
        m5->setLabel( QwtText( "CD_5" ) );

        m0->setLabelAlignment( Qt::AlignLeft  | Qt::AlignVCenter );
        m1->setLabelAlignment( Qt::AlignRight | Qt::AlignVCenter );
        m2->setLabelAlignment( Qt::AlignRight | Qt::AlignVCenter );
        m3->setLabelAlignment( Qt::AlignRight | Qt::AlignVCenter );
        m4->setLabelAlignment( Qt::AlignRight | Qt::AlignVCenter );
        m5->setLabelAlignment( Qt::AlignRight | Qt::AlignVCenter );

        m0->setValue( QPointF(            0.0, _doc.getCD_0() ) );
        m1->setValue( QPointF( _doc.getAD_1(), _doc.getCD_1() ) );
        m2->setValue( QPointF( _doc.getAD_2(), _doc.getCD_2() ) );
        m3->setValue( QPointF( _doc.getAD_3(), _doc.getCD_3() ) );
        m4->setValue( QPointF( _doc.getAD_4(), _doc.getCD_4() ) );
        m5->setValue( QPointF(           90.0, _doc.getCD_5() ) );

        m0->attach( _ui->plotDrag );
        m1->attach( _ui->plotDrag );
        m2->attach( _ui->plotDrag );
        m3->attach( _ui->plotDrag );
        m4->attach( _ui->plotDrag );
        m5->attach( _ui->plotDrag );
    }

    _ui->plotDrag->replot();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updatePlotLift()
{
    _ui->plotLift->detachItems( QwtPlotItem::Rtti_PlotCurve  , true );
    _ui->plotLift->detachItems( QwtPlotItem::Rtti_PlotMarker , true );

    std::vector< double > al = _doc.getLiftAnglesList();

    QVector< double > vx1;
    QVector< double > vy1;

    for ( std::vector< double >::iterator it = al.begin(); it != al.end(); it++ )
    {
        double x = (*it);
        double y = _doc.getCoefLift( x );

        if ( x == x && y == y )
        {
            vx1.push_back( x );
            vy1.push_back( y );
        }
    }

    if ( vx1.length() > 0 && vy1.length() > 0 && vx1.length() == vy1.length() )
    {
        QwtPlotCurve *curve = new QwtPlotCurve( "" );

        curve->setSamples( vx1, vy1 );
        curve->setPen( _penPlotLift_1 );

        curve->attach( _ui->plotLift );
    }

    QVector< double > vx2;
    QVector< double > vy2;

    for ( int i = -180; i <=180; i++ )
    {
        double x = i;
        double y = _doc.getCoefLift( x );

        vx2.push_back( x );
        vy2.push_back( y );
    }

    if ( vx2.length() > 0 && vy2.length() > 0 && vx2.length() == vy2.length() )
    {
        QwtPlotCurve *curve = new QwtPlotCurve( "" );

        curve->setSamples( vx2, vy2 );
        curve->setPen( _penPlotLift_2 );

        curve->attach( _ui->plotLift );
    }

    if ( vx1.length() > 0 && vy1.length() > 0 && vx1.length() == vy1.length() )
    {
        QwtPlotMarker *ms = new QwtPlotMarker();
        QwtPlotMarker *m1 = new QwtPlotMarker();
        QwtPlotMarker *m2 = new QwtPlotMarker();

        ms->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 6, 6 ) ) );
        m1->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 6, 6 ) ) );
        m2->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 6, 6 ) ) );

        ms->setLabel( QwtText( "CL_S" ) );
        m1->setLabel( QwtText( "CL_1" ) );
        m2->setLabel( QwtText( "CL_2" ) );

        ms->setLabelAlignment( Qt::AlignLeft  | Qt::AlignVCenter );
        m1->setLabelAlignment( Qt::AlignRight | Qt::AlignVCenter );
        m2->setLabelAlignment( Qt::AlignRight | Qt::AlignVCenter );

        ms->setValue( QPointF( _doc.getAL_S(), _doc.getCL_S() ) );
        m1->setValue( QPointF( _doc.getAL_1(), _doc.getCL_1() ) );
        m2->setValue( QPointF( _doc.getAL_2(), _doc.getCL_2() ) );

        ms->attach( _ui->plotLift );
        m1->attach( _ui->plotLift );
        m2->attach( _ui->plotLift );
    }

    _ui->plotLift->replot();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateRecentFiles( QString file )
{
    for ( unsigned int i = 0; i < _recentFilesActions.size(); i++ )
    {
        disconnect( _recentFilesActions.at( i ), SIGNAL(triggered(int)), this, SLOT(recentFile_triggered(int)) );
    }

    _recentFilesActions.clear();

    if ( file.length() > 0 )
    {
        QStringList temp;

        temp.push_back( file );

        for ( int i = 0; i < _recentFilesList.size() && i < 4; i++ )
        {
            temp.push_back( _recentFilesList.at( i ) );
        }

        _recentFilesList = temp;
    }

    _ui->menuRecentFiles->clear();

    for ( int i = 0; i < _recentFilesList.size(); i++ )
    {
        _recentFilesActions.push_back( new RecentFileAction( i, _recentFilesList.at( i ), _ui->menuRecentFiles ) );
        connect( _recentFilesActions.at( i ), SIGNAL(triggered(int)), this, SLOT(recentFile_triggered(int)) );
        _ui->menuRecentFiles->addAction( _recentFilesActions.at( i ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionNew_triggered()
{
    newFile();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionOpen_triggered()
{
    openFile();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionSave_triggered()
{
    saveFile();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionSaveAs_triggered()
{
    saveFileAs();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionExport_triggered()
{
    exportFileAs();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionExit_triggered()
{
    close();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionClearRecent_triggered()
{
    _recentFilesList.clear();

    updateRecentFiles();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionAbout_triggered()
{
    QFile aboutHtmlFile( ":/gui/html/about.html" );

    QString aboutWinTitle;
    QString aboutInfoText;

    aboutWinTitle = tr( "About" );

    if ( aboutHtmlFile.open( QIODevice::ReadOnly ) )
    {
        aboutInfoText = aboutHtmlFile.readAll();
        aboutHtmlFile.close();
    }

    QMessageBox::about( this, aboutWinTitle, aboutInfoText );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionShowNASATM102267_triggered()
{
    QDesktopServices::openUrl( QUrl( "https://ntrs.nasa.gov/api/citations/19910009728/downloads/19910009728.pdf#page=77" ) );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_listDragAngles_currentRowChanged( int currentRow )
{
    if ( currentRow >= 0 && currentRow < (int)_doc.getDragAnglesList().size() )
    {
        _ui->pushButtonDragDel->setEnabled( true );
        _currentDragAngleIndex = currentRow;
    }
    else
    {
        _ui->pushButtonDragDel->setEnabled( false );
        _currentDragAngleIndex = -1;
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_listLiftAngles_currentRowChanged( int currentRow )
{
    if ( currentRow >= 0 && currentRow < (int)_doc.getLiftAnglesList().size() )
    {
        _ui->pushButtonLiftDel->setEnabled( true );
        _currentLiftAngleIndex = currentRow;
    }
    else
    {
        _ui->pushButtonLiftDel->setEnabled( false );
        _currentLiftAngleIndex = -1;
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_pushButtonDragDel_clicked()
{
    if ( _currentDragAngleIndex >= 0 && _currentDragAngleIndex < (int)_doc.getDragAnglesList().size() )
    {
        std::vector< double > list = _doc.getDragAnglesList();

        list.erase( list.begin() + _currentDragAngleIndex );
        _doc.setDragAnglesList( list );

        _saved = false;

        updateGUI();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_pushButtonLiftDel_clicked()
{
    if ( _currentLiftAngleIndex >= 0 && _currentLiftAngleIndex < (int)_doc.getLiftAnglesList().size() )
    {
        std::vector< double > list = _doc.getLiftAnglesList();

        list.erase( list.begin() + _currentLiftAngleIndex );
        _doc.setLiftAnglesList( list );

        _saved = false;

        updateGUI();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_pushButtonDragAdd_clicked()
{
    DialogAddAngle *dialog = new DialogAddAngle( this );

    if ( dialog->exec() == QDialog::Accepted )
    {
        double angle = dialog->getAngle();

        std::vector< double > list = _doc.getDragAnglesList();

        bool inserted = false;

        for ( std::vector< double >::iterator it = list.begin(); it != list.end(); it++ )
        {
            if ( angle < *it )
            {
                list.insert( it, angle );
                inserted = true;
                break;
            }
        }

        if ( !inserted ) list.push_back( angle );

        _doc.setDragAnglesList( list );

        _saved = false;

        updateGUI();
    }

    DELPTR( dialog );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_pushButtonLiftAdd_clicked()
{
    DialogAddAngle *dialog = new DialogAddAngle( this );

    if ( dialog->exec() == QDialog::Accepted )
    {
        double angle = dialog->getAngle();

        std::vector< double > list = _doc.getLiftAnglesList();

        bool inserted = false;

        for ( std::vector< double >::iterator it = list.begin(); it != list.end(); it++ )
        {
            if ( angle < *it )
            {
                list.insert( it, angle );
                inserted = true;
                break;
            }
        }

        if ( !inserted ) list.push_back( angle );

        _doc.setLiftAnglesList( list );

        _saved = false;

        updateGUI();
    }

    DELPTR( dialog );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::parametersChanged()
{
    if ( _doc.getCD_0() != _ui->spinBoxCD_0->value()
      || _doc.getCD_1() != _ui->spinBoxCD_1->value()
      || _doc.getCD_2() != _ui->spinBoxCD_2->value()
      || _doc.getCD_3() != _ui->spinBoxCD_3->value()
      || _doc.getCD_4() != _ui->spinBoxCD_4->value()
      || _doc.getCD_5() != _ui->spinBoxCD_5->value()
      || _doc.getAD_1() != _ui->spinBoxAD_1->value()
      || _doc.getAD_2() != _ui->spinBoxAD_2->value()
      || _doc.getAD_3() != _ui->spinBoxAD_3->value()
      || _doc.getAD_4() != _ui->spinBoxAD_4->value()
      || _doc.getCL_0() != _ui->spinBoxCL_0->value()
      || _doc.getCL_S() != _ui->spinBoxCL_S->value()
      || _doc.getCL_1() != _ui->spinBoxCL_1->value()
      || _doc.getCL_2() != _ui->spinBoxCL_2->value()
      || _doc.getAL_S() != _ui->spinBoxAL_S->value()
      || _doc.getAL_1() != _ui->spinBoxAL_1->value()
      || _doc.getAL_2() != _ui->spinBoxAL_2->value() )
    {
        _saved = false;
    }

    _doc.setCD_0( _ui->spinBoxCD_0->value() );
    _doc.setCD_1( _ui->spinBoxCD_1->value() );
    _doc.setCD_2( _ui->spinBoxCD_2->value() );
    _doc.setCD_3( _ui->spinBoxCD_3->value() );
    _doc.setCD_4( _ui->spinBoxCD_4->value() );
    _doc.setCD_5( _ui->spinBoxCD_5->value() );

    _doc.setAD_1( _ui->spinBoxAD_1->value() );
    _doc.setAD_2( _ui->spinBoxAD_2->value() );
    _doc.setAD_3( _ui->spinBoxAD_3->value() );
    _doc.setAD_4( _ui->spinBoxAD_4->value() );

    _doc.setCL_0( _ui->spinBoxCL_0->value() );
    _doc.setCL_S( _ui->spinBoxCL_S->value() );
    _doc.setCL_1( _ui->spinBoxCL_1->value() );
    _doc.setCL_2( _ui->spinBoxCL_2->value() );

    _doc.setAL_S( _ui->spinBoxAL_S->value() );
    _doc.setAL_1( _ui->spinBoxAL_1->value() );
    _doc.setAL_2( _ui->spinBoxAL_2->value() );

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::recentFile_triggered( int id )
{
    _currentFile = _recentFilesList.at( id );

    readFile( _currentFile );
}
