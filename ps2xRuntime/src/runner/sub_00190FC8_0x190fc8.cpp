#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190FC8
// Address: 0x190fc8 - 0x191838
void sub_00190FC8_0x190fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190FC8_0x190fc8");
#endif

    switch (ctx->pc) {
        case 0x190fc8u: goto label_190fc8;
        case 0x190fccu: goto label_190fcc;
        case 0x190fd0u: goto label_190fd0;
        case 0x190fd4u: goto label_190fd4;
        case 0x190fd8u: goto label_190fd8;
        case 0x190fdcu: goto label_190fdc;
        case 0x190fe0u: goto label_190fe0;
        case 0x190fe4u: goto label_190fe4;
        case 0x190fe8u: goto label_190fe8;
        case 0x190fecu: goto label_190fec;
        case 0x190ff0u: goto label_190ff0;
        case 0x190ff4u: goto label_190ff4;
        case 0x190ff8u: goto label_190ff8;
        case 0x190ffcu: goto label_190ffc;
        case 0x191000u: goto label_191000;
        case 0x191004u: goto label_191004;
        case 0x191008u: goto label_191008;
        case 0x19100cu: goto label_19100c;
        case 0x191010u: goto label_191010;
        case 0x191014u: goto label_191014;
        case 0x191018u: goto label_191018;
        case 0x19101cu: goto label_19101c;
        case 0x191020u: goto label_191020;
        case 0x191024u: goto label_191024;
        case 0x191028u: goto label_191028;
        case 0x19102cu: goto label_19102c;
        case 0x191030u: goto label_191030;
        case 0x191034u: goto label_191034;
        case 0x191038u: goto label_191038;
        case 0x19103cu: goto label_19103c;
        case 0x191040u: goto label_191040;
        case 0x191044u: goto label_191044;
        case 0x191048u: goto label_191048;
        case 0x19104cu: goto label_19104c;
        case 0x191050u: goto label_191050;
        case 0x191054u: goto label_191054;
        case 0x191058u: goto label_191058;
        case 0x19105cu: goto label_19105c;
        case 0x191060u: goto label_191060;
        case 0x191064u: goto label_191064;
        case 0x191068u: goto label_191068;
        case 0x19106cu: goto label_19106c;
        case 0x191070u: goto label_191070;
        case 0x191074u: goto label_191074;
        case 0x191078u: goto label_191078;
        case 0x19107cu: goto label_19107c;
        case 0x191080u: goto label_191080;
        case 0x191084u: goto label_191084;
        case 0x191088u: goto label_191088;
        case 0x19108cu: goto label_19108c;
        case 0x191090u: goto label_191090;
        case 0x191094u: goto label_191094;
        case 0x191098u: goto label_191098;
        case 0x19109cu: goto label_19109c;
        case 0x1910a0u: goto label_1910a0;
        case 0x1910a4u: goto label_1910a4;
        case 0x1910a8u: goto label_1910a8;
        case 0x1910acu: goto label_1910ac;
        case 0x1910b0u: goto label_1910b0;
        case 0x1910b4u: goto label_1910b4;
        case 0x1910b8u: goto label_1910b8;
        case 0x1910bcu: goto label_1910bc;
        case 0x1910c0u: goto label_1910c0;
        case 0x1910c4u: goto label_1910c4;
        case 0x1910c8u: goto label_1910c8;
        case 0x1910ccu: goto label_1910cc;
        case 0x1910d0u: goto label_1910d0;
        case 0x1910d4u: goto label_1910d4;
        case 0x1910d8u: goto label_1910d8;
        case 0x1910dcu: goto label_1910dc;
        case 0x1910e0u: goto label_1910e0;
        case 0x1910e4u: goto label_1910e4;
        case 0x1910e8u: goto label_1910e8;
        case 0x1910ecu: goto label_1910ec;
        case 0x1910f0u: goto label_1910f0;
        case 0x1910f4u: goto label_1910f4;
        case 0x1910f8u: goto label_1910f8;
        case 0x1910fcu: goto label_1910fc;
        case 0x191100u: goto label_191100;
        case 0x191104u: goto label_191104;
        case 0x191108u: goto label_191108;
        case 0x19110cu: goto label_19110c;
        case 0x191110u: goto label_191110;
        case 0x191114u: goto label_191114;
        case 0x191118u: goto label_191118;
        case 0x19111cu: goto label_19111c;
        case 0x191120u: goto label_191120;
        case 0x191124u: goto label_191124;
        case 0x191128u: goto label_191128;
        case 0x19112cu: goto label_19112c;
        case 0x191130u: goto label_191130;
        case 0x191134u: goto label_191134;
        case 0x191138u: goto label_191138;
        case 0x19113cu: goto label_19113c;
        case 0x191140u: goto label_191140;
        case 0x191144u: goto label_191144;
        case 0x191148u: goto label_191148;
        case 0x19114cu: goto label_19114c;
        case 0x191150u: goto label_191150;
        case 0x191154u: goto label_191154;
        case 0x191158u: goto label_191158;
        case 0x19115cu: goto label_19115c;
        case 0x191160u: goto label_191160;
        case 0x191164u: goto label_191164;
        case 0x191168u: goto label_191168;
        case 0x19116cu: goto label_19116c;
        case 0x191170u: goto label_191170;
        case 0x191174u: goto label_191174;
        case 0x191178u: goto label_191178;
        case 0x19117cu: goto label_19117c;
        case 0x191180u: goto label_191180;
        case 0x191184u: goto label_191184;
        case 0x191188u: goto label_191188;
        case 0x19118cu: goto label_19118c;
        case 0x191190u: goto label_191190;
        case 0x191194u: goto label_191194;
        case 0x191198u: goto label_191198;
        case 0x19119cu: goto label_19119c;
        case 0x1911a0u: goto label_1911a0;
        case 0x1911a4u: goto label_1911a4;
        case 0x1911a8u: goto label_1911a8;
        case 0x1911acu: goto label_1911ac;
        case 0x1911b0u: goto label_1911b0;
        case 0x1911b4u: goto label_1911b4;
        case 0x1911b8u: goto label_1911b8;
        case 0x1911bcu: goto label_1911bc;
        case 0x1911c0u: goto label_1911c0;
        case 0x1911c4u: goto label_1911c4;
        case 0x1911c8u: goto label_1911c8;
        case 0x1911ccu: goto label_1911cc;
        case 0x1911d0u: goto label_1911d0;
        case 0x1911d4u: goto label_1911d4;
        case 0x1911d8u: goto label_1911d8;
        case 0x1911dcu: goto label_1911dc;
        case 0x1911e0u: goto label_1911e0;
        case 0x1911e4u: goto label_1911e4;
        case 0x1911e8u: goto label_1911e8;
        case 0x1911ecu: goto label_1911ec;
        case 0x1911f0u: goto label_1911f0;
        case 0x1911f4u: goto label_1911f4;
        case 0x1911f8u: goto label_1911f8;
        case 0x1911fcu: goto label_1911fc;
        case 0x191200u: goto label_191200;
        case 0x191204u: goto label_191204;
        case 0x191208u: goto label_191208;
        case 0x19120cu: goto label_19120c;
        case 0x191210u: goto label_191210;
        case 0x191214u: goto label_191214;
        case 0x191218u: goto label_191218;
        case 0x19121cu: goto label_19121c;
        case 0x191220u: goto label_191220;
        case 0x191224u: goto label_191224;
        case 0x191228u: goto label_191228;
        case 0x19122cu: goto label_19122c;
        case 0x191230u: goto label_191230;
        case 0x191234u: goto label_191234;
        case 0x191238u: goto label_191238;
        case 0x19123cu: goto label_19123c;
        case 0x191240u: goto label_191240;
        case 0x191244u: goto label_191244;
        case 0x191248u: goto label_191248;
        case 0x19124cu: goto label_19124c;
        case 0x191250u: goto label_191250;
        case 0x191254u: goto label_191254;
        case 0x191258u: goto label_191258;
        case 0x19125cu: goto label_19125c;
        case 0x191260u: goto label_191260;
        case 0x191264u: goto label_191264;
        case 0x191268u: goto label_191268;
        case 0x19126cu: goto label_19126c;
        case 0x191270u: goto label_191270;
        case 0x191274u: goto label_191274;
        case 0x191278u: goto label_191278;
        case 0x19127cu: goto label_19127c;
        case 0x191280u: goto label_191280;
        case 0x191284u: goto label_191284;
        case 0x191288u: goto label_191288;
        case 0x19128cu: goto label_19128c;
        case 0x191290u: goto label_191290;
        case 0x191294u: goto label_191294;
        case 0x191298u: goto label_191298;
        case 0x19129cu: goto label_19129c;
        case 0x1912a0u: goto label_1912a0;
        case 0x1912a4u: goto label_1912a4;
        case 0x1912a8u: goto label_1912a8;
        case 0x1912acu: goto label_1912ac;
        case 0x1912b0u: goto label_1912b0;
        case 0x1912b4u: goto label_1912b4;
        case 0x1912b8u: goto label_1912b8;
        case 0x1912bcu: goto label_1912bc;
        case 0x1912c0u: goto label_1912c0;
        case 0x1912c4u: goto label_1912c4;
        case 0x1912c8u: goto label_1912c8;
        case 0x1912ccu: goto label_1912cc;
        case 0x1912d0u: goto label_1912d0;
        case 0x1912d4u: goto label_1912d4;
        case 0x1912d8u: goto label_1912d8;
        case 0x1912dcu: goto label_1912dc;
        case 0x1912e0u: goto label_1912e0;
        case 0x1912e4u: goto label_1912e4;
        case 0x1912e8u: goto label_1912e8;
        case 0x1912ecu: goto label_1912ec;
        case 0x1912f0u: goto label_1912f0;
        case 0x1912f4u: goto label_1912f4;
        case 0x1912f8u: goto label_1912f8;
        case 0x1912fcu: goto label_1912fc;
        case 0x191300u: goto label_191300;
        case 0x191304u: goto label_191304;
        case 0x191308u: goto label_191308;
        case 0x19130cu: goto label_19130c;
        case 0x191310u: goto label_191310;
        case 0x191314u: goto label_191314;
        case 0x191318u: goto label_191318;
        case 0x19131cu: goto label_19131c;
        case 0x191320u: goto label_191320;
        case 0x191324u: goto label_191324;
        case 0x191328u: goto label_191328;
        case 0x19132cu: goto label_19132c;
        case 0x191330u: goto label_191330;
        case 0x191334u: goto label_191334;
        case 0x191338u: goto label_191338;
        case 0x19133cu: goto label_19133c;
        case 0x191340u: goto label_191340;
        case 0x191344u: goto label_191344;
        case 0x191348u: goto label_191348;
        case 0x19134cu: goto label_19134c;
        case 0x191350u: goto label_191350;
        case 0x191354u: goto label_191354;
        case 0x191358u: goto label_191358;
        case 0x19135cu: goto label_19135c;
        case 0x191360u: goto label_191360;
        case 0x191364u: goto label_191364;
        case 0x191368u: goto label_191368;
        case 0x19136cu: goto label_19136c;
        case 0x191370u: goto label_191370;
        case 0x191374u: goto label_191374;
        case 0x191378u: goto label_191378;
        case 0x19137cu: goto label_19137c;
        case 0x191380u: goto label_191380;
        case 0x191384u: goto label_191384;
        case 0x191388u: goto label_191388;
        case 0x19138cu: goto label_19138c;
        case 0x191390u: goto label_191390;
        case 0x191394u: goto label_191394;
        case 0x191398u: goto label_191398;
        case 0x19139cu: goto label_19139c;
        case 0x1913a0u: goto label_1913a0;
        case 0x1913a4u: goto label_1913a4;
        case 0x1913a8u: goto label_1913a8;
        case 0x1913acu: goto label_1913ac;
        case 0x1913b0u: goto label_1913b0;
        case 0x1913b4u: goto label_1913b4;
        case 0x1913b8u: goto label_1913b8;
        case 0x1913bcu: goto label_1913bc;
        case 0x1913c0u: goto label_1913c0;
        case 0x1913c4u: goto label_1913c4;
        case 0x1913c8u: goto label_1913c8;
        case 0x1913ccu: goto label_1913cc;
        case 0x1913d0u: goto label_1913d0;
        case 0x1913d4u: goto label_1913d4;
        case 0x1913d8u: goto label_1913d8;
        case 0x1913dcu: goto label_1913dc;
        case 0x1913e0u: goto label_1913e0;
        case 0x1913e4u: goto label_1913e4;
        case 0x1913e8u: goto label_1913e8;
        case 0x1913ecu: goto label_1913ec;
        case 0x1913f0u: goto label_1913f0;
        case 0x1913f4u: goto label_1913f4;
        case 0x1913f8u: goto label_1913f8;
        case 0x1913fcu: goto label_1913fc;
        case 0x191400u: goto label_191400;
        case 0x191404u: goto label_191404;
        case 0x191408u: goto label_191408;
        case 0x19140cu: goto label_19140c;
        case 0x191410u: goto label_191410;
        case 0x191414u: goto label_191414;
        case 0x191418u: goto label_191418;
        case 0x19141cu: goto label_19141c;
        case 0x191420u: goto label_191420;
        case 0x191424u: goto label_191424;
        case 0x191428u: goto label_191428;
        case 0x19142cu: goto label_19142c;
        case 0x191430u: goto label_191430;
        case 0x191434u: goto label_191434;
        case 0x191438u: goto label_191438;
        case 0x19143cu: goto label_19143c;
        case 0x191440u: goto label_191440;
        case 0x191444u: goto label_191444;
        case 0x191448u: goto label_191448;
        case 0x19144cu: goto label_19144c;
        case 0x191450u: goto label_191450;
        case 0x191454u: goto label_191454;
        case 0x191458u: goto label_191458;
        case 0x19145cu: goto label_19145c;
        case 0x191460u: goto label_191460;
        case 0x191464u: goto label_191464;
        case 0x191468u: goto label_191468;
        case 0x19146cu: goto label_19146c;
        case 0x191470u: goto label_191470;
        case 0x191474u: goto label_191474;
        case 0x191478u: goto label_191478;
        case 0x19147cu: goto label_19147c;
        case 0x191480u: goto label_191480;
        case 0x191484u: goto label_191484;
        case 0x191488u: goto label_191488;
        case 0x19148cu: goto label_19148c;
        case 0x191490u: goto label_191490;
        case 0x191494u: goto label_191494;
        case 0x191498u: goto label_191498;
        case 0x19149cu: goto label_19149c;
        case 0x1914a0u: goto label_1914a0;
        case 0x1914a4u: goto label_1914a4;
        case 0x1914a8u: goto label_1914a8;
        case 0x1914acu: goto label_1914ac;
        case 0x1914b0u: goto label_1914b0;
        case 0x1914b4u: goto label_1914b4;
        case 0x1914b8u: goto label_1914b8;
        case 0x1914bcu: goto label_1914bc;
        case 0x1914c0u: goto label_1914c0;
        case 0x1914c4u: goto label_1914c4;
        case 0x1914c8u: goto label_1914c8;
        case 0x1914ccu: goto label_1914cc;
        case 0x1914d0u: goto label_1914d0;
        case 0x1914d4u: goto label_1914d4;
        case 0x1914d8u: goto label_1914d8;
        case 0x1914dcu: goto label_1914dc;
        case 0x1914e0u: goto label_1914e0;
        case 0x1914e4u: goto label_1914e4;
        case 0x1914e8u: goto label_1914e8;
        case 0x1914ecu: goto label_1914ec;
        case 0x1914f0u: goto label_1914f0;
        case 0x1914f4u: goto label_1914f4;
        case 0x1914f8u: goto label_1914f8;
        case 0x1914fcu: goto label_1914fc;
        case 0x191500u: goto label_191500;
        case 0x191504u: goto label_191504;
        case 0x191508u: goto label_191508;
        case 0x19150cu: goto label_19150c;
        case 0x191510u: goto label_191510;
        case 0x191514u: goto label_191514;
        case 0x191518u: goto label_191518;
        case 0x19151cu: goto label_19151c;
        case 0x191520u: goto label_191520;
        case 0x191524u: goto label_191524;
        case 0x191528u: goto label_191528;
        case 0x19152cu: goto label_19152c;
        case 0x191530u: goto label_191530;
        case 0x191534u: goto label_191534;
        case 0x191538u: goto label_191538;
        case 0x19153cu: goto label_19153c;
        case 0x191540u: goto label_191540;
        case 0x191544u: goto label_191544;
        case 0x191548u: goto label_191548;
        case 0x19154cu: goto label_19154c;
        case 0x191550u: goto label_191550;
        case 0x191554u: goto label_191554;
        case 0x191558u: goto label_191558;
        case 0x19155cu: goto label_19155c;
        case 0x191560u: goto label_191560;
        case 0x191564u: goto label_191564;
        case 0x191568u: goto label_191568;
        case 0x19156cu: goto label_19156c;
        case 0x191570u: goto label_191570;
        case 0x191574u: goto label_191574;
        case 0x191578u: goto label_191578;
        case 0x19157cu: goto label_19157c;
        case 0x191580u: goto label_191580;
        case 0x191584u: goto label_191584;
        case 0x191588u: goto label_191588;
        case 0x19158cu: goto label_19158c;
        case 0x191590u: goto label_191590;
        case 0x191594u: goto label_191594;
        case 0x191598u: goto label_191598;
        case 0x19159cu: goto label_19159c;
        case 0x1915a0u: goto label_1915a0;
        case 0x1915a4u: goto label_1915a4;
        case 0x1915a8u: goto label_1915a8;
        case 0x1915acu: goto label_1915ac;
        case 0x1915b0u: goto label_1915b0;
        case 0x1915b4u: goto label_1915b4;
        case 0x1915b8u: goto label_1915b8;
        case 0x1915bcu: goto label_1915bc;
        case 0x1915c0u: goto label_1915c0;
        case 0x1915c4u: goto label_1915c4;
        case 0x1915c8u: goto label_1915c8;
        case 0x1915ccu: goto label_1915cc;
        case 0x1915d0u: goto label_1915d0;
        case 0x1915d4u: goto label_1915d4;
        case 0x1915d8u: goto label_1915d8;
        case 0x1915dcu: goto label_1915dc;
        case 0x1915e0u: goto label_1915e0;
        case 0x1915e4u: goto label_1915e4;
        case 0x1915e8u: goto label_1915e8;
        case 0x1915ecu: goto label_1915ec;
        case 0x1915f0u: goto label_1915f0;
        case 0x1915f4u: goto label_1915f4;
        case 0x1915f8u: goto label_1915f8;
        case 0x1915fcu: goto label_1915fc;
        case 0x191600u: goto label_191600;
        case 0x191604u: goto label_191604;
        case 0x191608u: goto label_191608;
        case 0x19160cu: goto label_19160c;
        case 0x191610u: goto label_191610;
        case 0x191614u: goto label_191614;
        case 0x191618u: goto label_191618;
        case 0x19161cu: goto label_19161c;
        case 0x191620u: goto label_191620;
        case 0x191624u: goto label_191624;
        case 0x191628u: goto label_191628;
        case 0x19162cu: goto label_19162c;
        case 0x191630u: goto label_191630;
        case 0x191634u: goto label_191634;
        case 0x191638u: goto label_191638;
        case 0x19163cu: goto label_19163c;
        case 0x191640u: goto label_191640;
        case 0x191644u: goto label_191644;
        case 0x191648u: goto label_191648;
        case 0x19164cu: goto label_19164c;
        case 0x191650u: goto label_191650;
        case 0x191654u: goto label_191654;
        case 0x191658u: goto label_191658;
        case 0x19165cu: goto label_19165c;
        case 0x191660u: goto label_191660;
        case 0x191664u: goto label_191664;
        case 0x191668u: goto label_191668;
        case 0x19166cu: goto label_19166c;
        case 0x191670u: goto label_191670;
        case 0x191674u: goto label_191674;
        case 0x191678u: goto label_191678;
        case 0x19167cu: goto label_19167c;
        case 0x191680u: goto label_191680;
        case 0x191684u: goto label_191684;
        case 0x191688u: goto label_191688;
        case 0x19168cu: goto label_19168c;
        case 0x191690u: goto label_191690;
        case 0x191694u: goto label_191694;
        case 0x191698u: goto label_191698;
        case 0x19169cu: goto label_19169c;
        case 0x1916a0u: goto label_1916a0;
        case 0x1916a4u: goto label_1916a4;
        case 0x1916a8u: goto label_1916a8;
        case 0x1916acu: goto label_1916ac;
        case 0x1916b0u: goto label_1916b0;
        case 0x1916b4u: goto label_1916b4;
        case 0x1916b8u: goto label_1916b8;
        case 0x1916bcu: goto label_1916bc;
        case 0x1916c0u: goto label_1916c0;
        case 0x1916c4u: goto label_1916c4;
        case 0x1916c8u: goto label_1916c8;
        case 0x1916ccu: goto label_1916cc;
        case 0x1916d0u: goto label_1916d0;
        case 0x1916d4u: goto label_1916d4;
        case 0x1916d8u: goto label_1916d8;
        case 0x1916dcu: goto label_1916dc;
        case 0x1916e0u: goto label_1916e0;
        case 0x1916e4u: goto label_1916e4;
        case 0x1916e8u: goto label_1916e8;
        case 0x1916ecu: goto label_1916ec;
        case 0x1916f0u: goto label_1916f0;
        case 0x1916f4u: goto label_1916f4;
        case 0x1916f8u: goto label_1916f8;
        case 0x1916fcu: goto label_1916fc;
        case 0x191700u: goto label_191700;
        case 0x191704u: goto label_191704;
        case 0x191708u: goto label_191708;
        case 0x19170cu: goto label_19170c;
        case 0x191710u: goto label_191710;
        case 0x191714u: goto label_191714;
        case 0x191718u: goto label_191718;
        case 0x19171cu: goto label_19171c;
        case 0x191720u: goto label_191720;
        case 0x191724u: goto label_191724;
        case 0x191728u: goto label_191728;
        case 0x19172cu: goto label_19172c;
        case 0x191730u: goto label_191730;
        case 0x191734u: goto label_191734;
        case 0x191738u: goto label_191738;
        case 0x19173cu: goto label_19173c;
        case 0x191740u: goto label_191740;
        case 0x191744u: goto label_191744;
        case 0x191748u: goto label_191748;
        case 0x19174cu: goto label_19174c;
        case 0x191750u: goto label_191750;
        case 0x191754u: goto label_191754;
        case 0x191758u: goto label_191758;
        case 0x19175cu: goto label_19175c;
        case 0x191760u: goto label_191760;
        case 0x191764u: goto label_191764;
        case 0x191768u: goto label_191768;
        case 0x19176cu: goto label_19176c;
        case 0x191770u: goto label_191770;
        case 0x191774u: goto label_191774;
        case 0x191778u: goto label_191778;
        case 0x19177cu: goto label_19177c;
        case 0x191780u: goto label_191780;
        case 0x191784u: goto label_191784;
        case 0x191788u: goto label_191788;
        case 0x19178cu: goto label_19178c;
        case 0x191790u: goto label_191790;
        case 0x191794u: goto label_191794;
        case 0x191798u: goto label_191798;
        case 0x19179cu: goto label_19179c;
        case 0x1917a0u: goto label_1917a0;
        case 0x1917a4u: goto label_1917a4;
        case 0x1917a8u: goto label_1917a8;
        case 0x1917acu: goto label_1917ac;
        case 0x1917b0u: goto label_1917b0;
        case 0x1917b4u: goto label_1917b4;
        case 0x1917b8u: goto label_1917b8;
        case 0x1917bcu: goto label_1917bc;
        case 0x1917c0u: goto label_1917c0;
        case 0x1917c4u: goto label_1917c4;
        case 0x1917c8u: goto label_1917c8;
        case 0x1917ccu: goto label_1917cc;
        case 0x1917d0u: goto label_1917d0;
        case 0x1917d4u: goto label_1917d4;
        case 0x1917d8u: goto label_1917d8;
        case 0x1917dcu: goto label_1917dc;
        case 0x1917e0u: goto label_1917e0;
        case 0x1917e4u: goto label_1917e4;
        case 0x1917e8u: goto label_1917e8;
        case 0x1917ecu: goto label_1917ec;
        case 0x1917f0u: goto label_1917f0;
        case 0x1917f4u: goto label_1917f4;
        case 0x1917f8u: goto label_1917f8;
        case 0x1917fcu: goto label_1917fc;
        case 0x191800u: goto label_191800;
        case 0x191804u: goto label_191804;
        case 0x191808u: goto label_191808;
        case 0x19180cu: goto label_19180c;
        case 0x191810u: goto label_191810;
        case 0x191814u: goto label_191814;
        case 0x191818u: goto label_191818;
        case 0x19181cu: goto label_19181c;
        case 0x191820u: goto label_191820;
        case 0x191824u: goto label_191824;
        case 0x191828u: goto label_191828;
        case 0x19182cu: goto label_19182c;
        case 0x191830u: goto label_191830;
        case 0x191834u: goto label_191834;
        default: break;
    }

    ctx->pc = 0x190fc8u;

