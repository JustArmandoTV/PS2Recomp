#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00398DD0
// Address: 0x398dd0 - 0x399690
void sub_00398DD0_0x398dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398DD0_0x398dd0");
#endif

    switch (ctx->pc) {
        case 0x398dd0u: goto label_398dd0;
        case 0x398dd4u: goto label_398dd4;
        case 0x398dd8u: goto label_398dd8;
        case 0x398ddcu: goto label_398ddc;
        case 0x398de0u: goto label_398de0;
        case 0x398de4u: goto label_398de4;
        case 0x398de8u: goto label_398de8;
        case 0x398decu: goto label_398dec;
        case 0x398df0u: goto label_398df0;
        case 0x398df4u: goto label_398df4;
        case 0x398df8u: goto label_398df8;
        case 0x398dfcu: goto label_398dfc;
        case 0x398e00u: goto label_398e00;
        case 0x398e04u: goto label_398e04;
        case 0x398e08u: goto label_398e08;
        case 0x398e0cu: goto label_398e0c;
        case 0x398e10u: goto label_398e10;
        case 0x398e14u: goto label_398e14;
        case 0x398e18u: goto label_398e18;
        case 0x398e1cu: goto label_398e1c;
        case 0x398e20u: goto label_398e20;
        case 0x398e24u: goto label_398e24;
        case 0x398e28u: goto label_398e28;
        case 0x398e2cu: goto label_398e2c;
        case 0x398e30u: goto label_398e30;
        case 0x398e34u: goto label_398e34;
        case 0x398e38u: goto label_398e38;
        case 0x398e3cu: goto label_398e3c;
        case 0x398e40u: goto label_398e40;
        case 0x398e44u: goto label_398e44;
        case 0x398e48u: goto label_398e48;
        case 0x398e4cu: goto label_398e4c;
        case 0x398e50u: goto label_398e50;
        case 0x398e54u: goto label_398e54;
        case 0x398e58u: goto label_398e58;
        case 0x398e5cu: goto label_398e5c;
        case 0x398e60u: goto label_398e60;
        case 0x398e64u: goto label_398e64;
        case 0x398e68u: goto label_398e68;
        case 0x398e6cu: goto label_398e6c;
        case 0x398e70u: goto label_398e70;
        case 0x398e74u: goto label_398e74;
        case 0x398e78u: goto label_398e78;
        case 0x398e7cu: goto label_398e7c;
        case 0x398e80u: goto label_398e80;
        case 0x398e84u: goto label_398e84;
        case 0x398e88u: goto label_398e88;
        case 0x398e8cu: goto label_398e8c;
        case 0x398e90u: goto label_398e90;
        case 0x398e94u: goto label_398e94;
        case 0x398e98u: goto label_398e98;
        case 0x398e9cu: goto label_398e9c;
        case 0x398ea0u: goto label_398ea0;
        case 0x398ea4u: goto label_398ea4;
        case 0x398ea8u: goto label_398ea8;
        case 0x398eacu: goto label_398eac;
        case 0x398eb0u: goto label_398eb0;
        case 0x398eb4u: goto label_398eb4;
        case 0x398eb8u: goto label_398eb8;
        case 0x398ebcu: goto label_398ebc;
        case 0x398ec0u: goto label_398ec0;
        case 0x398ec4u: goto label_398ec4;
        case 0x398ec8u: goto label_398ec8;
        case 0x398eccu: goto label_398ecc;
        case 0x398ed0u: goto label_398ed0;
        case 0x398ed4u: goto label_398ed4;
        case 0x398ed8u: goto label_398ed8;
        case 0x398edcu: goto label_398edc;
        case 0x398ee0u: goto label_398ee0;
        case 0x398ee4u: goto label_398ee4;
        case 0x398ee8u: goto label_398ee8;
        case 0x398eecu: goto label_398eec;
        case 0x398ef0u: goto label_398ef0;
        case 0x398ef4u: goto label_398ef4;
        case 0x398ef8u: goto label_398ef8;
        case 0x398efcu: goto label_398efc;
        case 0x398f00u: goto label_398f00;
        case 0x398f04u: goto label_398f04;
        case 0x398f08u: goto label_398f08;
        case 0x398f0cu: goto label_398f0c;
        case 0x398f10u: goto label_398f10;
        case 0x398f14u: goto label_398f14;
        case 0x398f18u: goto label_398f18;
        case 0x398f1cu: goto label_398f1c;
        case 0x398f20u: goto label_398f20;
        case 0x398f24u: goto label_398f24;
        case 0x398f28u: goto label_398f28;
        case 0x398f2cu: goto label_398f2c;
        case 0x398f30u: goto label_398f30;
        case 0x398f34u: goto label_398f34;
        case 0x398f38u: goto label_398f38;
        case 0x398f3cu: goto label_398f3c;
        case 0x398f40u: goto label_398f40;
        case 0x398f44u: goto label_398f44;
        case 0x398f48u: goto label_398f48;
        case 0x398f4cu: goto label_398f4c;
        case 0x398f50u: goto label_398f50;
        case 0x398f54u: goto label_398f54;
        case 0x398f58u: goto label_398f58;
        case 0x398f5cu: goto label_398f5c;
        case 0x398f60u: goto label_398f60;
        case 0x398f64u: goto label_398f64;
        case 0x398f68u: goto label_398f68;
        case 0x398f6cu: goto label_398f6c;
        case 0x398f70u: goto label_398f70;
        case 0x398f74u: goto label_398f74;
        case 0x398f78u: goto label_398f78;
        case 0x398f7cu: goto label_398f7c;
        case 0x398f80u: goto label_398f80;
        case 0x398f84u: goto label_398f84;
        case 0x398f88u: goto label_398f88;
        case 0x398f8cu: goto label_398f8c;
        case 0x398f90u: goto label_398f90;
        case 0x398f94u: goto label_398f94;
        case 0x398f98u: goto label_398f98;
        case 0x398f9cu: goto label_398f9c;
        case 0x398fa0u: goto label_398fa0;
        case 0x398fa4u: goto label_398fa4;
        case 0x398fa8u: goto label_398fa8;
        case 0x398facu: goto label_398fac;
        case 0x398fb0u: goto label_398fb0;
        case 0x398fb4u: goto label_398fb4;
        case 0x398fb8u: goto label_398fb8;
        case 0x398fbcu: goto label_398fbc;
        case 0x398fc0u: goto label_398fc0;
        case 0x398fc4u: goto label_398fc4;
        case 0x398fc8u: goto label_398fc8;
        case 0x398fccu: goto label_398fcc;
        case 0x398fd0u: goto label_398fd0;
        case 0x398fd4u: goto label_398fd4;
        case 0x398fd8u: goto label_398fd8;
        case 0x398fdcu: goto label_398fdc;
        case 0x398fe0u: goto label_398fe0;
        case 0x398fe4u: goto label_398fe4;
        case 0x398fe8u: goto label_398fe8;
        case 0x398fecu: goto label_398fec;
        case 0x398ff0u: goto label_398ff0;
        case 0x398ff4u: goto label_398ff4;
        case 0x398ff8u: goto label_398ff8;
        case 0x398ffcu: goto label_398ffc;
        case 0x399000u: goto label_399000;
        case 0x399004u: goto label_399004;
        case 0x399008u: goto label_399008;
        case 0x39900cu: goto label_39900c;
        case 0x399010u: goto label_399010;
        case 0x399014u: goto label_399014;
        case 0x399018u: goto label_399018;
        case 0x39901cu: goto label_39901c;
        case 0x399020u: goto label_399020;
        case 0x399024u: goto label_399024;
        case 0x399028u: goto label_399028;
        case 0x39902cu: goto label_39902c;
        case 0x399030u: goto label_399030;
        case 0x399034u: goto label_399034;
        case 0x399038u: goto label_399038;
        case 0x39903cu: goto label_39903c;
        case 0x399040u: goto label_399040;
        case 0x399044u: goto label_399044;
        case 0x399048u: goto label_399048;
        case 0x39904cu: goto label_39904c;
        case 0x399050u: goto label_399050;
        case 0x399054u: goto label_399054;
        case 0x399058u: goto label_399058;
        case 0x39905cu: goto label_39905c;
        case 0x399060u: goto label_399060;
        case 0x399064u: goto label_399064;
        case 0x399068u: goto label_399068;
        case 0x39906cu: goto label_39906c;
        case 0x399070u: goto label_399070;
        case 0x399074u: goto label_399074;
        case 0x399078u: goto label_399078;
        case 0x39907cu: goto label_39907c;
        case 0x399080u: goto label_399080;
        case 0x399084u: goto label_399084;
        case 0x399088u: goto label_399088;
        case 0x39908cu: goto label_39908c;
        case 0x399090u: goto label_399090;
        case 0x399094u: goto label_399094;
        case 0x399098u: goto label_399098;
        case 0x39909cu: goto label_39909c;
        case 0x3990a0u: goto label_3990a0;
        case 0x3990a4u: goto label_3990a4;
        case 0x3990a8u: goto label_3990a8;
        case 0x3990acu: goto label_3990ac;
        case 0x3990b0u: goto label_3990b0;
        case 0x3990b4u: goto label_3990b4;
        case 0x3990b8u: goto label_3990b8;
        case 0x3990bcu: goto label_3990bc;
        case 0x3990c0u: goto label_3990c0;
        case 0x3990c4u: goto label_3990c4;
        case 0x3990c8u: goto label_3990c8;
        case 0x3990ccu: goto label_3990cc;
        case 0x3990d0u: goto label_3990d0;
        case 0x3990d4u: goto label_3990d4;
        case 0x3990d8u: goto label_3990d8;
        case 0x3990dcu: goto label_3990dc;
        case 0x3990e0u: goto label_3990e0;
        case 0x3990e4u: goto label_3990e4;
        case 0x3990e8u: goto label_3990e8;
        case 0x3990ecu: goto label_3990ec;
        case 0x3990f0u: goto label_3990f0;
        case 0x3990f4u: goto label_3990f4;
        case 0x3990f8u: goto label_3990f8;
        case 0x3990fcu: goto label_3990fc;
        case 0x399100u: goto label_399100;
        case 0x399104u: goto label_399104;
        case 0x399108u: goto label_399108;
        case 0x39910cu: goto label_39910c;
        case 0x399110u: goto label_399110;
        case 0x399114u: goto label_399114;
        case 0x399118u: goto label_399118;
        case 0x39911cu: goto label_39911c;
        case 0x399120u: goto label_399120;
        case 0x399124u: goto label_399124;
        case 0x399128u: goto label_399128;
        case 0x39912cu: goto label_39912c;
        case 0x399130u: goto label_399130;
        case 0x399134u: goto label_399134;
        case 0x399138u: goto label_399138;
        case 0x39913cu: goto label_39913c;
        case 0x399140u: goto label_399140;
        case 0x399144u: goto label_399144;
        case 0x399148u: goto label_399148;
        case 0x39914cu: goto label_39914c;
        case 0x399150u: goto label_399150;
        case 0x399154u: goto label_399154;
        case 0x399158u: goto label_399158;
        case 0x39915cu: goto label_39915c;
        case 0x399160u: goto label_399160;
        case 0x399164u: goto label_399164;
        case 0x399168u: goto label_399168;
        case 0x39916cu: goto label_39916c;
        case 0x399170u: goto label_399170;
        case 0x399174u: goto label_399174;
        case 0x399178u: goto label_399178;
        case 0x39917cu: goto label_39917c;
        case 0x399180u: goto label_399180;
        case 0x399184u: goto label_399184;
        case 0x399188u: goto label_399188;
        case 0x39918cu: goto label_39918c;
        case 0x399190u: goto label_399190;
        case 0x399194u: goto label_399194;
        case 0x399198u: goto label_399198;
        case 0x39919cu: goto label_39919c;
        case 0x3991a0u: goto label_3991a0;
        case 0x3991a4u: goto label_3991a4;
        case 0x3991a8u: goto label_3991a8;
        case 0x3991acu: goto label_3991ac;
        case 0x3991b0u: goto label_3991b0;
        case 0x3991b4u: goto label_3991b4;
        case 0x3991b8u: goto label_3991b8;
        case 0x3991bcu: goto label_3991bc;
        case 0x3991c0u: goto label_3991c0;
        case 0x3991c4u: goto label_3991c4;
        case 0x3991c8u: goto label_3991c8;
        case 0x3991ccu: goto label_3991cc;
        case 0x3991d0u: goto label_3991d0;
        case 0x3991d4u: goto label_3991d4;
        case 0x3991d8u: goto label_3991d8;
        case 0x3991dcu: goto label_3991dc;
        case 0x3991e0u: goto label_3991e0;
        case 0x3991e4u: goto label_3991e4;
        case 0x3991e8u: goto label_3991e8;
        case 0x3991ecu: goto label_3991ec;
        case 0x3991f0u: goto label_3991f0;
        case 0x3991f4u: goto label_3991f4;
        case 0x3991f8u: goto label_3991f8;
        case 0x3991fcu: goto label_3991fc;
        case 0x399200u: goto label_399200;
        case 0x399204u: goto label_399204;
        case 0x399208u: goto label_399208;
        case 0x39920cu: goto label_39920c;
        case 0x399210u: goto label_399210;
        case 0x399214u: goto label_399214;
        case 0x399218u: goto label_399218;
        case 0x39921cu: goto label_39921c;
        case 0x399220u: goto label_399220;
        case 0x399224u: goto label_399224;
        case 0x399228u: goto label_399228;
        case 0x39922cu: goto label_39922c;
        case 0x399230u: goto label_399230;
        case 0x399234u: goto label_399234;
        case 0x399238u: goto label_399238;
        case 0x39923cu: goto label_39923c;
        case 0x399240u: goto label_399240;
        case 0x399244u: goto label_399244;
        case 0x399248u: goto label_399248;
        case 0x39924cu: goto label_39924c;
        case 0x399250u: goto label_399250;
        case 0x399254u: goto label_399254;
        case 0x399258u: goto label_399258;
        case 0x39925cu: goto label_39925c;
        case 0x399260u: goto label_399260;
        case 0x399264u: goto label_399264;
        case 0x399268u: goto label_399268;
        case 0x39926cu: goto label_39926c;
        case 0x399270u: goto label_399270;
        case 0x399274u: goto label_399274;
        case 0x399278u: goto label_399278;
        case 0x39927cu: goto label_39927c;
        case 0x399280u: goto label_399280;
        case 0x399284u: goto label_399284;
        case 0x399288u: goto label_399288;
        case 0x39928cu: goto label_39928c;
        case 0x399290u: goto label_399290;
        case 0x399294u: goto label_399294;
        case 0x399298u: goto label_399298;
        case 0x39929cu: goto label_39929c;
        case 0x3992a0u: goto label_3992a0;
        case 0x3992a4u: goto label_3992a4;
        case 0x3992a8u: goto label_3992a8;
        case 0x3992acu: goto label_3992ac;
        case 0x3992b0u: goto label_3992b0;
        case 0x3992b4u: goto label_3992b4;
        case 0x3992b8u: goto label_3992b8;
        case 0x3992bcu: goto label_3992bc;
        case 0x3992c0u: goto label_3992c0;
        case 0x3992c4u: goto label_3992c4;
        case 0x3992c8u: goto label_3992c8;
        case 0x3992ccu: goto label_3992cc;
        case 0x3992d0u: goto label_3992d0;
        case 0x3992d4u: goto label_3992d4;
        case 0x3992d8u: goto label_3992d8;
        case 0x3992dcu: goto label_3992dc;
        case 0x3992e0u: goto label_3992e0;
        case 0x3992e4u: goto label_3992e4;
        case 0x3992e8u: goto label_3992e8;
        case 0x3992ecu: goto label_3992ec;
        case 0x3992f0u: goto label_3992f0;
        case 0x3992f4u: goto label_3992f4;
        case 0x3992f8u: goto label_3992f8;
        case 0x3992fcu: goto label_3992fc;
        case 0x399300u: goto label_399300;
        case 0x399304u: goto label_399304;
        case 0x399308u: goto label_399308;
        case 0x39930cu: goto label_39930c;
        case 0x399310u: goto label_399310;
        case 0x399314u: goto label_399314;
        case 0x399318u: goto label_399318;
        case 0x39931cu: goto label_39931c;
        case 0x399320u: goto label_399320;
        case 0x399324u: goto label_399324;
        case 0x399328u: goto label_399328;
        case 0x39932cu: goto label_39932c;
        case 0x399330u: goto label_399330;
        case 0x399334u: goto label_399334;
        case 0x399338u: goto label_399338;
        case 0x39933cu: goto label_39933c;
        case 0x399340u: goto label_399340;
        case 0x399344u: goto label_399344;
        case 0x399348u: goto label_399348;
        case 0x39934cu: goto label_39934c;
        case 0x399350u: goto label_399350;
        case 0x399354u: goto label_399354;
        case 0x399358u: goto label_399358;
        case 0x39935cu: goto label_39935c;
        case 0x399360u: goto label_399360;
        case 0x399364u: goto label_399364;
        case 0x399368u: goto label_399368;
        case 0x39936cu: goto label_39936c;
        case 0x399370u: goto label_399370;
        case 0x399374u: goto label_399374;
        case 0x399378u: goto label_399378;
        case 0x39937cu: goto label_39937c;
        case 0x399380u: goto label_399380;
        case 0x399384u: goto label_399384;
        case 0x399388u: goto label_399388;
        case 0x39938cu: goto label_39938c;
        case 0x399390u: goto label_399390;
        case 0x399394u: goto label_399394;
        case 0x399398u: goto label_399398;
        case 0x39939cu: goto label_39939c;
        case 0x3993a0u: goto label_3993a0;
        case 0x3993a4u: goto label_3993a4;
        case 0x3993a8u: goto label_3993a8;
        case 0x3993acu: goto label_3993ac;
        case 0x3993b0u: goto label_3993b0;
        case 0x3993b4u: goto label_3993b4;
        case 0x3993b8u: goto label_3993b8;
        case 0x3993bcu: goto label_3993bc;
        case 0x3993c0u: goto label_3993c0;
        case 0x3993c4u: goto label_3993c4;
        case 0x3993c8u: goto label_3993c8;
        case 0x3993ccu: goto label_3993cc;
        case 0x3993d0u: goto label_3993d0;
        case 0x3993d4u: goto label_3993d4;
        case 0x3993d8u: goto label_3993d8;
        case 0x3993dcu: goto label_3993dc;
        case 0x3993e0u: goto label_3993e0;
        case 0x3993e4u: goto label_3993e4;
        case 0x3993e8u: goto label_3993e8;
        case 0x3993ecu: goto label_3993ec;
        case 0x3993f0u: goto label_3993f0;
        case 0x3993f4u: goto label_3993f4;
        case 0x3993f8u: goto label_3993f8;
        case 0x3993fcu: goto label_3993fc;
        case 0x399400u: goto label_399400;
        case 0x399404u: goto label_399404;
        case 0x399408u: goto label_399408;
        case 0x39940cu: goto label_39940c;
        case 0x399410u: goto label_399410;
        case 0x399414u: goto label_399414;
        case 0x399418u: goto label_399418;
        case 0x39941cu: goto label_39941c;
        case 0x399420u: goto label_399420;
        case 0x399424u: goto label_399424;
        case 0x399428u: goto label_399428;
        case 0x39942cu: goto label_39942c;
        case 0x399430u: goto label_399430;
        case 0x399434u: goto label_399434;
        case 0x399438u: goto label_399438;
        case 0x39943cu: goto label_39943c;
        case 0x399440u: goto label_399440;
        case 0x399444u: goto label_399444;
        case 0x399448u: goto label_399448;
        case 0x39944cu: goto label_39944c;
        case 0x399450u: goto label_399450;
        case 0x399454u: goto label_399454;
        case 0x399458u: goto label_399458;
        case 0x39945cu: goto label_39945c;
        case 0x399460u: goto label_399460;
        case 0x399464u: goto label_399464;
        case 0x399468u: goto label_399468;
        case 0x39946cu: goto label_39946c;
        case 0x399470u: goto label_399470;
        case 0x399474u: goto label_399474;
        case 0x399478u: goto label_399478;
        case 0x39947cu: goto label_39947c;
        case 0x399480u: goto label_399480;
        case 0x399484u: goto label_399484;
        case 0x399488u: goto label_399488;
        case 0x39948cu: goto label_39948c;
        case 0x399490u: goto label_399490;
        case 0x399494u: goto label_399494;
        case 0x399498u: goto label_399498;
        case 0x39949cu: goto label_39949c;
        case 0x3994a0u: goto label_3994a0;
        case 0x3994a4u: goto label_3994a4;
        case 0x3994a8u: goto label_3994a8;
        case 0x3994acu: goto label_3994ac;
        case 0x3994b0u: goto label_3994b0;
        case 0x3994b4u: goto label_3994b4;
        case 0x3994b8u: goto label_3994b8;
        case 0x3994bcu: goto label_3994bc;
        case 0x3994c0u: goto label_3994c0;
        case 0x3994c4u: goto label_3994c4;
        case 0x3994c8u: goto label_3994c8;
        case 0x3994ccu: goto label_3994cc;
        case 0x3994d0u: goto label_3994d0;
        case 0x3994d4u: goto label_3994d4;
        case 0x3994d8u: goto label_3994d8;
        case 0x3994dcu: goto label_3994dc;
        case 0x3994e0u: goto label_3994e0;
        case 0x3994e4u: goto label_3994e4;
        case 0x3994e8u: goto label_3994e8;
        case 0x3994ecu: goto label_3994ec;
        case 0x3994f0u: goto label_3994f0;
        case 0x3994f4u: goto label_3994f4;
        case 0x3994f8u: goto label_3994f8;
        case 0x3994fcu: goto label_3994fc;
        case 0x399500u: goto label_399500;
        case 0x399504u: goto label_399504;
        case 0x399508u: goto label_399508;
        case 0x39950cu: goto label_39950c;
        case 0x399510u: goto label_399510;
        case 0x399514u: goto label_399514;
        case 0x399518u: goto label_399518;
        case 0x39951cu: goto label_39951c;
        case 0x399520u: goto label_399520;
        case 0x399524u: goto label_399524;
        case 0x399528u: goto label_399528;
        case 0x39952cu: goto label_39952c;
        case 0x399530u: goto label_399530;
        case 0x399534u: goto label_399534;
        case 0x399538u: goto label_399538;
        case 0x39953cu: goto label_39953c;
        case 0x399540u: goto label_399540;
        case 0x399544u: goto label_399544;
        case 0x399548u: goto label_399548;
        case 0x39954cu: goto label_39954c;
        case 0x399550u: goto label_399550;
        case 0x399554u: goto label_399554;
        case 0x399558u: goto label_399558;
        case 0x39955cu: goto label_39955c;
        case 0x399560u: goto label_399560;
        case 0x399564u: goto label_399564;
        case 0x399568u: goto label_399568;
        case 0x39956cu: goto label_39956c;
        case 0x399570u: goto label_399570;
        case 0x399574u: goto label_399574;
        case 0x399578u: goto label_399578;
        case 0x39957cu: goto label_39957c;
        case 0x399580u: goto label_399580;
        case 0x399584u: goto label_399584;
        case 0x399588u: goto label_399588;
        case 0x39958cu: goto label_39958c;
        case 0x399590u: goto label_399590;
        case 0x399594u: goto label_399594;
        case 0x399598u: goto label_399598;
        case 0x39959cu: goto label_39959c;
        case 0x3995a0u: goto label_3995a0;
        case 0x3995a4u: goto label_3995a4;
        case 0x3995a8u: goto label_3995a8;
        case 0x3995acu: goto label_3995ac;
        case 0x3995b0u: goto label_3995b0;
        case 0x3995b4u: goto label_3995b4;
        case 0x3995b8u: goto label_3995b8;
        case 0x3995bcu: goto label_3995bc;
        case 0x3995c0u: goto label_3995c0;
        case 0x3995c4u: goto label_3995c4;
        case 0x3995c8u: goto label_3995c8;
        case 0x3995ccu: goto label_3995cc;
        case 0x3995d0u: goto label_3995d0;
        case 0x3995d4u: goto label_3995d4;
        case 0x3995d8u: goto label_3995d8;
        case 0x3995dcu: goto label_3995dc;
        case 0x3995e0u: goto label_3995e0;
        case 0x3995e4u: goto label_3995e4;
        case 0x3995e8u: goto label_3995e8;
        case 0x3995ecu: goto label_3995ec;
        case 0x3995f0u: goto label_3995f0;
        case 0x3995f4u: goto label_3995f4;
        case 0x3995f8u: goto label_3995f8;
        case 0x3995fcu: goto label_3995fc;
        case 0x399600u: goto label_399600;
        case 0x399604u: goto label_399604;
        case 0x399608u: goto label_399608;
        case 0x39960cu: goto label_39960c;
        case 0x399610u: goto label_399610;
        case 0x399614u: goto label_399614;
        case 0x399618u: goto label_399618;
        case 0x39961cu: goto label_39961c;
        case 0x399620u: goto label_399620;
        case 0x399624u: goto label_399624;
        case 0x399628u: goto label_399628;
        case 0x39962cu: goto label_39962c;
        case 0x399630u: goto label_399630;
        case 0x399634u: goto label_399634;
        case 0x399638u: goto label_399638;
        case 0x39963cu: goto label_39963c;
        case 0x399640u: goto label_399640;
        case 0x399644u: goto label_399644;
        case 0x399648u: goto label_399648;
        case 0x39964cu: goto label_39964c;
        case 0x399650u: goto label_399650;
        case 0x399654u: goto label_399654;
        case 0x399658u: goto label_399658;
        case 0x39965cu: goto label_39965c;
        case 0x399660u: goto label_399660;
        case 0x399664u: goto label_399664;
        case 0x399668u: goto label_399668;
        case 0x39966cu: goto label_39966c;
        case 0x399670u: goto label_399670;
        case 0x399674u: goto label_399674;
        case 0x399678u: goto label_399678;
        case 0x39967cu: goto label_39967c;
        case 0x399680u: goto label_399680;
        case 0x399684u: goto label_399684;
        case 0x399688u: goto label_399688;
        case 0x39968cu: goto label_39968c;
        default: break;
    }

    ctx->pc = 0x398dd0u;

