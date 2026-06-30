#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348D60
// Address: 0x348d60 - 0x3497b0
void sub_00348D60_0x348d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348D60_0x348d60");
#endif

    switch (ctx->pc) {
        case 0x348d60u: goto label_348d60;
        case 0x348d64u: goto label_348d64;
        case 0x348d68u: goto label_348d68;
        case 0x348d6cu: goto label_348d6c;
        case 0x348d70u: goto label_348d70;
        case 0x348d74u: goto label_348d74;
        case 0x348d78u: goto label_348d78;
        case 0x348d7cu: goto label_348d7c;
        case 0x348d80u: goto label_348d80;
        case 0x348d84u: goto label_348d84;
        case 0x348d88u: goto label_348d88;
        case 0x348d8cu: goto label_348d8c;
        case 0x348d90u: goto label_348d90;
        case 0x348d94u: goto label_348d94;
        case 0x348d98u: goto label_348d98;
        case 0x348d9cu: goto label_348d9c;
        case 0x348da0u: goto label_348da0;
        case 0x348da4u: goto label_348da4;
        case 0x348da8u: goto label_348da8;
        case 0x348dacu: goto label_348dac;
        case 0x348db0u: goto label_348db0;
        case 0x348db4u: goto label_348db4;
        case 0x348db8u: goto label_348db8;
        case 0x348dbcu: goto label_348dbc;
        case 0x348dc0u: goto label_348dc0;
        case 0x348dc4u: goto label_348dc4;
        case 0x348dc8u: goto label_348dc8;
        case 0x348dccu: goto label_348dcc;
        case 0x348dd0u: goto label_348dd0;
        case 0x348dd4u: goto label_348dd4;
        case 0x348dd8u: goto label_348dd8;
        case 0x348ddcu: goto label_348ddc;
        case 0x348de0u: goto label_348de0;
        case 0x348de4u: goto label_348de4;
        case 0x348de8u: goto label_348de8;
        case 0x348decu: goto label_348dec;
        case 0x348df0u: goto label_348df0;
        case 0x348df4u: goto label_348df4;
        case 0x348df8u: goto label_348df8;
        case 0x348dfcu: goto label_348dfc;
        case 0x348e00u: goto label_348e00;
        case 0x348e04u: goto label_348e04;
        case 0x348e08u: goto label_348e08;
        case 0x348e0cu: goto label_348e0c;
        case 0x348e10u: goto label_348e10;
        case 0x348e14u: goto label_348e14;
        case 0x348e18u: goto label_348e18;
        case 0x348e1cu: goto label_348e1c;
        case 0x348e20u: goto label_348e20;
        case 0x348e24u: goto label_348e24;
        case 0x348e28u: goto label_348e28;
        case 0x348e2cu: goto label_348e2c;
        case 0x348e30u: goto label_348e30;
        case 0x348e34u: goto label_348e34;
        case 0x348e38u: goto label_348e38;
        case 0x348e3cu: goto label_348e3c;
        case 0x348e40u: goto label_348e40;
        case 0x348e44u: goto label_348e44;
        case 0x348e48u: goto label_348e48;
        case 0x348e4cu: goto label_348e4c;
        case 0x348e50u: goto label_348e50;
        case 0x348e54u: goto label_348e54;
        case 0x348e58u: goto label_348e58;
        case 0x348e5cu: goto label_348e5c;
        case 0x348e60u: goto label_348e60;
        case 0x348e64u: goto label_348e64;
        case 0x348e68u: goto label_348e68;
        case 0x348e6cu: goto label_348e6c;
        case 0x348e70u: goto label_348e70;
        case 0x348e74u: goto label_348e74;
        case 0x348e78u: goto label_348e78;
        case 0x348e7cu: goto label_348e7c;
        case 0x348e80u: goto label_348e80;
        case 0x348e84u: goto label_348e84;
        case 0x348e88u: goto label_348e88;
        case 0x348e8cu: goto label_348e8c;
        case 0x348e90u: goto label_348e90;
        case 0x348e94u: goto label_348e94;
        case 0x348e98u: goto label_348e98;
        case 0x348e9cu: goto label_348e9c;
        case 0x348ea0u: goto label_348ea0;
        case 0x348ea4u: goto label_348ea4;
        case 0x348ea8u: goto label_348ea8;
        case 0x348eacu: goto label_348eac;
        case 0x348eb0u: goto label_348eb0;
        case 0x348eb4u: goto label_348eb4;
        case 0x348eb8u: goto label_348eb8;
        case 0x348ebcu: goto label_348ebc;
        case 0x348ec0u: goto label_348ec0;
        case 0x348ec4u: goto label_348ec4;
        case 0x348ec8u: goto label_348ec8;
        case 0x348eccu: goto label_348ecc;
        case 0x348ed0u: goto label_348ed0;
        case 0x348ed4u: goto label_348ed4;
        case 0x348ed8u: goto label_348ed8;
        case 0x348edcu: goto label_348edc;
        case 0x348ee0u: goto label_348ee0;
        case 0x348ee4u: goto label_348ee4;
        case 0x348ee8u: goto label_348ee8;
        case 0x348eecu: goto label_348eec;
        case 0x348ef0u: goto label_348ef0;
        case 0x348ef4u: goto label_348ef4;
        case 0x348ef8u: goto label_348ef8;
        case 0x348efcu: goto label_348efc;
        case 0x348f00u: goto label_348f00;
        case 0x348f04u: goto label_348f04;
        case 0x348f08u: goto label_348f08;
        case 0x348f0cu: goto label_348f0c;
        case 0x348f10u: goto label_348f10;
        case 0x348f14u: goto label_348f14;
        case 0x348f18u: goto label_348f18;
        case 0x348f1cu: goto label_348f1c;
        case 0x348f20u: goto label_348f20;
        case 0x348f24u: goto label_348f24;
        case 0x348f28u: goto label_348f28;
        case 0x348f2cu: goto label_348f2c;
        case 0x348f30u: goto label_348f30;
        case 0x348f34u: goto label_348f34;
        case 0x348f38u: goto label_348f38;
        case 0x348f3cu: goto label_348f3c;
        case 0x348f40u: goto label_348f40;
        case 0x348f44u: goto label_348f44;
        case 0x348f48u: goto label_348f48;
        case 0x348f4cu: goto label_348f4c;
        case 0x348f50u: goto label_348f50;
        case 0x348f54u: goto label_348f54;
        case 0x348f58u: goto label_348f58;
        case 0x348f5cu: goto label_348f5c;
        case 0x348f60u: goto label_348f60;
        case 0x348f64u: goto label_348f64;
        case 0x348f68u: goto label_348f68;
        case 0x348f6cu: goto label_348f6c;
        case 0x348f70u: goto label_348f70;
        case 0x348f74u: goto label_348f74;
        case 0x348f78u: goto label_348f78;
        case 0x348f7cu: goto label_348f7c;
        case 0x348f80u: goto label_348f80;
        case 0x348f84u: goto label_348f84;
        case 0x348f88u: goto label_348f88;
        case 0x348f8cu: goto label_348f8c;
        case 0x348f90u: goto label_348f90;
        case 0x348f94u: goto label_348f94;
        case 0x348f98u: goto label_348f98;
        case 0x348f9cu: goto label_348f9c;
        case 0x348fa0u: goto label_348fa0;
        case 0x348fa4u: goto label_348fa4;
        case 0x348fa8u: goto label_348fa8;
        case 0x348facu: goto label_348fac;
        case 0x348fb0u: goto label_348fb0;
        case 0x348fb4u: goto label_348fb4;
        case 0x348fb8u: goto label_348fb8;
        case 0x348fbcu: goto label_348fbc;
        case 0x348fc0u: goto label_348fc0;
        case 0x348fc4u: goto label_348fc4;
        case 0x348fc8u: goto label_348fc8;
        case 0x348fccu: goto label_348fcc;
        case 0x348fd0u: goto label_348fd0;
        case 0x348fd4u: goto label_348fd4;
        case 0x348fd8u: goto label_348fd8;
        case 0x348fdcu: goto label_348fdc;
        case 0x348fe0u: goto label_348fe0;
        case 0x348fe4u: goto label_348fe4;
        case 0x348fe8u: goto label_348fe8;
        case 0x348fecu: goto label_348fec;
        case 0x348ff0u: goto label_348ff0;
        case 0x348ff4u: goto label_348ff4;
        case 0x348ff8u: goto label_348ff8;
        case 0x348ffcu: goto label_348ffc;
        case 0x349000u: goto label_349000;
        case 0x349004u: goto label_349004;
        case 0x349008u: goto label_349008;
        case 0x34900cu: goto label_34900c;
        case 0x349010u: goto label_349010;
        case 0x349014u: goto label_349014;
        case 0x349018u: goto label_349018;
        case 0x34901cu: goto label_34901c;
        case 0x349020u: goto label_349020;
        case 0x349024u: goto label_349024;
        case 0x349028u: goto label_349028;
        case 0x34902cu: goto label_34902c;
        case 0x349030u: goto label_349030;
        case 0x349034u: goto label_349034;
        case 0x349038u: goto label_349038;
        case 0x34903cu: goto label_34903c;
        case 0x349040u: goto label_349040;
        case 0x349044u: goto label_349044;
        case 0x349048u: goto label_349048;
        case 0x34904cu: goto label_34904c;
        case 0x349050u: goto label_349050;
        case 0x349054u: goto label_349054;
        case 0x349058u: goto label_349058;
        case 0x34905cu: goto label_34905c;
        case 0x349060u: goto label_349060;
        case 0x349064u: goto label_349064;
        case 0x349068u: goto label_349068;
        case 0x34906cu: goto label_34906c;
        case 0x349070u: goto label_349070;
        case 0x349074u: goto label_349074;
        case 0x349078u: goto label_349078;
        case 0x34907cu: goto label_34907c;
        case 0x349080u: goto label_349080;
        case 0x349084u: goto label_349084;
        case 0x349088u: goto label_349088;
        case 0x34908cu: goto label_34908c;
        case 0x349090u: goto label_349090;
        case 0x349094u: goto label_349094;
        case 0x349098u: goto label_349098;
        case 0x34909cu: goto label_34909c;
        case 0x3490a0u: goto label_3490a0;
        case 0x3490a4u: goto label_3490a4;
        case 0x3490a8u: goto label_3490a8;
        case 0x3490acu: goto label_3490ac;
        case 0x3490b0u: goto label_3490b0;
        case 0x3490b4u: goto label_3490b4;
        case 0x3490b8u: goto label_3490b8;
        case 0x3490bcu: goto label_3490bc;
        case 0x3490c0u: goto label_3490c0;
        case 0x3490c4u: goto label_3490c4;
        case 0x3490c8u: goto label_3490c8;
        case 0x3490ccu: goto label_3490cc;
        case 0x3490d0u: goto label_3490d0;
        case 0x3490d4u: goto label_3490d4;
        case 0x3490d8u: goto label_3490d8;
        case 0x3490dcu: goto label_3490dc;
        case 0x3490e0u: goto label_3490e0;
        case 0x3490e4u: goto label_3490e4;
        case 0x3490e8u: goto label_3490e8;
        case 0x3490ecu: goto label_3490ec;
        case 0x3490f0u: goto label_3490f0;
        case 0x3490f4u: goto label_3490f4;
        case 0x3490f8u: goto label_3490f8;
        case 0x3490fcu: goto label_3490fc;
        case 0x349100u: goto label_349100;
        case 0x349104u: goto label_349104;
        case 0x349108u: goto label_349108;
        case 0x34910cu: goto label_34910c;
        case 0x349110u: goto label_349110;
        case 0x349114u: goto label_349114;
        case 0x349118u: goto label_349118;
        case 0x34911cu: goto label_34911c;
        case 0x349120u: goto label_349120;
        case 0x349124u: goto label_349124;
        case 0x349128u: goto label_349128;
        case 0x34912cu: goto label_34912c;
        case 0x349130u: goto label_349130;
        case 0x349134u: goto label_349134;
        case 0x349138u: goto label_349138;
        case 0x34913cu: goto label_34913c;
        case 0x349140u: goto label_349140;
        case 0x349144u: goto label_349144;
        case 0x349148u: goto label_349148;
        case 0x34914cu: goto label_34914c;
        case 0x349150u: goto label_349150;
        case 0x349154u: goto label_349154;
        case 0x349158u: goto label_349158;
        case 0x34915cu: goto label_34915c;
        case 0x349160u: goto label_349160;
        case 0x349164u: goto label_349164;
        case 0x349168u: goto label_349168;
        case 0x34916cu: goto label_34916c;
        case 0x349170u: goto label_349170;
        case 0x349174u: goto label_349174;
        case 0x349178u: goto label_349178;
        case 0x34917cu: goto label_34917c;
        case 0x349180u: goto label_349180;
        case 0x349184u: goto label_349184;
        case 0x349188u: goto label_349188;
        case 0x34918cu: goto label_34918c;
        case 0x349190u: goto label_349190;
        case 0x349194u: goto label_349194;
        case 0x349198u: goto label_349198;
        case 0x34919cu: goto label_34919c;
        case 0x3491a0u: goto label_3491a0;
        case 0x3491a4u: goto label_3491a4;
        case 0x3491a8u: goto label_3491a8;
        case 0x3491acu: goto label_3491ac;
        case 0x3491b0u: goto label_3491b0;
        case 0x3491b4u: goto label_3491b4;
        case 0x3491b8u: goto label_3491b8;
        case 0x3491bcu: goto label_3491bc;
        case 0x3491c0u: goto label_3491c0;
        case 0x3491c4u: goto label_3491c4;
        case 0x3491c8u: goto label_3491c8;
        case 0x3491ccu: goto label_3491cc;
        case 0x3491d0u: goto label_3491d0;
        case 0x3491d4u: goto label_3491d4;
        case 0x3491d8u: goto label_3491d8;
        case 0x3491dcu: goto label_3491dc;
        case 0x3491e0u: goto label_3491e0;
        case 0x3491e4u: goto label_3491e4;
        case 0x3491e8u: goto label_3491e8;
        case 0x3491ecu: goto label_3491ec;
        case 0x3491f0u: goto label_3491f0;
        case 0x3491f4u: goto label_3491f4;
        case 0x3491f8u: goto label_3491f8;
        case 0x3491fcu: goto label_3491fc;
        case 0x349200u: goto label_349200;
        case 0x349204u: goto label_349204;
        case 0x349208u: goto label_349208;
        case 0x34920cu: goto label_34920c;
        case 0x349210u: goto label_349210;
        case 0x349214u: goto label_349214;
        case 0x349218u: goto label_349218;
        case 0x34921cu: goto label_34921c;
        case 0x349220u: goto label_349220;
        case 0x349224u: goto label_349224;
        case 0x349228u: goto label_349228;
        case 0x34922cu: goto label_34922c;
        case 0x349230u: goto label_349230;
        case 0x349234u: goto label_349234;
        case 0x349238u: goto label_349238;
        case 0x34923cu: goto label_34923c;
        case 0x349240u: goto label_349240;
        case 0x349244u: goto label_349244;
        case 0x349248u: goto label_349248;
        case 0x34924cu: goto label_34924c;
        case 0x349250u: goto label_349250;
        case 0x349254u: goto label_349254;
        case 0x349258u: goto label_349258;
        case 0x34925cu: goto label_34925c;
        case 0x349260u: goto label_349260;
        case 0x349264u: goto label_349264;
        case 0x349268u: goto label_349268;
        case 0x34926cu: goto label_34926c;
        case 0x349270u: goto label_349270;
        case 0x349274u: goto label_349274;
        case 0x349278u: goto label_349278;
        case 0x34927cu: goto label_34927c;
        case 0x349280u: goto label_349280;
        case 0x349284u: goto label_349284;
        case 0x349288u: goto label_349288;
        case 0x34928cu: goto label_34928c;
        case 0x349290u: goto label_349290;
        case 0x349294u: goto label_349294;
        case 0x349298u: goto label_349298;
        case 0x34929cu: goto label_34929c;
        case 0x3492a0u: goto label_3492a0;
        case 0x3492a4u: goto label_3492a4;
        case 0x3492a8u: goto label_3492a8;
        case 0x3492acu: goto label_3492ac;
        case 0x3492b0u: goto label_3492b0;
        case 0x3492b4u: goto label_3492b4;
        case 0x3492b8u: goto label_3492b8;
        case 0x3492bcu: goto label_3492bc;
        case 0x3492c0u: goto label_3492c0;
        case 0x3492c4u: goto label_3492c4;
        case 0x3492c8u: goto label_3492c8;
        case 0x3492ccu: goto label_3492cc;
        case 0x3492d0u: goto label_3492d0;
        case 0x3492d4u: goto label_3492d4;
        case 0x3492d8u: goto label_3492d8;
        case 0x3492dcu: goto label_3492dc;
        case 0x3492e0u: goto label_3492e0;
        case 0x3492e4u: goto label_3492e4;
        case 0x3492e8u: goto label_3492e8;
        case 0x3492ecu: goto label_3492ec;
        case 0x3492f0u: goto label_3492f0;
        case 0x3492f4u: goto label_3492f4;
        case 0x3492f8u: goto label_3492f8;
        case 0x3492fcu: goto label_3492fc;
        case 0x349300u: goto label_349300;
        case 0x349304u: goto label_349304;
        case 0x349308u: goto label_349308;
        case 0x34930cu: goto label_34930c;
        case 0x349310u: goto label_349310;
        case 0x349314u: goto label_349314;
        case 0x349318u: goto label_349318;
        case 0x34931cu: goto label_34931c;
        case 0x349320u: goto label_349320;
        case 0x349324u: goto label_349324;
        case 0x349328u: goto label_349328;
        case 0x34932cu: goto label_34932c;
        case 0x349330u: goto label_349330;
        case 0x349334u: goto label_349334;
        case 0x349338u: goto label_349338;
        case 0x34933cu: goto label_34933c;
        case 0x349340u: goto label_349340;
        case 0x349344u: goto label_349344;
        case 0x349348u: goto label_349348;
        case 0x34934cu: goto label_34934c;
        case 0x349350u: goto label_349350;
        case 0x349354u: goto label_349354;
        case 0x349358u: goto label_349358;
        case 0x34935cu: goto label_34935c;
        case 0x349360u: goto label_349360;
        case 0x349364u: goto label_349364;
        case 0x349368u: goto label_349368;
        case 0x34936cu: goto label_34936c;
        case 0x349370u: goto label_349370;
        case 0x349374u: goto label_349374;
        case 0x349378u: goto label_349378;
        case 0x34937cu: goto label_34937c;
        case 0x349380u: goto label_349380;
        case 0x349384u: goto label_349384;
        case 0x349388u: goto label_349388;
        case 0x34938cu: goto label_34938c;
        case 0x349390u: goto label_349390;
        case 0x349394u: goto label_349394;
        case 0x349398u: goto label_349398;
        case 0x34939cu: goto label_34939c;
        case 0x3493a0u: goto label_3493a0;
        case 0x3493a4u: goto label_3493a4;
        case 0x3493a8u: goto label_3493a8;
        case 0x3493acu: goto label_3493ac;
        case 0x3493b0u: goto label_3493b0;
        case 0x3493b4u: goto label_3493b4;
        case 0x3493b8u: goto label_3493b8;
        case 0x3493bcu: goto label_3493bc;
        case 0x3493c0u: goto label_3493c0;
        case 0x3493c4u: goto label_3493c4;
        case 0x3493c8u: goto label_3493c8;
        case 0x3493ccu: goto label_3493cc;
        case 0x3493d0u: goto label_3493d0;
        case 0x3493d4u: goto label_3493d4;
        case 0x3493d8u: goto label_3493d8;
        case 0x3493dcu: goto label_3493dc;
        case 0x3493e0u: goto label_3493e0;
        case 0x3493e4u: goto label_3493e4;
        case 0x3493e8u: goto label_3493e8;
        case 0x3493ecu: goto label_3493ec;
        case 0x3493f0u: goto label_3493f0;
        case 0x3493f4u: goto label_3493f4;
        case 0x3493f8u: goto label_3493f8;
        case 0x3493fcu: goto label_3493fc;
        case 0x349400u: goto label_349400;
        case 0x349404u: goto label_349404;
        case 0x349408u: goto label_349408;
        case 0x34940cu: goto label_34940c;
        case 0x349410u: goto label_349410;
        case 0x349414u: goto label_349414;
        case 0x349418u: goto label_349418;
        case 0x34941cu: goto label_34941c;
        case 0x349420u: goto label_349420;
        case 0x349424u: goto label_349424;
        case 0x349428u: goto label_349428;
        case 0x34942cu: goto label_34942c;
        case 0x349430u: goto label_349430;
        case 0x349434u: goto label_349434;
        case 0x349438u: goto label_349438;
        case 0x34943cu: goto label_34943c;
        case 0x349440u: goto label_349440;
        case 0x349444u: goto label_349444;
        case 0x349448u: goto label_349448;
        case 0x34944cu: goto label_34944c;
        case 0x349450u: goto label_349450;
        case 0x349454u: goto label_349454;
        case 0x349458u: goto label_349458;
        case 0x34945cu: goto label_34945c;
        case 0x349460u: goto label_349460;
        case 0x349464u: goto label_349464;
        case 0x349468u: goto label_349468;
        case 0x34946cu: goto label_34946c;
        case 0x349470u: goto label_349470;
        case 0x349474u: goto label_349474;
        case 0x349478u: goto label_349478;
        case 0x34947cu: goto label_34947c;
        case 0x349480u: goto label_349480;
        case 0x349484u: goto label_349484;
        case 0x349488u: goto label_349488;
        case 0x34948cu: goto label_34948c;
        case 0x349490u: goto label_349490;
        case 0x349494u: goto label_349494;
        case 0x349498u: goto label_349498;
        case 0x34949cu: goto label_34949c;
        case 0x3494a0u: goto label_3494a0;
        case 0x3494a4u: goto label_3494a4;
        case 0x3494a8u: goto label_3494a8;
        case 0x3494acu: goto label_3494ac;
        case 0x3494b0u: goto label_3494b0;
        case 0x3494b4u: goto label_3494b4;
        case 0x3494b8u: goto label_3494b8;
        case 0x3494bcu: goto label_3494bc;
        case 0x3494c0u: goto label_3494c0;
        case 0x3494c4u: goto label_3494c4;
        case 0x3494c8u: goto label_3494c8;
        case 0x3494ccu: goto label_3494cc;
        case 0x3494d0u: goto label_3494d0;
        case 0x3494d4u: goto label_3494d4;
        case 0x3494d8u: goto label_3494d8;
        case 0x3494dcu: goto label_3494dc;
        case 0x3494e0u: goto label_3494e0;
        case 0x3494e4u: goto label_3494e4;
        case 0x3494e8u: goto label_3494e8;
        case 0x3494ecu: goto label_3494ec;
        case 0x3494f0u: goto label_3494f0;
        case 0x3494f4u: goto label_3494f4;
        case 0x3494f8u: goto label_3494f8;
        case 0x3494fcu: goto label_3494fc;
        case 0x349500u: goto label_349500;
        case 0x349504u: goto label_349504;
        case 0x349508u: goto label_349508;
        case 0x34950cu: goto label_34950c;
        case 0x349510u: goto label_349510;
        case 0x349514u: goto label_349514;
        case 0x349518u: goto label_349518;
        case 0x34951cu: goto label_34951c;
        case 0x349520u: goto label_349520;
        case 0x349524u: goto label_349524;
        case 0x349528u: goto label_349528;
        case 0x34952cu: goto label_34952c;
        case 0x349530u: goto label_349530;
        case 0x349534u: goto label_349534;
        case 0x349538u: goto label_349538;
        case 0x34953cu: goto label_34953c;
        case 0x349540u: goto label_349540;
        case 0x349544u: goto label_349544;
        case 0x349548u: goto label_349548;
        case 0x34954cu: goto label_34954c;
        case 0x349550u: goto label_349550;
        case 0x349554u: goto label_349554;
        case 0x349558u: goto label_349558;
        case 0x34955cu: goto label_34955c;
        case 0x349560u: goto label_349560;
        case 0x349564u: goto label_349564;
        case 0x349568u: goto label_349568;
        case 0x34956cu: goto label_34956c;
        case 0x349570u: goto label_349570;
        case 0x349574u: goto label_349574;
        case 0x349578u: goto label_349578;
        case 0x34957cu: goto label_34957c;
        case 0x349580u: goto label_349580;
        case 0x349584u: goto label_349584;
        case 0x349588u: goto label_349588;
        case 0x34958cu: goto label_34958c;
        case 0x349590u: goto label_349590;
        case 0x349594u: goto label_349594;
        case 0x349598u: goto label_349598;
        case 0x34959cu: goto label_34959c;
        case 0x3495a0u: goto label_3495a0;
        case 0x3495a4u: goto label_3495a4;
        case 0x3495a8u: goto label_3495a8;
        case 0x3495acu: goto label_3495ac;
        case 0x3495b0u: goto label_3495b0;
        case 0x3495b4u: goto label_3495b4;
        case 0x3495b8u: goto label_3495b8;
        case 0x3495bcu: goto label_3495bc;
        case 0x3495c0u: goto label_3495c0;
        case 0x3495c4u: goto label_3495c4;
        case 0x3495c8u: goto label_3495c8;
        case 0x3495ccu: goto label_3495cc;
        case 0x3495d0u: goto label_3495d0;
        case 0x3495d4u: goto label_3495d4;
        case 0x3495d8u: goto label_3495d8;
        case 0x3495dcu: goto label_3495dc;
        case 0x3495e0u: goto label_3495e0;
        case 0x3495e4u: goto label_3495e4;
        case 0x3495e8u: goto label_3495e8;
        case 0x3495ecu: goto label_3495ec;
        case 0x3495f0u: goto label_3495f0;
        case 0x3495f4u: goto label_3495f4;
        case 0x3495f8u: goto label_3495f8;
        case 0x3495fcu: goto label_3495fc;
        case 0x349600u: goto label_349600;
        case 0x349604u: goto label_349604;
        case 0x349608u: goto label_349608;
        case 0x34960cu: goto label_34960c;
        case 0x349610u: goto label_349610;
        case 0x349614u: goto label_349614;
        case 0x349618u: goto label_349618;
        case 0x34961cu: goto label_34961c;
        case 0x349620u: goto label_349620;
        case 0x349624u: goto label_349624;
        case 0x349628u: goto label_349628;
        case 0x34962cu: goto label_34962c;
        case 0x349630u: goto label_349630;
        case 0x349634u: goto label_349634;
        case 0x349638u: goto label_349638;
        case 0x34963cu: goto label_34963c;
        case 0x349640u: goto label_349640;
        case 0x349644u: goto label_349644;
        case 0x349648u: goto label_349648;
        case 0x34964cu: goto label_34964c;
        case 0x349650u: goto label_349650;
        case 0x349654u: goto label_349654;
        case 0x349658u: goto label_349658;
        case 0x34965cu: goto label_34965c;
        case 0x349660u: goto label_349660;
        case 0x349664u: goto label_349664;
        case 0x349668u: goto label_349668;
        case 0x34966cu: goto label_34966c;
        case 0x349670u: goto label_349670;
        case 0x349674u: goto label_349674;
        case 0x349678u: goto label_349678;
        case 0x34967cu: goto label_34967c;
        case 0x349680u: goto label_349680;
        case 0x349684u: goto label_349684;
        case 0x349688u: goto label_349688;
        case 0x34968cu: goto label_34968c;
        case 0x349690u: goto label_349690;
        case 0x349694u: goto label_349694;
        case 0x349698u: goto label_349698;
        case 0x34969cu: goto label_34969c;
        case 0x3496a0u: goto label_3496a0;
        case 0x3496a4u: goto label_3496a4;
        case 0x3496a8u: goto label_3496a8;
        case 0x3496acu: goto label_3496ac;
        case 0x3496b0u: goto label_3496b0;
        case 0x3496b4u: goto label_3496b4;
        case 0x3496b8u: goto label_3496b8;
        case 0x3496bcu: goto label_3496bc;
        case 0x3496c0u: goto label_3496c0;
        case 0x3496c4u: goto label_3496c4;
        case 0x3496c8u: goto label_3496c8;
        case 0x3496ccu: goto label_3496cc;
        case 0x3496d0u: goto label_3496d0;
        case 0x3496d4u: goto label_3496d4;
        case 0x3496d8u: goto label_3496d8;
        case 0x3496dcu: goto label_3496dc;
        case 0x3496e0u: goto label_3496e0;
        case 0x3496e4u: goto label_3496e4;
        case 0x3496e8u: goto label_3496e8;
        case 0x3496ecu: goto label_3496ec;
        case 0x3496f0u: goto label_3496f0;
        case 0x3496f4u: goto label_3496f4;
        case 0x3496f8u: goto label_3496f8;
        case 0x3496fcu: goto label_3496fc;
        case 0x349700u: goto label_349700;
        case 0x349704u: goto label_349704;
        case 0x349708u: goto label_349708;
        case 0x34970cu: goto label_34970c;
        case 0x349710u: goto label_349710;
        case 0x349714u: goto label_349714;
        case 0x349718u: goto label_349718;
        case 0x34971cu: goto label_34971c;
        case 0x349720u: goto label_349720;
        case 0x349724u: goto label_349724;
        case 0x349728u: goto label_349728;
        case 0x34972cu: goto label_34972c;
        case 0x349730u: goto label_349730;
        case 0x349734u: goto label_349734;
        case 0x349738u: goto label_349738;
        case 0x34973cu: goto label_34973c;
        case 0x349740u: goto label_349740;
        case 0x349744u: goto label_349744;
        case 0x349748u: goto label_349748;
        case 0x34974cu: goto label_34974c;
        case 0x349750u: goto label_349750;
        case 0x349754u: goto label_349754;
        case 0x349758u: goto label_349758;
        case 0x34975cu: goto label_34975c;
        case 0x349760u: goto label_349760;
        case 0x349764u: goto label_349764;
        case 0x349768u: goto label_349768;
        case 0x34976cu: goto label_34976c;
        case 0x349770u: goto label_349770;
        case 0x349774u: goto label_349774;
        case 0x349778u: goto label_349778;
        case 0x34977cu: goto label_34977c;
        case 0x349780u: goto label_349780;
        case 0x349784u: goto label_349784;
        case 0x349788u: goto label_349788;
        case 0x34978cu: goto label_34978c;
        case 0x349790u: goto label_349790;
        case 0x349794u: goto label_349794;
        case 0x349798u: goto label_349798;
        case 0x34979cu: goto label_34979c;
        case 0x3497a0u: goto label_3497a0;
        case 0x3497a4u: goto label_3497a4;
        case 0x3497a8u: goto label_3497a8;
        case 0x3497acu: goto label_3497ac;
        default: break;
    }

    ctx->pc = 0x348d60u;