label_190fc8:
    // 0x190fc8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x190fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_190fcc:
    // 0x190fcc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x190fccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_190fd0:
    // 0x190fd0: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x190fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
label_190fd4:
    // 0x190fd4: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x190fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_190fd8:
    // 0x190fd8: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x190fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
label_190fdc:
    // 0x190fdc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x190fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_190fe0:
    // 0x190fe0: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x190fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
label_190fe4:
    // 0x190fe4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x190fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190fe8:
    // 0x190fe8: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x190fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
label_190fec:
    // 0x190fec: 0x25620004  addiu       $v0, $t3, 0x4
    ctx->pc = 0x190fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_190ff0:
    // 0x190ff0: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x190ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
label_190ff4:
    // 0x190ff4: 0x434024  and         $t0, $v0, $v1
    ctx->pc = 0x190ff4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_190ff8:
    // 0x190ff8: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x190ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
label_190ffc:
    // 0x190ffc: 0x1681823  subu        $v1, $t3, $t0
    ctx->pc = 0x190ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_191000:
    // 0x191000: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x191000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_191004:
    // 0x191004: 0x26910028  addiu       $s1, $s4, 0x28
    ctx->pc = 0x191004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_191008:
    // 0x191008: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x191008u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19100c:
    // 0x19100c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19100cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191010:
    // 0x191010: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x191010u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191014:
    // 0x191014: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191018:
    // 0x191018: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x191018u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19101c:
    // 0x19101c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19101cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191020:
    // 0x191020: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x191020u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191024:
    // 0x191024: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191028:
    // 0x191028: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x191028u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19102c:
    // 0x19102c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19102cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191030:
    // 0x191030: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191030u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191034:
    // 0x191034: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191038:
    // 0x191038: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x191038u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_19103c:
    // 0x19103c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19103cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191040:
    // 0x191040: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x191040u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_191044:
    // 0x191044: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x191044u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191048:
    // 0x191048: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19104c:
    // 0x19104c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x19104cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_191050:
    // 0x191050: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191054:
    // 0x191054: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x191054u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_191058:
    // 0x191058: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191058u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_19105c:
    // 0x19105c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19105cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191060:
    // 0x191060: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x191060u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_191064:
    // 0x191064: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x191064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_191068:
    // 0x191068: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x191068u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_19106c:
    // 0x19106c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19106cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191070:
    // 0x191070: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x191070u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_191074:
    // 0x191074: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x191074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_191078:
    // 0x191078: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19107c:
    // 0x19107c: 0xa94804  sllv        $t1, $t1, $a1
    ctx->pc = 0x19107cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
