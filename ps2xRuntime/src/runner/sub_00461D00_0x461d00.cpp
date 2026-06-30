#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00461D00
// Address: 0x461d00 - 0x4625f0
void sub_00461D00_0x461d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461D00_0x461d00");
#endif

    switch (ctx->pc) {
        case 0x461d00u: goto label_461d00;
        case 0x461d04u: goto label_461d04;
        case 0x461d08u: goto label_461d08;
        case 0x461d0cu: goto label_461d0c;
        case 0x461d10u: goto label_461d10;
        case 0x461d14u: goto label_461d14;
        case 0x461d18u: goto label_461d18;
        case 0x461d1cu: goto label_461d1c;
        case 0x461d20u: goto label_461d20;
        case 0x461d24u: goto label_461d24;
        case 0x461d28u: goto label_461d28;
        case 0x461d2cu: goto label_461d2c;
        case 0x461d30u: goto label_461d30;
        case 0x461d34u: goto label_461d34;
        case 0x461d38u: goto label_461d38;
        case 0x461d3cu: goto label_461d3c;
        case 0x461d40u: goto label_461d40;
        case 0x461d44u: goto label_461d44;
        case 0x461d48u: goto label_461d48;
        case 0x461d4cu: goto label_461d4c;
        case 0x461d50u: goto label_461d50;
        case 0x461d54u: goto label_461d54;
        case 0x461d58u: goto label_461d58;
        case 0x461d5cu: goto label_461d5c;
        case 0x461d60u: goto label_461d60;
        case 0x461d64u: goto label_461d64;
        case 0x461d68u: goto label_461d68;
        case 0x461d6cu: goto label_461d6c;
        case 0x461d70u: goto label_461d70;
        case 0x461d74u: goto label_461d74;
        case 0x461d78u: goto label_461d78;
        case 0x461d7cu: goto label_461d7c;
        case 0x461d80u: goto label_461d80;
        case 0x461d84u: goto label_461d84;
        case 0x461d88u: goto label_461d88;
        case 0x461d8cu: goto label_461d8c;
        case 0x461d90u: goto label_461d90;
        case 0x461d94u: goto label_461d94;
        case 0x461d98u: goto label_461d98;
        case 0x461d9cu: goto label_461d9c;
        case 0x461da0u: goto label_461da0;
        case 0x461da4u: goto label_461da4;
        case 0x461da8u: goto label_461da8;
        case 0x461dacu: goto label_461dac;
        case 0x461db0u: goto label_461db0;
        case 0x461db4u: goto label_461db4;
        case 0x461db8u: goto label_461db8;
        case 0x461dbcu: goto label_461dbc;
        case 0x461dc0u: goto label_461dc0;
        case 0x461dc4u: goto label_461dc4;
        case 0x461dc8u: goto label_461dc8;
        case 0x461dccu: goto label_461dcc;
        case 0x461dd0u: goto label_461dd0;
        case 0x461dd4u: goto label_461dd4;
        case 0x461dd8u: goto label_461dd8;
        case 0x461ddcu: goto label_461ddc;
        case 0x461de0u: goto label_461de0;
        case 0x461de4u: goto label_461de4;
        case 0x461de8u: goto label_461de8;
        case 0x461decu: goto label_461dec;
        case 0x461df0u: goto label_461df0;
        case 0x461df4u: goto label_461df4;
        case 0x461df8u: goto label_461df8;
        case 0x461dfcu: goto label_461dfc;
        case 0x461e00u: goto label_461e00;
        case 0x461e04u: goto label_461e04;
        case 0x461e08u: goto label_461e08;
        case 0x461e0cu: goto label_461e0c;
        case 0x461e10u: goto label_461e10;
        case 0x461e14u: goto label_461e14;
        case 0x461e18u: goto label_461e18;
        case 0x461e1cu: goto label_461e1c;
        case 0x461e20u: goto label_461e20;
        case 0x461e24u: goto label_461e24;
        case 0x461e28u: goto label_461e28;
        case 0x461e2cu: goto label_461e2c;
        case 0x461e30u: goto label_461e30;
        case 0x461e34u: goto label_461e34;
        case 0x461e38u: goto label_461e38;
        case 0x461e3cu: goto label_461e3c;
        case 0x461e40u: goto label_461e40;
        case 0x461e44u: goto label_461e44;
        case 0x461e48u: goto label_461e48;
        case 0x461e4cu: goto label_461e4c;
        case 0x461e50u: goto label_461e50;
        case 0x461e54u: goto label_461e54;
        case 0x461e58u: goto label_461e58;
        case 0x461e5cu: goto label_461e5c;
        case 0x461e60u: goto label_461e60;
        case 0x461e64u: goto label_461e64;
        case 0x461e68u: goto label_461e68;
        case 0x461e6cu: goto label_461e6c;
        case 0x461e70u: goto label_461e70;
        case 0x461e74u: goto label_461e74;
        case 0x461e78u: goto label_461e78;
        case 0x461e7cu: goto label_461e7c;
        case 0x461e80u: goto label_461e80;
        case 0x461e84u: goto label_461e84;
        case 0x461e88u: goto label_461e88;
        case 0x461e8cu: goto label_461e8c;
        case 0x461e90u: goto label_461e90;
        case 0x461e94u: goto label_461e94;
        case 0x461e98u: goto label_461e98;
        case 0x461e9cu: goto label_461e9c;
        case 0x461ea0u: goto label_461ea0;
        case 0x461ea4u: goto label_461ea4;
        case 0x461ea8u: goto label_461ea8;
        case 0x461eacu: goto label_461eac;
        case 0x461eb0u: goto label_461eb0;
        case 0x461eb4u: goto label_461eb4;
        case 0x461eb8u: goto label_461eb8;
        case 0x461ebcu: goto label_461ebc;
        case 0x461ec0u: goto label_461ec0;
        case 0x461ec4u: goto label_461ec4;
        case 0x461ec8u: goto label_461ec8;
        case 0x461eccu: goto label_461ecc;
        case 0x461ed0u: goto label_461ed0;
        case 0x461ed4u: goto label_461ed4;
        case 0x461ed8u: goto label_461ed8;
        case 0x461edcu: goto label_461edc;
        case 0x461ee0u: goto label_461ee0;
        case 0x461ee4u: goto label_461ee4;
        case 0x461ee8u: goto label_461ee8;
        case 0x461eecu: goto label_461eec;
        case 0x461ef0u: goto label_461ef0;
        case 0x461ef4u: goto label_461ef4;
        case 0x461ef8u: goto label_461ef8;
        case 0x461efcu: goto label_461efc;
        case 0x461f00u: goto label_461f00;
        case 0x461f04u: goto label_461f04;
        case 0x461f08u: goto label_461f08;
        case 0x461f0cu: goto label_461f0c;
        case 0x461f10u: goto label_461f10;
        case 0x461f14u: goto label_461f14;
        case 0x461f18u: goto label_461f18;
        case 0x461f1cu: goto label_461f1c;
        case 0x461f20u: goto label_461f20;
        case 0x461f24u: goto label_461f24;
        case 0x461f28u: goto label_461f28;
        case 0x461f2cu: goto label_461f2c;
        case 0x461f30u: goto label_461f30;
        case 0x461f34u: goto label_461f34;
        case 0x461f38u: goto label_461f38;
        case 0x461f3cu: goto label_461f3c;
        case 0x461f40u: goto label_461f40;
        case 0x461f44u: goto label_461f44;
        case 0x461f48u: goto label_461f48;
        case 0x461f4cu: goto label_461f4c;
        case 0x461f50u: goto label_461f50;
        case 0x461f54u: goto label_461f54;
        case 0x461f58u: goto label_461f58;
        case 0x461f5cu: goto label_461f5c;
        case 0x461f60u: goto label_461f60;
        case 0x461f64u: goto label_461f64;
        case 0x461f68u: goto label_461f68;
        case 0x461f6cu: goto label_461f6c;
        case 0x461f70u: goto label_461f70;
        case 0x461f74u: goto label_461f74;
        case 0x461f78u: goto label_461f78;
        case 0x461f7cu: goto label_461f7c;
        case 0x461f80u: goto label_461f80;
        case 0x461f84u: goto label_461f84;
        case 0x461f88u: goto label_461f88;
        case 0x461f8cu: goto label_461f8c;
        case 0x461f90u: goto label_461f90;
        case 0x461f94u: goto label_461f94;
        case 0x461f98u: goto label_461f98;
        case 0x461f9cu: goto label_461f9c;
        case 0x461fa0u: goto label_461fa0;
        case 0x461fa4u: goto label_461fa4;
        case 0x461fa8u: goto label_461fa8;
        case 0x461facu: goto label_461fac;
        case 0x461fb0u: goto label_461fb0;
        case 0x461fb4u: goto label_461fb4;
        case 0x461fb8u: goto label_461fb8;
        case 0x461fbcu: goto label_461fbc;
        case 0x461fc0u: goto label_461fc0;
        case 0x461fc4u: goto label_461fc4;
        case 0x461fc8u: goto label_461fc8;
        case 0x461fccu: goto label_461fcc;
        case 0x461fd0u: goto label_461fd0;
        case 0x461fd4u: goto label_461fd4;
        case 0x461fd8u: goto label_461fd8;
        case 0x461fdcu: goto label_461fdc;
        case 0x461fe0u: goto label_461fe0;
        case 0x461fe4u: goto label_461fe4;
        case 0x461fe8u: goto label_461fe8;
        case 0x461fecu: goto label_461fec;
        case 0x461ff0u: goto label_461ff0;
        case 0x461ff4u: goto label_461ff4;
        case 0x461ff8u: goto label_461ff8;
        case 0x461ffcu: goto label_461ffc;
        case 0x462000u: goto label_462000;
        case 0x462004u: goto label_462004;
        case 0x462008u: goto label_462008;
        case 0x46200cu: goto label_46200c;
        case 0x462010u: goto label_462010;
        case 0x462014u: goto label_462014;
        case 0x462018u: goto label_462018;
        case 0x46201cu: goto label_46201c;
        case 0x462020u: goto label_462020;
        case 0x462024u: goto label_462024;
        case 0x462028u: goto label_462028;
        case 0x46202cu: goto label_46202c;
        case 0x462030u: goto label_462030;
        case 0x462034u: goto label_462034;
        case 0x462038u: goto label_462038;
        case 0x46203cu: goto label_46203c;
        case 0x462040u: goto label_462040;
        case 0x462044u: goto label_462044;
        case 0x462048u: goto label_462048;
        case 0x46204cu: goto label_46204c;
        case 0x462050u: goto label_462050;
        case 0x462054u: goto label_462054;
        case 0x462058u: goto label_462058;
        case 0x46205cu: goto label_46205c;
        case 0x462060u: goto label_462060;
        case 0x462064u: goto label_462064;
        case 0x462068u: goto label_462068;
        case 0x46206cu: goto label_46206c;
        case 0x462070u: goto label_462070;
        case 0x462074u: goto label_462074;
        case 0x462078u: goto label_462078;
        case 0x46207cu: goto label_46207c;
        case 0x462080u: goto label_462080;
        case 0x462084u: goto label_462084;
        case 0x462088u: goto label_462088;
        case 0x46208cu: goto label_46208c;
        case 0x462090u: goto label_462090;
        case 0x462094u: goto label_462094;
        case 0x462098u: goto label_462098;
        case 0x46209cu: goto label_46209c;
        case 0x4620a0u: goto label_4620a0;
        case 0x4620a4u: goto label_4620a4;
        case 0x4620a8u: goto label_4620a8;
        case 0x4620acu: goto label_4620ac;
        case 0x4620b0u: goto label_4620b0;
        case 0x4620b4u: goto label_4620b4;
        case 0x4620b8u: goto label_4620b8;
        case 0x4620bcu: goto label_4620bc;
        case 0x4620c0u: goto label_4620c0;
        case 0x4620c4u: goto label_4620c4;
        case 0x4620c8u: goto label_4620c8;
        case 0x4620ccu: goto label_4620cc;
        case 0x4620d0u: goto label_4620d0;
        case 0x4620d4u: goto label_4620d4;
        case 0x4620d8u: goto label_4620d8;
        case 0x4620dcu: goto label_4620dc;
        case 0x4620e0u: goto label_4620e0;
        case 0x4620e4u: goto label_4620e4;
        case 0x4620e8u: goto label_4620e8;
        case 0x4620ecu: goto label_4620ec;
        case 0x4620f0u: goto label_4620f0;
        case 0x4620f4u: goto label_4620f4;
        case 0x4620f8u: goto label_4620f8;
        case 0x4620fcu: goto label_4620fc;
        case 0x462100u: goto label_462100;
        case 0x462104u: goto label_462104;
        case 0x462108u: goto label_462108;
        case 0x46210cu: goto label_46210c;
        case 0x462110u: goto label_462110;
        case 0x462114u: goto label_462114;
        case 0x462118u: goto label_462118;
        case 0x46211cu: goto label_46211c;
        case 0x462120u: goto label_462120;
        case 0x462124u: goto label_462124;
        case 0x462128u: goto label_462128;
        case 0x46212cu: goto label_46212c;
        case 0x462130u: goto label_462130;
        case 0x462134u: goto label_462134;
        case 0x462138u: goto label_462138;
        case 0x46213cu: goto label_46213c;
        case 0x462140u: goto label_462140;
        case 0x462144u: goto label_462144;
        case 0x462148u: goto label_462148;
        case 0x46214cu: goto label_46214c;
        case 0x462150u: goto label_462150;
        case 0x462154u: goto label_462154;
        case 0x462158u: goto label_462158;
        case 0x46215cu: goto label_46215c;
        case 0x462160u: goto label_462160;
        case 0x462164u: goto label_462164;
        case 0x462168u: goto label_462168;
        case 0x46216cu: goto label_46216c;
        case 0x462170u: goto label_462170;
        case 0x462174u: goto label_462174;
        case 0x462178u: goto label_462178;
        case 0x46217cu: goto label_46217c;
        case 0x462180u: goto label_462180;
        case 0x462184u: goto label_462184;
        case 0x462188u: goto label_462188;
        case 0x46218cu: goto label_46218c;
        case 0x462190u: goto label_462190;
        case 0x462194u: goto label_462194;
        case 0x462198u: goto label_462198;
        case 0x46219cu: goto label_46219c;
        case 0x4621a0u: goto label_4621a0;
        case 0x4621a4u: goto label_4621a4;
        case 0x4621a8u: goto label_4621a8;
        case 0x4621acu: goto label_4621ac;
        case 0x4621b0u: goto label_4621b0;
        case 0x4621b4u: goto label_4621b4;
        case 0x4621b8u: goto label_4621b8;
        case 0x4621bcu: goto label_4621bc;
        case 0x4621c0u: goto label_4621c0;
        case 0x4621c4u: goto label_4621c4;
        case 0x4621c8u: goto label_4621c8;
        case 0x4621ccu: goto label_4621cc;
        case 0x4621d0u: goto label_4621d0;
        case 0x4621d4u: goto label_4621d4;
        case 0x4621d8u: goto label_4621d8;
        case 0x4621dcu: goto label_4621dc;
        case 0x4621e0u: goto label_4621e0;
        case 0x4621e4u: goto label_4621e4;
        case 0x4621e8u: goto label_4621e8;
        case 0x4621ecu: goto label_4621ec;
        case 0x4621f0u: goto label_4621f0;
        case 0x4621f4u: goto label_4621f4;
        case 0x4621f8u: goto label_4621f8;
        case 0x4621fcu: goto label_4621fc;
        case 0x462200u: goto label_462200;
        case 0x462204u: goto label_462204;
        case 0x462208u: goto label_462208;
        case 0x46220cu: goto label_46220c;
        case 0x462210u: goto label_462210;
        case 0x462214u: goto label_462214;
        case 0x462218u: goto label_462218;
        case 0x46221cu: goto label_46221c;
        case 0x462220u: goto label_462220;
        case 0x462224u: goto label_462224;
        case 0x462228u: goto label_462228;
        case 0x46222cu: goto label_46222c;
        case 0x462230u: goto label_462230;
        case 0x462234u: goto label_462234;
        case 0x462238u: goto label_462238;
        case 0x46223cu: goto label_46223c;
        case 0x462240u: goto label_462240;
        case 0x462244u: goto label_462244;
        case 0x462248u: goto label_462248;
        case 0x46224cu: goto label_46224c;
        case 0x462250u: goto label_462250;
        case 0x462254u: goto label_462254;
        case 0x462258u: goto label_462258;
        case 0x46225cu: goto label_46225c;
        case 0x462260u: goto label_462260;
        case 0x462264u: goto label_462264;
        case 0x462268u: goto label_462268;
        case 0x46226cu: goto label_46226c;
        case 0x462270u: goto label_462270;
        case 0x462274u: goto label_462274;
        case 0x462278u: goto label_462278;
        case 0x46227cu: goto label_46227c;
        case 0x462280u: goto label_462280;
        case 0x462284u: goto label_462284;
        case 0x462288u: goto label_462288;
        case 0x46228cu: goto label_46228c;
        case 0x462290u: goto label_462290;
        case 0x462294u: goto label_462294;
        case 0x462298u: goto label_462298;
        case 0x46229cu: goto label_46229c;
        case 0x4622a0u: goto label_4622a0;
        case 0x4622a4u: goto label_4622a4;
        case 0x4622a8u: goto label_4622a8;
        case 0x4622acu: goto label_4622ac;
        case 0x4622b0u: goto label_4622b0;
        case 0x4622b4u: goto label_4622b4;
        case 0x4622b8u: goto label_4622b8;
        case 0x4622bcu: goto label_4622bc;
        case 0x4622c0u: goto label_4622c0;
        case 0x4622c4u: goto label_4622c4;
        case 0x4622c8u: goto label_4622c8;
        case 0x4622ccu: goto label_4622cc;
        case 0x4622d0u: goto label_4622d0;
        case 0x4622d4u: goto label_4622d4;
        case 0x4622d8u: goto label_4622d8;
        case 0x4622dcu: goto label_4622dc;
        case 0x4622e0u: goto label_4622e0;
        case 0x4622e4u: goto label_4622e4;
        case 0x4622e8u: goto label_4622e8;
        case 0x4622ecu: goto label_4622ec;
        case 0x4622f0u: goto label_4622f0;
        case 0x4622f4u: goto label_4622f4;
        case 0x4622f8u: goto label_4622f8;
        case 0x4622fcu: goto label_4622fc;
        case 0x462300u: goto label_462300;
        case 0x462304u: goto label_462304;
        case 0x462308u: goto label_462308;
        case 0x46230cu: goto label_46230c;
        case 0x462310u: goto label_462310;
        case 0x462314u: goto label_462314;
        case 0x462318u: goto label_462318;
        case 0x46231cu: goto label_46231c;
        case 0x462320u: goto label_462320;
        case 0x462324u: goto label_462324;
        case 0x462328u: goto label_462328;
        case 0x46232cu: goto label_46232c;
        case 0x462330u: goto label_462330;
        case 0x462334u: goto label_462334;
        case 0x462338u: goto label_462338;
        case 0x46233cu: goto label_46233c;
        case 0x462340u: goto label_462340;
        case 0x462344u: goto label_462344;
        case 0x462348u: goto label_462348;
        case 0x46234cu: goto label_46234c;
        case 0x462350u: goto label_462350;
        case 0x462354u: goto label_462354;
        case 0x462358u: goto label_462358;
        case 0x46235cu: goto label_46235c;
        case 0x462360u: goto label_462360;
        case 0x462364u: goto label_462364;
        case 0x462368u: goto label_462368;
        case 0x46236cu: goto label_46236c;
        case 0x462370u: goto label_462370;
        case 0x462374u: goto label_462374;
        case 0x462378u: goto label_462378;
        case 0x46237cu: goto label_46237c;
        case 0x462380u: goto label_462380;
        case 0x462384u: goto label_462384;
        case 0x462388u: goto label_462388;
        case 0x46238cu: goto label_46238c;
        case 0x462390u: goto label_462390;
        case 0x462394u: goto label_462394;
        case 0x462398u: goto label_462398;
        case 0x46239cu: goto label_46239c;
        case 0x4623a0u: goto label_4623a0;
        case 0x4623a4u: goto label_4623a4;
        case 0x4623a8u: goto label_4623a8;
        case 0x4623acu: goto label_4623ac;
        case 0x4623b0u: goto label_4623b0;
        case 0x4623b4u: goto label_4623b4;
        case 0x4623b8u: goto label_4623b8;
        case 0x4623bcu: goto label_4623bc;
        case 0x4623c0u: goto label_4623c0;
        case 0x4623c4u: goto label_4623c4;
        case 0x4623c8u: goto label_4623c8;
        case 0x4623ccu: goto label_4623cc;
        case 0x4623d0u: goto label_4623d0;
        case 0x4623d4u: goto label_4623d4;
        case 0x4623d8u: goto label_4623d8;
        case 0x4623dcu: goto label_4623dc;
        case 0x4623e0u: goto label_4623e0;
        case 0x4623e4u: goto label_4623e4;
        case 0x4623e8u: goto label_4623e8;
        case 0x4623ecu: goto label_4623ec;
        case 0x4623f0u: goto label_4623f0;
        case 0x4623f4u: goto label_4623f4;
        case 0x4623f8u: goto label_4623f8;
        case 0x4623fcu: goto label_4623fc;
        case 0x462400u: goto label_462400;
        case 0x462404u: goto label_462404;
        case 0x462408u: goto label_462408;
        case 0x46240cu: goto label_46240c;
        case 0x462410u: goto label_462410;
        case 0x462414u: goto label_462414;
        case 0x462418u: goto label_462418;
        case 0x46241cu: goto label_46241c;
        case 0x462420u: goto label_462420;
        case 0x462424u: goto label_462424;
        case 0x462428u: goto label_462428;
        case 0x46242cu: goto label_46242c;
        case 0x462430u: goto label_462430;
        case 0x462434u: goto label_462434;
        case 0x462438u: goto label_462438;
        case 0x46243cu: goto label_46243c;
        case 0x462440u: goto label_462440;
        case 0x462444u: goto label_462444;
        case 0x462448u: goto label_462448;
        case 0x46244cu: goto label_46244c;
        case 0x462450u: goto label_462450;
        case 0x462454u: goto label_462454;
        case 0x462458u: goto label_462458;
        case 0x46245cu: goto label_46245c;
        case 0x462460u: goto label_462460;
        case 0x462464u: goto label_462464;
        case 0x462468u: goto label_462468;
        case 0x46246cu: goto label_46246c;
        case 0x462470u: goto label_462470;
        case 0x462474u: goto label_462474;
        case 0x462478u: goto label_462478;
        case 0x46247cu: goto label_46247c;
        case 0x462480u: goto label_462480;
        case 0x462484u: goto label_462484;
        case 0x462488u: goto label_462488;
        case 0x46248cu: goto label_46248c;
        case 0x462490u: goto label_462490;
        case 0x462494u: goto label_462494;
        case 0x462498u: goto label_462498;
        case 0x46249cu: goto label_46249c;
        case 0x4624a0u: goto label_4624a0;
        case 0x4624a4u: goto label_4624a4;
        case 0x4624a8u: goto label_4624a8;
        case 0x4624acu: goto label_4624ac;
        case 0x4624b0u: goto label_4624b0;
        case 0x4624b4u: goto label_4624b4;
        case 0x4624b8u: goto label_4624b8;
        case 0x4624bcu: goto label_4624bc;
        case 0x4624c0u: goto label_4624c0;
        case 0x4624c4u: goto label_4624c4;
        case 0x4624c8u: goto label_4624c8;
        case 0x4624ccu: goto label_4624cc;
        case 0x4624d0u: goto label_4624d0;
        case 0x4624d4u: goto label_4624d4;
        case 0x4624d8u: goto label_4624d8;
        case 0x4624dcu: goto label_4624dc;
        case 0x4624e0u: goto label_4624e0;
        case 0x4624e4u: goto label_4624e4;
        case 0x4624e8u: goto label_4624e8;
        case 0x4624ecu: goto label_4624ec;
        case 0x4624f0u: goto label_4624f0;
        case 0x4624f4u: goto label_4624f4;
        case 0x4624f8u: goto label_4624f8;
        case 0x4624fcu: goto label_4624fc;
        case 0x462500u: goto label_462500;
        case 0x462504u: goto label_462504;
        case 0x462508u: goto label_462508;
        case 0x46250cu: goto label_46250c;
        case 0x462510u: goto label_462510;
        case 0x462514u: goto label_462514;
        case 0x462518u: goto label_462518;
        case 0x46251cu: goto label_46251c;
        case 0x462520u: goto label_462520;
        case 0x462524u: goto label_462524;
        case 0x462528u: goto label_462528;
        case 0x46252cu: goto label_46252c;
        case 0x462530u: goto label_462530;
        case 0x462534u: goto label_462534;
        case 0x462538u: goto label_462538;
        case 0x46253cu: goto label_46253c;
        case 0x462540u: goto label_462540;
        case 0x462544u: goto label_462544;
        case 0x462548u: goto label_462548;
        case 0x46254cu: goto label_46254c;
        case 0x462550u: goto label_462550;
        case 0x462554u: goto label_462554;
        case 0x462558u: goto label_462558;
        case 0x46255cu: goto label_46255c;
        case 0x462560u: goto label_462560;
        case 0x462564u: goto label_462564;
        case 0x462568u: goto label_462568;
        case 0x46256cu: goto label_46256c;
        case 0x462570u: goto label_462570;
        case 0x462574u: goto label_462574;
        case 0x462578u: goto label_462578;
        case 0x46257cu: goto label_46257c;
        case 0x462580u: goto label_462580;
        case 0x462584u: goto label_462584;
        case 0x462588u: goto label_462588;
        case 0x46258cu: goto label_46258c;
        case 0x462590u: goto label_462590;
        case 0x462594u: goto label_462594;
        case 0x462598u: goto label_462598;
        case 0x46259cu: goto label_46259c;
        case 0x4625a0u: goto label_4625a0;
        case 0x4625a4u: goto label_4625a4;
        case 0x4625a8u: goto label_4625a8;
        case 0x4625acu: goto label_4625ac;
        case 0x4625b0u: goto label_4625b0;
        case 0x4625b4u: goto label_4625b4;
        case 0x4625b8u: goto label_4625b8;
        case 0x4625bcu: goto label_4625bc;
        case 0x4625c0u: goto label_4625c0;
        case 0x4625c4u: goto label_4625c4;
        case 0x4625c8u: goto label_4625c8;
        case 0x4625ccu: goto label_4625cc;
        case 0x4625d0u: goto label_4625d0;
        case 0x4625d4u: goto label_4625d4;
        case 0x4625d8u: goto label_4625d8;
        case 0x4625dcu: goto label_4625dc;
        case 0x4625e0u: goto label_4625e0;
        case 0x4625e4u: goto label_4625e4;
        case 0x4625e8u: goto label_4625e8;
        case 0x4625ecu: goto label_4625ec;
        default: break;
    }

    ctx->pc = 0x461d00u;

