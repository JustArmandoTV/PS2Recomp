#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351AE0
// Address: 0x351ae0 - 0x352380
void sub_00351AE0_0x351ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351AE0_0x351ae0");
#endif

    switch (ctx->pc) {
        case 0x351ae0u: goto label_351ae0;
        case 0x351ae4u: goto label_351ae4;
        case 0x351ae8u: goto label_351ae8;
        case 0x351aecu: goto label_351aec;
        case 0x351af0u: goto label_351af0;
        case 0x351af4u: goto label_351af4;
        case 0x351af8u: goto label_351af8;
        case 0x351afcu: goto label_351afc;
        case 0x351b00u: goto label_351b00;
        case 0x351b04u: goto label_351b04;
        case 0x351b08u: goto label_351b08;
        case 0x351b0cu: goto label_351b0c;
        case 0x351b10u: goto label_351b10;
        case 0x351b14u: goto label_351b14;
        case 0x351b18u: goto label_351b18;
        case 0x351b1cu: goto label_351b1c;
        case 0x351b20u: goto label_351b20;
        case 0x351b24u: goto label_351b24;
        case 0x351b28u: goto label_351b28;
        case 0x351b2cu: goto label_351b2c;
        case 0x351b30u: goto label_351b30;
        case 0x351b34u: goto label_351b34;
        case 0x351b38u: goto label_351b38;
        case 0x351b3cu: goto label_351b3c;
        case 0x351b40u: goto label_351b40;
        case 0x351b44u: goto label_351b44;
        case 0x351b48u: goto label_351b48;
        case 0x351b4cu: goto label_351b4c;
        case 0x351b50u: goto label_351b50;
        case 0x351b54u: goto label_351b54;
        case 0x351b58u: goto label_351b58;
        case 0x351b5cu: goto label_351b5c;
        case 0x351b60u: goto label_351b60;
        case 0x351b64u: goto label_351b64;
        case 0x351b68u: goto label_351b68;
        case 0x351b6cu: goto label_351b6c;
        case 0x351b70u: goto label_351b70;
        case 0x351b74u: goto label_351b74;
        case 0x351b78u: goto label_351b78;
        case 0x351b7cu: goto label_351b7c;
        case 0x351b80u: goto label_351b80;
        case 0x351b84u: goto label_351b84;
        case 0x351b88u: goto label_351b88;
        case 0x351b8cu: goto label_351b8c;
        case 0x351b90u: goto label_351b90;
        case 0x351b94u: goto label_351b94;
        case 0x351b98u: goto label_351b98;
        case 0x351b9cu: goto label_351b9c;
        case 0x351ba0u: goto label_351ba0;
        case 0x351ba4u: goto label_351ba4;
        case 0x351ba8u: goto label_351ba8;
        case 0x351bacu: goto label_351bac;
        case 0x351bb0u: goto label_351bb0;
        case 0x351bb4u: goto label_351bb4;
        case 0x351bb8u: goto label_351bb8;
        case 0x351bbcu: goto label_351bbc;
        case 0x351bc0u: goto label_351bc0;
        case 0x351bc4u: goto label_351bc4;
        case 0x351bc8u: goto label_351bc8;
        case 0x351bccu: goto label_351bcc;
        case 0x351bd0u: goto label_351bd0;
        case 0x351bd4u: goto label_351bd4;
        case 0x351bd8u: goto label_351bd8;
        case 0x351bdcu: goto label_351bdc;
        case 0x351be0u: goto label_351be0;
        case 0x351be4u: goto label_351be4;
        case 0x351be8u: goto label_351be8;
        case 0x351becu: goto label_351bec;
        case 0x351bf0u: goto label_351bf0;
        case 0x351bf4u: goto label_351bf4;
        case 0x351bf8u: goto label_351bf8;
        case 0x351bfcu: goto label_351bfc;
        case 0x351c00u: goto label_351c00;
        case 0x351c04u: goto label_351c04;
        case 0x351c08u: goto label_351c08;
        case 0x351c0cu: goto label_351c0c;
        case 0x351c10u: goto label_351c10;
        case 0x351c14u: goto label_351c14;
        case 0x351c18u: goto label_351c18;
        case 0x351c1cu: goto label_351c1c;
        case 0x351c20u: goto label_351c20;
        case 0x351c24u: goto label_351c24;
        case 0x351c28u: goto label_351c28;
        case 0x351c2cu: goto label_351c2c;
        case 0x351c30u: goto label_351c30;
        case 0x351c34u: goto label_351c34;
        case 0x351c38u: goto label_351c38;
        case 0x351c3cu: goto label_351c3c;
        case 0x351c40u: goto label_351c40;
        case 0x351c44u: goto label_351c44;
        case 0x351c48u: goto label_351c48;
        case 0x351c4cu: goto label_351c4c;
        case 0x351c50u: goto label_351c50;
        case 0x351c54u: goto label_351c54;
        case 0x351c58u: goto label_351c58;
        case 0x351c5cu: goto label_351c5c;
        case 0x351c60u: goto label_351c60;
        case 0x351c64u: goto label_351c64;
        case 0x351c68u: goto label_351c68;
        case 0x351c6cu: goto label_351c6c;
        case 0x351c70u: goto label_351c70;
        case 0x351c74u: goto label_351c74;
        case 0x351c78u: goto label_351c78;
        case 0x351c7cu: goto label_351c7c;
        case 0x351c80u: goto label_351c80;
        case 0x351c84u: goto label_351c84;
        case 0x351c88u: goto label_351c88;
        case 0x351c8cu: goto label_351c8c;
        case 0x351c90u: goto label_351c90;
        case 0x351c94u: goto label_351c94;
        case 0x351c98u: goto label_351c98;
        case 0x351c9cu: goto label_351c9c;
        case 0x351ca0u: goto label_351ca0;
        case 0x351ca4u: goto label_351ca4;
        case 0x351ca8u: goto label_351ca8;
        case 0x351cacu: goto label_351cac;
        case 0x351cb0u: goto label_351cb0;
        case 0x351cb4u: goto label_351cb4;
        case 0x351cb8u: goto label_351cb8;
        case 0x351cbcu: goto label_351cbc;
        case 0x351cc0u: goto label_351cc0;
        case 0x351cc4u: goto label_351cc4;
        case 0x351cc8u: goto label_351cc8;
        case 0x351cccu: goto label_351ccc;
        case 0x351cd0u: goto label_351cd0;
        case 0x351cd4u: goto label_351cd4;
        case 0x351cd8u: goto label_351cd8;
        case 0x351cdcu: goto label_351cdc;
        case 0x351ce0u: goto label_351ce0;
        case 0x351ce4u: goto label_351ce4;
        case 0x351ce8u: goto label_351ce8;
        case 0x351cecu: goto label_351cec;
        case 0x351cf0u: goto label_351cf0;
        case 0x351cf4u: goto label_351cf4;
        case 0x351cf8u: goto label_351cf8;
        case 0x351cfcu: goto label_351cfc;
        case 0x351d00u: goto label_351d00;
        case 0x351d04u: goto label_351d04;
        case 0x351d08u: goto label_351d08;
        case 0x351d0cu: goto label_351d0c;
        case 0x351d10u: goto label_351d10;
        case 0x351d14u: goto label_351d14;
        case 0x351d18u: goto label_351d18;
        case 0x351d1cu: goto label_351d1c;
        case 0x351d20u: goto label_351d20;
        case 0x351d24u: goto label_351d24;
        case 0x351d28u: goto label_351d28;
        case 0x351d2cu: goto label_351d2c;
        case 0x351d30u: goto label_351d30;
        case 0x351d34u: goto label_351d34;
        case 0x351d38u: goto label_351d38;
        case 0x351d3cu: goto label_351d3c;
        case 0x351d40u: goto label_351d40;
        case 0x351d44u: goto label_351d44;
        case 0x351d48u: goto label_351d48;
        case 0x351d4cu: goto label_351d4c;
        case 0x351d50u: goto label_351d50;
        case 0x351d54u: goto label_351d54;
        case 0x351d58u: goto label_351d58;
        case 0x351d5cu: goto label_351d5c;
        case 0x351d60u: goto label_351d60;
        case 0x351d64u: goto label_351d64;
        case 0x351d68u: goto label_351d68;
        case 0x351d6cu: goto label_351d6c;
        case 0x351d70u: goto label_351d70;
        case 0x351d74u: goto label_351d74;
        case 0x351d78u: goto label_351d78;
        case 0x351d7cu: goto label_351d7c;
        case 0x351d80u: goto label_351d80;
        case 0x351d84u: goto label_351d84;
        case 0x351d88u: goto label_351d88;
        case 0x351d8cu: goto label_351d8c;
        case 0x351d90u: goto label_351d90;
        case 0x351d94u: goto label_351d94;
        case 0x351d98u: goto label_351d98;
        case 0x351d9cu: goto label_351d9c;
        case 0x351da0u: goto label_351da0;
        case 0x351da4u: goto label_351da4;
        case 0x351da8u: goto label_351da8;
        case 0x351dacu: goto label_351dac;
        case 0x351db0u: goto label_351db0;
        case 0x351db4u: goto label_351db4;
        case 0x351db8u: goto label_351db8;
        case 0x351dbcu: goto label_351dbc;
        case 0x351dc0u: goto label_351dc0;
        case 0x351dc4u: goto label_351dc4;
        case 0x351dc8u: goto label_351dc8;
        case 0x351dccu: goto label_351dcc;
        case 0x351dd0u: goto label_351dd0;
        case 0x351dd4u: goto label_351dd4;
        case 0x351dd8u: goto label_351dd8;
        case 0x351ddcu: goto label_351ddc;
        case 0x351de0u: goto label_351de0;
        case 0x351de4u: goto label_351de4;
        case 0x351de8u: goto label_351de8;
        case 0x351decu: goto label_351dec;
        case 0x351df0u: goto label_351df0;
        case 0x351df4u: goto label_351df4;
        case 0x351df8u: goto label_351df8;
        case 0x351dfcu: goto label_351dfc;
        case 0x351e00u: goto label_351e00;
        case 0x351e04u: goto label_351e04;
        case 0x351e08u: goto label_351e08;
        case 0x351e0cu: goto label_351e0c;
        case 0x351e10u: goto label_351e10;
        case 0x351e14u: goto label_351e14;
        case 0x351e18u: goto label_351e18;
        case 0x351e1cu: goto label_351e1c;
        case 0x351e20u: goto label_351e20;
        case 0x351e24u: goto label_351e24;
        case 0x351e28u: goto label_351e28;
        case 0x351e2cu: goto label_351e2c;
        case 0x351e30u: goto label_351e30;
        case 0x351e34u: goto label_351e34;
        case 0x351e38u: goto label_351e38;
        case 0x351e3cu: goto label_351e3c;
        case 0x351e40u: goto label_351e40;
        case 0x351e44u: goto label_351e44;
        case 0x351e48u: goto label_351e48;
        case 0x351e4cu: goto label_351e4c;
        case 0x351e50u: goto label_351e50;
        case 0x351e54u: goto label_351e54;
        case 0x351e58u: goto label_351e58;
        case 0x351e5cu: goto label_351e5c;
        case 0x351e60u: goto label_351e60;
        case 0x351e64u: goto label_351e64;
        case 0x351e68u: goto label_351e68;
        case 0x351e6cu: goto label_351e6c;
        case 0x351e70u: goto label_351e70;
        case 0x351e74u: goto label_351e74;
        case 0x351e78u: goto label_351e78;
        case 0x351e7cu: goto label_351e7c;
        case 0x351e80u: goto label_351e80;
        case 0x351e84u: goto label_351e84;
        case 0x351e88u: goto label_351e88;
        case 0x351e8cu: goto label_351e8c;
        case 0x351e90u: goto label_351e90;
        case 0x351e94u: goto label_351e94;
        case 0x351e98u: goto label_351e98;
        case 0x351e9cu: goto label_351e9c;
        case 0x351ea0u: goto label_351ea0;
        case 0x351ea4u: goto label_351ea4;
        case 0x351ea8u: goto label_351ea8;
        case 0x351eacu: goto label_351eac;
        case 0x351eb0u: goto label_351eb0;
        case 0x351eb4u: goto label_351eb4;
        case 0x351eb8u: goto label_351eb8;
        case 0x351ebcu: goto label_351ebc;
        case 0x351ec0u: goto label_351ec0;
        case 0x351ec4u: goto label_351ec4;
        case 0x351ec8u: goto label_351ec8;
        case 0x351eccu: goto label_351ecc;
        case 0x351ed0u: goto label_351ed0;
        case 0x351ed4u: goto label_351ed4;
        case 0x351ed8u: goto label_351ed8;
        case 0x351edcu: goto label_351edc;
        case 0x351ee0u: goto label_351ee0;
        case 0x351ee4u: goto label_351ee4;
        case 0x351ee8u: goto label_351ee8;
        case 0x351eecu: goto label_351eec;
        case 0x351ef0u: goto label_351ef0;
        case 0x351ef4u: goto label_351ef4;
        case 0x351ef8u: goto label_351ef8;
        case 0x351efcu: goto label_351efc;
        case 0x351f00u: goto label_351f00;
        case 0x351f04u: goto label_351f04;
        case 0x351f08u: goto label_351f08;
        case 0x351f0cu: goto label_351f0c;
        case 0x351f10u: goto label_351f10;
        case 0x351f14u: goto label_351f14;
        case 0x351f18u: goto label_351f18;
        case 0x351f1cu: goto label_351f1c;
        case 0x351f20u: goto label_351f20;
        case 0x351f24u: goto label_351f24;
        case 0x351f28u: goto label_351f28;
        case 0x351f2cu: goto label_351f2c;
        case 0x351f30u: goto label_351f30;
        case 0x351f34u: goto label_351f34;
        case 0x351f38u: goto label_351f38;
        case 0x351f3cu: goto label_351f3c;
        case 0x351f40u: goto label_351f40;
        case 0x351f44u: goto label_351f44;
        case 0x351f48u: goto label_351f48;
        case 0x351f4cu: goto label_351f4c;
        case 0x351f50u: goto label_351f50;
        case 0x351f54u: goto label_351f54;
        case 0x351f58u: goto label_351f58;
        case 0x351f5cu: goto label_351f5c;
        case 0x351f60u: goto label_351f60;
        case 0x351f64u: goto label_351f64;
        case 0x351f68u: goto label_351f68;
        case 0x351f6cu: goto label_351f6c;
        case 0x351f70u: goto label_351f70;
        case 0x351f74u: goto label_351f74;
        case 0x351f78u: goto label_351f78;
        case 0x351f7cu: goto label_351f7c;
        case 0x351f80u: goto label_351f80;
        case 0x351f84u: goto label_351f84;
        case 0x351f88u: goto label_351f88;
        case 0x351f8cu: goto label_351f8c;
        case 0x351f90u: goto label_351f90;
        case 0x351f94u: goto label_351f94;
        case 0x351f98u: goto label_351f98;
        case 0x351f9cu: goto label_351f9c;
        case 0x351fa0u: goto label_351fa0;
        case 0x351fa4u: goto label_351fa4;
        case 0x351fa8u: goto label_351fa8;
        case 0x351facu: goto label_351fac;
        case 0x351fb0u: goto label_351fb0;
        case 0x351fb4u: goto label_351fb4;
        case 0x351fb8u: goto label_351fb8;
        case 0x351fbcu: goto label_351fbc;
        case 0x351fc0u: goto label_351fc0;
        case 0x351fc4u: goto label_351fc4;
        case 0x351fc8u: goto label_351fc8;
        case 0x351fccu: goto label_351fcc;
        case 0x351fd0u: goto label_351fd0;
        case 0x351fd4u: goto label_351fd4;
        case 0x351fd8u: goto label_351fd8;
        case 0x351fdcu: goto label_351fdc;
        case 0x351fe0u: goto label_351fe0;
        case 0x351fe4u: goto label_351fe4;
        case 0x351fe8u: goto label_351fe8;
        case 0x351fecu: goto label_351fec;
        case 0x351ff0u: goto label_351ff0;
        case 0x351ff4u: goto label_351ff4;
        case 0x351ff8u: goto label_351ff8;
        case 0x351ffcu: goto label_351ffc;
        case 0x352000u: goto label_352000;
        case 0x352004u: goto label_352004;
        case 0x352008u: goto label_352008;
        case 0x35200cu: goto label_35200c;
        case 0x352010u: goto label_352010;
        case 0x352014u: goto label_352014;
        case 0x352018u: goto label_352018;
        case 0x35201cu: goto label_35201c;
        case 0x352020u: goto label_352020;
        case 0x352024u: goto label_352024;
        case 0x352028u: goto label_352028;
        case 0x35202cu: goto label_35202c;
        case 0x352030u: goto label_352030;
        case 0x352034u: goto label_352034;
        case 0x352038u: goto label_352038;
        case 0x35203cu: goto label_35203c;
        case 0x352040u: goto label_352040;
        case 0x352044u: goto label_352044;
        case 0x352048u: goto label_352048;
        case 0x35204cu: goto label_35204c;
        case 0x352050u: goto label_352050;
        case 0x352054u: goto label_352054;
        case 0x352058u: goto label_352058;
        case 0x35205cu: goto label_35205c;
        case 0x352060u: goto label_352060;
        case 0x352064u: goto label_352064;
        case 0x352068u: goto label_352068;
        case 0x35206cu: goto label_35206c;
        case 0x352070u: goto label_352070;
        case 0x352074u: goto label_352074;
        case 0x352078u: goto label_352078;
        case 0x35207cu: goto label_35207c;
        case 0x352080u: goto label_352080;
        case 0x352084u: goto label_352084;
        case 0x352088u: goto label_352088;
        case 0x35208cu: goto label_35208c;
        case 0x352090u: goto label_352090;
        case 0x352094u: goto label_352094;
        case 0x352098u: goto label_352098;
        case 0x35209cu: goto label_35209c;
        case 0x3520a0u: goto label_3520a0;
        case 0x3520a4u: goto label_3520a4;
        case 0x3520a8u: goto label_3520a8;
        case 0x3520acu: goto label_3520ac;
        case 0x3520b0u: goto label_3520b0;
        case 0x3520b4u: goto label_3520b4;
        case 0x3520b8u: goto label_3520b8;
        case 0x3520bcu: goto label_3520bc;
        case 0x3520c0u: goto label_3520c0;
        case 0x3520c4u: goto label_3520c4;
        case 0x3520c8u: goto label_3520c8;
        case 0x3520ccu: goto label_3520cc;
        case 0x3520d0u: goto label_3520d0;
        case 0x3520d4u: goto label_3520d4;
        case 0x3520d8u: goto label_3520d8;
        case 0x3520dcu: goto label_3520dc;
        case 0x3520e0u: goto label_3520e0;
        case 0x3520e4u: goto label_3520e4;
        case 0x3520e8u: goto label_3520e8;
        case 0x3520ecu: goto label_3520ec;
        case 0x3520f0u: goto label_3520f0;
        case 0x3520f4u: goto label_3520f4;
        case 0x3520f8u: goto label_3520f8;
        case 0x3520fcu: goto label_3520fc;
        case 0x352100u: goto label_352100;
        case 0x352104u: goto label_352104;
        case 0x352108u: goto label_352108;
        case 0x35210cu: goto label_35210c;
        case 0x352110u: goto label_352110;
        case 0x352114u: goto label_352114;
        case 0x352118u: goto label_352118;
        case 0x35211cu: goto label_35211c;
        case 0x352120u: goto label_352120;
        case 0x352124u: goto label_352124;
        case 0x352128u: goto label_352128;
        case 0x35212cu: goto label_35212c;
        case 0x352130u: goto label_352130;
        case 0x352134u: goto label_352134;
        case 0x352138u: goto label_352138;
        case 0x35213cu: goto label_35213c;
        case 0x352140u: goto label_352140;
        case 0x352144u: goto label_352144;
        case 0x352148u: goto label_352148;
        case 0x35214cu: goto label_35214c;
        case 0x352150u: goto label_352150;
        case 0x352154u: goto label_352154;
        case 0x352158u: goto label_352158;
        case 0x35215cu: goto label_35215c;
        case 0x352160u: goto label_352160;
        case 0x352164u: goto label_352164;
        case 0x352168u: goto label_352168;
        case 0x35216cu: goto label_35216c;
        case 0x352170u: goto label_352170;
        case 0x352174u: goto label_352174;
        case 0x352178u: goto label_352178;
        case 0x35217cu: goto label_35217c;
        case 0x352180u: goto label_352180;
        case 0x352184u: goto label_352184;
        case 0x352188u: goto label_352188;
        case 0x35218cu: goto label_35218c;
        case 0x352190u: goto label_352190;
        case 0x352194u: goto label_352194;
        case 0x352198u: goto label_352198;
        case 0x35219cu: goto label_35219c;
        case 0x3521a0u: goto label_3521a0;
        case 0x3521a4u: goto label_3521a4;
        case 0x3521a8u: goto label_3521a8;
        case 0x3521acu: goto label_3521ac;
        case 0x3521b0u: goto label_3521b0;
        case 0x3521b4u: goto label_3521b4;
        case 0x3521b8u: goto label_3521b8;
        case 0x3521bcu: goto label_3521bc;
        case 0x3521c0u: goto label_3521c0;
        case 0x3521c4u: goto label_3521c4;
        case 0x3521c8u: goto label_3521c8;
        case 0x3521ccu: goto label_3521cc;
        case 0x3521d0u: goto label_3521d0;
        case 0x3521d4u: goto label_3521d4;
        case 0x3521d8u: goto label_3521d8;
        case 0x3521dcu: goto label_3521dc;
        case 0x3521e0u: goto label_3521e0;
        case 0x3521e4u: goto label_3521e4;
        case 0x3521e8u: goto label_3521e8;
        case 0x3521ecu: goto label_3521ec;
        case 0x3521f0u: goto label_3521f0;
        case 0x3521f4u: goto label_3521f4;
        case 0x3521f8u: goto label_3521f8;
        case 0x3521fcu: goto label_3521fc;
        case 0x352200u: goto label_352200;
        case 0x352204u: goto label_352204;
        case 0x352208u: goto label_352208;
        case 0x35220cu: goto label_35220c;
        case 0x352210u: goto label_352210;
        case 0x352214u: goto label_352214;
        case 0x352218u: goto label_352218;
        case 0x35221cu: goto label_35221c;
        case 0x352220u: goto label_352220;
        case 0x352224u: goto label_352224;
        case 0x352228u: goto label_352228;
        case 0x35222cu: goto label_35222c;
        case 0x352230u: goto label_352230;
        case 0x352234u: goto label_352234;
        case 0x352238u: goto label_352238;
        case 0x35223cu: goto label_35223c;
        case 0x352240u: goto label_352240;
        case 0x352244u: goto label_352244;
        case 0x352248u: goto label_352248;
        case 0x35224cu: goto label_35224c;
        case 0x352250u: goto label_352250;
        case 0x352254u: goto label_352254;
        case 0x352258u: goto label_352258;
        case 0x35225cu: goto label_35225c;
        case 0x352260u: goto label_352260;
        case 0x352264u: goto label_352264;
        case 0x352268u: goto label_352268;
        case 0x35226cu: goto label_35226c;
        case 0x352270u: goto label_352270;
        case 0x352274u: goto label_352274;
        case 0x352278u: goto label_352278;
        case 0x35227cu: goto label_35227c;
        case 0x352280u: goto label_352280;
        case 0x352284u: goto label_352284;
        case 0x352288u: goto label_352288;
        case 0x35228cu: goto label_35228c;
        case 0x352290u: goto label_352290;
        case 0x352294u: goto label_352294;
        case 0x352298u: goto label_352298;
        case 0x35229cu: goto label_35229c;
        case 0x3522a0u: goto label_3522a0;
        case 0x3522a4u: goto label_3522a4;
        case 0x3522a8u: goto label_3522a8;
        case 0x3522acu: goto label_3522ac;
        case 0x3522b0u: goto label_3522b0;
        case 0x3522b4u: goto label_3522b4;
        case 0x3522b8u: goto label_3522b8;
        case 0x3522bcu: goto label_3522bc;
        case 0x3522c0u: goto label_3522c0;
        case 0x3522c4u: goto label_3522c4;
        case 0x3522c8u: goto label_3522c8;
        case 0x3522ccu: goto label_3522cc;
        case 0x3522d0u: goto label_3522d0;
        case 0x3522d4u: goto label_3522d4;
        case 0x3522d8u: goto label_3522d8;
        case 0x3522dcu: goto label_3522dc;
        case 0x3522e0u: goto label_3522e0;
        case 0x3522e4u: goto label_3522e4;
        case 0x3522e8u: goto label_3522e8;
        case 0x3522ecu: goto label_3522ec;
        case 0x3522f0u: goto label_3522f0;
        case 0x3522f4u: goto label_3522f4;
        case 0x3522f8u: goto label_3522f8;
        case 0x3522fcu: goto label_3522fc;
        case 0x352300u: goto label_352300;
        case 0x352304u: goto label_352304;
        case 0x352308u: goto label_352308;
        case 0x35230cu: goto label_35230c;
        case 0x352310u: goto label_352310;
        case 0x352314u: goto label_352314;
        case 0x352318u: goto label_352318;
        case 0x35231cu: goto label_35231c;
        case 0x352320u: goto label_352320;
        case 0x352324u: goto label_352324;
        case 0x352328u: goto label_352328;
        case 0x35232cu: goto label_35232c;
        case 0x352330u: goto label_352330;
        case 0x352334u: goto label_352334;
        case 0x352338u: goto label_352338;
        case 0x35233cu: goto label_35233c;
        case 0x352340u: goto label_352340;
        case 0x352344u: goto label_352344;
        case 0x352348u: goto label_352348;
        case 0x35234cu: goto label_35234c;
        case 0x352350u: goto label_352350;
        case 0x352354u: goto label_352354;
        case 0x352358u: goto label_352358;
        case 0x35235cu: goto label_35235c;
        case 0x352360u: goto label_352360;
        case 0x352364u: goto label_352364;
        case 0x352368u: goto label_352368;
        case 0x35236cu: goto label_35236c;
        case 0x352370u: goto label_352370;
        case 0x352374u: goto label_352374;
        case 0x352378u: goto label_352378;
        case 0x35237cu: goto label_35237c;
        default: break;
    }

    ctx->pc = 0x351ae0u;