label_398dd0:
    // 0x398dd0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x398dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_398dd4:
    // 0x398dd4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x398dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_398dd8:
    // 0x398dd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x398dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_398ddc:
    // 0x398ddc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x398ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_398de0:
    // 0x398de0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x398de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_398de4:
    // 0x398de4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x398de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_398de8:
    // 0x398de8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x398de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_398dec:
    // 0x398dec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x398decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_398df0:
    // 0x398df0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x398df0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_398df4:
    // 0x398df4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x398df4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_398df8:
    // 0x398df8: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x398df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_398dfc:
    // 0x398dfc: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x398dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_398e00:
    // 0x398e00: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x398e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
label_398e04:
    // 0x398e04: 0xc4b50018  lwc1        $f21, 0x18($a1)
    ctx->pc = 0x398e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_398e08:
    // 0x398e08: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x398e08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_398e0c:
    // 0x398e0c: 0x10200214  beqz        $at, . + 4 + (0x214 << 2)
label_398e10:
    if (ctx->pc == 0x398E10u) {
        ctx->pc = 0x398E10u;
            // 0x398e10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398E14u;
        goto label_398e14;
    }
    ctx->pc = 0x398E0Cu;
    {
        const bool branch_taken_0x398e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x398E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398E0Cu;
            // 0x398e10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e0c) {
            ctx->pc = 0x399660u;
            goto label_399660;
        }
    }
    ctx->pc = 0x398E14u;