label_461d00:
    // 0x461d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x461d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_461d04:
    // 0x461d04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x461d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_461d08:
    // 0x461d08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x461d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_461d0c:
    // 0x461d0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x461d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_461d10:
    // 0x461d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x461d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_461d14:
    // 0x461d14: 0x8c830cdc  lw          $v1, 0xCDC($a0)
    ctx->pc = 0x461d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3292)));
label_461d18:
    // 0x461d18: 0x106200ae  beq         $v1, $v0, . + 4 + (0xAE << 2)
label_461d1c:
    if (ctx->pc == 0x461D1Cu) {
        ctx->pc = 0x461D1Cu;
            // 0x461d1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461D20u;
        goto label_461d20;
    }
    ctx->pc = 0x461D18u;
    {
        const bool branch_taken_0x461d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x461D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461D18u;
            // 0x461d1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461d18) {
            ctx->pc = 0x461FD4u;
            goto label_461fd4;
        }
    }
    ctx->pc = 0x461D20u;
label_461d20:
    // 0x461d20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x461d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_461d24:
    // 0x461d24: 0x1062008d  beq         $v1, $v0, . + 4 + (0x8D << 2)
label_461d28:
    if (ctx->pc == 0x461D28u) {
        ctx->pc = 0x461D2Cu;
        goto label_461d2c;
    }
    ctx->pc = 0x461D24u;
    {
        const bool branch_taken_0x461d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x461d24) {
            ctx->pc = 0x461F5Cu;
            goto label_461f5c;
        }
    }
    ctx->pc = 0x461D2Cu;