label_351ae0:
    // 0x351ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x351ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_351ae4:
    // 0x351ae4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x351ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_351ae8:
    // 0x351ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_351aec:
    // 0x351aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x351aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_351af0:
    // 0x351af0: 0xac4572f8  sw          $a1, 0x72F8($v0)
    ctx->pc = 0x351af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29432), GPR_U32(ctx, 5));
label_351af4:
    // 0x351af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x351af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_351af8:
    // 0x351af8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x351af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_351afc:
    // 0x351afc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x351afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_351b00:
    // 0x351b00: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x351b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_351b04:
    // 0x351b04: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x351b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351b08:
    // 0x351b08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351b0c:
    // 0x351b0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x351b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_351b10:
    // 0x351b10: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x351b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_351b14:
    // 0x351b14: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x351b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_351b18:
    // 0x351b18: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x351b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351b1c:
    // 0x351b1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_351b20:
    if (ctx->pc == 0x351B20u) {
        ctx->pc = 0x351B20u;
            // 0x351b20: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x351B24u;
        goto label_351b24;
    }
    ctx->pc = 0x351B1Cu;
    {
        const bool branch_taken_0x351b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351B1Cu;
            // 0x351b20: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x351b1c) {
            ctx->pc = 0x351B30u;
            goto label_351b30;
        }
    }
    ctx->pc = 0x351B24u;
