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
#ifndef DOCUMENT_H
#define DOCUMENT_H

////////////////////////////////////////////////////////////////////////////////

#include <string>
#include <vector>

#include <QDomDocument>
#include <QDomElement>

#include <defs.h>

#include <CoefDrag.h>
#include <CoefLift.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief The Document class.
 */
class Document
{
public:

    static void saveTextNode( QDomDocument *doc, QDomElement *parent,
                              const char *tag_name, const char *text );

    /**
     * @brief Constructor.
     */
    Document();

    /**
     * @brief Destructor.
     */
    virtual ~Document();

    /** */
    void newEmpty();

    /** */
    bool exportAs( const char *fileName );

    /** */
    bool readFile( const char *fileName );

    /** */
    bool saveFile( const char *fileName );

    double getCoefDrag( double angle_deg ) const;
    double getCoefLift( double angle_deg ) const;

    inline double getCD_0() const { return _cd_0; }
    inline double getCD_1() const { return _cd_1; }
    inline double getCD_2() const { return _cd_2; }
    inline double getCD_3() const { return _cd_3; }
    inline double getCD_4() const { return _cd_4; }
    inline double getCD_5() const { return _cd_5; }

    inline double getAD_1() const { return _ad_1; }
    inline double getAD_2() const { return _ad_2; }
    inline double getAD_3() const { return _ad_3; }
    inline double getAD_4() const { return _ad_4; }

    inline double getCL_S() const { return _cl_s; }
    inline double getCL_0() const { return _cl_0; }
    inline double getCL_1() const { return _cl_1; }
    inline double getCL_2() const { return _cl_2; }

    inline double getAL_S() const { return _al_s; }
    inline double getAL_1() const { return _al_1; }
    inline double getAL_2() const { return _al_2; }

    inline const char* getDragAngles() const { return _drag_angles.c_str(); }
    inline const char* getLiftAngles() const { return _lift_angles.c_str(); }

    inline std::vector< double > getDragAnglesList() const { return _drag_angles_list; }
    inline std::vector< double > getLiftAnglesList() const { return _lift_angles_list; }

    void setCD_0( double cd_0 );
    void setCD_1( double cd_1 );
    void setCD_2( double cd_2 );
    void setCD_3( double cd_3 );
    void setCD_4( double cd_4 );
    void setCD_5( double cd_5 );

    void setAD_1( double ad_1 );
    void setAD_2( double ad_2 );
    void setAD_3( double ad_3 );
    void setAD_4( double ad_4 );

    void setCL_0( double cl_0 );
    void setCL_S( double cl_s );
    void setCL_1( double cl_1 );
    void setCL_2( double cl_2 );

    void setAL_S( double al_s );
    void setAL_1( double al_1 );
    void setAL_2( double al_2 );

    void setDragAngles( const char *angles );
    void setLiftAngles( const char *angles );

    void setDragAnglesList( const std::vector< double > &list );
    void setLiftAnglesList( const std::vector< double > &list );

private:

    CoefDrag _coefDrag;
    CoefLift _coefLift;

    double _cd_0;       ///< [-]
    double _cd_1;       ///< [-]
    double _cd_2;       ///< [-]
    double _cd_3;       ///< [-]
    double _cd_4;       ///< [-]
    double _cd_5;       ///< [-]

    double _ad_1;       ///< [deg]
    double _ad_2;       ///< [deg]
    double _ad_3;       ///< [deg]
    double _ad_4;       ///< [deg]

    double _cl_0;       ///< [-]
    double _cl_s;       ///< [-]
    double _cl_1;       ///< [-]
    double _cl_2;       ///< [-]

    double _al_s;       ///< [deg]
    double _al_1;       ///< [deg]
    double _al_2;       ///< [deg]

    std::string _drag_angles;
    std::string _lift_angles;

    std::vector< double > _drag_angles_list;
    std::vector< double > _lift_angles_list;

    void readAnglesList( const char *angles, std::vector< double > *angles_list );

    void update();
};

////////////////////////////////////////////////////////////////////////////////

#endif // DOCUMENT_H