label_191080:
    // 0x191080: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_191084:
    if (ctx->pc == 0x191084u) {
        ctx->pc = 0x191084u;
            // 0x191084: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x191088u;
        goto label_191088;
    }
    ctx->pc = 0x191080u;
    {
        const bool branch_taken_0x191080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x191084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191080u;
            // 0x191084: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191080) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x191088u;
label_191088:
    // 0x191088: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x191088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_19108c:
    // 0x19108c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_191090:
    if (ctx->pc == 0x191090u) {
        ctx->pc = 0x191090u;
            // 0x191090: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x191094u;
        goto label_191094;
    }
    ctx->pc = 0x19108Cu;
    {
        const bool branch_taken_0x19108c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x191090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19108Cu;
            // 0x191090: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19108c) {
            ctx->pc = 0x1910B0u;
            goto label_1910b0;
        }
    }
    ctx->pc = 0x191094u;
label_191094:
    // 0x191094: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x191094u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_191098:
    // 0x191098: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x191098u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_19109c:
    // 0x19109c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x19109cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1910a0:
    // 0x1910a0: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1910a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1910a4:
    // 0x1910a4: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1910a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1910a8:
    // 0x1910a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1910ac:
    if (ctx->pc == 0x1910ACu) {
        ctx->pc = 0x1910ACu;
            // 0x1910ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1910B0u;
        goto label_1910b0;
    }
    ctx->pc = 0x1910A8u;
    {
        const bool branch_taken_0x1910a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1910A8u;
            // 0x1910ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910a8) {
            ctx->pc = 0x1910BCu;
            goto label_1910bc;
        }
    }
    ctx->pc = 0x1910B0u;
