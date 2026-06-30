#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002012F0
// Address: 0x2012f0 - 0x201f80
void sub_002012F0_0x2012f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002012F0_0x2012f0");
#endif

    switch (ctx->pc) {
        case 0x2012f0u: goto label_2012f0;
        case 0x2012f4u: goto label_2012f4;
        case 0x2012f8u: goto label_2012f8;
        case 0x2012fcu: goto label_2012fc;
        case 0x201300u: goto label_201300;
        case 0x201304u: goto label_201304;
        case 0x201308u: goto label_201308;
        case 0x20130cu: goto label_20130c;
        case 0x201310u: goto label_201310;
        case 0x201314u: goto label_201314;
        case 0x201318u: goto label_201318;
        case 0x20131cu: goto label_20131c;
        case 0x201320u: goto label_201320;
        case 0x201324u: goto label_201324;
        case 0x201328u: goto label_201328;
        case 0x20132cu: goto label_20132c;
        case 0x201330u: goto label_201330;
        case 0x201334u: goto label_201334;
        case 0x201338u: goto label_201338;
        case 0x20133cu: goto label_20133c;
        case 0x201340u: goto label_201340;
        case 0x201344u: goto label_201344;
        case 0x201348u: goto label_201348;
        case 0x20134cu: goto label_20134c;
        case 0x201350u: goto label_201350;
        case 0x201354u: goto label_201354;
        case 0x201358u: goto label_201358;
        case 0x20135cu: goto label_20135c;
        case 0x201360u: goto label_201360;
        case 0x201364u: goto label_201364;
        case 0x201368u: goto label_201368;
        case 0x20136cu: goto label_20136c;
        case 0x201370u: goto label_201370;
        case 0x201374u: goto label_201374;
        case 0x201378u: goto label_201378;
        case 0x20137cu: goto label_20137c;
        case 0x201380u: goto label_201380;
        case 0x201384u: goto label_201384;
        case 0x201388u: goto label_201388;
        case 0x20138cu: goto label_20138c;
        case 0x201390u: goto label_201390;
        case 0x201394u: goto label_201394;
        case 0x201398u: goto label_201398;
        case 0x20139cu: goto label_20139c;
        case 0x2013a0u: goto label_2013a0;
        case 0x2013a4u: goto label_2013a4;
        case 0x2013a8u: goto label_2013a8;
        case 0x2013acu: goto label_2013ac;
        case 0x2013b0u: goto label_2013b0;
        case 0x2013b4u: goto label_2013b4;
        case 0x2013b8u: goto label_2013b8;
        case 0x2013bcu: goto label_2013bc;
        case 0x2013c0u: goto label_2013c0;
        case 0x2013c4u: goto label_2013c4;
        case 0x2013c8u: goto label_2013c8;
        case 0x2013ccu: goto label_2013cc;
        case 0x2013d0u: goto label_2013d0;
        case 0x2013d4u: goto label_2013d4;
        case 0x2013d8u: goto label_2013d8;
        case 0x2013dcu: goto label_2013dc;
        case 0x2013e0u: goto label_2013e0;
        case 0x2013e4u: goto label_2013e4;
        case 0x2013e8u: goto label_2013e8;
        case 0x2013ecu: goto label_2013ec;
        case 0x2013f0u: goto label_2013f0;
        case 0x2013f4u: goto label_2013f4;
        case 0x2013f8u: goto label_2013f8;
        case 0x2013fcu: goto label_2013fc;
        case 0x201400u: goto label_201400;
        case 0x201404u: goto label_201404;
        case 0x201408u: goto label_201408;
        case 0x20140cu: goto label_20140c;
        case 0x201410u: goto label_201410;
        case 0x201414u: goto label_201414;
        case 0x201418u: goto label_201418;
        case 0x20141cu: goto label_20141c;
        case 0x201420u: goto label_201420;
        case 0x201424u: goto label_201424;
        case 0x201428u: goto label_201428;
        case 0x20142cu: goto label_20142c;
        case 0x201430u: goto label_201430;
        case 0x201434u: goto label_201434;
        case 0x201438u: goto label_201438;
        case 0x20143cu: goto label_20143c;
        case 0x201440u: goto label_201440;
        case 0x201444u: goto label_201444;
        case 0x201448u: goto label_201448;
        case 0x20144cu: goto label_20144c;
        case 0x201450u: goto label_201450;
        case 0x201454u: goto label_201454;
        case 0x201458u: goto label_201458;
        case 0x20145cu: goto label_20145c;
        case 0x201460u: goto label_201460;
        case 0x201464u: goto label_201464;
        case 0x201468u: goto label_201468;
        case 0x20146cu: goto label_20146c;
        case 0x201470u: goto label_201470;
        case 0x201474u: goto label_201474;
        case 0x201478u: goto label_201478;
        case 0x20147cu: goto label_20147c;
        case 0x201480u: goto label_201480;
        case 0x201484u: goto label_201484;
        case 0x201488u: goto label_201488;
        case 0x20148cu: goto label_20148c;
        case 0x201490u: goto label_201490;
        case 0x201494u: goto label_201494;
        case 0x201498u: goto label_201498;
        case 0x20149cu: goto label_20149c;
        case 0x2014a0u: goto label_2014a0;
        case 0x2014a4u: goto label_2014a4;
        case 0x2014a8u: goto label_2014a8;
        case 0x2014acu: goto label_2014ac;
        case 0x2014b0u: goto label_2014b0;
        case 0x2014b4u: goto label_2014b4;
        case 0x2014b8u: goto label_2014b8;
        case 0x2014bcu: goto label_2014bc;
        case 0x2014c0u: goto label_2014c0;
        case 0x2014c4u: goto label_2014c4;
        case 0x2014c8u: goto label_2014c8;
        case 0x2014ccu: goto label_2014cc;
        case 0x2014d0u: goto label_2014d0;
        case 0x2014d4u: goto label_2014d4;
        case 0x2014d8u: goto label_2014d8;
        case 0x2014dcu: goto label_2014dc;
        case 0x2014e0u: goto label_2014e0;
        case 0x2014e4u: goto label_2014e4;
        case 0x2014e8u: goto label_2014e8;
        case 0x2014ecu: goto label_2014ec;
        case 0x2014f0u: goto label_2014f0;
        case 0x2014f4u: goto label_2014f4;
        case 0x2014f8u: goto label_2014f8;
        case 0x2014fcu: goto label_2014fc;
        case 0x201500u: goto label_201500;
        case 0x201504u: goto label_201504;
        case 0x201508u: goto label_201508;
        case 0x20150cu: goto label_20150c;
        case 0x201510u: goto label_201510;
        case 0x201514u: goto label_201514;
        case 0x201518u: goto label_201518;
        case 0x20151cu: goto label_20151c;
        case 0x201520u: goto label_201520;
        case 0x201524u: goto label_201524;
        case 0x201528u: goto label_201528;
        case 0x20152cu: goto label_20152c;
        case 0x201530u: goto label_201530;
        case 0x201534u: goto label_201534;
        case 0x201538u: goto label_201538;
        case 0x20153cu: goto label_20153c;
        case 0x201540u: goto label_201540;
        case 0x201544u: goto label_201544;
        case 0x201548u: goto label_201548;
        case 0x20154cu: goto label_20154c;
        case 0x201550u: goto label_201550;
        case 0x201554u: goto label_201554;
        case 0x201558u: goto label_201558;
        case 0x20155cu: goto label_20155c;
        case 0x201560u: goto label_201560;
        case 0x201564u: goto label_201564;
        case 0x201568u: goto label_201568;
        case 0x20156cu: goto label_20156c;
        case 0x201570u: goto label_201570;
        case 0x201574u: goto label_201574;
        case 0x201578u: goto label_201578;
        case 0x20157cu: goto label_20157c;
        case 0x201580u: goto label_201580;
        case 0x201584u: goto label_201584;
        case 0x201588u: goto label_201588;
        case 0x20158cu: goto label_20158c;
        case 0x201590u: goto label_201590;
        case 0x201594u: goto label_201594;
        case 0x201598u: goto label_201598;
        case 0x20159cu: goto label_20159c;
        case 0x2015a0u: goto label_2015a0;
        case 0x2015a4u: goto label_2015a4;
        case 0x2015a8u: goto label_2015a8;
        case 0x2015acu: goto label_2015ac;
        case 0x2015b0u: goto label_2015b0;
        case 0x2015b4u: goto label_2015b4;
        case 0x2015b8u: goto label_2015b8;
        case 0x2015bcu: goto label_2015bc;
        case 0x2015c0u: goto label_2015c0;
        case 0x2015c4u: goto label_2015c4;
        case 0x2015c8u: goto label_2015c8;
        case 0x2015ccu: goto label_2015cc;
        case 0x2015d0u: goto label_2015d0;
        case 0x2015d4u: goto label_2015d4;
        case 0x2015d8u: goto label_2015d8;
        case 0x2015dcu: goto label_2015dc;
        case 0x2015e0u: goto label_2015e0;
        case 0x2015e4u: goto label_2015e4;
        case 0x2015e8u: goto label_2015e8;
        case 0x2015ecu: goto label_2015ec;
        case 0x2015f0u: goto label_2015f0;
        case 0x2015f4u: goto label_2015f4;
        case 0x2015f8u: goto label_2015f8;
        case 0x2015fcu: goto label_2015fc;
        case 0x201600u: goto label_201600;
        case 0x201604u: goto label_201604;
        case 0x201608u: goto label_201608;
        case 0x20160cu: goto label_20160c;
        case 0x201610u: goto label_201610;
        case 0x201614u: goto label_201614;
        case 0x201618u: goto label_201618;
        case 0x20161cu: goto label_20161c;
        case 0x201620u: goto label_201620;
        case 0x201624u: goto label_201624;
        case 0x201628u: goto label_201628;
        case 0x20162cu: goto label_20162c;
        case 0x201630u: goto label_201630;
        case 0x201634u: goto label_201634;
        case 0x201638u: goto label_201638;
        case 0x20163cu: goto label_20163c;
        case 0x201640u: goto label_201640;
        case 0x201644u: goto label_201644;
        case 0x201648u: goto label_201648;
        case 0x20164cu: goto label_20164c;
        case 0x201650u: goto label_201650;
        case 0x201654u: goto label_201654;
        case 0x201658u: goto label_201658;
        case 0x20165cu: goto label_20165c;
        case 0x201660u: goto label_201660;
        case 0x201664u: goto label_201664;
        case 0x201668u: goto label_201668;
        case 0x20166cu: goto label_20166c;
        case 0x201670u: goto label_201670;
        case 0x201674u: goto label_201674;
        case 0x201678u: goto label_201678;
        case 0x20167cu: goto label_20167c;
        case 0x201680u: goto label_201680;
        case 0x201684u: goto label_201684;
        case 0x201688u: goto label_201688;
        case 0x20168cu: goto label_20168c;
        case 0x201690u: goto label_201690;
        case 0x201694u: goto label_201694;
        case 0x201698u: goto label_201698;
        case 0x20169cu: goto label_20169c;
        case 0x2016a0u: goto label_2016a0;
        case 0x2016a4u: goto label_2016a4;
        case 0x2016a8u: goto label_2016a8;
        case 0x2016acu: goto label_2016ac;
        case 0x2016b0u: goto label_2016b0;
        case 0x2016b4u: goto label_2016b4;
        case 0x2016b8u: goto label_2016b8;
        case 0x2016bcu: goto label_2016bc;
        case 0x2016c0u: goto label_2016c0;
        case 0x2016c4u: goto label_2016c4;
        case 0x2016c8u: goto label_2016c8;
        case 0x2016ccu: goto label_2016cc;
        case 0x2016d0u: goto label_2016d0;
        case 0x2016d4u: goto label_2016d4;
        case 0x2016d8u: goto label_2016d8;
        case 0x2016dcu: goto label_2016dc;
        case 0x2016e0u: goto label_2016e0;
        case 0x2016e4u: goto label_2016e4;
        case 0x2016e8u: goto label_2016e8;
        case 0x2016ecu: goto label_2016ec;
        case 0x2016f0u: goto label_2016f0;
        case 0x2016f4u: goto label_2016f4;
        case 0x2016f8u: goto label_2016f8;
        case 0x2016fcu: goto label_2016fc;
        case 0x201700u: goto label_201700;
        case 0x201704u: goto label_201704;
        case 0x201708u: goto label_201708;
        case 0x20170cu: goto label_20170c;
        case 0x201710u: goto label_201710;
        case 0x201714u: goto label_201714;
        case 0x201718u: goto label_201718;
        case 0x20171cu: goto label_20171c;
        case 0x201720u: goto label_201720;
        case 0x201724u: goto label_201724;
        case 0x201728u: goto label_201728;
        case 0x20172cu: goto label_20172c;
        case 0x201730u: goto label_201730;
        case 0x201734u: goto label_201734;
        case 0x201738u: goto label_201738;
        case 0x20173cu: goto label_20173c;
        case 0x201740u: goto label_201740;
        case 0x201744u: goto label_201744;
        case 0x201748u: goto label_201748;
        case 0x20174cu: goto label_20174c;
        case 0x201750u: goto label_201750;
        case 0x201754u: goto label_201754;
        case 0x201758u: goto label_201758;
        case 0x20175cu: goto label_20175c;
        case 0x201760u: goto label_201760;
        case 0x201764u: goto label_201764;
        case 0x201768u: goto label_201768;
        case 0x20176cu: goto label_20176c;
        case 0x201770u: goto label_201770;
        case 0x201774u: goto label_201774;
        case 0x201778u: goto label_201778;
        case 0x20177cu: goto label_20177c;
        case 0x201780u: goto label_201780;
        case 0x201784u: goto label_201784;
        case 0x201788u: goto label_201788;
        case 0x20178cu: goto label_20178c;
        case 0x201790u: goto label_201790;
        case 0x201794u: goto label_201794;
        case 0x201798u: goto label_201798;
        case 0x20179cu: goto label_20179c;
        case 0x2017a0u: goto label_2017a0;
        case 0x2017a4u: goto label_2017a4;
        case 0x2017a8u: goto label_2017a8;
        case 0x2017acu: goto label_2017ac;
        case 0x2017b0u: goto label_2017b0;
        case 0x2017b4u: goto label_2017b4;
        case 0x2017b8u: goto label_2017b8;
        case 0x2017bcu: goto label_2017bc;
        case 0x2017c0u: goto label_2017c0;
        case 0x2017c4u: goto label_2017c4;
        case 0x2017c8u: goto label_2017c8;
        case 0x2017ccu: goto label_2017cc;
        case 0x2017d0u: goto label_2017d0;
        case 0x2017d4u: goto label_2017d4;
        case 0x2017d8u: goto label_2017d8;
        case 0x2017dcu: goto label_2017dc;
        case 0x2017e0u: goto label_2017e0;
        case 0x2017e4u: goto label_2017e4;
        case 0x2017e8u: goto label_2017e8;
        case 0x2017ecu: goto label_2017ec;
        case 0x2017f0u: goto label_2017f0;
        case 0x2017f4u: goto label_2017f4;
        case 0x2017f8u: goto label_2017f8;
        case 0x2017fcu: goto label_2017fc;
        case 0x201800u: goto label_201800;
        case 0x201804u: goto label_201804;
        case 0x201808u: goto label_201808;
        case 0x20180cu: goto label_20180c;
        case 0x201810u: goto label_201810;
        case 0x201814u: goto label_201814;
        case 0x201818u: goto label_201818;
        case 0x20181cu: goto label_20181c;
        case 0x201820u: goto label_201820;
        case 0x201824u: goto label_201824;
        case 0x201828u: goto label_201828;
        case 0x20182cu: goto label_20182c;
        case 0x201830u: goto label_201830;
        case 0x201834u: goto label_201834;
        case 0x201838u: goto label_201838;
        case 0x20183cu: goto label_20183c;
        case 0x201840u: goto label_201840;
        case 0x201844u: goto label_201844;
        case 0x201848u: goto label_201848;
        case 0x20184cu: goto label_20184c;
        case 0x201850u: goto label_201850;
        case 0x201854u: goto label_201854;
        case 0x201858u: goto label_201858;
        case 0x20185cu: goto label_20185c;
        case 0x201860u: goto label_201860;
        case 0x201864u: goto label_201864;
        case 0x201868u: goto label_201868;
        case 0x20186cu: goto label_20186c;
        case 0x201870u: goto label_201870;
        case 0x201874u: goto label_201874;
        case 0x201878u: goto label_201878;
        case 0x20187cu: goto label_20187c;
        case 0x201880u: goto label_201880;
        case 0x201884u: goto label_201884;
        case 0x201888u: goto label_201888;
        case 0x20188cu: goto label_20188c;
        case 0x201890u: goto label_201890;
        case 0x201894u: goto label_201894;
        case 0x201898u: goto label_201898;
        case 0x20189cu: goto label_20189c;
        case 0x2018a0u: goto label_2018a0;
        case 0x2018a4u: goto label_2018a4;
        case 0x2018a8u: goto label_2018a8;
        case 0x2018acu: goto label_2018ac;
        case 0x2018b0u: goto label_2018b0;
        case 0x2018b4u: goto label_2018b4;
        case 0x2018b8u: goto label_2018b8;
        case 0x2018bcu: goto label_2018bc;
        case 0x2018c0u: goto label_2018c0;
        case 0x2018c4u: goto label_2018c4;
        case 0x2018c8u: goto label_2018c8;
        case 0x2018ccu: goto label_2018cc;
        case 0x2018d0u: goto label_2018d0;
        case 0x2018d4u: goto label_2018d4;
        case 0x2018d8u: goto label_2018d8;
        case 0x2018dcu: goto label_2018dc;
        case 0x2018e0u: goto label_2018e0;
        case 0x2018e4u: goto label_2018e4;
        case 0x2018e8u: goto label_2018e8;
        case 0x2018ecu: goto label_2018ec;
        case 0x2018f0u: goto label_2018f0;
        case 0x2018f4u: goto label_2018f4;
        case 0x2018f8u: goto label_2018f8;
        case 0x2018fcu: goto label_2018fc;
        case 0x201900u: goto label_201900;
        case 0x201904u: goto label_201904;
        case 0x201908u: goto label_201908;
        case 0x20190cu: goto label_20190c;
        case 0x201910u: goto label_201910;
        case 0x201914u: goto label_201914;
        case 0x201918u: goto label_201918;
        case 0x20191cu: goto label_20191c;
        case 0x201920u: goto label_201920;
        case 0x201924u: goto label_201924;
        case 0x201928u: goto label_201928;
        case 0x20192cu: goto label_20192c;
        case 0x201930u: goto label_201930;
        case 0x201934u: goto label_201934;
        case 0x201938u: goto label_201938;
        case 0x20193cu: goto label_20193c;
        case 0x201940u: goto label_201940;
        case 0x201944u: goto label_201944;
        case 0x201948u: goto label_201948;
        case 0x20194cu: goto label_20194c;
        case 0x201950u: goto label_201950;
        case 0x201954u: goto label_201954;
        case 0x201958u: goto label_201958;
        case 0x20195cu: goto label_20195c;
        case 0x201960u: goto label_201960;
        case 0x201964u: goto label_201964;
        case 0x201968u: goto label_201968;
        case 0x20196cu: goto label_20196c;
        case 0x201970u: goto label_201970;
        case 0x201974u: goto label_201974;
        case 0x201978u: goto label_201978;
        case 0x20197cu: goto label_20197c;
        case 0x201980u: goto label_201980;
        case 0x201984u: goto label_201984;
        case 0x201988u: goto label_201988;
        case 0x20198cu: goto label_20198c;
        case 0x201990u: goto label_201990;
        case 0x201994u: goto label_201994;
        case 0x201998u: goto label_201998;
        case 0x20199cu: goto label_20199c;
        case 0x2019a0u: goto label_2019a0;
        case 0x2019a4u: goto label_2019a4;
        case 0x2019a8u: goto label_2019a8;
        case 0x2019acu: goto label_2019ac;
        case 0x2019b0u: goto label_2019b0;
        case 0x2019b4u: goto label_2019b4;
        case 0x2019b8u: goto label_2019b8;
        case 0x2019bcu: goto label_2019bc;
        case 0x2019c0u: goto label_2019c0;
        case 0x2019c4u: goto label_2019c4;
        case 0x2019c8u: goto label_2019c8;
        case 0x2019ccu: goto label_2019cc;
        case 0x2019d0u: goto label_2019d0;
        case 0x2019d4u: goto label_2019d4;
        case 0x2019d8u: goto label_2019d8;
        case 0x2019dcu: goto label_2019dc;
        case 0x2019e0u: goto label_2019e0;
        case 0x2019e4u: goto label_2019e4;
        case 0x2019e8u: goto label_2019e8;
        case 0x2019ecu: goto label_2019ec;
        case 0x2019f0u: goto label_2019f0;
        case 0x2019f4u: goto label_2019f4;
        case 0x2019f8u: goto label_2019f8;
        case 0x2019fcu: goto label_2019fc;
        case 0x201a00u: goto label_201a00;
        case 0x201a04u: goto label_201a04;
        case 0x201a08u: goto label_201a08;
        case 0x201a0cu: goto label_201a0c;
        case 0x201a10u: goto label_201a10;
        case 0x201a14u: goto label_201a14;
        case 0x201a18u: goto label_201a18;
        case 0x201a1cu: goto label_201a1c;
        case 0x201a20u: goto label_201a20;
        case 0x201a24u: goto label_201a24;
        case 0x201a28u: goto label_201a28;
        case 0x201a2cu: goto label_201a2c;
        case 0x201a30u: goto label_201a30;
        case 0x201a34u: goto label_201a34;
        case 0x201a38u: goto label_201a38;
        case 0x201a3cu: goto label_201a3c;
        case 0x201a40u: goto label_201a40;
        case 0x201a44u: goto label_201a44;
        case 0x201a48u: goto label_201a48;
        case 0x201a4cu: goto label_201a4c;
        case 0x201a50u: goto label_201a50;
        case 0x201a54u: goto label_201a54;
        case 0x201a58u: goto label_201a58;
        case 0x201a5cu: goto label_201a5c;
        case 0x201a60u: goto label_201a60;
        case 0x201a64u: goto label_201a64;
        case 0x201a68u: goto label_201a68;
        case 0x201a6cu: goto label_201a6c;
        case 0x201a70u: goto label_201a70;
        case 0x201a74u: goto label_201a74;
        case 0x201a78u: goto label_201a78;
        case 0x201a7cu: goto label_201a7c;
        case 0x201a80u: goto label_201a80;
        case 0x201a84u: goto label_201a84;
        case 0x201a88u: goto label_201a88;
        case 0x201a8cu: goto label_201a8c;
        case 0x201a90u: goto label_201a90;
        case 0x201a94u: goto label_201a94;
        case 0x201a98u: goto label_201a98;
        case 0x201a9cu: goto label_201a9c;
        case 0x201aa0u: goto label_201aa0;
        case 0x201aa4u: goto label_201aa4;
        case 0x201aa8u: goto label_201aa8;
        case 0x201aacu: goto label_201aac;
        case 0x201ab0u: goto label_201ab0;
        case 0x201ab4u: goto label_201ab4;
        case 0x201ab8u: goto label_201ab8;
        case 0x201abcu: goto label_201abc;
        case 0x201ac0u: goto label_201ac0;
        case 0x201ac4u: goto label_201ac4;
        case 0x201ac8u: goto label_201ac8;
        case 0x201accu: goto label_201acc;
        case 0x201ad0u: goto label_201ad0;
        case 0x201ad4u: goto label_201ad4;
        case 0x201ad8u: goto label_201ad8;
        case 0x201adcu: goto label_201adc;
        case 0x201ae0u: goto label_201ae0;
        case 0x201ae4u: goto label_201ae4;
        case 0x201ae8u: goto label_201ae8;
        case 0x201aecu: goto label_201aec;
        case 0x201af0u: goto label_201af0;
        case 0x201af4u: goto label_201af4;
        case 0x201af8u: goto label_201af8;
        case 0x201afcu: goto label_201afc;
        case 0x201b00u: goto label_201b00;
        case 0x201b04u: goto label_201b04;
        case 0x201b08u: goto label_201b08;
        case 0x201b0cu: goto label_201b0c;
        case 0x201b10u: goto label_201b10;
        case 0x201b14u: goto label_201b14;
        case 0x201b18u: goto label_201b18;
        case 0x201b1cu: goto label_201b1c;
        case 0x201b20u: goto label_201b20;
        case 0x201b24u: goto label_201b24;
        case 0x201b28u: goto label_201b28;
        case 0x201b2cu: goto label_201b2c;
        case 0x201b30u: goto label_201b30;
        case 0x201b34u: goto label_201b34;
        case 0x201b38u: goto label_201b38;
        case 0x201b3cu: goto label_201b3c;
        case 0x201b40u: goto label_201b40;
        case 0x201b44u: goto label_201b44;
        case 0x201b48u: goto label_201b48;
        case 0x201b4cu: goto label_201b4c;
        case 0x201b50u: goto label_201b50;
        case 0x201b54u: goto label_201b54;
        case 0x201b58u: goto label_201b58;
        case 0x201b5cu: goto label_201b5c;
        case 0x201b60u: goto label_201b60;
        case 0x201b64u: goto label_201b64;
        case 0x201b68u: goto label_201b68;
        case 0x201b6cu: goto label_201b6c;
        case 0x201b70u: goto label_201b70;
        case 0x201b74u: goto label_201b74;
        case 0x201b78u: goto label_201b78;
        case 0x201b7cu: goto label_201b7c;
        case 0x201b80u: goto label_201b80;
        case 0x201b84u: goto label_201b84;
        case 0x201b88u: goto label_201b88;
        case 0x201b8cu: goto label_201b8c;
        case 0x201b90u: goto label_201b90;
        case 0x201b94u: goto label_201b94;
        case 0x201b98u: goto label_201b98;
        case 0x201b9cu: goto label_201b9c;
        case 0x201ba0u: goto label_201ba0;
        case 0x201ba4u: goto label_201ba4;
        case 0x201ba8u: goto label_201ba8;
        case 0x201bacu: goto label_201bac;
        case 0x201bb0u: goto label_201bb0;
        case 0x201bb4u: goto label_201bb4;
        case 0x201bb8u: goto label_201bb8;
        case 0x201bbcu: goto label_201bbc;
        case 0x201bc0u: goto label_201bc0;
        case 0x201bc4u: goto label_201bc4;
        case 0x201bc8u: goto label_201bc8;
        case 0x201bccu: goto label_201bcc;
        case 0x201bd0u: goto label_201bd0;
        case 0x201bd4u: goto label_201bd4;
        case 0x201bd8u: goto label_201bd8;
        case 0x201bdcu: goto label_201bdc;
        case 0x201be0u: goto label_201be0;
        case 0x201be4u: goto label_201be4;
        case 0x201be8u: goto label_201be8;
        case 0x201becu: goto label_201bec;
        case 0x201bf0u: goto label_201bf0;
        case 0x201bf4u: goto label_201bf4;
        case 0x201bf8u: goto label_201bf8;
        case 0x201bfcu: goto label_201bfc;
        case 0x201c00u: goto label_201c00;
        case 0x201c04u: goto label_201c04;
        case 0x201c08u: goto label_201c08;
        case 0x201c0cu: goto label_201c0c;
        case 0x201c10u: goto label_201c10;
        case 0x201c14u: goto label_201c14;
        case 0x201c18u: goto label_201c18;
        case 0x201c1cu: goto label_201c1c;
        case 0x201c20u: goto label_201c20;
        case 0x201c24u: goto label_201c24;
        case 0x201c28u: goto label_201c28;
        case 0x201c2cu: goto label_201c2c;
        case 0x201c30u: goto label_201c30;
        case 0x201c34u: goto label_201c34;
        case 0x201c38u: goto label_201c38;
        case 0x201c3cu: goto label_201c3c;
        case 0x201c40u: goto label_201c40;
        case 0x201c44u: goto label_201c44;
        case 0x201c48u: goto label_201c48;
        case 0x201c4cu: goto label_201c4c;
        case 0x201c50u: goto label_201c50;
        case 0x201c54u: goto label_201c54;
        case 0x201c58u: goto label_201c58;
        case 0x201c5cu: goto label_201c5c;
        case 0x201c60u: goto label_201c60;
        case 0x201c64u: goto label_201c64;
        case 0x201c68u: goto label_201c68;
        case 0x201c6cu: goto label_201c6c;
        case 0x201c70u: goto label_201c70;
        case 0x201c74u: goto label_201c74;
        case 0x201c78u: goto label_201c78;
        case 0x201c7cu: goto label_201c7c;
        case 0x201c80u: goto label_201c80;
        case 0x201c84u: goto label_201c84;
        case 0x201c88u: goto label_201c88;
        case 0x201c8cu: goto label_201c8c;
        case 0x201c90u: goto label_201c90;
        case 0x201c94u: goto label_201c94;
        case 0x201c98u: goto label_201c98;
        case 0x201c9cu: goto label_201c9c;
        case 0x201ca0u: goto label_201ca0;
        case 0x201ca4u: goto label_201ca4;
        case 0x201ca8u: goto label_201ca8;
        case 0x201cacu: goto label_201cac;
        case 0x201cb0u: goto label_201cb0;
        case 0x201cb4u: goto label_201cb4;
        case 0x201cb8u: goto label_201cb8;
        case 0x201cbcu: goto label_201cbc;
        case 0x201cc0u: goto label_201cc0;
        case 0x201cc4u: goto label_201cc4;
        case 0x201cc8u: goto label_201cc8;
        case 0x201cccu: goto label_201ccc;
        case 0x201cd0u: goto label_201cd0;
        case 0x201cd4u: goto label_201cd4;
        case 0x201cd8u: goto label_201cd8;
        case 0x201cdcu: goto label_201cdc;
        case 0x201ce0u: goto label_201ce0;
        case 0x201ce4u: goto label_201ce4;
        case 0x201ce8u: goto label_201ce8;
        case 0x201cecu: goto label_201cec;
        case 0x201cf0u: goto label_201cf0;
        case 0x201cf4u: goto label_201cf4;
        case 0x201cf8u: goto label_201cf8;
        case 0x201cfcu: goto label_201cfc;
        case 0x201d00u: goto label_201d00;
        case 0x201d04u: goto label_201d04;
        case 0x201d08u: goto label_201d08;
        case 0x201d0cu: goto label_201d0c;
        case 0x201d10u: goto label_201d10;
        case 0x201d14u: goto label_201d14;
        case 0x201d18u: goto label_201d18;
        case 0x201d1cu: goto label_201d1c;
        case 0x201d20u: goto label_201d20;
        case 0x201d24u: goto label_201d24;
        case 0x201d28u: goto label_201d28;
        case 0x201d2cu: goto label_201d2c;
        case 0x201d30u: goto label_201d30;
        case 0x201d34u: goto label_201d34;
        case 0x201d38u: goto label_201d38;
        case 0x201d3cu: goto label_201d3c;
        case 0x201d40u: goto label_201d40;
        case 0x201d44u: goto label_201d44;
        case 0x201d48u: goto label_201d48;
        case 0x201d4cu: goto label_201d4c;
        case 0x201d50u: goto label_201d50;
        case 0x201d54u: goto label_201d54;
        case 0x201d58u: goto label_201d58;
        case 0x201d5cu: goto label_201d5c;
        case 0x201d60u: goto label_201d60;
        case 0x201d64u: goto label_201d64;
        case 0x201d68u: goto label_201d68;
        case 0x201d6cu: goto label_201d6c;
        case 0x201d70u: goto label_201d70;
        case 0x201d74u: goto label_201d74;
        case 0x201d78u: goto label_201d78;
        case 0x201d7cu: goto label_201d7c;
        case 0x201d80u: goto label_201d80;
        case 0x201d84u: goto label_201d84;
        case 0x201d88u: goto label_201d88;
        case 0x201d8cu: goto label_201d8c;
        case 0x201d90u: goto label_201d90;
        case 0x201d94u: goto label_201d94;
        case 0x201d98u: goto label_201d98;
        case 0x201d9cu: goto label_201d9c;
        case 0x201da0u: goto label_201da0;
        case 0x201da4u: goto label_201da4;
        case 0x201da8u: goto label_201da8;
        case 0x201dacu: goto label_201dac;
        case 0x201db0u: goto label_201db0;
        case 0x201db4u: goto label_201db4;
        case 0x201db8u: goto label_201db8;
        case 0x201dbcu: goto label_201dbc;
        case 0x201dc0u: goto label_201dc0;
        case 0x201dc4u: goto label_201dc4;
        case 0x201dc8u: goto label_201dc8;
        case 0x201dccu: goto label_201dcc;
        case 0x201dd0u: goto label_201dd0;
        case 0x201dd4u: goto label_201dd4;
        case 0x201dd8u: goto label_201dd8;
        case 0x201ddcu: goto label_201ddc;
        case 0x201de0u: goto label_201de0;
        case 0x201de4u: goto label_201de4;
        case 0x201de8u: goto label_201de8;
        case 0x201decu: goto label_201dec;
        case 0x201df0u: goto label_201df0;
        case 0x201df4u: goto label_201df4;
        case 0x201df8u: goto label_201df8;
        case 0x201dfcu: goto label_201dfc;
        case 0x201e00u: goto label_201e00;
        case 0x201e04u: goto label_201e04;
        case 0x201e08u: goto label_201e08;
        case 0x201e0cu: goto label_201e0c;
        case 0x201e10u: goto label_201e10;
        case 0x201e14u: goto label_201e14;
        case 0x201e18u: goto label_201e18;
        case 0x201e1cu: goto label_201e1c;
        case 0x201e20u: goto label_201e20;
        case 0x201e24u: goto label_201e24;
        case 0x201e28u: goto label_201e28;
        case 0x201e2cu: goto label_201e2c;
        case 0x201e30u: goto label_201e30;
        case 0x201e34u: goto label_201e34;
        case 0x201e38u: goto label_201e38;
        case 0x201e3cu: goto label_201e3c;
        case 0x201e40u: goto label_201e40;
        case 0x201e44u: goto label_201e44;
        case 0x201e48u: goto label_201e48;
        case 0x201e4cu: goto label_201e4c;
        case 0x201e50u: goto label_201e50;
        case 0x201e54u: goto label_201e54;
        case 0x201e58u: goto label_201e58;
        case 0x201e5cu: goto label_201e5c;
        case 0x201e60u: goto label_201e60;
        case 0x201e64u: goto label_201e64;
        case 0x201e68u: goto label_201e68;
        case 0x201e6cu: goto label_201e6c;
        case 0x201e70u: goto label_201e70;
        case 0x201e74u: goto label_201e74;
        case 0x201e78u: goto label_201e78;
        case 0x201e7cu: goto label_201e7c;
        case 0x201e80u: goto label_201e80;
        case 0x201e84u: goto label_201e84;
        case 0x201e88u: goto label_201e88;
        case 0x201e8cu: goto label_201e8c;
        case 0x201e90u: goto label_201e90;
        case 0x201e94u: goto label_201e94;
        case 0x201e98u: goto label_201e98;
        case 0x201e9cu: goto label_201e9c;
        case 0x201ea0u: goto label_201ea0;
        case 0x201ea4u: goto label_201ea4;
        case 0x201ea8u: goto label_201ea8;
        case 0x201eacu: goto label_201eac;
        case 0x201eb0u: goto label_201eb0;
        case 0x201eb4u: goto label_201eb4;
        case 0x201eb8u: goto label_201eb8;
        case 0x201ebcu: goto label_201ebc;
        case 0x201ec0u: goto label_201ec0;
        case 0x201ec4u: goto label_201ec4;
        case 0x201ec8u: goto label_201ec8;
        case 0x201eccu: goto label_201ecc;
        case 0x201ed0u: goto label_201ed0;
        case 0x201ed4u: goto label_201ed4;
        case 0x201ed8u: goto label_201ed8;
        case 0x201edcu: goto label_201edc;
        case 0x201ee0u: goto label_201ee0;
        case 0x201ee4u: goto label_201ee4;
        case 0x201ee8u: goto label_201ee8;
        case 0x201eecu: goto label_201eec;
        case 0x201ef0u: goto label_201ef0;
        case 0x201ef4u: goto label_201ef4;
        case 0x201ef8u: goto label_201ef8;
        case 0x201efcu: goto label_201efc;
        case 0x201f00u: goto label_201f00;
        case 0x201f04u: goto label_201f04;
        case 0x201f08u: goto label_201f08;
        case 0x201f0cu: goto label_201f0c;
        case 0x201f10u: goto label_201f10;
        case 0x201f14u: goto label_201f14;
        case 0x201f18u: goto label_201f18;
        case 0x201f1cu: goto label_201f1c;
        case 0x201f20u: goto label_201f20;
        case 0x201f24u: goto label_201f24;
        case 0x201f28u: goto label_201f28;
        case 0x201f2cu: goto label_201f2c;
        case 0x201f30u: goto label_201f30;
        case 0x201f34u: goto label_201f34;
        case 0x201f38u: goto label_201f38;
        case 0x201f3cu: goto label_201f3c;
        case 0x201f40u: goto label_201f40;
        case 0x201f44u: goto label_201f44;
        case 0x201f48u: goto label_201f48;
        case 0x201f4cu: goto label_201f4c;
        case 0x201f50u: goto label_201f50;
        case 0x201f54u: goto label_201f54;
        case 0x201f58u: goto label_201f58;
        case 0x201f5cu: goto label_201f5c;
        case 0x201f60u: goto label_201f60;
        case 0x201f64u: goto label_201f64;
        case 0x201f68u: goto label_201f68;
        case 0x201f6cu: goto label_201f6c;
        case 0x201f70u: goto label_201f70;
        case 0x201f74u: goto label_201f74;
        case 0x201f78u: goto label_201f78;
        case 0x201f7cu: goto label_201f7c;
        default: break;
    }

    ctx->pc = 0x2012f0u;

