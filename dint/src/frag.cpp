#include <stdio.h>
#include <math.h>
#include "utilities.h"

double OldFrag(const double x)
{
    double result;

    if ((x > 1.) || (x < 0.))
	Error("OldFrag: invalid x in FragFunction.", PROGRAM_ERROR);

    result = 15./16.*pow(x, -1.5)*(1. - x)*(1. - x);
    return result;
}

double HillFrag(const double x)
{
    double result;

    if ((x > 1.) || (x < 0.))
	Error("HillFrag: invalid x in FragFunction.", PROGRAM_ERROR);

    result = 0.08*exp(2.6*pow(log(1./x),0.5))*pow(1.-x,2.)/
                  (x*pow(log(1./x),0.5));
    return result;
}

double TestFrag(const double x)
{
    double result,dum;

    if ((x > 1.) || (x < 0.))
	Error("TestFrag: invalid x in FragFunction.", PROGRAM_ERROR);

    dum=log(1.e16*x);
    result=pow(10.,16.40245282549585 + (0.972599977555579 + 
      (-0.437688709005956 + (0.07127838644906224 + 
            (-0.0096795444540692 + 
               (0.001074648803851362 + 
                  (-0.0001017698959101458 + 
                     (8.29188862155849e-6 + 
                        (-6.028775483570168e-7 + 
                        (3.722893226065044e-8 - 
                        5.328241092075332e-9*
                        (-14.27185163534489 + 
                        0.4342944819032517*dum))*
                        (-12.58946076125045 + 
                        0.4342944819032517*dum))*
                        (-10.90706988715602 + 
                        0.4342944819032517*dum))*
                      (-9.22467901306159 + 
                        0.4342944819032517*dum))*
                   (-7.542288138967164 + 0.4342944819032517*dum))
    *(-5.859897264872732 + 0.4342944819032517*dum))*
             (-4.1775063907783 + 0.4342944819032517*dum))*
          (-2.495115516683869 + 0.4342944819032517*dum))*
       (-0.812724642589438 + 0.4342944819032517*dum))*
    (0.869666231504994 + 0.4342944819032517*dum));

    return result;
}

double MLLA_25(const double x)
{
    double result,dum;

    if ((x > 1.) || (x < 0.))
	Error("MLLA_25: invalid x in FragFunction.", PROGRAM_ERROR);

    dum=log(5.e15*x);
    result=pow(2.,15.40458956729789 + (0.985611314574832 + 
       (-0.4486531617591206 + (0.07437713380769515 + 
             (-0.01028351361441756 + 
                (0.001162396465975171 + 
                   (-0.0001120792654142042 + 
                      (9.29759848042302e-6 + 
                        (-6.883087600199417e-7 + 
                        (4.326958021115784e-8 - 
                       6.309347416082323e-9*
                       (-14.0009246392473 + 
                       0.4342944819032517*dum))*
                        (-12.34863676471927 + 
                        0.4342944819032517*dum))*
                        (-10.69634889019124 + 
                        0.4342944819032517*dum))*
                       (-9.04406101566321 + 
                        0.4342944819032517*dum))*
                    (-7.391773141135174 + 
                      0.4342944819032517*dum))*
                 (-5.73948526660714 + 0.4342944819032517*dum))*
              (-4.087197392079107 + 0.4342944819032517*dum))*
           (-2.434909517551073 + 0.4342944819032517*dum))*
        (-0.78262164302304 + 0.4342944819032517*dum))*
     (0.869666231504994 + 0.4342944819032517*dum))*
     pow(5.,16.40458956729789 + (0.985611314574832 + 
       (-0.4486531617591206 + (0.07437713380769515 + 
             (-0.01028351361441756 + 
                (0.001162396465975171 + 
                   (-0.0001120792654142042 + 
                      (9.29759848042302e-6 + 
                        (-6.883087600199417e-7 + 
                        (4.326958021115784e-8 - 
                        6.309347416082323e-9*
                        (-14.0009246392473 + 
                        0.4342944819032517*dum))*
                        (-12.34863676471927 + 
                        0.4342944819032517*dum))*
                        (-10.69634889019124 + 
                        0.4342944819032517*dum))*
                       (-9.04406101566321 + 
                         0.4342944819032517*dum))*
                    (-7.391773141135174 + 
                      0.4342944819032517*dum))*
                 (-5.73948526660714 + 0.4342944819032517*dum))*
              (-4.087197392079107 + 0.4342944819032517*dum))*
           (-2.434909517551073 + 0.4342944819032517*dum))*
        (-0.78262164302304 + 0.4342944819032517*dum))*
     (0.869666231504994 + 0.4342944819032517*dum));

    return result;
}

