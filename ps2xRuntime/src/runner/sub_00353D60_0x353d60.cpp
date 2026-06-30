#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00353D60
// Address: 0x353d60 - 0x354bb0
void sub_00353D60_0x353d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353D60_0x353d60");
#endif

    switch (ctx->pc) {
        case 0x353d60u: goto label_353d60;
        case 0x353d64u: goto label_353d64;
        case 0x353d68u: goto label_353d68;
        case 0x353d6cu: goto label_353d6c;
        case 0x353d70u: goto label_353d70;
        case 0x353d74u: goto label_353d74;
        case 0x353d78u: goto label_353d78;
        case 0x353d7cu: goto label_353d7c;
        case 0x353d80u: goto label_353d80;
        case 0x353d84u: goto label_353d84;
        case 0x353d88u: goto label_353d88;
        case 0x353d8cu: goto label_353d8c;
        case 0x353d90u: goto label_353d90;
        case 0x353d94u: goto label_353d94;
        case 0x353d98u: goto label_353d98;
        case 0x353d9cu: goto label_353d9c;
        case 0x353da0u: goto label_353da0;
        case 0x353da4u: goto label_353da4;
        case 0x353da8u: goto label_353da8;
        case 0x353dacu: goto label_353dac;
        case 0x353db0u: goto label_353db0;
        case 0x353db4u: goto label_353db4;
        case 0x353db8u: goto label_353db8;
        case 0x353dbcu: goto label_353dbc;
        case 0x353dc0u: goto label_353dc0;
        case 0x353dc4u: goto label_353dc4;
        case 0x353dc8u: goto label_353dc8;
        case 0x353dccu: goto label_353dcc;
        case 0x353dd0u: goto label_353dd0;
        case 0x353dd4u: goto label_353dd4;
        case 0x353dd8u: goto label_353dd8;
        case 0x353ddcu: goto label_353ddc;
        case 0x353de0u: goto label_353de0;
        case 0x353de4u: goto label_353de4;
        case 0x353de8u: goto label_353de8;
        case 0x353decu: goto label_353dec;
        case 0x353df0u: goto label_353df0;
        case 0x353df4u: goto label_353df4;
        case 0x353df8u: goto label_353df8;
        case 0x353dfcu: goto label_353dfc;
        case 0x353e00u: goto label_353e00;
        case 0x353e04u: goto label_353e04;
        case 0x353e08u: goto label_353e08;
        case 0x353e0cu: goto label_353e0c;
        case 0x353e10u: goto label_353e10;
        case 0x353e14u: goto label_353e14;
        case 0x353e18u: goto label_353e18;
        case 0x353e1cu: goto label_353e1c;
        case 0x353e20u: goto label_353e20;
        case 0x353e24u: goto label_353e24;
        case 0x353e28u: goto label_353e28;
        case 0x353e2cu: goto label_353e2c;
        case 0x353e30u: goto label_353e30;
        case 0x353e34u: goto label_353e34;
        case 0x353e38u: goto label_353e38;
        case 0x353e3cu: goto label_353e3c;
        case 0x353e40u: goto label_353e40;
        case 0x353e44u: goto label_353e44;
        case 0x353e48u: goto label_353e48;
        case 0x353e4cu: goto label_353e4c;
        case 0x353e50u: goto label_353e50;
        case 0x353e54u: goto label_353e54;
        case 0x353e58u: goto label_353e58;
        case 0x353e5cu: goto label_353e5c;
        case 0x353e60u: goto label_353e60;
        case 0x353e64u: goto label_353e64;
        case 0x353e68u: goto label_353e68;
        case 0x353e6cu: goto label_353e6c;
        case 0x353e70u: goto label_353e70;
        case 0x353e74u: goto label_353e74;
        case 0x353e78u: goto label_353e78;
        case 0x353e7cu: goto label_353e7c;
        case 0x353e80u: goto label_353e80;
        case 0x353e84u: goto label_353e84;
        case 0x353e88u: goto label_353e88;
        case 0x353e8cu: goto label_353e8c;
        case 0x353e90u: goto label_353e90;
        case 0x353e94u: goto label_353e94;
        case 0x353e98u: goto label_353e98;
        case 0x353e9cu: goto label_353e9c;
        case 0x353ea0u: goto label_353ea0;
        case 0x353ea4u: goto label_353ea4;
        case 0x353ea8u: goto label_353ea8;
        case 0x353eacu: goto label_353eac;
        case 0x353eb0u: goto label_353eb0;
        case 0x353eb4u: goto label_353eb4;
        case 0x353eb8u: goto label_353eb8;
        case 0x353ebcu: goto label_353ebc;
        case 0x353ec0u: goto label_353ec0;
        case 0x353ec4u: goto label_353ec4;
        case 0x353ec8u: goto label_353ec8;
        case 0x353eccu: goto label_353ecc;
        case 0x353ed0u: goto label_353ed0;
        case 0x353ed4u: goto label_353ed4;
        case 0x353ed8u: goto label_353ed8;
        case 0x353edcu: goto label_353edc;
        case 0x353ee0u: goto label_353ee0;
        case 0x353ee4u: goto label_353ee4;
        case 0x353ee8u: goto label_353ee8;
        case 0x353eecu: goto label_353eec;
        case 0x353ef0u: goto label_353ef0;
        case 0x353ef4u: goto label_353ef4;
        case 0x353ef8u: goto label_353ef8;
        case 0x353efcu: goto label_353efc;
        case 0x353f00u: goto label_353f00;
        case 0x353f04u: goto label_353f04;
        case 0x353f08u: goto label_353f08;
        case 0x353f0cu: goto label_353f0c;
        case 0x353f10u: goto label_353f10;
        case 0x353f14u: goto label_353f14;
        case 0x353f18u: goto label_353f18;
        case 0x353f1cu: goto label_353f1c;
        case 0x353f20u: goto label_353f20;
        case 0x353f24u: goto label_353f24;
        case 0x353f28u: goto label_353f28;
        case 0x353f2cu: goto label_353f2c;
        case 0x353f30u: goto label_353f30;
        case 0x353f34u: goto label_353f34;
        case 0x353f38u: goto label_353f38;
        case 0x353f3cu: goto label_353f3c;
        case 0x353f40u: goto label_353f40;
        case 0x353f44u: goto label_353f44;
        case 0x353f48u: goto label_353f48;
        case 0x353f4cu: goto label_353f4c;
        case 0x353f50u: goto label_353f50;
        case 0x353f54u: goto label_353f54;
        case 0x353f58u: goto label_353f58;
        case 0x353f5cu: goto label_353f5c;
        case 0x353f60u: goto label_353f60;
        case 0x353f64u: goto label_353f64;
        case 0x353f68u: goto label_353f68;
        case 0x353f6cu: goto label_353f6c;
        case 0x353f70u: goto label_353f70;
        case 0x353f74u: goto label_353f74;
        case 0x353f78u: goto label_353f78;
        case 0x353f7cu: goto label_353f7c;
        case 0x353f80u: goto label_353f80;
        case 0x353f84u: goto label_353f84;
        case 0x353f88u: goto label_353f88;
        case 0x353f8cu: goto label_353f8c;
        case 0x353f90u: goto label_353f90;
        case 0x353f94u: goto label_353f94;
        case 0x353f98u: goto label_353f98;
        case 0x353f9cu: goto label_353f9c;
        case 0x353fa0u: goto label_353fa0;
        case 0x353fa4u: goto label_353fa4;
        case 0x353fa8u: goto label_353fa8;
        case 0x353facu: goto label_353fac;
        case 0x353fb0u: goto label_353fb0;
        case 0x353fb4u: goto label_353fb4;
        case 0x353fb8u: goto label_353fb8;
        case 0x353fbcu: goto label_353fbc;
        case 0x353fc0u: goto label_353fc0;
        case 0x353fc4u: goto label_353fc4;
        case 0x353fc8u: goto label_353fc8;
        case 0x353fccu: goto label_353fcc;
        case 0x353fd0u: goto label_353fd0;
        case 0x353fd4u: goto label_353fd4;
        case 0x353fd8u: goto label_353fd8;
        case 0x353fdcu: goto label_353fdc;
        case 0x353fe0u: goto label_353fe0;
        case 0x353fe4u: goto label_353fe4;
        case 0x353fe8u: goto label_353fe8;
        case 0x353fecu: goto label_353fec;
        case 0x353ff0u: goto label_353ff0;
        case 0x353ff4u: goto label_353ff4;
        case 0x353ff8u: goto label_353ff8;
        case 0x353ffcu: goto label_353ffc;
        case 0x354000u: goto label_354000;
        case 0x354004u: goto label_354004;
        case 0x354008u: goto label_354008;
        case 0x35400cu: goto label_35400c;
        case 0x354010u: goto label_354010;
        case 0x354014u: goto label_354014;
        case 0x354018u: goto label_354018;
        case 0x35401cu: goto label_35401c;
        case 0x354020u: goto label_354020;
        case 0x354024u: goto label_354024;
        case 0x354028u: goto label_354028;
        case 0x35402cu: goto label_35402c;
        case 0x354030u: goto label_354030;
        case 0x354034u: goto label_354034;
        case 0x354038u: goto label_354038;
        case 0x35403cu: goto label_35403c;
        case 0x354040u: goto label_354040;
        case 0x354044u: goto label_354044;
        case 0x354048u: goto label_354048;
        case 0x35404cu: goto label_35404c;
        case 0x354050u: goto label_354050;
        case 0x354054u: goto label_354054;
        case 0x354058u: goto label_354058;
        case 0x35405cu: goto label_35405c;
        case 0x354060u: goto label_354060;
        case 0x354064u: goto label_354064;
        case 0x354068u: goto label_354068;
        case 0x35406cu: goto label_35406c;
        case 0x354070u: goto label_354070;
        case 0x354074u: goto label_354074;
        case 0x354078u: goto label_354078;
        case 0x35407cu: goto label_35407c;
        case 0x354080u: goto label_354080;
        case 0x354084u: goto label_354084;
        case 0x354088u: goto label_354088;
        case 0x35408cu: goto label_35408c;
        case 0x354090u: goto label_354090;
        case 0x354094u: goto label_354094;
        case 0x354098u: goto label_354098;
        case 0x35409cu: goto label_35409c;
        case 0x3540a0u: goto label_3540a0;
        case 0x3540a4u: goto label_3540a4;
        case 0x3540a8u: goto label_3540a8;
        case 0x3540acu: goto label_3540ac;
        case 0x3540b0u: goto label_3540b0;
        case 0x3540b4u: goto label_3540b4;
        case 0x3540b8u: goto label_3540b8;
        case 0x3540bcu: goto label_3540bc;
        case 0x3540c0u: goto label_3540c0;
        case 0x3540c4u: goto label_3540c4;
        case 0x3540c8u: goto label_3540c8;
        case 0x3540ccu: goto label_3540cc;
        case 0x3540d0u: goto label_3540d0;
        case 0x3540d4u: goto label_3540d4;
        case 0x3540d8u: goto label_3540d8;
        case 0x3540dcu: goto label_3540dc;
        case 0x3540e0u: goto label_3540e0;
        case 0x3540e4u: goto label_3540e4;
        case 0x3540e8u: goto label_3540e8;
        case 0x3540ecu: goto label_3540ec;
        case 0x3540f0u: goto label_3540f0;
        case 0x3540f4u: goto label_3540f4;
        case 0x3540f8u: goto label_3540f8;
        case 0x3540fcu: goto label_3540fc;
        case 0x354100u: goto label_354100;
        case 0x354104u: goto label_354104;
        case 0x354108u: goto label_354108;
        case 0x35410cu: goto label_35410c;
        case 0x354110u: goto label_354110;
        case 0x354114u: goto label_354114;
        case 0x354118u: goto label_354118;
        case 0x35411cu: goto label_35411c;
        case 0x354120u: goto label_354120;
        case 0x354124u: goto label_354124;
        case 0x354128u: goto label_354128;
        case 0x35412cu: goto label_35412c;
        case 0x354130u: goto label_354130;
        case 0x354134u: goto label_354134;
        case 0x354138u: goto label_354138;
        case 0x35413cu: goto label_35413c;
        case 0x354140u: goto label_354140;
        case 0x354144u: goto label_354144;
        case 0x354148u: goto label_354148;
        case 0x35414cu: goto label_35414c;
        case 0x354150u: goto label_354150;
        case 0x354154u: goto label_354154;
        case 0x354158u: goto label_354158;
        case 0x35415cu: goto label_35415c;
        case 0x354160u: goto label_354160;
        case 0x354164u: goto label_354164;
        case 0x354168u: goto label_354168;
        case 0x35416cu: goto label_35416c;
        case 0x354170u: goto label_354170;
        case 0x354174u: goto label_354174;
        case 0x354178u: goto label_354178;
        case 0x35417cu: goto label_35417c;
        case 0x354180u: goto label_354180;
        case 0x354184u: goto label_354184;
        case 0x354188u: goto label_354188;
        case 0x35418cu: goto label_35418c;
        case 0x354190u: goto label_354190;
        case 0x354194u: goto label_354194;
        case 0x354198u: goto label_354198;
        case 0x35419cu: goto label_35419c;
        case 0x3541a0u: goto label_3541a0;
        case 0x3541a4u: goto label_3541a4;
        case 0x3541a8u: goto label_3541a8;
        case 0x3541acu: goto label_3541ac;
        case 0x3541b0u: goto label_3541b0;
        case 0x3541b4u: goto label_3541b4;
        case 0x3541b8u: goto label_3541b8;
        case 0x3541bcu: goto label_3541bc;
        case 0x3541c0u: goto label_3541c0;
        case 0x3541c4u: goto label_3541c4;
        case 0x3541c8u: goto label_3541c8;
        case 0x3541ccu: goto label_3541cc;
        case 0x3541d0u: goto label_3541d0;
        case 0x3541d4u: goto label_3541d4;
        case 0x3541d8u: goto label_3541d8;
        case 0x3541dcu: goto label_3541dc;
        case 0x3541e0u: goto label_3541e0;
        case 0x3541e4u: goto label_3541e4;
        case 0x3541e8u: goto label_3541e8;
        case 0x3541ecu: goto label_3541ec;
        case 0x3541f0u: goto label_3541f0;
        case 0x3541f4u: goto label_3541f4;
        case 0x3541f8u: goto label_3541f8;
        case 0x3541fcu: goto label_3541fc;
        case 0x354200u: goto label_354200;
        case 0x354204u: goto label_354204;
        case 0x354208u: goto label_354208;
        case 0x35420cu: goto label_35420c;
        case 0x354210u: goto label_354210;
        case 0x354214u: goto label_354214;
        case 0x354218u: goto label_354218;
        case 0x35421cu: goto label_35421c;
        case 0x354220u: goto label_354220;
        case 0x354224u: goto label_354224;
        case 0x354228u: goto label_354228;
        case 0x35422cu: goto label_35422c;
        case 0x354230u: goto label_354230;
        case 0x354234u: goto label_354234;
        case 0x354238u: goto label_354238;
        case 0x35423cu: goto label_35423c;
        case 0x354240u: goto label_354240;
        case 0x354244u: goto label_354244;
        case 0x354248u: goto label_354248;
        case 0x35424cu: goto label_35424c;
        case 0x354250u: goto label_354250;
        case 0x354254u: goto label_354254;
        case 0x354258u: goto label_354258;
        case 0x35425cu: goto label_35425c;
        case 0x354260u: goto label_354260;
        case 0x354264u: goto label_354264;
        case 0x354268u: goto label_354268;
        case 0x35426cu: goto label_35426c;
        case 0x354270u: goto label_354270;
        case 0x354274u: goto label_354274;
        case 0x354278u: goto label_354278;
        case 0x35427cu: goto label_35427c;
        case 0x354280u: goto label_354280;
        case 0x354284u: goto label_354284;
        case 0x354288u: goto label_354288;
        case 0x35428cu: goto label_35428c;
        case 0x354290u: goto label_354290;
        case 0x354294u: goto label_354294;
        case 0x354298u: goto label_354298;
        case 0x35429cu: goto label_35429c;
        case 0x3542a0u: goto label_3542a0;
        case 0x3542a4u: goto label_3542a4;
        case 0x3542a8u: goto label_3542a8;
        case 0x3542acu: goto label_3542ac;
        case 0x3542b0u: goto label_3542b0;
        case 0x3542b4u: goto label_3542b4;
        case 0x3542b8u: goto label_3542b8;
        case 0x3542bcu: goto label_3542bc;
        case 0x3542c0u: goto label_3542c0;
        case 0x3542c4u: goto label_3542c4;
        case 0x3542c8u: goto label_3542c8;
        case 0x3542ccu: goto label_3542cc;
        case 0x3542d0u: goto label_3542d0;
        case 0x3542d4u: goto label_3542d4;
        case 0x3542d8u: goto label_3542d8;
        case 0x3542dcu: goto label_3542dc;
        case 0x3542e0u: goto label_3542e0;
        case 0x3542e4u: goto label_3542e4;
        case 0x3542e8u: goto label_3542e8;
        case 0x3542ecu: goto label_3542ec;
        case 0x3542f0u: goto label_3542f0;
        case 0x3542f4u: goto label_3542f4;
        case 0x3542f8u: goto label_3542f8;
        case 0x3542fcu: goto label_3542fc;
        case 0x354300u: goto label_354300;
        case 0x354304u: goto label_354304;
        case 0x354308u: goto label_354308;
        case 0x35430cu: goto label_35430c;
        case 0x354310u: goto label_354310;
        case 0x354314u: goto label_354314;
        case 0x354318u: goto label_354318;
        case 0x35431cu: goto label_35431c;
        case 0x354320u: goto label_354320;
        case 0x354324u: goto label_354324;
        case 0x354328u: goto label_354328;
        case 0x35432cu: goto label_35432c;
        case 0x354330u: goto label_354330;
        case 0x354334u: goto label_354334;
        case 0x354338u: goto label_354338;
        case 0x35433cu: goto label_35433c;
        case 0x354340u: goto label_354340;
        case 0x354344u: goto label_354344;
        case 0x354348u: goto label_354348;
        case 0x35434cu: goto label_35434c;
        case 0x354350u: goto label_354350;
        case 0x354354u: goto label_354354;
        case 0x354358u: goto label_354358;
        case 0x35435cu: goto label_35435c;
        case 0x354360u: goto label_354360;
        case 0x354364u: goto label_354364;
        case 0x354368u: goto label_354368;
        case 0x35436cu: goto label_35436c;
        case 0x354370u: goto label_354370;
        case 0x354374u: goto label_354374;
        case 0x354378u: goto label_354378;
        case 0x35437cu: goto label_35437c;
        case 0x354380u: goto label_354380;
        case 0x354384u: goto label_354384;
        case 0x354388u: goto label_354388;
        case 0x35438cu: goto label_35438c;
        case 0x354390u: goto label_354390;
        case 0x354394u: goto label_354394;
        case 0x354398u: goto label_354398;
        case 0x35439cu: goto label_35439c;
        case 0x3543a0u: goto label_3543a0;
        case 0x3543a4u: goto label_3543a4;
        case 0x3543a8u: goto label_3543a8;
        case 0x3543acu: goto label_3543ac;
        case 0x3543b0u: goto label_3543b0;
        case 0x3543b4u: goto label_3543b4;
        case 0x3543b8u: goto label_3543b8;
        case 0x3543bcu: goto label_3543bc;
        case 0x3543c0u: goto label_3543c0;
        case 0x3543c4u: goto label_3543c4;
        case 0x3543c8u: goto label_3543c8;
        case 0x3543ccu: goto label_3543cc;
        case 0x3543d0u: goto label_3543d0;
        case 0x3543d4u: goto label_3543d4;
        case 0x3543d8u: goto label_3543d8;
        case 0x3543dcu: goto label_3543dc;
        case 0x3543e0u: goto label_3543e0;
        case 0x3543e4u: goto label_3543e4;
        case 0x3543e8u: goto label_3543e8;
        case 0x3543ecu: goto label_3543ec;
        case 0x3543f0u: goto label_3543f0;
        case 0x3543f4u: goto label_3543f4;
        case 0x3543f8u: goto label_3543f8;
        case 0x3543fcu: goto label_3543fc;
        case 0x354400u: goto label_354400;
        case 0x354404u: goto label_354404;
        case 0x354408u: goto label_354408;
        case 0x35440cu: goto label_35440c;
        case 0x354410u: goto label_354410;
        case 0x354414u: goto label_354414;
        case 0x354418u: goto label_354418;
        case 0x35441cu: goto label_35441c;
        case 0x354420u: goto label_354420;
        case 0x354424u: goto label_354424;
        case 0x354428u: goto label_354428;
        case 0x35442cu: goto label_35442c;
        case 0x354430u: goto label_354430;
        case 0x354434u: goto label_354434;
        case 0x354438u: goto label_354438;
        case 0x35443cu: goto label_35443c;
        case 0x354440u: goto label_354440;
        case 0x354444u: goto label_354444;
        case 0x354448u: goto label_354448;
        case 0x35444cu: goto label_35444c;
        case 0x354450u: goto label_354450;
        case 0x354454u: goto label_354454;
        case 0x354458u: goto label_354458;
        case 0x35445cu: goto label_35445c;
        case 0x354460u: goto label_354460;
        case 0x354464u: goto label_354464;
        case 0x354468u: goto label_354468;
        case 0x35446cu: goto label_35446c;
        case 0x354470u: goto label_354470;
        case 0x354474u: goto label_354474;
        case 0x354478u: goto label_354478;
        case 0x35447cu: goto label_35447c;
        case 0x354480u: goto label_354480;
        case 0x354484u: goto label_354484;
        case 0x354488u: goto label_354488;
        case 0x35448cu: goto label_35448c;
        case 0x354490u: goto label_354490;
        case 0x354494u: goto label_354494;
        case 0x354498u: goto label_354498;
        case 0x35449cu: goto label_35449c;
        case 0x3544a0u: goto label_3544a0;
        case 0x3544a4u: goto label_3544a4;
        case 0x3544a8u: goto label_3544a8;
        case 0x3544acu: goto label_3544ac;
        case 0x3544b0u: goto label_3544b0;
        case 0x3544b4u: goto label_3544b4;
        case 0x3544b8u: goto label_3544b8;
        case 0x3544bcu: goto label_3544bc;
        case 0x3544c0u: goto label_3544c0;
        case 0x3544c4u: goto label_3544c4;
        case 0x3544c8u: goto label_3544c8;
        case 0x3544ccu: goto label_3544cc;
        case 0x3544d0u: goto label_3544d0;
        case 0x3544d4u: goto label_3544d4;
        case 0x3544d8u: goto label_3544d8;
        case 0x3544dcu: goto label_3544dc;
        case 0x3544e0u: goto label_3544e0;
        case 0x3544e4u: goto label_3544e4;
        case 0x3544e8u: goto label_3544e8;
        case 0x3544ecu: goto label_3544ec;
        case 0x3544f0u: goto label_3544f0;
        case 0x3544f4u: goto label_3544f4;
        case 0x3544f8u: goto label_3544f8;
        case 0x3544fcu: goto label_3544fc;
        case 0x354500u: goto label_354500;
        case 0x354504u: goto label_354504;
        case 0x354508u: goto label_354508;
        case 0x35450cu: goto label_35450c;
        case 0x354510u: goto label_354510;
        case 0x354514u: goto label_354514;
        case 0x354518u: goto label_354518;
        case 0x35451cu: goto label_35451c;
        case 0x354520u: goto label_354520;
        case 0x354524u: goto label_354524;
        case 0x354528u: goto label_354528;
        case 0x35452cu: goto label_35452c;
        case 0x354530u: goto label_354530;
        case 0x354534u: goto label_354534;
        case 0x354538u: goto label_354538;
        case 0x35453cu: goto label_35453c;
        case 0x354540u: goto label_354540;
        case 0x354544u: goto label_354544;
        case 0x354548u: goto label_354548;
        case 0x35454cu: goto label_35454c;
        case 0x354550u: goto label_354550;
        case 0x354554u: goto label_354554;
        case 0x354558u: goto label_354558;
        case 0x35455cu: goto label_35455c;
        case 0x354560u: goto label_354560;
        case 0x354564u: goto label_354564;
        case 0x354568u: goto label_354568;
        case 0x35456cu: goto label_35456c;
        case 0x354570u: goto label_354570;
        case 0x354574u: goto label_354574;
        case 0x354578u: goto label_354578;
        case 0x35457cu: goto label_35457c;
        case 0x354580u: goto label_354580;
        case 0x354584u: goto label_354584;
        case 0x354588u: goto label_354588;
        case 0x35458cu: goto label_35458c;
        case 0x354590u: goto label_354590;
        case 0x354594u: goto label_354594;
        case 0x354598u: goto label_354598;
        case 0x35459cu: goto label_35459c;
        case 0x3545a0u: goto label_3545a0;
        case 0x3545a4u: goto label_3545a4;
        case 0x3545a8u: goto label_3545a8;
        case 0x3545acu: goto label_3545ac;
        case 0x3545b0u: goto label_3545b0;
        case 0x3545b4u: goto label_3545b4;
        case 0x3545b8u: goto label_3545b8;
        case 0x3545bcu: goto label_3545bc;
        case 0x3545c0u: goto label_3545c0;
        case 0x3545c4u: goto label_3545c4;
        case 0x3545c8u: goto label_3545c8;
        case 0x3545ccu: goto label_3545cc;
        case 0x3545d0u: goto label_3545d0;
        case 0x3545d4u: goto label_3545d4;
        case 0x3545d8u: goto label_3545d8;
        case 0x3545dcu: goto label_3545dc;
        case 0x3545e0u: goto label_3545e0;
        case 0x3545e4u: goto label_3545e4;
        case 0x3545e8u: goto label_3545e8;
        case 0x3545ecu: goto label_3545ec;
        case 0x3545f0u: goto label_3545f0;
        case 0x3545f4u: goto label_3545f4;
        case 0x3545f8u: goto label_3545f8;
        case 0x3545fcu: goto label_3545fc;
        case 0x354600u: goto label_354600;
        case 0x354604u: goto label_354604;
        case 0x354608u: goto label_354608;
        case 0x35460cu: goto label_35460c;
        case 0x354610u: goto label_354610;
        case 0x354614u: goto label_354614;
        case 0x354618u: goto label_354618;
        case 0x35461cu: goto label_35461c;
        case 0x354620u: goto label_354620;
        case 0x354624u: goto label_354624;
        case 0x354628u: goto label_354628;
        case 0x35462cu: goto label_35462c;
        case 0x354630u: goto label_354630;
        case 0x354634u: goto label_354634;
        case 0x354638u: goto label_354638;
        case 0x35463cu: goto label_35463c;
        case 0x354640u: goto label_354640;
        case 0x354644u: goto label_354644;
        case 0x354648u: goto label_354648;
        case 0x35464cu: goto label_35464c;
        case 0x354650u: goto label_354650;
        case 0x354654u: goto label_354654;
        case 0x354658u: goto label_354658;
        case 0x35465cu: goto label_35465c;
        case 0x354660u: goto label_354660;
        case 0x354664u: goto label_354664;
        case 0x354668u: goto label_354668;
        case 0x35466cu: goto label_35466c;
        case 0x354670u: goto label_354670;
        case 0x354674u: goto label_354674;
        case 0x354678u: goto label_354678;
        case 0x35467cu: goto label_35467c;
        case 0x354680u: goto label_354680;
        case 0x354684u: goto label_354684;
        case 0x354688u: goto label_354688;
        case 0x35468cu: goto label_35468c;
        case 0x354690u: goto label_354690;
        case 0x354694u: goto label_354694;
        case 0x354698u: goto label_354698;
        case 0x35469cu: goto label_35469c;
        case 0x3546a0u: goto label_3546a0;
        case 0x3546a4u: goto label_3546a4;
        case 0x3546a8u: goto label_3546a8;
        case 0x3546acu: goto label_3546ac;
        case 0x3546b0u: goto label_3546b0;
        case 0x3546b4u: goto label_3546b4;
        case 0x3546b8u: goto label_3546b8;
        case 0x3546bcu: goto label_3546bc;
        case 0x3546c0u: goto label_3546c0;
        case 0x3546c4u: goto label_3546c4;
        case 0x3546c8u: goto label_3546c8;
        case 0x3546ccu: goto label_3546cc;
        case 0x3546d0u: goto label_3546d0;
        case 0x3546d4u: goto label_3546d4;
        case 0x3546d8u: goto label_3546d8;
        case 0x3546dcu: goto label_3546dc;
        case 0x3546e0u: goto label_3546e0;
        case 0x3546e4u: goto label_3546e4;
        case 0x3546e8u: goto label_3546e8;
        case 0x3546ecu: goto label_3546ec;
        case 0x3546f0u: goto label_3546f0;
        case 0x3546f4u: goto label_3546f4;
        case 0x3546f8u: goto label_3546f8;
        case 0x3546fcu: goto label_3546fc;
        case 0x354700u: goto label_354700;
        case 0x354704u: goto label_354704;
        case 0x354708u: goto label_354708;
        case 0x35470cu: goto label_35470c;
        case 0x354710u: goto label_354710;
        case 0x354714u: goto label_354714;
        case 0x354718u: goto label_354718;
        case 0x35471cu: goto label_35471c;
        case 0x354720u: goto label_354720;
        case 0x354724u: goto label_354724;
        case 0x354728u: goto label_354728;
        case 0x35472cu: goto label_35472c;
        case 0x354730u: goto label_354730;
        case 0x354734u: goto label_354734;
        case 0x354738u: goto label_354738;
        case 0x35473cu: goto label_35473c;
        case 0x354740u: goto label_354740;
        case 0x354744u: goto label_354744;
        case 0x354748u: goto label_354748;
        case 0x35474cu: goto label_35474c;
        case 0x354750u: goto label_354750;
        case 0x354754u: goto label_354754;
        case 0x354758u: goto label_354758;
        case 0x35475cu: goto label_35475c;
        case 0x354760u: goto label_354760;
        case 0x354764u: goto label_354764;
        case 0x354768u: goto label_354768;
        case 0x35476cu: goto label_35476c;
        case 0x354770u: goto label_354770;
        case 0x354774u: goto label_354774;
        case 0x354778u: goto label_354778;
        case 0x35477cu: goto label_35477c;
        case 0x354780u: goto label_354780;
        case 0x354784u: goto label_354784;
        case 0x354788u: goto label_354788;
        case 0x35478cu: goto label_35478c;
        case 0x354790u: goto label_354790;
        case 0x354794u: goto label_354794;
        case 0x354798u: goto label_354798;
        case 0x35479cu: goto label_35479c;
        case 0x3547a0u: goto label_3547a0;
        case 0x3547a4u: goto label_3547a4;
        case 0x3547a8u: goto label_3547a8;
        case 0x3547acu: goto label_3547ac;
        case 0x3547b0u: goto label_3547b0;
        case 0x3547b4u: goto label_3547b4;
        case 0x3547b8u: goto label_3547b8;
        case 0x3547bcu: goto label_3547bc;
        case 0x3547c0u: goto label_3547c0;
        case 0x3547c4u: goto label_3547c4;
        case 0x3547c8u: goto label_3547c8;
        case 0x3547ccu: goto label_3547cc;
        case 0x3547d0u: goto label_3547d0;
        case 0x3547d4u: goto label_3547d4;
        case 0x3547d8u: goto label_3547d8;
        case 0x3547dcu: goto label_3547dc;
        case 0x3547e0u: goto label_3547e0;
        case 0x3547e4u: goto label_3547e4;
        case 0x3547e8u: goto label_3547e8;
        case 0x3547ecu: goto label_3547ec;
        case 0x3547f0u: goto label_3547f0;
        case 0x3547f4u: goto label_3547f4;
        case 0x3547f8u: goto label_3547f8;
        case 0x3547fcu: goto label_3547fc;
        case 0x354800u: goto label_354800;
        case 0x354804u: goto label_354804;
        case 0x354808u: goto label_354808;
        case 0x35480cu: goto label_35480c;
        case 0x354810u: goto label_354810;
        case 0x354814u: goto label_354814;
        case 0x354818u: goto label_354818;
        case 0x35481cu: goto label_35481c;
        case 0x354820u: goto label_354820;
        case 0x354824u: goto label_354824;
        case 0x354828u: goto label_354828;
        case 0x35482cu: goto label_35482c;
        case 0x354830u: goto label_354830;
        case 0x354834u: goto label_354834;
        case 0x354838u: goto label_354838;
        case 0x35483cu: goto label_35483c;
        case 0x354840u: goto label_354840;
        case 0x354844u: goto label_354844;
        case 0x354848u: goto label_354848;
        case 0x35484cu: goto label_35484c;
        case 0x354850u: goto label_354850;
        case 0x354854u: goto label_354854;
        case 0x354858u: goto label_354858;
        case 0x35485cu: goto label_35485c;
        case 0x354860u: goto label_354860;
        case 0x354864u: goto label_354864;
        case 0x354868u: goto label_354868;
        case 0x35486cu: goto label_35486c;
        case 0x354870u: goto label_354870;
        case 0x354874u: goto label_354874;
        case 0x354878u: goto label_354878;
        case 0x35487cu: goto label_35487c;
        case 0x354880u: goto label_354880;
        case 0x354884u: goto label_354884;
        case 0x354888u: goto label_354888;
        case 0x35488cu: goto label_35488c;
        case 0x354890u: goto label_354890;
        case 0x354894u: goto label_354894;
        case 0x354898u: goto label_354898;
        case 0x35489cu: goto label_35489c;
        case 0x3548a0u: goto label_3548a0;
        case 0x3548a4u: goto label_3548a4;
        case 0x3548a8u: goto label_3548a8;
        case 0x3548acu: goto label_3548ac;
        case 0x3548b0u: goto label_3548b0;
        case 0x3548b4u: goto label_3548b4;
        case 0x3548b8u: goto label_3548b8;
        case 0x3548bcu: goto label_3548bc;
        case 0x3548c0u: goto label_3548c0;
        case 0x3548c4u: goto label_3548c4;
        case 0x3548c8u: goto label_3548c8;
        case 0x3548ccu: goto label_3548cc;
        case 0x3548d0u: goto label_3548d0;
        case 0x3548d4u: goto label_3548d4;
        case 0x3548d8u: goto label_3548d8;
        case 0x3548dcu: goto label_3548dc;
        case 0x3548e0u: goto label_3548e0;
        case 0x3548e4u: goto label_3548e4;
        case 0x3548e8u: goto label_3548e8;
        case 0x3548ecu: goto label_3548ec;
        case 0x3548f0u: goto label_3548f0;
        case 0x3548f4u: goto label_3548f4;
        case 0x3548f8u: goto label_3548f8;
        case 0x3548fcu: goto label_3548fc;
        case 0x354900u: goto label_354900;
        case 0x354904u: goto label_354904;
        case 0x354908u: goto label_354908;
        case 0x35490cu: goto label_35490c;
        case 0x354910u: goto label_354910;
        case 0x354914u: goto label_354914;
        case 0x354918u: goto label_354918;
        case 0x35491cu: goto label_35491c;
        case 0x354920u: goto label_354920;
        case 0x354924u: goto label_354924;
        case 0x354928u: goto label_354928;
        case 0x35492cu: goto label_35492c;
        case 0x354930u: goto label_354930;
        case 0x354934u: goto label_354934;
        case 0x354938u: goto label_354938;
        case 0x35493cu: goto label_35493c;
        case 0x354940u: goto label_354940;
        case 0x354944u: goto label_354944;
        case 0x354948u: goto label_354948;
        case 0x35494cu: goto label_35494c;
        case 0x354950u: goto label_354950;
        case 0x354954u: goto label_354954;
        case 0x354958u: goto label_354958;
        case 0x35495cu: goto label_35495c;
        case 0x354960u: goto label_354960;
        case 0x354964u: goto label_354964;
        case 0x354968u: goto label_354968;
        case 0x35496cu: goto label_35496c;
        case 0x354970u: goto label_354970;
        case 0x354974u: goto label_354974;
        case 0x354978u: goto label_354978;
        case 0x35497cu: goto label_35497c;
        case 0x354980u: goto label_354980;
        case 0x354984u: goto label_354984;
        case 0x354988u: goto label_354988;
        case 0x35498cu: goto label_35498c;
        case 0x354990u: goto label_354990;
        case 0x354994u: goto label_354994;
        case 0x354998u: goto label_354998;
        case 0x35499cu: goto label_35499c;
        case 0x3549a0u: goto label_3549a0;
        case 0x3549a4u: goto label_3549a4;
        case 0x3549a8u: goto label_3549a8;
        case 0x3549acu: goto label_3549ac;
        case 0x3549b0u: goto label_3549b0;
        case 0x3549b4u: goto label_3549b4;
        case 0x3549b8u: goto label_3549b8;
        case 0x3549bcu: goto label_3549bc;
        case 0x3549c0u: goto label_3549c0;
        case 0x3549c4u: goto label_3549c4;
        case 0x3549c8u: goto label_3549c8;
        case 0x3549ccu: goto label_3549cc;
        case 0x3549d0u: goto label_3549d0;
        case 0x3549d4u: goto label_3549d4;
        case 0x3549d8u: goto label_3549d8;
        case 0x3549dcu: goto label_3549dc;
        case 0x3549e0u: goto label_3549e0;
        case 0x3549e4u: goto label_3549e4;
        case 0x3549e8u: goto label_3549e8;
        case 0x3549ecu: goto label_3549ec;
        case 0x3549f0u: goto label_3549f0;
        case 0x3549f4u: goto label_3549f4;
        case 0x3549f8u: goto label_3549f8;
        case 0x3549fcu: goto label_3549fc;
        case 0x354a00u: goto label_354a00;
        case 0x354a04u: goto label_354a04;
        case 0x354a08u: goto label_354a08;
        case 0x354a0cu: goto label_354a0c;
        case 0x354a10u: goto label_354a10;
        case 0x354a14u: goto label_354a14;
        case 0x354a18u: goto label_354a18;
        case 0x354a1cu: goto label_354a1c;
        case 0x354a20u: goto label_354a20;
        case 0x354a24u: goto label_354a24;
        case 0x354a28u: goto label_354a28;
        case 0x354a2cu: goto label_354a2c;
        case 0x354a30u: goto label_354a30;
        case 0x354a34u: goto label_354a34;
        case 0x354a38u: goto label_354a38;
        case 0x354a3cu: goto label_354a3c;
        case 0x354a40u: goto label_354a40;
        case 0x354a44u: goto label_354a44;
        case 0x354a48u: goto label_354a48;
        case 0x354a4cu: goto label_354a4c;
        case 0x354a50u: goto label_354a50;
        case 0x354a54u: goto label_354a54;
        case 0x354a58u: goto label_354a58;
        case 0x354a5cu: goto label_354a5c;
        case 0x354a60u: goto label_354a60;
        case 0x354a64u: goto label_354a64;
        case 0x354a68u: goto label_354a68;
        case 0x354a6cu: goto label_354a6c;
        case 0x354a70u: goto label_354a70;
        case 0x354a74u: goto label_354a74;
        case 0x354a78u: goto label_354a78;
        case 0x354a7cu: goto label_354a7c;
        case 0x354a80u: goto label_354a80;
        case 0x354a84u: goto label_354a84;
        case 0x354a88u: goto label_354a88;
        case 0x354a8cu: goto label_354a8c;
        case 0x354a90u: goto label_354a90;
        case 0x354a94u: goto label_354a94;
        case 0x354a98u: goto label_354a98;
        case 0x354a9cu: goto label_354a9c;
        case 0x354aa0u: goto label_354aa0;
        case 0x354aa4u: goto label_354aa4;
        case 0x354aa8u: goto label_354aa8;
        case 0x354aacu: goto label_354aac;
        case 0x354ab0u: goto label_354ab0;
        case 0x354ab4u: goto label_354ab4;
        case 0x354ab8u: goto label_354ab8;
        case 0x354abcu: goto label_354abc;
        case 0x354ac0u: goto label_354ac0;
        case 0x354ac4u: goto label_354ac4;
        case 0x354ac8u: goto label_354ac8;
        case 0x354accu: goto label_354acc;
        case 0x354ad0u: goto label_354ad0;
        case 0x354ad4u: goto label_354ad4;
        case 0x354ad8u: goto label_354ad8;
        case 0x354adcu: goto label_354adc;
        case 0x354ae0u: goto label_354ae0;
        case 0x354ae4u: goto label_354ae4;
        case 0x354ae8u: goto label_354ae8;
        case 0x354aecu: goto label_354aec;
        case 0x354af0u: goto label_354af0;
        case 0x354af4u: goto label_354af4;
        case 0x354af8u: goto label_354af8;
        case 0x354afcu: goto label_354afc;
        case 0x354b00u: goto label_354b00;
        case 0x354b04u: goto label_354b04;
        case 0x354b08u: goto label_354b08;
        case 0x354b0cu: goto label_354b0c;
        case 0x354b10u: goto label_354b10;
        case 0x354b14u: goto label_354b14;
        case 0x354b18u: goto label_354b18;
        case 0x354b1cu: goto label_354b1c;
        case 0x354b20u: goto label_354b20;
        case 0x354b24u: goto label_354b24;
        case 0x354b28u: goto label_354b28;
        case 0x354b2cu: goto label_354b2c;
        case 0x354b30u: goto label_354b30;
        case 0x354b34u: goto label_354b34;
        case 0x354b38u: goto label_354b38;
        case 0x354b3cu: goto label_354b3c;
        case 0x354b40u: goto label_354b40;
        case 0x354b44u: goto label_354b44;
        case 0x354b48u: goto label_354b48;
        case 0x354b4cu: goto label_354b4c;
        case 0x354b50u: goto label_354b50;
        case 0x354b54u: goto label_354b54;
        case 0x354b58u: goto label_354b58;
        case 0x354b5cu: goto label_354b5c;
        case 0x354b60u: goto label_354b60;
        case 0x354b64u: goto label_354b64;
        case 0x354b68u: goto label_354b68;
        case 0x354b6cu: goto label_354b6c;
        case 0x354b70u: goto label_354b70;
        case 0x354b74u: goto label_354b74;
        case 0x354b78u: goto label_354b78;
        case 0x354b7cu: goto label_354b7c;
        case 0x354b80u: goto label_354b80;
        case 0x354b84u: goto label_354b84;
        case 0x354b88u: goto label_354b88;
        case 0x354b8cu: goto label_354b8c;
        case 0x354b90u: goto label_354b90;
        case 0x354b94u: goto label_354b94;
        case 0x354b98u: goto label_354b98;
        case 0x354b9cu: goto label_354b9c;
        case 0x354ba0u: goto label_354ba0;
        case 0x354ba4u: goto label_354ba4;
        case 0x354ba8u: goto label_354ba8;
        case 0x354bacu: goto label_354bac;
        default: break;
    }

    ctx->pc = 0x353d60u;