label_348d60:
    // 0x348d60: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x348d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_348d64:
    // 0x348d64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x348d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_348d68:
    // 0x348d68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x348d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_348d6c:
    // 0x348d6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x348d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_348d70:
    // 0x348d70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x348d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_348d74:
    // 0x348d74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x348d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_348d78:
    // 0x348d78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x348d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_348d7c:
    // 0x348d7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x348d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_348d80:
    // 0x348d80: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x348d80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_348d84:
    // 0x348d84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x348d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_348d88:
    // 0x348d88: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x348d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
label_348d8c:
    // 0x348d8c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x348d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_348d90:
    // 0x348d90: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x348d90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_348d94:
    // 0x348d94: 0x10200278  beqz        $at, . + 4 + (0x278 << 2)
label_348d98:
    if (ctx->pc == 0x348D98u) {
        ctx->pc = 0x348D98u;
            // 0x348d98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348D9Cu;
        goto label_348d9c;
    }
    ctx->pc = 0x348D94u;
    {
        const bool branch_taken_0x348d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x348D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348D94u;
            // 0x348d98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d94) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x348D9Cu;
label_348d9c:
    // 0x348d9c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x348d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_348da0:
    // 0x348da0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x348da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_348da4:
    // 0x348da4: 0x24842f30  addiu       $a0, $a0, 0x2F30
    ctx->pc = 0x348da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12080));