label_398e14:
    // 0x398e14: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x398e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_398e18:
    // 0x398e18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x398e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_398e1c:
    // 0x398e1c: 0x24846ed0  addiu       $a0, $a0, 0x6ED0
    ctx->pc = 0x398e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28368));
label_398e20:
    // 0x398e20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x398e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_398e24:
    // 0x398e24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x398e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_398e28:
    // 0x398e28: 0x600008  jr          $v1
label_398e2c:
    if (ctx->pc == 0x398E2Cu) {
        ctx->pc = 0x398E30u;
        goto label_398e30;
    }
    ctx->pc = 0x398E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x398E30u: goto label_398e30;
            case 0x398ED8u: goto label_398ed8;
            case 0x399300u: goto label_399300;
            case 0x399400u: goto label_399400;
            case 0x39949Cu: goto label_39949c;
            case 0x399614u: goto label_399614;
            case 0x399660u: goto label_399660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x398E30u;
label_398e30:
    // 0x398e30: 0xc62101cc  lwc1        $f1, 0x1CC($s1)
    ctx->pc = 0x398e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_398e34:
    // 0x398e34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x398e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_398e38:
    // 0x398e38: 0x0  nop
    ctx->pc = 0x398e38u;
    // NOP
label_398e3c:
    // 0x398e3c: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x398e3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_398e40:
    // 0x398e40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x398e40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_398e44:
    // 0x398e44: 0x45000206  bc1f        . + 4 + (0x206 << 2)
label_398e48:
    if (ctx->pc == 0x398E48u) {
        ctx->pc = 0x398E48u;
            // 0x398e48: 0xe62101cc  swc1        $f1, 0x1CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
        ctx->pc = 0x398E4Cu;
        goto label_398e4c;
    }
    ctx->pc = 0x398E44u;
    {
        const bool branch_taken_0x398e44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x398E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398E44u;
            // 0x398e48: 0xe62101cc  swc1        $f1, 0x1CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e44) {
            ctx->pc = 0x399660u;
            goto label_399660;
        }
    }
    ctx->pc = 0x398E4Cu;
label_398e4c:
    // 0x398e4c: 0xe62001d0  swc1        $f0, 0x1D0($s1)
    ctx->pc = 0x398e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 464), bits); }
label_398e50:
    // 0x398e50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x398e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_398e54:
    // 0x398e54: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x398e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
label_398e58:
    // 0x398e58: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x398e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_398e5c:
    // 0x398e5c: 0x8e060d9c  lw          $a2, 0xD9C($s0)
    ctx->pc = 0x398e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_398e60:
    // 0x398e60: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x398e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_398e64:
    // 0x398e64: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x398e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_398e68:
    // 0x398e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x398e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398e6c:
    // 0x398e6c: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x398e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_398e70:
    // 0x398e70: 0xae020d9c  sw          $v0, 0xD9C($s0)
    ctx->pc = 0x398e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
label_398e74:
    // 0x398e74: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x398e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_398e78:
    // 0x398e78: 0xa044001c  sb          $a0, 0x1C($v0)
    ctx->pc = 0x398e78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 4));
label_398e7c:
    // 0x398e7c: 0x8e100d74  lw          $s0, 0xD74($s0)
    ctx->pc = 0x398e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_398e80:
    // 0x398e80: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x398e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_398e84:
    // 0x398e84: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x398e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_398e88:
    // 0x398e88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x398e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_398e8c:
    // 0x398e8c: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x398e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_398e90:
    // 0x398e90: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x398e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_398e94:
    // 0x398e94: 0xc0a545c  jal         func_295170
label_398e98:
    if (ctx->pc == 0x398E98u) {
        ctx->pc = 0x398E98u;
            // 0x398e98: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x398E9Cu;
        goto label_398e9c;
    }
    ctx->pc = 0x398E94u;
    SET_GPR_U32(ctx, 31, 0x398E9Cu);
    ctx->pc = 0x398E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398E94u;
            // 0x398e98: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398E9Cu; }
        if (ctx->pc != 0x398E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398E9Cu; }
        if (ctx->pc != 0x398E9Cu) { return; }
    }
    ctx->pc = 0x398E9Cu;
label_398e9c:
    // 0x398e9c: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x398e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_398ea0:
    // 0x398ea0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x398ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_398ea4:
    // 0x398ea4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x398ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_398ea8:
    // 0x398ea8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x398ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_398eac:
    // 0x398eac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x398eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_398eb0:
    // 0x398eb0: 0xc08bf20  jal         func_22FC80
label_398eb4:
    if (ctx->pc == 0x398EB4u) {
        ctx->pc = 0x398EB4u;
            // 0x398eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398EB8u;
        goto label_398eb8;
    }
    ctx->pc = 0x398EB0u;
    SET_GPR_U32(ctx, 31, 0x398EB8u);
    ctx->pc = 0x398EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398EB0u;
            // 0x398eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398EB8u; }
        if (ctx->pc != 0x398EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398EB8u; }
        if (ctx->pc != 0x398EB8u) { return; }
    }
    ctx->pc = 0x398EB8u;
label_398eb8:
    // 0x398eb8: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x398eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_398ebc:
    // 0x398ebc: 0xc04cc04  jal         func_133010
label_398ec0:
    if (ctx->pc == 0x398EC0u) {
        ctx->pc = 0x398EC0u;
            // 0x398ec0: 0x26250120  addiu       $a1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->pc = 0x398EC4u;
        goto label_398ec4;
    }
    ctx->pc = 0x398EBCu;
    SET_GPR_U32(ctx, 31, 0x398EC4u);
    ctx->pc = 0x398EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398EBCu;
            // 0x398ec0: 0x26250120  addiu       $a1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398EC4u; }
        if (ctx->pc != 0x398EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398EC4u; }
        if (ctx->pc != 0x398EC4u) { return; }
    }
    ctx->pc = 0x398EC4u;
label_398ec4:
    // 0x398ec4: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x398ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_398ec8:
    // 0x398ec8: 0xc04c720  jal         func_131C80
label_398ecc:
    if (ctx->pc == 0x398ECCu) {
        ctx->pc = 0x398ECCu;
            // 0x398ecc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x398ED0u;
        goto label_398ed0;
    }
    ctx->pc = 0x398EC8u;
    SET_GPR_U32(ctx, 31, 0x398ED0u);
    ctx->pc = 0x398ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398EC8u;
            // 0x398ecc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398ED0u; }
        if (ctx->pc != 0x398ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398ED0u; }
        if (ctx->pc != 0x398ED0u) { return; }
    }
    ctx->pc = 0x398ED0u;
label_398ed0:
    // 0x398ed0: 0x100001e4  b           . + 4 + (0x1E4 << 2)
label_398ed4:
    if (ctx->pc == 0x398ED4u) {
        ctx->pc = 0x398ED4u;
            // 0x398ed4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x398ED8u;
        goto label_398ed8;
    }
    ctx->pc = 0x398ED0u;
    {
        const bool branch_taken_0x398ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398ED0u;
            // 0x398ed4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ed0) {
            ctx->pc = 0x399664u;
            goto label_399664;
        }
    }
    ctx->pc = 0x398ED8u;
label_398ed8:
    // 0x398ed8: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x398ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_398edc:
    // 0x398edc: 0xc6340134  lwc1        $f20, 0x134($s1)
    ctx->pc = 0x398edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_398ee0:
    // 0x398ee0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x398ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_398ee4:
    // 0x398ee4: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x398ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_398ee8:
    // 0x398ee8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x398ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_398eec:
    // 0x398eec: 0xc04cc04  jal         func_133010
label_398ef0:
    if (ctx->pc == 0x398EF0u) {
        ctx->pc = 0x398EF0u;
            // 0x398ef0: 0x26330030  addiu       $s3, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x398EF4u;
        goto label_398ef4;
    }
    ctx->pc = 0x398EECu;
    SET_GPR_U32(ctx, 31, 0x398EF4u);
    ctx->pc = 0x398EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398EECu;
            // 0x398ef0: 0x26330030  addiu       $s3, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398EF4u; }
        if (ctx->pc != 0x398EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398EF4u; }
        if (ctx->pc != 0x398EF4u) { return; }
    }
    ctx->pc = 0x398EF4u;
label_398ef4:
    // 0x398ef4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x398ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_398ef8:
    // 0x398ef8: 0xc04c720  jal         func_131C80
label_398efc:
    if (ctx->pc == 0x398EFCu) {
        ctx->pc = 0x398EFCu;
            // 0x398efc: 0x262501f0  addiu       $a1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->pc = 0x398F00u;
        goto label_398f00;
    }
    ctx->pc = 0x398EF8u;
    SET_GPR_U32(ctx, 31, 0x398F00u);
    ctx->pc = 0x398EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398EF8u;
            // 0x398efc: 0x262501f0  addiu       $a1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F00u; }
        if (ctx->pc != 0x398F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F00u; }
        if (ctx->pc != 0x398F00u) { return; }
    }
    ctx->pc = 0x398F00u;
label_398f00:
    // 0x398f00: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x398f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_398f04:
    // 0x398f04: 0xc04cc04  jal         func_133010
label_398f08:
    if (ctx->pc == 0x398F08u) {
        ctx->pc = 0x398F08u;
            // 0x398f08: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->pc = 0x398F0Cu;
        goto label_398f0c;
    }
    ctx->pc = 0x398F04u;
    SET_GPR_U32(ctx, 31, 0x398F0Cu);
    ctx->pc = 0x398F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398F04u;
            // 0x398f08: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F0Cu; }
        if (ctx->pc != 0x398F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F0Cu; }
        if (ctx->pc != 0x398F0Cu) { return; }
    }
    ctx->pc = 0x398F0Cu;
label_398f0c:
    // 0x398f0c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x398f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_398f10:
    // 0x398f10: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x398f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_398f14:
    // 0x398f14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x398f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_398f18:
    // 0x398f18: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x398f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_398f1c:
    // 0x398f1c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x398f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_398f20:
    // 0x398f20: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x398f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_398f24:
    // 0x398f24: 0xc089688  jal         func_225A20
label_398f28:
    if (ctx->pc == 0x398F28u) {
        ctx->pc = 0x398F28u;
            // 0x398f28: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x398F2Cu;
        goto label_398f2c;
    }
    ctx->pc = 0x398F24u;
    SET_GPR_U32(ctx, 31, 0x398F2Cu);
    ctx->pc = 0x398F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398F24u;
            // 0x398f28: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F2Cu; }
        if (ctx->pc != 0x398F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F2Cu; }
        if (ctx->pc != 0x398F2Cu) { return; }
    }
    ctx->pc = 0x398F2Cu;
label_398f2c:
    // 0x398f2c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x398f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_398f30:
    // 0x398f30: 0xc0a3828  jal         func_28E0A0
label_398f34:
    if (ctx->pc == 0x398F34u) {
        ctx->pc = 0x398F34u;
            // 0x398f34: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x398F38u;
        goto label_398f38;
    }
    ctx->pc = 0x398F30u;
    SET_GPR_U32(ctx, 31, 0x398F38u);
    ctx->pc = 0x398F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398F30u;
            // 0x398f34: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F38u; }
        if (ctx->pc != 0x398F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F38u; }
        if (ctx->pc != 0x398F38u) { return; }
    }
    ctx->pc = 0x398F38u;
label_398f38:
    // 0x398f38: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x398f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_398f3c:
    // 0x398f3c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x398f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_398f40:
    // 0x398f40: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x398f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_398f44:
    // 0x398f44: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x398f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_398f48:
    // 0x398f48: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x398f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_398f4c:
    // 0x398f4c: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x398f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_398f50:
    // 0x398f50: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x398f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_398f54:
    // 0x398f54: 0xe7a202d0  swc1        $f2, 0x2D0($sp)
    ctx->pc = 0x398f54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_398f58:
    // 0x398f58: 0xe7a102d4  swc1        $f1, 0x2D4($sp)
    ctx->pc = 0x398f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_398f5c:
    // 0x398f5c: 0xc04cc04  jal         func_133010