label_461d2c:
    // 0x461d2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x461d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461d30:
    // 0x461d30: 0x10640029  beq         $v1, $a0, . + 4 + (0x29 << 2)
label_461d34:
    if (ctx->pc == 0x461D34u) {
        ctx->pc = 0x461D38u;
        goto label_461d38;
    }
    ctx->pc = 0x461D30u;
    {
        const bool branch_taken_0x461d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x461d30) {
            ctx->pc = 0x461DD8u;
            goto label_461dd8;
        }
    }
    ctx->pc = 0x461D38u;
label_461d38:
    // 0x461d38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_461d3c:
    if (ctx->pc == 0x461D3Cu) {
        ctx->pc = 0x461D40u;
        goto label_461d40;
    }
    ctx->pc = 0x461D38u;
    {
        const bool branch_taken_0x461d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461d38) {
            ctx->pc = 0x461D48u;
            goto label_461d48;
        }
    }
    ctx->pc = 0x461D40u;
label_461d40:
    // 0x461d40: 0x100000aa  b           . + 4 + (0xAA << 2)
label_461d44:
    if (ctx->pc == 0x461D44u) {
        ctx->pc = 0x461D44u;
            // 0x461d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461D48u;
        goto label_461d48;
    }
    ctx->pc = 0x461D40u;
    {
        const bool branch_taken_0x461d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461D40u;
            // 0x461d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461d40) {
            ctx->pc = 0x461FECu;
            goto label_461fec;
        }
    }
    ctx->pc = 0x461D48u;
label_461d48:
    // 0x461d48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461d4c:
    // 0x461d4c: 0xc0fcfe0  jal         func_3F3F80
label_461d50:
    if (ctx->pc == 0x461D50u) {
        ctx->pc = 0x461D50u;
            // 0x461d50: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->pc = 0x461D54u;
        goto label_461d54;
    }
    ctx->pc = 0x461D4Cu;
    SET_GPR_U32(ctx, 31, 0x461D54u);
    ctx->pc = 0x461D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461D4Cu;
            // 0x461d50: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3F80u;
    if (runtime->hasFunction(0x3F3F80u)) {
        auto targetFn = runtime->lookupFunction(0x3F3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461D54u; }
        if (ctx->pc != 0x461D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3F80_0x3f3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461D54u; }
        if (ctx->pc != 0x461D54u) { return; }
    }
    ctx->pc = 0x461D54u;
label_461d54:
    // 0x461d54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x461d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_461d58:
    // 0x461d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x461d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461d5c:
    // 0x461d5c: 0x144300a2  bne         $v0, $v1, . + 4 + (0xA2 << 2)
label_461d60:
    if (ctx->pc == 0x461D60u) {
        ctx->pc = 0x461D64u;
        goto label_461d64;
    }
    ctx->pc = 0x461D5Cu;
    {
        const bool branch_taken_0x461d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x461d5c) {
            ctx->pc = 0x461FE8u;
            goto label_461fe8;
        }
    }
    ctx->pc = 0x461D64u;
label_461d64:
    // 0x461d64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_461d68:
    // 0x461d68: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x461d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_461d6c:
    // 0x461d6c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x461d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_461d70:
    // 0x461d70: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_461d74:
    if (ctx->pc == 0x461D74u) {
        ctx->pc = 0x461D78u;
        goto label_461d78;
    }
    ctx->pc = 0x461D70u;
    {
        const bool branch_taken_0x461d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x461d70) {
            ctx->pc = 0x461D80u;
            goto label_461d80;
        }
    }
    ctx->pc = 0x461D78u;
label_461d78:
    // 0x461d78: 0x1000009b  b           . + 4 + (0x9B << 2)
label_461d7c:
    if (ctx->pc == 0x461D7Cu) {
        ctx->pc = 0x461D7Cu;
            // 0x461d7c: 0xae030cdc  sw          $v1, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 3));
        ctx->pc = 0x461D80u;
        goto label_461d80;
    }
    ctx->pc = 0x461D78u;
    {
        const bool branch_taken_0x461d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461D78u;
            // 0x461d7c: 0xae030cdc  sw          $v1, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461d78) {
            ctx->pc = 0x461FE8u;
            goto label_461fe8;
        }
    }
    ctx->pc = 0x461D80u;
label_461d80:
    // 0x461d80: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x461d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_461d84:
    // 0x461d84: 0x9042cff0  lbu         $v0, -0x3010($v0)
    ctx->pc = 0x461d84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954992)));
label_461d88:
    // 0x461d88: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_461d8c:
    if (ctx->pc == 0x461D8Cu) {
        ctx->pc = 0x461D8Cu;
            // 0x461d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x461D90u;
        goto label_461d90;
    }
    ctx->pc = 0x461D88u;
    {
        const bool branch_taken_0x461d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461d88) {
            ctx->pc = 0x461D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461D88u;
            // 0x461d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461DD0u;
            goto label_461dd0;
        }
    }
    ctx->pc = 0x461D90u;
label_461d90:
    // 0x461d90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x461d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_461d94:
    // 0x461d94: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x461d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_461d98:
    // 0x461d98: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x461d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_461d9c:
    // 0x461d9c: 0xc040180  jal         func_100600
label_461da0:
    if (ctx->pc == 0x461DA0u) {
        ctx->pc = 0x461DA0u;
            // 0x461da0: 0xa0400038  sb          $zero, 0x38($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x461DA4u;
        goto label_461da4;
    }
    ctx->pc = 0x461D9Cu;
    SET_GPR_U32(ctx, 31, 0x461DA4u);
    ctx->pc = 0x461DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461D9Cu;
            // 0x461da0: 0xa0400038  sb          $zero, 0x38($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461DA4u; }
        if (ctx->pc != 0x461DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461DA4u; }
        if (ctx->pc != 0x461DA4u) { return; }
    }
    ctx->pc = 0x461DA4u;
label_461da4:
    // 0x461da4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_461da8:
    if (ctx->pc == 0x461DA8u) {
        ctx->pc = 0x461DACu;
        goto label_461dac;
    }
    ctx->pc = 0x461DA4u;
    {
        const bool branch_taken_0x461da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461da4) {
            ctx->pc = 0x461DCCu;
            goto label_461dcc;
        }
    }
    ctx->pc = 0x461DACu;
label_461dac:
    // 0x461dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x461dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_461db0:
    // 0x461db0: 0x8e080968  lw          $t0, 0x968($s0)
    ctx->pc = 0x461db0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_461db4:
    // 0x461db4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461db8:
    // 0x461db8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x461db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_461dbc:
    // 0x461dbc: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x461dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_461dc0:
    // 0x461dc0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x461dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_461dc4:
    // 0x461dc4: 0xc151190  jal         func_544640
label_461dc8:
    if (ctx->pc == 0x461DC8u) {
        ctx->pc = 0x461DC8u;
            // 0x461dc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x461DCCu;
        goto label_461dcc;
    }
    ctx->pc = 0x461DC4u;
    SET_GPR_U32(ctx, 31, 0x461DCCu);
    ctx->pc = 0x461DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461DC4u;
            // 0x461dc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461DCCu; }
        if (ctx->pc != 0x461DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461DCCu; }
        if (ctx->pc != 0x461DCCu) { return; }
    }
    ctx->pc = 0x461DCCu;
label_461dcc:
    // 0x461dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x461dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461dd0:
    // 0x461dd0: 0x10000085  b           . + 4 + (0x85 << 2)
label_461dd4:
    if (ctx->pc == 0x461DD4u) {
        ctx->pc = 0x461DD4u;
            // 0x461dd4: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->pc = 0x461DD8u;
        goto label_461dd8;
    }
    ctx->pc = 0x461DD0u;
    {
        const bool branch_taken_0x461dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461DD0u;
            // 0x461dd4: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461dd0) {
            ctx->pc = 0x461FE8u;
            goto label_461fe8;
        }
    }
    ctx->pc = 0x461DD8u;
label_461dd8:
    // 0x461dd8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461ddc:
    // 0x461ddc: 0x8c423e28  lw          $v0, 0x3E28($v0)
    ctx->pc = 0x461ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_461de0:
    // 0x461de0: 0x90420023  lbu         $v0, 0x23($v0)
    ctx->pc = 0x461de0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
label_461de4:
    // 0x461de4: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
label_461de8:
    if (ctx->pc == 0x461DE8u) {
        ctx->pc = 0x461DECu;
        goto label_461dec;
    }
    ctx->pc = 0x461DE4u;
    {
        const bool branch_taken_0x461de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461de4) {
            ctx->pc = 0x461FE8u;
            goto label_461fe8;
        }
    }
    ctx->pc = 0x461DECu;
label_461dec:
    // 0x461dec: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x461decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_461df0:
    // 0x461df0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_461df4:
    // 0x461df4: 0x9063cff8  lbu         $v1, -0x3008($v1)
    ctx->pc = 0x461df4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294955000)));
label_461df8:
    // 0x461df8: 0xa2030ce0  sb          $v1, 0xCE0($s0)
    ctx->pc = 0x461df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3296), (uint8_t)GPR_U32(ctx, 3));
label_461dfc:
    // 0x461dfc: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x461dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_461e00:
    // 0x461e00: 0x2443006c  addiu       $v1, $v0, 0x6C
    ctx->pc = 0x461e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_461e04:
    // 0x461e04: 0x9042007c  lbu         $v0, 0x7C($v0)
    ctx->pc = 0x461e04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
label_461e08:
    // 0x461e08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_461e0c:
    if (ctx->pc == 0x461E0Cu) {
        ctx->pc = 0x461E0Cu;
            // 0x461e0c: 0xa0600010  sb          $zero, 0x10($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x461E10u;
        goto label_461e10;
    }
    ctx->pc = 0x461E08u;
    {
        const bool branch_taken_0x461e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461e08) {
            ctx->pc = 0x461E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461E08u;
            // 0x461e0c: 0xa0600010  sb          $zero, 0x10($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461E20u;
            goto label_461e20;
        }
    }
    ctx->pc = 0x461E10u;
label_461e10:
    // 0x461e10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x461e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_461e14:
    // 0x461e14: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
label_461e18:
    if (ctx->pc == 0x461E18u) {
        ctx->pc = 0x461E1Cu;
        goto label_461e1c;
    }
    ctx->pc = 0x461E14u;
    {
        const bool branch_taken_0x461e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x461e14) {
            ctx->pc = 0x461E38u;
            goto label_461e38;
        }
    }
    ctx->pc = 0x461E1Cu;
label_461e1c:
    // 0x461e1c: 0xa0600010  sb          $zero, 0x10($v1)
    ctx->pc = 0x461e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
label_461e20:
    // 0x461e20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x461e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_461e24:
    // 0x461e24: 0xae020cdc  sw          $v0, 0xCDC($s0)
    ctx->pc = 0x461e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
label_461e28:
    // 0x461e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x461e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461e2c:
    // 0x461e2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461e30:
    // 0x461e30: 0x1000006d  b           . + 4 + (0x6D << 2)
label_461e34:
    if (ctx->pc == 0x461E34u) {
        ctx->pc = 0x461E34u;
            // 0x461e34: 0xa0436068  sb          $v1, 0x6068($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 24680), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x461E38u;
        goto label_461e38;
    }
    ctx->pc = 0x461E30u;
    {
        const bool branch_taken_0x461e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461E30u;
            // 0x461e34: 0xa0436068  sb          $v1, 0x6068($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 24680), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461e30) {
            ctx->pc = 0x461FE8u;
            goto label_461fe8;
        }
    }
    ctx->pc = 0x461E38u;
label_461e38:
    // 0x461e38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461e3c:
    // 0x461e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461e40:
    // 0x461e40: 0x8c446058  lw          $a0, 0x6058($v0)
    ctx->pc = 0x461e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24664)));
label_461e44:
    // 0x461e44: 0xc04a576  jal         func_1295D8
label_461e48:
    if (ctx->pc == 0x461E48u) {
        ctx->pc = 0x461E48u;
            // 0x461e48: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->pc = 0x461E4Cu;
        goto label_461e4c;
    }
    ctx->pc = 0x461E44u;
    SET_GPR_U32(ctx, 31, 0x461E4Cu);
    ctx->pc = 0x461E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461E44u;
            // 0x461e48: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461E4Cu; }
        if (ctx->pc != 0x461E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461E4Cu; }
        if (ctx->pc != 0x461E4Cu) { return; }
    }
    ctx->pc = 0x461E4Cu;
label_461e4c:
    // 0x461e4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461e50:
    // 0x461e50: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x461e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_461e54:
    // 0x461e54: 0x8c466058  lw          $a2, 0x6058($v0)
    ctx->pc = 0x461e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24664)));
label_461e58:
    // 0x461e58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x461e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_461e5c:
    // 0x461e5c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x461e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_461e60:
    // 0x461e60: 0x90c5000c  lbu         $a1, 0xC($a2)
    ctx->pc = 0x461e60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
label_461e64:
    // 0x461e64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461e68:
    // 0x461e68: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x461e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_461e6c:
    // 0x461e6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x461e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_461e70:
    // 0x461e70: 0xa0c3000c  sb          $v1, 0xC($a2)
    ctx->pc = 0x461e70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 3));
label_461e74:
    // 0x461e74: 0x8c446060  lw          $a0, 0x6060($v0)
    ctx->pc = 0x461e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24672)));
label_461e78:
    // 0x461e78: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_461e7c:
    if (ctx->pc == 0x461E7Cu) {
        ctx->pc = 0x461E80u;
        goto label_461e80;
    }
    ctx->pc = 0x461E78u;
    {
        const bool branch_taken_0x461e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x461e78) {
            ctx->pc = 0x461EB0u;
            goto label_461eb0;
        }
    }
    ctx->pc = 0x461E80u;
label_461e80:
    // 0x461e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461e84:
    // 0x461e84: 0xc04a576  jal         func_1295D8