double MLLA_24(const double x)
{
    double result,dum;

    if ((x > 1.) || (x < 0.))
	Error("MLLA_24: invalid x in FragFunction.", PROGRAM_ERROR);

    dum=log(5.e14*x);
    result=pow(2.,14.41151551291054 + (1.031272826827779 + 
       (-0.4887554084149168 + (0.0861742231419955 + 
             (-0.01267862267956894 + 
                (0.001524972879202349 + 
                   (-0.0001564836567815242 + 
                      (0.00001381420881469393 + 
                        (-1.088524574431424e-6 + 
                        (7.278270707633613e-8 - 
                       1.131740588420111e-8*
                       (-13.1009246392473 + 
                       0.4342944819032517*dum))*
                        (-11.54863676471927 + 
                        0.4342944819032517*dum))*
                        (-9.99634889019124 + 
                        0.4342944819032517*dum))*
                       (-8.44406101566321 + 
                        0.4342944819032517*dum))*
                    (-6.891773141135172 + 
                      0.4342944819032517*dum))*
                 (-5.339485266607138 + 0.4342944819032517*dum))*
              (-3.787197392079105 + 0.4342944819032517*dum))*
           (-2.234909517551072 + 0.4342944819032517*dum))*
        (-0.6826216430230394 + 0.4342944819032517*dum))*
     (0.869666231504994 + 0.4342944819032517*dum))*
     pow(5.,15.41151551291054 + (1.031272826827779 + 
       (-0.4887554084149168 + (0.0861742231419955 + 
             (-0.01267862267956894 + 
                (0.001524972879202349 + 
                   (-0.0001564836567815242 + 
                      (0.00001381420881469393 + 
                        (-1.088524574431424e-6 + 
                        (7.278270707633613e-8 - 
                        1.131740588420111e-8*
                        (-13.1009246392473 + 
                        0.4342944819032517*dum))*
                        (-11.54863676471927 + 
                        0.4342944819032517*dum))*
                        (-9.99634889019124 + 
                        0.4342944819032517*dum))*
                       (-8.44406101566321 + 
                         0.4342944819032517*dum))*
                    (-6.891773141135172 + 
                      0.4342944819032517*dum))*
                 (-5.339485266607138 + 0.4342944819032517*dum))*
              (-3.787197392079105 + 0.4342944819032517*dum))*
           (-2.234909517551072 + 0.4342944819032517*dum))*
        (-0.6826216430230394 + 0.4342944819032517*dum))*
     (0.869666231504994 + 0.4342944819032517*dum));

    return result;
}