label_398f60:
    if (ctx->pc == 0x398F60u) {
        ctx->pc = 0x398F60u;
            // 0x398f60: 0xe7a002dc  swc1        $f0, 0x2DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
        ctx->pc = 0x398F64u;
        goto label_398f64;
    }
    ctx->pc = 0x398F5Cu;
    SET_GPR_U32(ctx, 31, 0x398F64u);
    ctx->pc = 0x398F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398F5Cu;
            // 0x398f60: 0xe7a002dc  swc1        $f0, 0x2DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F64u; }
        if (ctx->pc != 0x398F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F64u; }
        if (ctx->pc != 0x398F64u) { return; }
    }
    ctx->pc = 0x398F64u;
label_398f64:
    // 0x398f64: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x398f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_398f68:
    // 0x398f68: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x398f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_398f6c:
    // 0x398f6c: 0xc04cc44  jal         func_133110
label_398f70:
    if (ctx->pc == 0x398F70u) {
        ctx->pc = 0x398F70u;
            // 0x398f70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398F74u;
        goto label_398f74;
    }
    ctx->pc = 0x398F6Cu;
    SET_GPR_U32(ctx, 31, 0x398F74u);
    ctx->pc = 0x398F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398F6Cu;
            // 0x398f70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F74u; }
        if (ctx->pc != 0x398F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F74u; }
        if (ctx->pc != 0x398F74u) { return; }
    }
    ctx->pc = 0x398F74u;
label_398f74:
    // 0x398f74: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x398f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_398f78:
    // 0x398f78: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x398f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_398f7c:
    // 0x398f7c: 0xc7ac0154  lwc1        $f12, 0x154($sp)
    ctx->pc = 0x398f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_398f80:
    // 0x398f80: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x398f80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_398f84:
    // 0x398f84: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x398f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_398f88:
    // 0x398f88: 0x46000344  c1          0x344
    ctx->pc = 0x398f88u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_398f8c:
    // 0x398f8c: 0x0  nop
    ctx->pc = 0x398f8cu;
    // NOP
label_398f90:
    // 0x398f90: 0x0  nop
    ctx->pc = 0x398f90u;
    // NOP
label_398f94:
    // 0x398f94: 0xc04780a  jal         func_11E028
label_398f98:
    if (ctx->pc == 0x398F98u) {
        ctx->pc = 0x398F9Cu;
        goto label_398f9c;
    }
    ctx->pc = 0x398F94u;
    SET_GPR_U32(ctx, 31, 0x398F9Cu);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F9Cu; }
        if (ctx->pc != 0x398F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398F9Cu; }
        if (ctx->pc != 0x398F9Cu) { return; }
    }
    ctx->pc = 0x398F9Cu;
label_398f9c:
    // 0x398f9c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x398f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_398fa0:
    // 0x398fa0: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x398fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_398fa4:
    // 0x398fa4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x398fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_398fa8:
    // 0x398fa8: 0x0  nop
    ctx->pc = 0x398fa8u;
    // NOP
label_398fac:
    // 0x398fac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x398facu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_398fb0:
    // 0x398fb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x398fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_398fb4:
    // 0x398fb4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x398fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_398fb8:
    // 0x398fb8: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x398fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_398fbc:
    // 0x398fbc: 0xc7ad0158  lwc1        $f13, 0x158($sp)
    ctx->pc = 0x398fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_398fc0:
    // 0x398fc0: 0xc04780a  jal         func_11E028
label_398fc4:
    if (ctx->pc == 0x398FC4u) {
        ctx->pc = 0x398FC4u;
            // 0x398fc4: 0x2a023  negu        $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x398FC8u;
        goto label_398fc8;
    }
    ctx->pc = 0x398FC0u;
    SET_GPR_U32(ctx, 31, 0x398FC8u);
    ctx->pc = 0x398FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398FC0u;
            // 0x398fc4: 0x2a023  negu        $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398FC8u; }
        if (ctx->pc != 0x398FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398FC8u; }
        if (ctx->pc != 0x398FC8u) { return; }
    }
    ctx->pc = 0x398FC8u;
label_398fc8:
    // 0x398fc8: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x398fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_398fcc:
    // 0x398fcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x398fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_398fd0:
    // 0x398fd0: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x398fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_398fd4:
    // 0x398fd4: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x398fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_398fd8:
    // 0x398fd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x398fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_398fdc:
    // 0x398fdc: 0x0  nop
    ctx->pc = 0x398fdcu;
    // NOP
label_398fe0:
    // 0x398fe0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x398fe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_398fe4:
    // 0x398fe4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x398fe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_398fe8:
    // 0x398fe8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x398fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_398fec:
    // 0x398fec: 0xc04ca18  jal         func_132860
label_398ff0:
    if (ctx->pc == 0x398FF0u) {
        ctx->pc = 0x398FF0u;
            // 0x398ff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398FF4u;
        goto label_398ff4;
    }
    ctx->pc = 0x398FECu;
    SET_GPR_U32(ctx, 31, 0x398FF4u);
    ctx->pc = 0x398FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398FECu;
            // 0x398ff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398FF4u; }
        if (ctx->pc != 0x398FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398FF4u; }
        if (ctx->pc != 0x398FF4u) { return; }
    }
    ctx->pc = 0x398FF4u;
label_398ff4:
    // 0x398ff4: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x398ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_398ff8:
    // 0x398ff8: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x398ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_398ffc:
    // 0x398ffc: 0xc04c72c  jal         func_131CB0
label_399000:
    if (ctx->pc == 0x399000u) {
        ctx->pc = 0x399000u;
            // 0x399000: 0x27a602d0  addiu       $a2, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x399004u;
        goto label_399004;
    }
    ctx->pc = 0x398FFCu;
    SET_GPR_U32(ctx, 31, 0x399004u);
    ctx->pc = 0x399000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398FFCu;
            // 0x399000: 0x27a602d0  addiu       $a2, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399004u; }
        if (ctx->pc != 0x399004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399004u; }
        if (ctx->pc != 0x399004u) { return; }
    }
    ctx->pc = 0x399004u;
label_399004:
    // 0x399004: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x399004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_399008:
    // 0x399008: 0xc04f278  jal         func_13C9E0
label_39900c:
    if (ctx->pc == 0x39900Cu) {
        ctx->pc = 0x39900Cu;
            // 0x39900c: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x399010u;
        goto label_399010;
    }
    ctx->pc = 0x399008u;
    SET_GPR_U32(ctx, 31, 0x399010u);
    ctx->pc = 0x39900Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399008u;
            // 0x39900c: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399010u; }
        if (ctx->pc != 0x399010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399010u; }
        if (ctx->pc != 0x399010u) { return; }
    }
    ctx->pc = 0x399010u;
label_399010:
    // 0x399010: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x399010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_399014:
    // 0x399014: 0xc04ce80  jal         func_133A00
label_399018:
    if (ctx->pc == 0x399018u) {
        ctx->pc = 0x399018u;
            // 0x399018: 0x262501e0  addiu       $a1, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->pc = 0x39901Cu;
        goto label_39901c;
    }
    ctx->pc = 0x399014u;
    SET_GPR_U32(ctx, 31, 0x39901Cu);
    ctx->pc = 0x399018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399014u;
            // 0x399018: 0x262501e0  addiu       $a1, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39901Cu; }
        if (ctx->pc != 0x39901Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39901Cu; }
        if (ctx->pc != 0x39901Cu) { return; }
    }
    ctx->pc = 0x39901Cu;
label_39901c:
    // 0x39901c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_399020:
    // 0x399020: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x399020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_399024:
    // 0x399024: 0xc0d87e0  jal         func_361F80
label_399028:
    if (ctx->pc == 0x399028u) {
        ctx->pc = 0x399028u;
            // 0x399028: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39902Cu;
        goto label_39902c;
    }
    ctx->pc = 0x399024u;
    SET_GPR_U32(ctx, 31, 0x39902Cu);
    ctx->pc = 0x399028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399024u;
            // 0x399028: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39902Cu; }
        if (ctx->pc != 0x39902Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39902Cu; }
        if (ctx->pc != 0x39902Cu) { return; }
    }
    ctx->pc = 0x39902Cu;
label_39902c:
    // 0x39902c: 0x520000af  beql        $s0, $zero, . + 4 + (0xAF << 2)
label_399030:
    if (ctx->pc == 0x399030u) {
        ctx->pc = 0x399030u;
            // 0x399030: 0x96640110  lhu         $a0, 0x110($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
        ctx->pc = 0x399034u;
        goto label_399034;
    }
    ctx->pc = 0x39902Cu;
    {
        const bool branch_taken_0x39902c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39902c) {
            ctx->pc = 0x399030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39902Cu;
            // 0x399030: 0x96640110  lhu         $a0, 0x110($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3992ECu;
            goto label_3992ec;
        }
    }
    ctx->pc = 0x399034u;
label_399034:
    // 0x399034: 0xc6600120  lwc1        $f0, 0x120($s3)
    ctx->pc = 0x399034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_399038:
    // 0x399038: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x399038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39903c:
    // 0x39903c: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x39903cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
label_399040:
    // 0x399040: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x399040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_399044:
    // 0x399044: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x399044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_399048:
    // 0x399048: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x399048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_39904c:
    // 0x39904c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x39904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_399050:
    // 0x399050: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x399050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_399054:
    // 0x399054: 0xc089688  jal         func_225A20
label_399058:
    if (ctx->pc == 0x399058u) {
        ctx->pc = 0x399058u;
            // 0x399058: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x39905Cu;
        goto label_39905c;
    }
    ctx->pc = 0x399054u;
    SET_GPR_U32(ctx, 31, 0x39905Cu);
    ctx->pc = 0x399058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399054u;
            // 0x399058: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39905Cu; }
        if (ctx->pc != 0x39905Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39905Cu; }
        if (ctx->pc != 0x39905Cu) { return; }
    }
    ctx->pc = 0x39905Cu;
label_39905c:
    // 0x39905c: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x39905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_399060:
    // 0x399060: 0xc7ad00f4  lwc1        $f13, 0xF4($sp)
    ctx->pc = 0x399060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_399064:
    // 0x399064: 0xc7ae00f8  lwc1        $f14, 0xF8($sp)
    ctx->pc = 0x399064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_399068:
    // 0x399068: 0xc04cbd8  jal         func_132F60
label_39906c:
    if (ctx->pc == 0x39906Cu) {
        ctx->pc = 0x39906Cu;
            // 0x39906c: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x399070u;
        goto label_399070;
    }
    ctx->pc = 0x399068u;
    SET_GPR_U32(ctx, 31, 0x399070u);
    ctx->pc = 0x39906Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399068u;
            // 0x39906c: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399070u; }
        if (ctx->pc != 0x399070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399070u; }
        if (ctx->pc != 0x399070u) { return; }
    }
    ctx->pc = 0x399070u;
label_399070:
    // 0x399070: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x399070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_399074:
    // 0x399074: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x399074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_399078:
    // 0x399078: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x399078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39907c:
    // 0x39907c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x39907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_399080:
    // 0x399080: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x399080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_399084:
    // 0x399084: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x399084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_399088:
    // 0x399088: 0xc089688  jal         func_225A20
label_39908c:
    if (ctx->pc == 0x39908Cu) {
        ctx->pc = 0x39908Cu;
            // 0x39908c: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x399090u;
        goto label_399090;
    }
    ctx->pc = 0x399088u;
    SET_GPR_U32(ctx, 31, 0x399090u);
    ctx->pc = 0x39908Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399088u;
            // 0x39908c: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399090u; }
        if (ctx->pc != 0x399090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399090u; }
        if (ctx->pc != 0x399090u) { return; }
    }
    ctx->pc = 0x399090u;
label_399090:
    // 0x399090: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x399090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_399094:
    // 0x399094: 0xc0a3828  jal         func_28E0A0
label_399098:
    if (ctx->pc == 0x399098u) {
        ctx->pc = 0x399098u;
            // 0x399098: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x39909Cu;
        goto label_39909c;
    }
    ctx->pc = 0x399094u;
    SET_GPR_U32(ctx, 31, 0x39909Cu);
    ctx->pc = 0x399098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399094u;
            // 0x399098: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39909Cu; }
        if (ctx->pc != 0x39909Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39909Cu; }
        if (ctx->pc != 0x39909Cu) { return; }
    }
    ctx->pc = 0x39909Cu;
label_39909c:
    // 0x39909c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x39909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3990a0:
    // 0x3990a0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x3990a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_3990a4:
    // 0x3990a4: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x3990a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3990a8:
    // 0x3990a8: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x3990a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_3990ac:
    // 0x3990ac: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x3990acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3990b0:
    // 0x3990b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3990b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3990b4:
    // 0x3990b4: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x3990b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_3990b8:
    // 0x3990b8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x3990b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3990bc:
    // 0x3990bc: 0xe7a20270  swc1        $f2, 0x270($sp)
    ctx->pc = 0x3990bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_3990c0:
    // 0x3990c0: 0xe7a10274  swc1        $f1, 0x274($sp)
    ctx->pc = 0x3990c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_3990c4:
    // 0x3990c4: 0xc04cca0  jal         func_133280