label_348da8:
    // 0x348da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x348da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_348dac:
    // 0x348dac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x348dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_348db0:
    // 0x348db0: 0x600008  jr          $v1
label_348db4:
    if (ctx->pc == 0x348DB4u) {
        ctx->pc = 0x348DB8u;
        goto label_348db8;
    }
    ctx->pc = 0x348DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x348DB8u: goto label_348db8;
            case 0x348EE8u: goto label_348ee8;
            case 0x3493B4u: goto label_3493b4;
            case 0x3494ECu: goto label_3494ec;
            case 0x34957Cu: goto label_34957c;
            case 0x349650u: goto label_349650;
            case 0x3496A0u: goto label_3496a0;
            case 0x349778u: goto label_349778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x348DB8u;
label_348db8:
    // 0x348db8: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x348db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_348dbc:
    // 0x348dbc: 0xc04cc34  jal         func_1330D0
label_348dc0:
    if (ctx->pc == 0x348DC0u) {
        ctx->pc = 0x348DC0u;
            // 0x348dc0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x348DC4u;
        goto label_348dc4;
    }
    ctx->pc = 0x348DBCu;
    SET_GPR_U32(ctx, 31, 0x348DC4u);
    ctx->pc = 0x348DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348DBCu;
            // 0x348dc0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348DC4u; }
        if (ctx->pc != 0x348DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348DC4u; }
        if (ctx->pc != 0x348DC4u) { return; }
    }
    ctx->pc = 0x348DC4u;
label_348dc4:
    // 0x348dc4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x348dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_348dc8:
    // 0x348dc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x348dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_348dcc:
    // 0x348dcc: 0x0  nop
    ctx->pc = 0x348dccu;
    // NOP
label_348dd0:
    // 0x348dd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x348dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348dd4:
    // 0x348dd4: 0x45020269  bc1fl       . + 4 + (0x269 << 2)
label_348dd8:
    if (ctx->pc == 0x348DD8u) {
        ctx->pc = 0x348DD8u;
            // 0x348dd8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x348DDCu;
        goto label_348ddc;
    }
    ctx->pc = 0x348DD4u;
    {
        const bool branch_taken_0x348dd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x348dd4) {
            ctx->pc = 0x348DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348DD4u;
            // 0x348dd8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34977Cu;
            goto label_34977c;
        }
    }
    ctx->pc = 0x348DDCu;
label_348ddc:
    // 0x348ddc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x348ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_348de0:
    // 0x348de0: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x348de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_348de4:
    // 0x348de4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x348de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_348de8:
    // 0x348de8: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x348de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_348dec:
    // 0x348dec: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x348decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_348df0:
    // 0x348df0: 0xc04cc04  jal         func_133010
label_348df4:
    if (ctx->pc == 0x348DF4u) {
        ctx->pc = 0x348DF4u;
            // 0x348df4: 0x24a52fd0  addiu       $a1, $a1, 0x2FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12240));
        ctx->pc = 0x348DF8u;
        goto label_348df8;
    }
    ctx->pc = 0x348DF0u;
    SET_GPR_U32(ctx, 31, 0x348DF8u);
    ctx->pc = 0x348DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348DF0u;
            // 0x348df4: 0x24a52fd0  addiu       $a1, $a1, 0x2FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348DF8u; }
        if (ctx->pc != 0x348DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348DF8u; }
        if (ctx->pc != 0x348DF8u) { return; }
    }
    ctx->pc = 0x348DF8u;
label_348df8:
    // 0x348df8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x348df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_348dfc:
    // 0x348dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348e00:
    // 0x348e00: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x348e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_348e04:
    // 0x348e04: 0x320f809  jalr        $t9
label_348e08:
    if (ctx->pc == 0x348E08u) {
        ctx->pc = 0x348E08u;
            // 0x348e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348E0Cu;
        goto label_348e0c;
    }
    ctx->pc = 0x348E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348E0Cu);
        ctx->pc = 0x348E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348E04u;
            // 0x348e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x348E0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x348E0Cu; }
            if (ctx->pc != 0x348E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x348E0Cu;
label_348e0c:
    // 0x348e0c: 0x8e120550  lw          $s2, 0x550($s0)
    ctx->pc = 0x348e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_348e10:
    // 0x348e10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x348e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_348e14:
    // 0x348e14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x348e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_348e18:
    // 0x348e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348e1c:
    // 0x348e1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x348e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_348e20:
    // 0x348e20: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x348e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_348e24:
    // 0x348e24: 0x8242010c  lb          $v0, 0x10C($s2)
    ctx->pc = 0x348e24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_348e28:
    // 0x348e28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x348e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_348e2c:
    // 0x348e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x348e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_348e30:
    // 0x348e30: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x348e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_348e34:
    // 0x348e34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x348e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_348e38:
    // 0x348e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x348e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_348e3c:
    // 0x348e3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x348e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_348e40:
    // 0x348e40: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x348e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_348e44:
    // 0x348e44: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x348e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_348e48:
    // 0x348e48: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x348e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_348e4c:
    // 0x348e4c: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x348e4cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_348e50:
    // 0x348e50: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x348e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_348e54:
    // 0x348e54: 0x320f809  jalr        $t9
label_348e58:
    if (ctx->pc == 0x348E58u) {
        ctx->pc = 0x348E58u;
            // 0x348e58: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x348E5Cu;
        goto label_348e5c;
    }
    ctx->pc = 0x348E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348E5Cu);
        ctx->pc = 0x348E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348E54u;
            // 0x348e58: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x348E5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x348E5Cu; }
            if (ctx->pc != 0x348E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x348E5Cu;
label_348e5c:
    // 0x348e5c: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x348e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_348e60:
    // 0x348e60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x348e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_348e64:
    // 0x348e64: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x348e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_348e68:
    // 0x348e68: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x348e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_348e6c:
    // 0x348e6c: 0x320f809  jalr        $t9
label_348e70:
    if (ctx->pc == 0x348E70u) {
        ctx->pc = 0x348E70u;
            // 0x348e70: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x348E74u;
        goto label_348e74;
    }
    ctx->pc = 0x348E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348E74u);
        ctx->pc = 0x348E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348E6Cu;
            // 0x348e70: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x348E74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x348E74u; }
            if (ctx->pc != 0x348E74u) { return; }
        }
        }
    }
    ctx->pc = 0x348E74u;
label_348e74:
    // 0x348e74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x348e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_348e78:
    // 0x348e78: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x348e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_348e7c:
    // 0x348e7c: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x348e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
label_348e80:
    // 0x348e80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348e84:
    // 0x348e84: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x348e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_348e88:
    // 0x348e88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x348e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_348e8c:
    // 0x348e8c: 0x24632f28  addiu       $v1, $v1, 0x2F28
    ctx->pc = 0x348e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12072));
label_348e90:
    // 0x348e90: 0xa085001c  sb          $a1, 0x1C($a0)
    ctx->pc = 0x348e90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 5));
label_348e94:
    // 0x348e94: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x348e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_348e98:
    // 0x348e98: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x348e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_348e9c:
    // 0x348e9c: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x348e9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_348ea0:
    // 0x348ea0: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x348ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_348ea4:
    // 0x348ea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x348ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_348ea8:
    // 0x348ea8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x348ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_348eac:
    // 0x348eac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x348eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_348eb0:
    // 0x348eb0: 0x320f809  jalr        $t9
label_348eb4:
    if (ctx->pc == 0x348EB4u) {
        ctx->pc = 0x348EB4u;
            // 0x348eb4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x348EB8u;
        goto label_348eb8;
    }
    ctx->pc = 0x348EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348EB8u);
        ctx->pc = 0x348EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348EB0u;
            // 0x348eb4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x348EB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x348EB8u; }
            if (ctx->pc != 0x348EB8u) { return; }
        }
        }
    }
    ctx->pc = 0x348EB8u;
label_348eb8:
    // 0x348eb8: 0x8e240230  lw          $a0, 0x230($s1)
    ctx->pc = 0x348eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_348ebc:
    // 0x348ebc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x348ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_348ec0:
    // 0x348ec0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x348ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_348ec4:
    // 0x348ec4: 0x320f809  jalr        $t9
label_348ec8:
    if (ctx->pc == 0x348EC8u) {
        ctx->pc = 0x348ECCu;
        goto label_348ecc;
    }
    ctx->pc = 0x348EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348ECCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x348ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x348ECCu; }
            if (ctx->pc != 0x348ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x348ECCu;
label_348ecc:
    // 0x348ecc: 0x8e240234  lw          $a0, 0x234($s1)
    ctx->pc = 0x348eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_348ed0:
    // 0x348ed0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x348ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_348ed4:
    // 0x348ed4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x348ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_348ed8:
    // 0x348ed8: 0x320f809  jalr        $t9
label_348edc:
    if (ctx->pc == 0x348EDCu) {
        ctx->pc = 0x348EE0u;
        goto label_348ee0;
    }
    ctx->pc = 0x348ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348EE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x348EE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x348EE0u; }
            if (ctx->pc != 0x348EE0u) { return; }
        }
        }
    }
    ctx->pc = 0x348EE0u;
label_348ee0:
    // 0x348ee0: 0x10000225  b           . + 4 + (0x225 << 2)
label_348ee4:
    if (ctx->pc == 0x348EE4u) {
        ctx->pc = 0x348EE8u;
        goto label_348ee8;
    }
    ctx->pc = 0x348EE0u;
    {
        const bool branch_taken_0x348ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348ee0) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x348EE8u;
label_348ee8:
    // 0x348ee8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x348ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_348eec:
    // 0x348eec: 0x262501d0  addiu       $a1, $s1, 0x1D0
    ctx->pc = 0x348eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_348ef0:
    // 0x348ef0: 0xc04cc04  jal         func_133010
label_348ef4:
    if (ctx->pc == 0x348EF4u) {
        ctx->pc = 0x348EF4u;
            // 0x348ef4: 0x26350030  addiu       $s5, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x348EF8u;
        goto label_348ef8;
    }
    ctx->pc = 0x348EF0u;
    SET_GPR_U32(ctx, 31, 0x348EF8u);
    ctx->pc = 0x348EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348EF0u;
            // 0x348ef4: 0x26350030  addiu       $s5, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348EF8u; }
        if (ctx->pc != 0x348EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348EF8u; }
        if (ctx->pc != 0x348EF8u) { return; }
    }
    ctx->pc = 0x348EF8u;
label_348ef8:
    // 0x348ef8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x348ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_348efc:
    // 0x348efc: 0xc04c720  jal         func_131C80
label_348f00:
    if (ctx->pc == 0x348F00u) {
        ctx->pc = 0x348F00u;
            // 0x348f00: 0x26a50090  addiu       $a1, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x348F04u;
        goto label_348f04;
    }
    ctx->pc = 0x348EFCu;
    SET_GPR_U32(ctx, 31, 0x348F04u);
    ctx->pc = 0x348F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348EFCu;
            // 0x348f00: 0x26a50090  addiu       $a1, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348F04u; }
        if (ctx->pc != 0x348F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348F04u; }
        if (ctx->pc != 0x348F04u) { return; }
    }
    ctx->pc = 0x348F04u;
label_348f04:
    // 0x348f04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x348f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_348f08:
    // 0x348f08: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x348f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_348f0c:
    // 0x348f0c: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x348f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_348f10:
    // 0x348f10: 0xc6a0012c  lwc1        $f0, 0x12C($s5)
    ctx->pc = 0x348f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348f14:
    // 0x348f14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x348f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_348f18:
    // 0x348f18: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x348f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348f1c:
    // 0x348f1c: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x348f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_348f20:
    // 0x348f20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x348f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_348f24:
    // 0x348f24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x348f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_348f28:
    // 0x348f28: 0xc0d87e0  jal         func_361F80
label_348f2c:
    if (ctx->pc == 0x348F2Cu) {
        ctx->pc = 0x348F2Cu;
            // 0x348f2c: 0xe6a0012c  swc1        $f0, 0x12C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
        ctx->pc = 0x348F30u;
        goto label_348f30;
    }
    ctx->pc = 0x348F28u;
    SET_GPR_U32(ctx, 31, 0x348F30u);
    ctx->pc = 0x348F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348F28u;
            // 0x348f2c: 0xe6a0012c  swc1        $f0, 0x12C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348F30u; }
        if (ctx->pc != 0x348F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348F30u; }
        if (ctx->pc != 0x348F30u) { return; }
    }
    ctx->pc = 0x348F30u;