double MLLA_23(const double x)
{
    double result,dum;

    if ((x > 1.) || (x < 0.))
	Error("MLLA_23: invalid x in FragFunction.", PROGRAM_ERROR);

    dum=log(5.e13*x);
    result=pow(2.,13.41903621081451 + (1.080543174351792 + 
       (-0.5353344158025766 + (0.1007918200125547 + 
             (-0.01584522550357778 + 
                (0.00203634282994057 + 
                   (-0.0002232988627851284 + 
                      (0.00002106422871935973 + 
                        (-1.774021976209115e-6 + 
                        (1.26678984354972e-7 - 
                       2.109673764365339e-8*
                       (-12.2009246392473 + 
                       0.4342944819032517*dum))*
                        (-10.74863676471927 + 
                        0.4342944819032517*dum))*
                        (-9.29634889019124 + 
                        0.4342944819032517*dum))*
                       (-7.844061015663205 + 
                        0.4342944819032517*dum))*
                    (-6.391773141135174 + 
                      0.4342944819032517*dum))*
                 (-4.93948526660714 + 0.4342944819032517*dum))*
              (-3.487197392079106 + 0.4342944819032517*dum))*
           (-2.034909517551073 + 0.4342944819032517*dum))*
        (-0.5826216430230398 + 0.4342944819032517*dum))*
     (0.869666231504994 + 0.4342944819032517*dum))*
     pow(5.,14.4190362108145 + (1.080543174351792 + 
       (-0.5353344158025766 + (0.1007918200125547 + 
             (-0.01584522550357778 + 
                (0.00203634282994057 + 
                   (-0.0002232988627851284 + 
                      (0.00002106422871935973 + 
                        (-1.774021976209115e-6 + 
                        (1.26678984354972e-7 - 
                        2.109673764365339e-8*
                        (-12.2009246392473 + 
                        0.4342944819032517*dum))*
                        (-10.74863676471927 + 
                        0.4342944819032517*dum))*
                        (-9.29634889019124 + 
                        0.4342944819032517*dum))*
                       (-7.844061015663205 + 
                         0.4342944819032517*dum))*
                    (-6.391773141135174 + 
                      0.4342944819032517*dum))*
                 (-4.93948526660714 + 0.4342944819032517*dum))*
              (-3.487197392079106 + 0.4342944819032517*dum))*
           (-2.034909517551073 + 0.4342944819032517*dum))*
        (-0.5826216430230398 + 0.4342944819032517*dum))*
     (0.869666231504994 + 0.4342944819032517*dum));

    return result;
}

double MLLA_22(const double x)
{
    double result,dum;

    if ((x > 1.) || (x < 0.))
	Error("MLLA_22: invalid x in FragFunction.", PROGRAM_ERROR);

    dum=log(5.e12*x);
    result=pow(2.,12.42700515451375 + (1.13410597810389 + 
       (-0.5900360565767645 + (0.1191811135998055 + 
             (-0.02011422129768237 + 
                (0.002774985316661523 + 
                   (-0.000326719986276957 + 
                      (0.00003308906432045379 + 
                        (-2.992669826664713e-6 + 
                        (2.292869774886544e-7 - 
                       4.109421051511541e-8*
                       (-11.3009246392473 + 
                       0.4342944819032517*dum))*
                        (-9.94863676471927 + 
                        0.4342944819032517*dum))*
                        (-8.59634889019124 + 
                        0.4342944819032517*dum))*
                       (-7.244061015663207 + 
                        0.4342944819032517*dum))*
                    (-5.891773141135173 + 
                      0.4342944819032517*dum))*
                 (-4.539485266607139 + 0.4342944819032517*dum))*
              (-3.187197392079106 + 0.4342944819032517*dum))*
           (-1.834909517551073 + 0.4342944819032517*dum))*
        (-0.4826216430230396 + 0.4342944819032517*dum))*
     (0.869666231504994 + 0.4342944819032517*dum))*
     pow(5.,13.42700515451375 + (1.13410597810389 + 
       (-0.5900360565767645 + (0.1191811135998055 + 
             (-0.02011422129768237 + 
                (0.002774985316661523 + 
                   (-0.000326719986276957 + 
                      (0.00003308906432045379 + 
                        (-2.992669826664713e-6 + 
                        (2.292869774886544e-7 - 
                        4.109421051511541e-8*
                        (-11.3009246392473 + 
                        0.4342944819032517*dum))*
                        (-9.94863676471927 + 
                        0.4342944819032517*dum))*
                        (-8.59634889019124 + 
                        0.4342944819032517*dum))*
                       (-7.244061015663207 + 
                         0.4342944819032517*dum))*
                    (-5.891773141135173 + 
                      0.4342944819032517*dum))*
                 (-4.539485266607139 + 0.4342944819032517*dum))*
              (-3.187197392079106 + 0.4342944819032517*dum))*
           (-1.834909517551073 + 0.4342944819032517*dum))*
        (-0.4826216430230396 + 0.4342944819032517*dum))*
     (0.869666231504994 + 0.4342944819032517*dum));

    return result;
}