label_3990c8:
    if (ctx->pc == 0x3990C8u) {
        ctx->pc = 0x3990C8u;
            // 0x3990c8: 0xe7a0027c  swc1        $f0, 0x27C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
        ctx->pc = 0x3990CCu;
        goto label_3990cc;
    }
    ctx->pc = 0x3990C4u;
    SET_GPR_U32(ctx, 31, 0x3990CCu);
    ctx->pc = 0x3990C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3990C4u;
            // 0x3990c8: 0xe7a0027c  swc1        $f0, 0x27C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3990CCu; }
        if (ctx->pc != 0x3990CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3990CCu; }
        if (ctx->pc != 0x3990CCu) { return; }
    }
    ctx->pc = 0x3990CCu;
label_3990cc:
    // 0x3990cc: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x3990ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_3990d0:
    // 0x3990d0: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x3990d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_3990d4:
    // 0x3990d4: 0xc04c72c  jal         func_131CB0
label_3990d8:
    if (ctx->pc == 0x3990D8u) {
        ctx->pc = 0x3990D8u;
            // 0x3990d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3990DCu;
        goto label_3990dc;
    }
    ctx->pc = 0x3990D4u;
    SET_GPR_U32(ctx, 31, 0x3990DCu);
    ctx->pc = 0x3990D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3990D4u;
            // 0x3990d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3990DCu; }
        if (ctx->pc != 0x3990DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3990DCu; }
        if (ctx->pc != 0x3990DCu) { return; }
    }
    ctx->pc = 0x3990DCu;
label_3990dc:
    // 0x3990dc: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x3990dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_3990e0:
    // 0x3990e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3990e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3990e4:
    // 0x3990e4: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x3990e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_3990e8:
    // 0x3990e8: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x3990e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_3990ec:
    // 0x3990ec: 0xc122c1c  jal         func_48B070
label_3990f0:
    if (ctx->pc == 0x3990F0u) {
        ctx->pc = 0x3990F0u;
            // 0x3990f0: 0x24e76dd0  addiu       $a3, $a3, 0x6DD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28112));
        ctx->pc = 0x3990F4u;
        goto label_3990f4;
    }
    ctx->pc = 0x3990ECu;
    SET_GPR_U32(ctx, 31, 0x3990F4u);
    ctx->pc = 0x3990F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3990ECu;
            // 0x3990f0: 0x24e76dd0  addiu       $a3, $a3, 0x6DD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B070u;
    if (runtime->hasFunction(0x48B070u)) {
        auto targetFn = runtime->lookupFunction(0x48B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3990F4u; }
        if (ctx->pc != 0x3990F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B070_0x48b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3990F4u; }
        if (ctx->pc != 0x3990F4u) { return; }
    }
    ctx->pc = 0x3990F4u;
label_3990f4:
    // 0x3990f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3990f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3990f8:
    // 0x3990f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3990f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3990fc:
    // 0x3990fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3990fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_399100:
    // 0x399100: 0xc122be4  jal         func_48AF90
label_399104:
    if (ctx->pc == 0x399104u) {
        ctx->pc = 0x399104u;
            // 0x399104: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x399108u;
        goto label_399108;
    }
    ctx->pc = 0x399100u;
    SET_GPR_U32(ctx, 31, 0x399108u);
    ctx->pc = 0x399104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399100u;
            // 0x399104: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AF90u;
    if (runtime->hasFunction(0x48AF90u)) {
        auto targetFn = runtime->lookupFunction(0x48AF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399108u; }
        if (ctx->pc != 0x399108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AF90_0x48af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399108u; }
        if (ctx->pc != 0x399108u) { return; }
    }
    ctx->pc = 0x399108u;
label_399108:
    // 0x399108: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x399108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_39910c:
    // 0x39910c: 0x80450004  lb          $a1, 0x4($v0)
    ctx->pc = 0x39910cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_399110:
    // 0x399110: 0xc0fbac4  jal         func_3EEB10
label_399114:
    if (ctx->pc == 0x399114u) {
        ctx->pc = 0x399114u;
            // 0x399114: 0x8e2401d4  lw          $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->pc = 0x399118u;
        goto label_399118;
    }
    ctx->pc = 0x399110u;
    SET_GPR_U32(ctx, 31, 0x399118u);
    ctx->pc = 0x399114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399110u;
            // 0x399114: 0x8e2401d4  lw          $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EEB10u;
    if (runtime->hasFunction(0x3EEB10u)) {
        auto targetFn = runtime->lookupFunction(0x3EEB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399118u; }
        if (ctx->pc != 0x399118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EEB10_0x3eeb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399118u; }
        if (ctx->pc != 0x399118u) { return; }
    }
    ctx->pc = 0x399118u;
label_399118:
    // 0x399118: 0xc62101d0  lwc1        $f1, 0x1D0($s1)
    ctx->pc = 0x399118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39911c:
    // 0x39911c: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x39911cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_399120:
    // 0x399120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x399120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_399124:
    // 0x399124: 0x0  nop
    ctx->pc = 0x399124u;
    // NOP
label_399128:
    // 0x399128: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x399128u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_39912c:
    // 0x39912c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39912cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_399130:
    // 0x399130: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_399134:
    if (ctx->pc == 0x399134u) {
        ctx->pc = 0x399134u;
            // 0x399134: 0xe62101d0  swc1        $f1, 0x1D0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 464), bits); }
        ctx->pc = 0x399138u;
        goto label_399138;
    }
    ctx->pc = 0x399130u;
    {
        const bool branch_taken_0x399130 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x399134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399130u;
            // 0x399134: 0xe62101d0  swc1        $f1, 0x1D0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x399130) {
            ctx->pc = 0x3991A4u;
            goto label_3991a4;
        }
    }
    ctx->pc = 0x399138u;
label_399138:
    // 0x399138: 0xae2001d0  sw          $zero, 0x1D0($s1)
    ctx->pc = 0x399138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
label_39913c:
    // 0x39913c: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x39913cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_399140:
    // 0x399140: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x399140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_399144:
    // 0x399144: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_399148:
    if (ctx->pc == 0x399148u) {
        ctx->pc = 0x399148u;
            // 0x399148: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39914Cu;
        goto label_39914c;
    }
    ctx->pc = 0x399144u;
    {
        const bool branch_taken_0x399144 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x399148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399144u;
            // 0x399148: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399144) {
            ctx->pc = 0x39915Cu;
            goto label_39915c;
        }
    }
    ctx->pc = 0x39914Cu;
label_39914c:
    // 0x39914c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x39914cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_399150:
    // 0x399150: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_399154:
    if (ctx->pc == 0x399154u) {
        ctx->pc = 0x399158u;
        goto label_399158;
    }
    ctx->pc = 0x399150u;
    {
        const bool branch_taken_0x399150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x399150) {
            ctx->pc = 0x39915Cu;
            goto label_39915c;
        }
    }
    ctx->pc = 0x399158u;
label_399158:
    // 0x399158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39915c:
    // 0x39915c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_399160:
    if (ctx->pc == 0x399160u) {
        ctx->pc = 0x399164u;
        goto label_399164;
    }
    ctx->pc = 0x39915Cu;
    {
        const bool branch_taken_0x39915c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x39915c) {
            ctx->pc = 0x399178u;
            goto label_399178;
        }
    }
    ctx->pc = 0x399164u;
label_399164:
    // 0x399164: 0xc075eb4  jal         func_1D7AD0
label_399168:
    if (ctx->pc == 0x399168u) {
        ctx->pc = 0x399168u;
            // 0x399168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39916Cu;
        goto label_39916c;
    }
    ctx->pc = 0x399164u;
    SET_GPR_U32(ctx, 31, 0x39916Cu);
    ctx->pc = 0x399168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399164u;
            // 0x399168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39916Cu; }
        if (ctx->pc != 0x39916Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39916Cu; }
        if (ctx->pc != 0x39916Cu) { return; }
    }
    ctx->pc = 0x39916Cu;
label_39916c:
    // 0x39916c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_399170:
    if (ctx->pc == 0x399170u) {
        ctx->pc = 0x399174u;
        goto label_399174;
    }
    ctx->pc = 0x39916Cu;
    {
        const bool branch_taken_0x39916c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39916c) {
            ctx->pc = 0x399178u;
            goto label_399178;
        }
    }
    ctx->pc = 0x399174u;
label_399174:
    // 0x399174: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x399174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399178:
    // 0x399178: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_39917c:
    if (ctx->pc == 0x39917Cu) {
        ctx->pc = 0x39917Cu;
            // 0x39917c: 0x920411aa  lbu         $a0, 0x11AA($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->pc = 0x399180u;
        goto label_399180;
    }
    ctx->pc = 0x399178u;
    {
        const bool branch_taken_0x399178 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x399178) {
            ctx->pc = 0x39917Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x399178u;
            // 0x39917c: 0x920411aa  lbu         $a0, 0x11AA($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x399194u;
            goto label_399194;
        }
    }
    ctx->pc = 0x399180u;
label_399180:
    // 0x399180: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x399180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_399184:
    // 0x399184: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x399184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_399188:
    // 0x399188: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_39918c:
    if (ctx->pc == 0x39918Cu) {
        ctx->pc = 0x39918Cu;
            // 0x39918c: 0xc6620108  lwc1        $f2, 0x108($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x399190u;
        goto label_399190;
    }
    ctx->pc = 0x399188u;
    {
        const bool branch_taken_0x399188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x399188) {
            ctx->pc = 0x39918Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x399188u;
            // 0x39918c: 0xc6620108  lwc1        $f2, 0x108($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3991A8u;
            goto label_3991a8;
        }
    }
    ctx->pc = 0x399190u;
label_399190:
    // 0x399190: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x399190u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_399194:
    // 0x399194: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x399194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_399198:
    // 0x399198: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x399198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_39919c:
    // 0x39919c: 0xc0bb2e8  jal         func_2ECBA0
label_3991a0:
    if (ctx->pc == 0x3991A0u) {
        ctx->pc = 0x3991A0u;
            // 0x3991a0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3991A4u;
        goto label_3991a4;
    }
    ctx->pc = 0x39919Cu;
    SET_GPR_U32(ctx, 31, 0x3991A4u);
    ctx->pc = 0x3991A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39919Cu;
            // 0x3991a0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3991A4u; }
        if (ctx->pc != 0x3991A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3991A4u; }
        if (ctx->pc != 0x3991A4u) { return; }
    }
    ctx->pc = 0x3991A4u;
label_3991a4:
    // 0x3991a4: 0xc6620108  lwc1        $f2, 0x108($s3)
    ctx->pc = 0x3991a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3991a8:
    // 0x3991a8: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x3991a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
label_3991ac:
    // 0x3991ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3991acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3991b0:
    // 0x3991b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3991b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3991b4:
    // 0x3991b4: 0x0  nop
    ctx->pc = 0x3991b4u;
    // NOP
label_3991b8:
    // 0x3991b8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3991b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3991bc:
    // 0x3991bc: 0x4602a05d  msub.s      $f1, $f20, $f2
    ctx->pc = 0x3991bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_3991c0:
    // 0x3991c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3991c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3991c4:
    // 0x3991c4: 0x45000048  bc1f        . + 4 + (0x48 << 2)
label_3991c8:
    if (ctx->pc == 0x3991C8u) {
        ctx->pc = 0x3991CCu;
        goto label_3991cc;
    }
    ctx->pc = 0x3991C4u;
    {
        const bool branch_taken_0x3991c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3991c4) {
            ctx->pc = 0x3992E8u;
            goto label_3992e8;
        }
    }
    ctx->pc = 0x3991CCu;
label_3991cc:
    // 0x3991cc: 0x8e040550  lw          $a0, 0x550($s0)
    ctx->pc = 0x3991ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_3991d0:
    // 0x3991d0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3991d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3991d4:
    // 0x3991d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3991d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3991d8:
    // 0x3991d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3991d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3991dc:
    // 0x3991dc: 0x8083010e  lb          $v1, 0x10E($a0)
    ctx->pc = 0x3991dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 270)));
label_3991e0:
    // 0x3991e0: 0x8082010d  lb          $v0, 0x10D($a0)
    ctx->pc = 0x3991e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
label_3991e4:
    // 0x3991e4: 0xa082010e  sb          $v0, 0x10E($a0)
    ctx->pc = 0x3991e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 270), (uint8_t)GPR_U32(ctx, 2));
label_3991e8:
    // 0x3991e8: 0xa083010d  sb          $v1, 0x10D($a0)
    ctx->pc = 0x3991e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 269), (uint8_t)GPR_U32(ctx, 3));
label_3991ec:
    // 0x3991ec: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x3991ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_3991f0:
    // 0x3991f0: 0xc0bdf9c  jal         func_2F7E70
label_3991f4:
    if (ctx->pc == 0x3991F4u) {
        ctx->pc = 0x3991F4u;
            // 0x3991f4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3991F8u;
        goto label_3991f8;
    }
    ctx->pc = 0x3991F0u;
    SET_GPR_U32(ctx, 31, 0x3991F8u);
    ctx->pc = 0x3991F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3991F0u;
            // 0x3991f4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3991F8u; }
        if (ctx->pc != 0x3991F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3991F8u; }
        if (ctx->pc != 0x3991F8u) { return; }
    }
    ctx->pc = 0x3991F8u;
label_3991f8:
    // 0x3991f8: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3991f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_3991fc:
    // 0x3991fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3991fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399200:
    // 0x399200: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x399200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_399204:
    // 0x399204: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x399204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_399208:
    // 0x399208: 0x8e020d9c  lw          $v0, 0xD9C($s0)
    ctx->pc = 0x399208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_39920c:
    // 0x39920c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x39920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_399210:
    // 0x399210: 0xae020d9c  sw          $v0, 0xD9C($s0)
    ctx->pc = 0x399210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