label_348f30:
    // 0x348f30: 0x96a30110  lhu         $v1, 0x110($s5)
    ctx->pc = 0x348f30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 272)));
label_348f34:
    // 0x348f34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x348f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_348f38:
    // 0x348f38: 0x5462002f  bnel        $v1, $v0, . + 4 + (0x2F << 2)
label_348f3c:
    if (ctx->pc == 0x348F3Cu) {
        ctx->pc = 0x348F3Cu;
            // 0x348f3c: 0x8e140d60  lw          $s4, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x348F40u;
        goto label_348f40;
    }
    ctx->pc = 0x348F38u;
    {
        const bool branch_taken_0x348f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x348f38) {
            ctx->pc = 0x348F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348F38u;
            // 0x348f3c: 0x8e140d60  lw          $s4, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x348FF8u;
            goto label_348ff8;
        }
    }
    ctx->pc = 0x348F40u;
label_348f40:
    // 0x348f40: 0xc0bbec8  jal         func_2EFB20
label_348f44:
    if (ctx->pc == 0x348F44u) {
        ctx->pc = 0x348F44u;
            // 0x348f44: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->pc = 0x348F48u;
        goto label_348f48;
    }
    ctx->pc = 0x348F40u;
    SET_GPR_U32(ctx, 31, 0x348F48u);
    ctx->pc = 0x348F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348F40u;
            // 0x348f44: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EFB20u;
    if (runtime->hasFunction(0x2EFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2EFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348F48u; }
        if (ctx->pc != 0x348F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EFB20_0x2efb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348F48u; }
        if (ctx->pc != 0x348F48u) { return; }
    }
    ctx->pc = 0x348F48u;
label_348f48:
    // 0x348f48: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x348f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_348f4c:
    // 0x348f4c: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x348f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
label_348f50:
    // 0x348f50: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x348f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_348f54:
    // 0x348f54: 0x8e120d74  lw          $s2, 0xD74($s0)
    ctx->pc = 0x348f54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_348f58:
    // 0x348f58: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x348f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_348f5c:
    // 0x348f5c: 0x8e4202c8  lw          $v0, 0x2C8($s2)
    ctx->pc = 0x348f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_348f60:
    // 0x348f60: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x348f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_348f64:
    // 0x348f64: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x348f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_348f68:
    // 0x348f68: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x348f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_348f6c:
    // 0x348f6c: 0xc0a545c  jal         func_295170
label_348f70:
    if (ctx->pc == 0x348F70u) {
        ctx->pc = 0x348F70u;
            // 0x348f70: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x348F74u;
        goto label_348f74;
    }
    ctx->pc = 0x348F6Cu;
    SET_GPR_U32(ctx, 31, 0x348F74u);
    ctx->pc = 0x348F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348F6Cu;
            // 0x348f70: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348F74u; }
        if (ctx->pc != 0x348F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348F74u; }
        if (ctx->pc != 0x348F74u) { return; }
    }
    ctx->pc = 0x348F74u;
label_348f74:
    // 0x348f74: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x348f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_348f78:
    // 0x348f78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x348f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_348f7c:
    // 0x348f7c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x348f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_348f80:
    // 0x348f80: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x348f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_348f84:
    // 0x348f84: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x348f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_348f88:
    // 0x348f88: 0xc08bf20  jal         func_22FC80
label_348f8c:
    if (ctx->pc == 0x348F8Cu) {
        ctx->pc = 0x348F8Cu;
            // 0x348f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348F90u;
        goto label_348f90;
    }
    ctx->pc = 0x348F88u;
    SET_GPR_U32(ctx, 31, 0x348F90u);
    ctx->pc = 0x348F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348F88u;
            // 0x348f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348F90u; }
        if (ctx->pc != 0x348F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348F90u; }
        if (ctx->pc != 0x348F90u) { return; }
    }
    ctx->pc = 0x348F90u;
label_348f90:
    // 0x348f90: 0x3c033f6d  lui         $v1, 0x3F6D
    ctx->pc = 0x348f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16237 << 16));
label_348f94:
    // 0x348f94: 0x3c023fed  lui         $v0, 0x3FED
    ctx->pc = 0x348f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16365 << 16));
label_348f98:
    // 0x348f98: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x348f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_348f9c:
    // 0x348f9c: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x348f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_348fa0:
    // 0x348fa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x348fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_348fa4:
    // 0x348fa4: 0xae030de4  sw          $v1, 0xDE4($s0)
    ctx->pc = 0x348fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
label_348fa8:
    // 0x348fa8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x348fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_348fac:
    // 0x348fac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x348facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_348fb0:
    // 0x348fb0: 0xc04cbd8  jal         func_132F60
label_348fb4:
    if (ctx->pc == 0x348FB4u) {
        ctx->pc = 0x348FB4u;
            // 0x348fb4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x348FB8u;
        goto label_348fb8;
    }
    ctx->pc = 0x348FB0u;
    SET_GPR_U32(ctx, 31, 0x348FB8u);
    ctx->pc = 0x348FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348FB0u;
            // 0x348fb4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348FB8u; }
        if (ctx->pc != 0x348FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348FB8u; }
        if (ctx->pc != 0x348FB8u) { return; }
    }
    ctx->pc = 0x348FB8u;
label_348fb8:
    // 0x348fb8: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x348fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_348fbc:
    // 0x348fbc: 0x260507e0  addiu       $a1, $s0, 0x7E0
    ctx->pc = 0x348fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
label_348fc0:
    // 0x348fc0: 0xc04cca0  jal         func_133280
label_348fc4:
    if (ctx->pc == 0x348FC4u) {
        ctx->pc = 0x348FC4u;
            // 0x348fc4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x348FC8u;
        goto label_348fc8;
    }
    ctx->pc = 0x348FC0u;
    SET_GPR_U32(ctx, 31, 0x348FC8u);
    ctx->pc = 0x348FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348FC0u;
            // 0x348fc4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348FC8u; }
        if (ctx->pc != 0x348FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348FC8u; }
        if (ctx->pc != 0x348FC8u) { return; }
    }
    ctx->pc = 0x348FC8u;
label_348fc8:
    // 0x348fc8: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x348fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_348fcc:
    // 0x348fcc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x348fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_348fd0:
    // 0x348fd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x348fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_348fd4:
    // 0x348fd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348fd8:
    // 0x348fd8: 0xc0bdf9c  jal         func_2F7E70
label_348fdc:
    if (ctx->pc == 0x348FDCu) {
        ctx->pc = 0x348FDCu;
            // 0x348fdc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x348FE0u;
        goto label_348fe0;
    }
    ctx->pc = 0x348FD8u;
    SET_GPR_U32(ctx, 31, 0x348FE0u);
    ctx->pc = 0x348FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348FD8u;
            // 0x348fdc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348FE0u; }
        if (ctx->pc != 0x348FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348FE0u; }
        if (ctx->pc != 0x348FE0u) { return; }
    }
    ctx->pc = 0x348FE0u;
label_348fe0:
    // 0x348fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348fe4:
    // 0x348fe4: 0xc07649c  jal         func_1D9270
label_348fe8:
    if (ctx->pc == 0x348FE8u) {
        ctx->pc = 0x348FE8u;
            // 0x348fe8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x348FECu;
        goto label_348fec;
    }
    ctx->pc = 0x348FE4u;
    SET_GPR_U32(ctx, 31, 0x348FECu);
    ctx->pc = 0x348FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348FE4u;
            // 0x348fe8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348FECu; }
        if (ctx->pc != 0x348FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348FECu; }
        if (ctx->pc != 0x348FECu) { return; }
    }
    ctx->pc = 0x348FECu;
label_348fec:
    // 0x348fec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x348fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_348ff0:
    // 0x348ff0: 0x100001e1  b           . + 4 + (0x1E1 << 2)
label_348ff4:
    if (ctx->pc == 0x348FF4u) {
        ctx->pc = 0x348FF4u;
            // 0x348ff4: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x348FF8u;
        goto label_348ff8;
    }
    ctx->pc = 0x348FF0u;
    {
        const bool branch_taken_0x348ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348FF0u;
            // 0x348ff4: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ff0) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x348FF8u;
label_348ff8:
    // 0x348ff8: 0x82830004  lb          $v1, 0x4($s4)
    ctx->pc = 0x348ff8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_348ffc:
    // 0x348ffc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_349000:
    if (ctx->pc == 0x349000u) {
        ctx->pc = 0x349000u;
            // 0x349000: 0x82840014  lb          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x349004u;
        goto label_349004;
    }
    ctx->pc = 0x348FFCu;
    {
        const bool branch_taken_0x348ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x349000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348FFCu;
            // 0x349000: 0x82840014  lb          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ffc) {
            ctx->pc = 0x34904Cu;
            goto label_34904c;
        }
    }
    ctx->pc = 0x349004u;
label_349004:
    // 0x349004: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_349008:
    if (ctx->pc == 0x349008u) {
        ctx->pc = 0x34900Cu;
        goto label_34900c;
    }
    ctx->pc = 0x349004u;
    {
        const bool branch_taken_0x349004 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x349004) {
            ctx->pc = 0x34901Cu;
            goto label_34901c;
        }
    }
    ctx->pc = 0x34900Cu;
label_34900c:
    // 0x34900c: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x34900cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
label_349010:
    // 0x349010: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x349010u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_349014:
    // 0x349014: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_349018:
    if (ctx->pc == 0x349018u) {
        ctx->pc = 0x349018u;
            // 0x349018: 0x8e990030  lw          $t9, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->pc = 0x34901Cu;
        goto label_34901c;
    }
    ctx->pc = 0x349014u;
    {
        const bool branch_taken_0x349014 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x349014) {
            ctx->pc = 0x349018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349014u;
            // 0x349018: 0x8e990030  lw          $t9, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349038u;
            goto label_349038;
        }
    }
    ctx->pc = 0x34901Cu;
label_34901c:
    // 0x34901c: 0x463000c  bgezl       $v1, . + 4 + (0xC << 2)
label_349020:
    if (ctx->pc == 0x349020u) {
        ctx->pc = 0x349020u;
            // 0x349020: 0x8e240238  lw          $a0, 0x238($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
        ctx->pc = 0x349024u;
        goto label_349024;
    }
    ctx->pc = 0x34901Cu;
    {
        const bool branch_taken_0x34901c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x34901c) {
            ctx->pc = 0x349020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34901Cu;
            // 0x349020: 0x8e240238  lw          $a0, 0x238($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349050u;
            goto label_349050;
        }
    }
    ctx->pc = 0x349024u;
label_349024:
    // 0x349024: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x349024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
label_349028:
    // 0x349028: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x349028u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_34902c:
    // 0x34902c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_349030:
    if (ctx->pc == 0x349030u) {
        ctx->pc = 0x349034u;
        goto label_349034;
    }
    ctx->pc = 0x34902Cu;
    {
        const bool branch_taken_0x34902c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34902c) {
            ctx->pc = 0x34904Cu;
            goto label_34904c;
        }
    }
    ctx->pc = 0x349034u;
label_349034:
    // 0x349034: 0x8e990030  lw          $t9, 0x30($s4)
    ctx->pc = 0x349034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_349038:
    // 0x349038: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x349038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
label_34903c:
    // 0x34903c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_349040:
    // 0x349040: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x349040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_349044:
    // 0x349044: 0x320f809  jalr        $t9
label_349048:
    if (ctx->pc == 0x349048u) {
        ctx->pc = 0x349048u;
            // 0x349048: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x34904Cu;
        goto label_34904c;
    }
    ctx->pc = 0x349044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34904Cu);
        ctx->pc = 0x349048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349044u;
            // 0x349048: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34904Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34904Cu; }
            if (ctx->pc != 0x34904Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34904Cu;
label_34904c:
    // 0x34904c: 0x8e240238  lw          $a0, 0x238($s1)
    ctx->pc = 0x34904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
label_349050:
    // 0x349050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349054:
    // 0x349054: 0xc122d2c  jal         func_48B4B0
label_349058:
    if (ctx->pc == 0x349058u) {
        ctx->pc = 0x349058u;
            // 0x349058: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x34905Cu;
        goto label_34905c;
    }
    ctx->pc = 0x349054u;
    SET_GPR_U32(ctx, 31, 0x34905Cu);
    ctx->pc = 0x349058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349054u;
            // 0x349058: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34905Cu; }
        if (ctx->pc != 0x34905Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34905Cu; }
        if (ctx->pc != 0x34905Cu) { return; }
    }
    ctx->pc = 0x34905Cu;
label_34905c:
    // 0x34905c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x34905cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_349060:
    // 0x349060: 0xc04f278  jal         func_13C9E0
label_349064:
    if (ctx->pc == 0x349064u) {
        ctx->pc = 0x349064u;
            // 0x349064: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x349068u;
        goto label_349068;
    }
    ctx->pc = 0x349060u;
    SET_GPR_U32(ctx, 31, 0x349068u);
    ctx->pc = 0x349064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349060u;
            // 0x349064: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349068u; }
        if (ctx->pc != 0x349068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349068u; }
        if (ctx->pc != 0x349068u) { return; }
    }
    ctx->pc = 0x349068u;
label_349068:
    // 0x349068: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x349068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_34906c:
    // 0x34906c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x34906cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_349070:
    // 0x349070: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x349070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_349074:
    // 0x349074: 0xc04cca0  jal         func_133280
label_349078:
    if (ctx->pc == 0x349078u) {
        ctx->pc = 0x349078u;
            // 0x349078: 0x24c62fc0  addiu       $a2, $a2, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12224));
        ctx->pc = 0x34907Cu;
        goto label_34907c;
    }
    ctx->pc = 0x349074u;
    SET_GPR_U32(ctx, 31, 0x34907Cu);
    ctx->pc = 0x349078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349074u;
            // 0x349078: 0x24c62fc0  addiu       $a2, $a2, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34907Cu; }
        if (ctx->pc != 0x34907Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34907Cu; }
        if (ctx->pc != 0x34907Cu) { return; }
    }
    ctx->pc = 0x34907Cu;
label_34907c:
    // 0x34907c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x34907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_349080:
    // 0x349080: 0x26a600c0  addiu       $a2, $s5, 0xC0
    ctx->pc = 0x349080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
label_349084:
    // 0x349084: 0xc04cbf0  jal         func_132FC0
label_349088:
    if (ctx->pc == 0x349088u) {
        ctx->pc = 0x349088u;
            // 0x349088: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34908Cu;
        goto label_34908c;
    }
    ctx->pc = 0x349084u;
    SET_GPR_U32(ctx, 31, 0x34908Cu);
    ctx->pc = 0x349088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349084u;
            // 0x349088: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34908Cu; }
        if (ctx->pc != 0x34908Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34908Cu; }
        if (ctx->pc != 0x34908Cu) { return; }
    }
    ctx->pc = 0x34908Cu;