double Susy_MLLA_25(const double x)
{
    double result,dum;

    if ((x > 1.) || (x < 0.))
	Error("SUSY_MLLA_25: invalid x in FragFunction.", PROGRAM_ERROR);

    dum=log(5.e15*x);
    result=pow(2.,17.80939867175655 + (0.2839116910462308 + 
       (-0.2356852044900653 + (0.02811959068440033 + 
             (-0.003372920093046873 + 
                (0.0003286208445235064 + 
                   (-0.00002939777800753709 + 
                      (2.158754018629821e-6 + 
                        (-1.695451594928554e-7 + 
                        1.096396916569957e-9*
                        (-12.9950665059705 + 
                        0.4342944819032517*dum))*
                        (-11.3649635064041 + 
                        0.4342944819032517*dum))*
                       (-9.73486050683771 + 
                        0.4342944819032517*dum))*
                    (-8.10475750727131 + 
                      0.4342944819032517*dum))*
                 (-6.474654507704915 + 0.4342944819032517*dum))*
              (-4.844551508138517 + 0.4342944819032517*dum))*
           (-3.214448508572119 + 0.4342944819032517*dum))*
        (-1.584345509005722 + 0.4342944819032517*dum))*
     (0.04575749056067511 + 0.4342944819032517*dum))*
     pow(5.,18.80939867175655 + (0.2839116910462308 + 
       (-0.2356852044900653 + (0.02811959068440033 + 
             (-0.003372920093046873 + 
                (0.0003286208445235064 + 
                   (-0.00002939777800753709 + 
                      (2.158754018629821e-6 + 
                        (-1.695451594928554e-7 + 
                        1.096396916569957e-9*
                        (-12.9950665059705 + 
                        0.4342944819032517*dum))*
                        (-11.3649635064041 + 
                        0.4342944819032517*dum))*
                       (-9.73486050683771 + 
                         0.4342944819032517*dum))*
                    (-8.10475750727131 + 0.4342944819032517*dum))*
     (-6.474654507704915 + 0.4342944819032517*dum))*
              (-4.844551508138517 + 0.4342944819032517*dum))*
           (-3.214448508572119 + 0.4342944819032517*dum))*
        (-1.584345509005722 + 0.4342944819032517*dum))*
     (0.04575749056067511 + 0.4342944819032517*dum));

    return result;
}

double Susy_MLLA_24(const double x)
{
    double result,dum;

    if ((x > 1.) || (x < 0.))
	Error("SUSY_MLLA_24: invalid x in FragFunction.", PROGRAM_ERROR);

    dum=log(5.e14*x);
    result=pow(2.,16.77113060518843 + (0.2757875825414864 + 
       (-0.2492517918211629 + (0.03115785196336573 + 
             (-0.003960507732763939 + 
                (0.0004075768109015362 + 
                   (-0.00003875082087547734 + 
                      (3.001698672664923e-6 + 
                        (-2.54680759800193e-7 - 
                        6.061017668092866e-10*
                        (-12.1950665059705 + 
                        0.4342944819032517*dum))*
                        (-10.6649635064041 + 
                        0.4342944819032517*dum))*
                       (-9.13486050683771 + 
                        0.4342944819032517*dum))*
                    (-7.604757507271312 + 
                      0.4342944819032517*dum))*
                 (-6.074654507704915 + 0.4342944819032517*dum))*
              (-4.544551508138517 + 0.4342944819032517*dum))*
           (-3.01444850857212 + 0.4342944819032517*dum))*
        (-1.484345509005722 + 0.4342944819032517*dum))*
     (0.04575749056067511 + 0.4342944819032517*dum))*
     pow(5.,17.77113060518843 + (0.2757875825414864 + 
       (-0.2492517918211629 + (0.03115785196336573 + 
             (-0.003960507732763939 + 
                (0.0004075768109015362 + 
                   (-0.00003875082087547734 + 
                      (3.001698672664923e-6 + 
                        (-2.54680759800193e-7 - 
                        6.061017668092866e-10*
                        (-12.1950665059705 + 
                        0.4342944819032517*dum))*
                        (-10.6649635064041 + 
                        0.4342944819032517*dum))*
                       (-9.13486050683771 + 
                         0.4342944819032517*dum))*
                    (-7.604757507271312 + 
                      0.4342944819032517*dum))*
                 (-6.074654507704915 + 0.4342944819032517*dum))*
              (-4.544551508138517 + 0.4342944819032517*dum))*
           (-3.01444850857212 + 0.4342944819032517*dum))*
        (-1.484345509005722 + 0.4342944819032517*dum))*
     (0.04575749056067511 + 0.4342944819032517*dum));

    return result;
}