label_2012f0:
    // 0x2012f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2012f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2012f4:
    // 0x2012f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2012f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2012f8:
    // 0x2012f8: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2012fc:
    // 0x2012fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2012fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_201300:
    // 0x201300: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_201304:
    // 0x201304: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x201304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_201308:
    // 0x201308: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x201308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_20130c:
    // 0x20130c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201310:
    // 0x201310: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x201310u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_201314:
    // 0x201314: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_201318:
    // 0x201318: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x201318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_20131c:
    // 0x20131c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20131cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_201320:
    // 0x201320: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x201320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_201324:
    // 0x201324: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_201328:
    // 0x201328: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x201328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_20132c:
    // 0x20132c: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x20132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
label_201330:
    // 0x201330: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_201334:
    // 0x201334: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x201334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_201338:
    // 0x201338: 0x2463e1e0  addiu       $v1, $v1, -0x1E20
    ctx->pc = 0x201338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959584));
label_20133c:
    // 0x20133c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_201340:
    // 0x201340: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x201340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_201344:
    // 0x201344: 0x2442e0f0  addiu       $v0, $v0, -0x1F10
    ctx->pc = 0x201344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959344));
label_201348:
    // 0x201348: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x201348u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_20134c:
    // 0x20134c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20134cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_201350:
    // 0x201350: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x201350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201354:
    // 0x201354: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x201354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_201358:
    // 0x201358: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x201358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20135c:
    // 0x20135c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x20135cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_201360:
    // 0x201360: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x201360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201364:
    // 0x201364: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x201364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_201368:
    // 0x201368: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x201368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20136c:
    // 0x20136c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x20136cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_201370:
    // 0x201370: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x201370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201374:
    // 0x201374: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x201374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201378:
    // 0x201378: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x201378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20137c:
    // 0x20137c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_201380:
    if (ctx->pc == 0x201380u) {
        ctx->pc = 0x201380u;
            // 0x201380: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x201384u;
        goto label_201384;
    }
    ctx->pc = 0x20137Cu;
    {
        const bool branch_taken_0x20137c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20137c) {
            ctx->pc = 0x201380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20137Cu;
            // 0x201380: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x201384u;
            goto label_201384;
        }
    }
    ctx->pc = 0x201384u;