label_1910b0:
    // 0x1910b0: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x1910b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1910b4:
    // 0x1910b4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1910b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1910b8:
    // 0x1910b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1910b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1910bc:
    // 0x1910bc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1910bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1910c0:
    // 0x1910c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1910c4:
    // 0x1910c4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1910c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1910c8:
    // 0x1910c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1910c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1910cc:
    // 0x1910cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1910ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1910d0:
    // 0x1910d0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1910d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1910d4:
    // 0x1910d4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1910d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1910d8:
    // 0x1910d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1910d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1910dc:
    // 0x1910dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1910dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1910e0:
    // 0x1910e0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1910e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1910e4:
    // 0x1910e4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1910e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1910e8:
    // 0x1910e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1910e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1910ec:
    // 0x1910ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1910ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1910f0:
    // 0x1910f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1910f4:
    if (ctx->pc == 0x1910F4u) {
        ctx->pc = 0x1910F4u;
            // 0x1910f4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x1910F8u;
        goto label_1910f8;
    }
    ctx->pc = 0x1910F0u;
    {
        const bool branch_taken_0x1910f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1910F0u;
            // 0x1910f4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910f0) {
            ctx->pc = 0x191108u;
            goto label_191108;
        }
    }
    ctx->pc = 0x1910F8u;
label_1910f8:
    // 0x1910f8: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x1910f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1910fc:
    // 0x1910fc: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1910fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_191100:
    // 0x191100: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x191100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_191104:
    // 0x191104: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_191108:
    // 0x191108: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x191108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19110c:
    // 0x19110c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x19110cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_191110:
    // 0x191110: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_191114:
    if (ctx->pc == 0x191114u) {
        ctx->pc = 0x191114u;
            // 0x191114: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x191118u;
        goto label_191118;
    }
    ctx->pc = 0x191110u;
    {
        const bool branch_taken_0x191110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191110) {
            ctx->pc = 0x191114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191110u;
            // 0x191114: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191158u;
            goto label_191158;
        }
    }
    ctx->pc = 0x191118u;
label_191118:
    // 0x191118: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x191118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_19111c:
    // 0x19111c: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x19111cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_191120:
    // 0x191120: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x191120u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191124:
    // 0x191124: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191128:
    // 0x191128: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191128u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19112c:
    // 0x19112c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19112cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191130:
    // 0x191130: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191130u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191134:
    // 0x191134: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x191134u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191138:
    // 0x191138: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191138u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19113c:
    // 0x19113c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19113cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191140:
    // 0x191140: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191140u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191144:
    // 0x191144: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191144u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191148:
    // 0x191148: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x191148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_19114c:
    // 0x19114c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19114cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191150:
    // 0x191150: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191150u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191154:
    // 0x191154: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_191158:
    // 0x191158: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x191158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_19115c:
    // 0x19115c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_191160:
    if (ctx->pc == 0x191160u) {
        ctx->pc = 0x191160u;
            // 0x191160: 0x91282  srl         $v0, $t1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
        ctx->pc = 0x191164u;
        goto label_191164;
    }
    ctx->pc = 0x19115Cu;
    {
        const bool branch_taken_0x19115c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19115Cu;
            // 0x191160: 0x91282  srl         $v0, $t1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19115c) {
            ctx->pc = 0x1911D8u;
            goto label_1911d8;
        }
    }
    ctx->pc = 0x191164u;
label_191164:
    // 0x191164: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x191164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
label_191168:
    // 0x191168: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_19116c:
    if (ctx->pc == 0x19116Cu) {
        ctx->pc = 0x19116Cu;
            // 0x19116c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x191170u;
        goto label_191170;
    }
    ctx->pc = 0x191168u;
    {
        const bool branch_taken_0x191168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191168u;
            // 0x19116c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191168) {
            ctx->pc = 0x191190u;
            goto label_191190;
        }
    }
    ctx->pc = 0x191170u;
label_191170:
    // 0x191170: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x191170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_191174:
    // 0x191174: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x191174u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_191178:
    // 0x191178: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x191178u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_19117c:
    // 0x19117c: 0x91a82  srl         $v1, $t1, 10
    ctx->pc = 0x19117cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
label_191180:
    // 0x191180: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x191180u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_191184:
    // 0x191184: 0x10000005  b           . + 4 + (0x5 << 2)
label_191188:
    if (ctx->pc == 0x191188u) {
        ctx->pc = 0x191188u;
            // 0x191188: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x19118Cu;
        goto label_19118c;
    }
    ctx->pc = 0x191184u;
    {
        const bool branch_taken_0x191184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191184u;
            // 0x191188: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191184) {
            ctx->pc = 0x19119Cu;
            goto label_19119c;
        }
    }
    ctx->pc = 0x19118Cu;
label_19118c:
    // 0x19118c: 0x0  nop
    ctx->pc = 0x19118cu;
    // NOP
label_191190:
    // 0x191190: 0x91282  srl         $v0, $t1, 10
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
label_191194:
    // 0x191194: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x191194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_191198:
    // 0x191198: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x191198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_19119c:
    // 0x19119c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x19119cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1911a0:
    // 0x1911a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1911a4:
    // 0x1911a4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1911a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1911a8:
    // 0x1911a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1911a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1911ac:
    // 0x1911ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1911acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1911b0:
    // 0x1911b0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1911b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1911b4:
    // 0x1911b4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1911b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1911b8:
    // 0x1911b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1911b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1911bc:
    // 0x1911bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1911bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1911c0:
    // 0x1911c0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1911c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1911c4:
    // 0x1911c4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1911c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1911c8:
    // 0x1911c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1911c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1911cc:
    // 0x1911cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1911ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1911d0:
    // 0x1911d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1911d4:
    if (ctx->pc == 0x1911D4u) {
        ctx->pc = 0x1911D4u;
            // 0x1911d4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x1911D8u;
        goto label_1911d8;
    }
    ctx->pc = 0x1911D0u;
    {
        const bool branch_taken_0x1911d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1911D0u;
            // 0x1911d4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911d0) {
            ctx->pc = 0x1911E4u;
            goto label_1911e4;
        }
    }
    ctx->pc = 0x1911D8u;
label_1911d8:
    // 0x1911d8: 0x94d80  sll         $t1, $t1, 22
    ctx->pc = 0x1911d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 22));
label_1911dc:
    // 0x1911dc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1911dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1911e0:
    // 0x1911e0: 0x24a50016  addiu       $a1, $a1, 0x16
    ctx->pc = 0x1911e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
label_1911e4:
    // 0x1911e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1911e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1911e8:
    // 0x1911e8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1911e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1911ec:
    // 0x1911ec: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1911f0:
    if (ctx->pc == 0x1911F0u) {
        ctx->pc = 0x1911F0u;
            // 0x1911f0: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x1911F4u;
        goto label_1911f4;
    }
    ctx->pc = 0x1911ECu;
    {
        const bool branch_taken_0x1911ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1911ec) {
            ctx->pc = 0x1911F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1911ECu;
            // 0x1911f0: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191234u;
            goto label_191234;
        }
    }
    ctx->pc = 0x1911F4u;
label_1911f4:
    // 0x1911f4: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1911f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1911f8:
    // 0x1911f8: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1911f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1911fc:
    // 0x1911fc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1911fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191200:
    // 0x191200: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191204:
    // 0x191204: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191204u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191208:
    // 0x191208: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19120c:
    // 0x19120c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19120cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191210:
    // 0x191210: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x191210u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191214:
    // 0x191214: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191214u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_191218:
    // 0x191218: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19121c:
    // 0x19121c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19121cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191220:
    // 0x191220: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191220u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191224:
    // 0x191224: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x191224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_191228:
    // 0x191228: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19122c:
    // 0x19122c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19122cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191230:
    // 0x191230: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_191234:
    // 0x191234: 0x28a2001a  slti        $v0, $a1, 0x1A
    ctx->pc = 0x191234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
label_191238:
    // 0x191238: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_19123c:
    if (ctx->pc == 0x19123Cu) {
        ctx->pc = 0x19123Cu;
            // 0x19123c: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->pc = 0x191240u;
        goto label_191240;
    }
    ctx->pc = 0x191238u;
    {
        const bool branch_taken_0x191238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19123Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191238u;
            // 0x19123c: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191238) {
            ctx->pc = 0x1912B0u;
            goto label_1912b0;
        }
    }
    ctx->pc = 0x191240u;
label_191240:
    // 0x191240: 0x24a5ffe6  addiu       $a1, $a1, -0x1A
    ctx->pc = 0x191240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967270));