double Susy_MLLA_23(const double x)
{
    double result,dum;

    if ((x > 1.) || (x < 0.))
	Error("SUSY_MLLA_23: invalid x in FragFunction.", PROGRAM_ERROR);

    dum=log(5.e13*x);
    result=pow(2.,15.72966406841544 + (0.2650394265463622 + 
       (-0.2643461911608049 + (0.03469445588689251 + 
             (-0.004691489477251425 + 
                (0.0005115097120944895 + 
                   (-0.00005190898995160702 + 
                      (4.25132297772461e-6 + 
                        (-3.930251977808645e-7 - 
                        6.036368834076273e-9*
                        (-11.3950665059705 + 
                        0.4342944819032517*dum))*
                        (-9.96496350640411 + 
                        0.4342944819032517*dum))*
                       (-8.53486050683771 + 
                        0.4342944819032517*dum))*
                    (-7.104757507271313 + 
                      0.4342944819032517*dum))*
                 (-5.674654507704915 + 0.4342944819032517*dum))*
              (-4.244551508138518 + 0.4342944819032517*dum))*
           (-2.81444850857212 + 0.4342944819032517*dum))*
        (-1.384345509005722 + 0.4342944819032517*dum))*
     (0.04575749056067511 + 0.4342944819032517*dum))*
     pow(5.,16.72966406841544 + (0.2650394265463622 + 
       (-0.2643461911608049 + (0.03469445588689251 + 
             (-0.004691489477251425 + 
                (0.0005115097120944895 + 
                   (-0.00005190898995160702 + 
                      (4.25132297772461e-6 + 
                        (-3.930251977808645e-7 - 
                        6.036368834076273e-9*
                        (-11.3950665059705 + 
                        0.4342944819032517*dum))*
                        (-9.96496350640411 + 
                        0.4342944819032517*dum))*
                       (-8.53486050683771 + 
                         0.4342944819032517*dum))*
                    (-7.104757507271313 + 
                      0.4342944819032517*dum))*
                 (-5.674654507704915 + 0.4342944819032517*dum))*
              (-4.244551508138518 + 0.4342944819032517*dum))*
           (-2.81444850857212 + 0.4342944819032517*dum))*
        (-1.384345509005722 + 0.4342944819032517*dum))*
     (0.04575749056067511 + 0.4342944819032517*dum));

    return result;
}