label_351b24:
    // 0x351b24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x351b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_351b28:
    // 0x351b28: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x351b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_351b2c:
    // 0x351b2c: 0x0  nop
    ctx->pc = 0x351b2cu;
    // NOP
label_351b30:
    // 0x351b30: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x351b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_351b34:
    // 0x351b34: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x351b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_351b38:
    // 0x351b38: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_351b3c:
    if (ctx->pc == 0x351B3Cu) {
        ctx->pc = 0x351B40u;
        goto label_351b40;
    }
    ctx->pc = 0x351B38u;
    {
        const bool branch_taken_0x351b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x351b38) {
            ctx->pc = 0x351B68u;
            goto label_351b68;
        }
    }
    ctx->pc = 0x351B40u;
label_351b40:
    // 0x351b40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x351b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_351b44:
    // 0x351b44: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x351b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_351b48:
    // 0x351b48: 0x8c4572f8  lw          $a1, 0x72F8($v0)
    ctx->pc = 0x351b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29432)));
label_351b4c:
    // 0x351b4c: 0xc04a4e2  jal         func_129388
label_351b50:
    if (ctx->pc == 0x351B50u) {
        ctx->pc = 0x351B50u;
            // 0x351b50: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x351B54u;
        goto label_351b54;
    }
    ctx->pc = 0x351B4Cu;
    SET_GPR_U32(ctx, 31, 0x351B54u);
    ctx->pc = 0x351B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351B4Cu;
            // 0x351b50: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B54u; }
        if (ctx->pc != 0x351B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351B54u; }
        if (ctx->pc != 0x351B54u) { return; }
    }
    ctx->pc = 0x351B54u;
label_351b54:
    // 0x351b54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x351b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_351b58:
    // 0x351b58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x351b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_351b5c:
    // 0x351b5c: 0x5040fff1  beql        $v0, $zero, . + 4 + (-0xF << 2)
label_351b60:
    if (ctx->pc == 0x351B60u) {
        ctx->pc = 0x351B60u;
            // 0x351b60: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x351B64u;
        goto label_351b64;
    }
    ctx->pc = 0x351B5Cu;
    {
        const bool branch_taken_0x351b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351b5c) {
            ctx->pc = 0x351B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351B5Cu;
            // 0x351b60: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351b24;
        }
    }
    ctx->pc = 0x351B64u;
label_351b64:
    // 0x351b64: 0x0  nop
    ctx->pc = 0x351b64u;
    // NOP
label_351b68:
    // 0x351b68: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x351b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_351b6c:
    // 0x351b6c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x351b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_351b70:
    // 0x351b70: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x351b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_351b74:
    // 0x351b74: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x351b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_351b78:
    // 0x351b78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351b7c:
    // 0x351b7c: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
label_351b80:
    if (ctx->pc == 0x351B80u) {
        ctx->pc = 0x351B80u;
            // 0x351b80: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x351B84u;
        goto label_351b84;
    }
    ctx->pc = 0x351B7Cu;
    {
        const bool branch_taken_0x351b7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x351B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351B7Cu;
            // 0x351b80: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351b7c) {
            ctx->pc = 0x351B88u;
            goto label_351b88;
        }
    }
    ctx->pc = 0x351B84u;
label_351b84:
    // 0x351b84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x351b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351b88:
    // 0x351b88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x351b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_351b8c:
    // 0x351b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_351b90:
    // 0x351b90: 0x3e00008  jr          $ra
label_351b94:
    if (ctx->pc == 0x351B94u) {
        ctx->pc = 0x351B94u;
            // 0x351b94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x351B98u;
        goto label_351b98;
    }
    ctx->pc = 0x351B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351B90u;
            // 0x351b94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351B98u;
label_351b98:
    // 0x351b98: 0x0  nop
    ctx->pc = 0x351b98u;
    // NOP
label_351b9c:
    // 0x351b9c: 0x0  nop
    ctx->pc = 0x351b9cu;
    // NOP
label_351ba0:
    // 0x351ba0: 0x3e00008  jr          $ra
label_351ba4:
    if (ctx->pc == 0x351BA4u) {
        ctx->pc = 0x351BA4u;
            // 0x351ba4: 0x240207f8  addiu       $v0, $zero, 0x7F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
        ctx->pc = 0x351BA8u;
        goto label_351ba8;
    }
    ctx->pc = 0x351BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351BA0u;
            // 0x351ba4: 0x240207f8  addiu       $v0, $zero, 0x7F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351BA8u;
label_351ba8:
    // 0x351ba8: 0x0  nop
    ctx->pc = 0x351ba8u;
    // NOP
label_351bac:
    // 0x351bac: 0x0  nop
    ctx->pc = 0x351bacu;
    // NOP
label_351bb0:
    // 0x351bb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x351bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_351bb4:
    // 0x351bb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x351bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_351bb8:
    // 0x351bb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x351bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_351bbc:
    // 0x351bbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x351bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_351bc0:
    // 0x351bc0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x351bc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_351bc4:
    // 0x351bc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x351bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_351bc8:
    // 0x351bc8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x351bc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_351bcc:
    // 0x351bcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x351bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_351bd0:
    // 0x351bd0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x351bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_351bd4:
    // 0x351bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x351bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_351bd8:
    // 0x351bd8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x351bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_351bdc:
    // 0x351bdc: 0x1260010f  beqz        $s3, . + 4 + (0x10F << 2)
label_351be0:
    if (ctx->pc == 0x351BE0u) {
        ctx->pc = 0x351BE0u;
            // 0x351be0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x351BE4u;
        goto label_351be4;
    }
    ctx->pc = 0x351BDCu;
    {
        const bool branch_taken_0x351bdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x351BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351BDCu;
            // 0x351be0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351bdc) {
            ctx->pc = 0x35201Cu;
            goto label_35201c;
        }
    }
    ctx->pc = 0x351BE4u;
label_351be4:
    // 0x351be4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x351be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_351be8:
    // 0x351be8: 0x261082b  sltu        $at, $s3, $at
    ctx->pc = 0x351be8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_351bec:
    // 0x351bec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_351bf0:
    if (ctx->pc == 0x351BF0u) {
        ctx->pc = 0x351BF4u;
        goto label_351bf4;
    }
    ctx->pc = 0x351BECu;
    {
        const bool branch_taken_0x351bec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351bec) {
            ctx->pc = 0x351C10u;
            goto label_351c10;
        }
    }
    ctx->pc = 0x351BF4u;
label_351bf4:
    // 0x351bf4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x351bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_351bf8:
    // 0x351bf8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x351bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_351bfc:
    // 0x351bfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x351bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_351c00:
    // 0x351c00: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x351c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_351c04:
    // 0x351c04: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x351c04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_351c08:
    // 0x351c08: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
label_351c0c:
    if (ctx->pc == 0x351C0Cu) {
        ctx->pc = 0x351C0Cu;
            // 0x351c0c: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x351C10u;
        goto label_351c10;
    }
    ctx->pc = 0x351C08u;
    {
        const bool branch_taken_0x351c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c08) {
            ctx->pc = 0x351C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351C08u;
            // 0x351c0c: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351C34u;
            goto label_351c34;
        }
    }
    ctx->pc = 0x351C10u;
label_351c10:
    // 0x351c10: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x351c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_351c14:
    // 0x351c14: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x351c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_351c18:
    // 0x351c18: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x351c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_351c1c:
    // 0x351c1c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x351c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_351c20:
    // 0x351c20: 0xc049e92  jal         func_127A48
label_351c24:
    if (ctx->pc == 0x351C24u) {
        ctx->pc = 0x351C24u;
            // 0x351c24: 0x24a53670  addiu       $a1, $a1, 0x3670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13936));
        ctx->pc = 0x351C28u;
        goto label_351c28;
    }
    ctx->pc = 0x351C20u;
    SET_GPR_U32(ctx, 31, 0x351C28u);
    ctx->pc = 0x351C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351C20u;
            // 0x351c24: 0x24a53670  addiu       $a1, $a1, 0x3670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351C28u; }
        if (ctx->pc != 0x351C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351C28u; }
        if (ctx->pc != 0x351C28u) { return; }
    }
    ctx->pc = 0x351C28u;
label_351c28:
    // 0x351c28: 0xc04981a  jal         func_126068
label_351c2c:
    if (ctx->pc == 0x351C2Cu) {
        ctx->pc = 0x351C30u;
        goto label_351c30;
    }
    ctx->pc = 0x351C28u;
    SET_GPR_U32(ctx, 31, 0x351C30u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351C30u; }
        if (ctx->pc != 0x351C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351C30u; }
        if (ctx->pc != 0x351C30u) { return; }
    }
    ctx->pc = 0x351C30u;
label_351c30:
    // 0x351c30: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x351c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_351c34:
    // 0x351c34: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x351c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_351c38:
    // 0x351c38: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x351c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_351c3c:
    // 0x351c3c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x351c3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_351c40:
    // 0x351c40: 0x54200078  bnel        $at, $zero, . + 4 + (0x78 << 2)