label_191244:
    // 0x191244: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_191248:
    if (ctx->pc == 0x191248u) {
        ctx->pc = 0x191248u;
            // 0x191248: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x19124Cu;
        goto label_19124c;
    }
    ctx->pc = 0x191244u;
    {
        const bool branch_taken_0x191244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x191248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191244u;
            // 0x191248: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191244) {
            ctx->pc = 0x191268u;
            goto label_191268;
        }
    }
    ctx->pc = 0x19124Cu;
label_19124c:
    // 0x19124c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x19124cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_191250:
    // 0x191250: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x191250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_191254:
    // 0x191254: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x191254u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_191258:
    // 0x191258: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x191258u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
label_19125c:
    // 0x19125c: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x19125cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_191260:
    // 0x191260: 0x10000004  b           . + 4 + (0x4 << 2)
label_191264:
    if (ctx->pc == 0x191264u) {
        ctx->pc = 0x191264u;
            // 0x191264: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x191268u;
        goto label_191268;
    }
    ctx->pc = 0x191260u;
    {
        const bool branch_taken_0x191260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191260u;
            // 0x191264: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191260) {
            ctx->pc = 0x191274u;
            goto label_191274;
        }
    }
    ctx->pc = 0x191268u;
label_191268:
    // 0x191268: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x191268u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
label_19126c:
    // 0x19126c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x19126cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_191270:
    // 0x191270: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x191270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_191274:
    // 0x191274: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x191274u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191278:
    // 0x191278: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19127c:
    // 0x19127c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19127cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191280:
    // 0x191280: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191284:
    // 0x191284: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191284u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191288:
    // 0x191288: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x191288u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19128c:
    // 0x19128c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x19128cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_191290:
    // 0x191290: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191294:
    // 0x191294: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191294u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191298:
    // 0x191298: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191298u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19129c:
    // 0x19129c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x19129cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1912a0:
    // 0x1912a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1912a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1912a4:
    // 0x1912a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1912a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1912a8:
    // 0x1912a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1912ac:
    if (ctx->pc == 0x1912ACu) {
        ctx->pc = 0x1912ACu;
            // 0x1912ac: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x1912B0u;
        goto label_1912b0;
    }
    ctx->pc = 0x1912A8u;
    {
        const bool branch_taken_0x1912a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1912A8u;
            // 0x1912ac: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912a8) {
            ctx->pc = 0x1912BCu;
            goto label_1912bc;
        }
    }
    ctx->pc = 0x1912B0u;
label_1912b0:
    // 0x1912b0: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1912b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_1912b4:
    // 0x1912b4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1912b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1912b8:
    // 0x1912b8: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1912b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_1912bc:
    // 0x1912bc: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1912bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1912c0:
    // 0x1912c0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1912c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1912c4:
    // 0x1912c4: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
label_1912c8:
    if (ctx->pc == 0x1912C8u) {
        ctx->pc = 0x1912C8u;
            // 0x1912c8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1912CCu;
        goto label_1912cc;
    }
    ctx->pc = 0x1912C4u;
    {
        const bool branch_taken_0x1912c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1912C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1912C4u;
            // 0x1912c8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912c4) {
            ctx->pc = 0x191310u;
            goto label_191310;
        }
    }
    ctx->pc = 0x1912CCu;
label_1912cc:
    // 0x1912cc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1912ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1912d0:
    // 0x1912d0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1912d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1912d4:
    // 0x1912d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1912d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1912d8:
    // 0x1912d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1912d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1912dc:
    // 0x1912dc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1912dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1912e0:
    // 0x1912e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1912e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1912e4:
    // 0x1912e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1912e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1912e8:
    // 0x1912e8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1912e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1912ec:
    // 0x1912ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1912ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1912f0:
    // 0x1912f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1912f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1912f4:
    // 0x1912f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1912f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1912f8:
    // 0x1912f8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1912f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1912fc:
    // 0x1912fc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1912fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_191300:
    // 0x191300: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191304:
    // 0x191304: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191304u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191308:
    // 0x191308: 0x10000003  b           . + 4 + (0x3 << 2)
label_19130c:
    if (ctx->pc == 0x19130Cu) {
        ctx->pc = 0x19130Cu;
            // 0x19130c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x191310u;
        goto label_191310;
    }
    ctx->pc = 0x191308u;
    {
        const bool branch_taken_0x191308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19130Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191308u;
            // 0x19130c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191308) {
            ctx->pc = 0x191318u;
            goto label_191318;
        }
    }
    ctx->pc = 0x191310u;
label_191310:
    // 0x191310: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x191310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_191314:
    // 0x191314: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x191314u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_191318:
    // 0x191318: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x191318u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_19131c:
    // 0x19131c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x19131cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_191320:
    // 0x191320: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_191324:
    if (ctx->pc == 0x191324u) {
        ctx->pc = 0x191324u;
            // 0x191324: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x191328u;
        goto label_191328;
    }
    ctx->pc = 0x191320u;
    {
        const bool branch_taken_0x191320 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x191324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191320u;
            // 0x191324: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191320) {
            ctx->pc = 0x191370u;
            goto label_191370;
        }
    }
    ctx->pc = 0x191328u;
label_191328:
    // 0x191328: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x191328u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19132c:
    // 0x19132c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x19132cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191330:
    // 0x191330: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191334:
    // 0x191334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191338:
    // 0x191338: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191338u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19133c:
    // 0x19133c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19133cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191340:
    // 0x191340: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191340u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191344:
    // 0x191344: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x191344u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191348:
    // 0x191348: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19134c:
    // 0x19134c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19134cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191350:
    // 0x191350: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191350u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191354:
    // 0x191354: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191358:
    // 0x191358: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x191358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_19135c:
    // 0x19135c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19135cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191360:
    // 0x191360: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191360u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191364:
    // 0x191364: 0x10000004  b           . + 4 + (0x4 << 2)
label_191368:
    if (ctx->pc == 0x191368u) {
        ctx->pc = 0x191368u;
            // 0x191368: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x19136Cu;
        goto label_19136c;
    }
    ctx->pc = 0x191364u;
    {
        const bool branch_taken_0x191364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191364u;
            // 0x191368: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191364) {
            ctx->pc = 0x191378u;
            goto label_191378;
        }
    }
    ctx->pc = 0x19136Cu;
label_19136c:
    // 0x19136c: 0x0  nop
    ctx->pc = 0x19136cu;
    // NOP
label_191370:
    // 0x191370: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x191370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_191374:
    // 0x191374: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x191374u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_191378:
    // 0x191378: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x191378u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_19137c:
    // 0x19137c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x19137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_191380:
    // 0x191380: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_191384:
    if (ctx->pc == 0x191384u) {
        ctx->pc = 0x191384u;
            // 0x191384: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x191388u;
        goto label_191388;
    }
    ctx->pc = 0x191380u;
    {
        const bool branch_taken_0x191380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x191384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191380u;
            // 0x191384: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191380) {
            ctx->pc = 0x1913D0u;
            goto label_1913d0;
        }
    }
    ctx->pc = 0x191388u;
label_191388:
    // 0x191388: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x191388u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19138c:
    // 0x19138c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x19138cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191390:
    // 0x191390: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191394:
    // 0x191394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191398:
    // 0x191398: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191398u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19139c:
    // 0x19139c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19139cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1913a0:
    // 0x1913a0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1913a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1913a4:
    // 0x1913a4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1913a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1913a8:
    // 0x1913a8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1913a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1913ac:
    // 0x1913ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1913acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1913b0:
    // 0x1913b0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1913b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1913b4:
    // 0x1913b4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1913b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1913b8:
    // 0x1913b8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1913b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1913bc:
    // 0x1913bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1913bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1913c0:
    // 0x1913c0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1913c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1913c4:
    // 0x1913c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1913c8:
    if (ctx->pc == 0x1913C8u) {
        ctx->pc = 0x1913C8u;
            // 0x1913c8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x1913CCu;
        goto label_1913cc;
    }
    ctx->pc = 0x1913C4u;
    {
        const bool branch_taken_0x1913c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1913C4u;
            // 0x1913c8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913c4) {
            ctx->pc = 0x1913D8u;
            goto label_1913d8;
        }
    }
    ctx->pc = 0x1913CCu;
label_1913cc:
    // 0x1913cc: 0x0  nop
    ctx->pc = 0x1913ccu;
    // NOP
label_1913d0:
    // 0x1913d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1913d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1913d4:
    // 0x1913d4: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1913d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1913d8:
    // 0x1913d8: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1913d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1913dc:
    // 0x1913dc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1913dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1913e0:
    // 0x1913e0: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1913e4:
    if (ctx->pc == 0x1913E4u) {
        ctx->pc = 0x1913E4u;
            // 0x1913e4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x1913E8u;
        goto label_1913e8;
    }
    ctx->pc = 0x1913E0u;
    {
        const bool branch_taken_0x1913e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1913E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1913E0u;
            // 0x1913e4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913e0) {
            ctx->pc = 0x191430u;
            goto label_191430;
        }
    }
    ctx->pc = 0x1913E8u;
label_1913e8:
    // 0x1913e8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1913e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1913ec:
    // 0x1913ec: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1913ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1913f0:
    // 0x1913f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1913f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1913f4:
    // 0x1913f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1913f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1913f8:
    // 0x1913f8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1913f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1913fc:
    // 0x1913fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1913fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191400:
    // 0x191400: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191400u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191404:
    // 0x191404: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x191404u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191408:
    // 0x191408: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19140c:
    // 0x19140c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19140cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191410:
    // 0x191410: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191410u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191414:
    // 0x191414: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191414u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191418:
    // 0x191418: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x191418u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_19141c:
    // 0x19141c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19141cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191420:
    // 0x191420: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191420u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191424:
    // 0x191424: 0x10000004  b           . + 4 + (0x4 << 2)