label_353d60:
    // 0x353d60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x353d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_353d64:
    // 0x353d64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x353d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_353d68:
    // 0x353d68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x353d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_353d6c:
    // 0x353d6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x353d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_353d70:
    // 0x353d70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x353d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_353d74:
    // 0x353d74: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x353d74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_353d78:
    // 0x353d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x353d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_353d7c:
    // 0x353d7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x353d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_353d80:
    // 0x353d80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_353d84:
    // 0x353d84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x353d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_353d88:
    // 0x353d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x353d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_353d8c:
    // 0x353d8c: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x353d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_353d90:
    // 0x353d90: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x353d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_353d94:
    // 0x353d94: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x353d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_353d98:
    // 0x353d98: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_353d9c:
    if (ctx->pc == 0x353D9Cu) {
        ctx->pc = 0x353D9Cu;
            // 0x353d9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353DA0u;
        goto label_353da0;
    }
    ctx->pc = 0x353D98u;
    {
        const bool branch_taken_0x353d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x353D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353D98u;
            // 0x353d9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d98) {
            ctx->pc = 0x353E10u;
            goto label_353e10;
        }
    }
    ctx->pc = 0x353DA0u;
label_353da0:
    // 0x353da0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x353da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_353da4:
    // 0x353da4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_353da8:
    if (ctx->pc == 0x353DA8u) {
        ctx->pc = 0x353DACu;
        goto label_353dac;
    }
    ctx->pc = 0x353DA4u;
    {
        const bool branch_taken_0x353da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x353da4) {
            ctx->pc = 0x353DB4u;
            goto label_353db4;
        }
    }
    ctx->pc = 0x353DACu;
label_353dac:
    // 0x353dac: 0x10000098  b           . + 4 + (0x98 << 2)
label_353db0:
    if (ctx->pc == 0x353DB0u) {
        ctx->pc = 0x353DB4u;
        goto label_353db4;
    }
    ctx->pc = 0x353DACu;
    {
        const bool branch_taken_0x353dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353dac) {
            ctx->pc = 0x354010u;
            goto label_354010;
        }
    }
    ctx->pc = 0x353DB4u;
label_353db4:
    // 0x353db4: 0x56400132  bnel        $s2, $zero, . + 4 + (0x132 << 2)
label_353db8:
    if (ctx->pc == 0x353DB8u) {
        ctx->pc = 0x353DB8u;
            // 0x353db8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x353DBCu;
        goto label_353dbc;
    }
    ctx->pc = 0x353DB4u;
    {
        const bool branch_taken_0x353db4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x353db4) {
            ctx->pc = 0x353DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353DB4u;
            // 0x353db8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354280u;
            goto label_354280;
        }
    }
    ctx->pc = 0x353DBCu;