label_351c44:
    if (ctx->pc == 0x351C44u) {
        ctx->pc = 0x351C44u;
            // 0x351c44: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x351C48u;
        goto label_351c48;
    }
    ctx->pc = 0x351C40u;
    {
        const bool branch_taken_0x351c40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x351c40) {
            ctx->pc = 0x351C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351C40u;
            // 0x351c44: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351E24u;
            goto label_351e24;
        }
    }
    ctx->pc = 0x351C48u;
label_351c48:
    // 0x351c48: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x351c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_351c4c:
    // 0x351c4c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x351c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_351c50:
    // 0x351c50: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x351c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351c54:
    // 0x351c54: 0xf41823  subu        $v1, $a3, $s4
    ctx->pc = 0x351c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_351c58:
    // 0x351c58: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_351c5c:
    if (ctx->pc == 0x351C5Cu) {
        ctx->pc = 0x351C5Cu;
            // 0x351c5c: 0x33103  sra         $a2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x351C60u;
        goto label_351c60;
    }
    ctx->pc = 0x351C58u;
    {
        const bool branch_taken_0x351c58 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x351C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351C58u;
            // 0x351c5c: 0x33103  sra         $a2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c58) {
            ctx->pc = 0x351C68u;
            goto label_351c68;
        }
    }
    ctx->pc = 0x351C60u;
label_351c60:
    // 0x351c60: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x351c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_351c64:
    // 0x351c64: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x351c64u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
label_351c68:
    // 0x351c68: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x351c68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_351c6c:
    // 0x351c6c: 0x5020002d  beql        $at, $zero, . + 4 + (0x2D << 2)
label_351c70:
    if (ctx->pc == 0x351C70u) {
        ctx->pc = 0x351C70u;
            // 0x351c70: 0x132900  sll         $a1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x351C74u;
        goto label_351c74;
    }
    ctx->pc = 0x351C6Cu;
    {
        const bool branch_taken_0x351c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c6c) {
            ctx->pc = 0x351C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351C6Cu;
            // 0x351c70: 0x132900  sll         $a1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351D24u;
            goto label_351d24;
        }
    }
    ctx->pc = 0x351C74u;
label_351c74:
    // 0x351c74: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x351c74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_351c78:
    // 0x351c78: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_351c7c:
    if (ctx->pc == 0x351C7Cu) {
        ctx->pc = 0x351C7Cu;
            // 0x351c7c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x351C80u;
        goto label_351c80;
    }
    ctx->pc = 0x351C78u;
    {
        const bool branch_taken_0x351c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x351C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351C78u;
            // 0x351c7c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c78) {
            ctx->pc = 0x351CC8u;
            goto label_351cc8;
        }
    }
    ctx->pc = 0x351C80u;
label_351c80:
    // 0x351c80: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_351c84:
    if (ctx->pc == 0x351C84u) {
        ctx->pc = 0x351C88u;
        goto label_351c88;
    }
    ctx->pc = 0x351C80u;
    {
        const bool branch_taken_0x351c80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c80) {
            ctx->pc = 0x351CA8u;
            goto label_351ca8;
        }
    }
    ctx->pc = 0x351C88u;
label_351c88:
    // 0x351c88: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x351c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351c8c:
    // 0x351c8c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x351c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351c90:
    // 0x351c90: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x351c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351c94:
    // 0x351c94: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x351c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351c98:
    // 0x351c98: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x351c98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_351c9c:
    // 0x351c9c: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x351c9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_351ca0:
    // 0x351ca0: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x351ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_351ca4:
    // 0x351ca4: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x351ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_351ca8:
    // 0x351ca8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x351ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_351cac:
    // 0x351cac: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x351cacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_351cb0:
    // 0x351cb0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x351cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_351cb4:
    // 0x351cb4: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x351cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_351cb8:
    // 0x351cb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x351cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_351cbc:
    // 0x351cbc: 0x1420fff0  bnez        $at, . + 4 + (-0x10 << 2)
label_351cc0:
    if (ctx->pc == 0x351CC0u) {
        ctx->pc = 0x351CC0u;
            // 0x351cc0: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x351CC4u;
        goto label_351cc4;
    }
    ctx->pc = 0x351CBCu;
    {
        const bool branch_taken_0x351cbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x351CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351CBCu;
            // 0x351cc0: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351cbc) {
            ctx->pc = 0x351C80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351c80;
        }
    }
    ctx->pc = 0x351CC4u;
label_351cc4:
    // 0x351cc4: 0x0  nop
    ctx->pc = 0x351cc4u;
    // NOP
label_351cc8:
    // 0x351cc8: 0x287082b  sltu        $at, $s4, $a3
    ctx->pc = 0x351cc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_351ccc:
    // 0x351ccc: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_351cd0:
    if (ctx->pc == 0x351CD0u) {
        ctx->pc = 0x351CD0u;
            // 0x351cd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x351CD4u;
        goto label_351cd4;
    }
    ctx->pc = 0x351CCCu;
    {
        const bool branch_taken_0x351ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x351CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351CCCu;
            // 0x351cd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ccc) {
            ctx->pc = 0x351DE8u;
            goto label_351de8;
        }
    }
    ctx->pc = 0x351CD4u;
label_351cd4:
    // 0x351cd4: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_351cd8:
    if (ctx->pc == 0x351CD8u) {
        ctx->pc = 0x351CDCu;
        goto label_351cdc;
    }
    ctx->pc = 0x351CD4u;
    {
        const bool branch_taken_0x351cd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x351cd4) {
            ctx->pc = 0x351D00u;
            goto label_351d00;
        }
    }
    ctx->pc = 0x351CDCu;
label_351cdc:
    // 0x351cdc: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x351cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351ce0:
    // 0x351ce0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x351ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351ce4:
    // 0x351ce4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x351ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351ce8:
    // 0x351ce8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x351ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351cec:
    // 0x351cec: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x351cecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_351cf0:
    // 0x351cf0: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x351cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_351cf4:
    // 0x351cf4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x351cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_351cf8:
    // 0x351cf8: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x351cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_351cfc:
    // 0x351cfc: 0x0  nop
    ctx->pc = 0x351cfcu;
    // NOP
label_351d00:
    // 0x351d00: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x351d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_351d04:
    // 0x351d04: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x351d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_351d08:
    // 0x351d08: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x351d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_351d0c:
    // 0x351d0c: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x351d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_351d10:
    // 0x351d10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x351d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_351d14:
    // 0x351d14: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_351d18:
    if (ctx->pc == 0x351D18u) {
        ctx->pc = 0x351D18u;
            // 0x351d18: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x351D1Cu;
        goto label_351d1c;
    }
    ctx->pc = 0x351D14u;
    {
        const bool branch_taken_0x351d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x351D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351D14u;
            // 0x351d18: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d14) {
            ctx->pc = 0x351CD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351cd4;
        }
    }
    ctx->pc = 0x351D1Cu;
label_351d1c:
    // 0x351d1c: 0x10000032  b           . + 4 + (0x32 << 2)
label_351d20:
    if (ctx->pc == 0x351D20u) {
        ctx->pc = 0x351D24u;
        goto label_351d24;
    }
    ctx->pc = 0x351D1Cu;
    {
        const bool branch_taken_0x351d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351d1c) {
            ctx->pc = 0x351DE8u;
            goto label_351de8;
        }
    }
    ctx->pc = 0x351D24u;
label_351d24:
    // 0x351d24: 0xe54823  subu        $t1, $a3, $a1
    ctx->pc = 0x351d24u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_351d28:
    // 0x351d28: 0x127082b  sltu        $at, $t1, $a3
    ctx->pc = 0x351d28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_351d2c:
    // 0x351d2c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_351d30:
    if (ctx->pc == 0x351D30u) {
        ctx->pc = 0x351D30u;
            // 0x351d30: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x351D34u;
        goto label_351d34;
    }
    ctx->pc = 0x351D2Cu;
    {
        const bool branch_taken_0x351d2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x351D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351D2Cu;
            // 0x351d30: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d2c) {
            ctx->pc = 0x351D80u;
            goto label_351d80;
        }
    }
    ctx->pc = 0x351D34u;
label_351d34:
    // 0x351d34: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_351d38:
    if (ctx->pc == 0x351D38u) {
        ctx->pc = 0x351D3Cu;
        goto label_351d3c;
    }
    ctx->pc = 0x351D34u;
    {
        const bool branch_taken_0x351d34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x351d34) {
            ctx->pc = 0x351D60u;
            goto label_351d60;
        }
    }
    ctx->pc = 0x351D3Cu;
label_351d3c:
    // 0x351d3c: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x351d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351d40:
    // 0x351d40: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x351d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351d44:
    // 0x351d44: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x351d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351d48:
    // 0x351d48: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x351d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351d4c:
    // 0x351d4c: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x351d4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_351d50:
    // 0x351d50: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x351d50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_351d54:
    // 0x351d54: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x351d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_351d58:
    // 0x351d58: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x351d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_351d5c:
    // 0x351d5c: 0x0  nop
    ctx->pc = 0x351d5cu;
    // NOP
label_351d60:
    // 0x351d60: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x351d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_351d64:
    // 0x351d64: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x351d64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_351d68:
    // 0x351d68: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x351d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_351d6c:
    // 0x351d6c: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x351d6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_351d70:
    // 0x351d70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x351d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_351d74:
    // 0x351d74: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_351d78:
    if (ctx->pc == 0x351D78u) {
        ctx->pc = 0x351D78u;
            // 0x351d78: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x351D7Cu;
        goto label_351d7c;
    }
    ctx->pc = 0x351D74u;
    {
        const bool branch_taken_0x351d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x351D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351D74u;
            // 0x351d78: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d74) {
            ctx->pc = 0x351D34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351d34;
        }
    }
    ctx->pc = 0x351D7Cu;
label_351d7c:
    // 0x351d7c: 0x0  nop
    ctx->pc = 0x351d7cu;
    // NOP
label_351d80:
    // 0x351d80: 0xd31823  subu        $v1, $a2, $s3
    ctx->pc = 0x351d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_351d84:
    // 0x351d84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_351d88:
    // 0x351d88: 0xe41823  subu        $v1, $a3, $a0
    ctx->pc = 0x351d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_351d8c:
    // 0x351d8c: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x351d8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_351d90:
    // 0x351d90: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
label_351d94:
    if (ctx->pc == 0x351D94u) {
        ctx->pc = 0x351D94u;
            // 0x351d94: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->pc = 0x351D98u;
        goto label_351d98;
    }
    ctx->pc = 0x351D90u;
    {
        const bool branch_taken_0x351d90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x351d90) {
            ctx->pc = 0x351D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351D90u;
            // 0x351d94: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351DACu;
            goto label_351dac;
        }
    }
    ctx->pc = 0x351D98u;
label_351d98:
    // 0x351d98: 0x247082b  sltu        $at, $s2, $a3
    ctx->pc = 0x351d98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_351d9c:
    // 0x351d9c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_351da0:
    if (ctx->pc == 0x351DA0u) {
        ctx->pc = 0x351DA4u;
        goto label_351da4;
    }
    ctx->pc = 0x351D9Cu;
    {
        const bool branch_taken_0x351d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351d9c) {
            ctx->pc = 0x351DA8u;
            goto label_351da8;
        }
    }
    ctx->pc = 0x351DA4u;
label_351da4:
    // 0x351da4: 0x2459021  addu        $s2, $s2, $a1
    ctx->pc = 0x351da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_351da8:
    // 0x351da8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x351da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_351dac:
    // 0x351dac: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x351dacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_351db0:
    // 0x351db0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_351db4:
    if (ctx->pc == 0x351DB4u) {
        ctx->pc = 0x351DB8u;
        goto label_351db8;
    }
    ctx->pc = 0x351DB0u;
    {
        const bool branch_taken_0x351db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351db0) {
            ctx->pc = 0x351DE8u;
            goto label_351de8;
        }
    }
    ctx->pc = 0x351DB8u;
label_351db8:
    // 0x351db8: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x351db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_351dbc:
    // 0x351dbc: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x351dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_351dc0:
    // 0x351dc0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x351dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351dc4:
    // 0x351dc4: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x351dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_351dc8:
    // 0x351dc8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x351dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351dcc:
    // 0x351dcc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x351dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351dd0:
    // 0x351dd0: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x351dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_351dd4:
    // 0x351dd4: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x351dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_351dd8:
    // 0x351dd8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x351dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_351ddc:
    // 0x351ddc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x351ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_351de0:
    // 0x351de0: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