label_461e88:
    if (ctx->pc == 0x461E88u) {
        ctx->pc = 0x461E88u;
            // 0x461e88: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->pc = 0x461E8Cu;
        goto label_461e8c;
    }
    ctx->pc = 0x461E84u;
    SET_GPR_U32(ctx, 31, 0x461E8Cu);
    ctx->pc = 0x461E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461E84u;
            // 0x461e88: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461E8Cu; }
        if (ctx->pc != 0x461E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461E8Cu; }
        if (ctx->pc != 0x461E8Cu) { return; }
    }
    ctx->pc = 0x461E8Cu;
label_461e8c:
    // 0x461e8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461e90:
    // 0x461e90: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x461e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_461e94:
    // 0x461e94: 0x8c456060  lw          $a1, 0x6060($v0)
    ctx->pc = 0x461e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24672)));
label_461e98:
    // 0x461e98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x461e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_461e9c:
    // 0x461e9c: 0x90a4000c  lbu         $a0, 0xC($a1)
    ctx->pc = 0x461e9cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
label_461ea0:
    // 0x461ea0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x461ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_461ea4:
    // 0x461ea4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x461ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_461ea8:
    // 0x461ea8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x461ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_461eac:
    // 0x461eac: 0xa0a2000c  sb          $v0, 0xC($a1)
    ctx->pc = 0x461eacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 2));
label_461eb0:
    // 0x461eb0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_461eb4:
    // 0x461eb4: 0xc0b8c24  jal         func_2E3090
label_461eb8:
    if (ctx->pc == 0x461EB8u) {
        ctx->pc = 0x461EB8u;
            // 0x461eb8: 0x8c4489d0  lw          $a0, -0x7630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
        ctx->pc = 0x461EBCu;
        goto label_461ebc;
    }
    ctx->pc = 0x461EB4u;
    SET_GPR_U32(ctx, 31, 0x461EBCu);
    ctx->pc = 0x461EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461EB4u;
            // 0x461eb8: 0x8c4489d0  lw          $a0, -0x7630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (runtime->hasFunction(0x2E3090u)) {
        auto targetFn = runtime->lookupFunction(0x2E3090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461EBCu; }
        if (ctx->pc != 0x461EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3090_0x2e3090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461EBCu; }
        if (ctx->pc != 0x461EBCu) { return; }
    }
    ctx->pc = 0x461EBCu;
label_461ebc:
    // 0x461ebc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_461ec0:
    if (ctx->pc == 0x461EC0u) {
        ctx->pc = 0x461EC4u;
        goto label_461ec4;
    }
    ctx->pc = 0x461EBCu;
    {
        const bool branch_taken_0x461ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461ebc) {
            ctx->pc = 0x461ED0u;
            goto label_461ed0;
        }
    }
    ctx->pc = 0x461EC4u;
label_461ec4:
    // 0x461ec4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x461ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_461ec8:
    // 0x461ec8: 0x10000047  b           . + 4 + (0x47 << 2)
label_461ecc:
    if (ctx->pc == 0x461ECCu) {
        ctx->pc = 0x461ECCu;
            // 0x461ecc: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->pc = 0x461ED0u;
        goto label_461ed0;
    }
    ctx->pc = 0x461EC8u;
    {
        const bool branch_taken_0x461ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461EC8u;
            // 0x461ecc: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461ec8) {
            ctx->pc = 0x461FE8u;
            goto label_461fe8;
        }
    }
    ctx->pc = 0x461ED0u;
label_461ed0:
    // 0x461ed0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x461ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_461ed4:
    // 0x461ed4: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x461ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_461ed8:
    // 0x461ed8: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x461ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_461edc:
    // 0x461edc: 0xc040180  jal         func_100600
label_461ee0:
    if (ctx->pc == 0x461EE0u) {
        ctx->pc = 0x461EE0u;
            // 0x461ee0: 0xa0400038  sb          $zero, 0x38($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x461EE4u;
        goto label_461ee4;
    }
    ctx->pc = 0x461EDCu;
    SET_GPR_U32(ctx, 31, 0x461EE4u);
    ctx->pc = 0x461EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461EDCu;
            // 0x461ee0: 0xa0400038  sb          $zero, 0x38($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461EE4u; }
        if (ctx->pc != 0x461EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461EE4u; }
        if (ctx->pc != 0x461EE4u) { return; }
    }
    ctx->pc = 0x461EE4u;
label_461ee4:
    // 0x461ee4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x461ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_461ee8:
    // 0x461ee8: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_461eec:
    if (ctx->pc == 0x461EECu) {
        ctx->pc = 0x461EECu;
            // 0x461eec: 0x8e040968  lw          $a0, 0x968($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
        ctx->pc = 0x461EF0u;
        goto label_461ef0;
    }
    ctx->pc = 0x461EE8u;
    {
        const bool branch_taken_0x461ee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x461ee8) {
            ctx->pc = 0x461EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461EE8u;
            // 0x461eec: 0x8e040968  lw          $a0, 0x968($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461F18u;
            goto label_461f18;
        }
    }
    ctx->pc = 0x461EF0u;
label_461ef0:
    // 0x461ef0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461ef4:
    // 0x461ef4: 0x8e080968  lw          $t0, 0x968($s0)
    ctx->pc = 0x461ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_461ef8:
    // 0x461ef8: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x461ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_461efc:
    // 0x461efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x461efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_461f00:
    // 0x461f00: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x461f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_461f04:
    // 0x461f04: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x461f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_461f08:
    // 0x461f08: 0xc151190  jal         func_544640
label_461f0c:
    if (ctx->pc == 0x461F0Cu) {
        ctx->pc = 0x461F0Cu;
            // 0x461f0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x461F10u;
        goto label_461f10;
    }
    ctx->pc = 0x461F08u;
    SET_GPR_U32(ctx, 31, 0x461F10u);
    ctx->pc = 0x461F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461F08u;
            // 0x461f0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461F10u; }
        if (ctx->pc != 0x461F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461F10u; }
        if (ctx->pc != 0x461F10u) { return; }
    }
    ctx->pc = 0x461F10u;
label_461f10:
    // 0x461f10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x461f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_461f14:
    // 0x461f14: 0x8e040968  lw          $a0, 0x968($s0)
    ctx->pc = 0x461f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_461f18:
    // 0x461f18: 0xc0dd01c  jal         func_374070
label_461f1c:
    if (ctx->pc == 0x461F1Cu) {
        ctx->pc = 0x461F20u;
        goto label_461f20;
    }
    ctx->pc = 0x461F18u;
    SET_GPR_U32(ctx, 31, 0x461F20u);
    ctx->pc = 0x374070u;
    if (runtime->hasFunction(0x374070u)) {
        auto targetFn = runtime->lookupFunction(0x374070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461F20u; }
        if (ctx->pc != 0x461F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00374070_0x374070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461F20u; }
        if (ctx->pc != 0x461F20u) { return; }
    }
    ctx->pc = 0x461F20u;
label_461f20:
    // 0x461f20: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x461f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_461f24:
    // 0x461f24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x461f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_461f28:
    // 0x461f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x461f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_461f2c:
    // 0x461f2c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x461f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_461f30:
    // 0x461f30: 0x320f809  jalr        $t9
label_461f34:
    if (ctx->pc == 0x461F34u) {
        ctx->pc = 0x461F34u;
            // 0x461f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461F38u;
        goto label_461f38;
    }
    ctx->pc = 0x461F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x461F38u);
        ctx->pc = 0x461F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461F30u;
            // 0x461f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x461F38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x461F38u; }
            if (ctx->pc != 0x461F38u) { return; }
        }
        }
    }
    ctx->pc = 0x461F38u;
label_461f38:
    // 0x461f38: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x461f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_461f3c:
    // 0x461f3c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x461f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_461f40:
    // 0x461f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x461f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_461f44:
    // 0x461f44: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x461f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_461f48:
    // 0x461f48: 0x320f809  jalr        $t9
label_461f4c:
    if (ctx->pc == 0x461F4Cu) {
        ctx->pc = 0x461F4Cu;
            // 0x461f4c: 0x24a53fe0  addiu       $a1, $a1, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16352));
        ctx->pc = 0x461F50u;
        goto label_461f50;
    }
    ctx->pc = 0x461F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x461F50u);
        ctx->pc = 0x461F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461F48u;
            // 0x461f4c: 0x24a53fe0  addiu       $a1, $a1, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16352));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x461F50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x461F50u; }
            if (ctx->pc != 0x461F50u) { return; }
        }
        }
    }
    ctx->pc = 0x461F50u;
label_461f50:
    // 0x461f50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x461f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_461f54:
    // 0x461f54: 0x10000024  b           . + 4 + (0x24 << 2)
label_461f58:
    if (ctx->pc == 0x461F58u) {
        ctx->pc = 0x461F58u;
            // 0x461f58: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->pc = 0x461F5Cu;
        goto label_461f5c;
    }
    ctx->pc = 0x461F54u;
    {
        const bool branch_taken_0x461f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461F54u;
            // 0x461f58: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461f54) {
            ctx->pc = 0x461FE8u;
            goto label_461fe8;
        }
    }
    ctx->pc = 0x461F5Cu;
label_461f5c:
    // 0x461f5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461f60:
    // 0x461f60: 0x8c423e28  lw          $v0, 0x3E28($v0)
    ctx->pc = 0x461f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_461f64:
    // 0x461f64: 0x90420023  lbu         $v0, 0x23($v0)
    ctx->pc = 0x461f64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
label_461f68:
    // 0x461f68: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_461f6c:
    if (ctx->pc == 0x461F6Cu) {
        ctx->pc = 0x461F70u;
        goto label_461f70;
    }
    ctx->pc = 0x461F68u;
    {
        const bool branch_taken_0x461f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461f68) {
            ctx->pc = 0x461FE8u;
            goto label_461fe8;
        }
    }
    ctx->pc = 0x461F70u;
label_461f70:
    // 0x461f70: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x461f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_461f74:
    // 0x461f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x461f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461f78:
    // 0x461f78: 0x8c42d000  lw          $v0, -0x3000($v0)
    ctx->pc = 0x461f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955008)));
label_461f7c:
    // 0x461f7c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_461f80:
    if (ctx->pc == 0x461F80u) {
        ctx->pc = 0x461F84u;
        goto label_461f84;
    }
    ctx->pc = 0x461F7Cu;
    {
        const bool branch_taken_0x461f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x461f7c) {
            ctx->pc = 0x461F8Cu;
            goto label_461f8c;
        }
    }
    ctx->pc = 0x461F84u;
label_461f84:
    // 0x461f84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461f88:
    // 0x461f88: 0xa0436068  sb          $v1, 0x6068($v0)
    ctx->pc = 0x461f88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24680), (uint8_t)GPR_U32(ctx, 3));
label_461f8c:
    // 0x461f8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461f90:
    // 0x461f90: 0x8c446058  lw          $a0, 0x6058($v0)
    ctx->pc = 0x461f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24664)));
label_461f94:
    // 0x461f94: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x461f94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_461f98:
    // 0x461f98: 0x316fc  dsll32      $v0, $v1, 27
    ctx->pc = 0x461f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 27));
label_461f9c:
    // 0x461f9c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x461f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_461fa0:
    // 0x461fa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_461fa4:
    if (ctx->pc == 0x461FA4u) {
        ctx->pc = 0x461FA4u;
            // 0x461fa4: 0x8e050968  lw          $a1, 0x968($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
        ctx->pc = 0x461FA8u;
        goto label_461fa8;
    }
    ctx->pc = 0x461FA0u;
    {
        const bool branch_taken_0x461fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x461FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461FA0u;
            // 0x461fa4: 0x8e050968  lw          $a1, 0x968($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461fa0) {
            ctx->pc = 0x461FC0u;
            goto label_461fc0;
        }
    }
    ctx->pc = 0x461FA8u;
label_461fa8:
    // 0x461fa8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x461fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_461fac:
    // 0x461fac: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x461facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_461fb0:
    // 0x461fb0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_461fb4:
    if (ctx->pc == 0x461FB4u) {
        ctx->pc = 0x461FB4u;
            // 0x461fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461FB8u;
        goto label_461fb8;
    }
    ctx->pc = 0x461FB0u;
    {
        const bool branch_taken_0x461fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x461fb0) {
            ctx->pc = 0x461FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461FB0u;
            // 0x461fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461FC4u;
            goto label_461fc4;
        }
    }
    ctx->pc = 0x461FB8u;
label_461fb8:
    // 0x461fb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_461fbc:
    if (ctx->pc == 0x461FBCu) {
        ctx->pc = 0x461FBCu;
            // 0x461fbc: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x461FC0u;
        goto label_461fc0;
    }
    ctx->pc = 0x461FB8u;
    {
        const bool branch_taken_0x461fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461FB8u;
            // 0x461fbc: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461fb8) {
            ctx->pc = 0x461FC4u;
            goto label_461fc4;
        }
    }
    ctx->pc = 0x461FC0u;
label_461fc0:
    // 0x461fc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x461fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461fc4:
    // 0x461fc4: 0xae020cc0  sw          $v0, 0xCC0($s0)
    ctx->pc = 0x461fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3264), GPR_U32(ctx, 2));
label_461fc8:
    // 0x461fc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x461fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_461fcc:
    // 0x461fcc: 0x10000006  b           . + 4 + (0x6 << 2)
label_461fd0:
    if (ctx->pc == 0x461FD0u) {
        ctx->pc = 0x461FD0u;
            // 0x461fd0: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->pc = 0x461FD4u;
        goto label_461fd4;
    }
    ctx->pc = 0x461FCCu;
    {
        const bool branch_taken_0x461fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461FCCu;
            // 0x461fd0: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461fcc) {
            ctx->pc = 0x461FE8u;
            goto label_461fe8;
        }
    }
    ctx->pc = 0x461FD4u;
label_461fd4:
    // 0x461fd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x461fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_461fd8:
    // 0x461fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x461fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461fdc:
    // 0x461fdc: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x461fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_461fe0:
    // 0x461fe0: 0x10000002  b           . + 4 + (0x2 << 2)
label_461fe4:
    if (ctx->pc == 0x461FE4u) {
        ctx->pc = 0x461FE4u;
            // 0x461fe4: 0xa0620038  sb          $v0, 0x38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x461FE8u;
        goto label_461fe8;
    }
    ctx->pc = 0x461FE0u;
    {
        const bool branch_taken_0x461fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461FE0u;
            // 0x461fe4: 0xa0620038  sb          $v0, 0x38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461fe0) {
            ctx->pc = 0x461FECu;
            goto label_461fec;
        }
    }
    ctx->pc = 0x461FE8u;