double Susy_MLLA_22(const double x)
{
    double result,dum;

    if ((x > 1.) || (x < 0.))
	Error("SUSY_MLLA_22: invalid x in FragFunction.", PROGRAM_ERROR);

    dum=log(5.e12*x);
    result=pow(2.,14.684456999313 + (0.2510136065483903 + 
       (-0.2812473861506196 + (0.03884100532808183 + 
             (-0.005612423127059197 + 
                (0.0006504629731684842 + 
                   (-0.00007081237970893412 + 
                      (6.145415483685166e-6 + 
                        (-6.258855246298706e-7 - 
                        2.175481457118431e-8*
                        (-10.5950665059705 + 
                        0.4342944819032517*dum))*
                        (-9.26496350640411 + 
                        0.4342944819032517*dum))*
                       (-7.934860506837712 + 
                        0.4342944819032517*dum))*
                    (-6.604757507271314 + 
                      0.4342944819032517*dum))*
                 (-5.274654507704916 + 0.4342944819032517*dum))*
              (-3.944551508138518 + 0.4342944819032517*dum))*
           (-2.61444850857212 + 0.4342944819032517*dum))*
        (-1.284345509005722 + 0.4342944819032517*dum))*
     (0.04575749056067511 + 0.4342944819032517*dum))*
     pow(5.,15.68445699931301 + (0.2510136065483903 + 
       (-0.2812473861506196 + (0.03884100532808183 + 
             (-0.005612423127059197 + 
                (0.0006504629731684842 + 
                   (-0.00007081237970893412 + 
                      (6.145415483685166e-6 + 
                        (-6.258855246298706e-7 - 
                        2.175481457118431e-8*
                        (-10.5950665059705 + 
                        0.4342944819032517*dum))*
                        (-9.26496350640411 + 
                        0.4342944819032517*dum))*
                       (-7.934860506837712 + 
                         0.4342944819032517*dum))*
                    (-6.604757507271314 + 
                      0.4342944819032517*dum))*
                 (-5.274654507704916 + 0.4342944819032517*dum))*
              (-3.944551508138518 + 0.4342944819032517*dum))*
           (-2.61444850857212 + 0.4342944819032517*dum))*
        (-1.284345509005722 + 0.4342944819032517*dum))*
     (0.04575749056067511 + 0.4342944819032517*dum));

    return result;
}

double TDFolded(const double x)
{
    double result,dum;

    if ((x > 1.) || (x < 0.))
	Error("TDFolded: invalid x in FragFunction.", PROGRAM_ERROR);

    dum=log(1.e16*x);
    result=pow(10.,16.40245282549585 + (2.006465566761043 + 
      (-1.2290432682737338 + (0.4053297476358819 + 
            (-0.10906672734507838 + 
               (0.02423162048512474 + 
                  (-0.004566321632592419 + 
                     (0.0007455136443033367 + 
                        (-0.00010727374780647999 + 
                        (0.000013791254716212407 + 
                        (-1.6018349553861322e-6 + 
                       (1.6963430526506736e-7 + 
                       (-1.6505676370801003e-8 + 
                       (1.4852680477947195e-9 + 
                      (-1.2429947252576973e-10 + 
                      (9.721275964488186e-12 + 
                      (-7.135988486015182e-13 + 
                     (4.933475574027309e-14 + 
                     (-3.2288896623602718e-15 + 
                     (1.9690047616867213e-16 - 
                    2.6034108179793842e-17*
                    (-15.113047072392108 + 
                    0.43429448190325176*dum))*
                     (-14.271851635344891 + 
                     0.43429448190325176*dum))*
                     (-13.430656198297674 + 
                     0.43429448190325176*dum))*
                     (-12.589460761250459 + 
                     0.43429448190325176*dum))*
                      (-11.748265324203246 + 
                      0.43429448190325176*dum))*
                      (-10.907069887156027 + 
                      0.43429448190325176*dum))*
                      (-10.065874450108813 + 
                      0.43429448190325176*dum))*
                       (-9.224679013061595 + 
                       0.43429448190325176*dum))*
                       (-8.383483576014381 + 
                       0.43429448190325176*dum))*
                       (-7.542288138967164 + 
                       0.43429448190325176*dum))*
                        (-6.701092701919949 + 
                        0.43429448190325176*dum))*
                        (-5.859897264872733 + 
                        0.43429448190325176*dum))*
                        (-5.018701827825517 + 
                        0.43429448190325176*dum))*
                      (-4.1775063907783005 + 
                        0.43429448190325176*dum))*
                   (-3.3363109537310853 + 
                     0.43429448190325176*dum))*
                (-2.4951155166838697 + 0.43429448190325176*dum))*
             (-1.6539200796366536 + 0.43429448190325176*dum))*
          (-0.812724642589438 + 0.43429448190325176*dum))*
       (0.028470794457777927 + 0.43429448190325176*dum))*
	       (0.8696662315049937 + 0.43429448190325176*dum));

    return result;
}