label_351de4:
    if (ctx->pc == 0x351DE4u) {
        ctx->pc = 0x351DE4u;
            // 0x351de4: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x351DE8u;
        goto label_351de8;
    }
    ctx->pc = 0x351DE0u;
    {
        const bool branch_taken_0x351de0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x351DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351DE0u;
            // 0x351de4: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351de0) {
            ctx->pc = 0x351DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351db8;
        }
    }
    ctx->pc = 0x351DE8u;
label_351de8:
    // 0x351de8: 0x5260008d  beql        $s3, $zero, . + 4 + (0x8D << 2)
label_351dec:
    if (ctx->pc == 0x351DECu) {
        ctx->pc = 0x351DECu;
            // 0x351dec: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x351DF0u;
        goto label_351df0;
    }
    ctx->pc = 0x351DE8u;
    {
        const bool branch_taken_0x351de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x351de8) {
            ctx->pc = 0x351DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351DE8u;
            // 0x351dec: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352020u;
            goto label_352020;
        }
    }
    ctx->pc = 0x351DF0u;
label_351df0:
    // 0x351df0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x351df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351df4:
    // 0x351df4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x351df4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_351df8:
    // 0x351df8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x351df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351dfc:
    // 0x351dfc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x351dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351e00:
    // 0x351e00: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x351e00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_351e04:
    // 0x351e04: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x351e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_351e08:
    // 0x351e08: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x351e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_351e0c:
    // 0x351e0c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x351e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_351e10:
    // 0x351e10: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x351e10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_351e14:
    // 0x351e14: 0x1660fff6  bnez        $s3, . + 4 + (-0xA << 2)
label_351e18:
    if (ctx->pc == 0x351E18u) {
        ctx->pc = 0x351E18u;
            // 0x351e18: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x351E1Cu;
        goto label_351e1c;
    }
    ctx->pc = 0x351E14u;
    {
        const bool branch_taken_0x351e14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x351E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351E14u;
            // 0x351e18: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e14) {
            ctx->pc = 0x351DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351df0;
        }
    }
    ctx->pc = 0x351E1Cu;
label_351e1c:
    // 0x351e1c: 0x1000007f  b           . + 4 + (0x7F << 2)
label_351e20:
    if (ctx->pc == 0x351E20u) {
        ctx->pc = 0x351E24u;
        goto label_351e24;
    }
    ctx->pc = 0x351E1Cu;
    {
        const bool branch_taken_0x351e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e1c) {
            ctx->pc = 0x35201Cu;
            goto label_35201c;
        }
    }
    ctx->pc = 0x351E24u;
label_351e24:
    // 0x351e24: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x351e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_351e28:
    // 0x351e28: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x351e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_351e2c:
    // 0x351e2c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x351e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_351e30:
    // 0x351e30: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_351e34:
    if (ctx->pc == 0x351E34u) {
        ctx->pc = 0x351E34u;
            // 0x351e34: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x351E38u;
        goto label_351e38;
    }
    ctx->pc = 0x351E30u;
    {
        const bool branch_taken_0x351e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e30) {
            ctx->pc = 0x351E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351E30u;
            // 0x351e34: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351E38u;
            goto label_351e38;
        }
    }
    ctx->pc = 0x351E38u;
label_351e38:
    // 0x351e38: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x351e38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_351e3c:
    // 0x351e3c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_351e40:
    if (ctx->pc == 0x351E40u) {
        ctx->pc = 0x351E44u;
        goto label_351e44;
    }
    ctx->pc = 0x351E3Cu;
    {
        const bool branch_taken_0x351e3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e3c) {
            ctx->pc = 0x351E80u;
            goto label_351e80;
        }
    }
    ctx->pc = 0x351E44u;
label_351e44:
    // 0x351e44: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x351e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_351e48:
    // 0x351e48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x351e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_351e4c:
    // 0x351e4c: 0x3c0107ff  lui         $at, 0x7FF
    ctx->pc = 0x351e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
label_351e50:
    // 0x351e50: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x351e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_351e54:
    // 0x351e54: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x351e54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_351e58:
    // 0x351e58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_351e5c:
    if (ctx->pc == 0x351E5Cu) {
        ctx->pc = 0x351E60u;
        goto label_351e60;
    }
    ctx->pc = 0x351E58u;
    {
        const bool branch_taken_0x351e58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e58) {
            ctx->pc = 0x351E68u;
            goto label_351e68;
        }
    }
    ctx->pc = 0x351E60u;
label_351e60:
    // 0x351e60: 0x10000003  b           . + 4 + (0x3 << 2)
label_351e64:
    if (ctx->pc == 0x351E64u) {
        ctx->pc = 0x351E64u;
            // 0x351e64: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x351E68u;
        goto label_351e68;
    }
    ctx->pc = 0x351E60u;
    {
        const bool branch_taken_0x351e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351E60u;
            // 0x351e64: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e60) {
            ctx->pc = 0x351E70u;
            goto label_351e70;
        }
    }
    ctx->pc = 0x351E68u;
label_351e68:
    // 0x351e68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x351e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351e6c:
    // 0x351e6c: 0x0  nop
    ctx->pc = 0x351e6cu;
    // NOP
label_351e70:
    // 0x351e70: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x351e70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_351e74:
    // 0x351e74: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
label_351e78:
    if (ctx->pc == 0x351E78u) {
        ctx->pc = 0x351E78u;
            // 0x351e78: 0x3c0107ff  lui         $at, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
        ctx->pc = 0x351E7Cu;
        goto label_351e7c;
    }
    ctx->pc = 0x351E74u;
    {
        const bool branch_taken_0x351e74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x351e74) {
            ctx->pc = 0x351E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351E74u;
            // 0x351e78: 0x3c0107ff  lui         $at, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351E50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351e50;
        }
    }
    ctx->pc = 0x351E7Cu;
label_351e7c:
    // 0x351e7c: 0x0  nop
    ctx->pc = 0x351e7cu;
    // NOP
label_351e80:
    // 0x351e80: 0xc040180  jal         func_100600
label_351e84:
    if (ctx->pc == 0x351E84u) {
        ctx->pc = 0x351E84u;
            // 0x351e84: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x351E88u;
        goto label_351e88;
    }
    ctx->pc = 0x351E80u;
    SET_GPR_U32(ctx, 31, 0x351E88u);
    ctx->pc = 0x351E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351E80u;
            // 0x351e84: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351E88u; }
        if (ctx->pc != 0x351E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351E88u; }
        if (ctx->pc != 0x351E88u) { return; }
    }
    ctx->pc = 0x351E88u;
label_351e88:
    // 0x351e88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x351e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351e8c:
    // 0x351e8c: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
label_351e90:
    if (ctx->pc == 0x351E90u) {
        ctx->pc = 0x351E90u;
            // 0x351e90: 0xafb10070  sw          $s1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
        ctx->pc = 0x351E94u;
        goto label_351e94;
    }
    ctx->pc = 0x351E8Cu;
    {
        const bool branch_taken_0x351e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x351e8c) {
            ctx->pc = 0x351E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351E8Cu;
            // 0x351e90: 0xafb10070  sw          $s1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351EB8u;
            goto label_351eb8;
        }
    }
    ctx->pc = 0x351E94u;
label_351e94:
    // 0x351e94: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x351e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_351e98:
    // 0x351e98: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x351e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_351e9c:
    // 0x351e9c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x351e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_351ea0:
    // 0x351ea0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x351ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_351ea4:
    // 0x351ea4: 0xc049e92  jal         func_127A48
label_351ea8:
    if (ctx->pc == 0x351EA8u) {
        ctx->pc = 0x351EA8u;
            // 0x351ea8: 0x24a51820  addiu       $a1, $a1, 0x1820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6176));
        ctx->pc = 0x351EACu;
        goto label_351eac;
    }
    ctx->pc = 0x351EA4u;
    SET_GPR_U32(ctx, 31, 0x351EACu);
    ctx->pc = 0x351EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351EA4u;
            // 0x351ea8: 0x24a51820  addiu       $a1, $a1, 0x1820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351EACu; }
        if (ctx->pc != 0x351EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351EACu; }
        if (ctx->pc != 0x351EACu) { return; }
    }
    ctx->pc = 0x351EACu;
label_351eac:
    // 0x351eac: 0xc04981a  jal         func_126068
label_351eb0:
    if (ctx->pc == 0x351EB0u) {
        ctx->pc = 0x351EB4u;
        goto label_351eb4;
    }
    ctx->pc = 0x351EACu;
    SET_GPR_U32(ctx, 31, 0x351EB4u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351EB4u; }
        if (ctx->pc != 0x351EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351EB4u; }
        if (ctx->pc != 0x351EB4u) { return; }
    }
    ctx->pc = 0x351EB4u;
label_351eb4:
    // 0x351eb4: 0xafb10070  sw          $s1, 0x70($sp)
    ctx->pc = 0x351eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
label_351eb8:
    // 0x351eb8: 0xafb00078  sw          $s0, 0x78($sp)
    ctx->pc = 0x351eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
label_351ebc:
    // 0x351ebc: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x351ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_351ec0:
    // 0x351ec0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x351ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_351ec4:
    // 0x351ec4: 0xb4082b  sltu        $at, $a1, $s4
    ctx->pc = 0x351ec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_351ec8:
    // 0x351ec8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351ecc:
    // 0x351ecc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_351ed0:
    if (ctx->pc == 0x351ED0u) {
        ctx->pc = 0x351ED0u;
            // 0x351ed0: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x351ED4u;
        goto label_351ed4;
    }
    ctx->pc = 0x351ECCu;
    {
        const bool branch_taken_0x351ecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x351ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351ECCu;
            // 0x351ed0: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ecc) {
            ctx->pc = 0x351F20u;
            goto label_351f20;
        }
    }
    ctx->pc = 0x351ED4u;
label_351ed4:
    // 0x351ed4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_351ed8:
    if (ctx->pc == 0x351ED8u) {
        ctx->pc = 0x351EDCu;
        goto label_351edc;
    }
    ctx->pc = 0x351ED4u;
    {
        const bool branch_taken_0x351ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x351ed4) {
            ctx->pc = 0x351F00u;
            goto label_351f00;
        }
    }
    ctx->pc = 0x351EDCu;
label_351edc:
    // 0x351edc: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x351edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351ee0:
    // 0x351ee0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x351ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351ee4:
    // 0x351ee4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x351ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351ee8:
    // 0x351ee8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x351ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351eec:
    // 0x351eec: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x351eecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_351ef0:
    // 0x351ef0: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x351ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_351ef4:
    // 0x351ef4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x351ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_351ef8:
    // 0x351ef8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x351ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_351efc:
    // 0x351efc: 0x0  nop
    ctx->pc = 0x351efcu;
    // NOP
label_351f00:
    // 0x351f00: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x351f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_351f04:
    // 0x351f04: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x351f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_351f08:
    // 0x351f08: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x351f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_351f0c:
    // 0x351f0c: 0xb4102b  sltu        $v0, $a1, $s4
    ctx->pc = 0x351f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_351f10:
    // 0x351f10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x351f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_351f14:
    // 0x351f14: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_351f18:
    if (ctx->pc == 0x351F18u) {
        ctx->pc = 0x351F18u;
            // 0x351f18: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->pc = 0x351F1Cu;
        goto label_351f1c;
    }
    ctx->pc = 0x351F14u;
    {
        const bool branch_taken_0x351f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351F14u;
            // 0x351f18: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f14) {
            ctx->pc = 0x351ED4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351ed4;
        }
    }
    ctx->pc = 0x351F1Cu;
label_351f1c:
    // 0x351f1c: 0x0  nop
    ctx->pc = 0x351f1cu;
    // NOP
label_351f20:
    // 0x351f20: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_351f24:
    if (ctx->pc == 0x351F24u) {
        ctx->pc = 0x351F28u;
        goto label_351f28;
    }
    ctx->pc = 0x351F20u;
    {
        const bool branch_taken_0x351f20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x351f20) {
            ctx->pc = 0x351F68u;
            goto label_351f68;
        }
    }
    ctx->pc = 0x351F28u;