label_353dbc:
    // 0x353dbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353dc0:
    // 0x353dc0: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x353dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_353dc4:
    // 0x353dc4: 0xc074740  jal         func_1D1D00
label_353dc8:
    if (ctx->pc == 0x353DC8u) {
        ctx->pc = 0x353DC8u;
            // 0x353dc8: 0x82710e3f  lb          $s1, 0xE3F($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3647)));
        ctx->pc = 0x353DCCu;
        goto label_353dcc;
    }
    ctx->pc = 0x353DC4u;
    SET_GPR_U32(ctx, 31, 0x353DCCu);
    ctx->pc = 0x353DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353DC4u;
            // 0x353dc8: 0x82710e3f  lb          $s1, 0xE3F($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3647)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353DCCu; }
        if (ctx->pc != 0x353DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353DCCu; }
        if (ctx->pc != 0x353DCCu) { return; }
    }
    ctx->pc = 0x353DCCu;
label_353dcc:
    // 0x353dcc: 0x11263c  dsll32      $a0, $s1, 24
    ctx->pc = 0x353dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 24));
label_353dd0:
    // 0x353dd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x353dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_353dd4:
    // 0x353dd4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x353dd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_353dd8:
    // 0x353dd8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_353ddc:
    if (ctx->pc == 0x353DDCu) {
        ctx->pc = 0x353DDCu;
            // 0x353ddc: 0x30520001  andi        $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x353DE0u;
        goto label_353de0;
    }
    ctx->pc = 0x353DD8u;
    {
        const bool branch_taken_0x353dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x353DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353DD8u;
            // 0x353ddc: 0x30520001  andi        $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353dd8) {
            ctx->pc = 0x353E08u;
            goto label_353e08;
        }
    }
    ctx->pc = 0x353DE0u;
label_353de0:
    // 0x353de0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x353de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_353de4:
    // 0x353de4: 0x50820125  beql        $a0, $v0, . + 4 + (0x125 << 2)
label_353de8:
    if (ctx->pc == 0x353DE8u) {
        ctx->pc = 0x353DE8u;
            // 0x353de8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x353DECu;
        goto label_353dec;
    }
    ctx->pc = 0x353DE4u;
    {
        const bool branch_taken_0x353de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x353de4) {
            ctx->pc = 0x353DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353DE4u;
            // 0x353de8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x353DECu;
label_353dec:
    // 0x353dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353df0:
    // 0x353df0: 0x50820122  beql        $a0, $v0, . + 4 + (0x122 << 2)
label_353df4:
    if (ctx->pc == 0x353DF4u) {
        ctx->pc = 0x353DF4u;
            // 0x353df4: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->pc = 0x353DF8u;
        goto label_353df8;
    }
    ctx->pc = 0x353DF0u;
    {
        const bool branch_taken_0x353df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x353df0) {
            ctx->pc = 0x353DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353DF0u;
            // 0x353df4: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x353DF8u;
label_353df8:
    // 0x353df8: 0x50800120  beql        $a0, $zero, . + 4 + (0x120 << 2)
label_353dfc:
    if (ctx->pc == 0x353DFCu) {
        ctx->pc = 0x353DFCu;
            // 0x353dfc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353E00u;
        goto label_353e00;
    }
    ctx->pc = 0x353DF8u;
    {
        const bool branch_taken_0x353df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x353df8) {
            ctx->pc = 0x353DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353DF8u;
            // 0x353dfc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x353E00u;
label_353e00:
    // 0x353e00: 0x1000011e  b           . + 4 + (0x11E << 2)
label_353e04:
    if (ctx->pc == 0x353E04u) {
        ctx->pc = 0x353E08u;
        goto label_353e08;
    }
    ctx->pc = 0x353E00u;
    {
        const bool branch_taken_0x353e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353e00) {
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x353E08u;
label_353e08:
    // 0x353e08: 0x1000011c  b           . + 4 + (0x11C << 2)
label_353e0c:
    if (ctx->pc == 0x353E0Cu) {
        ctx->pc = 0x353E0Cu;
            // 0x353e0c: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x353E10u;
        goto label_353e10;
    }
    ctx->pc = 0x353E08u;
    {
        const bool branch_taken_0x353e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353E08u;
            // 0x353e0c: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e08) {
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x353E10u;
label_353e10:
    // 0x353e10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_353e14:
    // 0x353e14: 0x1640003c  bnez        $s2, . + 4 + (0x3C << 2)
label_353e18:
    if (ctx->pc == 0x353E18u) {
        ctx->pc = 0x353E18u;
            // 0x353e18: 0x8c500e80  lw          $s0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x353E1Cu;
        goto label_353e1c;
    }
    ctx->pc = 0x353E14u;
    {
        const bool branch_taken_0x353e14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x353E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353E14u;
            // 0x353e18: 0x8c500e80  lw          $s0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e14) {
            ctx->pc = 0x353F08u;
            goto label_353f08;
        }
    }
    ctx->pc = 0x353E1Cu;
label_353e1c:
    // 0x353e1c: 0x8e070cc0  lw          $a3, 0xCC0($s0)
    ctx->pc = 0x353e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3264)));
label_353e20:
    // 0x353e20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353e24:
    // 0x353e24: 0x8e030cc4  lw          $v1, 0xCC4($s0)
    ctx->pc = 0x353e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3268)));
label_353e28:
    // 0x353e28: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x353e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_353e2c:
    // 0x353e2c: 0x82710e3f  lb          $s1, 0xE3F($s3)
    ctx->pc = 0x353e2cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3647)));
label_353e30:
    // 0x353e30: 0x24a54130  addiu       $a1, $a1, 0x4130
    ctx->pc = 0x353e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16688));
label_353e34:
    // 0x353e34: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x353e34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_353e38:
    // 0x353e38: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x353e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_353e3c:
    // 0x353e3c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x353e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_353e40:
    // 0x353e40: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x353e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_353e44:
    // 0x353e44: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x353e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_353e48:
    // 0x353e48: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x353e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_353e4c:
    // 0x353e4c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x353e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_353e50:
    // 0x353e50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x353e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_353e54:
    // 0x353e54: 0xc074740  jal         func_1D1D00
label_353e58:
    if (ctx->pc == 0x353E58u) {
        ctx->pc = 0x353E58u;
            // 0x353e58: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x353E5Cu;
        goto label_353e5c;
    }
    ctx->pc = 0x353E54u;
    SET_GPR_U32(ctx, 31, 0x353E5Cu);
    ctx->pc = 0x353E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353E54u;
            // 0x353e58: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353E5Cu; }
        if (ctx->pc != 0x353E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353E5Cu; }
        if (ctx->pc != 0x353E5Cu) { return; }
    }
    ctx->pc = 0x353E5Cu;
label_353e5c:
    // 0x353e5c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x353e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_353e60:
    // 0x353e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353e64:
    // 0x353e64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x353e64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_353e68:
    // 0x353e68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353e6c:
    // 0x353e6c: 0x0  nop
    ctx->pc = 0x353e6cu;
    // NOP
label_353e70:
    // 0x353e70: 0x1010  mfhi        $v0
    ctx->pc = 0x353e70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_353e74:
    // 0x353e74: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x353e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_353e78:
    // 0x353e78: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x353e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_353e7c:
    // 0x353e7c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x353e7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_353e80:
    // 0x353e80: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x353e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_353e84:
    // 0x353e84: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x353e84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_353e88:
    // 0x353e88: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_353e8c:
    if (ctx->pc == 0x353E8Cu) {
        ctx->pc = 0x353E90u;
        goto label_353e90;
    }
    ctx->pc = 0x353E88u;
    {
        const bool branch_taken_0x353e88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353e88) {
            ctx->pc = 0x353EA0u;
            goto label_353ea0;
        }
    }
    ctx->pc = 0x353E90u;
label_353e90:
    // 0x353e90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x353e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_353e94:
    // 0x353e94: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x353e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_353e98:
    // 0x353e98: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_353e9c:
    if (ctx->pc == 0x353E9Cu) {
        ctx->pc = 0x353E9Cu;
            // 0x353e9c: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->pc = 0x353EA0u;
        goto label_353ea0;
    }
    ctx->pc = 0x353E98u;
    {
        const bool branch_taken_0x353e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353e98) {
            ctx->pc = 0x353E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353E98u;
            // 0x353e9c: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353E7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_353e7c;
        }
    }
    ctx->pc = 0x353EA0u;
label_353ea0:
    // 0x353ea0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x353ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_353ea4:
    // 0x353ea4: 0x244241f8  addiu       $v0, $v0, 0x41F8
    ctx->pc = 0x353ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16888));
label_353ea8:
    // 0x353ea8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x353ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_353eac:
    // 0x353eac: 0xc6610a7c  lwc1        $f1, 0xA7C($s3)
    ctx->pc = 0x353eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353eb0:
    // 0x353eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353eb4:
    // 0x353eb4: 0x0  nop
    ctx->pc = 0x353eb4u;
    // NOP
label_353eb8:
    // 0x353eb8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x353eb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_353ebc:
    // 0x353ebc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_353ec0:
    if (ctx->pc == 0x353EC0u) {
        ctx->pc = 0x353EC0u;
            // 0x353ec0: 0x90520000  lbu         $s2, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x353EC4u;
        goto label_353ec4;
    }
    ctx->pc = 0x353EBCu;
    {
        const bool branch_taken_0x353ebc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x353EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353EBCu;
            // 0x353ec0: 0x90520000  lbu         $s2, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ebc) {
            ctx->pc = 0x353EC8u;
            goto label_353ec8;
        }
    }
    ctx->pc = 0x353EC4u;
label_353ec4:
    // 0x353ec4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x353ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_353ec8:
    // 0x353ec8: 0xc660051c  lwc1        $f0, 0x51C($s3)
    ctx->pc = 0x353ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353ecc:
    // 0x353ecc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x353eccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_353ed0:
    // 0x353ed0: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_353ed4:
    if (ctx->pc == 0x353ED4u) {
        ctx->pc = 0x353ED4u;
            // 0x353ed4: 0x24120010  addiu       $s2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x353ED8u;
        goto label_353ed8;
    }
    ctx->pc = 0x353ED0u;
    {
        const bool branch_taken_0x353ed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x353ed0) {
            ctx->pc = 0x353ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353ED0u;
            // 0x353ed4: 0x24120010  addiu       $s2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353F08u;
            goto label_353f08;
        }
    }
    ctx->pc = 0x353ED8u;
label_353ed8:
    // 0x353ed8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_353edc:
    // 0x353edc: 0x8e640d98  lw          $a0, 0xD98($s3)
    ctx->pc = 0x353edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_353ee0:
    // 0x353ee0: 0x8c433fe8  lw          $v1, 0x3FE8($v0)
    ctx->pc = 0x353ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
label_353ee4:
    // 0x353ee4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x353ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_353ee8:
    // 0x353ee8: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x353ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_353eec:
    // 0x353eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353ef0:
    // 0x353ef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x353ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_353ef4:
    // 0x353ef4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x353ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_353ef8:
    // 0x353ef8: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x353ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_353efc:
    // 0x353efc: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_353f00:
    if (ctx->pc == 0x353F00u) {
        ctx->pc = 0x353F00u;
            // 0x353f00: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x353F04u;
        goto label_353f04;
    }
    ctx->pc = 0x353EFCu;
    {
        const bool branch_taken_0x353efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x353efc) {
            ctx->pc = 0x353F00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353EFCu;
            // 0x353f00: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353F0Cu;
            goto label_353f0c;
        }
    }
    ctx->pc = 0x353F04u;
label_353f04:
    // 0x353f04: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x353f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_353f08:
    // 0x353f08: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x353f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_353f0c:
    // 0x353f0c: 0x12420022  beq         $s2, $v0, . + 4 + (0x22 << 2)
label_353f10:
    if (ctx->pc == 0x353F10u) {
        ctx->pc = 0x353F14u;
        goto label_353f14;
    }
    ctx->pc = 0x353F0Cu;
    {
        const bool branch_taken_0x353f0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x353f0c) {
            ctx->pc = 0x353F98u;
            goto label_353f98;
        }
    }
    ctx->pc = 0x353F14u;
label_353f14:
    // 0x353f14: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x353f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_353f18:
    // 0x353f18: 0x52420003  beql        $s2, $v0, . + 4 + (0x3 << 2)
label_353f1c:
    if (ctx->pc == 0x353F1Cu) {
        ctx->pc = 0x353F1Cu;
            // 0x353f1c: 0x8e040cc0  lw          $a0, 0xCC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3264)));
        ctx->pc = 0x353F20u;
        goto label_353f20;
    }
    ctx->pc = 0x353F18u;
    {
        const bool branch_taken_0x353f18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x353f18) {
            ctx->pc = 0x353F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353F18u;
            // 0x353f1c: 0x8e040cc0  lw          $a0, 0xCC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353F28u;
            goto label_353f28;
        }
    }
    ctx->pc = 0x353F20u;
label_353f20:
    // 0x353f20: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_353f24:
    if (ctx->pc == 0x353F24u) {
        ctx->pc = 0x353F28u;
        goto label_353f28;
    }
    ctx->pc = 0x353F20u;
    {
        const bool branch_taken_0x353f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353f20) {
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x353F28u;
label_353f28:
    // 0x353f28: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x353f28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_353f2c:
    // 0x353f2c: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x353f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
label_353f30:
    // 0x353f30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_353f34:
    // 0x353f34: 0x24c641f0  addiu       $a2, $a2, 0x41F0
    ctx->pc = 0x353f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16880));
label_353f38:
    // 0x353f38: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x353f38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_353f3c:
    // 0x353f3c: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x353f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_353f40:
    // 0x353f40: 0x8c440cc8  lw          $a0, 0xCC8($v0)
    ctx->pc = 0x353f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
label_353f44:
    // 0x353f44: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x353f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_353f48:
    // 0x353f48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x353f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_353f4c:
    // 0x353f4c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x353f4cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_353f50:
    // 0x353f50: 0xc144628  jal         func_5118A0
label_353f54:
    if (ctx->pc == 0x353F54u) {
        ctx->pc = 0x353F54u;
            // 0x353f54: 0x8e650d98  lw          $a1, 0xD98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
        ctx->pc = 0x353F58u;
        goto label_353f58;
    }
    ctx->pc = 0x353F50u;
    SET_GPR_U32(ctx, 31, 0x353F58u);
    ctx->pc = 0x353F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353F50u;
            // 0x353f54: 0x8e650d98  lw          $a1, 0xD98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5118A0u;
    if (runtime->hasFunction(0x5118A0u)) {
        auto targetFn = runtime->lookupFunction(0x5118A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353F58u; }
        if (ctx->pc != 0x353F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005118A0_0x5118a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353F58u; }
        if (ctx->pc != 0x353F58u) { return; }
    }
    ctx->pc = 0x353F58u;
label_353f58:
    // 0x353f58: 0x504000c8  beql        $v0, $zero, . + 4 + (0xC8 << 2)
label_353f5c:
    if (ctx->pc == 0x353F5Cu) {
        ctx->pc = 0x353F5Cu;
            // 0x353f5c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x353F60u;
        goto label_353f60;
    }
    ctx->pc = 0x353F58u;
    {
        const bool branch_taken_0x353f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353f58) {
            ctx->pc = 0x353F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353F58u;
            // 0x353f5c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x353F60u;
label_353f60:
    // 0x353f60: 0x8e640d98  lw          $a0, 0xD98($s3)
    ctx->pc = 0x353f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_353f64:
    // 0x353f64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_353f68:
    // 0x353f68: 0x8c420cc0  lw          $v0, 0xCC0($v0)
    ctx->pc = 0x353f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
label_353f6c:
    // 0x353f6c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x353f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_353f70:
    // 0x353f70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x353f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_353f74:
    // 0x353f74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x353f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_353f78:
    // 0x353f78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x353f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_353f7c:
    // 0x353f7c: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x353f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_353f80:
    // 0x353f80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x353f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_353f84:
    // 0x353f84: 0x184000bd  blez        $v0, . + 4 + (0xBD << 2)
label_353f88:
    if (ctx->pc == 0x353F88u) {
        ctx->pc = 0x353F8Cu;
        goto label_353f8c;
    }
    ctx->pc = 0x353F84u;
    {
        const bool branch_taken_0x353f84 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x353f84) {
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x353F8Cu;
label_353f8c:
    // 0x353f8c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x353f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_353f90:
    // 0x353f90: 0x100000ba  b           . + 4 + (0xBA << 2)
label_353f94:
    if (ctx->pc == 0x353F94u) {
        ctx->pc = 0x353F98u;
        goto label_353f98;
    }
    ctx->pc = 0x353F90u;
    {
        const bool branch_taken_0x353f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353f90) {
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x353F98u;
label_353f98:
    // 0x353f98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_353f9c:
    // 0x353f9c: 0x8e650d98  lw          $a1, 0xD98($s3)
    ctx->pc = 0x353f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_353fa0:
    // 0x353fa0: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x353fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
label_353fa4:
    // 0x353fa4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x353fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_353fa8:
    // 0x353fa8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x353fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_353fac:
    // 0x353fac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x353facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_353fb0:
    // 0x353fb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x353fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_353fb4:
    // 0x353fb4: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x353fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_353fb8:
    // 0x353fb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x353fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_353fbc:
    // 0x353fbc: 0x5c4000af  bgtzl       $v0, . + 4 + (0xAF << 2)
label_353fc0:
    if (ctx->pc == 0x353FC0u) {
        ctx->pc = 0x353FC0u;
            // 0x353fc0: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x353FC4u;
        goto label_353fc4;
    }
    ctx->pc = 0x353FBCu;
    {
        const bool branch_taken_0x353fbc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x353fbc) {
            ctx->pc = 0x353FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353FBCu;
            // 0x353fc0: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x353FC4u;
label_353fc4:
    // 0x353fc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_353fc8:
    // 0x353fc8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x353fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_353fcc:
    // 0x353fcc: 0x8c460cc8  lw          $a2, 0xCC8($v0)
    ctx->pc = 0x353fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
label_353fd0:
    // 0x353fd0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x353fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_353fd4:
    // 0x353fd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x353fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_353fd8:
    // 0x353fd8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x353fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_353fdc:
    // 0x353fdc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x353fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_353fe0:
    // 0x353fe0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x353fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_353fe4:
    // 0x353fe4: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x353fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_353fe8:
    // 0x353fe8: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_353fec:
    if (ctx->pc == 0x353FECu) {
        ctx->pc = 0x353FF0u;
        goto label_353ff0;
    }
    ctx->pc = 0x353FE8u;
    {
        const bool branch_taken_0x353fe8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x353fe8) {
            ctx->pc = 0x354004u;
            goto label_354004;
        }
    }
    ctx->pc = 0x353FF0u;
label_353ff0:
    // 0x353ff0: 0xc149630  jal         func_5258C0
label_353ff4:
    if (ctx->pc == 0x353FF4u) {
        ctx->pc = 0x353FF8u;
        goto label_353ff8;
    }
    ctx->pc = 0x353FF0u;
    SET_GPR_U32(ctx, 31, 0x353FF8u);
    ctx->pc = 0x5258C0u;
    if (runtime->hasFunction(0x5258C0u)) {
        auto targetFn = runtime->lookupFunction(0x5258C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353FF8u; }
        if (ctx->pc != 0x353FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005258C0_0x5258c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353FF8u; }
        if (ctx->pc != 0x353FF8u) { return; }
    }
    ctx->pc = 0x353FF8u;
label_353ff8:
    // 0x353ff8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x353ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_353ffc:
    // 0x353ffc: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
label_354000:
    if (ctx->pc == 0x354000u) {
        ctx->pc = 0x354004u;
        goto label_354004;
    }
    ctx->pc = 0x353FFCu;
    {
        const bool branch_taken_0x353ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353ffc) {
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x354004u;
label_354004:
    // 0x354004: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x354004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_354008:
    // 0x354008: 0x1000009c  b           . + 4 + (0x9C << 2)
label_35400c:
    if (ctx->pc == 0x35400Cu) {
        ctx->pc = 0x354010u;
        goto label_354010;
    }
    ctx->pc = 0x354008u;
    {
        const bool branch_taken_0x354008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354008) {
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x354010u;
label_354010:
    // 0x354010: 0x1640009a  bnez        $s2, . + 4 + (0x9A << 2)
label_354014:
    if (ctx->pc == 0x354014u) {
        ctx->pc = 0x354018u;
        goto label_354018;
    }
    ctx->pc = 0x354010u;
    {
        const bool branch_taken_0x354010 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x354010) {
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x354018u;
label_354018:
    // 0x354018: 0xc0754b4  jal         func_1D52D0
label_35401c:
    if (ctx->pc == 0x35401Cu) {
        ctx->pc = 0x35401Cu;
            // 0x35401c: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->pc = 0x354020u;
        goto label_354020;
    }
    ctx->pc = 0x354018u;
    SET_GPR_U32(ctx, 31, 0x354020u);
    ctx->pc = 0x35401Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354018u;
            // 0x35401c: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354020u; }
        if (ctx->pc != 0x354020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354020u; }
        if (ctx->pc != 0x354020u) { return; }
    }
    ctx->pc = 0x354020u;
label_354020:
    // 0x354020: 0x8e650d70  lw          $a1, 0xD70($s3)
    ctx->pc = 0x354020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
label_354024:
    // 0x354024: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x354024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_354028:
    // 0x354028: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x354028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_35402c:
    // 0x35402c: 0x54830025  bnel        $a0, $v1, . + 4 + (0x25 << 2)
label_354030:
    if (ctx->pc == 0x354030u) {
        ctx->pc = 0x354030u;
            // 0x354030: 0x80420053  lb          $v0, 0x53($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
        ctx->pc = 0x354034u;
        goto label_354034;
    }
    ctx->pc = 0x35402Cu;
    {
        const bool branch_taken_0x35402c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35402c) {
            ctx->pc = 0x354030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35402Cu;
            // 0x354030: 0x80420053  lb          $v0, 0x53($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3540C4u;
            goto label_3540c4;
        }
    }
    ctx->pc = 0x354034u;
label_354034:
    // 0x354034: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x354034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_354038:
    // 0x354038: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x354038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35403c:
    // 0x35403c: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x35403cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_354040:
    // 0x354040: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_354044:
    if (ctx->pc == 0x354044u) {
        ctx->pc = 0x354048u;
        goto label_354048;
    }
    ctx->pc = 0x354040u;
    {
        const bool branch_taken_0x354040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x354040) {
            ctx->pc = 0x3540A0u;
            goto label_3540a0;
        }
    }
    ctx->pc = 0x354048u;
label_354048:
    // 0x354048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35404c:
    // 0x35404c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_354050:
    if (ctx->pc == 0x354050u) {
        ctx->pc = 0x354054u;
        goto label_354054;
    }
    ctx->pc = 0x35404Cu;
    {
        const bool branch_taken_0x35404c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35404c) {
            ctx->pc = 0x354078u;
            goto label_354078;
        }
    }
    ctx->pc = 0x354054u;
label_354054:
    // 0x354054: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_354058:
    if (ctx->pc == 0x354058u) {
        ctx->pc = 0x354058u;
            // 0x354058: 0x80420053  lb          $v0, 0x53($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
        ctx->pc = 0x35405Cu;
        goto label_35405c;
    }
    ctx->pc = 0x354054u;
    {
        const bool branch_taken_0x354054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x354054) {
            ctx->pc = 0x354058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354054u;
            // 0x354058: 0x80420053  lb          $v0, 0x53($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354064u;
            goto label_354064;
        }
    }
    ctx->pc = 0x35405Cu;
label_35405c:
    // 0x35405c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_354060:
    if (ctx->pc == 0x354060u) {
        ctx->pc = 0x354060u;
            // 0x354060: 0x111e3c  dsll32      $v1, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
        ctx->pc = 0x354064u;
        goto label_354064;
    }
    ctx->pc = 0x35405Cu;
    {
        const bool branch_taken_0x35405c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35405Cu;
            // 0x354060: 0x111e3c  dsll32      $v1, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35405c) {
            ctx->pc = 0x3540D8u;
            goto label_3540d8;
        }
    }
    ctx->pc = 0x354064u;