label_461fe8:
    // 0x461fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x461fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461fec:
    // 0x461fec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x461fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_461ff0:
    // 0x461ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461ff4:
    // 0x461ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461ff8:
    // 0x461ff8: 0x3e00008  jr          $ra
label_461ffc:
    if (ctx->pc == 0x461FFCu) {
        ctx->pc = 0x461FFCu;
            // 0x461ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x462000u;
        goto label_462000;
    }
    ctx->pc = 0x461FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461FF8u;
            // 0x461ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462000u;
label_462000:
    // 0x462000: 0x8c840090  lw          $a0, 0x90($a0)
    ctx->pc = 0x462000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_462004:
    // 0x462004: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x462004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_462008:
    // 0x462008: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x462008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_46200c:
    // 0x46200c: 0x3200008  jr          $t9
label_462010:
    if (ctx->pc == 0x462010u) {
        ctx->pc = 0x462014u;
        goto label_462014;
    }
    ctx->pc = 0x46200Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462014u;
label_462014:
    // 0x462014: 0x0  nop
    ctx->pc = 0x462014u;
    // NOP
label_462018:
    // 0x462018: 0x0  nop
    ctx->pc = 0x462018u;
    // NOP
label_46201c:
    // 0x46201c: 0x0  nop
    ctx->pc = 0x46201cu;
    // NOP
label_462020:
    // 0x462020: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x462020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_462024:
    // 0x462024: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x462024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_462028:
    // 0x462028: 0x3e00008  jr          $ra
label_46202c:
    if (ctx->pc == 0x46202Cu) {
        ctx->pc = 0x46202Cu;
            // 0x46202c: 0xac660048  sw          $a2, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 6));
        ctx->pc = 0x462030u;
        goto label_462030;
    }
    ctx->pc = 0x462028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46202Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462028u;
            // 0x46202c: 0xac660048  sw          $a2, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462030u;
label_462030:
    // 0x462030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x462030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_462034:
    // 0x462034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x462034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_462038:
    // 0x462038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x462038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46203c:
    // 0x46203c: 0x8c820cb4  lw          $v0, 0xCB4($a0)
    ctx->pc = 0x46203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_462040:
    // 0x462040: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x462040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_462044:
    // 0x462044: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_462048:
    if (ctx->pc == 0x462048u) {
        ctx->pc = 0x462048u;
            // 0x462048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46204Cu;
        goto label_46204c;
    }
    ctx->pc = 0x462044u;
    {
        const bool branch_taken_0x462044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x462048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462044u;
            // 0x462048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462044) {
            ctx->pc = 0x462060u;
            goto label_462060;
        }
    }
    ctx->pc = 0x46204Cu;
label_46204c:
    // 0x46204c: 0x8e040cbc  lw          $a0, 0xCBC($s0)
    ctx->pc = 0x46204cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3260)));
label_462050:
    // 0x462050: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_462054:
    if (ctx->pc == 0x462054u) {
        ctx->pc = 0x462054u;
            // 0x462054: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x462058u;
        goto label_462058;
    }
    ctx->pc = 0x462050u;
    {
        const bool branch_taken_0x462050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x462050) {
            ctx->pc = 0x462054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462050u;
            // 0x462054: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462064u;
            goto label_462064;
        }
    }
    ctx->pc = 0x462058u;
label_462058:
    // 0x462058: 0xc0dcc24  jal         func_373090
label_46205c:
    if (ctx->pc == 0x46205Cu) {
        ctx->pc = 0x46205Cu;
            // 0x46205c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x462060u;
        goto label_462060;
    }
    ctx->pc = 0x462058u;
    SET_GPR_U32(ctx, 31, 0x462060u);
    ctx->pc = 0x46205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462058u;
            // 0x46205c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x373090u;
    if (runtime->hasFunction(0x373090u)) {
        auto targetFn = runtime->lookupFunction(0x373090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462060u; }
        if (ctx->pc != 0x462060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00373090_0x373090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462060u; }
        if (ctx->pc != 0x462060u) { return; }
    }
    ctx->pc = 0x462060u;
label_462060:
    // 0x462060: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x462060u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_462064:
    // 0x462064: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x462064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_462068:
    // 0x462068: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_46206c:
    if (ctx->pc == 0x46206Cu) {
        ctx->pc = 0x46206Cu;
            // 0x46206c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462070u;
        goto label_462070;
    }
    ctx->pc = 0x462068u;
    {
        const bool branch_taken_0x462068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x462068) {
            ctx->pc = 0x46206Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462068u;
            // 0x46206c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462188u;
            goto label_462188;
        }
    }
    ctx->pc = 0x462070u;
label_462070:
    // 0x462070: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x462070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_462074:
    // 0x462074: 0x50620039  beql        $v1, $v0, . + 4 + (0x39 << 2)
label_462078:
    if (ctx->pc == 0x462078u) {
        ctx->pc = 0x462078u;
            // 0x462078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46207Cu;
        goto label_46207c;
    }
    ctx->pc = 0x462074u;
    {
        const bool branch_taken_0x462074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x462074) {
            ctx->pc = 0x462078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462074u;
            // 0x462078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46215Cu;
            goto label_46215c;
        }
    }
    ctx->pc = 0x46207Cu;
label_46207c:
    // 0x46207c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x46207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_462080:
    // 0x462080: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
label_462084:
    if (ctx->pc == 0x462084u) {
        ctx->pc = 0x462084u;
            // 0x462084: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x462088u;
        goto label_462088;
    }
    ctx->pc = 0x462080u;
    {
        const bool branch_taken_0x462080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x462080) {
            ctx->pc = 0x462084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462080u;
            // 0x462084: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4620C8u;
            goto label_4620c8;
        }
    }
    ctx->pc = 0x462088u;
label_462088:
    // 0x462088: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x462088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46208c:
    // 0x46208c: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_462090:
    if (ctx->pc == 0x462090u) {
        ctx->pc = 0x462090u;
            // 0x462090: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x462094u;
        goto label_462094;
    }
    ctx->pc = 0x46208Cu;
    {
        const bool branch_taken_0x46208c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46208c) {
            ctx->pc = 0x462090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46208Cu;
            // 0x462090: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46209Cu;
            goto label_46209c;
        }
    }
    ctx->pc = 0x462094u;
label_462094:
    // 0x462094: 0x10000050  b           . + 4 + (0x50 << 2)
label_462098:
    if (ctx->pc == 0x462098u) {
        ctx->pc = 0x462098u;
            // 0x462098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46209Cu;
        goto label_46209c;
    }
    ctx->pc = 0x462094u;
    {
        const bool branch_taken_0x462094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x462098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462094u;
            // 0x462098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462094) {
            ctx->pc = 0x4621D8u;
            goto label_4621d8;
        }
    }
    ctx->pc = 0x46209Cu;
label_46209c:
    // 0x46209c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x46209cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4620a0:
    // 0x4620a0: 0x320f809  jalr        $t9
label_4620a4:
    if (ctx->pc == 0x4620A4u) {
        ctx->pc = 0x4620A4u;
            // 0x4620a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4620A8u;
        goto label_4620a8;
    }
    ctx->pc = 0x4620A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4620A8u);
        ctx->pc = 0x4620A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4620A0u;
            // 0x4620a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4620A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4620A8u; }
            if (ctx->pc != 0x4620A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4620A8u;
label_4620a8:
    // 0x4620a8: 0xae000cdc  sw          $zero, 0xCDC($s0)
    ctx->pc = 0x4620a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 0));
label_4620ac:
    // 0x4620ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4620acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4620b0:
    // 0x4620b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4620b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4620b4:
    // 0x4620b4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4620b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4620b8:
    // 0x4620b8: 0x320f809  jalr        $t9
label_4620bc:
    if (ctx->pc == 0x4620BCu) {
        ctx->pc = 0x4620BCu;
            // 0x4620bc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x4620C0u;
        goto label_4620c0;
    }
    ctx->pc = 0x4620B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4620C0u);
        ctx->pc = 0x4620BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4620B8u;
            // 0x4620bc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4620C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4620C0u; }
            if (ctx->pc != 0x4620C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4620C0u;
label_4620c0:
    // 0x4620c0: 0x10000048  b           . + 4 + (0x48 << 2)
label_4620c4:
    if (ctx->pc == 0x4620C4u) {
        ctx->pc = 0x4620C4u;
            // 0x4620c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4620C8u;
        goto label_4620c8;
    }
    ctx->pc = 0x4620C0u;
    {
        const bool branch_taken_0x4620c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4620C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4620C0u;
            // 0x4620c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4620c0) {
            ctx->pc = 0x4621E4u;
            goto label_4621e4;
        }
    }
    ctx->pc = 0x4620C8u;
label_4620c8:
    // 0x4620c8: 0xae020cb4  sw          $v0, 0xCB4($s0)
    ctx->pc = 0x4620c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 2));
label_4620cc:
    // 0x4620cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4620ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4620d0:
    // 0x4620d0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4620d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4620d4:
    // 0x4620d4: 0x320f809  jalr        $t9
label_4620d8:
    if (ctx->pc == 0x4620D8u) {
        ctx->pc = 0x4620D8u;
            // 0x4620d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4620DCu;
        goto label_4620dc;
    }
    ctx->pc = 0x4620D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4620DCu);
        ctx->pc = 0x4620D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4620D4u;
            // 0x4620d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4620DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4620DCu; }
            if (ctx->pc != 0x4620DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4620DCu;
label_4620dc:
    // 0x4620dc: 0xae000c5c  sw          $zero, 0xC5C($s0)
    ctx->pc = 0x4620dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3164), GPR_U32(ctx, 0));
label_4620e0:
    // 0x4620e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4620e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4620e4:
    // 0x4620e4: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x4620e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_4620e8:
    // 0x4620e8: 0x320f809  jalr        $t9
label_4620ec:
    if (ctx->pc == 0x4620ECu) {
        ctx->pc = 0x4620ECu;
            // 0x4620ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4620F0u;
        goto label_4620f0;
    }
    ctx->pc = 0x4620E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4620F0u);
        ctx->pc = 0x4620ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4620E8u;
            // 0x4620ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4620F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4620F0u; }
            if (ctx->pc != 0x4620F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4620F0u;
label_4620f0:
    // 0x4620f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4620f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4620f4:
    // 0x4620f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4620f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4620f8:
    // 0x4620f8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4620f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4620fc:
    // 0x4620fc: 0x320f809  jalr        $t9
label_462100:
    if (ctx->pc == 0x462100u) {
        ctx->pc = 0x462100u;
            // 0x462100: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x462104u;
        goto label_462104;
    }
    ctx->pc = 0x4620FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x462104u);
        ctx->pc = 0x462100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4620FCu;
            // 0x462100: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x462104u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x462104u; }
            if (ctx->pc != 0x462104u) { return; }
        }
        }
    }
    ctx->pc = 0x462104u;
label_462104:
    // 0x462104: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x462104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_462108:
    // 0x462108: 0x8c42e670  lw          $v0, -0x1990($v0)
    ctx->pc = 0x462108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960752)));
label_46210c:
    // 0x46210c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_462110:
    if (ctx->pc == 0x462110u) {
        ctx->pc = 0x462110u;
            // 0x462110: 0xae000cdc  sw          $zero, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 0));
        ctx->pc = 0x462114u;
        goto label_462114;
    }
    ctx->pc = 0x46210Cu;
    {
        const bool branch_taken_0x46210c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x462110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46210Cu;
            // 0x462110: 0xae000cdc  sw          $zero, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46210c) {
            ctx->pc = 0x462120u;
            goto label_462120;
        }
    }
    ctx->pc = 0x462114u;
label_462114:
    // 0x462114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x462114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_462118:
    // 0x462118: 0x10000008  b           . + 4 + (0x8 << 2)
label_46211c:
    if (ctx->pc == 0x46211Cu) {
        ctx->pc = 0x46211Cu;
            // 0x46211c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x462120u;
        goto label_462120;
    }
    ctx->pc = 0x462118u;
    {
        const bool branch_taken_0x462118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46211Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462118u;
            // 0x46211c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x462118) {
            ctx->pc = 0x46213Cu;
            goto label_46213c;
        }
    }
    ctx->pc = 0x462120u;
label_462120:
    // 0x462120: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x462120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_462124:
    // 0x462124: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x462124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_462128:
    // 0x462128: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x462128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_46212c:
    // 0x46212c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46212cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_462130:
    // 0x462130: 0x0  nop
    ctx->pc = 0x462130u;
    // NOP
label_462134:
    // 0x462134: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x462134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_462138:
    // 0x462138: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x462138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_46213c:
    // 0x46213c: 0xe6000cd8  swc1        $f0, 0xCD8($s0)
    ctx->pc = 0x46213cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3288), bits); }
label_462140:
    // 0x462140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x462140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_462144:
    // 0x462144: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x462144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_462148:
    // 0x462148: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x462148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_46214c:
    // 0x46214c: 0x320f809  jalr        $t9
label_462150:
    if (ctx->pc == 0x462150u) {
        ctx->pc = 0x462150u;
            // 0x462150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462154u;
        goto label_462154;
    }
    ctx->pc = 0x46214Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x462154u);
        ctx->pc = 0x462150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46214Cu;
            // 0x462150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x462154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x462154u; }
            if (ctx->pc != 0x462154u) { return; }
        }
        }
    }
    ctx->pc = 0x462154u;
label_462154:
    // 0x462154: 0x10000022  b           . + 4 + (0x22 << 2)
label_462158:
    if (ctx->pc == 0x462158u) {
        ctx->pc = 0x46215Cu;
        goto label_46215c;
    }
    ctx->pc = 0x462154u;
    {
        const bool branch_taken_0x462154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462154) {
            ctx->pc = 0x4621E0u;
            goto label_4621e0;
        }
    }
    ctx->pc = 0x46215Cu;
label_46215c:
    // 0x46215c: 0xc118740  jal         func_461D00
label_462160:
    if (ctx->pc == 0x462160u) {
        ctx->pc = 0x462164u;
        goto label_462164;
    }
    ctx->pc = 0x46215Cu;
    SET_GPR_U32(ctx, 31, 0x462164u);
    ctx->pc = 0x461D00u;
    goto label_461d00;
    ctx->pc = 0x462164u;