label_34908c:
    // 0x34908c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x34908cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_349090:
    // 0x349090: 0xc04cc44  jal         func_133110
label_349094:
    if (ctx->pc == 0x349094u) {
        ctx->pc = 0x349094u;
            // 0x349094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349098u;
        goto label_349098;
    }
    ctx->pc = 0x349090u;
    SET_GPR_U32(ctx, 31, 0x349098u);
    ctx->pc = 0x349094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349090u;
            // 0x349094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349098u; }
        if (ctx->pc != 0x349098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349098u; }
        if (ctx->pc != 0x349098u) { return; }
    }
    ctx->pc = 0x349098u;
label_349098:
    // 0x349098: 0xc62301e4  lwc1        $f3, 0x1E4($s1)
    ctx->pc = 0x349098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34909c:
    // 0x34909c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x34909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_3490a0:
    // 0x3490a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3490a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3490a4:
    // 0x3490a4: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x3490a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_3490a8:
    // 0x3490a8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3490a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3490ac:
    // 0x3490ac: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x3490acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_3490b0:
    // 0x3490b0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3490b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3490b4:
    // 0x3490b4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3490b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3490b8:
    // 0x3490b8: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x3490b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3490bc:
    // 0x3490bc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3490bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3490c0:
    // 0x3490c0: 0x4603209d  msub.s      $f2, $f4, $f3
    ctx->pc = 0x3490c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3490c4:
    // 0x3490c4: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x3490c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
label_3490c8:
    // 0x3490c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3490c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3490cc:
    // 0x3490cc: 0x263301e4  addiu       $s3, $s1, 0x1E4
    ctx->pc = 0x3490ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 484));
label_3490d0:
    // 0x3490d0: 0xe62201e4  swc1        $f2, 0x1E4($s1)
    ctx->pc = 0x3490d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
label_3490d4:
    // 0x3490d4: 0x263201e0  addiu       $s2, $s1, 0x1E0
    ctx->pc = 0x3490d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_3490d8:
    // 0x3490d8: 0x82830004  lb          $v1, 0x4($s4)
    ctx->pc = 0x3490d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_3490dc:
    // 0x3490dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3490dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3490e0:
    // 0x3490e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3490e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3490e4:
    // 0x3490e4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3490e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3490e8:
    // 0x3490e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3490e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3490ec:
    // 0x3490ec: 0x0  nop
    ctx->pc = 0x3490ecu;
    // NOP
label_3490f0:
    // 0x3490f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3490f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3490f4:
    // 0x3490f4: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x3490f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[1];
label_3490f8:
    // 0x3490f8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3490f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3490fc:
    // 0x3490fc: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3490fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349100:
    // 0x349100: 0xc04cc04  jal         func_133010
label_349104:
    if (ctx->pc == 0x349104u) {
        ctx->pc = 0x349104u;
            // 0x349104: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x349108u;
        goto label_349108;
    }
    ctx->pc = 0x349100u;
    SET_GPR_U32(ctx, 31, 0x349108u);
    ctx->pc = 0x349104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349100u;
            // 0x349104: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349108u; }
        if (ctx->pc != 0x349108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349108u; }
        if (ctx->pc != 0x349108u) { return; }
    }
    ctx->pc = 0x349108u;
label_349108:
    // 0x349108: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x349108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_34910c:
    // 0x34910c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x34910cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_349110:
    // 0x349110: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x349110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_349114:
    // 0x349114: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x349114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349118:
    // 0x349118: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x349118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34911c:
    // 0x34911c: 0xc04cc7c  jal         func_1331F0
label_349120:
    if (ctx->pc == 0x349120u) {
        ctx->pc = 0x349120u;
            // 0x349120: 0x26a600c0  addiu       $a2, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->pc = 0x349124u;
        goto label_349124;
    }
    ctx->pc = 0x34911Cu;
    SET_GPR_U32(ctx, 31, 0x349124u);
    ctx->pc = 0x349120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34911Cu;
            // 0x349120: 0x26a600c0  addiu       $a2, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349124u; }
        if (ctx->pc != 0x349124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349124u; }
        if (ctx->pc != 0x349124u) { return; }
    }
    ctx->pc = 0x349124u;
label_349124:
    // 0x349124: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x349124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349128:
    // 0x349128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34912c:
    // 0x34912c: 0x0  nop
    ctx->pc = 0x34912cu;
    // NOP
label_349130:
    // 0x349130: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_349134:
    // 0x349134: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_349138:
    if (ctx->pc == 0x349138u) {
        ctx->pc = 0x349138u;
            // 0x349138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34913Cu;
        goto label_34913c;
    }
    ctx->pc = 0x349134u;
    {
        const bool branch_taken_0x349134 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x349138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349134u;
            // 0x349138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349134) {
            ctx->pc = 0x349140u;
            goto label_349140;
        }
    }
    ctx->pc = 0x34913Cu;
label_34913c:
    // 0x34913c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34913cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349140:
    // 0x349140: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_349144:
    if (ctx->pc == 0x349144u) {
        ctx->pc = 0x349144u;
            // 0x349144: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x349148u;
        goto label_349148;
    }
    ctx->pc = 0x349140u;
    {
        const bool branch_taken_0x349140 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x349140) {
            ctx->pc = 0x349144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349140u;
            // 0x349144: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349154u;
            goto label_349154;
        }
    }
    ctx->pc = 0x349148u;
label_349148:
    // 0x349148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34914c:
    // 0x34914c: 0x10000007  b           . + 4 + (0x7 << 2)
label_349150:
    if (ctx->pc == 0x349150u) {
        ctx->pc = 0x349150u;
            // 0x349150: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x349154u;
        goto label_349154;
    }
    ctx->pc = 0x34914Cu;
    {
        const bool branch_taken_0x34914c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34914Cu;
            // 0x349150: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34914c) {
            ctx->pc = 0x34916Cu;
            goto label_34916c;
        }
    }
    ctx->pc = 0x349154u;
label_349154:
    // 0x349154: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x349154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_349158:
    // 0x349158: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x349158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34915c:
    // 0x34915c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34915cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349160:
    // 0x349160: 0x0  nop
    ctx->pc = 0x349160u;
    // NOP
label_349164:
    // 0x349164: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x349164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_349168:
    // 0x349168: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x349168u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_34916c:
    // 0x34916c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34916cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_349170:
    // 0x349170: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x349170u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_349174:
    // 0x349174: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x349174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_349178:
    // 0x349178: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x349178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
label_34917c:
    // 0x34917c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x34917cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_349180:
    // 0x349180: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x349180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_349184:
    // 0x349184: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x349184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_349188:
    // 0x349188: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x349188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_34918c:
    // 0x34918c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x34918cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_349190:
    // 0x349190: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x349190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_349194:
    // 0x349194: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x349194u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_349198:
    // 0x349198: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x349198u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_34919c:
    // 0x34919c: 0x460520dd  msub.s      $f3, $f4, $f5
    ctx->pc = 0x34919cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_3491a0:
    // 0x3491a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3491a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3491a4:
    // 0x3491a4: 0x0  nop
    ctx->pc = 0x3491a4u;
    // NOP
label_3491a8:
    // 0x3491a8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3491a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3491ac:
    // 0x3491ac: 0xc04cc7c  jal         func_1331F0
label_3491b0:
    if (ctx->pc == 0x3491B0u) {
        ctx->pc = 0x3491B0u;
            // 0x3491b0: 0x46030b1c  madd.s      $f12, $f1, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
        ctx->pc = 0x3491B4u;
        goto label_3491b4;
    }
    ctx->pc = 0x3491ACu;
    SET_GPR_U32(ctx, 31, 0x3491B4u);
    ctx->pc = 0x3491B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3491ACu;
            // 0x3491b0: 0x46030b1c  madd.s      $f12, $f1, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3491B4u; }
        if (ctx->pc != 0x3491B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3491B4u; }
        if (ctx->pc != 0x3491B4u) { return; }
    }
    ctx->pc = 0x3491B4u;
label_3491b4:
    // 0x3491b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3491b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3491b8:
    // 0x3491b8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3491b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3491bc:
    // 0x3491bc: 0x8c44e410  lw          $a0, -0x1BF0($v0)
    ctx->pc = 0x3491bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_3491c0:
    // 0x3491c0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x3491c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3491c4:
    // 0x3491c4: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x3491c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3491c8:
    // 0x3491c8: 0xc0d16dc  jal         func_345B70
label_3491cc:
    if (ctx->pc == 0x3491CCu) {
        ctx->pc = 0x3491CCu;
            // 0x3491cc: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x3491D0u;
        goto label_3491d0;
    }
    ctx->pc = 0x3491C8u;
    SET_GPR_U32(ctx, 31, 0x3491D0u);
    ctx->pc = 0x3491CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3491C8u;
            // 0x3491cc: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345B70u;
    if (runtime->hasFunction(0x345B70u)) {
        auto targetFn = runtime->lookupFunction(0x345B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3491D0u; }
        if (ctx->pc != 0x3491D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345B70_0x345b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3491D0u; }
        if (ctx->pc != 0x3491D0u) { return; }
    }
    ctx->pc = 0x3491D0u;
label_3491d0:
    // 0x3491d0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3491d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_3491d4:
    // 0x3491d4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3491d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_3491d8:
    // 0x3491d8: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_3491dc:
    if (ctx->pc == 0x3491DCu) {
        ctx->pc = 0x3491DCu;
            // 0x3491dc: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3491E0u;
        goto label_3491e0;
    }
    ctx->pc = 0x3491D8u;
    {
        const bool branch_taken_0x3491d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3491d8) {
            ctx->pc = 0x3491DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3491D8u;
            // 0x3491dc: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x349270u;
            goto label_349270;
        }
    }
    ctx->pc = 0x3491E0u;
label_3491e0:
    // 0x3491e0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3491e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3491e4:
    // 0x3491e4: 0xc04cc1c  jal         func_133070
label_3491e8:
    if (ctx->pc == 0x3491E8u) {
        ctx->pc = 0x3491E8u;
            // 0x3491e8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3491ECu;
        goto label_3491ec;
    }
    ctx->pc = 0x3491E4u;
    SET_GPR_U32(ctx, 31, 0x3491ECu);
    ctx->pc = 0x3491E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3491E4u;
            // 0x3491e8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3491ECu; }
        if (ctx->pc != 0x3491ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3491ECu; }
        if (ctx->pc != 0x3491ECu) { return; }
    }
    ctx->pc = 0x3491ECu;
label_3491ec:
    // 0x3491ec: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x3491ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
label_3491f0:
    // 0x3491f0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x3491f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_3491f4:
    // 0x3491f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3491f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3491f8:
    // 0x3491f8: 0x0  nop
    ctx->pc = 0x3491f8u;
    // NOP
label_3491fc:
    // 0x3491fc: 0x46010101  sub.s       $f4, $f0, $f1
    ctx->pc = 0x3491fcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_349200:
    // 0x349200: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x349200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349204:
    // 0x349204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349208:
    // 0x349208: 0x0  nop
    ctx->pc = 0x349208u;
    // NOP
label_34920c:
    // 0x34920c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34920cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_349210:
    // 0x349210: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_349214:
    if (ctx->pc == 0x349214u) {
        ctx->pc = 0x349214u;
            // 0x349214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x349218u;
        goto label_349218;
    }
    ctx->pc = 0x349210u;
    {
        const bool branch_taken_0x349210 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x349214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349210u;
            // 0x349214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349210) {
            ctx->pc = 0x34921Cu;
            goto label_34921c;
        }
    }
    ctx->pc = 0x349218u;
label_349218:
    // 0x349218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x349218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34921c:
    // 0x34921c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_349220:
    if (ctx->pc == 0x349220u) {
        ctx->pc = 0x349220u;
            // 0x349220: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x349224u;
        goto label_349224;
    }
    ctx->pc = 0x34921Cu;
    {
        const bool branch_taken_0x34921c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34921c) {
            ctx->pc = 0x349220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34921Cu;
            // 0x349220: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349230u;
            goto label_349230;
        }
    }
    ctx->pc = 0x349224u;
label_349224:
    // 0x349224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349228:
    // 0x349228: 0x10000007  b           . + 4 + (0x7 << 2)
label_34922c:
    if (ctx->pc == 0x34922Cu) {
        ctx->pc = 0x34922Cu;
            // 0x34922c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x349230u;
        goto label_349230;
    }
    ctx->pc = 0x349228u;
    {
        const bool branch_taken_0x349228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34922Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349228u;
            // 0x34922c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349228) {
            ctx->pc = 0x349248u;
            goto label_349248;
        }
    }
    ctx->pc = 0x349230u;
label_349230:
    // 0x349230: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x349230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_349234:
    // 0x349234: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x349234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_349238:
    // 0x349238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34923c:
    // 0x34923c: 0x0  nop
    ctx->pc = 0x34923cu;
    // NOP
label_349240:
    // 0x349240: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x349240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_349244:
    // 0x349244: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x349244u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_349248:
    // 0x349248: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x349248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_34924c:
    // 0x34924c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34924cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_349250:
    // 0x349250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x349250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_349254:
    // 0x349254: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349258:
    // 0x349258: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x349258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_34925c:
    // 0x34925c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x34925cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349260:
    // 0x349260: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x349260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_349264:
    // 0x349264: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x349264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_349268:
    // 0x349268: 0x10000006  b           . + 4 + (0x6 << 2)
label_34926c:
    if (ctx->pc == 0x34926Cu) {
        ctx->pc = 0x34926Cu;
            // 0x34926c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x349270u;
        goto label_349270;
    }
    ctx->pc = 0x349268u;
    {
        const bool branch_taken_0x349268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349268u;
            // 0x34926c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349268) {
            ctx->pc = 0x349284u;
            goto label_349284;
        }
    }
    ctx->pc = 0x349270u;
label_349270:
    // 0x349270: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x349270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_349274:
    // 0x349274: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x349274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_349278:
    // 0x349278: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x349278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34927c:
    // 0x34927c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34927cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_349280:
    // 0x349280: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x349280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_349284:
    // 0x349284: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x349284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_349288:
    // 0x349288: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x349288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_34928c:
    // 0x34928c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x34928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_349290:
    // 0x349290: 0xc04cc7c  jal         func_1331F0
label_349294:
    if (ctx->pc == 0x349294u) {
        ctx->pc = 0x349294u;
            // 0x349294: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x349298u;
        goto label_349298;
    }
    ctx->pc = 0x349290u;
    SET_GPR_U32(ctx, 31, 0x349298u);
    ctx->pc = 0x349294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349290u;
            // 0x349294: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349298u; }
        if (ctx->pc != 0x349298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349298u; }
        if (ctx->pc != 0x349298u) { return; }
    }
    ctx->pc = 0x349298u;