label_354064:
    // 0x354064: 0x82630e3f  lb          $v1, 0xE3F($s3)
    ctx->pc = 0x354064u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3647)));
label_354068:
    // 0x354068: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x354068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_35406c:
    // 0x35406c: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x35406cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
label_354070:
    // 0x354070: 0x10000018  b           . + 4 + (0x18 << 2)
label_354074:
    if (ctx->pc == 0x354074u) {
        ctx->pc = 0x354074u;
            // 0x354074: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->pc = 0x354078u;
        goto label_354078;
    }
    ctx->pc = 0x354070u;
    {
        const bool branch_taken_0x354070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354070u;
            // 0x354074: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354070) {
            ctx->pc = 0x3540D4u;
            goto label_3540d4;
        }
    }
    ctx->pc = 0x354078u;
label_354078:
    // 0x354078: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x354078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35407c:
    // 0x35407c: 0xc074740  jal         func_1D1D00
label_354080:
    if (ctx->pc == 0x354080u) {
        ctx->pc = 0x354080u;
            // 0x354080: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x354084u;
        goto label_354084;
    }
    ctx->pc = 0x35407Cu;
    SET_GPR_U32(ctx, 31, 0x354084u);
    ctx->pc = 0x354080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35407Cu;
            // 0x354080: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354084u; }
        if (ctx->pc != 0x354084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354084u; }
        if (ctx->pc != 0x354084u) { return; }
    }
    ctx->pc = 0x354084u;
label_354084:
    // 0x354084: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x354084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_354088:
    // 0x354088: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x354088u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_35408c:
    // 0x35408c: 0x1010  mfhi        $v0
    ctx->pc = 0x35408cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_354090:
    // 0x354090: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x354090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_354094:
    // 0x354094: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x354094u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
label_354098:
    // 0x354098: 0x1000000e  b           . + 4 + (0xE << 2)
label_35409c:
    if (ctx->pc == 0x35409Cu) {
        ctx->pc = 0x35409Cu;
            // 0x35409c: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->pc = 0x3540A0u;
        goto label_3540a0;
    }
    ctx->pc = 0x354098u;
    {
        const bool branch_taken_0x354098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35409Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354098u;
            // 0x35409c: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354098) {
            ctx->pc = 0x3540D4u;
            goto label_3540d4;
        }
    }
    ctx->pc = 0x3540A0u;
label_3540a0:
    // 0x3540a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3540a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3540a4:
    // 0x3540a4: 0xc074740  jal         func_1D1D00
label_3540a8:
    if (ctx->pc == 0x3540A8u) {
        ctx->pc = 0x3540A8u;
            // 0x3540a8: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x3540ACu;
        goto label_3540ac;
    }
    ctx->pc = 0x3540A4u;
    SET_GPR_U32(ctx, 31, 0x3540ACu);
    ctx->pc = 0x3540A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3540A4u;
            // 0x3540a8: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3540ACu; }
        if (ctx->pc != 0x3540ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3540ACu; }
        if (ctx->pc != 0x3540ACu) { return; }
    }
    ctx->pc = 0x3540ACu;
label_3540ac:
    // 0x3540ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3540acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3540b0:
    // 0x3540b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3540b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_3540b4:
    // 0x3540b4: 0x1010  mfhi        $v0
    ctx->pc = 0x3540b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3540b8:
    // 0x3540b8: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x3540b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
label_3540bc:
    // 0x3540bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3540c0:
    if (ctx->pc == 0x3540C0u) {
        ctx->pc = 0x3540C0u;
            // 0x3540c0: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->pc = 0x3540C4u;
        goto label_3540c4;
    }
    ctx->pc = 0x3540BCu;
    {
        const bool branch_taken_0x3540bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3540C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3540BCu;
            // 0x3540c0: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3540bc) {
            ctx->pc = 0x3540D4u;
            goto label_3540d4;
        }
    }
    ctx->pc = 0x3540C4u;
label_3540c4:
    // 0x3540c4: 0x82630e3f  lb          $v1, 0xE3F($s3)
    ctx->pc = 0x3540c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3647)));
label_3540c8:
    // 0x3540c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3540c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3540cc:
    // 0x3540cc: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x3540ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
label_3540d0:
    // 0x3540d0: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x3540d0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_3540d4:
    // 0x3540d4: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x3540d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
label_3540d8:
    // 0x3540d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3540d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3540dc:
    // 0x3540dc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3540dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3540e0:
    // 0x3540e0: 0x60102a  slt         $v0, $v1, $zero
    ctx->pc = 0x3540e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_3540e4:
    // 0x3540e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3540e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3540e8:
    // 0x3540e8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3540e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3540ec:
    // 0x3540ec: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x3540ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
label_3540f0:
    // 0x3540f0: 0xc0d1dc8  jal         func_347720
label_3540f4:
    if (ctx->pc == 0x3540F4u) {
        ctx->pc = 0x3540F4u;
            // 0x3540f4: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->pc = 0x3540F8u;
        goto label_3540f8;
    }
    ctx->pc = 0x3540F0u;
    SET_GPR_U32(ctx, 31, 0x3540F8u);
    ctx->pc = 0x3540F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3540F0u;
            // 0x3540f4: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3540F8u; }
        if (ctx->pc != 0x3540F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3540F8u; }
        if (ctx->pc != 0x3540F8u) { return; }
    }
    ctx->pc = 0x3540F8u;
label_3540f8:
    // 0x3540f8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3540f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3540fc:
    // 0x3540fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3540fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_354100:
    // 0x354100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354104:
    // 0x354104: 0x0  nop
    ctx->pc = 0x354104u;
    // NOP
label_354108:
    // 0x354108: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x354108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35410c:
    // 0x35410c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_354110:
    if (ctx->pc == 0x354110u) {
        ctx->pc = 0x354110u;
            // 0x354110: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x354114u;
        goto label_354114;
    }
    ctx->pc = 0x35410Cu;
    {
        const bool branch_taken_0x35410c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35410c) {
            ctx->pc = 0x354110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35410Cu;
            // 0x354110: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x354124u;
            goto label_354124;
        }
    }
    ctx->pc = 0x354114u;
label_354114:
    // 0x354114: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x354114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_354118:
    // 0x354118: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x354118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_35411c:
    // 0x35411c: 0x10000006  b           . + 4 + (0x6 << 2)
label_354120:
    if (ctx->pc == 0x354120u) {
        ctx->pc = 0x354124u;
        goto label_354124;
    }
    ctx->pc = 0x35411Cu;
    {
        const bool branch_taken_0x35411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35411c) {
            ctx->pc = 0x354138u;
            goto label_354138;
        }
    }
    ctx->pc = 0x354124u;
label_354124:
    // 0x354124: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x354124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_354128:
    // 0x354128: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x354128u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35412c:
    // 0x35412c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x35412cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_354130:
    // 0x354130: 0x0  nop
    ctx->pc = 0x354130u;
    // NOP
label_354134:
    // 0x354134: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x354134u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_354138:
    // 0x354138: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35413c:
    // 0x35413c: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x35413cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_354140:
    // 0x354140: 0xc0770e4  jal         func_1DC390
label_354144:
    if (ctx->pc == 0x354144u) {
        ctx->pc = 0x354144u;
            // 0x354144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354148u;
        goto label_354148;
    }
    ctx->pc = 0x354140u;
    SET_GPR_U32(ctx, 31, 0x354148u);
    ctx->pc = 0x354144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354140u;
            // 0x354144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354148u; }
        if (ctx->pc != 0x354148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354148u; }
        if (ctx->pc != 0x354148u) { return; }
    }
    ctx->pc = 0x354148u;
label_354148:
    // 0x354148: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x354148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_35414c:
    // 0x35414c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35414cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354150:
    // 0x354150: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x354150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_354154:
    // 0x354154: 0xc0ae0e4  jal         func_2B8390
label_354158:
    if (ctx->pc == 0x354158u) {
        ctx->pc = 0x354158u;
            // 0x354158: 0x280c0  sll         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x35415Cu;
        goto label_35415c;
    }
    ctx->pc = 0x354154u;
    SET_GPR_U32(ctx, 31, 0x35415Cu);
    ctx->pc = 0x354158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354154u;
            // 0x354158: 0x280c0  sll         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8390u;
    if (runtime->hasFunction(0x2B8390u)) {
        auto targetFn = runtime->lookupFunction(0x2B8390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35415Cu; }
        if (ctx->pc != 0x35415Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8390_0x2b8390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35415Cu; }
        if (ctx->pc != 0x35415Cu) { return; }
    }
    ctx->pc = 0x35415Cu;
label_35415c:
    // 0x35415c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_354160:
    // 0x354160: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x354160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_354164:
    // 0x354164: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x354164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_354168:
    // 0x354168: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x354168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
label_35416c:
    // 0x35416c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x35416cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_354170:
    // 0x354170: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x354170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_354174:
    // 0x354174: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x354174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
label_354178:
    // 0x354178: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x354178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_35417c:
    // 0x35417c: 0x244216d0  addiu       $v0, $v0, 0x16D0
    ctx->pc = 0x35417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5840));
label_354180:
    // 0x354180: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x354180u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_354184:
    // 0x354184: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x354184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_354188:
    // 0x354188: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x354188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_35418c:
    // 0x35418c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x35418cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_354190:
    // 0x354190: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x354190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_354194:
    // 0x354194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_354198:
    // 0x354198: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x354198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_35419c:
    // 0x35419c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3541a0:
    // 0x3541a0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3541a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3541a4:
    // 0x3541a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3541a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3541a8:
    // 0x3541a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3541a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3541ac:
    // 0x3541ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3541acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3541b0:
    // 0x3541b0: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x3541b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3541b4:
    // 0x3541b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3541b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3541b8:
    // 0x3541b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3541b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3541bc:
    // 0x3541bc: 0xc0b9ffc  jal         func_2E7FF0
label_3541c0:
    if (ctx->pc == 0x3541C0u) {
        ctx->pc = 0x3541C0u;
            // 0x3541c0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3541C4u;
        goto label_3541c4;
    }
    ctx->pc = 0x3541BCu;
    SET_GPR_U32(ctx, 31, 0x3541C4u);
    ctx->pc = 0x3541C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3541BCu;
            // 0x3541c0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3541C4u; }
        if (ctx->pc != 0x3541C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3541C4u; }
        if (ctx->pc != 0x3541C4u) { return; }
    }
    ctx->pc = 0x3541C4u;
label_3541c4:
    // 0x3541c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3541c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3541c8:
    // 0x3541c8: 0xc0d5300  jal         func_354C00
label_3541cc:
    if (ctx->pc == 0x3541CCu) {
        ctx->pc = 0x3541CCu;
            // 0x3541cc: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x3541D0u;
        goto label_3541d0;
    }
    ctx->pc = 0x3541C8u;
    SET_GPR_U32(ctx, 31, 0x3541D0u);
    ctx->pc = 0x3541CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3541C8u;
            // 0x3541cc: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x354C00u;
    if (runtime->hasFunction(0x354C00u)) {
        auto targetFn = runtime->lookupFunction(0x354C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3541D0u; }
        if (ctx->pc != 0x3541D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00354C00_0x354c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3541D0u; }
        if (ctx->pc != 0x3541D0u) { return; }
    }
    ctx->pc = 0x3541D0u;
label_3541d0:
    // 0x3541d0: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x3541d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3541d4:
    // 0x3541d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3541d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3541d8:
    // 0x3541d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3541d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3541dc:
    // 0x3541dc: 0xc0d52f0  jal         func_354BC0
label_3541e0:
    if (ctx->pc == 0x3541E0u) {
        ctx->pc = 0x3541E0u;
            // 0x3541e0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3541E4u;
        goto label_3541e4;
    }
    ctx->pc = 0x3541DCu;
    SET_GPR_U32(ctx, 31, 0x3541E4u);
    ctx->pc = 0x3541E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3541DCu;
            // 0x3541e0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x354BC0u;
    if (runtime->hasFunction(0x354BC0u)) {
        auto targetFn = runtime->lookupFunction(0x354BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3541E4u; }
        if (ctx->pc != 0x3541E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00354BC0_0x354bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3541E4u; }
        if (ctx->pc != 0x3541E4u) { return; }
    }
    ctx->pc = 0x3541E4u;
label_3541e4:
    // 0x3541e4: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x3541e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3541e8:
    // 0x3541e8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3541e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3541ec:
    // 0x3541ec: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
label_3541f0:
    if (ctx->pc == 0x3541F0u) {
        ctx->pc = 0x3541F4u;
        goto label_3541f4;
    }
    ctx->pc = 0x3541ECu;
    {
        const bool branch_taken_0x3541ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3541ec) {
            ctx->pc = 0x354240u;
            goto label_354240;
        }
    }
    ctx->pc = 0x3541F4u;
label_3541f4:
    // 0x3541f4: 0xc0d4b50  jal         func_352D40
label_3541f8:
    if (ctx->pc == 0x3541F8u) {
        ctx->pc = 0x3541FCu;
        goto label_3541fc;
    }
    ctx->pc = 0x3541F4u;
    SET_GPR_U32(ctx, 31, 0x3541FCu);
    ctx->pc = 0x352D40u;
    if (runtime->hasFunction(0x352D40u)) {
        auto targetFn = runtime->lookupFunction(0x352D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3541FCu; }
        if (ctx->pc != 0x3541FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D40_0x352d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3541FCu; }
        if (ctx->pc != 0x3541FCu) { return; }
    }
    ctx->pc = 0x3541FCu;
label_3541fc:
    // 0x3541fc: 0xc0d52ec  jal         func_354BB0
label_354200:
    if (ctx->pc == 0x354200u) {
        ctx->pc = 0x354200u;
            // 0x354200: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354204u;
        goto label_354204;
    }
    ctx->pc = 0x3541FCu;
    SET_GPR_U32(ctx, 31, 0x354204u);
    ctx->pc = 0x354200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3541FCu;
            // 0x354200: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x354BB0u;
    if (runtime->hasFunction(0x354BB0u)) {
        auto targetFn = runtime->lookupFunction(0x354BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354204u; }
        if (ctx->pc != 0x354204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00354BB0_0x354bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354204u; }
        if (ctx->pc != 0x354204u) { return; }
    }
    ctx->pc = 0x354204u;
label_354204:
    // 0x354204: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_354208:
    if (ctx->pc == 0x354208u) {
        ctx->pc = 0x35420Cu;
        goto label_35420c;
    }
    ctx->pc = 0x354204u;
    {
        const bool branch_taken_0x354204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354204) {
            ctx->pc = 0x354240u;
            goto label_354240;
        }
    }
    ctx->pc = 0x35420Cu;
label_35420c:
    // 0x35420c: 0xc0b9ffc  jal         func_2E7FF0
label_354210:
    if (ctx->pc == 0x354210u) {
        ctx->pc = 0x354214u;
        goto label_354214;
    }
    ctx->pc = 0x35420Cu;
    SET_GPR_U32(ctx, 31, 0x354214u);
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354214u; }
        if (ctx->pc != 0x354214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354214u; }
        if (ctx->pc != 0x354214u) { return; }
    }
    ctx->pc = 0x354214u;
label_354214:
    // 0x354214: 0x9205000c  lbu         $a1, 0xC($s0)
    ctx->pc = 0x354214u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_354218:
    // 0x354218: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x354218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_35421c:
    // 0x35421c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354220:
    // 0x354220: 0xc0d5300  jal         func_354C00
label_354224:
    if (ctx->pc == 0x354224u) {
        ctx->pc = 0x354224u;
            // 0x354224: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x354228u;
        goto label_354228;
    }
    ctx->pc = 0x354220u;
    SET_GPR_U32(ctx, 31, 0x354228u);
    ctx->pc = 0x354224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354220u;
            // 0x354224: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x354C00u;
    if (runtime->hasFunction(0x354C00u)) {
        auto targetFn = runtime->lookupFunction(0x354C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354228u; }
        if (ctx->pc != 0x354228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00354C00_0x354c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354228u; }
        if (ctx->pc != 0x354228u) { return; }
    }
    ctx->pc = 0x354228u;
label_354228:
    // 0x354228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x354228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35422c:
    // 0x35422c: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x35422cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_354230:
    // 0x354230: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x354230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_354234:
    // 0x354234: 0xc0d52f0  jal         func_354BC0
label_354238:
    if (ctx->pc == 0x354238u) {
        ctx->pc = 0x354238u;
            // 0x354238: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x35423Cu;
        goto label_35423c;
    }
    ctx->pc = 0x354234u;
    SET_GPR_U32(ctx, 31, 0x35423Cu);
    ctx->pc = 0x354238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354234u;
            // 0x354238: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x354BC0u;
    if (runtime->hasFunction(0x354BC0u)) {
        auto targetFn = runtime->lookupFunction(0x354BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35423Cu; }
        if (ctx->pc != 0x35423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00354BC0_0x354bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35423Cu; }
        if (ctx->pc != 0x35423Cu) { return; }
    }
    ctx->pc = 0x35423Cu;
label_35423c:
    // 0x35423c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x35423cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_354240:
    // 0x354240: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x354240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_354244:
    // 0x354244: 0x8e630518  lw          $v1, 0x518($s3)
    ctx->pc = 0x354244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1304)));
label_354248:
    // 0x354248: 0x8c421710  lw          $v0, 0x1710($v0)
    ctx->pc = 0x354248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5904)));
label_35424c:
    // 0x35424c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35424cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_354250:
    // 0x354250: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_354254:
    if (ctx->pc == 0x354254u) {
        ctx->pc = 0x354258u;
        goto label_354258;
    }
    ctx->pc = 0x354250u;
    {
        const bool branch_taken_0x354250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354250) {
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x354258u;
label_354258:
    // 0x354258: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x354258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35425c:
    // 0x35425c: 0x52420007  beql        $s2, $v0, . + 4 + (0x7 << 2)
label_354260:
    if (ctx->pc == 0x354260u) {
        ctx->pc = 0x354260u;
            // 0x354260: 0x24120009  addiu       $s2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x354264u;
        goto label_354264;
    }
    ctx->pc = 0x35425Cu;
    {
        const bool branch_taken_0x35425c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x35425c) {
            ctx->pc = 0x354260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35425Cu;
            // 0x354260: 0x24120009  addiu       $s2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x354264u;
label_354264:
    // 0x354264: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x354264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354268:
    // 0x354268: 0x52420004  beql        $s2, $v0, . + 4 + (0x4 << 2)
label_35426c:
    if (ctx->pc == 0x35426Cu) {
        ctx->pc = 0x35426Cu;
            // 0x35426c: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x354270u;
        goto label_354270;
    }
    ctx->pc = 0x354268u;
    {
        const bool branch_taken_0x354268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x354268) {
            ctx->pc = 0x35426Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354268u;
            // 0x35426c: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x354270u;
label_354270:
    // 0x354270: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x354270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_354274:
    // 0x354274: 0x52420001  beql        $s2, $v0, . + 4 + (0x1 << 2)
label_354278:
    if (ctx->pc == 0x354278u) {
        ctx->pc = 0x354278u;
            // 0x354278: 0x24120007  addiu       $s2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x35427Cu;
        goto label_35427c;
    }
    ctx->pc = 0x354274u;
    {
        const bool branch_taken_0x354274 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x354274) {
            ctx->pc = 0x354278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354274u;
            // 0x354278: 0x24120007  addiu       $s2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35427Cu;
            goto label_35427c;
        }
    }
    ctx->pc = 0x35427Cu;
label_35427c:
    // 0x35427c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x35427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_354280:
    // 0x354280: 0x56420015  bnel        $s2, $v0, . + 4 + (0x15 << 2)
label_354284:
    if (ctx->pc == 0x354284u) {
        ctx->pc = 0x354284u;
            // 0x354284: 0x8e620e34  lw          $v0, 0xE34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
        ctx->pc = 0x354288u;
        goto label_354288;
    }
    ctx->pc = 0x354280u;
    {
        const bool branch_taken_0x354280 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x354280) {
            ctx->pc = 0x354284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354280u;
            // 0x354284: 0x8e620e34  lw          $v0, 0xE34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3542D8u;
            goto label_3542d8;
        }
    }
    ctx->pc = 0x354288u;
label_354288:
    // 0x354288: 0xc0754b4  jal         func_1D52D0
label_35428c:
    if (ctx->pc == 0x35428Cu) {
        ctx->pc = 0x35428Cu;
            // 0x35428c: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->pc = 0x354290u;
        goto label_354290;
    }
    ctx->pc = 0x354288u;
    SET_GPR_U32(ctx, 31, 0x354290u);
    ctx->pc = 0x35428Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354288u;
            // 0x35428c: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354290u; }
        if (ctx->pc != 0x354290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354290u; }
        if (ctx->pc != 0x354290u) { return; }
    }
    ctx->pc = 0x354290u;
label_354290:
    // 0x354290: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x354290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_354294:
    // 0x354294: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x354294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_354298:
    // 0x354298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_35429c:
    if (ctx->pc == 0x35429Cu) {
        ctx->pc = 0x3542A0u;
        goto label_3542a0;
    }
    ctx->pc = 0x354298u;
    {
        const bool branch_taken_0x354298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354298) {
            ctx->pc = 0x3542A8u;
            goto label_3542a8;
        }
    }
    ctx->pc = 0x3542A0u;
label_3542a0:
    // 0x3542a0: 0x1000000c  b           . + 4 + (0xC << 2)
label_3542a4:
    if (ctx->pc == 0x3542A4u) {
        ctx->pc = 0x3542A4u;
            // 0x3542a4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3542A8u;
        goto label_3542a8;
    }
    ctx->pc = 0x3542A0u;
    {
        const bool branch_taken_0x3542a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3542A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3542A0u;
            // 0x3542a4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3542a0) {
            ctx->pc = 0x3542D4u;
            goto label_3542d4;
        }
    }
    ctx->pc = 0x3542A8u;