label_191428:
    if (ctx->pc == 0x191428u) {
        ctx->pc = 0x191428u;
            // 0x191428: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x19142Cu;
        goto label_19142c;
    }
    ctx->pc = 0x191424u;
    {
        const bool branch_taken_0x191424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191424u;
            // 0x191428: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191424) {
            ctx->pc = 0x191438u;
            goto label_191438;
        }
    }
    ctx->pc = 0x19142Cu;
label_19142c:
    // 0x19142c: 0x0  nop
    ctx->pc = 0x19142cu;
    // NOP
label_191430:
    // 0x191430: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x191430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_191434:
    // 0x191434: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x191434u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_191438:
    // 0x191438: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x191438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19143c:
    // 0x19143c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x19143cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_191440:
    // 0x191440: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_191444:
    if (ctx->pc == 0x191444u) {
        ctx->pc = 0x191444u;
            // 0x191444: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x191448u;
        goto label_191448;
    }
    ctx->pc = 0x191440u;
    {
        const bool branch_taken_0x191440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191440) {
            ctx->pc = 0x191444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191440u;
            // 0x191444: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191488u;
            goto label_191488;
        }
    }
    ctx->pc = 0x191448u;
label_191448:
    // 0x191448: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x191448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_19144c:
    // 0x19144c: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x19144cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_191450:
    // 0x191450: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x191450u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191454:
    // 0x191454: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191458:
    // 0x191458: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191458u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19145c:
    // 0x19145c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19145cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191460:
    // 0x191460: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191460u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191464:
    // 0x191464: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x191464u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191468:
    // 0x191468: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19146c:
    // 0x19146c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19146cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191470:
    // 0x191470: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191474:
    // 0x191474: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191474u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191478:
    // 0x191478: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x191478u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_19147c:
    // 0x19147c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19147cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191480:
    // 0x191480: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191480u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191484:
    // 0x191484: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191484u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_191488:
    // 0x191488: 0x28a2001b  slti        $v0, $a1, 0x1B
    ctx->pc = 0x191488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
label_19148c:
    // 0x19148c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_191490:
    if (ctx->pc == 0x191490u) {
        ctx->pc = 0x191490u;
            // 0x191490: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->pc = 0x191494u;
        goto label_191494;
    }
    ctx->pc = 0x19148Cu;
    {
        const bool branch_taken_0x19148c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19148Cu;
            // 0x191490: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19148c) {
            ctx->pc = 0x191508u;
            goto label_191508;
        }
    }
    ctx->pc = 0x191494u;
label_191494:
    // 0x191494: 0x24a5ffe5  addiu       $a1, $a1, -0x1B
    ctx->pc = 0x191494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967269));
label_191498:
    // 0x191498: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_19149c:
    if (ctx->pc == 0x19149Cu) {
        ctx->pc = 0x19149Cu;
            // 0x19149c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1914A0u;
        goto label_1914a0;
    }
    ctx->pc = 0x191498u;
    {
        const bool branch_taken_0x191498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191498u;
            // 0x19149c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191498) {
            ctx->pc = 0x1914C0u;
            goto label_1914c0;
        }
    }
    ctx->pc = 0x1914A0u;
label_1914a0:
    // 0x1914a0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1914a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1914a4:
    // 0x1914a4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1914a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1914a8:
    // 0x1914a8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1914a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1914ac:
    // 0x1914ac: 0x91ec2  srl         $v1, $t1, 27
    ctx->pc = 0x1914acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
label_1914b0:
    // 0x1914b0: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1914b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1914b4:
    // 0x1914b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1914b8:
    if (ctx->pc == 0x1914B8u) {
        ctx->pc = 0x1914B8u;
            // 0x1914b8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x1914BCu;
        goto label_1914bc;
    }
    ctx->pc = 0x1914B4u;
    {
        const bool branch_taken_0x1914b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1914B4u;
            // 0x1914b8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914b4) {
            ctx->pc = 0x1914CCu;
            goto label_1914cc;
        }
    }
    ctx->pc = 0x1914BCu;
label_1914bc:
    // 0x1914bc: 0x0  nop
    ctx->pc = 0x1914bcu;
    // NOP
label_1914c0:
    // 0x1914c0: 0x916c2  srl         $v0, $t1, 27
    ctx->pc = 0x1914c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
label_1914c4:
    // 0x1914c4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1914c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1914c8:
    // 0x1914c8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1914c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1914cc:
    // 0x1914cc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1914ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1914d0:
    // 0x1914d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1914d4:
    // 0x1914d4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1914d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1914d8:
    // 0x1914d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1914d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1914dc:
    // 0x1914dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1914dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1914e0:
    // 0x1914e0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1914e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1914e4:
    // 0x1914e4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1914e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1914e8:
    // 0x1914e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1914e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1914ec:
    // 0x1914ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1914ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1914f0:
    // 0x1914f0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1914f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1914f4:
    // 0x1914f4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1914f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1914f8:
    // 0x1914f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1914f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1914fc:
    // 0x1914fc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1914fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191500:
    // 0x191500: 0x10000004  b           . + 4 + (0x4 << 2)
label_191504:
    if (ctx->pc == 0x191504u) {
        ctx->pc = 0x191504u;
            // 0x191504: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x191508u;
        goto label_191508;
    }
    ctx->pc = 0x191500u;
    {
        const bool branch_taken_0x191500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191500u;
            // 0x191504: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191500) {
            ctx->pc = 0x191514u;
            goto label_191514;
        }
    }
    ctx->pc = 0x191508u;
label_191508:
    // 0x191508: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x191508u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_19150c:
    // 0x19150c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x19150cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_191510:
    // 0x191510: 0x24a50005  addiu       $a1, $a1, 0x5
    ctx->pc = 0x191510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_191514:
    // 0x191514: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x191514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_191518:
    // 0x191518: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_19151c:
    if (ctx->pc == 0x19151Cu) {
        ctx->pc = 0x19151Cu;
            // 0x19151c: 0x99602  srl         $s2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->pc = 0x191520u;
        goto label_191520;
    }
    ctx->pc = 0x191518u;
    {
        const bool branch_taken_0x191518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191518u;
            // 0x19151c: 0x99602  srl         $s2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191518) {
            ctx->pc = 0x191588u;
            goto label_191588;
        }
    }
    ctx->pc = 0x191520u;
label_191520:
    // 0x191520: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x191520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
label_191524:
    // 0x191524: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_191528:
    if (ctx->pc == 0x191528u) {
        ctx->pc = 0x191528u;
            // 0x191528: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x19152Cu;
        goto label_19152c;
    }
    ctx->pc = 0x191524u;
    {
        const bool branch_taken_0x191524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x191528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191524u;
            // 0x191528: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191524) {
            ctx->pc = 0x191548u;
            goto label_191548;
        }
    }
    ctx->pc = 0x19152Cu;
label_19152c:
    // 0x19152c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x19152cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_191530:
    // 0x191530: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x191530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_191534:
    // 0x191534: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x191534u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_191538:
    // 0x191538: 0x99602  srl         $s2, $t1, 24
    ctx->pc = 0x191538u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
label_19153c:
    // 0x19153c: 0x10000003  b           . + 4 + (0x3 << 2)
label_191540:
    if (ctx->pc == 0x191540u) {
        ctx->pc = 0x191540u;
            // 0x191540: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x191544u;
        goto label_191544;
    }
    ctx->pc = 0x19153Cu;
    {
        const bool branch_taken_0x19153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19153Cu;
            // 0x191540: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19153c) {
            ctx->pc = 0x19154Cu;
            goto label_19154c;
        }
    }
    ctx->pc = 0x191544u;
label_191544:
    // 0x191544: 0x0  nop
    ctx->pc = 0x191544u;
    // NOP
label_191548:
    // 0x191548: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x191548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19154c:
    // 0x19154c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x19154cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191550:
    // 0x191550: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191554:
    // 0x191554: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191554u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191558:
    // 0x191558: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19155c:
    // 0x19155c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19155cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191560:
    // 0x191560: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x191560u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191564:
    // 0x191564: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_191568:
    // 0x191568: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19156c:
    // 0x19156c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19156cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191570:
    // 0x191570: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191570u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191574:
    // 0x191574: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x191574u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_191578:
    // 0x191578: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19157c:
    // 0x19157c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19157cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191580:
    // 0x191580: 0x10000003  b           . + 4 + (0x3 << 2)
label_191584:
    if (ctx->pc == 0x191584u) {
        ctx->pc = 0x191584u;
            // 0x191584: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x191588u;
        goto label_191588;
    }
    ctx->pc = 0x191580u;
    {
        const bool branch_taken_0x191580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191580u;
            // 0x191584: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191580) {
            ctx->pc = 0x191590u;
            goto label_191590;
        }
    }
    ctx->pc = 0x191588u;
label_191588:
    // 0x191588: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x191588u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_19158c:
    // 0x19158c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x19158cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_191590:
    // 0x191590: 0x5210078  bgez        $t1, . + 4 + (0x78 << 2)
label_191594:
    if (ctx->pc == 0x191594u) {
        ctx->pc = 0x191594u;
            // 0x191594: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x191598u;
        goto label_191598;
    }
    ctx->pc = 0x191590u;
    {
        const bool branch_taken_0x191590 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x191594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191590u;
            // 0x191594: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191590) {
            ctx->pc = 0x191774u;
            goto label_191774;
        }
    }
    ctx->pc = 0x191598u;
label_191598:
    // 0x191598: 0x27ac0002  addiu       $t4, $sp, 0x2
    ctx->pc = 0x191598u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