label_462164:
    // 0x462164: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_462168:
    if (ctx->pc == 0x462168u) {
        ctx->pc = 0x46216Cu;
        goto label_46216c;
    }
    ctx->pc = 0x462164u;
    {
        const bool branch_taken_0x462164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462164) {
            ctx->pc = 0x4621E0u;
            goto label_4621e0;
        }
    }
    ctx->pc = 0x46216Cu;
label_46216c:
    // 0x46216c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x46216cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_462170:
    // 0x462170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x462170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_462174:
    // 0x462174: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x462174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_462178:
    // 0x462178: 0x320f809  jalr        $t9
label_46217c:
    if (ctx->pc == 0x46217Cu) {
        ctx->pc = 0x46217Cu;
            // 0x46217c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x462180u;
        goto label_462180;
    }
    ctx->pc = 0x462178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x462180u);
        ctx->pc = 0x46217Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462178u;
            // 0x46217c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x462180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x462180u; }
            if (ctx->pc != 0x462180u) { return; }
        }
        }
    }
    ctx->pc = 0x462180u;
label_462180:
    // 0x462180: 0x10000017  b           . + 4 + (0x17 << 2)
label_462184:
    if (ctx->pc == 0x462184u) {
        ctx->pc = 0x462188u;
        goto label_462188;
    }
    ctx->pc = 0x462180u;
    {
        const bool branch_taken_0x462180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462180) {
            ctx->pc = 0x4621E0u;
            goto label_4621e0;
        }
    }
    ctx->pc = 0x462188u;
label_462188:
    // 0x462188: 0xc1186cc  jal         func_461B30
label_46218c:
    if (ctx->pc == 0x46218Cu) {
        ctx->pc = 0x46218Cu;
            // 0x46218c: 0xae000c5c  sw          $zero, 0xC5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3164), GPR_U32(ctx, 0));
        ctx->pc = 0x462190u;
        goto label_462190;
    }
    ctx->pc = 0x462188u;
    SET_GPR_U32(ctx, 31, 0x462190u);
    ctx->pc = 0x46218Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462188u;
            // 0x46218c: 0xae000c5c  sw          $zero, 0xC5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x461B30u;
    if (runtime->hasFunction(0x461B30u)) {
        auto targetFn = runtime->lookupFunction(0x461B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462190u; }
        if (ctx->pc != 0x462190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00461B30_0x461b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462190u; }
        if (ctx->pc != 0x462190u) { return; }
    }
    ctx->pc = 0x462190u;
label_462190:
    // 0x462190: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_462194:
    if (ctx->pc == 0x462194u) {
        ctx->pc = 0x462198u;
        goto label_462198;
    }
    ctx->pc = 0x462190u;
    {
        const bool branch_taken_0x462190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462190) {
            ctx->pc = 0x4621E0u;
            goto label_4621e0;
        }
    }
    ctx->pc = 0x462198u;
label_462198:
    // 0x462198: 0xc040180  jal         func_100600
label_46219c:
    if (ctx->pc == 0x46219Cu) {
        ctx->pc = 0x46219Cu;
            // 0x46219c: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->pc = 0x4621A0u;
        goto label_4621a0;
    }
    ctx->pc = 0x462198u;
    SET_GPR_U32(ctx, 31, 0x4621A0u);
    ctx->pc = 0x46219Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462198u;
            // 0x46219c: 0x240402a4  addiu       $a0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4621A0u; }
        if (ctx->pc != 0x4621A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4621A0u; }
        if (ctx->pc != 0x4621A0u) { return; }
    }
    ctx->pc = 0x4621A0u;
label_4621a0:
    // 0x4621a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4621a4:
    if (ctx->pc == 0x4621A4u) {
        ctx->pc = 0x4621A4u;
            // 0x4621a4: 0xae020cb0  sw          $v0, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
        ctx->pc = 0x4621A8u;
        goto label_4621a8;
    }
    ctx->pc = 0x4621A0u;
    {
        const bool branch_taken_0x4621a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4621a0) {
            ctx->pc = 0x4621A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4621A0u;
            // 0x4621a4: 0xae020cb0  sw          $v0, 0xCB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4621BCu;
            goto label_4621bc;
        }
    }
    ctx->pc = 0x4621A8u;
label_4621a8:
    // 0x4621a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4621a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4621ac:
    // 0x4621ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4621acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4621b0:
    // 0x4621b0: 0xc11e7b0  jal         func_479EC0
label_4621b4:
    if (ctx->pc == 0x4621B4u) {
        ctx->pc = 0x4621B4u;
            // 0x4621b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4621B8u;
        goto label_4621b8;
    }
    ctx->pc = 0x4621B0u;
    SET_GPR_U32(ctx, 31, 0x4621B8u);
    ctx->pc = 0x4621B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4621B0u;
            // 0x4621b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479EC0u;
    if (runtime->hasFunction(0x479EC0u)) {
        auto targetFn = runtime->lookupFunction(0x479EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4621B8u; }
        if (ctx->pc != 0x4621B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479EC0_0x479ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4621B8u; }
        if (ctx->pc != 0x4621B8u) { return; }
    }
    ctx->pc = 0x4621B8u;
label_4621b8:
    // 0x4621b8: 0xae020cb0  sw          $v0, 0xCB0($s0)
    ctx->pc = 0x4621b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3248), GPR_U32(ctx, 2));
label_4621bc:
    // 0x4621bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4621bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4621c0:
    // 0x4621c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4621c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4621c4:
    // 0x4621c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4621c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4621c8:
    // 0x4621c8: 0x320f809  jalr        $t9
label_4621cc:
    if (ctx->pc == 0x4621CCu) {
        ctx->pc = 0x4621CCu;
            // 0x4621cc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4621D0u;
        goto label_4621d0;
    }
    ctx->pc = 0x4621C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4621D0u);
        ctx->pc = 0x4621CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4621C8u;
            // 0x4621cc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4621D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4621D0u; }
            if (ctx->pc != 0x4621D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4621D0u;
label_4621d0:
    // 0x4621d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4621d4:
    if (ctx->pc == 0x4621D4u) {
        ctx->pc = 0x4621D8u;
        goto label_4621d8;
    }
    ctx->pc = 0x4621D0u;
    {
        const bool branch_taken_0x4621d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4621d0) {
            ctx->pc = 0x4621E0u;
            goto label_4621e0;
        }
    }
    ctx->pc = 0x4621D8u;
label_4621d8:
    // 0x4621d8: 0xc0cb834  jal         func_32E0D0
label_4621dc:
    if (ctx->pc == 0x4621DCu) {
        ctx->pc = 0x4621E0u;
        goto label_4621e0;
    }
    ctx->pc = 0x4621D8u;
    SET_GPR_U32(ctx, 31, 0x4621E0u);
    ctx->pc = 0x32E0D0u;
    if (runtime->hasFunction(0x32E0D0u)) {
        auto targetFn = runtime->lookupFunction(0x32E0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4621E0u; }
        if (ctx->pc != 0x4621E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E0D0_0x32e0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4621E0u; }
        if (ctx->pc != 0x4621E0u) { return; }
    }
    ctx->pc = 0x4621E0u;
label_4621e0:
    // 0x4621e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4621e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4621e4:
    // 0x4621e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4621e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4621e8:
    // 0x4621e8: 0x3e00008  jr          $ra
label_4621ec:
    if (ctx->pc == 0x4621ECu) {
        ctx->pc = 0x4621ECu;
            // 0x4621ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4621F0u;
        goto label_4621f0;
    }
    ctx->pc = 0x4621E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4621ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4621E8u;
            // 0x4621ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4621F0u;
label_4621f0:
    // 0x4621f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4621f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4621f4:
    // 0x4621f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4621f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4621f8:
    // 0x4621f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4621f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4621fc:
    // 0x4621fc: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4621fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_462200:
    // 0x462200: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x462200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_462204:
    // 0x462204: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x462204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_462208:
    // 0x462208: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x462208u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46220c:
    // 0x46220c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_462210:
    // 0x462210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x462210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_462214:
    // 0x462214: 0x8c670ec8  lw          $a3, 0xEC8($v1)
    ctx->pc = 0x462214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_462218:
    // 0x462218: 0x8cb00e84  lw          $s0, 0xE84($a1)
    ctx->pc = 0x462218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3716)));
label_46221c:
    // 0x46221c: 0x8c860968  lw          $a2, 0x968($a0)
    ctx->pc = 0x46221cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_462220:
    // 0x462220: 0x8c83095c  lw          $v1, 0x95C($a0)
    ctx->pc = 0x462220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2396)));
label_462224:
    // 0x462224: 0x8cf10008  lw          $s1, 0x8($a3)
    ctx->pc = 0x462224u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_462228:
    // 0x462228: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x462228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46222c:
    // 0x46222c: 0x10650026  beq         $v1, $a1, . + 4 + (0x26 << 2)
label_462230:
    if (ctx->pc == 0x462230u) {
        ctx->pc = 0x462230u;
            // 0x462230: 0x24d2ffff  addiu       $s2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x462234u;
        goto label_462234;
    }
    ctx->pc = 0x46222Cu;
    {
        const bool branch_taken_0x46222c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x462230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46222Cu;
            // 0x462230: 0x24d2ffff  addiu       $s2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46222c) {
            ctx->pc = 0x4622C8u;
            goto label_4622c8;
        }
    }
    ctx->pc = 0x462234u;
label_462234:
    // 0x462234: 0xc0ca6b4  jal         func_329AD0
label_462238:
    if (ctx->pc == 0x462238u) {
        ctx->pc = 0x462238u;
            // 0x462238: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->pc = 0x46223Cu;
        goto label_46223c;
    }
    ctx->pc = 0x462234u;
    SET_GPR_U32(ctx, 31, 0x46223Cu);
    ctx->pc = 0x462238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462234u;
            // 0x462238: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329AD0u;
    if (runtime->hasFunction(0x329AD0u)) {
        auto targetFn = runtime->lookupFunction(0x329AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46223Cu; }
        if (ctx->pc != 0x46223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329AD0_0x329ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46223Cu; }
        if (ctx->pc != 0x46223Cu) { return; }
    }
    ctx->pc = 0x46223Cu;
label_46223c:
    // 0x46223c: 0xae620cd4  sw          $v0, 0xCD4($s3)
    ctx->pc = 0x46223cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3284), GPR_U32(ctx, 2));
label_462240:
    // 0x462240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x462240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_462244:
    // 0x462244: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x462244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_462248:
    // 0x462248: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x462248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_46224c:
    // 0x46224c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_462250:
    // 0x462250: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x462250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_462254:
    // 0x462254: 0xae620cd0  sw          $v0, 0xCD0($s3)
    ctx->pc = 0x462254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3280), GPR_U32(ctx, 2));
label_462258:
    // 0x462258: 0x8e660cd4  lw          $a2, 0xCD4($s3)
    ctx->pc = 0x462258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3284)));
label_46225c:
    // 0x46225c: 0xc1205f8  jal         func_4817E0
label_462260:
    if (ctx->pc == 0x462260u) {
        ctx->pc = 0x462260u;
            // 0x462260: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462264u;
        goto label_462264;
    }
    ctx->pc = 0x46225Cu;
    SET_GPR_U32(ctx, 31, 0x462264u);
    ctx->pc = 0x462260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46225Cu;
            // 0x462260: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4817E0u;
    if (runtime->hasFunction(0x4817E0u)) {
        auto targetFn = runtime->lookupFunction(0x4817E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462264u; }
        if (ctx->pc != 0x462264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004817E0_0x4817e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462264u; }
        if (ctx->pc != 0x462264u) { return; }
    }
    ctx->pc = 0x462264u;
label_462264:
    // 0x462264: 0xa2620ccd  sb          $v0, 0xCCD($s3)
    ctx->pc = 0x462264u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3277), (uint8_t)GPR_U32(ctx, 2));
label_462268:
    // 0x462268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x462268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46226c:
    // 0x46226c: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x46226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_462270:
    // 0x462270: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x462270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_462274:
    // 0x462274: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x462274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462278:
    // 0x462278: 0x90670011  lbu         $a3, 0x11($v1)
    ctx->pc = 0x462278u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
label_46227c:
    // 0x46227c: 0x94680012  lhu         $t0, 0x12($v1)
    ctx->pc = 0x46227cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
label_462280:
    // 0x462280: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x462280u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_462284:
    // 0x462284: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x462284u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_462288:
    // 0x462288: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x462288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_46228c:
    // 0x46228c: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x46228cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_462290:
    // 0x462290: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x462290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_462294:
    // 0x462294: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x462294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_462298:
    // 0x462298: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x462298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_46229c:
    // 0x46229c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x46229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4622a0:
    // 0x4622a0: 0xc120580  jal         func_481600
label_4622a4:
    if (ctx->pc == 0x4622A4u) {
        ctx->pc = 0x4622A4u;
            // 0x4622a4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4622A8u;
        goto label_4622a8;
    }
    ctx->pc = 0x4622A0u;
    SET_GPR_U32(ctx, 31, 0x4622A8u);
    ctx->pc = 0x4622A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4622A0u;
            // 0x4622a4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481600u;
    if (runtime->hasFunction(0x481600u)) {
        auto targetFn = runtime->lookupFunction(0x481600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4622A8u; }
        if (ctx->pc != 0x4622A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481600_0x481600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4622A8u; }
        if (ctx->pc != 0x4622A8u) { return; }
    }
    ctx->pc = 0x4622A8u;
label_4622a8:
    // 0x4622a8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4622a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4622ac:
    // 0x4622ac: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x4622acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_4622b0:
    // 0x4622b0: 0x2463fa80  addiu       $v1, $v1, -0x580
    ctx->pc = 0x4622b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965888));
label_4622b4:
    // 0x4622b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4622b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4622b8:
    // 0x4622b8: 0x8e640cd4  lw          $a0, 0xCD4($s3)
    ctx->pc = 0x4622b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3284)));
label_4622bc:
    // 0x4622bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4622bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4622c0:
    // 0x4622c0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4622c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4622c4:
    // 0x4622c4: 0xa2630cce  sb          $v1, 0xCCE($s3)
    ctx->pc = 0x4622c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3278), (uint8_t)GPR_U32(ctx, 3));