label_3542a8:
    // 0x3542a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3542a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3542ac:
    // 0x3542ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3542acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3542b0:
    // 0x3542b0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3542b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3542b4:
    // 0x3542b4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3542b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3542b8:
    // 0x3542b8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_3542bc:
    if (ctx->pc == 0x3542BCu) {
        ctx->pc = 0x3542C0u;
        goto label_3542c0;
    }
    ctx->pc = 0x3542B8u;
    {
        const bool branch_taken_0x3542b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3542b8) {
            ctx->pc = 0x3542D4u;
            goto label_3542d4;
        }
    }
    ctx->pc = 0x3542C0u;
label_3542c0:
    // 0x3542c0: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x3542c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3542c4:
    // 0x3542c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3542c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3542c8:
    // 0x3542c8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_3542cc:
    if (ctx->pc == 0x3542CCu) {
        ctx->pc = 0x3542D0u;
        goto label_3542d0;
    }
    ctx->pc = 0x3542C8u;
    {
        const bool branch_taken_0x3542c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3542c8) {
            ctx->pc = 0x3542D4u;
            goto label_3542d4;
        }
    }
    ctx->pc = 0x3542D0u;
label_3542d0:
    // 0x3542d0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x3542d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3542d4:
    // 0x3542d4: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x3542d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3542d8:
    // 0x3542d8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3542d8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3542dc:
    // 0x3542dc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3542e0:
    if (ctx->pc == 0x3542E0u) {
        ctx->pc = 0x3542E0u;
            // 0x3542e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3542E4u;
        goto label_3542e4;
    }
    ctx->pc = 0x3542DCu;
    {
        const bool branch_taken_0x3542dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3542E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3542DCu;
            // 0x3542e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3542dc) {
            ctx->pc = 0x3542F4u;
            goto label_3542f4;
        }
    }
    ctx->pc = 0x3542E4u;
label_3542e4:
    // 0x3542e4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3542e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3542e8:
    // 0x3542e8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3542ec:
    if (ctx->pc == 0x3542ECu) {
        ctx->pc = 0x3542F0u;
        goto label_3542f0;
    }
    ctx->pc = 0x3542E8u;
    {
        const bool branch_taken_0x3542e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3542e8) {
            ctx->pc = 0x3542F4u;
            goto label_3542f4;
        }
    }
    ctx->pc = 0x3542F0u;
label_3542f0:
    // 0x3542f0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3542f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3542f4:
    // 0x3542f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3542f8:
    if (ctx->pc == 0x3542F8u) {
        ctx->pc = 0x3542FCu;
        goto label_3542fc;
    }
    ctx->pc = 0x3542F4u;
    {
        const bool branch_taken_0x3542f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3542f4) {
            ctx->pc = 0x354310u;
            goto label_354310;
        }
    }
    ctx->pc = 0x3542FCu;
label_3542fc:
    // 0x3542fc: 0xc075eb4  jal         func_1D7AD0
label_354300:
    if (ctx->pc == 0x354300u) {
        ctx->pc = 0x354300u;
            // 0x354300: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354304u;
        goto label_354304;
    }
    ctx->pc = 0x3542FCu;
    SET_GPR_U32(ctx, 31, 0x354304u);
    ctx->pc = 0x354300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3542FCu;
            // 0x354300: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354304u; }
        if (ctx->pc != 0x354304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354304u; }
        if (ctx->pc != 0x354304u) { return; }
    }
    ctx->pc = 0x354304u;
label_354304:
    // 0x354304: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_354308:
    if (ctx->pc == 0x354308u) {
        ctx->pc = 0x35430Cu;
        goto label_35430c;
    }
    ctx->pc = 0x354304u;
    {
        const bool branch_taken_0x354304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354304) {
            ctx->pc = 0x354310u;
            goto label_354310;
        }
    }
    ctx->pc = 0x35430Cu;
label_35430c:
    // 0x35430c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35430cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354310:
    // 0x354310: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_354314:
    if (ctx->pc == 0x354314u) {
        ctx->pc = 0x354318u;
        goto label_354318;
    }
    ctx->pc = 0x354310u;
    {
        const bool branch_taken_0x354310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x354310) {
            ctx->pc = 0x354328u;
            goto label_354328;
        }
    }
    ctx->pc = 0x354318u;
label_354318:
    // 0x354318: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x354318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_35431c:
    // 0x35431c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_354320:
    // 0x354320: 0x54620029  bnel        $v1, $v0, . + 4 + (0x29 << 2)
label_354324:
    if (ctx->pc == 0x354324u) {
        ctx->pc = 0x354324u;
            // 0x354324: 0x2e410014  sltiu       $at, $s2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->pc = 0x354328u;
        goto label_354328;
    }
    ctx->pc = 0x354320u;
    {
        const bool branch_taken_0x354320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x354320) {
            ctx->pc = 0x354324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354320u;
            // 0x354324: 0x2e410014  sltiu       $at, $s2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3543C8u;
            goto label_3543c8;
        }
    }
    ctx->pc = 0x354328u;
label_354328:
    // 0x354328: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35432c:
    // 0x35432c: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x35432cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_354330:
    // 0x354330: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x354330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_354334:
    // 0x354334: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x354334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_354338:
    // 0x354338: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x354338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_35433c:
    // 0x35433c: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x35433cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_354340:
    // 0x354340: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x354340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354344:
    // 0x354344: 0xc0bb404  jal         func_2ED010
label_354348:
    if (ctx->pc == 0x354348u) {
        ctx->pc = 0x354348u;
            // 0x354348: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35434Cu;
        goto label_35434c;
    }
    ctx->pc = 0x354344u;
    SET_GPR_U32(ctx, 31, 0x35434Cu);
    ctx->pc = 0x354348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354344u;
            // 0x354348: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35434Cu; }
        if (ctx->pc != 0x35434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35434Cu; }
        if (ctx->pc != 0x35434Cu) { return; }
    }
    ctx->pc = 0x35434Cu;
label_35434c:
    // 0x35434c: 0xc040180  jal         func_100600
label_354350:
    if (ctx->pc == 0x354350u) {
        ctx->pc = 0x354350u;
            // 0x354350: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x354354u;
        goto label_354354;
    }
    ctx->pc = 0x35434Cu;
    SET_GPR_U32(ctx, 31, 0x354354u);
    ctx->pc = 0x354350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35434Cu;
            // 0x354350: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354354u; }
        if (ctx->pc != 0x354354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354354u; }
        if (ctx->pc != 0x354354u) { return; }
    }
    ctx->pc = 0x354354u;
label_354354:
    // 0x354354: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_354358:
    if (ctx->pc == 0x354358u) {
        ctx->pc = 0x354358u;
            // 0x354358: 0x8e630d70  lw          $v1, 0xD70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
        ctx->pc = 0x35435Cu;
        goto label_35435c;
    }
    ctx->pc = 0x354354u;
    {
        const bool branch_taken_0x354354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354354) {
            ctx->pc = 0x354358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354354u;
            // 0x354358: 0x8e630d70  lw          $v1, 0xD70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354370u;
            goto label_354370;
        }
    }
    ctx->pc = 0x35435Cu;
label_35435c:
    // 0x35435c: 0x826511ab  lb          $a1, 0x11AB($s3)
    ctx->pc = 0x35435cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4523)));
label_354360:
    // 0x354360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354364:
    // 0x354364: 0xc0f34cc  jal         func_3CD330
label_354368:
    if (ctx->pc == 0x354368u) {
        ctx->pc = 0x354368u;
            // 0x354368: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35436Cu;
        goto label_35436c;
    }
    ctx->pc = 0x354364u;
    SET_GPR_U32(ctx, 31, 0x35436Cu);
    ctx->pc = 0x354368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354364u;
            // 0x354368: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CD330u;
    if (runtime->hasFunction(0x3CD330u)) {
        auto targetFn = runtime->lookupFunction(0x3CD330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35436Cu; }
        if (ctx->pc != 0x35436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CD330_0x3cd330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35436Cu; }
        if (ctx->pc != 0x35436Cu) { return; }
    }
    ctx->pc = 0x35436Cu;
label_35436c:
    // 0x35436c: 0x8e630d70  lw          $v1, 0xD70($s3)
    ctx->pc = 0x35436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
label_354370:
    // 0x354370: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x354370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_354374:
    // 0x354374: 0x806300c7  lb          $v1, 0xC7($v1)
    ctx->pc = 0x354374u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 199)));
label_354378:
    // 0x354378: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_35437c:
    if (ctx->pc == 0x35437Cu) {
        ctx->pc = 0x354380u;
        goto label_354380;
    }
    ctx->pc = 0x354378u;
    {
        const bool branch_taken_0x354378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x354378) {
            ctx->pc = 0x3543A0u;
            goto label_3543a0;
        }
    }
    ctx->pc = 0x354380u;
label_354380:
    // 0x354380: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x354380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_354384:
    // 0x354384: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_354388:
    if (ctx->pc == 0x354388u) {
        ctx->pc = 0x35438Cu;
        goto label_35438c;
    }
    ctx->pc = 0x354384u;
    {
        const bool branch_taken_0x354384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x354384) {
            ctx->pc = 0x3543A0u;
            goto label_3543a0;
        }
    }
    ctx->pc = 0x35438Cu;
label_35438c:
    // 0x35438c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354390:
    // 0x354390: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_354394:
    if (ctx->pc == 0x354394u) {
        ctx->pc = 0x354398u;
        goto label_354398;
    }
    ctx->pc = 0x354390u;
    {
        const bool branch_taken_0x354390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x354390) {
            ctx->pc = 0x3543A0u;
            goto label_3543a0;
        }
    }
    ctx->pc = 0x354398u;
label_354398:
    // 0x354398: 0x1000000a  b           . + 4 + (0xA << 2)
label_35439c:
    if (ctx->pc == 0x35439Cu) {
        ctx->pc = 0x3543A0u;
        goto label_3543a0;
    }
    ctx->pc = 0x354398u;
    {
        const bool branch_taken_0x354398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354398) {
            ctx->pc = 0x3543C4u;
            goto label_3543c4;
        }
    }
    ctx->pc = 0x3543A0u;
label_3543a0:
    // 0x3543a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3543a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3543a4:
    // 0x3543a4: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x3543a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_3543a8:
    // 0x3543a8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3543a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3543ac:
    // 0x3543ac: 0x24650028  addiu       $a1, $v1, 0x28
    ctx->pc = 0x3543acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_3543b0:
    // 0x3543b0: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x3543b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_3543b4:
    // 0x3543b4: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x3543b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_3543b8:
    // 0x3543b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3543b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3543bc:
    // 0x3543bc: 0xc0bb404  jal         func_2ED010
label_3543c0:
    if (ctx->pc == 0x3543C0u) {
        ctx->pc = 0x3543C0u;
            // 0x3543c0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3543C4u;
        goto label_3543c4;
    }
    ctx->pc = 0x3543BCu;
    SET_GPR_U32(ctx, 31, 0x3543C4u);
    ctx->pc = 0x3543C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3543BCu;
            // 0x3543c0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3543C4u; }
        if (ctx->pc != 0x3543C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3543C4u; }
        if (ctx->pc != 0x3543C4u) { return; }
    }
    ctx->pc = 0x3543C4u;
label_3543c4:
    // 0x3543c4: 0x2e410014  sltiu       $at, $s2, 0x14
    ctx->pc = 0x3543c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_3543c8:
    // 0x3543c8: 0x502001ee  beql        $at, $zero, . + 4 + (0x1EE << 2)
label_3543cc:
    if (ctx->pc == 0x3543CCu) {
        ctx->pc = 0x3543CCu;
            // 0x3543cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3543D0u;
        goto label_3543d0;
    }
    ctx->pc = 0x3543C8u;
    {
        const bool branch_taken_0x3543c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3543c8) {
            ctx->pc = 0x3543CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3543C8u;
            // 0x3543cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354B84u;
            goto label_354b84;
        }
    }
    ctx->pc = 0x3543D0u;
label_3543d0:
    // 0x3543d0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3543d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3543d4:
    // 0x3543d4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3543d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3543d8:
    // 0x3543d8: 0x24634230  addiu       $v1, $v1, 0x4230
    ctx->pc = 0x3543d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16944));
label_3543dc:
    // 0x3543dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3543dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3543e0:
    // 0x3543e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3543e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3543e4:
    // 0x3543e4: 0x400008  jr          $v0
label_3543e8:
    if (ctx->pc == 0x3543E8u) {
        ctx->pc = 0x3543ECu;
        goto label_3543ec;
    }
    ctx->pc = 0x3543E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3543ECu: goto label_3543ec;
            case 0x354568u: goto label_354568;
            case 0x3545A4u: goto label_3545a4;
            case 0x3545C0u: goto label_3545c0;
            case 0x3545DCu: goto label_3545dc;
            case 0x3545F8u: goto label_3545f8;
            case 0x354618u: goto label_354618;
            case 0x3546C4u: goto label_3546c4;
            case 0x354770u: goto label_354770;
            case 0x35481Cu: goto label_35481c;
            case 0x3548C8u: goto label_3548c8;
            case 0x354950u: goto label_354950;
            case 0x35498Cu: goto label_35498c;
            case 0x3549C8u: goto label_3549c8;
            case 0x354A40u: goto label_354a40;
            case 0x354A5Cu: goto label_354a5c;
            case 0x354AA0u: goto label_354aa0;
            case 0x354AB8u: goto label_354ab8;
            case 0x354B70u: goto label_354b70;
            case 0x354B80u: goto label_354b80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3543ECu;
label_3543ec:
    // 0x3543ec: 0x8e640d60  lw          $a0, 0xD60($s3)
    ctx->pc = 0x3543ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_3543f0:
    // 0x3543f0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x3543f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_3543f4:
    // 0x3543f4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3543f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3543f8:
    // 0x3543f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3543f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3543fc:
    // 0x3543fc: 0x320f809  jalr        $t9
label_354400:
    if (ctx->pc == 0x354400u) {
        ctx->pc = 0x354400u;
            // 0x354400: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x354404u;
        goto label_354404;
    }
    ctx->pc = 0x3543FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354404u);
        ctx->pc = 0x354400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3543FCu;
            // 0x354400: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x354404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354404u; }
            if (ctx->pc != 0x354404u) { return; }
        }
        }
    }
    ctx->pc = 0x354404u;
label_354404:
    // 0x354404: 0x8e630db0  lw          $v1, 0xDB0($s3)
    ctx->pc = 0x354404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_354408:
    // 0x354408: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x354408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_35440c:
    // 0x35440c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_354410:
    if (ctx->pc == 0x354410u) {
        ctx->pc = 0x354410u;
            // 0x354410: 0x8e620a74  lw          $v0, 0xA74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2676)));
        ctx->pc = 0x354414u;
        goto label_354414;
    }
    ctx->pc = 0x35440Cu;
    {
        const bool branch_taken_0x35440c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35440c) {
            ctx->pc = 0x354410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35440Cu;
            // 0x354410: 0x8e620a74  lw          $v0, 0xA74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2676)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35442Cu;
            goto label_35442c;
        }
    }
    ctx->pc = 0x354414u;
label_354414:
    // 0x354414: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x354414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_354418:
    // 0x354418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x354418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35441c:
    // 0x35441c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x35441cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_354420:
    // 0x354420: 0x320f809  jalr        $t9
label_354424:
    if (ctx->pc == 0x354424u) {
        ctx->pc = 0x354424u;
            // 0x354424: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x354428u;
        goto label_354428;
    }
    ctx->pc = 0x354420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354428u);
        ctx->pc = 0x354424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354420u;
            // 0x354424: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x354428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354428u; }
            if (ctx->pc != 0x354428u) { return; }
        }
        }
    }
    ctx->pc = 0x354428u;
label_354428:
    // 0x354428: 0x8e620a74  lw          $v0, 0xA74($s3)
    ctx->pc = 0x354428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2676)));
label_35442c:
    // 0x35442c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_354430:
    if (ctx->pc == 0x354430u) {
        ctx->pc = 0x354430u;
            // 0x354430: 0x8e620db0  lw          $v0, 0xDB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
        ctx->pc = 0x354434u;
        goto label_354434;
    }
    ctx->pc = 0x35442Cu;
    {
        const bool branch_taken_0x35442c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35442c) {
            ctx->pc = 0x354430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35442Cu;
            // 0x354430: 0x8e620db0  lw          $v0, 0xDB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354454u;
            goto label_354454;
        }
    }
    ctx->pc = 0x354434u;
label_354434:
    // 0x354434: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x354434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_354438:
    // 0x354438: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x354438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_35443c:
    // 0x35443c: 0xc6610de0  lwc1        $f1, 0xDE0($s3)
    ctx->pc = 0x35443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354440:
    // 0x354440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354444:
    // 0x354444: 0x0  nop
    ctx->pc = 0x354444u;
    // NOP
label_354448:
    // 0x354448: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_35444c:
    // 0x35444c: 0xe6600de4  swc1        $f0, 0xDE4($s3)
    ctx->pc = 0x35444cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_354450:
    // 0x354450: 0x8e620db0  lw          $v0, 0xDB0($s3)
    ctx->pc = 0x354450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_354454:
    // 0x354454: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x354454u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_354458:
    // 0x354458: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_35445c:
    if (ctx->pc == 0x35445Cu) {
        ctx->pc = 0x35445Cu;
            // 0x35445c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354460u;
        goto label_354460;
    }
    ctx->pc = 0x354458u;
    {
        const bool branch_taken_0x354458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x354458) {
            ctx->pc = 0x35445Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354458u;
            // 0x35445c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354478u;
            goto label_354478;
        }
    }
    ctx->pc = 0x354460u;
label_354460:
    // 0x354460: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x354460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_354464:
    // 0x354464: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x354464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_354468:
    // 0x354468: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x354468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_35446c:
    // 0x35446c: 0x320f809  jalr        $t9
label_354470:
    if (ctx->pc == 0x354470u) {
        ctx->pc = 0x354470u;
            // 0x354470: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x354474u;
        goto label_354474;
    }
    ctx->pc = 0x35446Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354474u);
        ctx->pc = 0x354470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35446Cu;
            // 0x354470: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x354474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354474u; }
            if (ctx->pc != 0x354474u) { return; }
        }
        }
    }
    ctx->pc = 0x354474u;
label_354474:
    // 0x354474: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x354474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_354478:
    // 0x354478: 0xc07649c  jal         func_1D9270
label_35447c:
    if (ctx->pc == 0x35447Cu) {
        ctx->pc = 0x35447Cu;
            // 0x35447c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x354480u;
        goto label_354480;
    }
    ctx->pc = 0x354478u;
    SET_GPR_U32(ctx, 31, 0x354480u);
    ctx->pc = 0x35447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354478u;
            // 0x35447c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354480u; }
        if (ctx->pc != 0x354480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354480u; }
        if (ctx->pc != 0x354480u) { return; }
    }
    ctx->pc = 0x354480u;
label_354480:
    // 0x354480: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354484:
    // 0x354484: 0x8e650d98  lw          $a1, 0xD98($s3)
    ctx->pc = 0x354484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_354488:
    // 0x354488: 0x90443db0  lbu         $a0, 0x3DB0($v0)
    ctx->pc = 0x354488u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_35448c:
    // 0x35448c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354490:
    // 0x354490: 0xa31004  sllv        $v0, $v1, $a1
    ctx->pc = 0x354490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_354494:
    // 0x354494: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x354494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_354498:
    // 0x354498: 0x1c4001b9  bgtz        $v0, . + 4 + (0x1B9 << 2)
label_35449c:
    if (ctx->pc == 0x35449Cu) {
        ctx->pc = 0x3544A0u;
        goto label_3544a0;
    }
    ctx->pc = 0x354498u;
    {
        const bool branch_taken_0x354498 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x354498) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3544A0u;
label_3544a0:
    // 0x3544a0: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x3544a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3544a4:
    // 0x3544a4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x3544a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3544a8:
    // 0x3544a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3544ac:
    if (ctx->pc == 0x3544ACu) {
        ctx->pc = 0x3544ACu;
            // 0x3544ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3544B0u;
        goto label_3544b0;
    }
    ctx->pc = 0x3544A8u;
    {
        const bool branch_taken_0x3544a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3544ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3544A8u;
            // 0x3544ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544a8) {
            ctx->pc = 0x3544C0u;
            goto label_3544c0;
        }
    }
    ctx->pc = 0x3544B0u;
label_3544b0:
    // 0x3544b0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3544b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3544b4:
    // 0x3544b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3544b8:
    if (ctx->pc == 0x3544B8u) {
        ctx->pc = 0x3544BCu;
        goto label_3544bc;
    }
    ctx->pc = 0x3544B4u;
    {
        const bool branch_taken_0x3544b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3544b4) {
            ctx->pc = 0x3544C0u;
            goto label_3544c0;
        }
    }
    ctx->pc = 0x3544BCu;
label_3544bc:
    // 0x3544bc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3544bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3544c0:
    // 0x3544c0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3544c4:
    if (ctx->pc == 0x3544C4u) {
        ctx->pc = 0x3544C8u;
        goto label_3544c8;
    }
    ctx->pc = 0x3544C0u;
    {
        const bool branch_taken_0x3544c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3544c0) {
            ctx->pc = 0x3544DCu;
            goto label_3544dc;
        }
    }
    ctx->pc = 0x3544C8u;
label_3544c8:
    // 0x3544c8: 0xc075eb4  jal         func_1D7AD0
label_3544cc:
    if (ctx->pc == 0x3544CCu) {
        ctx->pc = 0x3544CCu;
            // 0x3544cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3544D0u;
        goto label_3544d0;
    }
    ctx->pc = 0x3544C8u;
    SET_GPR_U32(ctx, 31, 0x3544D0u);
    ctx->pc = 0x3544CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3544C8u;
            // 0x3544cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3544D0u; }
        if (ctx->pc != 0x3544D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3544D0u; }
        if (ctx->pc != 0x3544D0u) { return; }
    }
    ctx->pc = 0x3544D0u;
label_3544d0:
    // 0x3544d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3544d4:
    if (ctx->pc == 0x3544D4u) {
        ctx->pc = 0x3544D8u;
        goto label_3544d8;
    }
    ctx->pc = 0x3544D0u;
    {
        const bool branch_taken_0x3544d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3544d0) {
            ctx->pc = 0x3544DCu;
            goto label_3544dc;
        }
    }
    ctx->pc = 0x3544D8u;
label_3544d8:
    // 0x3544d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3544d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3544dc:
    // 0x3544dc: 0x120001a8  beqz        $s0, . + 4 + (0x1A8 << 2)
label_3544e0:
    if (ctx->pc == 0x3544E0u) {
        ctx->pc = 0x3544E4u;
        goto label_3544e4;
    }
    ctx->pc = 0x3544DCu;
    {
        const bool branch_taken_0x3544dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3544dc) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3544E4u;