label_201384:
    // 0x201384: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x201384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_201388:
    // 0x201388: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x201388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20138c:
    // 0x20138c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20138cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201390:
    // 0x201390: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_201394:
    if (ctx->pc == 0x201394u) {
        ctx->pc = 0x201394u;
            // 0x201394: 0x2482002c  addiu       $v0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->pc = 0x201398u;
        goto label_201398;
    }
    ctx->pc = 0x201390u;
    {
        const bool branch_taken_0x201390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201390u;
            // 0x201394: 0x2482002c  addiu       $v0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201390) {
            ctx->pc = 0x2013A0u;
            goto label_2013a0;
        }
    }
    ctx->pc = 0x201398u;
label_201398:
    // 0x201398: 0x10000003  b           . + 4 + (0x3 << 2)
label_20139c:
    if (ctx->pc == 0x20139Cu) {
        ctx->pc = 0x20139Cu;
            // 0x20139c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x2013A0u;
        goto label_2013a0;
    }
    ctx->pc = 0x201398u;
    {
        const bool branch_taken_0x201398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20139Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201398u;
            // 0x20139c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201398) {
            ctx->pc = 0x2013A8u;
            goto label_2013a8;
        }
    }
    ctx->pc = 0x2013A0u;
label_2013a0:
    // 0x2013a0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2013a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2013a4:
    // 0x2013a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2013a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2013a8:
    // 0x2013a8: 0x3e00008  jr          $ra
label_2013ac:
    if (ctx->pc == 0x2013ACu) {
        ctx->pc = 0x2013ACu;
            // 0x2013ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2013B0u;
        goto label_2013b0;
    }
    ctx->pc = 0x2013A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2013ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2013A8u;
            // 0x2013ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2013B0u;
label_2013b0:
    // 0x2013b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2013b4:
    // 0x2013b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2013b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2013b8:
    // 0x2013b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2013b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2013bc:
    // 0x2013bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2013bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2013c0:
    // 0x2013c0: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_2013c4:
    if (ctx->pc == 0x2013C4u) {
        ctx->pc = 0x2013C4u;
            // 0x2013c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2013C8u;
        goto label_2013c8;
    }
    ctx->pc = 0x2013C0u;
    {
        const bool branch_taken_0x2013c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013c0) {
            ctx->pc = 0x2013C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2013C0u;
            // 0x2013c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201440u;
            goto label_201440;
        }
    }
    ctx->pc = 0x2013C8u;
label_2013c8:
    // 0x2013c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2013c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2013cc:
    // 0x2013cc: 0x2442e1e0  addiu       $v0, $v0, -0x1E20
    ctx->pc = 0x2013ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959584));
label_2013d0:
    // 0x2013d0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2013d4:
    if (ctx->pc == 0x2013D4u) {
        ctx->pc = 0x2013D4u;
            // 0x2013d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2013D8u;
        goto label_2013d8;
    }
    ctx->pc = 0x2013D0u;
    {
        const bool branch_taken_0x2013d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2013D0u;
            // 0x2013d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013d0) {
            ctx->pc = 0x201414u;
            goto label_201414;
        }
    }
    ctx->pc = 0x2013D8u;
label_2013d8:
    // 0x2013d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2013d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2013dc:
    // 0x2013dc: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x2013dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
label_2013e0:
    // 0x2013e0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2013e4:
    if (ctx->pc == 0x2013E4u) {
        ctx->pc = 0x2013E4u;
            // 0x2013e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2013E8u;
        goto label_2013e8;
    }
    ctx->pc = 0x2013E0u;
    {
        const bool branch_taken_0x2013e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2013E0u;
            // 0x2013e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013e0) {
            ctx->pc = 0x201414u;
            goto label_201414;
        }
    }
    ctx->pc = 0x2013E8u;
label_2013e8:
    // 0x2013e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2013e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2013ec:
    // 0x2013ec: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x2013ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_2013f0:
    // 0x2013f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2013f4:
    if (ctx->pc == 0x2013F4u) {
        ctx->pc = 0x2013F4u;
            // 0x2013f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2013F8u;
        goto label_2013f8;
    }
    ctx->pc = 0x2013F0u;
    {
        const bool branch_taken_0x2013f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2013F0u;
            // 0x2013f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013f0) {
            ctx->pc = 0x201414u;
            goto label_201414;
        }
    }
    ctx->pc = 0x2013F8u;
label_2013f8:
    // 0x2013f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2013f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2013fc:
    // 0x2013fc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2013fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_201400:
    // 0x201400: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_201404:
    if (ctx->pc == 0x201404u) {
        ctx->pc = 0x201404u;
            // 0x201404: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x201408u;
        goto label_201408;
    }
    ctx->pc = 0x201400u;
    {
        const bool branch_taken_0x201400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201400u;
            // 0x201404: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201400) {
            ctx->pc = 0x201414u;
            goto label_201414;
        }
    }
    ctx->pc = 0x201408u;
label_201408:
    // 0x201408: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20140c:
    // 0x20140c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_201410:
    // 0x201410: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x201410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_201414:
    // 0x201414: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x201414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_201418:
    // 0x201418: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x201418u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_20141c:
    // 0x20141c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_201420:
    if (ctx->pc == 0x201420u) {
        ctx->pc = 0x201424u;
        goto label_201424;
    }
    ctx->pc = 0x20141Cu;
    {
        const bool branch_taken_0x20141c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20141c) {
            ctx->pc = 0x20143Cu;
            goto label_20143c;
        }
    }
    ctx->pc = 0x201424u;
label_201424:
    // 0x201424: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x201424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_201428:
    // 0x201428: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x201428u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_20142c:
    // 0x20142c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20142cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_201430:
    // 0x201430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201434:
    // 0x201434: 0xc0a7ab4  jal         func_29EAD0
label_201438:
    if (ctx->pc == 0x201438u) {
        ctx->pc = 0x201438u;
            // 0x201438: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x20143Cu;
        goto label_20143c;
    }
    ctx->pc = 0x201434u;
    SET_GPR_U32(ctx, 31, 0x20143Cu);
    ctx->pc = 0x201438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201434u;
            // 0x201438: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20143Cu; }
        if (ctx->pc != 0x20143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20143Cu; }
        if (ctx->pc != 0x20143Cu) { return; }
    }
    ctx->pc = 0x20143Cu;
label_20143c:
    // 0x20143c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20143cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201440:
    // 0x201440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_201444:
    // 0x201444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201448:
    // 0x201448: 0x3e00008  jr          $ra
label_20144c:
    if (ctx->pc == 0x20144Cu) {
        ctx->pc = 0x20144Cu;
            // 0x20144c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x201450u;
        goto label_201450;
    }
    ctx->pc = 0x201448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20144Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201448u;
            // 0x20144c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201450u;
label_201450:
    // 0x201450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_201454:
    // 0x201454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_201458:
    // 0x201458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20145c:
    // 0x20145c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20145cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201460:
    // 0x201460: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_201464:
    if (ctx->pc == 0x201464u) {
        ctx->pc = 0x201464u;
            // 0x201464: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201468u;
        goto label_201468;
    }
    ctx->pc = 0x201460u;
    {
        const bool branch_taken_0x201460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x201460) {
            ctx->pc = 0x201464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201460u;
            // 0x201464: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2014C0u;
            goto label_2014c0;
        }
    }
    ctx->pc = 0x201468u;