label_351f28:
    // 0x351f28: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_351f2c:
    if (ctx->pc == 0x351F2Cu) {
        ctx->pc = 0x351F30u;
        goto label_351f30;
    }
    ctx->pc = 0x351F28u;
    {
        const bool branch_taken_0x351f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x351f28) {
            ctx->pc = 0x351F50u;
            goto label_351f50;
        }
    }
    ctx->pc = 0x351F30u;
label_351f30:
    // 0x351f30: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x351f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351f34:
    // 0x351f34: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x351f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351f38:
    // 0x351f38: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x351f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351f3c:
    // 0x351f3c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x351f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351f40:
    // 0x351f40: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x351f40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_351f44:
    // 0x351f44: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x351f44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_351f48:
    // 0x351f48: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x351f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_351f4c:
    // 0x351f4c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x351f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_351f50:
    // 0x351f50: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x351f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_351f54:
    // 0x351f54: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x351f54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_351f58:
    // 0x351f58: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x351f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_351f5c:
    // 0x351f5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x351f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_351f60:
    // 0x351f60: 0x1660fff1  bnez        $s3, . + 4 + (-0xF << 2)
label_351f64:
    if (ctx->pc == 0x351F64u) {
        ctx->pc = 0x351F64u;
            // 0x351f64: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x351F68u;
        goto label_351f68;
    }
    ctx->pc = 0x351F60u;
    {
        const bool branch_taken_0x351f60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x351F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351F60u;
            // 0x351f64: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f60) {
            ctx->pc = 0x351F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351f28;
        }
    }
    ctx->pc = 0x351F68u;
label_351f68:
    // 0x351f68: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x351f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_351f6c:
    // 0x351f6c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_351f70:
    if (ctx->pc == 0x351F70u) {
        ctx->pc = 0x351F74u;
        goto label_351f74;
    }
    ctx->pc = 0x351F6Cu;
    {
        const bool branch_taken_0x351f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351f6c) {
            ctx->pc = 0x351FC0u;
            goto label_351fc0;
        }
    }
    ctx->pc = 0x351F74u;
label_351f74:
    // 0x351f74: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_351f78:
    if (ctx->pc == 0x351F78u) {
        ctx->pc = 0x351F7Cu;
        goto label_351f7c;
    }
    ctx->pc = 0x351F74u;
    {
        const bool branch_taken_0x351f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x351f74) {
            ctx->pc = 0x351FA0u;
            goto label_351fa0;
        }
    }
    ctx->pc = 0x351F7Cu;
label_351f7c:
    // 0x351f7c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x351f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351f80:
    // 0x351f80: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x351f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351f84:
    // 0x351f84: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x351f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351f88:
    // 0x351f88: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x351f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351f8c:
    // 0x351f8c: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x351f8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_351f90:
    // 0x351f90: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x351f90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_351f94:
    // 0x351f94: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x351f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_351f98:
    // 0x351f98: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x351f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_351f9c:
    // 0x351f9c: 0x0  nop
    ctx->pc = 0x351f9cu;
    // NOP
label_351fa0:
    // 0x351fa0: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x351fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_351fa4:
    // 0x351fa4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x351fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_351fa8:
    // 0x351fa8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x351fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_351fac:
    // 0x351fac: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x351facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_351fb0:
    // 0x351fb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x351fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_351fb4:
    // 0x351fb4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_351fb8:
    if (ctx->pc == 0x351FB8u) {
        ctx->pc = 0x351FB8u;
            // 0x351fb8: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->pc = 0x351FBCu;
        goto label_351fbc;
    }
    ctx->pc = 0x351FB4u;
    {
        const bool branch_taken_0x351fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351FB4u;
            // 0x351fb8: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351fb4) {
            ctx->pc = 0x351F74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351f74;
        }
    }
    ctx->pc = 0x351FBCu;
label_351fbc:
    // 0x351fbc: 0x0  nop
    ctx->pc = 0x351fbcu;
    // NOP
label_351fc0:
    // 0x351fc0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x351fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_351fc4:
    // 0x351fc4: 0x5055000e  beql        $v0, $s5, . + 4 + (0xE << 2)
label_351fc8:
    if (ctx->pc == 0x351FC8u) {
        ctx->pc = 0x351FC8u;
            // 0x351fc8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x351FCCu;
        goto label_351fcc;
    }
    ctx->pc = 0x351FC4u;
    {
        const bool branch_taken_0x351fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x351fc4) {
            ctx->pc = 0x351FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351FC4u;
            // 0x351fc8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352000u;
            goto label_352000;
        }
    }
    ctx->pc = 0x351FCCu;
label_351fcc:
    // 0x351fcc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x351fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_351fd0:
    // 0x351fd0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x351fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_351fd4:
    // 0x351fd4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x351fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_351fd8:
    // 0x351fd8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x351fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_351fdc:
    // 0x351fdc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x351fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_351fe0:
    // 0x351fe0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x351fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_351fe4:
    // 0x351fe4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x351fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_351fe8:
    // 0x351fe8: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x351fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_351fec:
    // 0x351fec: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x351fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_351ff0:
    // 0x351ff0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x351ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_351ff4:
    // 0x351ff4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x351ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_351ff8:
    // 0x351ff8: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x351ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_351ffc:
    // 0x351ffc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x351ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_352000:
    // 0x352000: 0xc0b6460  jal         func_2D9180
label_352004:
    if (ctx->pc == 0x352004u) {
        ctx->pc = 0x352008u;
        goto label_352008;
    }
    ctx->pc = 0x352000u;
    SET_GPR_U32(ctx, 31, 0x352008u);
    ctx->pc = 0x2D9180u;
    if (runtime->hasFunction(0x2D9180u)) {
        auto targetFn = runtime->lookupFunction(0x2D9180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352008u; }
        if (ctx->pc != 0x352008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9180_0x2d9180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352008u; }
        if (ctx->pc != 0x352008u) { return; }
    }
    ctx->pc = 0x352008u;
label_352008:
    // 0x352008: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x352008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_35200c:
    // 0x35200c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_352010:
    if (ctx->pc == 0x352010u) {
        ctx->pc = 0x352014u;
        goto label_352014;
    }
    ctx->pc = 0x35200Cu;
    {
        const bool branch_taken_0x35200c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35200c) {
            ctx->pc = 0x35201Cu;
            goto label_35201c;
        }
    }
    ctx->pc = 0x352014u;
label_352014:
    // 0x352014: 0xc0400a8  jal         func_1002A0
label_352018:
    if (ctx->pc == 0x352018u) {
        ctx->pc = 0x35201Cu;
        goto label_35201c;
    }
    ctx->pc = 0x352014u;
    SET_GPR_U32(ctx, 31, 0x35201Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35201Cu; }
        if (ctx->pc != 0x35201Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35201Cu; }
        if (ctx->pc != 0x35201Cu) { return; }
    }
    ctx->pc = 0x35201Cu;
label_35201c:
    // 0x35201c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35201cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_352020:
    // 0x352020: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x352020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_352024:
    // 0x352024: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x352024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_352028:
    // 0x352028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x352028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35202c:
    // 0x35202c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35202cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_352030:
    // 0x352030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x352030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_352034:
    // 0x352034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x352034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_352038:
    // 0x352038: 0x3e00008  jr          $ra
label_35203c:
    if (ctx->pc == 0x35203Cu) {
        ctx->pc = 0x35203Cu;
            // 0x35203c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x352040u;
        goto label_352040;
    }
    ctx->pc = 0x352038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352038u;
            // 0x35203c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352040u;
label_352040:
    // 0x352040: 0x80b2db8  j           func_2CB6E0
label_352044:
    if (ctx->pc == 0x352044u) {
        ctx->pc = 0x352044u;
            // 0x352044: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x352048u;
        goto label_352048;
    }
    ctx->pc = 0x352040u;
    ctx->pc = 0x352044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352040u;
            // 0x352044: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB6E0u;
    {
        auto targetFn = runtime->lookupFunction(0x2CB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x352048u;
label_352048:
    // 0x352048: 0x0  nop
    ctx->pc = 0x352048u;
    // NOP
label_35204c:
    // 0x35204c: 0x0  nop
    ctx->pc = 0x35204cu;
    // NOP
label_352050:
    // 0x352050: 0x80d4350  j           func_350D40
label_352054:
    if (ctx->pc == 0x352054u) {
        ctx->pc = 0x352054u;
            // 0x352054: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x352058u;
        goto label_352058;
    }
    ctx->pc = 0x352050u;
    ctx->pc = 0x352054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352050u;
            // 0x352054: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350D40u;
    {
        auto targetFn = runtime->lookupFunction(0x350D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x352058u;
label_352058:
    // 0x352058: 0x0  nop
    ctx->pc = 0x352058u;
    // NOP
label_35205c:
    // 0x35205c: 0x0  nop
    ctx->pc = 0x35205cu;
    // NOP
label_352060:
    // 0x352060: 0x80d442c  j           func_3510B0
label_352064:
    if (ctx->pc == 0x352064u) {
        ctx->pc = 0x352064u;
            // 0x352064: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x352068u;
        goto label_352068;
    }
    ctx->pc = 0x352060u;
    ctx->pc = 0x352064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352060u;
            // 0x352064: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3510B0u;
    {
        auto targetFn = runtime->lookupFunction(0x3510B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x352068u;
label_352068:
    // 0x352068: 0x0  nop
    ctx->pc = 0x352068u;
    // NOP
label_35206c:
    // 0x35206c: 0x0  nop
    ctx->pc = 0x35206cu;
    // NOP
label_352070:
    // 0x352070: 0x80d4300  j           func_350C00
label_352074:
    if (ctx->pc == 0x352074u) {
        ctx->pc = 0x352074u;
            // 0x352074: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->pc = 0x352078u;
        goto label_352078;
    }
    ctx->pc = 0x352070u;
    ctx->pc = 0x352074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352070u;
            // 0x352074: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350C00u;
    {
        auto targetFn = runtime->lookupFunction(0x350C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x352078u;
label_352078:
    // 0x352078: 0x0  nop
    ctx->pc = 0x352078u;
    // NOP
label_35207c:
    // 0x35207c: 0x0  nop
    ctx->pc = 0x35207cu;
    // NOP
label_352080:
    // 0x352080: 0x80d4300  j           func_350C00
label_352084:
    if (ctx->pc == 0x352084u) {
        ctx->pc = 0x352084u;
            // 0x352084: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x352088u;
        goto label_352088;
    }
    ctx->pc = 0x352080u;
    ctx->pc = 0x352084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352080u;
            // 0x352084: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350C00u;
    {
        auto targetFn = runtime->lookupFunction(0x350C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x352088u;
label_352088:
    // 0x352088: 0x0  nop
    ctx->pc = 0x352088u;
    // NOP
label_35208c:
    // 0x35208c: 0x0  nop
    ctx->pc = 0x35208cu;
    // NOP
label_352090:
    // 0x352090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x352090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_352094:
    // 0x352094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x352094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_352098:
    // 0x352098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x352098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35209c:
    // 0x35209c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3520a0:
    // 0x3520a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3520a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3520a4:
    // 0x3520a4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3520a8:
    if (ctx->pc == 0x3520A8u) {
        ctx->pc = 0x3520A8u;
            // 0x3520a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3520ACu;
        goto label_3520ac;
    }
    ctx->pc = 0x3520A4u;
    {
        const bool branch_taken_0x3520a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3520A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3520A4u;
            // 0x3520a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520a4) {
            ctx->pc = 0x352100u;
            goto label_352100;
        }
    }
    ctx->pc = 0x3520ACu;
label_3520ac:
    // 0x3520ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3520acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3520b0:
    // 0x3520b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3520b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3520b4:
    // 0x3520b4: 0x24635d70  addiu       $v1, $v1, 0x5D70
    ctx->pc = 0x3520b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23920));
label_3520b8:
    // 0x3520b8: 0x24425da8  addiu       $v0, $v0, 0x5DA8
    ctx->pc = 0x3520b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23976));
label_3520bc:
    // 0x3520bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3520bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3520c0:
    // 0x3520c0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3520c4:
    if (ctx->pc == 0x3520C4u) {
        ctx->pc = 0x3520C4u;
            // 0x3520c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3520C8u;
        goto label_3520c8;
    }
    ctx->pc = 0x3520C0u;
    {
        const bool branch_taken_0x3520c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3520C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3520C0u;
            // 0x3520c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520c0) {
            ctx->pc = 0x3520E8u;
            goto label_3520e8;
        }
    }
    ctx->pc = 0x3520C8u;
label_3520c8:
    // 0x3520c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3520c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3520cc:
    // 0x3520cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3520ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3520d0:
    // 0x3520d0: 0x24630310  addiu       $v1, $v1, 0x310
    ctx->pc = 0x3520d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 784));
label_3520d4:
    // 0x3520d4: 0x24420348  addiu       $v0, $v0, 0x348
    ctx->pc = 0x3520d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 840));