label_3544e4:
    // 0x3544e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3544e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3544e8:
    // 0x3544e8: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x3544e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_3544ec:
    // 0x3544ec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3544ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3544f0:
    // 0x3544f0: 0x245002b8  addiu       $s0, $v0, 0x2B8
    ctx->pc = 0x3544f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 696));
label_3544f4:
    // 0x3544f4: 0x8c4202c0  lw          $v0, 0x2C0($v0)
    ctx->pc = 0x3544f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
label_3544f8:
    // 0x3544f8: 0xc040180  jal         func_100600
label_3544fc:
    if (ctx->pc == 0x3544FCu) {
        ctx->pc = 0x3544FCu;
            // 0x3544fc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x354500u;
        goto label_354500;
    }
    ctx->pc = 0x3544F8u;
    SET_GPR_U32(ctx, 31, 0x354500u);
    ctx->pc = 0x3544FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3544F8u;
            // 0x3544fc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354500u; }
        if (ctx->pc != 0x354500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354500u; }
        if (ctx->pc != 0x354500u) { return; }
    }
    ctx->pc = 0x354500u;
label_354500:
    // 0x354500: 0x1040019f  beqz        $v0, . + 4 + (0x19F << 2)
label_354504:
    if (ctx->pc == 0x354504u) {
        ctx->pc = 0x354504u;
            // 0x354504: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354508u;
        goto label_354508;
    }
    ctx->pc = 0x354500u;
    {
        const bool branch_taken_0x354500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354500u;
            // 0x354504: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354500) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354508u;
label_354508:
    // 0x354508: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x354508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35450c:
    // 0x35450c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x35450cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_354510:
    // 0x354510: 0x8e700d98  lw          $s0, 0xD98($s3)
    ctx->pc = 0x354510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_354514:
    // 0x354514: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x354514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_354518:
    // 0x354518: 0x826911aa  lb          $t1, 0x11AA($s3)
    ctx->pc = 0x354518u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_35451c:
    // 0x35451c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_354520:
    // 0x354520: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x354520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_354524:
    // 0x354524: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x354524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_354528:
    // 0x354528: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x354528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_35452c:
    // 0x35452c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x35452cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354530:
    // 0x354530: 0xc0b9404  jal         func_2E5010
label_354534:
    if (ctx->pc == 0x354534u) {
        ctx->pc = 0x354534u;
            // 0x354534: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354538u;
        goto label_354538;
    }
    ctx->pc = 0x354530u;
    SET_GPR_U32(ctx, 31, 0x354538u);
    ctx->pc = 0x354534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354530u;
            // 0x354534: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354538u; }
        if (ctx->pc != 0x354538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354538u; }
        if (ctx->pc != 0x354538u) { return; }
    }
    ctx->pc = 0x354538u;
label_354538:
    // 0x354538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35453c:
    // 0x35453c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35453cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_354540:
    // 0x354540: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x354540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_354544:
    // 0x354544: 0x24634160  addiu       $v1, $v1, 0x4160
    ctx->pc = 0x354544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16736));
label_354548:
    // 0x354548: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x354548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35454c:
    // 0x35454c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35454cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_354550:
    // 0x354550: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354554:
    // 0x354554: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x354554u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_354558:
    // 0x354558: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35455c:
    // 0x35455c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x35455cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_354560:
    // 0x354560: 0x10000187  b           . + 4 + (0x187 << 2)
label_354564:
    if (ctx->pc == 0x354564u) {
        ctx->pc = 0x354564u;
            // 0x354564: 0xa0433db0  sb          $v1, 0x3DB0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 15792), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x354568u;
        goto label_354568;
    }
    ctx->pc = 0x354560u;
    {
        const bool branch_taken_0x354560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354560u;
            // 0x354564: 0xa0433db0  sb          $v1, 0x3DB0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 15792), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354560) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354568u;
label_354568:
    // 0x354568: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x354568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_35456c:
    // 0x35456c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354570:
    // 0x354570: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_354574:
    if (ctx->pc == 0x354574u) {
        ctx->pc = 0x354574u;
            // 0x354574: 0x3c0243b4  lui         $v0, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
        ctx->pc = 0x354578u;
        goto label_354578;
    }
    ctx->pc = 0x354570u;
    {
        const bool branch_taken_0x354570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x354570) {
            ctx->pc = 0x354574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354570u;
            // 0x354574: 0x3c0243b4  lui         $v0, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354590u;
            goto label_354590;
        }
    }
    ctx->pc = 0x354578u;
label_354578:
    // 0x354578: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x354578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_35457c:
    // 0x35457c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35457cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_354580:
    // 0x354580: 0xc0780ac  jal         func_1E02B0
label_354584:
    if (ctx->pc == 0x354584u) {
        ctx->pc = 0x354584u;
            // 0x354584: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354588u;
        goto label_354588;
    }
    ctx->pc = 0x354580u;
    SET_GPR_U32(ctx, 31, 0x354588u);
    ctx->pc = 0x354584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354580u;
            // 0x354584: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E02B0u;
    if (runtime->hasFunction(0x1E02B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E02B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354588u; }
        if (ctx->pc != 0x354588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E02B0_0x1e02b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354588u; }
        if (ctx->pc != 0x354588u) { return; }
    }
    ctx->pc = 0x354588u;
label_354588:
    // 0x354588: 0x1000017d  b           . + 4 + (0x17D << 2)
label_35458c:
    if (ctx->pc == 0x35458Cu) {
        ctx->pc = 0x354590u;
        goto label_354590;
    }
    ctx->pc = 0x354588u;
    {
        const bool branch_taken_0x354588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354588) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354590u;
label_354590:
    // 0x354590: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x354590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_354594:
    // 0x354594: 0xc0780ac  jal         func_1E02B0
label_354598:
    if (ctx->pc == 0x354598u) {
        ctx->pc = 0x354598u;
            // 0x354598: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35459Cu;
        goto label_35459c;
    }
    ctx->pc = 0x354594u;
    SET_GPR_U32(ctx, 31, 0x35459Cu);
    ctx->pc = 0x354598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354594u;
            // 0x354598: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E02B0u;
    if (runtime->hasFunction(0x1E02B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E02B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35459Cu; }
        if (ctx->pc != 0x35459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E02B0_0x1e02b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35459Cu; }
        if (ctx->pc != 0x35459Cu) { return; }
    }
    ctx->pc = 0x35459Cu;
label_35459c:
    // 0x35459c: 0x10000178  b           . + 4 + (0x178 << 2)
label_3545a0:
    if (ctx->pc == 0x3545A0u) {
        ctx->pc = 0x3545A4u;
        goto label_3545a4;
    }
    ctx->pc = 0x35459Cu;
    {
        const bool branch_taken_0x35459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35459c) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3545A4u;
label_3545a4:
    // 0x3545a4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3545a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3545a8:
    // 0x3545a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3545a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3545ac:
    // 0x3545ac: 0xc44c42a0  lwc1        $f12, 0x42A0($v0)
    ctx->pc = 0x3545acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3545b0:
    // 0x3545b0: 0xc0d4efc  jal         func_353BF0
label_3545b4:
    if (ctx->pc == 0x3545B4u) {
        ctx->pc = 0x3545B4u;
            // 0x3545b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3545B8u;
        goto label_3545b8;
    }
    ctx->pc = 0x3545B0u;
    SET_GPR_U32(ctx, 31, 0x3545B8u);
    ctx->pc = 0x3545B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3545B0u;
            // 0x3545b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (runtime->hasFunction(0x353BF0u)) {
        auto targetFn = runtime->lookupFunction(0x353BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3545B8u; }
        if (ctx->pc != 0x3545B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353BF0_0x353bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3545B8u; }
        if (ctx->pc != 0x3545B8u) { return; }
    }
    ctx->pc = 0x3545B8u;
label_3545b8:
    // 0x3545b8: 0x10000171  b           . + 4 + (0x171 << 2)
label_3545bc:
    if (ctx->pc == 0x3545BCu) {
        ctx->pc = 0x3545C0u;
        goto label_3545c0;
    }
    ctx->pc = 0x3545B8u;
    {
        const bool branch_taken_0x3545b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3545b8) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3545C0u;
label_3545c0:
    // 0x3545c0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3545c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3545c4:
    // 0x3545c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3545c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3545c8:
    // 0x3545c8: 0xc44c42a4  lwc1        $f12, 0x42A4($v0)
    ctx->pc = 0x3545c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3545cc:
    // 0x3545cc: 0xc0d4efc  jal         func_353BF0
label_3545d0:
    if (ctx->pc == 0x3545D0u) {
        ctx->pc = 0x3545D0u;
            // 0x3545d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3545D4u;
        goto label_3545d4;
    }
    ctx->pc = 0x3545CCu;
    SET_GPR_U32(ctx, 31, 0x3545D4u);
    ctx->pc = 0x3545D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3545CCu;
            // 0x3545d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (runtime->hasFunction(0x353BF0u)) {
        auto targetFn = runtime->lookupFunction(0x353BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3545D4u; }
        if (ctx->pc != 0x3545D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353BF0_0x353bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3545D4u; }
        if (ctx->pc != 0x3545D4u) { return; }
    }
    ctx->pc = 0x3545D4u;
label_3545d4:
    // 0x3545d4: 0x1000016a  b           . + 4 + (0x16A << 2)
label_3545d8:
    if (ctx->pc == 0x3545D8u) {
        ctx->pc = 0x3545DCu;
        goto label_3545dc;
    }
    ctx->pc = 0x3545D4u;
    {
        const bool branch_taken_0x3545d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3545d4) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3545DCu;
label_3545dc:
    // 0x3545dc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3545dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3545e0:
    // 0x3545e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3545e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3545e4:
    // 0x3545e4: 0xc44c42a8  lwc1        $f12, 0x42A8($v0)
    ctx->pc = 0x3545e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3545e8:
    // 0x3545e8: 0xc0d4efc  jal         func_353BF0
label_3545ec:
    if (ctx->pc == 0x3545ECu) {
        ctx->pc = 0x3545ECu;
            // 0x3545ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3545F0u;
        goto label_3545f0;
    }
    ctx->pc = 0x3545E8u;
    SET_GPR_U32(ctx, 31, 0x3545F0u);
    ctx->pc = 0x3545ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3545E8u;
            // 0x3545ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (runtime->hasFunction(0x353BF0u)) {
        auto targetFn = runtime->lookupFunction(0x353BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3545F0u; }
        if (ctx->pc != 0x3545F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353BF0_0x353bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3545F0u; }
        if (ctx->pc != 0x3545F0u) { return; }
    }
    ctx->pc = 0x3545F0u;
label_3545f0:
    // 0x3545f0: 0x10000163  b           . + 4 + (0x163 << 2)
label_3545f4:
    if (ctx->pc == 0x3545F4u) {
        ctx->pc = 0x3545F8u;
        goto label_3545f8;
    }
    ctx->pc = 0x3545F0u;
    {
        const bool branch_taken_0x3545f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3545f0) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3545F8u;
label_3545f8:
    // 0x3545f8: 0xc0754b4  jal         func_1D52D0
label_3545fc:
    if (ctx->pc == 0x3545FCu) {
        ctx->pc = 0x3545FCu;
            // 0x3545fc: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->pc = 0x354600u;
        goto label_354600;
    }
    ctx->pc = 0x3545F8u;
    SET_GPR_U32(ctx, 31, 0x354600u);
    ctx->pc = 0x3545FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3545F8u;
            // 0x3545fc: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354600u; }
        if (ctx->pc != 0x354600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354600u; }
        if (ctx->pc != 0x354600u) { return; }
    }
    ctx->pc = 0x354600u;
label_354600:
    // 0x354600: 0xc44c0034  lwc1        $f12, 0x34($v0)
    ctx->pc = 0x354600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_354604:
    // 0x354604: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x354604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_354608:
    // 0x354608: 0xc0d4efc  jal         func_353BF0
label_35460c:
    if (ctx->pc == 0x35460Cu) {
        ctx->pc = 0x35460Cu;
            // 0x35460c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354610u;
        goto label_354610;
    }
    ctx->pc = 0x354608u;
    SET_GPR_U32(ctx, 31, 0x354610u);
    ctx->pc = 0x35460Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354608u;
            // 0x35460c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (runtime->hasFunction(0x353BF0u)) {
        auto targetFn = runtime->lookupFunction(0x353BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354610u; }
        if (ctx->pc != 0x354610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353BF0_0x353bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354610u; }
        if (ctx->pc != 0x354610u) { return; }
    }
    ctx->pc = 0x354610u;
label_354610:
    // 0x354610: 0x1000015b  b           . + 4 + (0x15B << 2)
label_354614:
    if (ctx->pc == 0x354614u) {
        ctx->pc = 0x354618u;
        goto label_354618;
    }
    ctx->pc = 0x354610u;
    {
        const bool branch_taken_0x354610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354610) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354618u;
label_354618:
    // 0x354618: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x354618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_35461c:
    // 0x35461c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354620:
    // 0x354620: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_354624:
    if (ctx->pc == 0x354624u) {
        ctx->pc = 0x354624u;
            // 0x354624: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x354628u;
        goto label_354628;
    }
    ctx->pc = 0x354620u;
    {
        const bool branch_taken_0x354620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x354624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354620u;
            // 0x354624: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354620) {
            ctx->pc = 0x354634u;
            goto label_354634;
        }
    }
    ctx->pc = 0x354628u;
label_354628:
    // 0x354628: 0x8e620d78  lw          $v0, 0xD78($s3)
    ctx->pc = 0x354628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_35462c:
    // 0x35462c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x35462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_354630:
    // 0x354630: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x354630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_354634:
    // 0x354634: 0x8e620e00  lw          $v0, 0xE00($s3)
    ctx->pc = 0x354634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3584)));
label_354638:
    // 0x354638: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x354638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35463c:
    // 0x35463c: 0xc075ecc  jal         func_1D7B30
label_354640:
    if (ctx->pc == 0x354640u) {
        ctx->pc = 0x354640u;
            // 0x354640: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x354644u;
        goto label_354644;
    }
    ctx->pc = 0x35463Cu;
    SET_GPR_U32(ctx, 31, 0x354644u);
    ctx->pc = 0x354640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35463Cu;
            // 0x354640: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354644u; }
        if (ctx->pc != 0x354644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354644u; }
        if (ctx->pc != 0x354644u) { return; }
    }
    ctx->pc = 0x354644u;
label_354644:
    // 0x354644: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x354644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_354648:
    // 0x354648: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x354648u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35464c:
    // 0x35464c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_354650:
    if (ctx->pc == 0x354650u) {
        ctx->pc = 0x354650u;
            // 0x354650: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354654u;
        goto label_354654;
    }
    ctx->pc = 0x35464Cu;
    {
        const bool branch_taken_0x35464c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x354650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35464Cu;
            // 0x354650: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35464c) {
            ctx->pc = 0x354664u;
            goto label_354664;
        }
    }
    ctx->pc = 0x354654u;
label_354654:
    // 0x354654: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x354654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_354658:
    // 0x354658: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35465c:
    if (ctx->pc == 0x35465Cu) {
        ctx->pc = 0x354660u;
        goto label_354660;
    }
    ctx->pc = 0x354658u;
    {
        const bool branch_taken_0x354658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x354658) {
            ctx->pc = 0x354664u;
            goto label_354664;
        }
    }
    ctx->pc = 0x354660u;
label_354660:
    // 0x354660: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x354660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354664:
    // 0x354664: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_354668:
    if (ctx->pc == 0x354668u) {
        ctx->pc = 0x35466Cu;
        goto label_35466c;
    }
    ctx->pc = 0x354664u;
    {
        const bool branch_taken_0x354664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354664) {
            ctx->pc = 0x354680u;
            goto label_354680;
        }
    }
    ctx->pc = 0x35466Cu;
label_35466c:
    // 0x35466c: 0xc075eb4  jal         func_1D7AD0
label_354670:
    if (ctx->pc == 0x354670u) {
        ctx->pc = 0x354670u;
            // 0x354670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354674u;
        goto label_354674;
    }
    ctx->pc = 0x35466Cu;
    SET_GPR_U32(ctx, 31, 0x354674u);
    ctx->pc = 0x354670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35466Cu;
            // 0x354670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354674u; }
        if (ctx->pc != 0x354674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354674u; }
        if (ctx->pc != 0x354674u) { return; }
    }
    ctx->pc = 0x354674u;
label_354674:
    // 0x354674: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_354678:
    if (ctx->pc == 0x354678u) {
        ctx->pc = 0x35467Cu;
        goto label_35467c;
    }
    ctx->pc = 0x354674u;
    {
        const bool branch_taken_0x354674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354674) {
            ctx->pc = 0x354680u;
            goto label_354680;
        }
    }
    ctx->pc = 0x35467Cu;
label_35467c:
    // 0x35467c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35467cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354680:
    // 0x354680: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_354684:
    if (ctx->pc == 0x354684u) {
        ctx->pc = 0x354688u;
        goto label_354688;
    }
    ctx->pc = 0x354680u;
    {
        const bool branch_taken_0x354680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x354680) {
            ctx->pc = 0x354698u;
            goto label_354698;
        }
    }
    ctx->pc = 0x354688u;
label_354688:
    // 0x354688: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x354688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_35468c:
    // 0x35468c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_354690:
    // 0x354690: 0x1462013b  bne         $v1, $v0, . + 4 + (0x13B << 2)
label_354694:
    if (ctx->pc == 0x354694u) {
        ctx->pc = 0x354698u;
        goto label_354698;
    }
    ctx->pc = 0x354690u;
    {
        const bool branch_taken_0x354690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x354690) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354698u;
label_354698:
    // 0x354698: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35469c:
    // 0x35469c: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x35469cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_3546a0:
    // 0x3546a0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3546a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3546a4:
    // 0x3546a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3546a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3546a8:
    // 0x3546a8: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x3546a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_3546ac:
    // 0x3546ac: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x3546acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_3546b0:
    // 0x3546b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3546b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3546b4:
    // 0x3546b4: 0xc0bb404  jal         func_2ED010
label_3546b8:
    if (ctx->pc == 0x3546B8u) {
        ctx->pc = 0x3546B8u;
            // 0x3546b8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3546BCu;
        goto label_3546bc;
    }
    ctx->pc = 0x3546B4u;
    SET_GPR_U32(ctx, 31, 0x3546BCu);
    ctx->pc = 0x3546B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3546B4u;
            // 0x3546b8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546BCu; }
        if (ctx->pc != 0x3546BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546BCu; }
        if (ctx->pc != 0x3546BCu) { return; }
    }
    ctx->pc = 0x3546BCu;
label_3546bc:
    // 0x3546bc: 0x10000130  b           . + 4 + (0x130 << 2)
label_3546c0:
    if (ctx->pc == 0x3546C0u) {
        ctx->pc = 0x3546C4u;
        goto label_3546c4;
    }
    ctx->pc = 0x3546BCu;
    {
        const bool branch_taken_0x3546bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546bc) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3546C4u;
label_3546c4:
    // 0x3546c4: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x3546c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3546c8:
    // 0x3546c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3546c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3546cc:
    // 0x3546cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3546d0:
    if (ctx->pc == 0x3546D0u) {
        ctx->pc = 0x3546D0u;
            // 0x3546d0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3546D4u;
        goto label_3546d4;
    }
    ctx->pc = 0x3546CCu;
    {
        const bool branch_taken_0x3546cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3546D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3546CCu;
            // 0x3546d0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3546cc) {
            ctx->pc = 0x3546E0u;
            goto label_3546e0;
        }
    }
    ctx->pc = 0x3546D4u;
label_3546d4:
    // 0x3546d4: 0x8e620d78  lw          $v0, 0xD78($s3)
    ctx->pc = 0x3546d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_3546d8:
    // 0x3546d8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3546d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3546dc:
    // 0x3546dc: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3546dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3546e0:
    // 0x3546e0: 0x8e620e00  lw          $v0, 0xE00($s3)
    ctx->pc = 0x3546e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3584)));
label_3546e4:
    // 0x3546e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3546e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3546e8:
    // 0x3546e8: 0xc075ecc  jal         func_1D7B30
label_3546ec:
    if (ctx->pc == 0x3546ECu) {
        ctx->pc = 0x3546ECu;
            // 0x3546ec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x3546F0u;
        goto label_3546f0;
    }
    ctx->pc = 0x3546E8u;
    SET_GPR_U32(ctx, 31, 0x3546F0u);
    ctx->pc = 0x3546ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3546E8u;
            // 0x3546ec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546F0u; }
        if (ctx->pc != 0x3546F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3546F0u; }
        if (ctx->pc != 0x3546F0u) { return; }
    }
    ctx->pc = 0x3546F0u;
label_3546f0:
    // 0x3546f0: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x3546f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3546f4:
    // 0x3546f4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3546f4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3546f8:
    // 0x3546f8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3546fc:
    if (ctx->pc == 0x3546FCu) {
        ctx->pc = 0x3546FCu;
            // 0x3546fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354700u;
        goto label_354700;
    }
    ctx->pc = 0x3546F8u;
    {
        const bool branch_taken_0x3546f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3546FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3546F8u;
            // 0x3546fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3546f8) {
            ctx->pc = 0x354710u;
            goto label_354710;
        }
    }
    ctx->pc = 0x354700u;
label_354700:
    // 0x354700: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x354700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_354704:
    // 0x354704: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_354708:
    if (ctx->pc == 0x354708u) {
        ctx->pc = 0x35470Cu;
        goto label_35470c;
    }
    ctx->pc = 0x354704u;
    {
        const bool branch_taken_0x354704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x354704) {
            ctx->pc = 0x354710u;
            goto label_354710;
        }
    }
    ctx->pc = 0x35470Cu;
label_35470c:
    // 0x35470c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x35470cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354710:
    // 0x354710: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_354714:
    if (ctx->pc == 0x354714u) {
        ctx->pc = 0x354718u;
        goto label_354718;
    }
    ctx->pc = 0x354710u;
    {
        const bool branch_taken_0x354710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354710) {
            ctx->pc = 0x35472Cu;
            goto label_35472c;
        }
    }
    ctx->pc = 0x354718u;
label_354718:
    // 0x354718: 0xc075eb4  jal         func_1D7AD0
label_35471c:
    if (ctx->pc == 0x35471Cu) {
        ctx->pc = 0x35471Cu;
            // 0x35471c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354720u;
        goto label_354720;
    }
    ctx->pc = 0x354718u;
    SET_GPR_U32(ctx, 31, 0x354720u);
    ctx->pc = 0x35471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354718u;
            // 0x35471c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354720u; }
        if (ctx->pc != 0x354720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354720u; }
        if (ctx->pc != 0x354720u) { return; }
    }
    ctx->pc = 0x354720u;