label_399214:
    // 0x399214: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x399214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_399218:
    // 0x399218: 0xa044001c  sb          $a0, 0x1C($v0)
    ctx->pc = 0x399218u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 4));
label_39921c:
    // 0x39921c: 0x8e120d74  lw          $s2, 0xD74($s0)
    ctx->pc = 0x39921cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_399220:
    // 0x399220: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x399220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_399224:
    // 0x399224: 0x8e4202c8  lw          $v0, 0x2C8($s2)
    ctx->pc = 0x399224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_399228:
    // 0x399228: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x399228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_39922c:
    // 0x39922c: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x39922cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_399230:
    // 0x399230: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x399230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_399234:
    // 0x399234: 0xc0a545c  jal         func_295170
label_399238:
    if (ctx->pc == 0x399238u) {
        ctx->pc = 0x399238u;
            // 0x399238: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x39923Cu;
        goto label_39923c;
    }
    ctx->pc = 0x399234u;
    SET_GPR_U32(ctx, 31, 0x39923Cu);
    ctx->pc = 0x399238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399234u;
            // 0x399238: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39923Cu; }
        if (ctx->pc != 0x39923Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39923Cu; }
        if (ctx->pc != 0x39923Cu) { return; }
    }
    ctx->pc = 0x39923Cu;
label_39923c:
    // 0x39923c: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x39923cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_399240:
    // 0x399240: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x399240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_399244:
    // 0x399244: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x399244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_399248:
    // 0x399248: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x399248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39924c:
    // 0x39924c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39924cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_399250:
    // 0x399250: 0xc08bf20  jal         func_22FC80
label_399254:
    if (ctx->pc == 0x399254u) {
        ctx->pc = 0x399254u;
            // 0x399254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399258u;
        goto label_399258;
    }
    ctx->pc = 0x399250u;
    SET_GPR_U32(ctx, 31, 0x399258u);
    ctx->pc = 0x399254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399250u;
            // 0x399254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399258u; }
        if (ctx->pc != 0x399258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399258u; }
        if (ctx->pc != 0x399258u) { return; }
    }
    ctx->pc = 0x399258u;
label_399258:
    // 0x399258: 0x8e020d74  lw          $v0, 0xD74($s0)
    ctx->pc = 0x399258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_39925c:
    // 0x39925c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399260:
    // 0x399260: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x399260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_399264:
    // 0x399264: 0x24051fff  addiu       $a1, $zero, 0x1FFF
    ctx->pc = 0x399264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
label_399268:
    // 0x399268: 0xc04f29c  jal         func_13CA70
label_39926c:
    if (ctx->pc == 0x39926Cu) {
        ctx->pc = 0x39926Cu;
            // 0x39926c: 0xac4302b0  sw          $v1, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
        ctx->pc = 0x399270u;
        goto label_399270;
    }
    ctx->pc = 0x399268u;
    SET_GPR_U32(ctx, 31, 0x399270u);
    ctx->pc = 0x39926Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399268u;
            // 0x39926c: 0xac4302b0  sw          $v1, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399270u; }
        if (ctx->pc != 0x399270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399270u; }
        if (ctx->pc != 0x399270u) { return; }
    }
    ctx->pc = 0x399270u;
label_399270:
    // 0x399270: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x399270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_399274:
    // 0x399274: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x399274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_399278:
    // 0x399278: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x399278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_39927c:
    // 0x39927c: 0xc04cca0  jal         func_133280
label_399280:
    if (ctx->pc == 0x399280u) {
        ctx->pc = 0x399280u;
            // 0x399280: 0x24c66f20  addiu       $a2, $a2, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
        ctx->pc = 0x399284u;
        goto label_399284;
    }
    ctx->pc = 0x39927Cu;
    SET_GPR_U32(ctx, 31, 0x399284u);
    ctx->pc = 0x399280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39927Cu;
            // 0x399280: 0x24c66f20  addiu       $a2, $a2, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399284u; }
        if (ctx->pc != 0x399284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399284u; }
        if (ctx->pc != 0x399284u) { return; }
    }
    ctx->pc = 0x399284u;
label_399284:
    // 0x399284: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x399284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_399288:
    // 0x399288: 0xc04f278  jal         func_13C9E0
label_39928c:
    if (ctx->pc == 0x39928Cu) {
        ctx->pc = 0x39928Cu;
            // 0x39928c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x399290u;
        goto label_399290;
    }
    ctx->pc = 0x399288u;
    SET_GPR_U32(ctx, 31, 0x399290u);
    ctx->pc = 0x39928Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399288u;
            // 0x39928c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399290u; }
        if (ctx->pc != 0x399290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399290u; }
        if (ctx->pc != 0x399290u) { return; }
    }
    ctx->pc = 0x399290u;
label_399290:
    // 0x399290: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x399290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_399294:
    // 0x399294: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x399294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_399298:
    // 0x399298: 0xc04cca0  jal         func_133280
label_39929c:
    if (ctx->pc == 0x39929Cu) {
        ctx->pc = 0x39929Cu;
            // 0x39929c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3992A0u;
        goto label_3992a0;
    }
    ctx->pc = 0x399298u;
    SET_GPR_U32(ctx, 31, 0x3992A0u);
    ctx->pc = 0x39929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399298u;
            // 0x39929c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3992A0u; }
        if (ctx->pc != 0x3992A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3992A0u; }
        if (ctx->pc != 0x3992A0u) { return; }
    }
    ctx->pc = 0x3992A0u;
label_3992a0:
    // 0x3992a0: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x3992a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_3992a4:
    // 0x3992a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3992a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3992a8:
    // 0x3992a8: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x3992a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3992ac:
    // 0x3992ac: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3992acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3992b0:
    // 0x3992b0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3992b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3992b4:
    // 0x3992b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3992b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3992b8:
    // 0x3992b8: 0xc0767f0  jal         func_1D9FC0
label_3992bc:
    if (ctx->pc == 0x3992BCu) {
        ctx->pc = 0x3992BCu;
            // 0x3992bc: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x3992C0u;
        goto label_3992c0;
    }
    ctx->pc = 0x3992B8u;
    SET_GPR_U32(ctx, 31, 0x3992C0u);
    ctx->pc = 0x3992BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3992B8u;
            // 0x3992bc: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3992C0u; }
        if (ctx->pc != 0x3992C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3992C0u; }
        if (ctx->pc != 0x3992C0u) { return; }
    }
    ctx->pc = 0x3992C0u;
label_3992c0:
    // 0x3992c0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3992c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3992c4:
    // 0x3992c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3992c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3992c8:
    // 0x3992c8: 0x8e2401c8  lw          $a0, 0x1C8($s1)
    ctx->pc = 0x3992c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_3992cc:
    // 0x3992cc: 0x8c660d98  lw          $a2, 0xD98($v1)
    ctx->pc = 0x3992ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_3992d0:
    // 0x3992d0: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x3992d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_3992d4:
    // 0x3992d4: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x3992d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_3992d8:
    // 0x3992d8: 0xa02827  not         $a1, $a1
    ctx->pc = 0x3992d8u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_3992dc:
    // 0x3992dc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3992dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_3992e0:
    // 0x3992e0: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x3992e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
label_3992e4:
    // 0x3992e4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3992e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3992e8:
    // 0x3992e8: 0x96640110  lhu         $a0, 0x110($s3)
    ctx->pc = 0x3992e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
label_3992ec:
    // 0x3992ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3992ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3992f0:
    // 0x3992f0: 0x148300db  bne         $a0, $v1, . + 4 + (0xDB << 2)
label_3992f4:
    if (ctx->pc == 0x3992F4u) {
        ctx->pc = 0x3992F8u;
        goto label_3992f8;
    }
    ctx->pc = 0x3992F0u;
    {
        const bool branch_taken_0x3992f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3992f0) {
            ctx->pc = 0x399660u;
            goto label_399660;
        }
    }
    ctx->pc = 0x3992F8u;
label_3992f8:
    // 0x3992f8: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_3992fc:
    if (ctx->pc == 0x3992FCu) {
        ctx->pc = 0x3992FCu;
            // 0x3992fc: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x399300u;
        goto label_399300;
    }
    ctx->pc = 0x3992F8u;
    {
        const bool branch_taken_0x3992f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3992FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3992F8u;
            // 0x3992fc: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3992f8) {
            ctx->pc = 0x399660u;
            goto label_399660;
        }
    }
    ctx->pc = 0x399300u;
label_399300:
    // 0x399300: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x399300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_399304:
    // 0x399304: 0xc04cc34  jal         func_1330D0
label_399308:
    if (ctx->pc == 0x399308u) {
        ctx->pc = 0x399308u;
            // 0x399308: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x39930Cu;
        goto label_39930c;
    }
    ctx->pc = 0x399304u;
    SET_GPR_U32(ctx, 31, 0x39930Cu);
    ctx->pc = 0x399308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399304u;
            // 0x399308: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39930Cu; }
        if (ctx->pc != 0x39930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39930Cu; }
        if (ctx->pc != 0x39930Cu) { return; }
    }
    ctx->pc = 0x39930Cu;
label_39930c:
    // 0x39930c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x39930cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_399310:
    // 0x399310: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x399310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_399314:
    // 0x399314: 0x0  nop
    ctx->pc = 0x399314u;
    // NOP
label_399318:
    // 0x399318: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x399318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39931c:
    // 0x39931c: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
label_399320:
    if (ctx->pc == 0x399320u) {
        ctx->pc = 0x399320u;
            // 0x399320: 0x3c033eed  lui         $v1, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
        ctx->pc = 0x399324u;
        goto label_399324;
    }
    ctx->pc = 0x39931Cu;
    {
        const bool branch_taken_0x39931c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39931c) {
            ctx->pc = 0x399320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39931Cu;
            // 0x399320: 0x3c033eed  lui         $v1, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3993F4u;
            goto label_3993f4;
        }
    }
    ctx->pc = 0x399324u;
label_399324:
    // 0x399324: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x399324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_399328:
    // 0x399328: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x399328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39932c:
    // 0x39932c: 0xc460f220  lwc1        $f0, -0xDE0($v1)
    ctx->pc = 0x39932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_399330:
    // 0x399330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_399334:
    // 0x399334: 0xc442f224  lwc1        $f2, -0xDDC($v0)
    ctx->pc = 0x399334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_399338:
    // 0x399338: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x399338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_39933c:
    // 0x39933c: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x39933cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_399340:
    // 0x399340: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x399340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_399344:
    // 0x399344: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x399344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_399348:
    // 0x399348: 0xc461f228  lwc1        $f1, -0xDD8($v1)
    ctx->pc = 0x399348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39934c:
    // 0x39934c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_399350:
    // 0x399350: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x399350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_399354:
    // 0x399354: 0xc440f22c  lwc1        $f0, -0xDD4($v0)
    ctx->pc = 0x399354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_399358:
    // 0x399358: 0xe7a201c4  swc1        $f2, 0x1C4($sp)
    ctx->pc = 0x399358u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_39935c:
    // 0x39935c: 0xe7a101c8  swc1        $f1, 0x1C8($sp)
    ctx->pc = 0x39935cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_399360:
    // 0x399360: 0xc122b74  jal         func_48ADD0
label_399364:
    if (ctx->pc == 0x399364u) {
        ctx->pc = 0x399364u;
            // 0x399364: 0xe7a001cc  swc1        $f0, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->pc = 0x399368u;
        goto label_399368;
    }
    ctx->pc = 0x399360u;
    SET_GPR_U32(ctx, 31, 0x399368u);
    ctx->pc = 0x399364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399360u;
            // 0x399364: 0xe7a001cc  swc1        $f0, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x48ADD0u;
    if (runtime->hasFunction(0x48ADD0u)) {
        auto targetFn = runtime->lookupFunction(0x48ADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399368u; }
        if (ctx->pc != 0x399368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048ADD0_0x48add0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399368u; }
        if (ctx->pc != 0x399368u) { return; }
    }
    ctx->pc = 0x399368u;
label_399368:
    // 0x399368: 0xae000de4  sw          $zero, 0xDE4($s0)
    ctx->pc = 0x399368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
label_39936c:
    // 0x39936c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x39936cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_399370:
    // 0x399370: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x399370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_399374:
    // 0x399374: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x399374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_399378:
    // 0x399378: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x399378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_39937c:
    // 0x39937c: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x39937cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_399380:
    // 0x399380: 0xc04cc04  jal         func_133010
label_399384:
    if (ctx->pc == 0x399384u) {
        ctx->pc = 0x399384u;
            // 0x399384: 0x24a56f30  addiu       $a1, $a1, 0x6F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28464));
        ctx->pc = 0x399388u;
        goto label_399388;
    }
    ctx->pc = 0x399380u;
    SET_GPR_U32(ctx, 31, 0x399388u);
    ctx->pc = 0x399384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399380u;
            // 0x399384: 0x24a56f30  addiu       $a1, $a1, 0x6F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399388u; }
        if (ctx->pc != 0x399388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399388u; }
        if (ctx->pc != 0x399388u) { return; }
    }
    ctx->pc = 0x399388u;
label_399388:
    // 0x399388: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x399388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39938c:
    // 0x39938c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39938cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399390:
    // 0x399390: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x399390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_399394:
    // 0x399394: 0x320f809  jalr        $t9