label_3520d8:
    // 0x3520d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3520d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3520dc:
    // 0x3520dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3520dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3520e0:
    // 0x3520e0: 0xc0b2a58  jal         func_2CA960
label_3520e4:
    if (ctx->pc == 0x3520E4u) {
        ctx->pc = 0x3520E4u;
            // 0x3520e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3520E8u;
        goto label_3520e8;
    }
    ctx->pc = 0x3520E0u;
    SET_GPR_U32(ctx, 31, 0x3520E8u);
    ctx->pc = 0x3520E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3520E0u;
            // 0x3520e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA960u;
    if (runtime->hasFunction(0x2CA960u)) {
        auto targetFn = runtime->lookupFunction(0x2CA960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3520E8u; }
        if (ctx->pc != 0x3520E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA960_0x2ca960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3520E8u; }
        if (ctx->pc != 0x3520E8u) { return; }
    }
    ctx->pc = 0x3520E8u;
label_3520e8:
    // 0x3520e8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3520e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3520ec:
    // 0x3520ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3520ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3520f0:
    // 0x3520f0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3520f4:
    if (ctx->pc == 0x3520F4u) {
        ctx->pc = 0x3520F4u;
            // 0x3520f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3520F8u;
        goto label_3520f8;
    }
    ctx->pc = 0x3520F0u;
    {
        const bool branch_taken_0x3520f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3520f0) {
            ctx->pc = 0x3520F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3520F0u;
            // 0x3520f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352104u;
            goto label_352104;
        }
    }
    ctx->pc = 0x3520F8u;
label_3520f8:
    // 0x3520f8: 0xc0400a8  jal         func_1002A0
label_3520fc:
    if (ctx->pc == 0x3520FCu) {
        ctx->pc = 0x3520FCu;
            // 0x3520fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352100u;
        goto label_352100;
    }
    ctx->pc = 0x3520F8u;
    SET_GPR_U32(ctx, 31, 0x352100u);
    ctx->pc = 0x3520FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3520F8u;
            // 0x3520fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352100u; }
        if (ctx->pc != 0x352100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352100u; }
        if (ctx->pc != 0x352100u) { return; }
    }
    ctx->pc = 0x352100u;
label_352100:
    // 0x352100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x352100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_352104:
    // 0x352104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x352104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_352108:
    // 0x352108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x352108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35210c:
    // 0x35210c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35210cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_352110:
    // 0x352110: 0x3e00008  jr          $ra
label_352114:
    if (ctx->pc == 0x352114u) {
        ctx->pc = 0x352114u;
            // 0x352114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x352118u;
        goto label_352118;
    }
    ctx->pc = 0x352110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352110u;
            // 0x352114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352118u;
label_352118:
    // 0x352118: 0x0  nop
    ctx->pc = 0x352118u;
    // NOP
label_35211c:
    // 0x35211c: 0x0  nop
    ctx->pc = 0x35211cu;
    // NOP
label_352120:
    // 0x352120: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x352120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_352124:
    // 0x352124: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x352124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_352128:
    // 0x352128: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x352128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_35212c:
    // 0x35212c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x35212cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_352130:
    // 0x352130: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x352130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_352134:
    // 0x352134: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x352134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_352138:
    // 0x352138: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x352138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_35213c:
    // 0x35213c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_352140:
    // 0x352140: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x352140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_352144:
    // 0x352144: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x352144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_352148:
    // 0x352148: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x352148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35214c:
    // 0x35214c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35214cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_352150:
    // 0x352150: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x352150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_352154:
    // 0x352154: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x352154u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_352158:
    // 0x352158: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_35215c:
    if (ctx->pc == 0x35215Cu) {
        ctx->pc = 0x35215Cu;
            // 0x35215c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352160u;
        goto label_352160;
    }
    ctx->pc = 0x352158u;
    {
        const bool branch_taken_0x352158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352158u;
            // 0x35215c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352158) {
            ctx->pc = 0x3521A8u;
            goto label_3521a8;
        }
    }
    ctx->pc = 0x352160u;
label_352160:
    // 0x352160: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x352160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_352164:
    // 0x352164: 0x10a30076  beq         $a1, $v1, . + 4 + (0x76 << 2)
label_352168:
    if (ctx->pc == 0x352168u) {
        ctx->pc = 0x35216Cu;
        goto label_35216c;
    }
    ctx->pc = 0x352164u;
    {
        const bool branch_taken_0x352164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x352164) {
            ctx->pc = 0x352340u;
            goto label_352340;
        }
    }
    ctx->pc = 0x35216Cu;
label_35216c:
    // 0x35216c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_352170:
    // 0x352170: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_352174:
    if (ctx->pc == 0x352174u) {
        ctx->pc = 0x352178u;
        goto label_352178;
    }
    ctx->pc = 0x352170u;
    {
        const bool branch_taken_0x352170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x352170) {
            ctx->pc = 0x352180u;
            goto label_352180;
        }
    }
    ctx->pc = 0x352178u;
label_352178:
    // 0x352178: 0x10000071  b           . + 4 + (0x71 << 2)
label_35217c:
    if (ctx->pc == 0x35217Cu) {
        ctx->pc = 0x352180u;
        goto label_352180;
    }
    ctx->pc = 0x352178u;
    {
        const bool branch_taken_0x352178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352178) {
            ctx->pc = 0x352340u;
            goto label_352340;
        }
    }
    ctx->pc = 0x352180u;
label_352180:
    // 0x352180: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x352180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_352184:
    // 0x352184: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x352184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_352188:
    // 0x352188: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x352188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35218c:
    // 0x35218c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x35218cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_352190:
    // 0x352190: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x352190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_352194:
    // 0x352194: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x352194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_352198:
    // 0x352198: 0x320f809  jalr        $t9
label_35219c:
    if (ctx->pc == 0x35219Cu) {
        ctx->pc = 0x35219Cu;
            // 0x35219c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3521A0u;
        goto label_3521a0;
    }
    ctx->pc = 0x352198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3521A0u);
        ctx->pc = 0x35219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352198u;
            // 0x35219c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3521A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3521A0u; }
            if (ctx->pc != 0x3521A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3521A0u;
label_3521a0:
    // 0x3521a0: 0x10000067  b           . + 4 + (0x67 << 2)
label_3521a4:
    if (ctx->pc == 0x3521A4u) {
        ctx->pc = 0x3521A8u;
        goto label_3521a8;
    }
    ctx->pc = 0x3521A0u;
    {
        const bool branch_taken_0x3521a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3521a0) {
            ctx->pc = 0x352340u;
            goto label_352340;
        }
    }
    ctx->pc = 0x3521A8u;
label_3521a8:
    // 0x3521a8: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x3521a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_3521ac:
    // 0x3521ac: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
label_3521b0:
    if (ctx->pc == 0x3521B0u) {
        ctx->pc = 0x3521B0u;
            // 0x3521b0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x3521B4u;
        goto label_3521b4;
    }
    ctx->pc = 0x3521ACu;
    {
        const bool branch_taken_0x3521ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3521B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3521ACu;
            // 0x3521b0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3521ac) {
            ctx->pc = 0x352340u;
            goto label_352340;
        }
    }
    ctx->pc = 0x3521B4u;
label_3521b4:
    // 0x3521b4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3521b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3521b8:
    // 0x3521b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3521b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3521bc:
    // 0x3521bc: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x3521bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3521c0:
    // 0x3521c0: 0x27d00084  addiu       $s0, $fp, 0x84
    ctx->pc = 0x3521c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
label_3521c4:
    // 0x3521c4: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x3521c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3521c8:
    // 0x3521c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3521c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3521cc:
    // 0x3521cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3521ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3521d0:
    // 0x3521d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3521d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3521d4:
    // 0x3521d4: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x3521d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3521d8:
    // 0x3521d8: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x3521d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3521dc:
    // 0x3521dc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3521dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3521e0:
    // 0x3521e0: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x3521e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3521e4:
    // 0x3521e4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3521e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3521e8:
    // 0x3521e8: 0xc45436c0  lwc1        $f20, 0x36C0($v0)
    ctx->pc = 0x3521e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3521ec:
    // 0x3521ec: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x3521ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3521f0:
    // 0x3521f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3521f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3521f4:
    // 0x3521f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3521f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3521f8:
    // 0x3521f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3521f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3521fc:
    // 0x3521fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3521fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_352200:
    // 0x352200: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x352200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_352204:
    // 0x352204: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x352204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_352208:
    // 0x352208: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x352208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_35220c:
    // 0x35220c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x35220cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352210:
    // 0x352210: 0xc0d1c14  jal         func_347050
label_352214:
    if (ctx->pc == 0x352214u) {
        ctx->pc = 0x352214u;
            // 0x352214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352218u;
        goto label_352218;
    }
    ctx->pc = 0x352210u;
    SET_GPR_U32(ctx, 31, 0x352218u);
    ctx->pc = 0x352214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352210u;
            // 0x352214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352218u; }
        if (ctx->pc != 0x352218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352218u; }
        if (ctx->pc != 0x352218u) { return; }
    }
    ctx->pc = 0x352218u;
label_352218:
    // 0x352218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x352218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35221c:
    // 0x35221c: 0xc04f278  jal         func_13C9E0
label_352220:
    if (ctx->pc == 0x352220u) {
        ctx->pc = 0x352220u;
            // 0x352220: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x352224u;
        goto label_352224;
    }
    ctx->pc = 0x35221Cu;
    SET_GPR_U32(ctx, 31, 0x352224u);
    ctx->pc = 0x352220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35221Cu;
            // 0x352220: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352224u; }
        if (ctx->pc != 0x352224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352224u; }
        if (ctx->pc != 0x352224u) { return; }
    }
    ctx->pc = 0x352224u;
label_352224:
    // 0x352224: 0xc0d1dc8  jal         func_347720
label_352228:
    if (ctx->pc == 0x352228u) {
        ctx->pc = 0x352228u;
            // 0x352228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35222Cu;
        goto label_35222c;
    }
    ctx->pc = 0x352224u;
    SET_GPR_U32(ctx, 31, 0x35222Cu);
    ctx->pc = 0x352228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352224u;
            // 0x352228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35222Cu; }
        if (ctx->pc != 0x35222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35222Cu; }
        if (ctx->pc != 0x35222Cu) { return; }
    }
    ctx->pc = 0x35222Cu;
label_35222c:
    // 0x35222c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x35222cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352230:
    // 0x352230: 0xc0d1dc8  jal         func_347720
label_352234:
    if (ctx->pc == 0x352234u) {
        ctx->pc = 0x352234u;
            // 0x352234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352238u;
        goto label_352238;
    }
    ctx->pc = 0x352230u;
    SET_GPR_U32(ctx, 31, 0x352238u);
    ctx->pc = 0x352234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352230u;
            // 0x352234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352238u; }
        if (ctx->pc != 0x352238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352238u; }
        if (ctx->pc != 0x352238u) { return; }
    }
    ctx->pc = 0x352238u;
label_352238:
    // 0x352238: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x352238u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35223c:
    // 0x35223c: 0xc0d1dc8  jal         func_347720
label_352240:
    if (ctx->pc == 0x352240u) {
        ctx->pc = 0x352240u;
            // 0x352240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352244u;
        goto label_352244;
    }
    ctx->pc = 0x35223Cu;
    SET_GPR_U32(ctx, 31, 0x352244u);
    ctx->pc = 0x352240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35223Cu;
            // 0x352240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352244u; }
        if (ctx->pc != 0x352244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352244u; }
        if (ctx->pc != 0x352244u) { return; }
    }
    ctx->pc = 0x352244u;