label_354720:
    // 0x354720: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_354724:
    if (ctx->pc == 0x354724u) {
        ctx->pc = 0x354728u;
        goto label_354728;
    }
    ctx->pc = 0x354720u;
    {
        const bool branch_taken_0x354720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354720) {
            ctx->pc = 0x35472Cu;
            goto label_35472c;
        }
    }
    ctx->pc = 0x354728u;
label_354728:
    // 0x354728: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x354728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35472c:
    // 0x35472c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_354730:
    if (ctx->pc == 0x354730u) {
        ctx->pc = 0x354734u;
        goto label_354734;
    }
    ctx->pc = 0x35472Cu;
    {
        const bool branch_taken_0x35472c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x35472c) {
            ctx->pc = 0x354744u;
            goto label_354744;
        }
    }
    ctx->pc = 0x354734u;
label_354734:
    // 0x354734: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x354734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_354738:
    // 0x354738: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x354738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35473c:
    // 0x35473c: 0x14620110  bne         $v1, $v0, . + 4 + (0x110 << 2)
label_354740:
    if (ctx->pc == 0x354740u) {
        ctx->pc = 0x354744u;
        goto label_354744;
    }
    ctx->pc = 0x35473Cu;
    {
        const bool branch_taken_0x35473c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35473c) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354744u;
label_354744:
    // 0x354744: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354748:
    // 0x354748: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x354748u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_35474c:
    // 0x35474c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x35474cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_354750:
    // 0x354750: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x354750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_354754:
    // 0x354754: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x354754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_354758:
    // 0x354758: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x354758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_35475c:
    // 0x35475c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35475cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354760:
    // 0x354760: 0xc0bb404  jal         func_2ED010
label_354764:
    if (ctx->pc == 0x354764u) {
        ctx->pc = 0x354764u;
            // 0x354764: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x354768u;
        goto label_354768;
    }
    ctx->pc = 0x354760u;
    SET_GPR_U32(ctx, 31, 0x354768u);
    ctx->pc = 0x354764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354760u;
            // 0x354764: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354768u; }
        if (ctx->pc != 0x354768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354768u; }
        if (ctx->pc != 0x354768u) { return; }
    }
    ctx->pc = 0x354768u;
label_354768:
    // 0x354768: 0x10000105  b           . + 4 + (0x105 << 2)
label_35476c:
    if (ctx->pc == 0x35476Cu) {
        ctx->pc = 0x354770u;
        goto label_354770;
    }
    ctx->pc = 0x354768u;
    {
        const bool branch_taken_0x354768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354768) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354770u;
label_354770:
    // 0x354770: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x354770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_354774:
    // 0x354774: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x354774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354778:
    // 0x354778: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_35477c:
    if (ctx->pc == 0x35477Cu) {
        ctx->pc = 0x35477Cu;
            // 0x35477c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x354780u;
        goto label_354780;
    }
    ctx->pc = 0x354778u;
    {
        const bool branch_taken_0x354778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354778u;
            // 0x35477c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354778) {
            ctx->pc = 0x35478Cu;
            goto label_35478c;
        }
    }
    ctx->pc = 0x354780u;
label_354780:
    // 0x354780: 0x8e620d78  lw          $v0, 0xD78($s3)
    ctx->pc = 0x354780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_354784:
    // 0x354784: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x354784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_354788:
    // 0x354788: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x354788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_35478c:
    // 0x35478c: 0x8e620e00  lw          $v0, 0xE00($s3)
    ctx->pc = 0x35478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3584)));
label_354790:
    // 0x354790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x354790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_354794:
    // 0x354794: 0xc075ecc  jal         func_1D7B30
label_354798:
    if (ctx->pc == 0x354798u) {
        ctx->pc = 0x354798u;
            // 0x354798: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x35479Cu;
        goto label_35479c;
    }
    ctx->pc = 0x354794u;
    SET_GPR_U32(ctx, 31, 0x35479Cu);
    ctx->pc = 0x354798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354794u;
            // 0x354798: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35479Cu; }
        if (ctx->pc != 0x35479Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35479Cu; }
        if (ctx->pc != 0x35479Cu) { return; }
    }
    ctx->pc = 0x35479Cu;
label_35479c:
    // 0x35479c: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x35479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3547a0:
    // 0x3547a0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3547a0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3547a4:
    // 0x3547a4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3547a8:
    if (ctx->pc == 0x3547A8u) {
        ctx->pc = 0x3547A8u;
            // 0x3547a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3547ACu;
        goto label_3547ac;
    }
    ctx->pc = 0x3547A4u;
    {
        const bool branch_taken_0x3547a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3547A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3547A4u;
            // 0x3547a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3547a4) {
            ctx->pc = 0x3547BCu;
            goto label_3547bc;
        }
    }
    ctx->pc = 0x3547ACu;
label_3547ac:
    // 0x3547ac: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3547acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3547b0:
    // 0x3547b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3547b4:
    if (ctx->pc == 0x3547B4u) {
        ctx->pc = 0x3547B8u;
        goto label_3547b8;
    }
    ctx->pc = 0x3547B0u;
    {
        const bool branch_taken_0x3547b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3547b0) {
            ctx->pc = 0x3547BCu;
            goto label_3547bc;
        }
    }
    ctx->pc = 0x3547B8u;
label_3547b8:
    // 0x3547b8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3547b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3547bc:
    // 0x3547bc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3547c0:
    if (ctx->pc == 0x3547C0u) {
        ctx->pc = 0x3547C4u;
        goto label_3547c4;
    }
    ctx->pc = 0x3547BCu;
    {
        const bool branch_taken_0x3547bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3547bc) {
            ctx->pc = 0x3547D8u;
            goto label_3547d8;
        }
    }
    ctx->pc = 0x3547C4u;
label_3547c4:
    // 0x3547c4: 0xc075eb4  jal         func_1D7AD0
label_3547c8:
    if (ctx->pc == 0x3547C8u) {
        ctx->pc = 0x3547C8u;
            // 0x3547c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3547CCu;
        goto label_3547cc;
    }
    ctx->pc = 0x3547C4u;
    SET_GPR_U32(ctx, 31, 0x3547CCu);
    ctx->pc = 0x3547C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3547C4u;
            // 0x3547c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3547CCu; }
        if (ctx->pc != 0x3547CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3547CCu; }
        if (ctx->pc != 0x3547CCu) { return; }
    }
    ctx->pc = 0x3547CCu;
label_3547cc:
    // 0x3547cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3547d0:
    if (ctx->pc == 0x3547D0u) {
        ctx->pc = 0x3547D4u;
        goto label_3547d4;
    }
    ctx->pc = 0x3547CCu;
    {
        const bool branch_taken_0x3547cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3547cc) {
            ctx->pc = 0x3547D8u;
            goto label_3547d8;
        }
    }
    ctx->pc = 0x3547D4u;
label_3547d4:
    // 0x3547d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3547d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3547d8:
    // 0x3547d8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_3547dc:
    if (ctx->pc == 0x3547DCu) {
        ctx->pc = 0x3547E0u;
        goto label_3547e0;
    }
    ctx->pc = 0x3547D8u;
    {
        const bool branch_taken_0x3547d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3547d8) {
            ctx->pc = 0x3547F0u;
            goto label_3547f0;
        }
    }
    ctx->pc = 0x3547E0u;
label_3547e0:
    // 0x3547e0: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x3547e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3547e4:
    // 0x3547e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3547e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3547e8:
    // 0x3547e8: 0x146200e5  bne         $v1, $v0, . + 4 + (0xE5 << 2)
label_3547ec:
    if (ctx->pc == 0x3547ECu) {
        ctx->pc = 0x3547F0u;
        goto label_3547f0;
    }
    ctx->pc = 0x3547E8u;
    {
        const bool branch_taken_0x3547e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3547e8) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3547F0u;
label_3547f0:
    // 0x3547f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3547f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3547f4:
    // 0x3547f4: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x3547f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_3547f8:
    // 0x3547f8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3547f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3547fc:
    // 0x3547fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3547fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_354800:
    // 0x354800: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x354800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_354804:
    // 0x354804: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x354804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_354808:
    // 0x354808: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x354808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35480c:
    // 0x35480c: 0xc0bb404  jal         func_2ED010
label_354810:
    if (ctx->pc == 0x354810u) {
        ctx->pc = 0x354810u;
            // 0x354810: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x354814u;
        goto label_354814;
    }
    ctx->pc = 0x35480Cu;
    SET_GPR_U32(ctx, 31, 0x354814u);
    ctx->pc = 0x354810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35480Cu;
            // 0x354810: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354814u; }
        if (ctx->pc != 0x354814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354814u; }
        if (ctx->pc != 0x354814u) { return; }
    }
    ctx->pc = 0x354814u;
label_354814:
    // 0x354814: 0x100000da  b           . + 4 + (0xDA << 2)
label_354818:
    if (ctx->pc == 0x354818u) {
        ctx->pc = 0x35481Cu;
        goto label_35481c;
    }
    ctx->pc = 0x354814u;
    {
        const bool branch_taken_0x354814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354814) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x35481Cu;
label_35481c:
    // 0x35481c: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x35481cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_354820:
    // 0x354820: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x354820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354824:
    // 0x354824: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_354828:
    if (ctx->pc == 0x354828u) {
        ctx->pc = 0x354828u;
            // 0x354828: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x35482Cu;
        goto label_35482c;
    }
    ctx->pc = 0x354824u;
    {
        const bool branch_taken_0x354824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x354828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354824u;
            // 0x354828: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354824) {
            ctx->pc = 0x354838u;
            goto label_354838;
        }
    }
    ctx->pc = 0x35482Cu;
label_35482c:
    // 0x35482c: 0x8e620d78  lw          $v0, 0xD78($s3)
    ctx->pc = 0x35482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_354830:
    // 0x354830: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x354830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_354834:
    // 0x354834: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x354834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_354838:
    // 0x354838: 0x8e620e00  lw          $v0, 0xE00($s3)
    ctx->pc = 0x354838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3584)));
label_35483c:
    // 0x35483c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35483cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_354840:
    // 0x354840: 0xc075ecc  jal         func_1D7B30
label_354844:
    if (ctx->pc == 0x354844u) {
        ctx->pc = 0x354844u;
            // 0x354844: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x354848u;
        goto label_354848;
    }
    ctx->pc = 0x354840u;
    SET_GPR_U32(ctx, 31, 0x354848u);
    ctx->pc = 0x354844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354840u;
            // 0x354844: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354848u; }
        if (ctx->pc != 0x354848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354848u; }
        if (ctx->pc != 0x354848u) { return; }
    }
    ctx->pc = 0x354848u;
label_354848:
    // 0x354848: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x354848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_35484c:
    // 0x35484c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x35484cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_354850:
    // 0x354850: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_354854:
    if (ctx->pc == 0x354854u) {
        ctx->pc = 0x354854u;
            // 0x354854: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354858u;
        goto label_354858;
    }
    ctx->pc = 0x354850u;
    {
        const bool branch_taken_0x354850 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x354854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354850u;
            // 0x354854: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354850) {
            ctx->pc = 0x354868u;
            goto label_354868;
        }
    }
    ctx->pc = 0x354858u;
label_354858:
    // 0x354858: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x354858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35485c:
    // 0x35485c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_354860:
    if (ctx->pc == 0x354860u) {
        ctx->pc = 0x354864u;
        goto label_354864;
    }
    ctx->pc = 0x35485Cu;
    {
        const bool branch_taken_0x35485c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35485c) {
            ctx->pc = 0x354868u;
            goto label_354868;
        }
    }
    ctx->pc = 0x354864u;
label_354864:
    // 0x354864: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x354864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354868:
    // 0x354868: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_35486c:
    if (ctx->pc == 0x35486Cu) {
        ctx->pc = 0x354870u;
        goto label_354870;
    }
    ctx->pc = 0x354868u;
    {
        const bool branch_taken_0x354868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354868) {
            ctx->pc = 0x354884u;
            goto label_354884;
        }
    }
    ctx->pc = 0x354870u;
label_354870:
    // 0x354870: 0xc075eb4  jal         func_1D7AD0
label_354874:
    if (ctx->pc == 0x354874u) {
        ctx->pc = 0x354874u;
            // 0x354874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354878u;
        goto label_354878;
    }
    ctx->pc = 0x354870u;
    SET_GPR_U32(ctx, 31, 0x354878u);
    ctx->pc = 0x354874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354870u;
            // 0x354874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354878u; }
        if (ctx->pc != 0x354878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354878u; }
        if (ctx->pc != 0x354878u) { return; }
    }
    ctx->pc = 0x354878u;
label_354878:
    // 0x354878: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35487c:
    if (ctx->pc == 0x35487Cu) {
        ctx->pc = 0x354880u;
        goto label_354880;
    }
    ctx->pc = 0x354878u;
    {
        const bool branch_taken_0x354878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354878) {
            ctx->pc = 0x354884u;
            goto label_354884;
        }
    }
    ctx->pc = 0x354880u;
label_354880:
    // 0x354880: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x354880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354884:
    // 0x354884: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_354888:
    if (ctx->pc == 0x354888u) {
        ctx->pc = 0x35488Cu;
        goto label_35488c;
    }
    ctx->pc = 0x354884u;
    {
        const bool branch_taken_0x354884 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x354884) {
            ctx->pc = 0x35489Cu;
            goto label_35489c;
        }
    }
    ctx->pc = 0x35488Cu;
label_35488c:
    // 0x35488c: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x35488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_354890:
    // 0x354890: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x354890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_354894:
    // 0x354894: 0x146200ba  bne         $v1, $v0, . + 4 + (0xBA << 2)
label_354898:
    if (ctx->pc == 0x354898u) {
        ctx->pc = 0x35489Cu;
        goto label_35489c;
    }
    ctx->pc = 0x354894u;
    {
        const bool branch_taken_0x354894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x354894) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x35489Cu;
label_35489c:
    // 0x35489c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35489cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3548a0:
    // 0x3548a0: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x3548a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_3548a4:
    // 0x3548a4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3548a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3548a8:
    // 0x3548a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3548a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3548ac:
    // 0x3548ac: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x3548acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_3548b0:
    // 0x3548b0: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x3548b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_3548b4:
    // 0x3548b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3548b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3548b8:
    // 0x3548b8: 0xc0bb404  jal         func_2ED010
label_3548bc:
    if (ctx->pc == 0x3548BCu) {
        ctx->pc = 0x3548BCu;
            // 0x3548bc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3548C0u;
        goto label_3548c0;
    }
    ctx->pc = 0x3548B8u;
    SET_GPR_U32(ctx, 31, 0x3548C0u);
    ctx->pc = 0x3548BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3548B8u;
            // 0x3548bc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3548C0u; }
        if (ctx->pc != 0x3548C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3548C0u; }
        if (ctx->pc != 0x3548C0u) { return; }
    }
    ctx->pc = 0x3548C0u;
label_3548c0:
    // 0x3548c0: 0x100000af  b           . + 4 + (0xAF << 2)
label_3548c4:
    if (ctx->pc == 0x3548C4u) {
        ctx->pc = 0x3548C8u;
        goto label_3548c8;
    }
    ctx->pc = 0x3548C0u;
    {
        const bool branch_taken_0x3548c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3548c0) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3548C8u;
label_3548c8:
    // 0x3548c8: 0x8e630d6c  lw          $v1, 0xD6C($s3)
    ctx->pc = 0x3548c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_3548cc:
    // 0x3548cc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3548ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3548d0:
    // 0x3548d0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x3548d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_3548d4:
    // 0x3548d4: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_3548d8:
    if (ctx->pc == 0x3548D8u) {
        ctx->pc = 0x3548D8u;
            // 0x3548d8: 0x8e6411d4  lw          $a0, 0x11D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4564)));
        ctx->pc = 0x3548DCu;
        goto label_3548dc;
    }
    ctx->pc = 0x3548D4u;
    {
        const bool branch_taken_0x3548d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3548d4) {
            ctx->pc = 0x3548D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3548D4u;
            // 0x3548d8: 0x8e6411d4  lw          $a0, 0x11D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4564)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354910u;
            goto label_354910;
        }
    }
    ctx->pc = 0x3548DCu;
label_3548dc:
    // 0x3548dc: 0x8e620a68  lw          $v0, 0xA68($s3)
    ctx->pc = 0x3548dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2664)));
label_3548e0:
    // 0x3548e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3548e4:
    if (ctx->pc == 0x3548E4u) {
        ctx->pc = 0x3548E4u;
            // 0x3548e4: 0x3c024416  lui         $v0, 0x4416 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
        ctx->pc = 0x3548E8u;
        goto label_3548e8;
    }
    ctx->pc = 0x3548E0u;
    {
        const bool branch_taken_0x3548e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3548e0) {
            ctx->pc = 0x3548E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3548E0u;
            // 0x3548e4: 0x3c024416  lui         $v0, 0x4416 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354908u;
            goto label_354908;
        }
    }
    ctx->pc = 0x3548E8u;
label_3548e8:
    // 0x3548e8: 0x8e640d70  lw          $a0, 0xD70($s3)
    ctx->pc = 0x3548e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
label_3548ec:
    // 0x3548ec: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3548ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_3548f0:
    // 0x3548f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3548f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3548f4:
    // 0x3548f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3548f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3548f8:
    // 0x3548f8: 0xc0bdf94  jal         func_2F7E50
label_3548fc:
    if (ctx->pc == 0x3548FCu) {
        ctx->pc = 0x3548FCu;
            // 0x3548fc: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x354900u;
        goto label_354900;
    }
    ctx->pc = 0x3548F8u;
    SET_GPR_U32(ctx, 31, 0x354900u);
    ctx->pc = 0x3548FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3548F8u;
            // 0x3548fc: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354900u; }
        if (ctx->pc != 0x354900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354900u; }
        if (ctx->pc != 0x354900u) { return; }
    }
    ctx->pc = 0x354900u;
label_354900:
    // 0x354900: 0x1000009f  b           . + 4 + (0x9F << 2)
label_354904:
    if (ctx->pc == 0x354904u) {
        ctx->pc = 0x354908u;
        goto label_354908;
    }
    ctx->pc = 0x354900u;
    {
        const bool branch_taken_0x354900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354900) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354908u;
label_354908:
    // 0x354908: 0x1000009d  b           . + 4 + (0x9D << 2)
label_35490c:
    if (ctx->pc == 0x35490Cu) {
        ctx->pc = 0x35490Cu;
            // 0x35490c: 0xae62118c  sw          $v0, 0x118C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4492), GPR_U32(ctx, 2));
        ctx->pc = 0x354910u;
        goto label_354910;
    }
    ctx->pc = 0x354908u;
    {
        const bool branch_taken_0x354908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35490Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354908u;
            // 0x35490c: 0xae62118c  sw          $v0, 0x118C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354908) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354910u;
label_354910:
    // 0x354910: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x354910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_354914:
    // 0x354914: 0x1083009a  beq         $a0, $v1, . + 4 + (0x9A << 2)
label_354918:
    if (ctx->pc == 0x354918u) {
        ctx->pc = 0x35491Cu;
        goto label_35491c;
    }
    ctx->pc = 0x354914u;
    {
        const bool branch_taken_0x354914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x354914) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x35491Cu;
label_35491c:
    // 0x35491c: 0x8e620da0  lw          $v0, 0xDA0($s3)
    ctx->pc = 0x35491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
label_354920:
    // 0x354920: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x354920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_354924:
    // 0x354924: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
label_354928:
    if (ctx->pc == 0x354928u) {
        ctx->pc = 0x35492Cu;
        goto label_35492c;
    }
    ctx->pc = 0x354924u;
    {
        const bool branch_taken_0x354924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354924) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x35492Cu;
label_35492c:
    // 0x35492c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x35492cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_354930:
    // 0x354930: 0xae6411d8  sw          $a0, 0x11D8($s3)
    ctx->pc = 0x354930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4568), GPR_U32(ctx, 4));
label_354934:
    // 0x354934: 0xc440cf98  lwc1        $f0, -0x3068($v0)
    ctx->pc = 0x354934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354938:
    // 0x354938: 0xae6311d4  sw          $v1, 0x11D4($s3)
    ctx->pc = 0x354938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4564), GPR_U32(ctx, 3));
label_35493c:
    // 0x35493c: 0xe66011e0  swc1        $f0, 0x11E0($s3)
    ctx->pc = 0x35493cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4576), bits); }
label_354940:
    // 0x354940: 0xc0b6738  jal         func_2D9CE0
label_354944:
    if (ctx->pc == 0x354944u) {
        ctx->pc = 0x354944u;
            // 0x354944: 0x8e640d74  lw          $a0, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->pc = 0x354948u;
        goto label_354948;
    }
    ctx->pc = 0x354940u;
    SET_GPR_U32(ctx, 31, 0x354948u);
    ctx->pc = 0x354944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354940u;
            // 0x354944: 0x8e640d74  lw          $a0, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CE0u;
    if (runtime->hasFunction(0x2D9CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2D9CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354948u; }
        if (ctx->pc != 0x354948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9CE0_0x2d9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354948u; }
        if (ctx->pc != 0x354948u) { return; }
    }
    ctx->pc = 0x354948u;
label_354948:
    // 0x354948: 0x1000008d  b           . + 4 + (0x8D << 2)
label_35494c:
    if (ctx->pc == 0x35494Cu) {
        ctx->pc = 0x354950u;
        goto label_354950;
    }
    ctx->pc = 0x354948u;
    {
        const bool branch_taken_0x354948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354948) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354950u;
label_354950:
    // 0x354950: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x354950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_354954:
    // 0x354954: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x354954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354958:
    // 0x354958: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_35495c:
    if (ctx->pc == 0x35495Cu) {
        ctx->pc = 0x35495Cu;
            // 0x35495c: 0x3c024370  lui         $v0, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
        ctx->pc = 0x354960u;
        goto label_354960;
    }
    ctx->pc = 0x354958u;
    {
        const bool branch_taken_0x354958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x354958) {
            ctx->pc = 0x35495Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354958u;
            // 0x35495c: 0x3c024370  lui         $v0, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354978u;
            goto label_354978;
        }
    }
    ctx->pc = 0x354960u;
label_354960:
    // 0x354960: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x354960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_354964:
    // 0x354964: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x354964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_354968:
    // 0x354968: 0xc078118  jal         func_1E0460
label_35496c:
    if (ctx->pc == 0x35496Cu) {
        ctx->pc = 0x35496Cu;
            // 0x35496c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354970u;
        goto label_354970;
    }
    ctx->pc = 0x354968u;
    SET_GPR_U32(ctx, 31, 0x354970u);
    ctx->pc = 0x35496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354968u;
            // 0x35496c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0460u;
    if (runtime->hasFunction(0x1E0460u)) {
        auto targetFn = runtime->lookupFunction(0x1E0460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354970u; }
        if (ctx->pc != 0x354970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0460_0x1e0460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354970u; }
        if (ctx->pc != 0x354970u) { return; }
    }
    ctx->pc = 0x354970u;
label_354970:
    // 0x354970: 0x10000083  b           . + 4 + (0x83 << 2)