label_201468:
    // 0x201468: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20146c:
    // 0x20146c: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x20146cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_201470:
    // 0x201470: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_201474:
    if (ctx->pc == 0x201474u) {
        ctx->pc = 0x201474u;
            // 0x201474: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x201478u;
        goto label_201478;
    }
    ctx->pc = 0x201470u;
    {
        const bool branch_taken_0x201470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201470u;
            // 0x201474: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201470) {
            ctx->pc = 0x201494u;
            goto label_201494;
        }
    }
    ctx->pc = 0x201478u;
label_201478:
    // 0x201478: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20147c:
    // 0x20147c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x20147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_201480:
    // 0x201480: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_201484:
    if (ctx->pc == 0x201484u) {
        ctx->pc = 0x201484u;
            // 0x201484: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x201488u;
        goto label_201488;
    }
    ctx->pc = 0x201480u;
    {
        const bool branch_taken_0x201480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201480u;
            // 0x201484: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201480) {
            ctx->pc = 0x201494u;
            goto label_201494;
        }
    }
    ctx->pc = 0x201488u;
label_201488:
    // 0x201488: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20148c:
    // 0x20148c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_201490:
    // 0x201490: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x201490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_201494:
    // 0x201494: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x201494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_201498:
    // 0x201498: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x201498u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_20149c:
    // 0x20149c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_2014a0:
    if (ctx->pc == 0x2014A0u) {
        ctx->pc = 0x2014A4u;
        goto label_2014a4;
    }
    ctx->pc = 0x20149Cu;
    {
        const bool branch_taken_0x20149c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20149c) {
            ctx->pc = 0x2014BCu;
            goto label_2014bc;
        }
    }
    ctx->pc = 0x2014A4u;
label_2014a4:
    // 0x2014a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2014a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2014a8:
    // 0x2014a8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2014a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2014ac:
    // 0x2014ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2014acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2014b0:
    // 0x2014b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2014b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2014b4:
    // 0x2014b4: 0xc0a7ab4  jal         func_29EAD0
label_2014b8:
    if (ctx->pc == 0x2014B8u) {
        ctx->pc = 0x2014B8u;
            // 0x2014b8: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x2014BCu;
        goto label_2014bc;
    }
    ctx->pc = 0x2014B4u;
    SET_GPR_U32(ctx, 31, 0x2014BCu);
    ctx->pc = 0x2014B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2014B4u;
            // 0x2014b8: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014BCu; }
        if (ctx->pc != 0x2014BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014BCu; }
        if (ctx->pc != 0x2014BCu) { return; }
    }
    ctx->pc = 0x2014BCu;
label_2014bc:
    // 0x2014bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2014bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2014c0:
    // 0x2014c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2014c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2014c4:
    // 0x2014c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2014c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2014c8:
    // 0x2014c8: 0x3e00008  jr          $ra
label_2014cc:
    if (ctx->pc == 0x2014CCu) {
        ctx->pc = 0x2014CCu;
            // 0x2014cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2014D0u;
        goto label_2014d0;
    }
    ctx->pc = 0x2014C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2014CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2014C8u;
            // 0x2014cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2014D0u;
label_2014d0:
    // 0x2014d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2014d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2014d4:
    // 0x2014d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2014d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2014d8:
    // 0x2014d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2014d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2014dc:
    // 0x2014dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2014dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2014e0:
    // 0x2014e0: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_2014e4:
    if (ctx->pc == 0x2014E4u) {
        ctx->pc = 0x2014E4u;
            // 0x2014e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2014E8u;
        goto label_2014e8;
    }
    ctx->pc = 0x2014E0u;
    {
        const bool branch_taken_0x2014e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2014e0) {
            ctx->pc = 0x2014E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2014E0u;
            // 0x2014e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201570u;
            goto label_201570;
        }
    }
    ctx->pc = 0x2014E8u;
label_2014e8:
    // 0x2014e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2014e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2014ec:
    // 0x2014ec: 0x2442e0f0  addiu       $v0, $v0, -0x1F10
    ctx->pc = 0x2014ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959344));
label_2014f0:
    // 0x2014f0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_2014f4:
    if (ctx->pc == 0x2014F4u) {
        ctx->pc = 0x2014F4u;
            // 0x2014f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2014F8u;
        goto label_2014f8;
    }
    ctx->pc = 0x2014F0u;
    {
        const bool branch_taken_0x2014f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2014F0u;
            // 0x2014f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014f0) {
            ctx->pc = 0x201544u;
            goto label_201544;
        }
    }
    ctx->pc = 0x2014F8u;
label_2014f8:
    // 0x2014f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2014f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2014fc:
    // 0x2014fc: 0x2442e1e0  addiu       $v0, $v0, -0x1E20
    ctx->pc = 0x2014fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959584));
label_201500:
    // 0x201500: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_201504:
    if (ctx->pc == 0x201504u) {
        ctx->pc = 0x201504u;
            // 0x201504: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x201508u;
        goto label_201508;
    }
    ctx->pc = 0x201500u;
    {
        const bool branch_taken_0x201500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201500u;
            // 0x201504: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201500) {
            ctx->pc = 0x201544u;
            goto label_201544;
        }
    }
    ctx->pc = 0x201508u;
label_201508:
    // 0x201508: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20150c:
    // 0x20150c: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x20150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
label_201510:
    // 0x201510: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_201514:
    if (ctx->pc == 0x201514u) {
        ctx->pc = 0x201514u;
            // 0x201514: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x201518u;
        goto label_201518;
    }
    ctx->pc = 0x201510u;
    {
        const bool branch_taken_0x201510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201510u;
            // 0x201514: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201510) {
            ctx->pc = 0x201544u;
            goto label_201544;
        }
    }
    ctx->pc = 0x201518u;
label_201518:
    // 0x201518: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20151c:
    // 0x20151c: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x20151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_201520:
    // 0x201520: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_201524:
    if (ctx->pc == 0x201524u) {
        ctx->pc = 0x201524u;
            // 0x201524: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x201528u;
        goto label_201528;
    }
    ctx->pc = 0x201520u;
    {
        const bool branch_taken_0x201520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201520u;
            // 0x201524: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201520) {
            ctx->pc = 0x201544u;
            goto label_201544;
        }
    }
    ctx->pc = 0x201528u;
label_201528:
    // 0x201528: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20152c:
    // 0x20152c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x20152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_201530:
    // 0x201530: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_201534:
    if (ctx->pc == 0x201534u) {
        ctx->pc = 0x201534u;
            // 0x201534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x201538u;
        goto label_201538;
    }
    ctx->pc = 0x201530u;
    {
        const bool branch_taken_0x201530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201530u;
            // 0x201534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201530) {
            ctx->pc = 0x201544u;
            goto label_201544;
        }
    }
    ctx->pc = 0x201538u;
label_201538:
    // 0x201538: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20153c:
    // 0x20153c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_201540:
    // 0x201540: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x201540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_201544:
    // 0x201544: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x201544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_201548:
    // 0x201548: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x201548u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_20154c:
    // 0x20154c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_201550:
    if (ctx->pc == 0x201550u) {
        ctx->pc = 0x201554u;
        goto label_201554;
    }
    ctx->pc = 0x20154Cu;
    {
        const bool branch_taken_0x20154c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20154c) {
            ctx->pc = 0x20156Cu;
            goto label_20156c;
        }
    }
    ctx->pc = 0x201554u;
label_201554:
    // 0x201554: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x201554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_201558:
    // 0x201558: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x201558u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_20155c:
    // 0x20155c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20155cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_201560:
    // 0x201560: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201564:
    // 0x201564: 0xc0a7ab4  jal         func_29EAD0
label_201568:
    if (ctx->pc == 0x201568u) {
        ctx->pc = 0x201568u;
            // 0x201568: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x20156Cu;
        goto label_20156c;
    }
    ctx->pc = 0x201564u;
    SET_GPR_U32(ctx, 31, 0x20156Cu);
    ctx->pc = 0x201568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201564u;
            // 0x201568: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20156Cu; }
        if (ctx->pc != 0x20156Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20156Cu; }
        if (ctx->pc != 0x20156Cu) { return; }
    }
    ctx->pc = 0x20156Cu;
label_20156c:
    // 0x20156c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20156cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201570:
    // 0x201570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_201574:
    // 0x201574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201578:
    // 0x201578: 0x3e00008  jr          $ra
label_20157c:
    if (ctx->pc == 0x20157Cu) {
        ctx->pc = 0x20157Cu;
            // 0x20157c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x201580u;
        goto label_201580;
    }
    ctx->pc = 0x201578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201578u;
            // 0x20157c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201580u;
label_201580:
    // 0x201580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_201584:
    // 0x201584: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x201584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201588:
    // 0x201588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20158c:
    // 0x20158c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20158cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201590:
    // 0x201590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_201594:
    // 0x201594: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x201594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201598:
    // 0x201598: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x201598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20159c:
    // 0x20159c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x20159cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2015a0:
    // 0x2015a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2015a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2015a4:
    // 0x2015a4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2015a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2015a8:
    // 0x2015a8: 0x320f809  jalr        $t9
label_2015ac:
    if (ctx->pc == 0x2015ACu) {
        ctx->pc = 0x2015ACu;
            // 0x2015ac: 0x24a5b598  addiu       $a1, $a1, -0x4A68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948248));
        ctx->pc = 0x2015B0u;
        goto label_2015b0;
    }
    ctx->pc = 0x2015A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2015B0u);
        ctx->pc = 0x2015ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2015A8u;
            // 0x2015ac: 0x24a5b598  addiu       $a1, $a1, -0x4A68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948248));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2015B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2015B0u; }
            if (ctx->pc != 0x2015B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2015B0u;
label_2015b0:
    // 0x2015b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2015b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2015b4:
    // 0x2015b4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2015b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2015b8:
    // 0x2015b8: 0x320f809  jalr        $t9
label_2015bc:
    if (ctx->pc == 0x2015BCu) {
        ctx->pc = 0x2015BCu;
            // 0x2015bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2015C0u;
        goto label_2015c0;
    }
    ctx->pc = 0x2015B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2015C0u);
        ctx->pc = 0x2015BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2015B8u;
            // 0x2015bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2015C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2015C0u; }
            if (ctx->pc != 0x2015C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2015C0u;
label_2015c0:
    // 0x2015c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2015c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2015c4:
    // 0x2015c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2015c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2015c8:
    // 0x2015c8: 0x3e00008  jr          $ra
label_2015cc:
    if (ctx->pc == 0x2015CCu) {
        ctx->pc = 0x2015CCu;
            // 0x2015cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2015D0u;
        goto label_2015d0;
    }
    ctx->pc = 0x2015C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2015C8u;
            // 0x2015cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2015D0u;
label_2015d0:
    // 0x2015d0: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2015d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2015d4:
    // 0x2015d4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2015d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2015d8:
    // 0x2015d8: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2015d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2015dc:
    // 0x2015dc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2015dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2015e0:
    // 0x2015e0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2015e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2015e4:
    // 0x2015e4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2015e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2015e8:
    // 0x2015e8: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x2015e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2015ec:
    // 0x2015ec: 0x3e00008  jr          $ra
label_2015f0:
    if (ctx->pc == 0x2015F0u) {
        ctx->pc = 0x2015F0u;
            // 0x2015f0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->pc = 0x2015F4u;
        goto label_2015f4;
    }
    ctx->pc = 0x2015ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2015ECu;
            // 0x2015f0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2015F4u;
label_2015f4:
    // 0x2015f4: 0x0  nop
    ctx->pc = 0x2015f4u;
    // NOP
label_2015f8:
    // 0x2015f8: 0x0  nop
    ctx->pc = 0x2015f8u;
    // NOP
label_2015fc:
    // 0x2015fc: 0x0  nop
    ctx->pc = 0x2015fcu;
    // NOP
label_201600:
    // 0x201600: 0xc4850020  lwc1        $f5, 0x20($a0)
    ctx->pc = 0x201600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_201604:
    // 0x201604: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x201604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201608:
    // 0x201608: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x201608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20160c:
    // 0x20160c: 0xc4870024  lwc1        $f7, 0x24($a0)
    ctx->pc = 0x20160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_201610:
    // 0x201610: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x201610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_201614:
    // 0x201614: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x201614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_201618:
    // 0x201618: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x201618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20161c:
    // 0x20161c: 0x46000905  abs.s       $f4, $f1
    ctx->pc = 0x20161cu;
    ctx->f[4] = FPU_ABS_S(ctx->f[1]);
label_201620:
    // 0x201620: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x201620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201624:
    // 0x201624: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x201624u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_201628:
    // 0x201628: 0x460008c5  abs.s       $f3, $f1
    ctx->pc = 0x201628u;
    ctx->f[3] = FPU_ABS_S(ctx->f[1]);
label_20162c:
    // 0x20162c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x20162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201630:
    // 0x201630: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x201630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_201634:
    // 0x201634: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x201634u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
label_201638:
    // 0x201638: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x201638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20163c:
    // 0x20163c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x20163cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_201640:
    // 0x201640: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x201640u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_201644:
    // 0x201644: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x201644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_201648:
    // 0x201648: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x201648u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_20164c:
    // 0x20164c: 0x46002b85  abs.s       $f14, $f5
    ctx->pc = 0x20164cu;
    ctx->f[14] = FPU_ABS_S(ctx->f[5]);
label_201650:
    // 0x201650: 0xc4a50014  lwc1        $f5, 0x14($a1)
    ctx->pc = 0x201650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_201654:
    // 0x201654: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x201654u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_201658:
    // 0x201658: 0x46002b45  abs.s       $f13, $f5
    ctx->pc = 0x201658u;
    ctx->f[13] = FPU_ABS_S(ctx->f[5]);
label_20165c:
    // 0x20165c: 0xc4a50018  lwc1        $f5, 0x18($a1)
    ctx->pc = 0x20165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_201660:
    // 0x201660: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x201660u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_201664:
    // 0x201664: 0x46002b05  abs.s       $f12, $f5
    ctx->pc = 0x201664u;
    ctx->f[12] = FPU_ABS_S(ctx->f[5]);
label_201668:
    // 0x201668: 0xc4a5001c  lwc1        $f5, 0x1C($a1)
    ctx->pc = 0x201668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20166c:
    // 0x20166c: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x20166cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_201670:
    // 0x201670: 0x46002ac5  abs.s       $f11, $f5
    ctx->pc = 0x201670u;
    ctx->f[11] = FPU_ABS_S(ctx->f[5]);
label_201674:
    // 0x201674: 0xc4a50020  lwc1        $f5, 0x20($a1)
    ctx->pc = 0x201674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_201678:
    // 0x201678: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x201678u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_20167c:
    // 0x20167c: 0x46002a85  abs.s       $f10, $f5
    ctx->pc = 0x20167cu;
    ctx->f[10] = FPU_ABS_S(ctx->f[5]);
label_201680:
    // 0x201680: 0xc4a50024  lwc1        $f5, 0x24($a1)
    ctx->pc = 0x201680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_201684:
    // 0x201684: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x201684u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_201688:
    // 0x201688: 0x46002a45  abs.s       $f9, $f5
    ctx->pc = 0x201688u;
    ctx->f[9] = FPU_ABS_S(ctx->f[5]);
label_20168c:
    // 0x20168c: 0xc4a50028  lwc1        $f5, 0x28($a1)
    ctx->pc = 0x20168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_201690:
    // 0x201690: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x201690u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_201694:
    // 0x201694: 0x46002a05  abs.s       $f8, $f5
    ctx->pc = 0x201694u;
    ctx->f[8] = FPU_ABS_S(ctx->f[5]);
label_201698:
    // 0x201698: 0xc4a5002c  lwc1        $f5, 0x2C($a1)
    ctx->pc = 0x201698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20169c:
    // 0x20169c: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x20169cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_2016a0:
    // 0x2016a0: 0x460029c5  abs.s       $f7, $f5
    ctx->pc = 0x2016a0u;
    ctx->f[7] = FPU_ABS_S(ctx->f[5]);
label_2016a4:
    // 0x2016a4: 0x460e2100  add.s       $f4, $f4, $f14
    ctx->pc = 0x2016a4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[14]);