label_352244:
    // 0x352244: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x352244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_352248:
    // 0x352248: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x352248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_35224c:
    // 0x35224c: 0xc6ed0008  lwc1        $f13, 0x8($s7)
    ctx->pc = 0x35224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_352250:
    // 0x352250: 0xc44e0004  lwc1        $f14, 0x4($v0)
    ctx->pc = 0x352250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_352254:
    // 0x352254: 0xc04ce50  jal         func_133940
label_352258:
    if (ctx->pc == 0x352258u) {
        ctx->pc = 0x352258u;
            // 0x352258: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35225Cu;
        goto label_35225c;
    }
    ctx->pc = 0x352254u;
    SET_GPR_U32(ctx, 31, 0x35225Cu);
    ctx->pc = 0x352258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352254u;
            // 0x352258: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35225Cu; }
        if (ctx->pc != 0x35225Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35225Cu; }
        if (ctx->pc != 0x35225Cu) { return; }
    }
    ctx->pc = 0x35225Cu;
label_35225c:
    // 0x35225c: 0xc0d1c10  jal         func_347040
label_352260:
    if (ctx->pc == 0x352260u) {
        ctx->pc = 0x352260u;
            // 0x352260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352264u;
        goto label_352264;
    }
    ctx->pc = 0x35225Cu;
    SET_GPR_U32(ctx, 31, 0x352264u);
    ctx->pc = 0x352260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35225Cu;
            // 0x352260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352264u; }
        if (ctx->pc != 0x352264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352264u; }
        if (ctx->pc != 0x352264u) { return; }
    }
    ctx->pc = 0x352264u;
label_352264:
    // 0x352264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x352264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352268:
    // 0x352268: 0xc04ce80  jal         func_133A00
label_35226c:
    if (ctx->pc == 0x35226Cu) {
        ctx->pc = 0x35226Cu;
            // 0x35226c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x352270u;
        goto label_352270;
    }
    ctx->pc = 0x352268u;
    SET_GPR_U32(ctx, 31, 0x352270u);
    ctx->pc = 0x35226Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352268u;
            // 0x35226c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352270u; }
        if (ctx->pc != 0x352270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352270u; }
        if (ctx->pc != 0x352270u) { return; }
    }
    ctx->pc = 0x352270u;
label_352270:
    // 0x352270: 0xc0d4108  jal         func_350420
label_352274:
    if (ctx->pc == 0x352274u) {
        ctx->pc = 0x352278u;
        goto label_352278;
    }
    ctx->pc = 0x352270u;
    SET_GPR_U32(ctx, 31, 0x352278u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352278u; }
        if (ctx->pc != 0x352278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352278u; }
        if (ctx->pc != 0x352278u) { return; }
    }
    ctx->pc = 0x352278u;
label_352278:
    // 0x352278: 0xc0b36b4  jal         func_2CDAD0
label_35227c:
    if (ctx->pc == 0x35227Cu) {
        ctx->pc = 0x35227Cu;
            // 0x35227c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352280u;
        goto label_352280;
    }
    ctx->pc = 0x352278u;
    SET_GPR_U32(ctx, 31, 0x352280u);
    ctx->pc = 0x35227Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352278u;
            // 0x35227c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352280u; }
        if (ctx->pc != 0x352280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352280u; }
        if (ctx->pc != 0x352280u) { return; }
    }
    ctx->pc = 0x352280u;
label_352280:
    // 0x352280: 0xc0b9c64  jal         func_2E7190
label_352284:
    if (ctx->pc == 0x352284u) {
        ctx->pc = 0x352284u;
            // 0x352284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352288u;
        goto label_352288;
    }
    ctx->pc = 0x352280u;
    SET_GPR_U32(ctx, 31, 0x352288u);
    ctx->pc = 0x352284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352280u;
            // 0x352284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352288u; }
        if (ctx->pc != 0x352288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352288u; }
        if (ctx->pc != 0x352288u) { return; }
    }
    ctx->pc = 0x352288u;
label_352288:
    // 0x352288: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x352288u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35228c:
    // 0x35228c: 0xc0d4104  jal         func_350410
label_352290:
    if (ctx->pc == 0x352290u) {
        ctx->pc = 0x352290u;
            // 0x352290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352294u;
        goto label_352294;
    }
    ctx->pc = 0x35228Cu;
    SET_GPR_U32(ctx, 31, 0x352294u);
    ctx->pc = 0x352290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35228Cu;
            // 0x352290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352294u; }
        if (ctx->pc != 0x352294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352294u; }
        if (ctx->pc != 0x352294u) { return; }
    }
    ctx->pc = 0x352294u;
label_352294:
    // 0x352294: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x352294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_352298:
    // 0x352298: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x352298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35229c:
    // 0x35229c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x35229cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3522a0:
    // 0x3522a0: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x3522a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3522a4:
    // 0x3522a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3522a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3522a8:
    // 0x3522a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3522a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3522ac:
    // 0x3522ac: 0xc0d40ac  jal         func_3502B0
label_3522b0:
    if (ctx->pc == 0x3522B0u) {
        ctx->pc = 0x3522B0u;
            // 0x3522b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3522B4u;
        goto label_3522b4;
    }
    ctx->pc = 0x3522ACu;
    SET_GPR_U32(ctx, 31, 0x3522B4u);
    ctx->pc = 0x3522B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3522ACu;
            // 0x3522b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3522B4u; }
        if (ctx->pc != 0x3522B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3522B4u; }
        if (ctx->pc != 0x3522B4u) { return; }
    }
    ctx->pc = 0x3522B4u;
label_3522b4:
    // 0x3522b4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3522b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3522b8:
    // 0x3522b8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_3522bc:
    if (ctx->pc == 0x3522BCu) {
        ctx->pc = 0x3522BCu;
            // 0x3522bc: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3522C0u;
        goto label_3522c0;
    }
    ctx->pc = 0x3522B8u;
    {
        const bool branch_taken_0x3522b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3522BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3522B8u;
            // 0x3522bc: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3522b8) {
            ctx->pc = 0x352328u;
            goto label_352328;
        }
    }
    ctx->pc = 0x3522C0u;
label_3522c0:
    // 0x3522c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3522c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3522c4:
    // 0x3522c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3522c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3522c8:
    // 0x3522c8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3522c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3522cc:
    // 0x3522cc: 0xc04e4a4  jal         func_139290
label_3522d0:
    if (ctx->pc == 0x3522D0u) {
        ctx->pc = 0x3522D0u;
            // 0x3522d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3522D4u;
        goto label_3522d4;
    }
    ctx->pc = 0x3522CCu;
    SET_GPR_U32(ctx, 31, 0x3522D4u);
    ctx->pc = 0x3522D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3522CCu;
            // 0x3522d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3522D4u; }
        if (ctx->pc != 0x3522D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3522D4u; }
        if (ctx->pc != 0x3522D4u) { return; }
    }
    ctx->pc = 0x3522D4u;
label_3522d4:
    // 0x3522d4: 0xc04e738  jal         func_139CE0
label_3522d8:
    if (ctx->pc == 0x3522D8u) {
        ctx->pc = 0x3522D8u;
            // 0x3522d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3522DCu;
        goto label_3522dc;
    }
    ctx->pc = 0x3522D4u;
    SET_GPR_U32(ctx, 31, 0x3522DCu);
    ctx->pc = 0x3522D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3522D4u;
            // 0x3522d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3522DCu; }
        if (ctx->pc != 0x3522DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3522DCu; }
        if (ctx->pc != 0x3522DCu) { return; }
    }
    ctx->pc = 0x3522DCu;
label_3522dc:
    // 0x3522dc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x3522dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3522e0:
    // 0x3522e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3522e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3522e4:
    // 0x3522e4: 0xc04cd60  jal         func_133580
label_3522e8:
    if (ctx->pc == 0x3522E8u) {
        ctx->pc = 0x3522E8u;
            // 0x3522e8: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3522ECu;
        goto label_3522ec;
    }
    ctx->pc = 0x3522E4u;
    SET_GPR_U32(ctx, 31, 0x3522ECu);
    ctx->pc = 0x3522E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3522E4u;
            // 0x3522e8: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3522ECu; }
        if (ctx->pc != 0x3522ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3522ECu; }
        if (ctx->pc != 0x3522ECu) { return; }
    }
    ctx->pc = 0x3522ECu;
label_3522ec:
    // 0x3522ec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3522ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3522f0:
    // 0x3522f0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3522f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3522f4:
    // 0x3522f4: 0x320f809  jalr        $t9
label_3522f8:
    if (ctx->pc == 0x3522F8u) {
        ctx->pc = 0x3522F8u;
            // 0x3522f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3522FCu;
        goto label_3522fc;
    }
    ctx->pc = 0x3522F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3522FCu);
        ctx->pc = 0x3522F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3522F4u;
            // 0x3522f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3522FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3522FCu; }
            if (ctx->pc != 0x3522FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3522FCu;
label_3522fc:
    // 0x3522fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3522fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_352300:
    // 0x352300: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x352300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352304:
    // 0x352304: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x352304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_352308:
    // 0x352308: 0xc054fd4  jal         func_153F50
label_35230c:
    if (ctx->pc == 0x35230Cu) {
        ctx->pc = 0x35230Cu;
            // 0x35230c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352310u;
        goto label_352310;
    }
    ctx->pc = 0x352308u;
    SET_GPR_U32(ctx, 31, 0x352310u);
    ctx->pc = 0x35230Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352308u;
            // 0x35230c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352310u; }
        if (ctx->pc != 0x352310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352310u; }
        if (ctx->pc != 0x352310u) { return; }
    }
    ctx->pc = 0x352310u;
label_352310:
    // 0x352310: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x352310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_352314:
    // 0x352314: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x352314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_352318:
    // 0x352318: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x352318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35231c:
    // 0x35231c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x35231cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_352320:
    // 0x352320: 0xc0d48e0  jal         func_352380
label_352324:
    if (ctx->pc == 0x352324u) {
        ctx->pc = 0x352324u;
            // 0x352324: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x352328u;
        goto label_352328;
    }
    ctx->pc = 0x352320u;
    SET_GPR_U32(ctx, 31, 0x352328u);
    ctx->pc = 0x352324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352320u;
            // 0x352324: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352380u;
    if (runtime->hasFunction(0x352380u)) {
        auto targetFn = runtime->lookupFunction(0x352380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352328u; }
        if (ctx->pc != 0x352328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352380_0x352380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352328u; }
        if (ctx->pc != 0x352328u) { return; }
    }
    ctx->pc = 0x352328u;
label_352328:
    // 0x352328: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x352328u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_35232c:
    // 0x35232c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35232cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_352330:
    // 0x352330: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x352330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_352334:
    // 0x352334: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
label_352338:
    if (ctx->pc == 0x352338u) {
        ctx->pc = 0x352338u;
            // 0x352338: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x35233Cu;
        goto label_35233c;
    }
    ctx->pc = 0x352334u;
    {
        const bool branch_taken_0x352334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352334u;
            // 0x352338: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352334) {
            ctx->pc = 0x352204u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_352204;
        }
    }
    ctx->pc = 0x35233Cu;
label_35233c:
    // 0x35233c: 0x0  nop
    ctx->pc = 0x35233cu;
    // NOP
label_352340:
    // 0x352340: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x352340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_352344:
    // 0x352344: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x352344u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_352348:
    // 0x352348: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x352348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35234c:
    // 0x35234c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x35234cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_352350:
    // 0x352350: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x352350u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_352354:
    // 0x352354: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x352354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_352358:
    // 0x352358: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x352358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35235c:
    // 0x35235c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35235cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_352360:
    // 0x352360: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x352360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_352364:
    // 0x352364: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x352364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_352368:
    // 0x352368: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x352368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35236c:
    // 0x35236c: 0x3e00008  jr          $ra
label_352370:
    if (ctx->pc == 0x352370u) {
        ctx->pc = 0x352370u;
            // 0x352370: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x352374u;
        goto label_352374;
    }
    ctx->pc = 0x35236Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35236Cu;
            // 0x352370: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352374u;
label_352374:
    // 0x352374: 0x0  nop
    ctx->pc = 0x352374u;
    // NOP
label_352378:
    // 0x352378: 0x0  nop
    ctx->pc = 0x352378u;
    // NOP
label_35237c:
    // 0x35237c: 0x0  nop
    ctx->pc = 0x35237cu;
    // NOP
}