label_19159c:
    // 0x19159c: 0x0  nop
    ctx->pc = 0x19159cu;
    // NOP
label_1915a0:
    // 0x1915a0: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x1915a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_1915a4:
    // 0x1915a4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1915a8:
    if (ctx->pc == 0x1915A8u) {
        ctx->pc = 0x1915A8u;
            // 0x1915a8: 0x93602  srl         $a2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->pc = 0x1915ACu;
        goto label_1915ac;
    }
    ctx->pc = 0x1915A4u;
    {
        const bool branch_taken_0x1915a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1915A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1915A4u;
            // 0x1915a8: 0x93602  srl         $a2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915a4) {
            ctx->pc = 0x191610u;
            goto label_191610;
        }
    }
    ctx->pc = 0x1915ACu;
label_1915ac:
    // 0x1915ac: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x1915acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
label_1915b0:
    // 0x1915b0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1915b4:
    if (ctx->pc == 0x1915B4u) {
        ctx->pc = 0x1915B4u;
            // 0x1915b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1915B8u;
        goto label_1915b8;
    }
    ctx->pc = 0x1915B0u;
    {
        const bool branch_taken_0x1915b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1915B0u;
            // 0x1915b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915b0) {
            ctx->pc = 0x1915D0u;
            goto label_1915d0;
        }
    }
    ctx->pc = 0x1915B8u;
label_1915b8:
    // 0x1915b8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1915b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1915bc:
    // 0x1915bc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1915bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1915c0:
    // 0x1915c0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1915c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1915c4:
    // 0x1915c4: 0x93602  srl         $a2, $t1, 24
    ctx->pc = 0x1915c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
label_1915c8:
    // 0x1915c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1915cc:
    if (ctx->pc == 0x1915CCu) {
        ctx->pc = 0x1915CCu;
            // 0x1915cc: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x1915D0u;
        goto label_1915d0;
    }
    ctx->pc = 0x1915C8u;
    {
        const bool branch_taken_0x1915c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1915C8u;
            // 0x1915cc: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915c8) {
            ctx->pc = 0x1915D4u;
            goto label_1915d4;
        }
    }
    ctx->pc = 0x1915D0u;
label_1915d0:
    // 0x1915d0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1915d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1915d4:
    // 0x1915d4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1915d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1915d8:
    // 0x1915d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1915d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1915dc:
    // 0x1915dc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1915dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1915e0:
    // 0x1915e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1915e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1915e4:
    // 0x1915e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1915e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1915e8:
    // 0x1915e8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1915e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1915ec:
    // 0x1915ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1915ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1915f0:
    // 0x1915f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1915f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1915f4:
    // 0x1915f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1915f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1915f8:
    // 0x1915f8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1915f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1915fc:
    // 0x1915fc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1915fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_191600:
    // 0x191600: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191604:
    // 0x191604: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191604u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191608:
    // 0x191608: 0x10000003  b           . + 4 + (0x3 << 2)
label_19160c:
    if (ctx->pc == 0x19160Cu) {
        ctx->pc = 0x19160Cu;
            // 0x19160c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x191610u;
        goto label_191610;
    }
    ctx->pc = 0x191608u;
    {
        const bool branch_taken_0x191608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19160Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191608u;
            // 0x19160c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191608) {
            ctx->pc = 0x191618u;
            goto label_191618;
        }
    }
    ctx->pc = 0x191610u;
label_191610:
    // 0x191610: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x191610u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_191614:
    // 0x191614: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x191614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_191618:
    // 0x191618: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x191618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_19161c:
    // 0x19161c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x19161cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_191620:
    // 0x191620: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_191624:
    if (ctx->pc == 0x191624u) {
        ctx->pc = 0x191624u;
            // 0x191624: 0x94880  sll         $t1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->pc = 0x191628u;
        goto label_191628;
    }
    ctx->pc = 0x191620u;
    {
        const bool branch_taken_0x191620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191620) {
            ctx->pc = 0x191624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191620u;
            // 0x191624: 0x94880  sll         $t1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191668u;
            goto label_191668;
        }
    }
    ctx->pc = 0x191628u;
label_191628:
    // 0x191628: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x191628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_19162c:
    // 0x19162c: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x19162cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_191630:
    // 0x191630: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x191630u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191634:
    // 0x191634: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191638:
    // 0x191638: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191638u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19163c:
    // 0x19163c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19163cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191640:
    // 0x191640: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191640u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191644:
    // 0x191644: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x191644u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191648:
    // 0x191648: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19164c:
    // 0x19164c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19164cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191650:
    // 0x191650: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191650u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191654:
    // 0x191654: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191654u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191658:
    // 0x191658: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x191658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_19165c:
    // 0x19165c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19165cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191660:
    // 0x191660: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191660u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191664:
    // 0x191664: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191664u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_191668:
    // 0x191668: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x191668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_19166c:
    // 0x19166c: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
label_191670:
    if (ctx->pc == 0x191670u) {
        ctx->pc = 0x191670u;
            // 0x191670: 0x957c2  srl         $t2, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->pc = 0x191674u;
        goto label_191674;
    }
    ctx->pc = 0x19166Cu;
    {
        const bool branch_taken_0x19166c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x191670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19166Cu;
            // 0x191670: 0x957c2  srl         $t2, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19166c) {
            ctx->pc = 0x1916B8u;
            goto label_1916b8;
        }
    }
    ctx->pc = 0x191674u;
label_191674:
    // 0x191674: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x191674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_191678:
    // 0x191678: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x191678u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19167c:
    // 0x19167c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19167cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191680:
    // 0x191680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191684:
    // 0x191684: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191684u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191688:
    // 0x191688: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19168c:
    // 0x19168c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19168cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191690:
    // 0x191690: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x191690u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191694:
    // 0x191694: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x191694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_191698:
    // 0x191698: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19169c:
    // 0x19169c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19169cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1916a0:
    // 0x1916a0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1916a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1916a4:
    // 0x1916a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1916a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1916a8:
    // 0x1916a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1916a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1916ac:
    // 0x1916ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1916acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1916b0:
    // 0x1916b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1916b4:
    if (ctx->pc == 0x1916B4u) {
        ctx->pc = 0x1916B4u;
            // 0x1916b4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x1916B8u;
        goto label_1916b8;
    }
    ctx->pc = 0x1916B0u;
    {
        const bool branch_taken_0x1916b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1916B0u;
            // 0x1916b4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916b0) {
            ctx->pc = 0x1916C0u;
            goto label_1916c0;
        }
    }
    ctx->pc = 0x1916B8u;
label_1916b8:
    // 0x1916b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1916b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1916bc:
    // 0x1916bc: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1916bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1916c0:
    // 0x1916c0: 0x28a20013  slti        $v0, $a1, 0x13
    ctx->pc = 0x1916c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)19) ? 1 : 0);
label_1916c4:
    // 0x1916c4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1916c8:
    if (ctx->pc == 0x1916C8u) {
        ctx->pc = 0x1916C8u;
            // 0x1916c8: 0x924c2  srl         $a0, $t1, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
        ctx->pc = 0x1916CCu;
        goto label_1916cc;
    }
    ctx->pc = 0x1916C4u;
    {
        const bool branch_taken_0x1916c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1916C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1916C4u;
            // 0x1916c8: 0x924c2  srl         $a0, $t1, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916c4) {
            ctx->pc = 0x191730u;
            goto label_191730;
        }
    }
    ctx->pc = 0x1916CCu;
label_1916cc:
    // 0x1916cc: 0x24a5ffed  addiu       $a1, $a1, -0x13
    ctx->pc = 0x1916ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967277));
label_1916d0:
    // 0x1916d0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1916d4:
    if (ctx->pc == 0x1916D4u) {
        ctx->pc = 0x1916D4u;
            // 0x1916d4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x1916D8u;
        goto label_1916d8;
    }
    ctx->pc = 0x1916D0u;
    {
        const bool branch_taken_0x1916d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1916D0u;
            // 0x1916d4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916d0) {
            ctx->pc = 0x1916F0u;
            goto label_1916f0;
        }
    }
    ctx->pc = 0x1916D8u;
label_1916d8:
    // 0x1916d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1916d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1916dc:
    // 0x1916dc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1916dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1916e0:
    // 0x1916e0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1916e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1916e4:
    // 0x1916e4: 0x924c2  srl         $a0, $t1, 19
    ctx->pc = 0x1916e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
label_1916e8:
    // 0x1916e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1916ec:
    if (ctx->pc == 0x1916ECu) {
        ctx->pc = 0x1916ECu;
            // 0x1916ec: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x1916F0u;
        goto label_1916f0;
    }
    ctx->pc = 0x1916E8u;
    {
        const bool branch_taken_0x1916e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1916E8u;
            // 0x1916ec: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916e8) {
            ctx->pc = 0x1916F4u;
            goto label_1916f4;
        }
    }
    ctx->pc = 0x1916F0u;
label_1916f0:
    // 0x1916f0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1916f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1916f4:
    // 0x1916f4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1916f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1916f8:
    // 0x1916f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1916f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1916fc:
    // 0x1916fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1916fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_191700:
    // 0x191700: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191704:
    // 0x191704: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191704u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191708:
    // 0x191708: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x191708u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19170c:
    // 0x19170c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x19170cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_191710:
    // 0x191710: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191714:
    // 0x191714: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191714u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191718:
    // 0x191718: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x191718u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19171c:
    // 0x19171c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x19171cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_191720:
    // 0x191720: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x191720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_191724:
    // 0x191724: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x191724u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_191728:
    // 0x191728: 0x10000003  b           . + 4 + (0x3 << 2)