label_2016a8:
    // 0x2016a8: 0x46005140  add.s       $f5, $f10, $f0
    ctx->pc = 0x2016a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
label_2016ac:
    // 0x2016ac: 0x46052180  add.s       $f6, $f4, $f5
    ctx->pc = 0x2016acu;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_2016b0:
    // 0x2016b0: 0x460d18c0  add.s       $f3, $f3, $f13
    ctx->pc = 0x2016b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
label_2016b4:
    // 0x2016b4: 0x46004900  add.s       $f4, $f9, $f0
    ctx->pc = 0x2016b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_2016b8:
    // 0x2016b8: 0x46041940  add.s       $f5, $f3, $f4
    ctx->pc = 0x2016b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2016bc:
    // 0x2016bc: 0x460040c0  add.s       $f3, $f8, $f0
    ctx->pc = 0x2016bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_2016c0:
    // 0x2016c0: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x2016c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_2016c4:
    // 0x2016c4: 0x46031280  add.s       $f10, $f2, $f3
    ctx->pc = 0x2016c4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2016c8:
    // 0x2016c8: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x2016c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
label_2016cc:
    // 0x2016cc: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x2016ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_2016d0:
    // 0x2016d0: 0x46000a40  add.s       $f9, $f1, $f0
    ctx->pc = 0x2016d0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2016d4:
    // 0x2016d4: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x2016d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2016d8:
    // 0x2016d8: 0x460030c7  neg.s       $f3, $f6
    ctx->pc = 0x2016d8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[6]);
label_2016dc:
    // 0x2016dc: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x2016dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2016e0:
    // 0x2016e0: 0x46002907  neg.s       $f4, $f5
    ctx->pc = 0x2016e0u;
    ctx->f[4] = FPU_NEG_S(ctx->f[5]);
label_2016e4:
    // 0x2016e4: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x2016e4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_2016e8:
    // 0x2016e8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2016e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2016ec:
    // 0x2016ec: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2016ecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_2016f0:
    // 0x2016f0: 0x46012080  add.s       $f2, $f4, $f1
    ctx->pc = 0x2016f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2016f4:
    // 0x2016f4: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2016f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2016f8:
    // 0x2016f8: 0x46005207  neg.s       $f8, $f10
    ctx->pc = 0x2016f8u;
    ctx->f[8] = FPU_NEG_S(ctx->f[10]);
label_2016fc:
    // 0x2016fc: 0x460049c7  neg.s       $f7, $f9
    ctx->pc = 0x2016fcu;
    ctx->f[7] = FPU_NEG_S(ctx->f[9]);
label_201700:
    // 0x201700: 0x46005100  add.s       $f4, $f10, $f0
    ctx->pc = 0x201700u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
label_201704:
    // 0x201704: 0x46004040  add.s       $f1, $f8, $f0
    ctx->pc = 0x201704u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_201708:
    // 0x201708: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x201708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20170c:
    // 0x20170c: 0xe4c60010  swc1        $f6, 0x10($a2)
    ctx->pc = 0x20170cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_201710:
    // 0x201710: 0xe4c50014  swc1        $f5, 0x14($a2)
    ctx->pc = 0x201710u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_201714:
    // 0x201714: 0xe4c40018  swc1        $f4, 0x18($a2)
    ctx->pc = 0x201714u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_201718:
    // 0x201718: 0x46004900  add.s       $f4, $f9, $f0
    ctx->pc = 0x201718u;
    ctx->f[4] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_20171c:
    // 0x20171c: 0xe4c4001c  swc1        $f4, 0x1C($a2)
    ctx->pc = 0x20171cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_201720:
    // 0x201720: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x201720u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_201724:
    // 0x201724: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x201724u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_201728:
    // 0x201728: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x201728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_20172c:
    // 0x20172c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x20172cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_201730:
    // 0x201730: 0x3e00008  jr          $ra
label_201734:
    if (ctx->pc == 0x201734u) {
        ctx->pc = 0x201734u;
            // 0x201734: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->pc = 0x201738u;
        goto label_201738;
    }
    ctx->pc = 0x201730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201730u;
            // 0x201734: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201738u;
label_201738:
    // 0x201738: 0x0  nop
    ctx->pc = 0x201738u;
    // NOP
label_20173c:
    // 0x20173c: 0x0  nop
    ctx->pc = 0x20173cu;
    // NOP
label_201740:
    // 0x201740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_201744:
    // 0x201744: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201748:
    // 0x201748: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x201748u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
label_20174c:
    // 0x20174c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x20174cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_201750:
    // 0x201750: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x201750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201754:
    // 0x201754: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x201754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201758:
    // 0x201758: 0x6a4824  and         $t1, $v1, $t2
    ctx->pc = 0x201758u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_20175c:
    // 0x20175c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x20175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_201760:
    // 0x201760: 0xea4024  and         $t0, $a3, $t2
    ctx->pc = 0x201760u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
label_201764:
    // 0x201764: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x201764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_201768:
    // 0x201768: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x201768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_20176c:
    // 0x20176c: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x20176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201770:
    // 0x201770: 0x6a3824  and         $a3, $v1, $t2
    ctx->pc = 0x201770u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_201774:
    // 0x201774: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x201774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201778:
    // 0x201778: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x201778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_20177c:
    // 0x20177c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x20177cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_201780:
    // 0x201780: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x201780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_201784:
    // 0x201784: 0x6a2024  and         $a0, $v1, $t2
    ctx->pc = 0x201784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_201788:
    // 0x201788: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x201788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20178c:
    // 0x20178c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20178cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_201790:
    // 0x201790: 0xa91826  xor         $v1, $a1, $t1
    ctx->pc = 0x201790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
label_201794:
    // 0x201794: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x201794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_201798:
    // 0x201798: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x201798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20179c:
    // 0x20179c: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x20179cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
label_2017a0:
    // 0x2017a0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2017a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2017a4:
    // 0x2017a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2017a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2017a8:
    // 0x2017a8: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x2017a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
label_2017ac:
    // 0x2017ac: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2017acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2017b0:
    // 0x2017b0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2017b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2017b4:
    // 0x2017b4: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2017b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_2017b8:
    // 0x2017b8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2017b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_2017bc:
    // 0x2017bc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2017bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2017c0:
    // 0x2017c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2017c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2017c4:
    // 0x2017c4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_2017c8:
    if (ctx->pc == 0x2017C8u) {
        ctx->pc = 0x2017C8u;
            // 0x2017c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2017CCu;
        goto label_2017cc;
    }
    ctx->pc = 0x2017C4u;
    {
        const bool branch_taken_0x2017c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2017c4) {
            ctx->pc = 0x2017C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2017C4u;
            // 0x2017c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2017D0u;
            goto label_2017d0;
        }
    }
    ctx->pc = 0x2017CCu;
label_2017cc:
    // 0x2017cc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2017ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2017d0:
    // 0x2017d0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2017d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2017d4:
    // 0x2017d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2017d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2017d8:
    // 0x2017d8: 0x0  nop
    ctx->pc = 0x2017d8u;
    // NOP
label_2017dc:
    // 0x2017dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2017dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2017e0:
    // 0x2017e0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_2017e4:
    if (ctx->pc == 0x2017E4u) {
        ctx->pc = 0x2017E4u;
            // 0x2017e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2017E8u;
        goto label_2017e8;
    }
    ctx->pc = 0x2017E0u;
    {
        const bool branch_taken_0x2017e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2017e0) {
            ctx->pc = 0x2017E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2017E0u;
            // 0x2017e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2017ECu;
            goto label_2017ec;
        }
    }
    ctx->pc = 0x2017E8u;
label_2017e8:
    // 0x2017e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2017e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2017ec:
    // 0x2017ec: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2017ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2017f0:
    // 0x2017f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2017f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2017f4:
    // 0x2017f4: 0x0  nop
    ctx->pc = 0x2017f4u;
    // NOP
label_2017f8:
    // 0x2017f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2017f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2017fc:
    // 0x2017fc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_201800:
    if (ctx->pc == 0x201800u) {
        ctx->pc = 0x201800u;
            // 0x201800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201804u;
        goto label_201804;
    }
    ctx->pc = 0x2017FCu;
    {
        const bool branch_taken_0x2017fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2017fc) {
            ctx->pc = 0x201800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2017FCu;
            // 0x201800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201808u;
            goto label_201808;
        }
    }
    ctx->pc = 0x201804u;
label_201804:
    // 0x201804: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x201804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201808:
    // 0x201808: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x201808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20180c:
    // 0x20180c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20180cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_201810:
    // 0x201810: 0x0  nop
    ctx->pc = 0x201810u;
    // NOP
label_201814:
    // 0x201814: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x201814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201818:
    // 0x201818: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_20181c:
    if (ctx->pc == 0x20181Cu) {
        ctx->pc = 0x20181Cu;
            // 0x20181c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x201820u;
        goto label_201820;
    }
    ctx->pc = 0x201818u;
    {
        const bool branch_taken_0x201818 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201818u;
            // 0x20181c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201818) {
            ctx->pc = 0x201824u;
            goto label_201824;
        }
    }
    ctx->pc = 0x201820u;
label_201820:
    // 0x201820: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x201820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201824:
    // 0x201824: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x201824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_201828:
    // 0x201828: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x201828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_20182c:
    // 0x20182c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x20182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_201830:
    // 0x201830: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x201830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_201834:
    // 0x201834: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x201834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_201838:
    // 0x201838: 0x3063000e  andi        $v1, $v1, 0xE
    ctx->pc = 0x201838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
label_20183c:
    // 0x20183c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x20183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201840:
    // 0x201840: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x201840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_201844:
    // 0x201844: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x201844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_201848:
    // 0x201848: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x201848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20184c:
    // 0x20184c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x20184cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_201850:
    // 0x201850: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x201850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201854:
    // 0x201854: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x201854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_201858:
    // 0x201858: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x201858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_20185c:
    // 0x20185c: 0x3e00008  jr          $ra
label_201860:
    if (ctx->pc == 0x201860u) {
        ctx->pc = 0x201860u;
            // 0x201860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x201864u;
        goto label_201864;
    }
    ctx->pc = 0x20185Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20185Cu;
            // 0x201860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201864u;
label_201864:
    // 0x201864: 0x0  nop
    ctx->pc = 0x201864u;
    // NOP
label_201868:
    // 0x201868: 0x0  nop
    ctx->pc = 0x201868u;
    // NOP
label_20186c:
    // 0x20186c: 0x0  nop
    ctx->pc = 0x20186cu;
    // NOP
label_201870:
    // 0x201870: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x201870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_201874:
    // 0x201874: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x201874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_201878:
    // 0x201878: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x201878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_20187c:
    // 0x20187c: 0x3e00008  jr          $ra
label_201880:
    if (ctx->pc == 0x201880u) {
        ctx->pc = 0x201880u;
            // 0x201880: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x201884u;
        goto label_201884;
    }
    ctx->pc = 0x20187Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20187Cu;
            // 0x201880: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201884u;
label_201884:
    // 0x201884: 0x0  nop
    ctx->pc = 0x201884u;
    // NOP
label_201888:
    // 0x201888: 0x0  nop
    ctx->pc = 0x201888u;
    // NOP
label_20188c:
    // 0x20188c: 0x0  nop
    ctx->pc = 0x20188cu;
    // NOP
label_201890:
    // 0x201890: 0x24c8ffff  addiu       $t0, $a2, -0x1
    ctx->pc = 0x201890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_201894:
    // 0x201894: 0x500001c  bltz        $t0, . + 4 + (0x1C << 2)
label_201898:
    if (ctx->pc == 0x201898u) {
        ctx->pc = 0x20189Cu;
        goto label_20189c;
    }
    ctx->pc = 0x201894u;
    {
        const bool branch_taken_0x201894 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x201894) {
            ctx->pc = 0x201908u;
            goto label_201908;
        }
    }
    ctx->pc = 0x20189Cu;
label_20189c:
    // 0x20189c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x20189cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_2018a0:
    // 0x2018a0: 0x24c6dcc0  addiu       $a2, $a2, -0x2340
    ctx->pc = 0x2018a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958272));
label_2018a4:
    // 0x2018a4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2018a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2018a8:
    // 0x2018a8: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x2018a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2018ac:
    // 0x2018ac: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2018acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2018b0:
    // 0x2018b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2018b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2018b4:
    // 0x2018b4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2018b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2018b8:
    // 0x2018b8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2018b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2018bc:
    // 0x2018bc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2018bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2018c0:
    // 0x2018c0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2018c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2018c4:
    // 0x2018c4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2018c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2018c8:
    // 0x2018c8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2018c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2018cc:
    // 0x2018cc: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x2018ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2018d0:
    // 0x2018d0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2018d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2018d4:
    // 0x2018d4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2018d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2018d8:
    // 0x2018d8: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x2018d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_2018dc:
    // 0x2018dc: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x2018dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2018e0:
    // 0x2018e0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2018e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2018e4:
    // 0x2018e4: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x2018e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2018e8:
    // 0x2018e8: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x2018e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2018ec:
    // 0x2018ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2018ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2018f0:
    // 0x2018f0: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x2018f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_2018f4:
    // 0x2018f4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2018f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2018f8:
    // 0x2018f8: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x2018f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_2018fc:
    // 0x2018fc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2018fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_201900:
    // 0x201900: 0x501ffe8  bgez        $t0, . + 4 + (-0x18 << 2)
label_201904:
    if (ctx->pc == 0x201904u) {
        ctx->pc = 0x201904u;
            // 0x201904: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->pc = 0x201908u;
        goto label_201908;
    }
    ctx->pc = 0x201900u;
    {
        const bool branch_taken_0x201900 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x201904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201900u;
            // 0x201904: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201900) {
            ctx->pc = 0x2018A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2018a4;
        }
    }
    ctx->pc = 0x201908u;
label_201908:
    // 0x201908: 0x3e00008  jr          $ra
label_20190c:
    if (ctx->pc == 0x20190Cu) {
        ctx->pc = 0x201910u;
        goto label_201910;
    }
    ctx->pc = 0x201908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201910u;
label_201910:
    // 0x201910: 0x3e00008  jr          $ra
label_201914:
    if (ctx->pc == 0x201914u) {
        ctx->pc = 0x201914u;
            // 0x201914: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x201918u;
        goto label_201918;
    }
    ctx->pc = 0x201910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201910u;
            // 0x201914: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201918u;
label_201918:
    // 0x201918: 0x0  nop
    ctx->pc = 0x201918u;
    // NOP
label_20191c:
    // 0x20191c: 0x0  nop
    ctx->pc = 0x20191cu;
    // NOP
label_201920:
    // 0x201920: 0xc4880020  lwc1        $f8, 0x20($a0)
    ctx->pc = 0x201920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_201924:
    // 0x201924: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x201924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_201928:
    // 0x201928: 0xc4890024  lwc1        $f9, 0x24($a0)
    ctx->pc = 0x201928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_20192c:
    // 0x20192c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20192cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201930:
    // 0x201930: 0xc48a0028  lwc1        $f10, 0x28($a0)
    ctx->pc = 0x201930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_201934:
    // 0x201934: 0x2463dd40  addiu       $v1, $v1, -0x22C0
    ctx->pc = 0x201934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958400));
label_201938:
    // 0x201938: 0xc48b0010  lwc1        $f11, 0x10($a0)
    ctx->pc = 0x201938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_20193c:
    // 0x20193c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201940:
    // 0x201940: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x201940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_201944:
    // 0x201944: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_201948:
    // 0x201948: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x201948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20194c:
    // 0x20194c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x20194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201950:
    // 0x201950: 0x460249c2  mul.s       $f7, $f9, $f2
    ctx->pc = 0x201950u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_201954:
    // 0x201954: 0x46005942  mul.s       $f5, $f11, $f0
    ctx->pc = 0x201954u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