label_4622c8:
    // 0x4622c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4622c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4622cc:
    // 0x4622cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4622ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4622d0:
    // 0x4622d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4622d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4622d4:
    // 0x4622d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4622d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4622d8:
    // 0x4622d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4622d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4622dc:
    // 0x4622dc: 0x3e00008  jr          $ra
label_4622e0:
    if (ctx->pc == 0x4622E0u) {
        ctx->pc = 0x4622E0u;
            // 0x4622e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4622E4u;
        goto label_4622e4;
    }
    ctx->pc = 0x4622DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4622E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4622DCu;
            // 0x4622e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4622E4u;
label_4622e4:
    // 0x4622e4: 0x0  nop
    ctx->pc = 0x4622e4u;
    // NOP
label_4622e8:
    // 0x4622e8: 0x0  nop
    ctx->pc = 0x4622e8u;
    // NOP
label_4622ec:
    // 0x4622ec: 0x0  nop
    ctx->pc = 0x4622ecu;
    // NOP
label_4622f0:
    // 0x4622f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4622f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4622f4:
    // 0x4622f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4622f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4622f8:
    // 0x4622f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4622f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4622fc:
    // 0x4622fc: 0x8c820cc4  lw          $v0, 0xCC4($a0)
    ctx->pc = 0x4622fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3268)));
label_462300:
    // 0x462300: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_462304:
    if (ctx->pc == 0x462304u) {
        ctx->pc = 0x462304u;
            // 0x462304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462308u;
        goto label_462308;
    }
    ctx->pc = 0x462300u;
    {
        const bool branch_taken_0x462300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462300u;
            // 0x462304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462300) {
            ctx->pc = 0x462360u;
            goto label_462360;
        }
    }
    ctx->pc = 0x462308u;
label_462308:
    // 0x462308: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46230c:
    // 0x46230c: 0xc0fcfe0  jal         func_3F3F80
label_462310:
    if (ctx->pc == 0x462310u) {
        ctx->pc = 0x462310u;
            // 0x462310: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->pc = 0x462314u;
        goto label_462314;
    }
    ctx->pc = 0x46230Cu;
    SET_GPR_U32(ctx, 31, 0x462314u);
    ctx->pc = 0x462310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46230Cu;
            // 0x462310: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3F80u;
    if (runtime->hasFunction(0x3F3F80u)) {
        auto targetFn = runtime->lookupFunction(0x3F3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462314u; }
        if (ctx->pc != 0x462314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3F80_0x3f3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462314u; }
        if (ctx->pc != 0x462314u) { return; }
    }
    ctx->pc = 0x462314u;
label_462314:
    // 0x462314: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_462318:
    if (ctx->pc == 0x462318u) {
        ctx->pc = 0x462318u;
            // 0x462318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46231Cu;
        goto label_46231c;
    }
    ctx->pc = 0x462314u;
    {
        const bool branch_taken_0x462314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462314) {
            ctx->pc = 0x462318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462314u;
            // 0x462318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462364u;
            goto label_462364;
        }
    }
    ctx->pc = 0x46231Cu;
label_46231c:
    // 0x46231c: 0x8e020cc8  lw          $v0, 0xCC8($s0)
    ctx->pc = 0x46231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3272)));
label_462320:
    // 0x462320: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_462324:
    if (ctx->pc == 0x462324u) {
        ctx->pc = 0x462328u;
        goto label_462328;
    }
    ctx->pc = 0x462320u;
    {
        const bool branch_taken_0x462320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462320) {
            ctx->pc = 0x462360u;
            goto label_462360;
        }
    }
    ctx->pc = 0x462328u;
label_462328:
    // 0x462328: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46232c:
    // 0x46232c: 0x8e050cc4  lw          $a1, 0xCC4($s0)
    ctx->pc = 0x46232cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3268)));
label_462330:
    // 0x462330: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x462330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_462334:
    // 0x462334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x462334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462338:
    // 0x462338: 0xc0ab89c  jal         func_2AE270
label_46233c:
    if (ctx->pc == 0x46233Cu) {
        ctx->pc = 0x46233Cu;
            // 0x46233c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462340u;
        goto label_462340;
    }
    ctx->pc = 0x462338u;
    SET_GPR_U32(ctx, 31, 0x462340u);
    ctx->pc = 0x46233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462338u;
            // 0x46233c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462340u; }
        if (ctx->pc != 0x462340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462340u; }
        if (ctx->pc != 0x462340u) { return; }
    }
    ctx->pc = 0x462340u;
label_462340:
    // 0x462340: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_462344:
    // 0x462344: 0x8e050cc8  lw          $a1, 0xCC8($s0)
    ctx->pc = 0x462344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3272)));
label_462348:
    // 0x462348: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x462348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_46234c:
    // 0x46234c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46234cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462350:
    // 0x462350: 0xc0ab89c  jal         func_2AE270
label_462354:
    if (ctx->pc == 0x462354u) {
        ctx->pc = 0x462354u;
            // 0x462354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462358u;
        goto label_462358;
    }
    ctx->pc = 0x462350u;
    SET_GPR_U32(ctx, 31, 0x462358u);
    ctx->pc = 0x462354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462350u;
            // 0x462354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462358u; }
        if (ctx->pc != 0x462358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462358u; }
        if (ctx->pc != 0x462358u) { return; }
    }
    ctx->pc = 0x462358u;
label_462358:
    // 0x462358: 0x10000002  b           . + 4 + (0x2 << 2)
label_46235c:
    if (ctx->pc == 0x46235Cu) {
        ctx->pc = 0x46235Cu;
            // 0x46235c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x462360u;
        goto label_462360;
    }
    ctx->pc = 0x462358u;
    {
        const bool branch_taken_0x462358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46235Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462358u;
            // 0x46235c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462358) {
            ctx->pc = 0x462364u;
            goto label_462364;
        }
    }
    ctx->pc = 0x462360u;
label_462360:
    // 0x462360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x462360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462364:
    // 0x462364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x462364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_462368:
    // 0x462368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x462368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46236c:
    // 0x46236c: 0x3e00008  jr          $ra
label_462370:
    if (ctx->pc == 0x462370u) {
        ctx->pc = 0x462370u;
            // 0x462370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x462374u;
        goto label_462374;
    }
    ctx->pc = 0x46236Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46236Cu;
            // 0x462370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462374u;
label_462374:
    // 0x462374: 0x0  nop
    ctx->pc = 0x462374u;
    // NOP
label_462378:
    // 0x462378: 0x0  nop
    ctx->pc = 0x462378u;
    // NOP
label_46237c:
    // 0x46237c: 0x0  nop
    ctx->pc = 0x46237cu;
    // NOP
label_462380:
    // 0x462380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x462380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_462384:
    // 0x462384: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_462388:
    // 0x462388: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x462388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_46238c:
    // 0x46238c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x46238cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_462390:
    // 0x462390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x462390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_462394:
    // 0x462394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x462394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462398:
    // 0x462398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x462398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46239c:
    // 0x46239c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46239cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4623a0:
    // 0x4623a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4623a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4623a4:
    // 0x4623a4: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x4623a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4623a8:
    // 0x4623a8: 0xc0fd020  jal         func_3F4080
label_4623ac:
    if (ctx->pc == 0x4623ACu) {
        ctx->pc = 0x4623ACu;
            // 0x4623ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4623B0u;
        goto label_4623b0;
    }
    ctx->pc = 0x4623A8u;
    SET_GPR_U32(ctx, 31, 0x4623B0u);
    ctx->pc = 0x4623ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4623A8u;
            // 0x4623ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4623B0u; }
        if (ctx->pc != 0x4623B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4623B0u; }
        if (ctx->pc != 0x4623B0u) { return; }
    }
    ctx->pc = 0x4623B0u;
label_4623b0:
    // 0x4623b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4623b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4623b4:
    // 0x4623b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4623b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4623b8:
    // 0x4623b8: 0x8c71a348  lw          $s1, -0x5CB8($v1)
    ctx->pc = 0x4623b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_4623bc:
    // 0x4623bc: 0x24050409  addiu       $a1, $zero, 0x409
    ctx->pc = 0x4623bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
label_4623c0:
    // 0x4623c0: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x4623c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_4623c4:
    // 0x4623c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4623c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4623c8:
    // 0x4623c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4623c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4623cc:
    // 0x4623cc: 0xc0b3a28  jal         func_2CE8A0
label_4623d0:
    if (ctx->pc == 0x4623D0u) {
        ctx->pc = 0x4623D0u;
            // 0x4623d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4623D4u;
        goto label_4623d4;
    }
    ctx->pc = 0x4623CCu;
    SET_GPR_U32(ctx, 31, 0x4623D4u);
    ctx->pc = 0x4623D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4623CCu;
            // 0x4623d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4623D4u; }
        if (ctx->pc != 0x4623D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4623D4u; }
        if (ctx->pc != 0x4623D4u) { return; }
    }
    ctx->pc = 0x4623D4u;
label_4623d4:
    // 0x4623d4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4623d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4623d8:
    // 0x4623d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4623d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4623dc:
    // 0x4623dc: 0x26060cc4  addiu       $a2, $s0, 0xCC4
    ctx->pc = 0x4623dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3268));
label_4623e0:
    // 0x4623e0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x4623e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4623e4:
    // 0x4623e4: 0xc0aa5d8  jal         func_2A9760
label_4623e8:
    if (ctx->pc == 0x4623E8u) {
        ctx->pc = 0x4623E8u;
            // 0x4623e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4623ECu;
        goto label_4623ec;
    }
    ctx->pc = 0x4623E4u;
    SET_GPR_U32(ctx, 31, 0x4623ECu);
    ctx->pc = 0x4623E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4623E4u;
            // 0x4623e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4623ECu; }
        if (ctx->pc != 0x4623ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4623ECu; }
        if (ctx->pc != 0x4623ECu) { return; }
    }
    ctx->pc = 0x4623ECu;
label_4623ec:
    // 0x4623ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4623ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4623f0:
    // 0x4623f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4623f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4623f4:
    // 0x4623f4: 0x8c71a348  lw          $s1, -0x5CB8($v1)
    ctx->pc = 0x4623f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_4623f8:
    // 0x4623f8: 0x3405cf6d  ori         $a1, $zero, 0xCF6D
    ctx->pc = 0x4623f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53101);
label_4623fc:
    // 0x4623fc: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x4623fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_462400:
    // 0x462400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x462400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462404:
    // 0x462404: 0x8e060968  lw          $a2, 0x968($s0)
    ctx->pc = 0x462404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_462408:
    // 0x462408: 0xc0b3a28  jal         func_2CE8A0
label_46240c:
    if (ctx->pc == 0x46240Cu) {
        ctx->pc = 0x46240Cu;
            // 0x46240c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462410u;
        goto label_462410;
    }
    ctx->pc = 0x462408u;
    SET_GPR_U32(ctx, 31, 0x462410u);
    ctx->pc = 0x46240Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462408u;
            // 0x46240c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462410u; }
        if (ctx->pc != 0x462410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462410u; }
        if (ctx->pc != 0x462410u) { return; }
    }
    ctx->pc = 0x462410u;
label_462410:
    // 0x462410: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x462410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_462414:
    // 0x462414: 0x26060cc8  addiu       $a2, $s0, 0xCC8
    ctx->pc = 0x462414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3272));
label_462418:
    // 0x462418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x462418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46241c:
    // 0x46241c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x46241cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_462420:
    // 0x462420: 0xc0aa5d8  jal         func_2A9760
label_462424:
    if (ctx->pc == 0x462424u) {
        ctx->pc = 0x462424u;
            // 0x462424: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462428u;
        goto label_462428;
    }
    ctx->pc = 0x462420u;
    SET_GPR_U32(ctx, 31, 0x462428u);
    ctx->pc = 0x462424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462420u;
            // 0x462424: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462428u; }
        if (ctx->pc != 0x462428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462428u; }
        if (ctx->pc != 0x462428u) { return; }
    }
    ctx->pc = 0x462428u;
label_462428:
    // 0x462428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x462428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46242c:
    // 0x46242c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46242cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_462430:
    // 0x462430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x462430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_462434:
    // 0x462434: 0x3e00008  jr          $ra
label_462438:
    if (ctx->pc == 0x462438u) {
        ctx->pc = 0x462438u;
            // 0x462438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x46243Cu;
        goto label_46243c;
    }
    ctx->pc = 0x462434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462434u;
            // 0x462438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46243Cu;
label_46243c:
    // 0x46243c: 0x0  nop
    ctx->pc = 0x46243cu;
    // NOP
label_462440:
    // 0x462440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x462440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_462444:
    // 0x462444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x462444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_462448:
    // 0x462448: 0x8c830cbc  lw          $v1, 0xCBC($a0)
    ctx->pc = 0x462448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3260)));
label_46244c:
    // 0x46244c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_462450:
    if (ctx->pc == 0x462450u) {
        ctx->pc = 0x462450u;
            // 0x462450: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x462454u;
        goto label_462454;
    }
    ctx->pc = 0x46244Cu;
    {
        const bool branch_taken_0x46244c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46244c) {
            ctx->pc = 0x462450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46244Cu;
            // 0x462450: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462484u;
            goto label_462484;
        }
    }
    ctx->pc = 0x462454u;
label_462454:
    // 0x462454: 0x8c830cc0  lw          $v1, 0xCC0($a0)
    ctx->pc = 0x462454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3264)));
label_462458:
    // 0x462458: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_46245c:
    if (ctx->pc == 0x46245Cu) {
        ctx->pc = 0x462460u;
        goto label_462460;
    }
    ctx->pc = 0x462458u;
    {
        const bool branch_taken_0x462458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x462458) {
            ctx->pc = 0x462480u;
            goto label_462480;
        }
    }
    ctx->pc = 0x462460u;
label_462460:
    // 0x462460: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x462460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_462464:
    // 0x462464: 0x24870cc0  addiu       $a3, $a0, 0xCC0
    ctx->pc = 0x462464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 3264));
label_462468:
    // 0x462468: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x462468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_46246c:
    // 0x46246c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x46246cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_462470:
    // 0x462470: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x462470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462474:
    // 0x462474: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x462474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_462478:
    // 0x462478: 0xc0a997c  jal         func_2A65F0