label_399398:
    if (ctx->pc == 0x399398u) {
        ctx->pc = 0x399398u;
            // 0x399398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39939Cu;
        goto label_39939c;
    }
    ctx->pc = 0x399394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39939Cu);
        ctx->pc = 0x399398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399394u;
            // 0x399398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39939Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39939Cu; }
            if (ctx->pc != 0x39939Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39939Cu;
label_39939c:
    // 0x39939c: 0x8e100d74  lw          $s0, 0xD74($s0)
    ctx->pc = 0x39939cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_3993a0:
    // 0x3993a0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3993a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_3993a4:
    // 0x3993a4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3993a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3993a8:
    // 0x3993a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3993a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3993ac:
    // 0x3993ac: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x3993acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_3993b0:
    // 0x3993b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3993b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3993b4:
    // 0x3993b4: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x3993b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3993b8:
    // 0x3993b8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3993b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3993bc:
    // 0x3993bc: 0xc0a545c  jal         func_295170
label_3993c0:
    if (ctx->pc == 0x3993C0u) {
        ctx->pc = 0x3993C0u;
            // 0x3993c0: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x3993C4u;
        goto label_3993c4;
    }
    ctx->pc = 0x3993BCu;
    SET_GPR_U32(ctx, 31, 0x3993C4u);
    ctx->pc = 0x3993C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3993BCu;
            // 0x3993c0: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3993C4u; }
        if (ctx->pc != 0x3993C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3993C4u; }
        if (ctx->pc != 0x3993C4u) { return; }
    }
    ctx->pc = 0x3993C4u;
label_3993c4:
    // 0x3993c4: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x3993c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_3993c8:
    // 0x3993c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3993c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3993cc:
    // 0x3993cc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3993ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3993d0:
    // 0x3993d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3993d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3993d4:
    // 0x3993d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3993d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3993d8:
    // 0x3993d8: 0xc08bf20  jal         func_22FC80
label_3993dc:
    if (ctx->pc == 0x3993DCu) {
        ctx->pc = 0x3993DCu;
            // 0x3993dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3993E0u;
        goto label_3993e0;
    }
    ctx->pc = 0x3993D8u;
    SET_GPR_U32(ctx, 31, 0x3993E0u);
    ctx->pc = 0x3993DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3993D8u;
            // 0x3993dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3993E0u; }
        if (ctx->pc != 0x3993E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3993E0u; }
        if (ctx->pc != 0x3993E0u) { return; }
    }
    ctx->pc = 0x3993E0u;
label_3993e0:
    // 0x3993e0: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x3993e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_3993e4:
    // 0x3993e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3993e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3993e8:
    // 0x3993e8: 0xae2401cc  sw          $a0, 0x1CC($s1)
    ctx->pc = 0x3993e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 4));
label_3993ec:
    // 0x3993ec: 0x1000009c  b           . + 4 + (0x9C << 2)
label_3993f0:
    if (ctx->pc == 0x3993F0u) {
        ctx->pc = 0x3993F0u;
            // 0x3993f0: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x3993F4u;
        goto label_3993f4;
    }
    ctx->pc = 0x3993ECu;
    {
        const bool branch_taken_0x3993ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3993F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3993ECu;
            // 0x3993f0: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3993ec) {
            ctx->pc = 0x399660u;
            goto label_399660;
        }
    }
    ctx->pc = 0x3993F4u;
label_3993f4:
    // 0x3993f4: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x3993f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_3993f8:
    // 0x3993f8: 0x10000099  b           . + 4 + (0x99 << 2)
label_3993fc:
    if (ctx->pc == 0x3993FCu) {
        ctx->pc = 0x3993FCu;
            // 0x3993fc: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->pc = 0x399400u;
        goto label_399400;
    }
    ctx->pc = 0x3993F8u;
    {
        const bool branch_taken_0x3993f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3993FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3993F8u;
            // 0x3993fc: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3993f8) {
            ctx->pc = 0x399660u;
            goto label_399660;
        }
    }
    ctx->pc = 0x399400u;
label_399400:
    // 0x399400: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x399400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_399404:
    // 0x399404: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x399404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_399408:
    // 0x399408: 0xc04f278  jal         func_13C9E0
label_39940c:
    if (ctx->pc == 0x39940Cu) {
        ctx->pc = 0x39940Cu;
            // 0x39940c: 0x26120890  addiu       $s2, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->pc = 0x399410u;
        goto label_399410;
    }
    ctx->pc = 0x399408u;
    SET_GPR_U32(ctx, 31, 0x399410u);
    ctx->pc = 0x39940Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399408u;
            // 0x39940c: 0x26120890  addiu       $s2, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399410u; }
        if (ctx->pc != 0x399410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399410u; }
        if (ctx->pc != 0x399410u) { return; }
    }
    ctx->pc = 0x399410u;
label_399410:
    // 0x399410: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x399410u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_399414:
    // 0x399414: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x399414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_399418:
    // 0x399418: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x399418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_39941c:
    // 0x39941c: 0xc04cca0  jal         func_133280
label_399420:
    if (ctx->pc == 0x399420u) {
        ctx->pc = 0x399420u;
            // 0x399420: 0x24c66f20  addiu       $a2, $a2, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
        ctx->pc = 0x399424u;
        goto label_399424;
    }
    ctx->pc = 0x39941Cu;
    SET_GPR_U32(ctx, 31, 0x399424u);
    ctx->pc = 0x399420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39941Cu;
            // 0x399420: 0x24c66f20  addiu       $a2, $a2, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399424u; }
        if (ctx->pc != 0x399424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399424u; }
        if (ctx->pc != 0x399424u) { return; }
    }
    ctx->pc = 0x399424u;
label_399424:
    // 0x399424: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x399424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_399428:
    // 0x399428: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x399428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_39942c:
    // 0x39942c: 0xc075378  jal         func_1D4DE0
label_399430:
    if (ctx->pc == 0x399430u) {
        ctx->pc = 0x399430u;
            // 0x399430: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->pc = 0x399434u;
        goto label_399434;
    }
    ctx->pc = 0x39942Cu;
    SET_GPR_U32(ctx, 31, 0x399434u);
    ctx->pc = 0x399430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39942Cu;
            // 0x399430: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399434u; }
        if (ctx->pc != 0x399434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399434u; }
        if (ctx->pc != 0x399434u) { return; }
    }
    ctx->pc = 0x399434u;
label_399434:
    // 0x399434: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x399434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_399438:
    // 0x399438: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x399438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_39943c:
    // 0x39943c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x39943cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_399440:
    // 0x399440: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x399440u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_399444:
    // 0x399444: 0xc0c753c  jal         func_31D4F0
label_399448:
    if (ctx->pc == 0x399448u) {
        ctx->pc = 0x399448u;
            // 0x399448: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x39944Cu;
        goto label_39944c;
    }
    ctx->pc = 0x399444u;
    SET_GPR_U32(ctx, 31, 0x39944Cu);
    ctx->pc = 0x399448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399444u;
            // 0x399448: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39944Cu; }
        if (ctx->pc != 0x39944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39944Cu; }
        if (ctx->pc != 0x39944Cu) { return; }
    }
    ctx->pc = 0x39944Cu;
label_39944c:
    // 0x39944c: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x39944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_399450:
    // 0x399450: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x399450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_399454:
    // 0x399454: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x399454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_399458:
    // 0x399458: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x399458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_39945c:
    // 0x39945c: 0xc0c753c  jal         func_31D4F0
label_399460:
    if (ctx->pc == 0x399460u) {
        ctx->pc = 0x399460u;
            // 0x399460: 0x2644009c  addiu       $a0, $s2, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
        ctx->pc = 0x399464u;
        goto label_399464;
    }
    ctx->pc = 0x39945Cu;
    SET_GPR_U32(ctx, 31, 0x399464u);
    ctx->pc = 0x399460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39945Cu;
            // 0x399460: 0x2644009c  addiu       $a0, $s2, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399464u; }
        if (ctx->pc != 0x399464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399464u; }
        if (ctx->pc != 0x399464u) { return; }
    }
    ctx->pc = 0x399464u;
label_399464:
    // 0x399464: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x399464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_399468:
    // 0x399468: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x399468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_39946c:
    // 0x39946c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39946cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_399470:
    // 0x399470: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x399470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_399474:
    // 0x399474: 0xc0c6250  jal         func_318940
label_399478:
    if (ctx->pc == 0x399478u) {
        ctx->pc = 0x399478u;
            // 0x399478: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->pc = 0x39947Cu;
        goto label_39947c;
    }
    ctx->pc = 0x399474u;
    SET_GPR_U32(ctx, 31, 0x39947Cu);
    ctx->pc = 0x399478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399474u;
            // 0x399478: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39947Cu; }
        if (ctx->pc != 0x39947Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39947Cu; }
        if (ctx->pc != 0x39947Cu) { return; }
    }
    ctx->pc = 0x39947Cu;
label_39947c:
    // 0x39947c: 0x8e020d74  lw          $v0, 0xD74($s0)
    ctx->pc = 0x39947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_399480:
    // 0x399480: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x399480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_399484:
    // 0x399484: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x399484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_399488:
    // 0x399488: 0xc04cc04  jal         func_133010
label_39948c:
    if (ctx->pc == 0x39948Cu) {
        ctx->pc = 0x39948Cu;
            // 0x39948c: 0xac4002b0  sw          $zero, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
        ctx->pc = 0x399490u;
        goto label_399490;
    }
    ctx->pc = 0x399488u;
    SET_GPR_U32(ctx, 31, 0x399490u);
    ctx->pc = 0x39948Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399488u;
            // 0x39948c: 0xac4002b0  sw          $zero, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399490u; }
        if (ctx->pc != 0x399490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399490u; }
        if (ctx->pc != 0x399490u) { return; }
    }
    ctx->pc = 0x399490u;
label_399490:
    // 0x399490: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x399490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_399494:
    // 0x399494: 0x10000072  b           . + 4 + (0x72 << 2)
label_399498:
    if (ctx->pc == 0x399498u) {
        ctx->pc = 0x399498u;
            // 0x399498: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x39949Cu;
        goto label_39949c;
    }
    ctx->pc = 0x399494u;
    {
        const bool branch_taken_0x399494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399494u;
            // 0x399498: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399494) {
            ctx->pc = 0x399660u;
            goto label_399660;
        }
    }
    ctx->pc = 0x39949Cu;
label_39949c:
    // 0x39949c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x39949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3994a0:
    // 0x3994a0: 0xc04cc04  jal         func_133010
label_3994a4:
    if (ctx->pc == 0x3994A4u) {
        ctx->pc = 0x3994A4u;
            // 0x3994a4: 0x262501e0  addiu       $a1, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->pc = 0x3994A8u;
        goto label_3994a8;
    }
    ctx->pc = 0x3994A0u;
    SET_GPR_U32(ctx, 31, 0x3994A8u);
    ctx->pc = 0x3994A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3994A0u;
            // 0x3994a4: 0x262501e0  addiu       $a1, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3994A8u; }
        if (ctx->pc != 0x3994A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3994A8u; }
        if (ctx->pc != 0x3994A8u) { return; }
    }
    ctx->pc = 0x3994A8u;
label_3994a8:
    // 0x3994a8: 0xc62101e4  lwc1        $f1, 0x1E4($s1)
    ctx->pc = 0x3994a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3994ac:
    // 0x3994ac: 0x3c023f39  lui         $v0, 0x3F39
    ctx->pc = 0x3994acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16185 << 16));
label_3994b0:
    // 0x3994b0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3994b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3994b4:
    // 0x3994b4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x3994b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_3994b8:
    // 0x3994b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3994b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3994bc:
    // 0x3994bc: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x3994bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_3994c0:
    // 0x3994c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3994c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3994c4:
    // 0x3994c4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3994c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3994c8:
    // 0x3994c8: 0x4615101c  madd.s      $f0, $f2, $f21
    ctx->pc = 0x3994c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
label_3994cc:
    // 0x3994cc: 0xc04cc04  jal         func_133010
label_3994d0:
    if (ctx->pc == 0x3994D0u) {
        ctx->pc = 0x3994D0u;
            // 0x3994d0: 0xe62001e4  swc1        $f0, 0x1E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
        ctx->pc = 0x3994D4u;
        goto label_3994d4;
    }
    ctx->pc = 0x3994CCu;
    SET_GPR_U32(ctx, 31, 0x3994D4u);
    ctx->pc = 0x3994D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3994CCu;
            // 0x3994d0: 0xe62001e4  swc1        $f0, 0x1E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3994D4u; }
        if (ctx->pc != 0x3994D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3994D4u; }
        if (ctx->pc != 0x3994D4u) { return; }
    }
    ctx->pc = 0x3994D4u;
label_3994d4:
    // 0x3994d4: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x3994d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3994d8:
    // 0x3994d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3994d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3994dc:
    // 0x3994dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3994dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3994e0:
    // 0x3994e0: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x3994e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_3994e4:
    // 0x3994e4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x3994e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_3994e8:
    // 0x3994e8: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3994e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3994ec:
    // 0x3994ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3994ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3994f0:
    // 0x3994f0: 0xc04cc90  jal         func_133240