label_201958:
    // 0x201958: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x201958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20195c:
    // 0x20195c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x20195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201960:
    // 0x201960: 0x46015182  mul.s       $f6, $f10, $f1
    ctx->pc = 0x201960u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
label_201964:
    // 0x201964: 0x46024102  mul.s       $f4, $f8, $f2
    ctx->pc = 0x201964u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_201968:
    // 0x201968: 0x46005082  mul.s       $f2, $f10, $f0
    ctx->pc = 0x201968u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_20196c:
    // 0x20196c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x20196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201970:
    // 0x201970: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x201970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201974:
    // 0x201974: 0x460148c2  mul.s       $f3, $f9, $f1
    ctx->pc = 0x201974u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_201978:
    // 0x201978: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x201978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20197c:
    // 0x20197c: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x20197cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_201980:
    // 0x201980: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x201980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_201984:
    // 0x201984: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x201984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_201988:
    // 0x201988: 0xe4c70004  swc1        $f7, 0x4($a2)
    ctx->pc = 0x201988u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_20198c:
    // 0x20198c: 0xe4c60008  swc1        $f6, 0x8($a2)
    ctx->pc = 0x20198cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_201990:
    // 0x201990: 0xe4c5000c  swc1        $f5, 0xC($a2)
    ctx->pc = 0x201990u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_201994:
    // 0x201994: 0xe4c40010  swc1        $f4, 0x10($a2)
    ctx->pc = 0x201994u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_201998:
    // 0x201998: 0xe4c30014  swc1        $f3, 0x14($a2)
    ctx->pc = 0x201998u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_20199c:
    // 0x20199c: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x20199cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
label_2019a0:
    // 0x2019a0: 0xe4c20018  swc1        $f2, 0x18($a2)
    ctx->pc = 0x2019a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_2019a4:
    // 0x2019a4: 0xe4c1001c  swc1        $f1, 0x1C($a2)
    ctx->pc = 0x2019a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_2019a8:
    // 0x2019a8: 0x441ffe5  bgez        $v0, . + 4 + (-0x1B << 2)
label_2019ac:
    if (ctx->pc == 0x2019ACu) {
        ctx->pc = 0x2019ACu;
            // 0x2019ac: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x2019B0u;
        goto label_2019b0;
    }
    ctx->pc = 0x2019A8u;
    {
        const bool branch_taken_0x2019a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2019ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2019A8u;
            // 0x2019ac: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019a8) {
            ctx->pc = 0x201940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_201940;
        }
    }
    ctx->pc = 0x2019B0u;
label_2019b0:
    // 0x2019b0: 0x3e00008  jr          $ra
label_2019b4:
    if (ctx->pc == 0x2019B4u) {
        ctx->pc = 0x2019B4u;
            // 0x2019b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2019B8u;
        goto label_2019b8;
    }
    ctx->pc = 0x2019B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2019B0u;
            // 0x2019b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2019B8u;
label_2019b8:
    // 0x2019b8: 0x0  nop
    ctx->pc = 0x2019b8u;
    // NOP
label_2019bc:
    // 0x2019bc: 0x0  nop
    ctx->pc = 0x2019bcu;
    // NOP
label_2019c0:
    // 0x2019c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2019c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2019c4:
    // 0x2019c4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x2019c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_2019c8:
    // 0x2019c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2019c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2019cc:
    // 0x2019cc: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x2019ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_2019d0:
    // 0x2019d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2019d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2019d4:
    // 0x2019d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2019d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2019d8:
    // 0x2019d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2019d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2019dc:
    // 0x2019dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2019dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2019e0:
    // 0x2019e0: 0x8d08ea64  lw          $t0, -0x159C($t0)
    ctx->pc = 0x2019e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961764)));
label_2019e4:
    // 0x2019e4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x2019e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_2019e8:
    // 0x2019e8: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x2019e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2019ec:
    // 0x2019ec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2019f0:
    if (ctx->pc == 0x2019F0u) {
        ctx->pc = 0x2019F0u;
            // 0x2019f0: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->pc = 0x2019F4u;
        goto label_2019f4;
    }
    ctx->pc = 0x2019ECu;
    {
        const bool branch_taken_0x2019ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2019F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2019ECu;
            // 0x2019f0: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019ec) {
            ctx->pc = 0x201A1Cu;
            goto label_201a1c;
        }
    }
    ctx->pc = 0x2019F4u;
label_2019f4:
    // 0x2019f4: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x2019f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_2019f8:
    // 0x2019f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2019f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2019fc:
    // 0x2019fc: 0x2463b5b8  addiu       $v1, $v1, -0x4A48
    ctx->pc = 0x2019fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948280));
label_201a00:
    // 0x201a00: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x201a00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_201a04:
    // 0x201a04: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x201a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_201a08:
    // 0x201a08: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x201a08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_201a0c:
    // 0x201a0c: 0x400ac803  .word       0x400AC803                   # mfc0        $t2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x201a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ctx->cop0_perf);
label_201a10:
    // 0x201a10: 0x2503000c  addiu       $v1, $t0, 0xC
    ctx->pc = 0x201a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_201a14:
    // 0x201a14: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x201a14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
label_201a18:
    // 0x201a18: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x201a18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_201a1c:
    // 0x201a1c: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x201a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_201a20:
    // 0x201a20: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x201a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201a24:
    // 0x201a24: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x201a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_201a28:
    // 0x201a28: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x201a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201a2c:
    // 0x201a2c: 0x46030900  add.s       $f4, $f1, $f3
    ctx->pc = 0x201a2cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_201a30:
    // 0x201a30: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x201a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201a34:
    // 0x201a34: 0x46031200  add.s       $f8, $f2, $f3
    ctx->pc = 0x201a34u;
    ctx->f[8] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_201a38:
    // 0x201a38: 0x46030240  add.s       $f9, $f0, $f3
    ctx->pc = 0x201a38u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_201a3c:
    // 0x201a3c: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x201a3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
label_201a40:
    // 0x201a40: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x201a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_201a44:
    // 0x201a44: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x201a44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_201a48:
    // 0x201a48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x201a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_201a4c:
    // 0x201a4c: 0x46004807  neg.s       $f0, $f9
    ctx->pc = 0x201a4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[9]);
label_201a50:
    // 0x201a50: 0x46030a80  add.s       $f10, $f1, $f3
    ctx->pc = 0x201a50u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_201a54:
    // 0x201a54: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x201a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_201a58:
    // 0x201a58: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x201a58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
label_201a5c:
    // 0x201a5c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x201a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_201a60:
    // 0x201a60: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x201a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201a64:
    // 0x201a64: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x201a64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201a68:
    // 0x201a68: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_201a6c:
    if (ctx->pc == 0x201A6Cu) {
        ctx->pc = 0x201A6Cu;
            // 0x201a6c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201A70u;
        goto label_201a70;
    }
    ctx->pc = 0x201A68u;
    {
        const bool branch_taken_0x201a68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201a68) {
            ctx->pc = 0x201A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201A68u;
            // 0x201a6c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201A74u;
            goto label_201a74;
        }
    }
    ctx->pc = 0x201A70u;
label_201a70:
    // 0x201a70: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x201a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_201a74:
    // 0x201a74: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x201a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_201a78:
    // 0x201a78: 0x46034036  c.le.s      $f8, $f3
    ctx->pc = 0x201a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201a7c:
    // 0x201a7c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_201a80:
    if (ctx->pc == 0x201A80u) {
        ctx->pc = 0x201A80u;
            // 0x201a80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201A84u;
        goto label_201a84;
    }
    ctx->pc = 0x201A7Cu;
    {
        const bool branch_taken_0x201a7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201a7c) {
            ctx->pc = 0x201A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201A7Cu;
            // 0x201a80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201A88u;
            goto label_201a88;
        }
    }
    ctx->pc = 0x201A84u;
label_201a84:
    // 0x201a84: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_201a88:
    // 0x201a88: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x201a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201a8c:
    // 0x201a8c: 0x46014836  c.le.s      $f9, $f1
    ctx->pc = 0x201a8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201a90:
    // 0x201a90: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_201a94:
    if (ctx->pc == 0x201A94u) {
        ctx->pc = 0x201A94u;
            // 0x201a94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201A98u;
        goto label_201a98;
    }
    ctx->pc = 0x201A90u;
    {
        const bool branch_taken_0x201a90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201a90) {
            ctx->pc = 0x201A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201A90u;
            // 0x201a94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201A9Cu;
            goto label_201a9c;
        }
    }
    ctx->pc = 0x201A98u;
label_201a98:
    // 0x201a98: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x201a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201a9c:
    // 0x201a9c: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x201a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_201aa0:
    // 0x201aa0: 0x46025036  c.le.s      $f10, $f2
    ctx->pc = 0x201aa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201aa4:
    // 0x201aa4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_201aa8:
    if (ctx->pc == 0x201AA8u) {
        ctx->pc = 0x201AA8u;
            // 0x201aa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x201AACu;
        goto label_201aac;
    }
    ctx->pc = 0x201AA4u;
    {
        const bool branch_taken_0x201aa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x201AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201AA4u;
            // 0x201aa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201aa4) {
            ctx->pc = 0x201AB0u;
            goto label_201ab0;
        }
    }
    ctx->pc = 0x201AACu;
label_201aac:
    // 0x201aac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201ab0:
    // 0x201ab0: 0xc7a70054  lwc1        $f7, 0x54($sp)
    ctx->pc = 0x201ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_201ab4:
    // 0x201ab4: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x201ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
label_201ab8:
    // 0x201ab8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x201ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_201abc:
    // 0x201abc: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x201abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_201ac0:
    // 0x201ac0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x201ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_201ac4:
    // 0x201ac4: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x201ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201ac8:
    // 0x201ac8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_201acc:
    if (ctx->pc == 0x201ACCu) {
        ctx->pc = 0x201ACCu;
            // 0x201acc: 0x3069000e  andi        $t1, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
        ctx->pc = 0x201AD0u;
        goto label_201ad0;
    }
    ctx->pc = 0x201AC8u;
    {
        const bool branch_taken_0x201ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201AC8u;
            // 0x201acc: 0x3069000e  andi        $t1, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ac8) {
            ctx->pc = 0x201AD8u;
            goto label_201ad8;
        }
    }
    ctx->pc = 0x201AD0u;
label_201ad0:
    // 0x201ad0: 0x10000002  b           . + 4 + (0x2 << 2)
label_201ad4:
    if (ctx->pc == 0x201AD4u) {
        ctx->pc = 0x201AD4u;
            // 0x201ad4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x201AD8u;
        goto label_201ad8;
    }
    ctx->pc = 0x201AD0u;
    {
        const bool branch_taken_0x201ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201AD0u;
            // 0x201ad4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ad0) {
            ctx->pc = 0x201ADCu;
            goto label_201adc;
        }
    }
    ctx->pc = 0x201AD8u;
label_201ad8:
    // 0x201ad8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x201ad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201adc:
    // 0x201adc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x201adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201ae0:
    // 0x201ae0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x201ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201ae4:
    // 0x201ae4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_201ae8:
    if (ctx->pc == 0x201AE8u) {
        ctx->pc = 0x201AE8u;
            // 0x201ae8: 0xc7a50050  lwc1        $f5, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->pc = 0x201AECu;
        goto label_201aec;
    }
    ctx->pc = 0x201AE4u;
    {
        const bool branch_taken_0x201ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201AE4u;
            // 0x201ae8: 0xc7a50050  lwc1        $f5, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ae4) {
            ctx->pc = 0x201AF4u;
            goto label_201af4;
        }
    }
    ctx->pc = 0x201AECu;
label_201aec:
    // 0x201aec: 0x10000002  b           . + 4 + (0x2 << 2)
label_201af0:
    if (ctx->pc == 0x201AF0u) {
        ctx->pc = 0x201AF0u;
            // 0x201af0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x201AF4u;
        goto label_201af4;
    }
    ctx->pc = 0x201AECu;
    {
        const bool branch_taken_0x201aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201AECu;
            // 0x201af0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201aec) {
            ctx->pc = 0x201AF8u;
            goto label_201af8;
        }
    }
    ctx->pc = 0x201AF4u;
label_201af4:
    // 0x201af4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x201af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201af8:
    // 0x201af8: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x201af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_201afc:
    // 0x201afc: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x201afcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201b00:
    // 0x201b00: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_201b04:
    if (ctx->pc == 0x201B04u) {
        ctx->pc = 0x201B04u;
            // 0x201b04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201B08u;
        goto label_201b08;
    }
    ctx->pc = 0x201B00u;
    {
        const bool branch_taken_0x201b00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201b00) {
            ctx->pc = 0x201B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201B00u;
            // 0x201b04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201B0Cu;
            goto label_201b0c;
        }
    }
    ctx->pc = 0x201B08u;
label_201b08:
    // 0x201b08: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x201b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201b0c:
    // 0x201b0c: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x201b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201b10:
    // 0x201b10: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x201b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201b14:
    // 0x201b14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_201b18:
    if (ctx->pc == 0x201B18u) {
        ctx->pc = 0x201B18u;
            // 0x201b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x201B1Cu;
        goto label_201b1c;
    }
    ctx->pc = 0x201B14u;
    {
        const bool branch_taken_0x201b14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x201B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201B14u;
            // 0x201b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b14) {
            ctx->pc = 0x201B20u;
            goto label_201b20;
        }
    }
    ctx->pc = 0x201B1Cu;
label_201b1c:
    // 0x201b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201b20:
    // 0x201b20: 0xc4c60014  lwc1        $f6, 0x14($a2)
    ctx->pc = 0x201b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_201b24:
    // 0x201b24: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x201b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_201b28:
    // 0x201b28: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x201b28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_201b2c:
    // 0x201b2c: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x201b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_201b30:
    // 0x201b30: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x201b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_201b34:
    // 0x201b34: 0x46062036  c.le.s      $f4, $f6
    ctx->pc = 0x201b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201b38:
    // 0x201b38: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_201b3c:
    if (ctx->pc == 0x201B3Cu) {
        ctx->pc = 0x201B3Cu;
            // 0x201b3c: 0x3065000e  andi        $a1, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
        ctx->pc = 0x201B40u;
        goto label_201b40;
    }
    ctx->pc = 0x201B38u;
    {
        const bool branch_taken_0x201b38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201B38u;
            // 0x201b3c: 0x3065000e  andi        $a1, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b38) {
            ctx->pc = 0x201B48u;
            goto label_201b48;
        }
    }
    ctx->pc = 0x201B40u;
label_201b40:
    // 0x201b40: 0x10000002  b           . + 4 + (0x2 << 2)
label_201b44:
    if (ctx->pc == 0x201B44u) {
        ctx->pc = 0x201B44u;
            // 0x201b44: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x201B48u;
        goto label_201b48;
    }
    ctx->pc = 0x201B40u;
    {
        const bool branch_taken_0x201b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201B40u;
            // 0x201b44: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b40) {
            ctx->pc = 0x201B4Cu;
            goto label_201b4c;
        }
    }
    ctx->pc = 0x201B48u;
label_201b48:
    // 0x201b48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x201b48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201b4c:
    // 0x201b4c: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x201b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_201b50:
    // 0x201b50: 0x46044036  c.le.s      $f8, $f4
    ctx->pc = 0x201b50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201b54:
    // 0x201b54: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_201b58:
    if (ctx->pc == 0x201B58u) {
        ctx->pc = 0x201B58u;
            // 0x201b58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201B5Cu;
        goto label_201b5c;
    }
    ctx->pc = 0x201B54u;
    {
        const bool branch_taken_0x201b54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201b54) {
            ctx->pc = 0x201B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201B54u;
            // 0x201b58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201B60u;
            goto label_201b60;
        }
    }
    ctx->pc = 0x201B5Cu;