label_354974:
    if (ctx->pc == 0x354974u) {
        ctx->pc = 0x354978u;
        goto label_354978;
    }
    ctx->pc = 0x354970u;
    {
        const bool branch_taken_0x354970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354970) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354978u;
label_354978:
    // 0x354978: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x354978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35497c:
    // 0x35497c: 0xc078118  jal         func_1E0460
label_354980:
    if (ctx->pc == 0x354980u) {
        ctx->pc = 0x354980u;
            // 0x354980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354984u;
        goto label_354984;
    }
    ctx->pc = 0x35497Cu;
    SET_GPR_U32(ctx, 31, 0x354984u);
    ctx->pc = 0x354980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35497Cu;
            // 0x354980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0460u;
    if (runtime->hasFunction(0x1E0460u)) {
        auto targetFn = runtime->lookupFunction(0x1E0460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354984u; }
        if (ctx->pc != 0x354984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0460_0x1e0460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354984u; }
        if (ctx->pc != 0x354984u) { return; }
    }
    ctx->pc = 0x354984u;
label_354984:
    // 0x354984: 0x1000007e  b           . + 4 + (0x7E << 2)
label_354988:
    if (ctx->pc == 0x354988u) {
        ctx->pc = 0x35498Cu;
        goto label_35498c;
    }
    ctx->pc = 0x354984u;
    {
        const bool branch_taken_0x354984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354984) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x35498Cu;
label_35498c:
    // 0x35498c: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x35498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_354990:
    // 0x354990: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x354990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354994:
    // 0x354994: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_354998:
    if (ctx->pc == 0x354998u) {
        ctx->pc = 0x354998u;
            // 0x354998: 0x3c0243b4  lui         $v0, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
        ctx->pc = 0x35499Cu;
        goto label_35499c;
    }
    ctx->pc = 0x354994u;
    {
        const bool branch_taken_0x354994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x354994) {
            ctx->pc = 0x354998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354994u;
            // 0x354998: 0x3c0243b4  lui         $v0, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3549B4u;
            goto label_3549b4;
        }
    }
    ctx->pc = 0x35499Cu;
label_35499c:
    // 0x35499c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x35499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_3549a0:
    // 0x3549a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3549a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3549a4:
    // 0x3549a4: 0xc0780c8  jal         func_1E0320
label_3549a8:
    if (ctx->pc == 0x3549A8u) {
        ctx->pc = 0x3549A8u;
            // 0x3549a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3549ACu;
        goto label_3549ac;
    }
    ctx->pc = 0x3549A4u;
    SET_GPR_U32(ctx, 31, 0x3549ACu);
    ctx->pc = 0x3549A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3549A4u;
            // 0x3549a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0320u;
    if (runtime->hasFunction(0x1E0320u)) {
        auto targetFn = runtime->lookupFunction(0x1E0320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549ACu; }
        if (ctx->pc != 0x3549ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0320_0x1e0320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549ACu; }
        if (ctx->pc != 0x3549ACu) { return; }
    }
    ctx->pc = 0x3549ACu;
label_3549ac:
    // 0x3549ac: 0x10000074  b           . + 4 + (0x74 << 2)
label_3549b0:
    if (ctx->pc == 0x3549B0u) {
        ctx->pc = 0x3549B4u;
        goto label_3549b4;
    }
    ctx->pc = 0x3549ACu;
    {
        const bool branch_taken_0x3549ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3549ac) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3549B4u;
label_3549b4:
    // 0x3549b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3549b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3549b8:
    // 0x3549b8: 0xc0780c8  jal         func_1E0320
label_3549bc:
    if (ctx->pc == 0x3549BCu) {
        ctx->pc = 0x3549BCu;
            // 0x3549bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3549C0u;
        goto label_3549c0;
    }
    ctx->pc = 0x3549B8u;
    SET_GPR_U32(ctx, 31, 0x3549C0u);
    ctx->pc = 0x3549BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3549B8u;
            // 0x3549bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0320u;
    if (runtime->hasFunction(0x1E0320u)) {
        auto targetFn = runtime->lookupFunction(0x1E0320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549C0u; }
        if (ctx->pc != 0x3549C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0320_0x1e0320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549C0u; }
        if (ctx->pc != 0x3549C0u) { return; }
    }
    ctx->pc = 0x3549C0u;
label_3549c0:
    // 0x3549c0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_3549c4:
    if (ctx->pc == 0x3549C4u) {
        ctx->pc = 0x3549C8u;
        goto label_3549c8;
    }
    ctx->pc = 0x3549C0u;
    {
        const bool branch_taken_0x3549c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3549c0) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x3549C8u;
label_3549c8:
    // 0x3549c8: 0x8e63069c  lw          $v1, 0x69C($s3)
    ctx->pc = 0x3549c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1692)));
label_3549cc:
    // 0x3549cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3549ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3549d0:
    // 0x3549d0: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
label_3549d4:
    if (ctx->pc == 0x3549D4u) {
        ctx->pc = 0x3549D4u;
            // 0x3549d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3549D8u;
        goto label_3549d8;
    }
    ctx->pc = 0x3549D0u;
    {
        const bool branch_taken_0x3549d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3549d0) {
            ctx->pc = 0x3549D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3549D0u;
            // 0x3549d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3549DCu;
            goto label_3549dc;
        }
    }
    ctx->pc = 0x3549D8u;
label_3549d8:
    // 0x3549d8: 0x86620644  lh          $v0, 0x644($s3)
    ctx->pc = 0x3549d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1604)));
label_3549dc:
    // 0x3549dc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3549dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
label_3549e0:
    // 0x3549e0: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x3549e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_3549e4:
    // 0x3549e4: 0xc040180  jal         func_100600
label_3549e8:
    if (ctx->pc == 0x3549E8u) {
        ctx->pc = 0x3549E8u;
            // 0x3549e8: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->pc = 0x3549ECu;
        goto label_3549ec;
    }
    ctx->pc = 0x3549E4u;
    SET_GPR_U32(ctx, 31, 0x3549ECu);
    ctx->pc = 0x3549E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3549E4u;
            // 0x3549e8: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549ECu; }
        if (ctx->pc != 0x3549ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3549ECu; }
        if (ctx->pc != 0x3549ECu) { return; }
    }
    ctx->pc = 0x3549ECu;
label_3549ec:
    // 0x3549ec: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3549f0:
    if (ctx->pc == 0x3549F0u) {
        ctx->pc = 0x3549F0u;
            // 0x3549f0: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x3549F4u;
        goto label_3549f4;
    }
    ctx->pc = 0x3549ECu;
    {
        const bool branch_taken_0x3549ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3549ec) {
            ctx->pc = 0x3549F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3549ECu;
            // 0x3549f0: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354A14u;
            goto label_354a14;
        }
    }
    ctx->pc = 0x3549F4u;
label_3549f4:
    // 0x3549f4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3549f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_3549f8:
    // 0x3549f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3549f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3549fc:
    // 0x3549fc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3549fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_354a00:
    // 0x354a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354a04:
    // 0x354a04: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x354a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_354a08:
    // 0x354a08: 0xc157ce8  jal         func_55F3A0
label_354a0c:
    if (ctx->pc == 0x354A0Cu) {
        ctx->pc = 0x354A0Cu;
            // 0x354a0c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x354A10u;
        goto label_354a10;
    }
    ctx->pc = 0x354A08u;
    SET_GPR_U32(ctx, 31, 0x354A10u);
    ctx->pc = 0x354A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354A08u;
            // 0x354a0c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55F3A0u;
    if (runtime->hasFunction(0x55F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x55F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A10u; }
        if (ctx->pc != 0x354A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055F3A0_0x55f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A10u; }
        if (ctx->pc != 0x354A10u) { return; }
    }
    ctx->pc = 0x354A10u;
label_354a10:
    // 0x354a10: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x354a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_354a14:
    // 0x354a14: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x354a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_354a18:
    // 0x354a18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354a1c:
    // 0x354a1c: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x354a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_354a20:
    // 0x354a20: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x354a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_354a24:
    // 0x354a24: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x354a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_354a28:
    // 0x354a28: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x354a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_354a2c:
    // 0x354a2c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x354a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_354a30:
    // 0x354a30: 0xc0582cc  jal         func_160B30
label_354a34:
    if (ctx->pc == 0x354A34u) {
        ctx->pc = 0x354A34u;
            // 0x354a34: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x354A38u;
        goto label_354a38;
    }
    ctx->pc = 0x354A30u;
    SET_GPR_U32(ctx, 31, 0x354A38u);
    ctx->pc = 0x354A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354A30u;
            // 0x354a34: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A38u; }
        if (ctx->pc != 0x354A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A38u; }
        if (ctx->pc != 0x354A38u) { return; }
    }
    ctx->pc = 0x354A38u;
label_354a38:
    // 0x354a38: 0x10000051  b           . + 4 + (0x51 << 2)
label_354a3c:
    if (ctx->pc == 0x354A3Cu) {
        ctx->pc = 0x354A40u;
        goto label_354a40;
    }
    ctx->pc = 0x354A38u;
    {
        const bool branch_taken_0x354a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354a38) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354A40u;
label_354a40:
    // 0x354a40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354a44:
    // 0x354a44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x354a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_354a48:
    // 0x354a48: 0x8c441d90  lw          $a0, 0x1D90($v0)
    ctx->pc = 0x354a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7568)));
label_354a4c:
    // 0x354a4c: 0xc14f8f0  jal         func_53E3C0
label_354a50:
    if (ctx->pc == 0x354A50u) {
        ctx->pc = 0x354A50u;
            // 0x354a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354A54u;
        goto label_354a54;
    }
    ctx->pc = 0x354A4Cu;
    SET_GPR_U32(ctx, 31, 0x354A54u);
    ctx->pc = 0x354A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354A4Cu;
            // 0x354a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E3C0u;
    if (runtime->hasFunction(0x53E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x53E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A54u; }
        if (ctx->pc != 0x354A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E3C0_0x53e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A54u; }
        if (ctx->pc != 0x354A54u) { return; }
    }
    ctx->pc = 0x354A54u;
label_354a54:
    // 0x354a54: 0x1000004a  b           . + 4 + (0x4A << 2)
label_354a58:
    if (ctx->pc == 0x354A58u) {
        ctx->pc = 0x354A5Cu;
        goto label_354a5c;
    }
    ctx->pc = 0x354A54u;
    {
        const bool branch_taken_0x354a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354a54) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354A5Cu;
label_354a5c:
    // 0x354a5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354a60:
    // 0x354a60: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x354a60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_354a64:
    // 0x354a64: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x354a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_354a68:
    // 0x354a68: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x354a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
label_354a6c:
    // 0x354a6c: 0x24c641f0  addiu       $a2, $a2, 0x41F0
    ctx->pc = 0x354a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16880));
label_354a70:
    // 0x354a70: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x354a70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_354a74:
    // 0x354a74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354a78:
    // 0x354a78: 0x8c440cc8  lw          $a0, 0xCC8($v0)
    ctx->pc = 0x354a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
label_354a7c:
    // 0x354a7c: 0x8ce20cc0  lw          $v0, 0xCC0($a3)
    ctx->pc = 0x354a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3264)));
label_354a80:
    // 0x354a80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x354a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_354a84:
    // 0x354a84: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x354a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_354a88:
    // 0x354a88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x354a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_354a8c:
    // 0x354a8c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x354a8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_354a90:
    // 0x354a90: 0xc1445c0  jal         func_511700
label_354a94:
    if (ctx->pc == 0x354A94u) {
        ctx->pc = 0x354A94u;
            // 0x354a94: 0x8e650d98  lw          $a1, 0xD98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
        ctx->pc = 0x354A98u;
        goto label_354a98;
    }
    ctx->pc = 0x354A90u;
    SET_GPR_U32(ctx, 31, 0x354A98u);
    ctx->pc = 0x354A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354A90u;
            // 0x354a94: 0x8e650d98  lw          $a1, 0xD98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x511700u;
    if (runtime->hasFunction(0x511700u)) {
        auto targetFn = runtime->lookupFunction(0x511700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A98u; }
        if (ctx->pc != 0x354A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00511700_0x511700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354A98u; }
        if (ctx->pc != 0x354A98u) { return; }
    }
    ctx->pc = 0x354A98u;
label_354a98:
    // 0x354a98: 0x10000039  b           . + 4 + (0x39 << 2)
label_354a9c:
    if (ctx->pc == 0x354A9Cu) {
        ctx->pc = 0x354AA0u;
        goto label_354aa0;
    }
    ctx->pc = 0x354A98u;
    {
        const bool branch_taken_0x354a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354a98) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354AA0u;
label_354aa0:
    // 0x354aa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354aa4:
    // 0x354aa4: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x354aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
label_354aa8:
    // 0x354aa8: 0xc1495f0  jal         func_5257C0
label_354aac:
    if (ctx->pc == 0x354AACu) {
        ctx->pc = 0x354AACu;
            // 0x354aac: 0x8e650d98  lw          $a1, 0xD98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
        ctx->pc = 0x354AB0u;
        goto label_354ab0;
    }
    ctx->pc = 0x354AA8u;
    SET_GPR_U32(ctx, 31, 0x354AB0u);
    ctx->pc = 0x354AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354AA8u;
            // 0x354aac: 0x8e650d98  lw          $a1, 0xD98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5257C0u;
    if (runtime->hasFunction(0x5257C0u)) {
        auto targetFn = runtime->lookupFunction(0x5257C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354AB0u; }
        if (ctx->pc != 0x354AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005257C0_0x5257c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354AB0u; }
        if (ctx->pc != 0x354AB0u) { return; }
    }
    ctx->pc = 0x354AB0u;
label_354ab0:
    // 0x354ab0: 0x10000033  b           . + 4 + (0x33 << 2)
label_354ab4:
    if (ctx->pc == 0x354AB4u) {
        ctx->pc = 0x354AB8u;
        goto label_354ab8;
    }
    ctx->pc = 0x354AB0u;
    {
        const bool branch_taken_0x354ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354ab0) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354AB8u;
label_354ab8:
    // 0x354ab8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354abc:
    // 0x354abc: 0x8e640d98  lw          $a0, 0xD98($s3)
    ctx->pc = 0x354abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_354ac0:
    // 0x354ac0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x354ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_354ac4:
    // 0x354ac4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x354ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_354ac8:
    // 0x354ac8: 0x8c420cbc  lw          $v0, 0xCBC($v0)
    ctx->pc = 0x354ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3260)));
label_354acc:
    // 0x354acc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x354accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_354ad0:
    // 0x354ad0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x354ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_354ad4:
    // 0x354ad4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x354ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_354ad8:
    // 0x354ad8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x354ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_354adc:
    // 0x354adc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_354ae0:
    if (ctx->pc == 0x354AE0u) {
        ctx->pc = 0x354AE4u;
        goto label_354ae4;
    }
    ctx->pc = 0x354ADCu;
    {
        const bool branch_taken_0x354adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354adc) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354AE4u;
label_354ae4:
    // 0x354ae4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x354ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_354ae8:
    // 0x354ae8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x354ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_354aec:
    // 0x354aec: 0x320f809  jalr        $t9
label_354af0:
    if (ctx->pc == 0x354AF0u) {
        ctx->pc = 0x354AF4u;
        goto label_354af4;
    }
    ctx->pc = 0x354AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354AF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x354AF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354AF4u; }
            if (ctx->pc != 0x354AF4u) { return; }
        }
        }
    }
    ctx->pc = 0x354AF4u;
label_354af4:
    // 0x354af4: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x354af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_354af8:
    // 0x354af8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x354af8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_354afc:
    // 0x354afc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_354b00:
    if (ctx->pc == 0x354B00u) {
        ctx->pc = 0x354B00u;
            // 0x354b00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354B04u;
        goto label_354b04;
    }
    ctx->pc = 0x354AFCu;
    {
        const bool branch_taken_0x354afc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x354B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354AFCu;
            // 0x354b00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354afc) {
            ctx->pc = 0x354B14u;
            goto label_354b14;
        }
    }
    ctx->pc = 0x354B04u;
label_354b04:
    // 0x354b04: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x354b04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_354b08:
    // 0x354b08: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_354b0c:
    if (ctx->pc == 0x354B0Cu) {
        ctx->pc = 0x354B10u;
        goto label_354b10;
    }
    ctx->pc = 0x354B08u;
    {
        const bool branch_taken_0x354b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b08) {
            ctx->pc = 0x354B14u;
            goto label_354b14;
        }
    }
    ctx->pc = 0x354B10u;
label_354b10:
    // 0x354b10: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x354b10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354b14:
    // 0x354b14: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_354b18:
    if (ctx->pc == 0x354B18u) {
        ctx->pc = 0x354B1Cu;
        goto label_354b1c;
    }
    ctx->pc = 0x354B14u;
    {
        const bool branch_taken_0x354b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354b14) {
            ctx->pc = 0x354B30u;
            goto label_354b30;
        }
    }
    ctx->pc = 0x354B1Cu;
label_354b1c:
    // 0x354b1c: 0xc075eb4  jal         func_1D7AD0
label_354b20:
    if (ctx->pc == 0x354B20u) {
        ctx->pc = 0x354B20u;
            // 0x354b20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354B24u;
        goto label_354b24;
    }
    ctx->pc = 0x354B1Cu;
    SET_GPR_U32(ctx, 31, 0x354B24u);
    ctx->pc = 0x354B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354B1Cu;
            // 0x354b20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B24u; }
        if (ctx->pc != 0x354B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B24u; }
        if (ctx->pc != 0x354B24u) { return; }
    }
    ctx->pc = 0x354B24u;
label_354b24:
    // 0x354b24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_354b28:
    if (ctx->pc == 0x354B28u) {
        ctx->pc = 0x354B2Cu;
        goto label_354b2c;
    }
    ctx->pc = 0x354B24u;
    {
        const bool branch_taken_0x354b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354b24) {
            ctx->pc = 0x354B30u;
            goto label_354b30;
        }
    }
    ctx->pc = 0x354B2Cu;
label_354b2c:
    // 0x354b2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x354b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354b30:
    // 0x354b30: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_354b34:
    if (ctx->pc == 0x354B34u) {
        ctx->pc = 0x354B34u;
            // 0x354b34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354B38u;
        goto label_354b38;
    }
    ctx->pc = 0x354B30u;
    {
        const bool branch_taken_0x354b30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x354b30) {
            ctx->pc = 0x354B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354B30u;
            // 0x354b34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354B4Cu;
            goto label_354b4c;
        }
    }
    ctx->pc = 0x354B38u;
label_354b38:
    // 0x354b38: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x354b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_354b3c:
    // 0x354b3c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x354b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_354b40:
    // 0x354b40: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_354b44:
    if (ctx->pc == 0x354B44u) {
        ctx->pc = 0x354B48u;
        goto label_354b48;
    }
    ctx->pc = 0x354B40u;
    {
        const bool branch_taken_0x354b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x354b40) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354B48u;
label_354b48:
    // 0x354b48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x354b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354b4c:
    // 0x354b4c: 0xc0ba364  jal         func_2E8D90
label_354b50:
    if (ctx->pc == 0x354B50u) {
        ctx->pc = 0x354B54u;
        goto label_354b54;
    }
    ctx->pc = 0x354B4Cu;
    SET_GPR_U32(ctx, 31, 0x354B54u);
    ctx->pc = 0x2E8D90u;
    if (runtime->hasFunction(0x2E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B54u; }
        if (ctx->pc != 0x354B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D90_0x2e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B54u; }
        if (ctx->pc != 0x354B54u) { return; }
    }
    ctx->pc = 0x354B54u;
label_354b54:
    // 0x354b54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354b58:
    // 0x354b58: 0x266602c0  addiu       $a2, $s3, 0x2C0
    ctx->pc = 0x354b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_354b5c:
    // 0x354b5c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x354b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354b60:
    // 0x354b60: 0xc0bb1ec  jal         func_2EC7B0
label_354b64:
    if (ctx->pc == 0x354B64u) {
        ctx->pc = 0x354B64u;
            // 0x354b64: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x354B68u;
        goto label_354b68;
    }
    ctx->pc = 0x354B60u;
    SET_GPR_U32(ctx, 31, 0x354B68u);
    ctx->pc = 0x354B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354B60u;
            // 0x354b64: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC7B0u;
    if (runtime->hasFunction(0x2EC7B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B68u; }
        if (ctx->pc != 0x354B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC7B0_0x2ec7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B68u; }
        if (ctx->pc != 0x354B68u) { return; }
    }
    ctx->pc = 0x354B68u;
label_354b68:
    // 0x354b68: 0x10000005  b           . + 4 + (0x5 << 2)
label_354b6c:
    if (ctx->pc == 0x354B6Cu) {
        ctx->pc = 0x354B70u;
        goto label_354b70;
    }
    ctx->pc = 0x354B68u;
    {
        const bool branch_taken_0x354b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b68) {
            ctx->pc = 0x354B80u;
            goto label_354b80;
        }
    }
    ctx->pc = 0x354B70u;
label_354b70:
    // 0x354b70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x354b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_354b74:
    // 0x354b74: 0x8c443fe8  lw          $a0, 0x3FE8($v0)
    ctx->pc = 0x354b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
label_354b78:
    // 0x354b78: 0xc14b7f0  jal         func_52DFC0
label_354b7c:
    if (ctx->pc == 0x354B7Cu) {
        ctx->pc = 0x354B7Cu;
            // 0x354b7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354B80u;
        goto label_354b80;
    }
    ctx->pc = 0x354B78u;
    SET_GPR_U32(ctx, 31, 0x354B80u);
    ctx->pc = 0x354B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354B78u;
            // 0x354b7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52DFC0u;
    if (runtime->hasFunction(0x52DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x52DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B80u; }
        if (ctx->pc != 0x354B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052DFC0_0x52dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354B80u; }
        if (ctx->pc != 0x354B80u) { return; }
    }
    ctx->pc = 0x354B80u;
label_354b80:
    // 0x354b80: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x354b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_354b84:
    // 0x354b84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x354b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_354b88:
    // 0x354b88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x354b88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_354b8c:
    // 0x354b8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x354b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_354b90:
    // 0x354b90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x354b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_354b94:
    // 0x354b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x354b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_354b98:
    // 0x354b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x354b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_354b9c:
    // 0x354b9c: 0x3e00008  jr          $ra
label_354ba0:
    if (ctx->pc == 0x354BA0u) {
        ctx->pc = 0x354BA0u;
            // 0x354ba0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x354BA4u;
        goto label_354ba4;
    }
    ctx->pc = 0x354B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354B9Cu;
            // 0x354ba0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354BA4u;
label_354ba4:
    // 0x354ba4: 0x0  nop
    ctx->pc = 0x354ba4u;
    // NOP
label_354ba8:
    // 0x354ba8: 0x0  nop
    ctx->pc = 0x354ba8u;
    // NOP
label_354bac:
    // 0x354bac: 0x0  nop
    ctx->pc = 0x354bacu;
    // NOP
}