label_19172c:
    if (ctx->pc == 0x19172Cu) {
        ctx->pc = 0x19172Cu;
            // 0x19172c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x191730u;
        goto label_191730;
    }
    ctx->pc = 0x191728u;
    {
        const bool branch_taken_0x191728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191728u;
            // 0x19172c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191728) {
            ctx->pc = 0x191738u;
            goto label_191738;
        }
    }
    ctx->pc = 0x191730u;
label_191730:
    // 0x191730: 0x94b40  sll         $t1, $t1, 13
    ctx->pc = 0x191730u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 13));
label_191734:
    // 0x191734: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x191734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_191738:
    // 0x191738: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x191738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_19173c:
    // 0x19173c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19173cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191740:
    // 0x191740: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x191740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_191744:
    // 0x191744: 0xa0460010  sb          $a2, 0x10($v0)
    ctx->pc = 0x191744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 6));
label_191748:
    // 0x191748: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x191748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_19174c:
    // 0x19174c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19174cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191750:
    // 0x191750: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x191750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_191754:
    // 0x191754: 0xa06a0011  sb          $t2, 0x11($v1)
    ctx->pc = 0x191754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 10));
label_191758:
    // 0x191758: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x191758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_19175c:
    // 0x19175c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19175cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191760:
    // 0x191760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_191764:
    // 0x191764: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x191764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_191768:
    // 0x191768: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x191768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_19176c:
    // 0x19176c: 0x520ff8c  bltz        $t1, . + 4 + (-0x74 << 2)
label_191770:
    if (ctx->pc == 0x191770u) {
        ctx->pc = 0x191770u;
            // 0x191770: 0xa4640010  sh          $a0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x191774u;
        goto label_191774;
    }
    ctx->pc = 0x19176Cu;
    {
        const bool branch_taken_0x19176c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x191770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19176Cu;
            // 0x191770: 0xa4640010  sh          $a0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19176c) {
            ctx->pc = 0x1915A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1915a0;
        }
    }
    ctx->pc = 0x191774u;
label_191774:
    // 0x191774: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x191774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_191778:
    // 0x191778: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x191778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_19177c:
    // 0x19177c: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_191780:
    // 0x191780: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_191784:
    // 0x191784: 0x8b1023  subu        $v0, $a0, $t3
    ctx->pc = 0x191784u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_191788:
    // 0x191788: 0xc064928  jal         func_1924A0
label_19178c:
    if (ctx->pc == 0x19178Cu) {
        ctx->pc = 0x19178Cu;
            // 0x19178c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x191790u;
        goto label_191790;
    }
    ctx->pc = 0x191788u;
    SET_GPR_U32(ctx, 31, 0x191790u);
    ctx->pc = 0x19178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191788u;
            // 0x19178c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1924A0u;
    if (runtime->hasFunction(0x1924A0u)) {
        auto targetFn = runtime->lookupFunction(0x1924A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191790u; }
        if (ctx->pc != 0x191790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001924A0_0x1924a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191790u; }
        if (ctx->pc != 0x191790u) { return; }
    }
    ctx->pc = 0x191790u;
label_191790:
    // 0x191790: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_191794:
    if (ctx->pc == 0x191794u) {
        ctx->pc = 0x191794u;
            // 0x191794: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->pc = 0x191798u;
        goto label_191798;
    }
    ctx->pc = 0x191790u;
    {
        const bool branch_taken_0x191790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191790) {
            ctx->pc = 0x191794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191790u;
            // 0x191794: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1917BCu;
            goto label_1917bc;
        }
    }
    ctx->pc = 0x191798u;
label_191798:
    // 0x191798: 0xc064928  jal         func_1924A0
label_19179c:
    if (ctx->pc == 0x19179Cu) {
        ctx->pc = 0x19179Cu;
            // 0x19179c: 0x2604fff9  addiu       $a0, $s0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
        ctx->pc = 0x1917A0u;
        goto label_1917a0;
    }
    ctx->pc = 0x191798u;
    SET_GPR_U32(ctx, 31, 0x1917A0u);
    ctx->pc = 0x19179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191798u;
            // 0x19179c: 0x2604fff9  addiu       $a0, $s0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1924A0u;
    if (runtime->hasFunction(0x1924A0u)) {
        auto targetFn = runtime->lookupFunction(0x1924A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917A0u; }
        if (ctx->pc != 0x1917A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001924A0_0x1924a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917A0u; }
        if (ctx->pc != 0x1917A0u) { return; }
    }
    ctx->pc = 0x1917A0u;
label_1917a0:
    // 0x1917a0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1917a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1917a4:
    // 0x1917a4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1917a8:
    if (ctx->pc == 0x1917A8u) {
        ctx->pc = 0x1917A8u;
            // 0x1917a8: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->pc = 0x1917ACu;
        goto label_1917ac;
    }
    ctx->pc = 0x1917A4u;
    {
        const bool branch_taken_0x1917a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1917a4) {
            ctx->pc = 0x1917A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1917A4u;
            // 0x1917a8: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1917BCu;
            goto label_1917bc;
        }
    }
    ctx->pc = 0x1917ACu;
label_1917ac:
    // 0x1917ac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1917acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1917b0:
    // 0x1917b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1917b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1917b4:
    // 0x1917b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1917b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1917b8:
    // 0x1917b8: 0x8e8c00e4  lw          $t4, 0xE4($s4)
    ctx->pc = 0x1917b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_1917bc:
    // 0x1917bc: 0x11800015  beqz        $t4, . + 4 + (0x15 << 2)
label_1917c0:
    if (ctx->pc == 0x1917C0u) {
        ctx->pc = 0x1917C0u;
            // 0x1917c0: 0x324b007f  andi        $t3, $s2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
        ctx->pc = 0x1917C4u;
        goto label_1917c4;
    }
    ctx->pc = 0x1917BCu;
    {
        const bool branch_taken_0x1917bc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1917BCu;
            // 0x1917c0: 0x324b007f  andi        $t3, $s2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917bc) {
            ctx->pc = 0x191814u;
            goto label_191814;
        }
    }
    ctx->pc = 0x1917C4u;
label_1917c4:
    // 0x1917c4: 0x92240018  lbu         $a0, 0x18($s1)
    ctx->pc = 0x1917c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_1917c8:
    // 0x1917c8: 0x922a000c  lbu         $t2, 0xC($s1)
    ctx->pc = 0x1917c8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_1917cc:
    // 0x1917cc: 0x1249c2  srl         $t1, $s2, 7
    ctx->pc = 0x1917ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
label_1917d0:
    // 0x1917d0: 0x92270008  lbu         $a3, 0x8($s1)
    ctx->pc = 0x1917d0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_1917d4:
    // 0x1917d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1917d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1917d8:
    // 0x1917d8: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1917d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_1917dc:
    // 0x1917dc: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x1917dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_1917e0:
    // 0x1917e0: 0x9226001c  lbu         $a2, 0x1C($s1)
    ctx->pc = 0x1917e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_1917e4:
    // 0x1917e4: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x1917e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1917e8:
    // 0x1917e8: 0xa3a70004  sb          $a3, 0x4($sp)
    ctx->pc = 0x1917e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 7));
label_1917ec:
    // 0x1917ec: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x1917ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
label_1917f0:
    // 0x1917f0: 0xa3a30006  sb          $v1, 0x6($sp)
    ctx->pc = 0x1917f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 3));
label_1917f4:
    // 0x1917f4: 0xa3a40007  sb          $a0, 0x7($sp)
    ctx->pc = 0x1917f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 4));
label_1917f8:
    // 0x1917f8: 0xa3a60008  sb          $a2, 0x8($sp)
    ctx->pc = 0x1917f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 6));
label_1917fc:
    // 0x1917fc: 0xa3aa0009  sb          $t2, 0x9($sp)
    ctx->pc = 0x1917fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 10));
label_191800:
    // 0x191800: 0xa3a9000a  sb          $t1, 0xA($sp)
    ctx->pc = 0x191800u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 9));
label_191804:
    // 0x191804: 0xa3ab000b  sb          $t3, 0xB($sp)
    ctx->pc = 0x191804u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 11), (uint8_t)GPR_U32(ctx, 11));
label_191808:
    // 0x191808: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x191808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_19180c:
    // 0x19180c: 0x180f809  jalr        $t4
label_191810:
    if (ctx->pc == 0x191810u) {
        ctx->pc = 0x191810u;
            // 0x191810: 0x8e8400e8  lw          $a0, 0xE8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
        ctx->pc = 0x191814u;
        goto label_191814;
    }
    ctx->pc = 0x19180Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 31, 0x191814u);
        ctx->pc = 0x191810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19180Cu;
            // 0x191810: 0x8e8400e8  lw          $a0, 0xE8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191814u; }
            if (ctx->pc != 0x191814u) { return; }
        }
        }
    }
    ctx->pc = 0x191814u;
label_191814:
    // 0x191814: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x191814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_191818:
    // 0x191818: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x191818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_19181c:
    // 0x19181c: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x19181cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_191820:
    // 0x191820: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x191820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_191824:
    // 0x191824: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x191824u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_191828:
    // 0x191828: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x191828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_19182c:
    // 0x19182c: 0x3e00008  jr          $ra
label_191830:
    if (ctx->pc == 0x191830u) {
        ctx->pc = 0x191830u;
            // 0x191830: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x191834u;
        goto label_191834;
    }
    ctx->pc = 0x19182Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19182Cu;
            // 0x191830: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191834u;
label_191834:
    // 0x191834: 0x0  nop
    ctx->pc = 0x191834u;
    // NOP
}