label_201b5c:
    // 0x201b5c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_201b60:
    // 0x201b60: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x201b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_201b64:
    // 0x201b64: 0x46024836  c.le.s      $f9, $f2
    ctx->pc = 0x201b64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201b68:
    // 0x201b68: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_201b6c:
    if (ctx->pc == 0x201B6Cu) {
        ctx->pc = 0x201B6Cu;
            // 0x201b6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201B70u;
        goto label_201b70;
    }
    ctx->pc = 0x201B68u;
    {
        const bool branch_taken_0x201b68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201b68) {
            ctx->pc = 0x201B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201B68u;
            // 0x201b6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201B74u;
            goto label_201b74;
        }
    }
    ctx->pc = 0x201B70u;
label_201b70:
    // 0x201b70: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x201b70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201b74:
    // 0x201b74: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x201b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201b78:
    // 0x201b78: 0x46005036  c.le.s      $f10, $f0
    ctx->pc = 0x201b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201b7c:
    // 0x201b7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_201b80:
    if (ctx->pc == 0x201B80u) {
        ctx->pc = 0x201B80u;
            // 0x201b80: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x201B84u;
        goto label_201b84;
    }
    ctx->pc = 0x201B7Cu;
    {
        const bool branch_taken_0x201b7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x201B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201B7Cu;
            // 0x201b80: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b7c) {
            ctx->pc = 0x201B88u;
            goto label_201b88;
        }
    }
    ctx->pc = 0x201B84u;
label_201b84:
    // 0x201b84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x201b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201b88:
    // 0x201b88: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x201b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_201b8c:
    // 0x201b8c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x201b8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_201b90:
    // 0x201b90: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x201b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_201b94:
    // 0x201b94: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x201b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_201b98:
    // 0x201b98: 0x46073036  c.le.s      $f6, $f7
    ctx->pc = 0x201b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201b9c:
    // 0x201b9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_201ba0:
    if (ctx->pc == 0x201BA0u) {
        ctx->pc = 0x201BA0u;
            // 0x201ba0: 0x306c000e  andi        $t4, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
        ctx->pc = 0x201BA4u;
        goto label_201ba4;
    }
    ctx->pc = 0x201B9Cu;
    {
        const bool branch_taken_0x201b9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201B9Cu;
            // 0x201ba0: 0x306c000e  andi        $t4, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b9c) {
            ctx->pc = 0x201BACu;
            goto label_201bac;
        }
    }
    ctx->pc = 0x201BA4u;
label_201ba4:
    // 0x201ba4: 0x10000002  b           . + 4 + (0x2 << 2)
label_201ba8:
    if (ctx->pc == 0x201BA8u) {
        ctx->pc = 0x201BA8u;
            // 0x201ba8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x201BACu;
        goto label_201bac;
    }
    ctx->pc = 0x201BA4u;
    {
        const bool branch_taken_0x201ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201BA4u;
            // 0x201ba8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ba4) {
            ctx->pc = 0x201BB0u;
            goto label_201bb0;
        }
    }
    ctx->pc = 0x201BACu;
label_201bac:
    // 0x201bac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x201bacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201bb0:
    // 0x201bb0: 0x46052036  c.le.s      $f4, $f5
    ctx->pc = 0x201bb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201bb4:
    // 0x201bb4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_201bb8:
    if (ctx->pc == 0x201BB8u) {
        ctx->pc = 0x201BB8u;
            // 0x201bb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201BBCu;
        goto label_201bbc;
    }
    ctx->pc = 0x201BB4u;
    {
        const bool branch_taken_0x201bb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201bb4) {
            ctx->pc = 0x201BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201BB4u;
            // 0x201bb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201BC0u;
            goto label_201bc0;
        }
    }
    ctx->pc = 0x201BBCu;
label_201bbc:
    // 0x201bbc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_201bc0:
    // 0x201bc0: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x201bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201bc4:
    // 0x201bc4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_201bc8:
    if (ctx->pc == 0x201BC8u) {
        ctx->pc = 0x201BC8u;
            // 0x201bc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201BCCu;
        goto label_201bcc;
    }
    ctx->pc = 0x201BC4u;
    {
        const bool branch_taken_0x201bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201bc4) {
            ctx->pc = 0x201BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201BC4u;
            // 0x201bc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201BD0u;
            goto label_201bd0;
        }
    }
    ctx->pc = 0x201BCCu;
label_201bcc:
    // 0x201bcc: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x201bccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201bd0:
    // 0x201bd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x201bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201bd4:
    // 0x201bd4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_201bd8:
    if (ctx->pc == 0x201BD8u) {
        ctx->pc = 0x201BD8u;
            // 0x201bd8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x201BDCu;
        goto label_201bdc;
    }
    ctx->pc = 0x201BD4u;
    {
        const bool branch_taken_0x201bd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x201BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201BD4u;
            // 0x201bd8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bd4) {
            ctx->pc = 0x201BE0u;
            goto label_201be0;
        }
    }
    ctx->pc = 0x201BDCu;
label_201bdc:
    // 0x201bdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x201bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201be0:
    // 0x201be0: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x201be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_201be4:
    // 0x201be4: 0x310a00ff  andi        $t2, $t0, 0xFF
    ctx->pc = 0x201be4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_201be8:
    // 0x201be8: 0x1634025  or          $t0, $t3, $v1
    ctx->pc = 0x201be8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_201bec:
    // 0x201bec: 0x1484025  or          $t0, $t2, $t0
    ctx->pc = 0x201becu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
label_201bf0:
    // 0x201bf0: 0x12c1824  and         $v1, $t1, $t4
    ctx->pc = 0x201bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
label_201bf4:
    // 0x201bf4: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
label_201bf8:
    if (ctx->pc == 0x201BF8u) {
        ctx->pc = 0x201BF8u;
            // 0x201bf8: 0x3108000e  andi        $t0, $t0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)14);
        ctx->pc = 0x201BFCu;
        goto label_201bfc;
    }
    ctx->pc = 0x201BF4u;
    {
        const bool branch_taken_0x201bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201BF4u;
            // 0x201bf8: 0x3108000e  andi        $t0, $t0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bf4) {
            ctx->pc = 0x201E24u;
            goto label_201e24;
        }
    }
    ctx->pc = 0x201BFCu;
label_201bfc:
    // 0x201bfc: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x201bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
label_201c00:
    // 0x201c00: 0x14600088  bnez        $v1, . + 4 + (0x88 << 2)
label_201c04:
    if (ctx->pc == 0x201C04u) {
        ctx->pc = 0x201C08u;
        goto label_201c08;
    }
    ctx->pc = 0x201C00u;
    {
        const bool branch_taken_0x201c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x201c00) {
            ctx->pc = 0x201E24u;
            goto label_201e24;
        }
    }
    ctx->pc = 0x201C08u;
label_201c08:
    // 0x201c08: 0x1251825  or          $v1, $t1, $a1
    ctx->pc = 0x201c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_201c0c:
    // 0x201c0c: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
label_201c10:
    if (ctx->pc == 0x201C10u) {
        ctx->pc = 0x201C14u;
        goto label_201c14;
    }
    ctx->pc = 0x201C0Cu;
    {
        const bool branch_taken_0x201c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201c0c) {
            ctx->pc = 0x201E24u;
            goto label_201e24;
        }
    }
    ctx->pc = 0x201C14u;
label_201c14:
    // 0x201c14: 0xa81825  or          $v1, $a1, $t0
    ctx->pc = 0x201c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_201c18:
    // 0x201c18: 0x3c0b0060  lui         $t3, 0x60
    ctx->pc = 0x201c18u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)96 << 16));
label_201c1c:
    // 0x201c1c: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x201c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_201c20:
    // 0x201c20: 0x24cd0008  addiu       $t5, $a2, 0x8
    ctx->pc = 0x201c20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_201c24:
    // 0x201c24: 0xc502b5a8  lwc1        $f2, -0x4A58($t0)
    ctx->pc = 0x201c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294948264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_201c28:
    // 0x201c28: 0x12c5025  or          $t2, $t1, $t4
    ctx->pc = 0x201c28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
label_201c2c:
    // 0x201c2c: 0xc561b5ac  lwc1        $f1, -0x4A54($t3)
    ctx->pc = 0x201c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294948268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201c30:
    // 0x201c30: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x201c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
label_201c34:
    // 0x201c34: 0xc4e60010  lwc1        $f6, 0x10($a3)
    ctx->pc = 0x201c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_201c38:
    // 0x201c38: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x201c38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201c3c:
    // 0x201c3c: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x201c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_201c40:
    // 0x201c40: 0x27af0068  addiu       $t7, $sp, 0x68
    ctx->pc = 0x201c40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_201c44:
    // 0x201c44: 0xc500b5b0  lwc1        $f0, -0x4A50($t0)
    ctx->pc = 0x201c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294948272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201c48:
    // 0x201c48: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x201c48u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
label_201c4c:
    // 0x201c4c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x201c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_201c50:
    // 0x201c50: 0x27ae0058  addiu       $t6, $sp, 0x58
    ctx->pc = 0x201c50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_201c54:
    // 0x201c54: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x201c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_201c58:
    // 0x201c58: 0x27ac0048  addiu       $t4, $sp, 0x48
    ctx->pc = 0x201c58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_201c5c:
    // 0x201c5c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x201c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_201c60:
    // 0x201c60: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x201c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201c64:
    // 0x201c64: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x201c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_201c68:
    // 0x201c68: 0x448b2800  mtc1        $t3, $f5
    ctx->pc = 0x201c68u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_201c6c:
    // 0x201c6c: 0x46003886  mov.s       $f2, $f7
    ctx->pc = 0x201c6cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[7]);
label_201c70:
    // 0x201c70: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x201c70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_201c74:
    // 0x201c74: 0x300982d  daddu       $s3, $t8, $zero
    ctx->pc = 0x201c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_201c78:
    // 0x201c78: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x201c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_201c7c:
    // 0x201c7c: 0x1c0882d  daddu       $s1, $t6, $zero
    ctx->pc = 0x201c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_201c80:
    // 0x201c80: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x201c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_201c84:
    // 0x201c84: 0x180c82d  daddu       $t9, $t4, $zero
    ctx->pc = 0x201c84u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_201c88:
    // 0x201c88: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x201c88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_201c8c:
    // 0x201c8c: 0x14b3024  and         $a2, $t2, $t3
    ctx->pc = 0x201c8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
label_201c90:
    // 0x201c90: 0x50c00037  beql        $a2, $zero, . + 4 + (0x37 << 2)
label_201c94:
    if (ctx->pc == 0x201C94u) {
        ctx->pc = 0x201C94u;
            // 0x201c94: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x201C98u;
        goto label_201c98;
    }
    ctx->pc = 0x201C90u;
    {
        const bool branch_taken_0x201c90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x201c90) {
            ctx->pc = 0x201C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201C90u;
            // 0x201c94: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201D70u;
            goto label_201d70;
        }
    }
    ctx->pc = 0x201C98u;
label_201c98:
    // 0x201c98: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x201c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_201c9c:
    // 0x201c9c: 0x12b3024  and         $a2, $t1, $t3
    ctx->pc = 0x201c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 11));
label_201ca0:
    // 0x201ca0: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x201ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_201ca4:
    // 0x201ca4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x201ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201ca8:
    // 0x201ca8: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x201ca8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_201cac:
    // 0x201cac: 0x460328dc  madd.s      $f3, $f5, $f3
    ctx->pc = 0x201cacu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[3]));
label_201cb0:
    // 0x201cb0: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x201cb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_201cb4:
    // 0x201cb4: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x201cb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_201cb8:
    // 0x201cb8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x201cb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_201cbc:
    // 0x201cbc: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x201cbcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[1];
label_201cc0:
    // 0x201cc0: 0x0  nop
    ctx->pc = 0x201cc0u;
    // NOP
label_201cc4:
    // 0x201cc4: 0x0  nop
    ctx->pc = 0x201cc4u;
    // NOP
label_201cc8:
    // 0x201cc8: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_201ccc:
    if (ctx->pc == 0x201CCCu) {
        ctx->pc = 0x201CD0u;
        goto label_201cd0;
    }
    ctx->pc = 0x201CC8u;
    {
        const bool branch_taken_0x201cc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x201cc8) {
            ctx->pc = 0x201CF8u;
            goto label_201cf8;
        }
    }
    ctx->pc = 0x201CD0u;
label_201cd0:
    // 0x201cd0: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x201cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201cd4:
    // 0x201cd4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_201cd8:
    if (ctx->pc == 0x201CD8u) {
        ctx->pc = 0x201CDCu;
        goto label_201cdc;
    }
    ctx->pc = 0x201CD4u;
    {
        const bool branch_taken_0x201cd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x201cd4) {
            ctx->pc = 0x201D10u;
            goto label_201d10;
        }
    }
    ctx->pc = 0x201CDCu;
label_201cdc:
    // 0x201cdc: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x201cdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_201ce0:
    // 0x201ce0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x201ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_201ce4:
    // 0x201ce4: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x201ce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_201ce8:
    // 0x201ce8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x201ce8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_201cec:
    // 0x201cec: 0x460009c6  mov.s       $f7, $f1
    ctx->pc = 0x201cecu;
    ctx->f[7] = FPU_MOV_S(ctx->f[1]);
label_201cf0:
    // 0x201cf0: 0x10000007  b           . + 4 + (0x7 << 2)
label_201cf4:
    if (ctx->pc == 0x201CF4u) {
        ctx->pc = 0x201CF4u;
            // 0x201cf4: 0xe7250000  swc1        $f5, 0x0($t9) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
        ctx->pc = 0x201CF8u;
        goto label_201cf8;
    }
    ctx->pc = 0x201CF0u;
    {
        const bool branch_taken_0x201cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201CF0u;
            // 0x201cf4: 0xe7250000  swc1        $f5, 0x0($t9) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cf0) {
            ctx->pc = 0x201D10u;
            goto label_201d10;
        }
    }
    ctx->pc = 0x201CF8u;
label_201cf8:
    // 0x201cf8: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x201cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201cfc:
    // 0x201cfc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_201d00:
    if (ctx->pc == 0x201D00u) {
        ctx->pc = 0x201D00u;
            // 0x201d00: 0x46000986  mov.s       $f6, $f1 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x201D04u;
        goto label_201d04;
    }
    ctx->pc = 0x201CFCu;
    {
        const bool branch_taken_0x201cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201cfc) {
            ctx->pc = 0x201D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201CFCu;
            // 0x201d00: 0x46000986  mov.s       $f6, $f1 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x201D0Cu;
            goto label_201d0c;
        }
    }
    ctx->pc = 0x201D04u;
label_201d04:
    // 0x201d04: 0x10000001  b           . + 4 + (0x1 << 2)
label_201d08:
    if (ctx->pc == 0x201D08u) {
        ctx->pc = 0x201D0Cu;
        goto label_201d0c;
    }
    ctx->pc = 0x201D04u;
    {
        const bool branch_taken_0x201d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201d04) {
            ctx->pc = 0x201D0Cu;
            goto label_201d0c;
        }
    }
    ctx->pc = 0x201D0Cu;
label_201d0c:
    // 0x201d0c: 0x0  nop
    ctx->pc = 0x201d0cu;
    // NOP
label_201d10:
    // 0x201d10: 0x46073034  c.lt.s      $f6, $f7
    ctx->pc = 0x201d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_201d14:
    // 0x201d14: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_201d18:
    if (ctx->pc == 0x201D18u) {
        ctx->pc = 0x201D1Cu;
        goto label_201d1c;
    }
    ctx->pc = 0x201D14u;
    {
        const bool branch_taken_0x201d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201d14) {
            ctx->pc = 0x201D6Cu;
            goto label_201d6c;
        }
    }
    ctx->pc = 0x201D1Cu;