label_46247c:
    if (ctx->pc == 0x46247Cu) {
        ctx->pc = 0x46247Cu;
            // 0x46247c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x462480u;
        goto label_462480;
    }
    ctx->pc = 0x462478u;
    SET_GPR_U32(ctx, 31, 0x462480u);
    ctx->pc = 0x46247Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462478u;
            // 0x46247c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462480u; }
        if (ctx->pc != 0x462480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462480u; }
        if (ctx->pc != 0x462480u) { return; }
    }
    ctx->pc = 0x462480u;
label_462480:
    // 0x462480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x462480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_462484:
    // 0x462484: 0x3e00008  jr          $ra
label_462488:
    if (ctx->pc == 0x462488u) {
        ctx->pc = 0x462488u;
            // 0x462488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x46248Cu;
        goto label_46248c;
    }
    ctx->pc = 0x462484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462484u;
            // 0x462488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46248Cu;
label_46248c:
    // 0x46248c: 0x0  nop
    ctx->pc = 0x46248cu;
    // NOP
label_462490:
    // 0x462490: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x462490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_462494:
    // 0x462494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x462494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_462498:
    // 0x462498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x462498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46249c:
    // 0x46249c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4624a0:
    // 0x4624a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4624a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4624a4:
    // 0x4624a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4624a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4624a8:
    // 0x4624a8: 0x8c830cc0  lw          $v1, 0xCC0($a0)
    ctx->pc = 0x4624a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3264)));
label_4624ac:
    // 0x4624ac: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_4624b0:
    if (ctx->pc == 0x4624B0u) {
        ctx->pc = 0x4624B0u;
            // 0x4624b0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4624B4u;
        goto label_4624b4;
    }
    ctx->pc = 0x4624ACu;
    {
        const bool branch_taken_0x4624ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4624B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4624ACu;
            // 0x4624b0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4624ac) {
            ctx->pc = 0x462540u;
            goto label_462540;
        }
    }
    ctx->pc = 0x4624B4u;
label_4624b4:
    // 0x4624b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4624b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4624b8:
    // 0x4624b8: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x4624b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_4624bc:
    // 0x4624bc: 0xc078d40  jal         func_1E3500
label_4624c0:
    if (ctx->pc == 0x4624C0u) {
        ctx->pc = 0x4624C0u;
            // 0x4624c0: 0x3045001f  andi        $a1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->pc = 0x4624C4u;
        goto label_4624c4;
    }
    ctx->pc = 0x4624BCu;
    SET_GPR_U32(ctx, 31, 0x4624C4u);
    ctx->pc = 0x4624C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4624BCu;
            // 0x4624c0: 0x3045001f  andi        $a1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3500u;
    if (runtime->hasFunction(0x1E3500u)) {
        auto targetFn = runtime->lookupFunction(0x1E3500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4624C4u; }
        if (ctx->pc != 0x4624C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3500_0x1e3500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4624C4u; }
        if (ctx->pc != 0x4624C4u) { return; }
    }
    ctx->pc = 0x4624C4u;
label_4624c4:
    // 0x4624c4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x4624c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4624c8:
    // 0x4624c8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x4624c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_4624cc:
    // 0x4624cc: 0x12030011  beq         $s0, $v1, . + 4 + (0x11 << 2)
label_4624d0:
    if (ctx->pc == 0x4624D0u) {
        ctx->pc = 0x4624D4u;
        goto label_4624d4;
    }
    ctx->pc = 0x4624CCu;
    {
        const bool branch_taken_0x4624cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x4624cc) {
            ctx->pc = 0x462514u;
            goto label_462514;
        }
    }
    ctx->pc = 0x4624D4u;
label_4624d4:
    // 0x4624d4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4624d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4624d8:
    // 0x4624d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4624d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4624dc:
    // 0x4624dc: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x4624dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4624e0:
    // 0x4624e0: 0xc0cd2e8  jal         func_334BA0
label_4624e4:
    if (ctx->pc == 0x4624E4u) {
        ctx->pc = 0x4624E4u;
            // 0x4624e4: 0xafb0005c  sw          $s0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
        ctx->pc = 0x4624E8u;
        goto label_4624e8;
    }
    ctx->pc = 0x4624E0u;
    SET_GPR_U32(ctx, 31, 0x4624E8u);
    ctx->pc = 0x4624E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4624E0u;
            // 0x4624e4: 0xafb0005c  sw          $s0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334BA0u;
    if (runtime->hasFunction(0x334BA0u)) {
        auto targetFn = runtime->lookupFunction(0x334BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4624E8u; }
        if (ctx->pc != 0x4624E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334BA0_0x334ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4624E8u; }
        if (ctx->pc != 0x4624E8u) { return; }
    }
    ctx->pc = 0x4624E8u;
label_4624e8:
    // 0x4624e8: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x4624e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_4624ec:
    // 0x4624ec: 0x2643000c  addiu       $v1, $s2, 0xC
    ctx->pc = 0x4624ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_4624f0:
    // 0x4624f0: 0x54830014  bnel        $a0, $v1, . + 4 + (0x14 << 2)
label_4624f4:
    if (ctx->pc == 0x4624F4u) {
        ctx->pc = 0x4624F4u;
            // 0x4624f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4624F8u;
        goto label_4624f8;
    }
    ctx->pc = 0x4624F0u;
    {
        const bool branch_taken_0x4624f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4624f0) {
            ctx->pc = 0x4624F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4624F0u;
            // 0x4624f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462544u;
            goto label_462544;
        }
    }
    ctx->pc = 0x4624F8u;
label_4624f8:
    // 0x4624f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4624f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4624fc:
    // 0x4624fc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x4624fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_462500:
    // 0x462500: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x462500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_462504:
    // 0x462504: 0xc0cd48c  jal         func_335230
label_462508:
    if (ctx->pc == 0x462508u) {
        ctx->pc = 0x462508u;
            // 0x462508: 0xafb00058  sw          $s0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 16));
        ctx->pc = 0x46250Cu;
        goto label_46250c;
    }
    ctx->pc = 0x462504u;
    SET_GPR_U32(ctx, 31, 0x46250Cu);
    ctx->pc = 0x462508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462504u;
            // 0x462508: 0xafb00058  sw          $s0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335230u;
    if (runtime->hasFunction(0x335230u)) {
        auto targetFn = runtime->lookupFunction(0x335230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46250Cu; }
        if (ctx->pc != 0x46250Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335230_0x335230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46250Cu; }
        if (ctx->pc != 0x46250Cu) { return; }
    }
    ctx->pc = 0x46250Cu;
label_46250c:
    // 0x46250c: 0x1000000c  b           . + 4 + (0xC << 2)
label_462510:
    if (ctx->pc == 0x462510u) {
        ctx->pc = 0x462514u;
        goto label_462514;
    }
    ctx->pc = 0x46250Cu;
    {
        const bool branch_taken_0x46250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46250c) {
            ctx->pc = 0x462540u;
            goto label_462540;
        }
    }
    ctx->pc = 0x462514u;
label_462514:
    // 0x462514: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x462514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_462518:
    // 0x462518: 0x8c63f550  lw          $v1, -0xAB0($v1)
    ctx->pc = 0x462518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964560)));
label_46251c:
    // 0x46251c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_462520:
    if (ctx->pc == 0x462520u) {
        ctx->pc = 0x462524u;
        goto label_462524;
    }
    ctx->pc = 0x46251Cu;
    {
        const bool branch_taken_0x46251c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46251c) {
            ctx->pc = 0x462540u;
            goto label_462540;
        }
    }
    ctx->pc = 0x462524u;
label_462524:
    // 0x462524: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x462524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_462528:
    // 0x462528: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x462528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_46252c:
    // 0x46252c: 0xa470f31c  sh          $s0, -0xCE4($v1)
    ctx->pc = 0x46252cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963996), (uint16_t)GPR_U32(ctx, 16));
label_462530:
    // 0x462530: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x462530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_462534:
    // 0x462534: 0xac64f550  sw          $a0, -0xAB0($v1)
    ctx->pc = 0x462534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964560), GPR_U32(ctx, 4));
label_462538:
    // 0x462538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x462538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46253c:
    // 0x46253c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x46253cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_462540:
    // 0x462540: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x462540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_462544:
    // 0x462544: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x462544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_462548:
    // 0x462548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x462548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46254c:
    // 0x46254c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46254cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_462550:
    // 0x462550: 0x3e00008  jr          $ra
label_462554:
    if (ctx->pc == 0x462554u) {
        ctx->pc = 0x462554u;
            // 0x462554: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x462558u;
        goto label_462558;
    }
    ctx->pc = 0x462550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462550u;
            // 0x462554: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462558u;
label_462558:
    // 0x462558: 0x0  nop
    ctx->pc = 0x462558u;
    // NOP
label_46255c:
    // 0x46255c: 0x0  nop
    ctx->pc = 0x46255cu;
    // NOP
label_462560:
    // 0x462560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x462560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_462564:
    // 0x462564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x462564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_462568:
    // 0x462568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x462568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46256c:
    // 0x46256c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_462570:
    // 0x462570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x462570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_462574:
    // 0x462574: 0x8c830cc0  lw          $v1, 0xCC0($a0)
    ctx->pc = 0x462574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3264)));
label_462578:
    // 0x462578: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_46257c:
    if (ctx->pc == 0x46257Cu) {
        ctx->pc = 0x46257Cu;
            // 0x46257c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462580u;
        goto label_462580;
    }
    ctx->pc = 0x462578u;
    {
        const bool branch_taken_0x462578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46257Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462578u;
            // 0x46257c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462578) {
            ctx->pc = 0x4625D0u;
            goto label_4625d0;
        }
    }
    ctx->pc = 0x462580u;
label_462580:
    // 0x462580: 0xc078cdc  jal         func_1E3370
label_462584:
    if (ctx->pc == 0x462584u) {
        ctx->pc = 0x462584u;
            // 0x462584: 0x90640001  lbu         $a0, 0x1($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
        ctx->pc = 0x462588u;
        goto label_462588;
    }
    ctx->pc = 0x462580u;
    SET_GPR_U32(ctx, 31, 0x462588u);
    ctx->pc = 0x462584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462580u;
            // 0x462584: 0x90640001  lbu         $a0, 0x1($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3370u;
    if (runtime->hasFunction(0x1E3370u)) {
        auto targetFn = runtime->lookupFunction(0x1E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462588u; }
        if (ctx->pc != 0x462588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3370_0x1e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462588u; }
        if (ctx->pc != 0x462588u) { return; }
    }
    ctx->pc = 0x462588u;
label_462588:
    // 0x462588: 0x8e230cc0  lw          $v1, 0xCC0($s1)
    ctx->pc = 0x462588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3264)));
label_46258c:
    // 0x46258c: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x46258cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_462590:
    // 0x462590: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x462590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_462594:
    // 0x462594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x462594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_462598:
    // 0x462598: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x462598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_46259c:
    // 0x46259c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x46259cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4625a0:
    // 0x4625a0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4625a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_4625a4:
    // 0x4625a4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4625a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4625a8:
    // 0x4625a8: 0xc0cd2e8  jal         func_334BA0
label_4625ac:
    if (ctx->pc == 0x4625ACu) {
        ctx->pc = 0x4625ACu;
            // 0x4625ac: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x4625B0u;
        goto label_4625b0;
    }
    ctx->pc = 0x4625A8u;
    SET_GPR_U32(ctx, 31, 0x4625B0u);
    ctx->pc = 0x4625ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4625A8u;
            // 0x4625ac: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334BA0u;
    if (runtime->hasFunction(0x334BA0u)) {
        auto targetFn = runtime->lookupFunction(0x334BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4625B0u; }
        if (ctx->pc != 0x4625B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334BA0_0x334ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4625B0u; }
        if (ctx->pc != 0x4625B0u) { return; }
    }
    ctx->pc = 0x4625B0u;
label_4625b0:
    // 0x4625b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x4625b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_4625b4:
    // 0x4625b4: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x4625b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4625b8:
    // 0x4625b8: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_4625bc:
    if (ctx->pc == 0x4625BCu) {
        ctx->pc = 0x4625BCu;
            // 0x4625bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4625C0u;
        goto label_4625c0;
    }
    ctx->pc = 0x4625B8u;
    {
        const bool branch_taken_0x4625b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4625b8) {
            ctx->pc = 0x4625BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4625B8u;
            // 0x4625bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4625D4u;
            goto label_4625d4;
        }
    }
    ctx->pc = 0x4625C0u;
label_4625c0:
    // 0x4625c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4625c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4625c4:
    // 0x4625c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4625c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4625c8:
    // 0x4625c8: 0xc0cd48c  jal         func_335230
label_4625cc:
    if (ctx->pc == 0x4625CCu) {
        ctx->pc = 0x4625CCu;
            // 0x4625cc: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->pc = 0x4625D0u;
        goto label_4625d0;
    }
    ctx->pc = 0x4625C8u;
    SET_GPR_U32(ctx, 31, 0x4625D0u);
    ctx->pc = 0x4625CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4625C8u;
            // 0x4625cc: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335230u;
    if (runtime->hasFunction(0x335230u)) {
        auto targetFn = runtime->lookupFunction(0x335230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4625D0u; }
        if (ctx->pc != 0x4625D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335230_0x335230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4625D0u; }
        if (ctx->pc != 0x4625D0u) { return; }
    }
    ctx->pc = 0x4625D0u;
label_4625d0:
    // 0x4625d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4625d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4625d4:
    // 0x4625d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4625d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4625d8:
    // 0x4625d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4625d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4625dc:
    // 0x4625dc: 0x3e00008  jr          $ra
label_4625e0:
    if (ctx->pc == 0x4625E0u) {
        ctx->pc = 0x4625E0u;
            // 0x4625e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4625E4u;
        goto label_4625e4;
    }
    ctx->pc = 0x4625DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4625E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4625DCu;
            // 0x4625e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4625E4u;
label_4625e4:
    // 0x4625e4: 0x0  nop
    ctx->pc = 0x4625e4u;
    // NOP
label_4625e8:
    // 0x4625e8: 0x0  nop
    ctx->pc = 0x4625e8u;
    // NOP
label_4625ec:
    // 0x4625ec: 0x0  nop
    ctx->pc = 0x4625ecu;
    // NOP
}