label_349298:
    // 0x349298: 0xc6a00120  lwc1        $f0, 0x120($s5)
    ctx->pc = 0x349298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34929c:
    // 0x34929c: 0x260402e0  addiu       $a0, $s0, 0x2E0
    ctx->pc = 0x34929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
label_3492a0:
    // 0x3492a0: 0x26a500c0  addiu       $a1, $s5, 0xC0
    ctx->pc = 0x3492a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
label_3492a4:
    // 0x3492a4: 0xc04cc04  jal         func_133010
label_3492a8:
    if (ctx->pc == 0x3492A8u) {
        ctx->pc = 0x3492A8u;
            // 0x3492a8: 0xe6000de4  swc1        $f0, 0xDE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
        ctx->pc = 0x3492ACu;
        goto label_3492ac;
    }
    ctx->pc = 0x3492A4u;
    SET_GPR_U32(ctx, 31, 0x3492ACu);
    ctx->pc = 0x3492A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3492A4u;
            // 0x3492a8: 0xe6000de4  swc1        $f0, 0xDE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492ACu; }
        if (ctx->pc != 0x3492ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492ACu; }
        if (ctx->pc != 0x3492ACu) { return; }
    }
    ctx->pc = 0x3492ACu;
label_3492ac:
    // 0x3492ac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3492acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3492b0:
    // 0x3492b0: 0xc04cc04  jal         func_133010
label_3492b4:
    if (ctx->pc == 0x3492B4u) {
        ctx->pc = 0x3492B4u;
            // 0x3492b4: 0x262501d0  addiu       $a1, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->pc = 0x3492B8u;
        goto label_3492b8;
    }
    ctx->pc = 0x3492B0u;
    SET_GPR_U32(ctx, 31, 0x3492B8u);
    ctx->pc = 0x3492B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3492B0u;
            // 0x3492b4: 0x262501d0  addiu       $a1, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492B8u; }
        if (ctx->pc != 0x3492B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492B8u; }
        if (ctx->pc != 0x3492B8u) { return; }
    }
    ctx->pc = 0x3492B8u;
label_3492b8:
    // 0x3492b8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x3492b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_3492bc:
    // 0x3492bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3492bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3492c0:
    // 0x3492c0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3492c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3492c4:
    // 0x3492c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3492c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3492c8:
    // 0x3492c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3492c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3492cc:
    // 0x3492cc: 0xc04cc7c  jal         func_1331F0
label_3492d0:
    if (ctx->pc == 0x3492D0u) {
        ctx->pc = 0x3492D0u;
            // 0x3492d0: 0x26a600c0  addiu       $a2, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->pc = 0x3492D4u;
        goto label_3492d4;
    }
    ctx->pc = 0x3492CCu;
    SET_GPR_U32(ctx, 31, 0x3492D4u);
    ctx->pc = 0x3492D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3492CCu;
            // 0x3492d0: 0x26a600c0  addiu       $a2, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492D4u; }
        if (ctx->pc != 0x3492D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492D4u; }
        if (ctx->pc != 0x3492D4u) { return; }
    }
    ctx->pc = 0x3492D4u;
label_3492d4:
    // 0x3492d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3492d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3492d8:
    // 0x3492d8: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3492d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3492dc:
    // 0x3492dc: 0xc04cc90  jal         func_133240
label_3492e0:
    if (ctx->pc == 0x3492E0u) {
        ctx->pc = 0x3492E0u;
            // 0x3492e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3492E4u;
        goto label_3492e4;
    }
    ctx->pc = 0x3492DCu;
    SET_GPR_U32(ctx, 31, 0x3492E4u);
    ctx->pc = 0x3492E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3492DCu;
            // 0x3492e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492E4u; }
        if (ctx->pc != 0x3492E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492E4u; }
        if (ctx->pc != 0x3492E4u) { return; }
    }
    ctx->pc = 0x3492E4u;
label_3492e4:
    // 0x3492e4: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x3492e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_3492e8:
    // 0x3492e8: 0xc04cc04  jal         func_133010
label_3492ec:
    if (ctx->pc == 0x3492ECu) {
        ctx->pc = 0x3492ECu;
            // 0x3492ec: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3492F0u;
        goto label_3492f0;
    }
    ctx->pc = 0x3492E8u;
    SET_GPR_U32(ctx, 31, 0x3492F0u);
    ctx->pc = 0x3492ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3492E8u;
            // 0x3492ec: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492F0u; }
        if (ctx->pc != 0x3492F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492F0u; }
        if (ctx->pc != 0x3492F0u) { return; }
    }
    ctx->pc = 0x3492F0u;
label_3492f0:
    // 0x3492f0: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3492f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3492f4:
    // 0x3492f4: 0xc075318  jal         func_1D4C60
label_3492f8:
    if (ctx->pc == 0x3492F8u) {
        ctx->pc = 0x3492F8u;
            // 0x3492f8: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->pc = 0x3492FCu;
        goto label_3492fc;
    }
    ctx->pc = 0x3492F4u;
    SET_GPR_U32(ctx, 31, 0x3492FCu);
    ctx->pc = 0x3492F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3492F4u;
            // 0x3492f8: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492FCu; }
        if (ctx->pc != 0x3492FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3492FCu; }
        if (ctx->pc != 0x3492FCu) { return; }
    }
    ctx->pc = 0x3492FCu;
label_3492fc:
    // 0x3492fc: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x3492fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_349300:
    // 0x349300: 0x26040840  addiu       $a0, $s0, 0x840
    ctx->pc = 0x349300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_349304:
    // 0x349304: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x349304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_349308:
    // 0x349308: 0xc0c6250  jal         func_318940
label_34930c:
    if (ctx->pc == 0x34930Cu) {
        ctx->pc = 0x34930Cu;
            // 0x34930c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349310u;
        goto label_349310;
    }
    ctx->pc = 0x349308u;
    SET_GPR_U32(ctx, 31, 0x349310u);
    ctx->pc = 0x34930Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349308u;
            // 0x34930c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349310u; }
        if (ctx->pc != 0x349310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349310u; }
        if (ctx->pc != 0x349310u) { return; }
    }
    ctx->pc = 0x349310u;
label_349310:
    // 0x349310: 0x26a500d0  addiu       $a1, $s5, 0xD0
    ctx->pc = 0x349310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
label_349314:
    // 0x349314: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x349314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_349318:
    // 0x349318: 0xc075378  jal         func_1D4DE0
label_34931c:
    if (ctx->pc == 0x34931Cu) {
        ctx->pc = 0x34931Cu;
            // 0x34931c: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->pc = 0x349320u;
        goto label_349320;
    }
    ctx->pc = 0x349318u;
    SET_GPR_U32(ctx, 31, 0x349320u);
    ctx->pc = 0x34931Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349318u;
            // 0x34931c: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349320u; }
        if (ctx->pc != 0x349320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349320u; }
        if (ctx->pc != 0x349320u) { return; }
    }
    ctx->pc = 0x349320u;
label_349320:
    // 0x349320: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x349320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349324:
    // 0x349324: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x349324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_349328:
    // 0x349328: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x349328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_34932c:
    // 0x34932c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x34932cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349330:
    // 0x349330: 0xc0c753c  jal         func_31D4F0
label_349334:
    if (ctx->pc == 0x349334u) {
        ctx->pc = 0x349334u;
            // 0x349334: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x349338u;
        goto label_349338;
    }
    ctx->pc = 0x349330u;
    SET_GPR_U32(ctx, 31, 0x349338u);
    ctx->pc = 0x349334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349330u;
            // 0x349334: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349338u; }
        if (ctx->pc != 0x349338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349338u; }
        if (ctx->pc != 0x349338u) { return; }
    }
    ctx->pc = 0x349338u;
label_349338:
    // 0x349338: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x349338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_34933c:
    // 0x34933c: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x34933cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_349340:
    // 0x349340: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x349340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_349344:
    // 0x349344: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x349344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_349348:
    // 0x349348: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x349348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_34934c:
    // 0x34934c: 0xc0c753c  jal         func_31D4F0
label_349350:
    if (ctx->pc == 0x349350u) {
        ctx->pc = 0x349350u;
            // 0x349350: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->pc = 0x349354u;
        goto label_349354;
    }
    ctx->pc = 0x34934Cu;
    SET_GPR_U32(ctx, 31, 0x349354u);
    ctx->pc = 0x349350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34934Cu;
            // 0x349350: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349354u; }
        if (ctx->pc != 0x349354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349354u; }
        if (ctx->pc != 0x349354u) { return; }
    }
    ctx->pc = 0x349354u;
label_349354:
    // 0x349354: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x349354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_349358:
    // 0x349358: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x349358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_34935c:
    // 0x34935c: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x34935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_349360:
    // 0x349360: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x349360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_349364:
    // 0x349364: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x349364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_349368:
    // 0x349368: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x349368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_34936c:
    // 0x34936c: 0xc0c6250  jal         func_318940
label_349370:
    if (ctx->pc == 0x349370u) {
        ctx->pc = 0x349370u;
            // 0x349370: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->pc = 0x349374u;
        goto label_349374;
    }
    ctx->pc = 0x34936Cu;
    SET_GPR_U32(ctx, 31, 0x349374u);
    ctx->pc = 0x349370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34936Cu;
            // 0x349370: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349374u; }
        if (ctx->pc != 0x349374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349374u; }
        if (ctx->pc != 0x349374u) { return; }
    }
    ctx->pc = 0x349374u;
label_349374:
    // 0x349374: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x349374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_349378:
    // 0x349378: 0x26040b10  addiu       $a0, $s0, 0xB10
    ctx->pc = 0x349378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
label_34937c:
    // 0x34937c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x34937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_349380:
    // 0x349380: 0xc62001e4  lwc1        $f0, 0x1E4($s1)
    ctx->pc = 0x349380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349384:
    // 0x349384: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x349384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_349388:
    // 0x349388: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x349388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34938c:
    // 0x34938c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34938cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_349390:
    // 0x349390: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_349394:
    // 0x349394: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x349394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_349398:
    // 0x349398: 0x0  nop
    ctx->pc = 0x349398u;
    // NOP
label_34939c:
    // 0x34939c: 0xae020af4  sw          $v0, 0xAF4($s0)
    ctx->pc = 0x34939cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2804), GPR_U32(ctx, 2));
label_3493a0:
    // 0x3493a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3493a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3493a4:
    // 0x3493a4: 0xc04cbd8  jal         func_132F60
label_3493a8:
    if (ctx->pc == 0x3493A8u) {
        ctx->pc = 0x3493A8u;
            // 0x3493a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3493ACu;
        goto label_3493ac;
    }
    ctx->pc = 0x3493A4u;
    SET_GPR_U32(ctx, 31, 0x3493ACu);
    ctx->pc = 0x3493A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3493A4u;
            // 0x3493a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3493ACu; }
        if (ctx->pc != 0x3493ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3493ACu; }
        if (ctx->pc != 0x3493ACu) { return; }
    }
    ctx->pc = 0x3493ACu;
label_3493ac:
    // 0x3493ac: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_3493b0:
    if (ctx->pc == 0x3493B0u) {
        ctx->pc = 0x3493B4u;
        goto label_3493b4;
    }
    ctx->pc = 0x3493ACu;
    {
        const bool branch_taken_0x3493ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3493ac) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x3493B4u;
label_3493b4:
    // 0x3493b4: 0x8e240230  lw          $a0, 0x230($s1)
    ctx->pc = 0x3493b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_3493b8:
    // 0x3493b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3493b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3493bc:
    // 0x3493bc: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x3493bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3493c0:
    // 0x3493c0: 0x263300f0  addiu       $s3, $s1, 0xF0
    ctx->pc = 0x3493c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_3493c4:
    // 0x3493c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3493c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3493c8:
    // 0x3493c8: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x3493c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3493cc:
    // 0x3493cc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3493ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3493d0:
    // 0x3493d0: 0x320f809  jalr        $t9
label_3493d4:
    if (ctx->pc == 0x3493D4u) {
        ctx->pc = 0x3493D4u;
            // 0x3493d4: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x3493D8u;
        goto label_3493d8;
    }
    ctx->pc = 0x3493D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3493D8u);
        ctx->pc = 0x3493D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3493D0u;
            // 0x3493d4: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3493D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3493D8u; }
            if (ctx->pc != 0x3493D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3493D8u;
label_3493d8:
    // 0x3493d8: 0x8e240234  lw          $a0, 0x234($s1)
    ctx->pc = 0x3493d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_3493dc:
    // 0x3493dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3493dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3493e0:
    // 0x3493e0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3493e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3493e4:
    // 0x3493e4: 0x320f809  jalr        $t9
label_3493e8:
    if (ctx->pc == 0x3493E8u) {
        ctx->pc = 0x3493ECu;
        goto label_3493ec;
    }
    ctx->pc = 0x3493E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3493ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3493ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3493ECu; }
            if (ctx->pc != 0x3493ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3493ECu;
label_3493ec:
    // 0x3493ec: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3493ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_3493f0:
    // 0x3493f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3493f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3493f4:
    // 0x3493f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3493f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3493f8:
    // 0x3493f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3493f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3493fc:
    // 0x3493fc: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3493fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_349400:
    // 0x349400: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x349400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349404:
    // 0x349404: 0xc0b838c  jal         func_2E0E30
label_349408:
    if (ctx->pc == 0x349408u) {
        ctx->pc = 0x349408u;
            // 0x349408: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34940Cu;
        goto label_34940c;
    }
    ctx->pc = 0x349404u;
    SET_GPR_U32(ctx, 31, 0x34940Cu);
    ctx->pc = 0x349408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349404u;
            // 0x349408: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E30u;
    if (runtime->hasFunction(0x2E0E30u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34940Cu; }
        if (ctx->pc != 0x34940Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E30_0x2e0e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34940Cu; }
        if (ctx->pc != 0x34940Cu) { return; }
    }
    ctx->pc = 0x34940Cu;
label_34940c:
    // 0x34940c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x34940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_349410:
    // 0x349410: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x349410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349414:
    // 0x349414: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x349414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_349418:
    // 0x349418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x349418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34941c:
    // 0x34941c: 0xc0b82c4  jal         func_2E0B10
label_349420:
    if (ctx->pc == 0x349420u) {
        ctx->pc = 0x349420u;
            // 0x349420: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x349424u;
        goto label_349424;
    }
    ctx->pc = 0x34941Cu;
    SET_GPR_U32(ctx, 31, 0x349424u);
    ctx->pc = 0x349420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34941Cu;
            // 0x349420: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349424u; }
        if (ctx->pc != 0x349424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349424u; }
        if (ctx->pc != 0x349424u) { return; }
    }
    ctx->pc = 0x349424u;
label_349424:
    // 0x349424: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x349424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349428:
    // 0x349428: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x349428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_34942c:
    // 0x34942c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x34942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349430:
    // 0x349430: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x349430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_349434:
    // 0x349434: 0xc66c0014  lwc1        $f12, 0x14($s3)
    ctx->pc = 0x349434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_349438:
    // 0x349438: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x349438u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_34943c:
    // 0x34943c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x34943cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_349440:
    // 0x349440: 0x46000344  c1          0x344
    ctx->pc = 0x349440u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_349444:
    // 0x349444: 0x0  nop
    ctx->pc = 0x349444u;
    // NOP