label_201d1c:
    // 0x201d1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x201d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_201d20:
    // 0x201d20: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x201d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_201d24:
    // 0x201d24: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x201d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_201d28:
    // 0x201d28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x201d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_201d2c:
    // 0x201d2c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x201d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_201d30:
    // 0x201d30: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x201d30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_201d34:
    // 0x201d34: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_201d38:
    if (ctx->pc == 0x201D38u) {
        ctx->pc = 0x201D38u;
            // 0x201d38: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x201D3Cu;
        goto label_201d3c;
    }
    ctx->pc = 0x201D34u;
    {
        const bool branch_taken_0x201d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D34u;
            // 0x201d38: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d34) {
            ctx->pc = 0x201D64u;
            goto label_201d64;
        }
    }
    ctx->pc = 0x201D3Cu;
label_201d3c:
    // 0x201d3c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x201d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_201d40:
    // 0x201d40: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x201d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_201d44:
    // 0x201d44: 0x2463b5c0  addiu       $v1, $v1, -0x4A40
    ctx->pc = 0x201d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948288));
label_201d48:
    // 0x201d48: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x201d48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_201d4c:
    // 0x201d4c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x201d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_201d50:
    // 0x201d50: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x201d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_201d54:
    // 0x201d54: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x201d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_201d58:
    // 0x201d58: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x201d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_201d5c:
    // 0x201d5c: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x201d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_201d60:
    // 0x201d60: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x201d60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_201d64:
    // 0x201d64: 0x10000042  b           . + 4 + (0x42 << 2)
label_201d68:
    if (ctx->pc == 0x201D68u) {
        ctx->pc = 0x201D68u;
            // 0x201d68: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x201D6Cu;
        goto label_201d6c;
    }
    ctx->pc = 0x201D64u;
    {
        const bool branch_taken_0x201d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D64u;
            // 0x201d68: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d64) {
            ctx->pc = 0x201E70u;
            goto label_201e70;
        }
    }
    ctx->pc = 0x201D6Cu;
label_201d6c:
    // 0x201d6c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x201d6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_201d70:
    // 0x201d70: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x201d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_201d74:
    // 0x201d74: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x201d74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_201d78:
    // 0x201d78: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x201d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_201d7c:
    // 0x201d7c: 0x661ffc2  bgez        $s3, . + 4 + (-0x3E << 2)
label_201d80:
    if (ctx->pc == 0x201D80u) {
        ctx->pc = 0x201D80u;
            // 0x201d80: 0x2739fffc  addiu       $t9, $t9, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
        ctx->pc = 0x201D84u;
        goto label_201d84;
    }
    ctx->pc = 0x201D7Cu;
    {
        const bool branch_taken_0x201d7c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x201D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D7Cu;
            // 0x201d80: 0x2739fffc  addiu       $t9, $t9, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d7c) {
            ctx->pc = 0x201C88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_201c88;
        }
    }
    ctx->pc = 0x201D84u;
label_201d84:
    // 0x201d84: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x201d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_201d88:
    // 0x201d88: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x201d88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_201d8c:
    // 0x201d8c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x201d8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201d90:
    // 0x201d90: 0x501ffb8  bgez        $t0, . + 4 + (-0x48 << 2)
label_201d94:
    if (ctx->pc == 0x201D94u) {
        ctx->pc = 0x201D94u;
            // 0x201d94: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x201D98u;
        goto label_201d98;
    }
    ctx->pc = 0x201D90u;
    {
        const bool branch_taken_0x201d90 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x201D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D90u;
            // 0x201d94: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d90) {
            ctx->pc = 0x201C74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_201c74;
        }
    }
    ctx->pc = 0x201D98u;
label_201d98:
    // 0x201d98: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x201d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201d9c:
    // 0x201d9c: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x201d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_201da0:
    // 0x201da0: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x201da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_201da4:
    // 0x201da4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x201da4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_201da8:
    // 0x201da8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x201da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201dac:
    // 0x201dac: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x201dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_201db0:
    // 0x201db0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x201db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_201db4:
    // 0x201db4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x201db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_201db8:
    // 0x201db8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x201db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201dbc:
    // 0x201dbc: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x201dbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_201dc0:
    // 0x201dc0: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x201dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_201dc4:
    // 0x201dc4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x201dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_201dc8:
    // 0x201dc8: 0xe4e70010  swc1        $f7, 0x10($a3)
    ctx->pc = 0x201dc8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_201dcc:
    // 0x201dcc: 0x8ce80040  lw          $t0, 0x40($a3)
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_201dd0:
    // 0x201dd0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x201dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_201dd4:
    // 0x201dd4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x201dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_201dd8:
    // 0x201dd8: 0xace90020  sw          $t1, 0x20($a3)
    ctx->pc = 0x201dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 9));
label_201ddc:
    // 0x201ddc: 0x8ca5ea64  lw          $a1, -0x159C($a1)
    ctx->pc = 0x201ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961764)));
label_201de0:
    // 0x201de0: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x201de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_201de4:
    // 0x201de4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x201de4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_201de8:
    // 0x201de8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_201dec:
    if (ctx->pc == 0x201DECu) {
        ctx->pc = 0x201DECu;
            // 0x201dec: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x201DF0u;
        goto label_201df0;
    }
    ctx->pc = 0x201DE8u;
    {
        const bool branch_taken_0x201de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201DE8u;
            // 0x201dec: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201de8) {
            ctx->pc = 0x201E18u;
            goto label_201e18;
        }
    }
    ctx->pc = 0x201DF0u;
label_201df0:
    // 0x201df0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_201df4:
    // 0x201df4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x201df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_201df8:
    // 0x201df8: 0x2463b5c0  addiu       $v1, $v1, -0x4A40
    ctx->pc = 0x201df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948288));
label_201dfc:
    // 0x201dfc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x201dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_201e00:
    // 0x201e00: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x201e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_201e04:
    // 0x201e04: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x201e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_201e08:
    // 0x201e08: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x201e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_201e0c:
    // 0x201e0c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_201e10:
    // 0x201e10: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x201e10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_201e14:
    // 0x201e14: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x201e14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_201e18:
    // 0x201e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201e1c:
    // 0x201e1c: 0x10000014  b           . + 4 + (0x14 << 2)
label_201e20:
    if (ctx->pc == 0x201E20u) {
        ctx->pc = 0x201E20u;
            // 0x201e20: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x201E24u;
        goto label_201e24;
    }
    ctx->pc = 0x201E1Cu;
    {
        const bool branch_taken_0x201e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201E1Cu;
            // 0x201e20: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e1c) {
            ctx->pc = 0x201E70u;
            goto label_201e70;
        }
    }
    ctx->pc = 0x201E24u;
label_201e24:
    // 0x201e24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x201e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_201e28:
    // 0x201e28: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x201e28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_201e2c:
    // 0x201e2c: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x201e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_201e30:
    // 0x201e30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x201e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_201e34:
    // 0x201e34: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x201e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_201e38:
    // 0x201e38: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x201e38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_201e3c:
    // 0x201e3c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_201e40:
    if (ctx->pc == 0x201E40u) {
        ctx->pc = 0x201E40u;
            // 0x201e40: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x201E44u;
        goto label_201e44;
    }
    ctx->pc = 0x201E3Cu;
    {
        const bool branch_taken_0x201e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201E3Cu;
            // 0x201e40: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e3c) {
            ctx->pc = 0x201E6Cu;
            goto label_201e6c;
        }
    }
    ctx->pc = 0x201E44u;
label_201e44:
    // 0x201e44: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x201e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_201e48:
    // 0x201e48: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x201e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_201e4c:
    // 0x201e4c: 0x2463b5c0  addiu       $v1, $v1, -0x4A40
    ctx->pc = 0x201e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948288));
label_201e50:
    // 0x201e50: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x201e50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_201e54:
    // 0x201e54: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_201e58:
    // 0x201e58: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x201e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_201e5c:
    // 0x201e5c: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x201e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_201e60:
    // 0x201e60: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x201e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_201e64:
    // 0x201e64: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x201e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_201e68:
    // 0x201e68: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x201e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_201e6c:
    // 0x201e6c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x201e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_201e70:
    // 0x201e70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201e74:
    // 0x201e74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201e78:
    // 0x201e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201e7c:
    // 0x201e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201e80:
    // 0x201e80: 0x3e00008  jr          $ra
label_201e84:
    if (ctx->pc == 0x201E84u) {
        ctx->pc = 0x201E84u;
            // 0x201e84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x201E88u;
        goto label_201e88;
    }
    ctx->pc = 0x201E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201E80u;
            // 0x201e84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201E88u;
label_201e88:
    // 0x201e88: 0x0  nop
    ctx->pc = 0x201e88u;
    // NOP
label_201e8c:
    // 0x201e8c: 0x0  nop
    ctx->pc = 0x201e8cu;
    // NOP
label_201e90:
    // 0x201e90: 0x3e00008  jr          $ra
label_201e94:
    if (ctx->pc == 0x201E94u) {
        ctx->pc = 0x201E94u;
            // 0x201e94: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x201E98u;
        goto label_201e98;
    }
    ctx->pc = 0x201E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201E90u;
            // 0x201e94: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201E98u;
label_201e98:
    // 0x201e98: 0x0  nop
    ctx->pc = 0x201e98u;
    // NOP
label_201e9c:
    // 0x201e9c: 0x0  nop
    ctx->pc = 0x201e9cu;
    // NOP
label_201ea0:
    // 0x201ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_201ea4:
    // 0x201ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_201ea8:
    // 0x201ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_201eac:
    // 0x201eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201eb0:
    // 0x201eb0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_201eb4:
    if (ctx->pc == 0x201EB4u) {
        ctx->pc = 0x201EB4u;
            // 0x201eb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201EB8u;
        goto label_201eb8;
    }
    ctx->pc = 0x201EB0u;
    {
        const bool branch_taken_0x201eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x201eb0) {
            ctx->pc = 0x201EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201EB0u;
            // 0x201eb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201F20u;
            goto label_201f20;
        }
    }
    ctx->pc = 0x201EB8u;
label_201eb8:
    // 0x201eb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_201ebc:
    // 0x201ebc: 0x2442e3a0  addiu       $v0, $v0, -0x1C60
    ctx->pc = 0x201ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960032));
label_201ec0:
    // 0x201ec0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x201ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_201ec4:
    // 0x201ec4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x201ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_201ec8:
    // 0x201ec8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x201ec8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_201ecc:
    // 0x201ecc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_201ed0:
    if (ctx->pc == 0x201ED0u) {
        ctx->pc = 0x201ED4u;
        goto label_201ed4;
    }
    ctx->pc = 0x201ECCu;
    {
        const bool branch_taken_0x201ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201ecc) {
            ctx->pc = 0x201F08u;
            goto label_201f08;
        }
    }
    ctx->pc = 0x201ED4u;
label_201ed4:
    // 0x201ed4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x201ed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_201ed8:
    // 0x201ed8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_201edc:
    // 0x201edc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x201edcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_201ee0:
    // 0x201ee0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x201ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_201ee4:
    // 0x201ee4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x201ee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_201ee8:
    // 0x201ee8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_201eec:
    if (ctx->pc == 0x201EECu) {
        ctx->pc = 0x201EF0u;
        goto label_201ef0;
    }
    ctx->pc = 0x201EE8u;
    {
        const bool branch_taken_0x201ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201ee8) {
            ctx->pc = 0x201F08u;
            goto label_201f08;
        }
    }
    ctx->pc = 0x201EF0u;
label_201ef0:
    // 0x201ef0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_201ef4:
    if (ctx->pc == 0x201EF4u) {
        ctx->pc = 0x201EF8u;
        goto label_201ef8;
    }
    ctx->pc = 0x201EF0u;
    {
        const bool branch_taken_0x201ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201ef0) {
            ctx->pc = 0x201F08u;
            goto label_201f08;
        }
    }
    ctx->pc = 0x201EF8u;
label_201ef8:
    // 0x201ef8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x201ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_201efc:
    // 0x201efc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x201efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_201f00:
    // 0x201f00: 0x320f809  jalr        $t9
label_201f04:
    if (ctx->pc == 0x201F04u) {
        ctx->pc = 0x201F04u;
            // 0x201f04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x201F08u;
        goto label_201f08;
    }
    ctx->pc = 0x201F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201F08u);
        ctx->pc = 0x201F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F00u;
            // 0x201f04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201F08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201F08u; }
            if (ctx->pc != 0x201F08u) { return; }
        }
        }
    }
    ctx->pc = 0x201F08u;
label_201f08:
    // 0x201f08: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_201f0c:
    if (ctx->pc == 0x201F0Cu) {
        ctx->pc = 0x201F10u;
        goto label_201f10;
    }
    ctx->pc = 0x201F08u;
    {
        const bool branch_taken_0x201f08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x201f08) {
            ctx->pc = 0x201F1Cu;
            goto label_201f1c;
        }
    }
    ctx->pc = 0x201F10u;
label_201f10:
    // 0x201f10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_201f14:
    // 0x201f14: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x201f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
label_201f18:
    // 0x201f18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x201f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_201f1c:
    // 0x201f1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x201f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201f20:
    // 0x201f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_201f24:
    // 0x201f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201f28:
    // 0x201f28: 0x3e00008  jr          $ra
label_201f2c:
    if (ctx->pc == 0x201F2Cu) {
        ctx->pc = 0x201F2Cu;
            // 0x201f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x201F30u;
        goto label_201f30;
    }
    ctx->pc = 0x201F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F28u;
            // 0x201f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201F30u;
label_201f30:
    // 0x201f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_201f34:
    // 0x201f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_201f38:
    // 0x201f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_201f3c:
    // 0x201f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201f40:
    // 0x201f40: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_201f44:
    if (ctx->pc == 0x201F44u) {
        ctx->pc = 0x201F44u;
            // 0x201f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201F48u;
        goto label_201f48;
    }
    ctx->pc = 0x201F40u;
    {
        const bool branch_taken_0x201f40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x201f40) {
            ctx->pc = 0x201F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201F40u;
            // 0x201f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201F6Cu;
            goto label_201f6c;
        }
    }
    ctx->pc = 0x201F48u;
label_201f48:
    // 0x201f48: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x201f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_201f4c:
    // 0x201f4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x201f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_201f50:
    // 0x201f50: 0x2463e3d0  addiu       $v1, $v1, -0x1C30
    ctx->pc = 0x201f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960080));
label_201f54:
    // 0x201f54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x201f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_201f58:
    // 0x201f58: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_201f5c:
    if (ctx->pc == 0x201F5Cu) {
        ctx->pc = 0x201F5Cu;
            // 0x201f5c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x201F60u;
        goto label_201f60;
    }
    ctx->pc = 0x201F58u;
    {
        const bool branch_taken_0x201f58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x201F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F58u;
            // 0x201f5c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f58) {
            ctx->pc = 0x201F68u;
            goto label_201f68;
        }
    }
    ctx->pc = 0x201F60u;
label_201f60:
    // 0x201f60: 0xc0400a8  jal         func_1002A0
label_201f64:
    if (ctx->pc == 0x201F64u) {
        ctx->pc = 0x201F68u;
        goto label_201f68;
    }
    ctx->pc = 0x201F60u;
    SET_GPR_U32(ctx, 31, 0x201F68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F68u; }
        if (ctx->pc != 0x201F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F68u; }
        if (ctx->pc != 0x201F68u) { return; }
    }
    ctx->pc = 0x201F68u;
label_201f68:
    // 0x201f68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x201f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201f6c:
    // 0x201f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_201f70:
    // 0x201f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201f74:
    // 0x201f74: 0x3e00008  jr          $ra
label_201f78:
    if (ctx->pc == 0x201F78u) {
        ctx->pc = 0x201F78u;
            // 0x201f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x201F7Cu;
        goto label_201f7c;
    }
    ctx->pc = 0x201F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F74u;
            // 0x201f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201F7Cu;
label_201f7c:
    // 0x201f7c: 0x0  nop
    ctx->pc = 0x201f7cu;
    // NOP
}