label_3994f4:
    if (ctx->pc == 0x3994F4u) {
        ctx->pc = 0x3994F4u;
            // 0x3994f4: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->pc = 0x3994F8u;
        goto label_3994f8;
    }
    ctx->pc = 0x3994F0u;
    SET_GPR_U32(ctx, 31, 0x3994F8u);
    ctx->pc = 0x3994F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3994F0u;
            // 0x3994f4: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3994F8u; }
        if (ctx->pc != 0x3994F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3994F8u; }
        if (ctx->pc != 0x3994F8u) { return; }
    }
    ctx->pc = 0x3994F8u;
label_3994f8:
    // 0x3994f8: 0xc62101cc  lwc1        $f1, 0x1CC($s1)
    ctx->pc = 0x3994f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3994fc:
    // 0x3994fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3994fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_399500:
    // 0x399500: 0x0  nop
    ctx->pc = 0x399500u;
    // NOP
label_399504:
    // 0x399504: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x399504u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_399508:
    // 0x399508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x399508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39950c:
    // 0x39950c: 0x45000054  bc1f        . + 4 + (0x54 << 2)
label_399510:
    if (ctx->pc == 0x399510u) {
        ctx->pc = 0x399510u;
            // 0x399510: 0xe62101cc  swc1        $f1, 0x1CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
        ctx->pc = 0x399514u;
        goto label_399514;
    }
    ctx->pc = 0x39950Cu;
    {
        const bool branch_taken_0x39950c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x399510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39950Cu;
            // 0x399510: 0xe62101cc  swc1        $f1, 0x1CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39950c) {
            ctx->pc = 0x399660u;
            goto label_399660;
        }
    }
    ctx->pc = 0x399514u;
label_399514:
    // 0x399514: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x399514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_399518:
    // 0x399518: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x399518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_39951c:
    // 0x39951c: 0xc04cc04  jal         func_133010
label_399520:
    if (ctx->pc == 0x399520u) {
        ctx->pc = 0x399520u;
            // 0x399520: 0x24a56f30  addiu       $a1, $a1, 0x6F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28464));
        ctx->pc = 0x399524u;
        goto label_399524;
    }
    ctx->pc = 0x39951Cu;
    SET_GPR_U32(ctx, 31, 0x399524u);
    ctx->pc = 0x399520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39951Cu;
            // 0x399520: 0x24a56f30  addiu       $a1, $a1, 0x6F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399524u; }
        if (ctx->pc != 0x399524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399524u; }
        if (ctx->pc != 0x399524u) { return; }
    }
    ctx->pc = 0x399524u;
label_399524:
    // 0x399524: 0x3c0341d0  lui         $v1, 0x41D0
    ctx->pc = 0x399524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
label_399528:
    // 0x399528: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x399528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39952c:
    // 0x39952c: 0xae2301cc  sw          $v1, 0x1CC($s1)
    ctx->pc = 0x39952cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 3));
label_399530:
    // 0x399530: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x399530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
label_399534:
    // 0x399534: 0x8e3101c8  lw          $s1, 0x1C8($s1)
    ctx->pc = 0x399534u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_399538:
    // 0x399538: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x399538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_39953c:
    // 0x39953c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_399540:
    if (ctx->pc == 0x399540u) {
        ctx->pc = 0x399540u;
            // 0x399540: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399544u;
        goto label_399544;
    }
    ctx->pc = 0x39953Cu;
    {
        const bool branch_taken_0x39953c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39953c) {
            ctx->pc = 0x399540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39953Cu;
            // 0x399540: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39956Cu;
            goto label_39956c;
        }
    }
    ctx->pc = 0x399544u;
label_399544:
    // 0x399544: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x399544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_399548:
    // 0x399548: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x399548u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39954c:
    // 0x39954c: 0x8e4201c4  lw          $v0, 0x1C4($s2)
    ctx->pc = 0x39954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_399550:
    // 0x399550: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_399554:
    if (ctx->pc == 0x399554u) {
        ctx->pc = 0x399554u;
            // 0x399554: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->pc = 0x399558u;
        goto label_399558;
    }
    ctx->pc = 0x399550u;
    {
        const bool branch_taken_0x399550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399550) {
            ctx->pc = 0x399554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x399550u;
            // 0x399554: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x399560u;
            goto label_399560;
        }
    }
    ctx->pc = 0x399558u;
label_399558:
    // 0x399558: 0x10000005  b           . + 4 + (0x5 << 2)
label_39955c:
    if (ctx->pc == 0x39955Cu) {
        ctx->pc = 0x39955Cu;
            // 0x39955c: 0xae500008  sw          $s0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x399560u;
        goto label_399560;
    }
    ctx->pc = 0x399558u;
    {
        const bool branch_taken_0x399558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399558u;
            // 0x39955c: 0xae500008  sw          $s0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399558) {
            ctx->pc = 0x399570u;
            goto label_399570;
        }
    }
    ctx->pc = 0x399560u;
label_399560:
    // 0x399560: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_399564:
    if (ctx->pc == 0x399564u) {
        ctx->pc = 0x399564u;
            // 0x399564: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x399568u;
        goto label_399568;
    }
    ctx->pc = 0x399560u;
    {
        const bool branch_taken_0x399560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x399564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399560u;
            // 0x399564: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399560) {
            ctx->pc = 0x399548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_399548;
        }
    }
    ctx->pc = 0x399568u;
label_399568:
    // 0x399568: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x399568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39956c:
    // 0x39956c: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x39956cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_399570:
    // 0x399570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399574:
    // 0x399574: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x399574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_399578:
    // 0x399578: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x399578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_39957c:
    // 0x39957c: 0x320f809  jalr        $t9
label_399580:
    if (ctx->pc == 0x399580u) {
        ctx->pc = 0x399580u;
            // 0x399580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399584u;
        goto label_399584;
    }
    ctx->pc = 0x39957Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x399584u);
        ctx->pc = 0x399580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39957Cu;
            // 0x399580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x399584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x399584u; }
            if (ctx->pc != 0x399584u) { return; }
        }
        }
    }
    ctx->pc = 0x399584u;
label_399584:
    // 0x399584: 0x8e100550  lw          $s0, 0x550($s0)
    ctx->pc = 0x399584u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_399588:
    // 0x399588: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x399588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_39958c:
    // 0x39958c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x39958cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_399590:
    // 0x399590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x399590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399594:
    // 0x399594: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x399594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_399598:
    // 0x399598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x399598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39959c:
    // 0x39959c: 0x8202010d  lb          $v0, 0x10D($s0)
    ctx->pc = 0x39959cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3995a0:
    // 0x3995a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3995a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3995a4:
    // 0x3995a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3995a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3995a8:
    // 0x3995a8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3995a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3995ac:
    // 0x3995ac: 0xa202010e  sb          $v0, 0x10E($s0)
    ctx->pc = 0x3995acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 2));
label_3995b0:
    // 0x3995b0: 0xa200010d  sb          $zero, 0x10D($s0)
    ctx->pc = 0x3995b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 0));
label_3995b4:
    // 0x3995b4: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x3995b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3995b8:
    // 0x3995b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3995b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3995bc:
    // 0x3995bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3995bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3995c0:
    // 0x3995c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3995c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3995c4:
    // 0x3995c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3995c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3995c8:
    // 0x3995c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3995c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3995cc:
    // 0x3995cc: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x3995ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_3995d0:
    // 0x3995d0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3995d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3995d4:
    // 0x3995d4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3995d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3995d8:
    // 0x3995d8: 0x320f809  jalr        $t9
label_3995dc:
    if (ctx->pc == 0x3995DCu) {
        ctx->pc = 0x3995DCu;
            // 0x3995dc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3995E0u;
        goto label_3995e0;
    }
    ctx->pc = 0x3995D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3995E0u);
        ctx->pc = 0x3995DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3995D8u;
            // 0x3995dc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3995E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3995E0u; }
            if (ctx->pc != 0x3995E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3995E0u;
label_3995e0:
    // 0x3995e0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3995e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3995e4:
    // 0x3995e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3995e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3995e8:
    // 0x3995e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3995e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3995ec:
    // 0x3995ec: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3995ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3995f0:
    // 0x3995f0: 0x320f809  jalr        $t9
label_3995f4:
    if (ctx->pc == 0x3995F4u) {
        ctx->pc = 0x3995F4u;
            // 0x3995f4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3995F8u;
        goto label_3995f8;
    }
    ctx->pc = 0x3995F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3995F8u);
        ctx->pc = 0x3995F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3995F0u;
            // 0x3995f4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3995F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3995F8u; }
            if (ctx->pc != 0x3995F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3995F8u;
label_3995f8:
    // 0x3995f8: 0xae5101c8  sw          $s1, 0x1C8($s2)
    ctx->pc = 0x3995f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 17));
label_3995fc:
    // 0x3995fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3995fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399600:
    // 0x399600: 0xae4401c0  sw          $a0, 0x1C0($s2)
    ctx->pc = 0x399600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 4));
label_399604:
    // 0x399604: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x399604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_399608:
    // 0x399608: 0xae4401c4  sw          $a0, 0x1C4($s2)
    ctx->pc = 0x399608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 4));
label_39960c:
    // 0x39960c: 0x10000014  b           . + 4 + (0x14 << 2)
label_399610:
    if (ctx->pc == 0x399610u) {
        ctx->pc = 0x399610u;
            // 0x399610: 0xae4301cc  sw          $v1, 0x1CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 3));
        ctx->pc = 0x399614u;
        goto label_399614;
    }
    ctx->pc = 0x39960Cu;
    {
        const bool branch_taken_0x39960c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39960Cu;
            // 0x399610: 0xae4301cc  sw          $v1, 0x1CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39960c) {
            ctx->pc = 0x399660u;
            goto label_399660;
        }
    }
    ctx->pc = 0x399614u;
label_399614:
    // 0x399614: 0xc62101cc  lwc1        $f1, 0x1CC($s1)
    ctx->pc = 0x399614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_399618:
    // 0x399618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x399618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39961c:
    // 0x39961c: 0x0  nop
    ctx->pc = 0x39961cu;
    // NOP
label_399620:
    // 0x399620: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x399620u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_399624:
    // 0x399624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x399624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_399628:
    // 0x399628: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_39962c:
    if (ctx->pc == 0x39962Cu) {
        ctx->pc = 0x39962Cu;
            // 0x39962c: 0xe62101cc  swc1        $f1, 0x1CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
        ctx->pc = 0x399630u;
        goto label_399630;
    }
    ctx->pc = 0x399628u;
    {
        const bool branch_taken_0x399628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399628u;
            // 0x39962c: 0xe62101cc  swc1        $f1, 0x1CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x399628) {
            ctx->pc = 0x399660u;
            goto label_399660;
        }
    }
    ctx->pc = 0x399630u;
label_399630:
    // 0x399630: 0x8e3001c8  lw          $s0, 0x1C8($s1)
    ctx->pc = 0x399630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_399634:
    // 0x399634: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x399634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_399638:
    // 0x399638: 0xc04cc04  jal         func_133010
label_39963c:
    if (ctx->pc == 0x39963Cu) {
        ctx->pc = 0x39963Cu;
            // 0x39963c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x399640u;
        goto label_399640;
    }
    ctx->pc = 0x399638u;
    SET_GPR_U32(ctx, 31, 0x399640u);
    ctx->pc = 0x39963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399638u;
            // 0x39963c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399640u; }
        if (ctx->pc != 0x399640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399640u; }
        if (ctx->pc != 0x399640u) { return; }
    }
    ctx->pc = 0x399640u;
label_399640:
    // 0x399640: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x399640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_399644:
    // 0x399644: 0xc04c720  jal         func_131C80
label_399648:
    if (ctx->pc == 0x399648u) {
        ctx->pc = 0x399648u;
            // 0x399648: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x39964Cu;
        goto label_39964c;
    }
    ctx->pc = 0x399644u;
    SET_GPR_U32(ctx, 31, 0x39964Cu);
    ctx->pc = 0x399648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399644u;
            // 0x399648: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39964Cu; }
        if (ctx->pc != 0x39964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39964Cu; }
        if (ctx->pc != 0x39964Cu) { return; }
    }
    ctx->pc = 0x39964Cu;
label_39964c:
    // 0x39964c: 0xae3001c8  sw          $s0, 0x1C8($s1)
    ctx->pc = 0x39964cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 16));
label_399650:
    // 0x399650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x399650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399654:
    // 0x399654: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x399654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
label_399658:
    // 0x399658: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x399658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39965c:
    // 0x39965c: 0xae2301c4  sw          $v1, 0x1C4($s1)
    ctx->pc = 0x39965cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
label_399660:
    // 0x399660: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x399660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_399664:
    // 0x399664: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x399664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_399668:
    // 0x399668: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x399668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39966c:
    // 0x39966c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_399670:
    // 0x399670: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x399670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_399674:
    // 0x399674: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x399674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_399678:
    // 0x399678: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x399678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39967c:
    // 0x39967c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39967cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399680:
    // 0x399680: 0x3e00008  jr          $ra
label_399684:
    if (ctx->pc == 0x399684u) {
        ctx->pc = 0x399684u;
            // 0x399684: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->pc = 0x399688u;
        goto label_399688;
    }
    ctx->pc = 0x399680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399680u;
            // 0x399684: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x399688u;
label_399688:
    // 0x399688: 0x0  nop
    ctx->pc = 0x399688u;
    // NOP
label_39968c:
    // 0x39968c: 0x0  nop
    ctx->pc = 0x39968cu;
    // NOP
}