label_349448:
    // 0x349448: 0x0  nop
    ctx->pc = 0x349448u;
    // NOP
label_34944c:
    // 0x34944c: 0xc04780a  jal         func_11E028
label_349450:
    if (ctx->pc == 0x349450u) {
        ctx->pc = 0x349454u;
        goto label_349454;
    }
    ctx->pc = 0x34944Cu;
    SET_GPR_U32(ctx, 31, 0x349454u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349454u; }
        if (ctx->pc != 0x349454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349454u; }
        if (ctx->pc != 0x349454u) { return; }
    }
    ctx->pc = 0x349454u;
label_349454:
    // 0x349454: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x349454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_349458:
    // 0x349458: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x349458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_34945c:
    // 0x34945c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34945cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_349460:
    // 0x349460: 0x0  nop
    ctx->pc = 0x349460u;
    // NOP
label_349464:
    // 0x349464: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x349464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_349468:
    // 0x349468: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_34946c:
    // 0x34946c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34946cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_349470:
    // 0x349470: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x349470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_349474:
    // 0x349474: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x349474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_349478:
    // 0x349478: 0xc04780a  jal         func_11E028
label_34947c:
    if (ctx->pc == 0x34947Cu) {
        ctx->pc = 0x34947Cu;
            // 0x34947c: 0x29823  negu        $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x349480u;
        goto label_349480;
    }
    ctx->pc = 0x349478u;
    SET_GPR_U32(ctx, 31, 0x349480u);
    ctx->pc = 0x34947Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349478u;
            // 0x34947c: 0x29823  negu        $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349480u; }
        if (ctx->pc != 0x349480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349480u; }
        if (ctx->pc != 0x349480u) { return; }
    }
    ctx->pc = 0x349480u;
label_349480:
    // 0x349480: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x349480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_349484:
    // 0x349484: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x349484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_349488:
    // 0x349488: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x349488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_34948c:
    // 0x34948c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x34948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_349490:
    // 0x349490: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x349490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_349494:
    // 0x349494: 0x0  nop
    ctx->pc = 0x349494u;
    // NOP
label_349498:
    // 0x349498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x349498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_34949c:
    // 0x34949c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34949cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3494a0:
    // 0x3494a0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3494a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3494a4:
    // 0x3494a4: 0xc04ca18  jal         func_132860
label_3494a8:
    if (ctx->pc == 0x3494A8u) {
        ctx->pc = 0x3494A8u;
            // 0x3494a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3494ACu;
        goto label_3494ac;
    }
    ctx->pc = 0x3494A4u;
    SET_GPR_U32(ctx, 31, 0x3494ACu);
    ctx->pc = 0x3494A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3494A4u;
            // 0x3494a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3494ACu; }
        if (ctx->pc != 0x3494ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3494ACu; }
        if (ctx->pc != 0x3494ACu) { return; }
    }
    ctx->pc = 0x3494ACu;
label_3494ac:
    // 0x3494ac: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3494acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_3494b0:
    // 0x3494b0: 0xc04c74c  jal         func_131D30
label_3494b4:
    if (ctx->pc == 0x3494B4u) {
        ctx->pc = 0x3494B4u;
            // 0x3494b4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x3494B8u;
        goto label_3494b8;
    }
    ctx->pc = 0x3494B0u;
    SET_GPR_U32(ctx, 31, 0x3494B8u);
    ctx->pc = 0x3494B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3494B0u;
            // 0x3494b4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3494B8u; }
        if (ctx->pc != 0x3494B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3494B8u; }
        if (ctx->pc != 0x3494B8u) { return; }
    }
    ctx->pc = 0x3494B8u;
label_3494b8:
    // 0x3494b8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x3494b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_3494bc:
    // 0x3494bc: 0xc04c74c  jal         func_131D30
label_3494c0:
    if (ctx->pc == 0x3494C0u) {
        ctx->pc = 0x3494C0u;
            // 0x3494c0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3494C4u;
        goto label_3494c4;
    }
    ctx->pc = 0x3494BCu;
    SET_GPR_U32(ctx, 31, 0x3494C4u);
    ctx->pc = 0x3494C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3494BCu;
            // 0x3494c0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3494C4u; }
        if (ctx->pc != 0x3494C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3494C4u; }
        if (ctx->pc != 0x3494C4u) { return; }
    }
    ctx->pc = 0x3494C4u;
label_3494c4:
    // 0x3494c4: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x3494c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_3494c8:
    // 0x3494c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3494c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3494cc:
    // 0x3494cc: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3494ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_3494d0:
    // 0x3494d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3494d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3494d4:
    // 0x3494d4: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x3494d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
label_3494d8:
    // 0x3494d8: 0x8e240238  lw          $a0, 0x238($s1)
    ctx->pc = 0x3494d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
label_3494dc:
    // 0x3494dc: 0xc122c5c  jal         func_48B170
label_3494e0:
    if (ctx->pc == 0x3494E0u) {
        ctx->pc = 0x3494E0u;
            // 0x3494e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3494E4u;
        goto label_3494e4;
    }
    ctx->pc = 0x3494DCu;
    SET_GPR_U32(ctx, 31, 0x3494E4u);
    ctx->pc = 0x3494E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3494DCu;
            // 0x3494e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3494E4u; }
        if (ctx->pc != 0x3494E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3494E4u; }
        if (ctx->pc != 0x3494E4u) { return; }
    }
    ctx->pc = 0x3494E4u;
label_3494e4:
    // 0x3494e4: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_3494e8:
    if (ctx->pc == 0x3494E8u) {
        ctx->pc = 0x3494ECu;
        goto label_3494ec;
    }
    ctx->pc = 0x3494E4u;
    {
        const bool branch_taken_0x3494e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3494e4) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x3494ECu;
label_3494ec:
    // 0x3494ec: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x3494ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3494f0:
    // 0x3494f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3494f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3494f4:
    // 0x3494f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3494f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3494f8:
    // 0x3494f8: 0xc0d8834  jal         func_3620D0
label_3494fc:
    if (ctx->pc == 0x3494FCu) {
        ctx->pc = 0x3494FCu;
            // 0x3494fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349500u;
        goto label_349500;
    }
    ctx->pc = 0x3494F8u;
    SET_GPR_U32(ctx, 31, 0x349500u);
    ctx->pc = 0x3494FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3494F8u;
            // 0x3494fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349500u; }
        if (ctx->pc != 0x349500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349500u; }
        if (ctx->pc != 0x349500u) { return; }
    }
    ctx->pc = 0x349500u;
label_349500:
    // 0x349500: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x349500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_349504:
    // 0x349504: 0xc04cc04  jal         func_133010
label_349508:
    if (ctx->pc == 0x349508u) {
        ctx->pc = 0x349508u;
            // 0x349508: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x34950Cu;
        goto label_34950c;
    }
    ctx->pc = 0x349504u;
    SET_GPR_U32(ctx, 31, 0x34950Cu);
    ctx->pc = 0x349508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349504u;
            // 0x349508: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34950Cu; }
        if (ctx->pc != 0x34950Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34950Cu; }
        if (ctx->pc != 0x34950Cu) { return; }
    }
    ctx->pc = 0x34950Cu;
label_34950c:
    // 0x34950c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x34950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_349510:
    // 0x349510: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x349510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_349514:
    // 0x349514: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x349514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_349518:
    // 0x349518: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x349518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34951c:
    // 0x34951c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34951cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_349520:
    // 0x349520: 0xc04cc7c  jal         func_1331F0
label_349524:
    if (ctx->pc == 0x349524u) {
        ctx->pc = 0x349524u;
            // 0x349524: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x349528u;
        goto label_349528;
    }
    ctx->pc = 0x349520u;
    SET_GPR_U32(ctx, 31, 0x349528u);
    ctx->pc = 0x349524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349520u;
            // 0x349524: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349528u; }
        if (ctx->pc != 0x349528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349528u; }
        if (ctx->pc != 0x349528u) { return; }
    }
    ctx->pc = 0x349528u;
label_349528:
    // 0x349528: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x349528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_34952c:
    // 0x34952c: 0xc04c720  jal         func_131C80
label_349530:
    if (ctx->pc == 0x349530u) {
        ctx->pc = 0x349530u;
            // 0x349530: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x349534u;
        goto label_349534;
    }
    ctx->pc = 0x34952Cu;
    SET_GPR_U32(ctx, 31, 0x349534u);
    ctx->pc = 0x349530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34952Cu;
            // 0x349530: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349534u; }
        if (ctx->pc != 0x349534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349534u; }
        if (ctx->pc != 0x349534u) { return; }
    }
    ctx->pc = 0x349534u;
label_349534:
    // 0x349534: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x349534u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_349538:
    // 0x349538: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x349538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34953c:
    // 0x34953c: 0x1483008e  bne         $a0, $v1, . + 4 + (0x8E << 2)
label_349540:
    if (ctx->pc == 0x349540u) {
        ctx->pc = 0x349544u;
        goto label_349544;
    }
    ctx->pc = 0x34953Cu;
    {
        const bool branch_taken_0x34953c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34953c) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x349544u;
label_349544:
    // 0x349544: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x349544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_349548:
    // 0x349548: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x349548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
label_34954c:
    // 0x34954c: 0x8e240230  lw          $a0, 0x230($s1)
    ctx->pc = 0x34954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_349550:
    // 0x349550: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x349550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_349554:
    // 0x349554: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x349554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_349558:
    // 0x349558: 0x320f809  jalr        $t9
label_34955c:
    if (ctx->pc == 0x34955Cu) {
        ctx->pc = 0x349560u;
        goto label_349560;
    }
    ctx->pc = 0x349558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x349560u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x349560u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x349560u; }
            if (ctx->pc != 0x349560u) { return; }
        }
        }
    }
    ctx->pc = 0x349560u;
label_349560:
    // 0x349560: 0x8e240234  lw          $a0, 0x234($s1)
    ctx->pc = 0x349560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_349564:
    // 0x349564: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x349564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_349568:
    // 0x349568: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x349568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_34956c:
    // 0x34956c: 0x320f809  jalr        $t9
label_349570:
    if (ctx->pc == 0x349570u) {
        ctx->pc = 0x349574u;
        goto label_349574;
    }
    ctx->pc = 0x34956Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x349574u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x349574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x349574u; }
            if (ctx->pc != 0x349574u) { return; }
        }
        }
    }
    ctx->pc = 0x349574u;
label_349574:
    // 0x349574: 0x10000080  b           . + 4 + (0x80 << 2)
label_349578:
    if (ctx->pc == 0x349578u) {
        ctx->pc = 0x34957Cu;
        goto label_34957c;
    }
    ctx->pc = 0x349574u;
    {
        const bool branch_taken_0x349574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349574) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x34957Cu;
label_34957c:
    // 0x34957c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34957cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_349580:
    // 0x349580: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x349580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_349584:
    // 0x349584: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x349584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_349588:
    // 0x349588: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x349588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34958c:
    // 0x34958c: 0xc0d8834  jal         func_3620D0
label_349590:
    if (ctx->pc == 0x349590u) {
        ctx->pc = 0x349590u;
            // 0x349590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349594u;
        goto label_349594;
    }
    ctx->pc = 0x34958Cu;
    SET_GPR_U32(ctx, 31, 0x349594u);
    ctx->pc = 0x349590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34958Cu;
            // 0x349590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349594u; }
        if (ctx->pc != 0x349594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349594u; }
        if (ctx->pc != 0x349594u) { return; }
    }
    ctx->pc = 0x349594u;
label_349594:
    // 0x349594: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x349594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_349598:
    // 0x349598: 0xc04cc04  jal         func_133010
label_34959c:
    if (ctx->pc == 0x34959Cu) {
        ctx->pc = 0x34959Cu;
            // 0x34959c: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3495A0u;
        goto label_3495a0;
    }
    ctx->pc = 0x349598u;
    SET_GPR_U32(ctx, 31, 0x3495A0u);
    ctx->pc = 0x34959Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349598u;
            // 0x34959c: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3495A0u; }
        if (ctx->pc != 0x3495A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3495A0u; }
        if (ctx->pc != 0x3495A0u) { return; }
    }
    ctx->pc = 0x3495A0u;
label_3495a0:
    // 0x3495a0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x3495a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_3495a4:
    // 0x3495a4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3495a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3495a8:
    // 0x3495a8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3495a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_3495ac:
    // 0x3495ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3495acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3495b0:
    // 0x3495b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3495b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3495b4:
    // 0x3495b4: 0xc04cc7c  jal         func_1331F0
label_3495b8:
    if (ctx->pc == 0x3495B8u) {
        ctx->pc = 0x3495B8u;
            // 0x3495b8: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x3495BCu;
        goto label_3495bc;
    }
    ctx->pc = 0x3495B4u;
    SET_GPR_U32(ctx, 31, 0x3495BCu);
    ctx->pc = 0x3495B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3495B4u;
            // 0x3495b8: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3495BCu; }
        if (ctx->pc != 0x3495BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3495BCu; }
        if (ctx->pc != 0x3495BCu) { return; }
    }
    ctx->pc = 0x3495BCu;
label_3495bc:
    // 0x3495bc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3495bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3495c0:
    // 0x3495c0: 0xc04c720  jal         func_131C80
label_3495c4:
    if (ctx->pc == 0x3495C4u) {
        ctx->pc = 0x3495C4u;
            // 0x3495c4: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x3495C8u;
        goto label_3495c8;
    }
    ctx->pc = 0x3495C0u;
    SET_GPR_U32(ctx, 31, 0x3495C8u);
    ctx->pc = 0x3495C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3495C0u;
            // 0x3495c4: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3495C8u; }
        if (ctx->pc != 0x3495C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3495C8u; }
        if (ctx->pc != 0x3495C8u) { return; }
    }
    ctx->pc = 0x3495C8u;
label_3495c8:
    // 0x3495c8: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x3495c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_3495cc:
    // 0x3495cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3495ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3495d0:
    // 0x3495d0: 0x14830069  bne         $a0, $v1, . + 4 + (0x69 << 2)
label_3495d4:
    if (ctx->pc == 0x3495D4u) {
        ctx->pc = 0x3495D8u;
        goto label_3495d8;
    }
    ctx->pc = 0x3495D0u;
    {
        const bool branch_taken_0x3495d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3495d0) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x3495D8u;
label_3495d8:
    // 0x3495d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3495d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3495dc:
    // 0x3495dc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3495dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3495e0:
    // 0x3495e0: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x3495e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3495e4:
    // 0x3495e4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3495e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3495e8:
    // 0x3495e8: 0x24a52f18  addiu       $a1, $a1, 0x2F18
    ctx->pc = 0x3495e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12056));
label_3495ec:
    // 0x3495ec: 0x8e3001c8  lw          $s0, 0x1C8($s1)
    ctx->pc = 0x3495ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_3495f0:
    // 0x3495f0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3495f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3495f4:
    // 0x3495f4: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x3495f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_3495f8:
    // 0x3495f8: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x3495f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
label_3495fc:
    // 0x3495fc: 0x3444097b  ori         $a0, $v0, 0x97B
    ctx->pc = 0x3495fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_349600:
    // 0x349600: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x349600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_349604:
    // 0x349604: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x349604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_349608:
    // 0x349608: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x349608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_34960c:
    // 0x34960c: 0x38c20009  xori        $v0, $a2, 0x9
    ctx->pc = 0x34960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)9);
label_349610:
    // 0x349610: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x349610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_349614:
    // 0x349614: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x349614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_349618:
    // 0x349618: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x349618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_34961c:
    // 0x34961c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x34961cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_349620:
    // 0x349620: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x349620u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_349624:
    // 0x349624: 0xc122b58  jal         func_48AD60
label_349628:
    if (ctx->pc == 0x349628u) {
        ctx->pc = 0x349628u;
            // 0x349628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34962Cu;
        goto label_34962c;
    }
    ctx->pc = 0x349624u;
    SET_GPR_U32(ctx, 31, 0x34962Cu);
    ctx->pc = 0x349628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349624u;
            // 0x349628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34962Cu; }
        if (ctx->pc != 0x34962Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34962Cu; }
        if (ctx->pc != 0x34962Cu) { return; }
    }
    ctx->pc = 0x34962Cu;
label_34962c:
    // 0x34962c: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x34962cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_349630:
    // 0x349630: 0xc04cc04  jal         func_133010
label_349634:
    if (ctx->pc == 0x349634u) {
        ctx->pc = 0x349634u;
            // 0x349634: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x349638u;
        goto label_349638;
    }
    ctx->pc = 0x349630u;
    SET_GPR_U32(ctx, 31, 0x349638u);
    ctx->pc = 0x349634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349630u;
            // 0x349634: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349638u; }
        if (ctx->pc != 0x349638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349638u; }
        if (ctx->pc != 0x349638u) { return; }
    }
    ctx->pc = 0x349638u;
label_349638:
    // 0x349638: 0xae3001c8  sw          $s0, 0x1C8($s1)
    ctx->pc = 0x349638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 16));
label_34963c:
    // 0x34963c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349640:
    // 0x349640: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x349640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
label_349644:
    // 0x349644: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x349644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_349648:
    // 0x349648: 0x1000004b  b           . + 4 + (0x4B << 2)
label_34964c:
    if (ctx->pc == 0x34964Cu) {
        ctx->pc = 0x34964Cu;
            // 0x34964c: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x349650u;
        goto label_349650;
    }
    ctx->pc = 0x349648u;
    {
        const bool branch_taken_0x349648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34964Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349648u;
            // 0x34964c: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349648) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x349650u;
label_349650:
    // 0x349650: 0x8e2301c8  lw          $v1, 0x1C8($s1)
    ctx->pc = 0x349650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_349654:
    // 0x349654: 0x8c6600a8  lw          $a2, 0xA8($v1)
    ctx->pc = 0x349654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
label_349658:
    // 0x349658: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
label_34965c:
    if (ctx->pc == 0x34965Cu) {
        ctx->pc = 0x34965Cu;
            // 0x34965c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349660u;
        goto label_349660;
    }
    ctx->pc = 0x349658u;
    {
        const bool branch_taken_0x349658 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x349658) {
            ctx->pc = 0x34965Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349658u;
            // 0x34965c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34968Cu;
            goto label_34968c;
        }
    }
    ctx->pc = 0x349660u;
label_349660:
    // 0x349660: 0x8c6500b8  lw          $a1, 0xB8($v1)
    ctx->pc = 0x349660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_349664:
    // 0x349664: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x349664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_349668:
    // 0x349668: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x349668u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34966c:
    // 0x34966c: 0x8ce401c4  lw          $a0, 0x1C4($a3)
    ctx->pc = 0x34966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 452)));
label_349670:
    // 0x349670: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_349674:
    if (ctx->pc == 0x349674u) {
        ctx->pc = 0x349674u;
            // 0x349674: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x349678u;
        goto label_349678;
    }
    ctx->pc = 0x349670u;
    {
        const bool branch_taken_0x349670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x349670) {
            ctx->pc = 0x349674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349670u;
            // 0x349674: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349680u;
            goto label_349680;
        }
    }
    ctx->pc = 0x349678u;
label_349678:
    // 0x349678: 0x10000004  b           . + 4 + (0x4 << 2)
label_34967c:
    if (ctx->pc == 0x34967Cu) {
        ctx->pc = 0x349680u;
        goto label_349680;
    }
    ctx->pc = 0x349678u;
    {
        const bool branch_taken_0x349678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349678) {
            ctx->pc = 0x34968Cu;
            goto label_34968c;
        }
    }
    ctx->pc = 0x349680u;
label_349680:
    // 0x349680: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
label_349684:
    if (ctx->pc == 0x349684u) {
        ctx->pc = 0x349684u;
            // 0x349684: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x349688u;
        goto label_349688;
    }
    ctx->pc = 0x349680u;
    {
        const bool branch_taken_0x349680 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x349684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349680u;
            // 0x349684: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349680) {
            ctx->pc = 0x349668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_349668;
        }
    }
    ctx->pc = 0x349688u;
label_349688:
    // 0x349688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x349688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34968c:
    // 0x34968c: 0x14e0003a  bnez        $a3, . + 4 + (0x3A << 2)
label_349690:
    if (ctx->pc == 0x349690u) {
        ctx->pc = 0x349694u;
        goto label_349694;
    }
    ctx->pc = 0x34968Cu;
    {
        const bool branch_taken_0x34968c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x34968c) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x349694u;
label_349694:
    // 0x349694: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x349694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_349698:
    // 0x349698: 0x10000037  b           . + 4 + (0x37 << 2)
label_34969c:
    if (ctx->pc == 0x34969Cu) {
        ctx->pc = 0x34969Cu;
            // 0x34969c: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x3496A0u;
        goto label_3496a0;
    }
    ctx->pc = 0x349698u;
    {
        const bool branch_taken_0x349698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349698u;
            // 0x34969c: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349698) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x3496A0u;
label_3496a0:
    // 0x3496a0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3496a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3496a4:
    // 0x3496a4: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x3496a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3496a8:
    // 0x3496a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3496a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3496ac:
    // 0x3496ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3496acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3496b0:
    // 0x3496b0: 0xc0d8834  jal         func_3620D0
label_3496b4:
    if (ctx->pc == 0x3496B4u) {
        ctx->pc = 0x3496B4u;
            // 0x3496b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3496B8u;
        goto label_3496b8;
    }
    ctx->pc = 0x3496B0u;
    SET_GPR_U32(ctx, 31, 0x3496B8u);
    ctx->pc = 0x3496B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3496B0u;
            // 0x3496b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3496B8u; }
        if (ctx->pc != 0x3496B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3496B8u; }
        if (ctx->pc != 0x3496B8u) { return; }
    }
    ctx->pc = 0x3496B8u;
label_3496b8:
    // 0x3496b8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3496b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3496bc:
    // 0x3496bc: 0xc04cc04  jal         func_133010
label_3496c0:
    if (ctx->pc == 0x3496C0u) {
        ctx->pc = 0x3496C0u;
            // 0x3496c0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3496C4u;
        goto label_3496c4;
    }
    ctx->pc = 0x3496BCu;
    SET_GPR_U32(ctx, 31, 0x3496C4u);
    ctx->pc = 0x3496C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3496BCu;
            // 0x3496c0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3496C4u; }
        if (ctx->pc != 0x3496C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3496C4u; }
        if (ctx->pc != 0x3496C4u) { return; }
    }
    ctx->pc = 0x3496C4u;
label_3496c4:
    // 0x3496c4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x3496c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_3496c8:
    // 0x3496c8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3496c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3496cc:
    // 0x3496cc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3496ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_3496d0:
    // 0x3496d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3496d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3496d4:
    // 0x3496d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3496d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3496d8:
    // 0x3496d8: 0xc04cc7c  jal         func_1331F0
label_3496dc:
    if (ctx->pc == 0x3496DCu) {
        ctx->pc = 0x3496DCu;
            // 0x3496dc: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x3496E0u;
        goto label_3496e0;
    }
    ctx->pc = 0x3496D8u;
    SET_GPR_U32(ctx, 31, 0x3496E0u);
    ctx->pc = 0x3496DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3496D8u;
            // 0x3496dc: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3496E0u; }
        if (ctx->pc != 0x3496E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3496E0u; }
        if (ctx->pc != 0x3496E0u) { return; }
    }
    ctx->pc = 0x3496E0u;
label_3496e0:
    // 0x3496e0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3496e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3496e4:
    // 0x3496e4: 0xc04c720  jal         func_131C80
label_3496e8:
    if (ctx->pc == 0x3496E8u) {
        ctx->pc = 0x3496E8u;
            // 0x3496e8: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x3496ECu;
        goto label_3496ec;
    }
    ctx->pc = 0x3496E4u;
    SET_GPR_U32(ctx, 31, 0x3496ECu);
    ctx->pc = 0x3496E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3496E4u;
            // 0x3496e8: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3496ECu; }
        if (ctx->pc != 0x3496ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3496ECu; }
        if (ctx->pc != 0x3496ECu) { return; }
    }
    ctx->pc = 0x3496ECu;
label_3496ec:
    // 0x3496ec: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x3496ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_3496f0:
    // 0x3496f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3496f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3496f4:
    // 0x3496f4: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_3496f8:
    if (ctx->pc == 0x3496F8u) {
        ctx->pc = 0x3496FCu;
        goto label_3496fc;
    }
    ctx->pc = 0x3496F4u;
    {
        const bool branch_taken_0x3496f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3496f4) {
            ctx->pc = 0x349778u;
            goto label_349778;
        }
    }
    ctx->pc = 0x3496FCu;
label_3496fc:
    // 0x3496fc: 0x8e3001c8  lw          $s0, 0x1C8($s1)
    ctx->pc = 0x3496fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_349700:
    // 0x349700: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x349700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_349704:
    // 0x349704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349708:
    // 0x349708: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x349708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34970c:
    // 0x34970c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34970cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_349710:
    // 0x349710: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_349714:
    if (ctx->pc == 0x349714u) {
        ctx->pc = 0x349714u;
            // 0x349714: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x349718u;
        goto label_349718;
    }
    ctx->pc = 0x349710u;
    {
        const bool branch_taken_0x349710 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349710) {
            ctx->pc = 0x349714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349710u;
            // 0x349714: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x349728u;
            goto label_349728;
        }
    }
    ctx->pc = 0x349718u;
label_349718:
    // 0x349718: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349718u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_34971c:
    // 0x34971c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x34971cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_349720:
    // 0x349720: 0x10000007  b           . + 4 + (0x7 << 2)
label_349724:
    if (ctx->pc == 0x349724u) {
        ctx->pc = 0x349724u;
            // 0x349724: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->pc = 0x349728u;
        goto label_349728;
    }
    ctx->pc = 0x349720u;
    {
        const bool branch_taken_0x349720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349720u;
            // 0x349724: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349720) {
            ctx->pc = 0x349740u;
            goto label_349740;
        }
    }
    ctx->pc = 0x349728u;
label_349728:
    // 0x349728: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x349728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_34972c:
    // 0x34972c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34972cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_349730:
    // 0x349730: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x349730u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_349734:
    // 0x349734: 0x0  nop
    ctx->pc = 0x349734u;
    // NOP
label_349738:
    // 0x349738: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x349738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_34973c:
    // 0x34973c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x34973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_349740:
    // 0x349740: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x349740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_349744:
    // 0x349744: 0xc60c006c  lwc1        $f12, 0x6C($s0)
    ctx->pc = 0x349744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_349748:
    // 0x349748: 0xc60d0038  lwc1        $f13, 0x38($s0)
    ctx->pc = 0x349748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34974c:
    // 0x34974c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x34974cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_349750:
    // 0x349750: 0xc122b58  jal         func_48AD60
label_349754:
    if (ctx->pc == 0x349754u) {
        ctx->pc = 0x349754u;
            // 0x349754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349758u;
        goto label_349758;
    }
    ctx->pc = 0x349750u;
    SET_GPR_U32(ctx, 31, 0x349758u);
    ctx->pc = 0x349754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349750u;
            // 0x349754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349758u; }
        if (ctx->pc != 0x349758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349758u; }
        if (ctx->pc != 0x349758u) { return; }
    }
    ctx->pc = 0x349758u;
label_349758:
    // 0x349758: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x349758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_34975c:
    // 0x34975c: 0xc04cc04  jal         func_133010
label_349760:
    if (ctx->pc == 0x349760u) {
        ctx->pc = 0x349760u;
            // 0x349760: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x349764u;
        goto label_349764;
    }
    ctx->pc = 0x34975Cu;
    SET_GPR_U32(ctx, 31, 0x349764u);
    ctx->pc = 0x349760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34975Cu;
            // 0x349760: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349764u; }
        if (ctx->pc != 0x349764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x349764u; }
        if (ctx->pc != 0x349764u) { return; }
    }
    ctx->pc = 0x349764u;
label_349764:
    // 0x349764: 0xae3001c8  sw          $s0, 0x1C8($s1)
    ctx->pc = 0x349764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 16));
label_349768:
    // 0x349768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34976c:
    // 0x34976c: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x34976cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
label_349770:
    // 0x349770: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x349770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_349774:
    // 0x349774: 0xae2301c4  sw          $v1, 0x1C4($s1)
    ctx->pc = 0x349774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
label_349778:
    // 0x349778: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x349778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_34977c:
    // 0x34977c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x34977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_349780:
    // 0x349780: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x349780u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_349784:
    // 0x349784: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x349784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_349788:
    // 0x349788: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x349788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34978c:
    // 0x34978c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x34978cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_349790:
    // 0x349790: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x349790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_349794:
    // 0x349794: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x349794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_349798:
    // 0x349798: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x349798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34979c:
    // 0x34979c: 0x3e00008  jr          $ra
label_3497a0:
    if (ctx->pc == 0x3497A0u) {
        ctx->pc = 0x3497A0u;
            // 0x3497a0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x3497A4u;
        goto label_3497a4;
    }
    ctx->pc = 0x34979Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3497A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34979Cu;
            // 0x3497a0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3497A4u;
label_3497a4:
    // 0x3497a4: 0x0  nop
    ctx->pc = 0x3497a4u;
    // NOP
label_3497a8:
    // 0x3497a8: 0x0  nop
    ctx->pc = 0x3497a8u;
    // NOP
label_3497ac:
    // 0x3497ac: 0x0  nop
    ctx->pc = 0x3497acu;
    // NOP
}
