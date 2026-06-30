#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494BF0
// Address: 0x494bf0 - 0x495a40
void sub_00494BF0_0x494bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494BF0_0x494bf0");
#endif

    switch (ctx->pc) {
        case 0x494bf0u: goto label_494bf0;
        case 0x494bf4u: goto label_494bf4;
        case 0x494bf8u: goto label_494bf8;
        case 0x494bfcu: goto label_494bfc;
        case 0x494c00u: goto label_494c00;
        case 0x494c04u: goto label_494c04;
        case 0x494c08u: goto label_494c08;
        case 0x494c0cu: goto label_494c0c;
        case 0x494c10u: goto label_494c10;
        case 0x494c14u: goto label_494c14;
        case 0x494c18u: goto label_494c18;
        case 0x494c1cu: goto label_494c1c;
        case 0x494c20u: goto label_494c20;
        case 0x494c24u: goto label_494c24;
        case 0x494c28u: goto label_494c28;
        case 0x494c2cu: goto label_494c2c;
        case 0x494c30u: goto label_494c30;
        case 0x494c34u: goto label_494c34;
        case 0x494c38u: goto label_494c38;
        case 0x494c3cu: goto label_494c3c;
        case 0x494c40u: goto label_494c40;
        case 0x494c44u: goto label_494c44;
        case 0x494c48u: goto label_494c48;
        case 0x494c4cu: goto label_494c4c;
        case 0x494c50u: goto label_494c50;
        case 0x494c54u: goto label_494c54;
        case 0x494c58u: goto label_494c58;
        case 0x494c5cu: goto label_494c5c;
        case 0x494c60u: goto label_494c60;
        case 0x494c64u: goto label_494c64;
        case 0x494c68u: goto label_494c68;
        case 0x494c6cu: goto label_494c6c;
        case 0x494c70u: goto label_494c70;
        case 0x494c74u: goto label_494c74;
        case 0x494c78u: goto label_494c78;
        case 0x494c7cu: goto label_494c7c;
        case 0x494c80u: goto label_494c80;
        case 0x494c84u: goto label_494c84;
        case 0x494c88u: goto label_494c88;
        case 0x494c8cu: goto label_494c8c;
        case 0x494c90u: goto label_494c90;
        case 0x494c94u: goto label_494c94;
        case 0x494c98u: goto label_494c98;
        case 0x494c9cu: goto label_494c9c;
        case 0x494ca0u: goto label_494ca0;
        case 0x494ca4u: goto label_494ca4;
        case 0x494ca8u: goto label_494ca8;
        case 0x494cacu: goto label_494cac;
        case 0x494cb0u: goto label_494cb0;
        case 0x494cb4u: goto label_494cb4;
        case 0x494cb8u: goto label_494cb8;
        case 0x494cbcu: goto label_494cbc;
        case 0x494cc0u: goto label_494cc0;
        case 0x494cc4u: goto label_494cc4;
        case 0x494cc8u: goto label_494cc8;
        case 0x494cccu: goto label_494ccc;
        case 0x494cd0u: goto label_494cd0;
        case 0x494cd4u: goto label_494cd4;
        case 0x494cd8u: goto label_494cd8;
        case 0x494cdcu: goto label_494cdc;
        case 0x494ce0u: goto label_494ce0;
        case 0x494ce4u: goto label_494ce4;
        case 0x494ce8u: goto label_494ce8;
        case 0x494cecu: goto label_494cec;
        case 0x494cf0u: goto label_494cf0;
        case 0x494cf4u: goto label_494cf4;
        case 0x494cf8u: goto label_494cf8;
        case 0x494cfcu: goto label_494cfc;
        case 0x494d00u: goto label_494d00;
        case 0x494d04u: goto label_494d04;
        case 0x494d08u: goto label_494d08;
        case 0x494d0cu: goto label_494d0c;
        case 0x494d10u: goto label_494d10;
        case 0x494d14u: goto label_494d14;
        case 0x494d18u: goto label_494d18;
        case 0x494d1cu: goto label_494d1c;
        case 0x494d20u: goto label_494d20;
        case 0x494d24u: goto label_494d24;
        case 0x494d28u: goto label_494d28;
        case 0x494d2cu: goto label_494d2c;
        case 0x494d30u: goto label_494d30;
        case 0x494d34u: goto label_494d34;
        case 0x494d38u: goto label_494d38;
        case 0x494d3cu: goto label_494d3c;
        case 0x494d40u: goto label_494d40;
        case 0x494d44u: goto label_494d44;
        case 0x494d48u: goto label_494d48;
        case 0x494d4cu: goto label_494d4c;
        case 0x494d50u: goto label_494d50;
        case 0x494d54u: goto label_494d54;
        case 0x494d58u: goto label_494d58;
        case 0x494d5cu: goto label_494d5c;
        case 0x494d60u: goto label_494d60;
        case 0x494d64u: goto label_494d64;
        case 0x494d68u: goto label_494d68;
        case 0x494d6cu: goto label_494d6c;
        case 0x494d70u: goto label_494d70;
        case 0x494d74u: goto label_494d74;
        case 0x494d78u: goto label_494d78;
        case 0x494d7cu: goto label_494d7c;
        case 0x494d80u: goto label_494d80;
        case 0x494d84u: goto label_494d84;
        case 0x494d88u: goto label_494d88;
        case 0x494d8cu: goto label_494d8c;
        case 0x494d90u: goto label_494d90;
        case 0x494d94u: goto label_494d94;
        case 0x494d98u: goto label_494d98;
        case 0x494d9cu: goto label_494d9c;
        case 0x494da0u: goto label_494da0;
        case 0x494da4u: goto label_494da4;
        case 0x494da8u: goto label_494da8;
        case 0x494dacu: goto label_494dac;
        case 0x494db0u: goto label_494db0;
        case 0x494db4u: goto label_494db4;
        case 0x494db8u: goto label_494db8;
        case 0x494dbcu: goto label_494dbc;
        case 0x494dc0u: goto label_494dc0;
        case 0x494dc4u: goto label_494dc4;
        case 0x494dc8u: goto label_494dc8;
        case 0x494dccu: goto label_494dcc;
        case 0x494dd0u: goto label_494dd0;
        case 0x494dd4u: goto label_494dd4;
        case 0x494dd8u: goto label_494dd8;
        case 0x494ddcu: goto label_494ddc;
        case 0x494de0u: goto label_494de0;
        case 0x494de4u: goto label_494de4;
        case 0x494de8u: goto label_494de8;
        case 0x494decu: goto label_494dec;
        case 0x494df0u: goto label_494df0;
        case 0x494df4u: goto label_494df4;
        case 0x494df8u: goto label_494df8;
        case 0x494dfcu: goto label_494dfc;
        case 0x494e00u: goto label_494e00;
        case 0x494e04u: goto label_494e04;
        case 0x494e08u: goto label_494e08;
        case 0x494e0cu: goto label_494e0c;
        case 0x494e10u: goto label_494e10;
        case 0x494e14u: goto label_494e14;
        case 0x494e18u: goto label_494e18;
        case 0x494e1cu: goto label_494e1c;
        case 0x494e20u: goto label_494e20;
        case 0x494e24u: goto label_494e24;
        case 0x494e28u: goto label_494e28;
        case 0x494e2cu: goto label_494e2c;
        case 0x494e30u: goto label_494e30;
        case 0x494e34u: goto label_494e34;
        case 0x494e38u: goto label_494e38;
        case 0x494e3cu: goto label_494e3c;
        case 0x494e40u: goto label_494e40;
        case 0x494e44u: goto label_494e44;
        case 0x494e48u: goto label_494e48;
        case 0x494e4cu: goto label_494e4c;
        case 0x494e50u: goto label_494e50;
        case 0x494e54u: goto label_494e54;
        case 0x494e58u: goto label_494e58;
        case 0x494e5cu: goto label_494e5c;
        case 0x494e60u: goto label_494e60;
        case 0x494e64u: goto label_494e64;
        case 0x494e68u: goto label_494e68;
        case 0x494e6cu: goto label_494e6c;
        case 0x494e70u: goto label_494e70;
        case 0x494e74u: goto label_494e74;
        case 0x494e78u: goto label_494e78;
        case 0x494e7cu: goto label_494e7c;
        case 0x494e80u: goto label_494e80;
        case 0x494e84u: goto label_494e84;
        case 0x494e88u: goto label_494e88;
        case 0x494e8cu: goto label_494e8c;
        case 0x494e90u: goto label_494e90;
        case 0x494e94u: goto label_494e94;
        case 0x494e98u: goto label_494e98;
        case 0x494e9cu: goto label_494e9c;
        case 0x494ea0u: goto label_494ea0;
        case 0x494ea4u: goto label_494ea4;
        case 0x494ea8u: goto label_494ea8;
        case 0x494eacu: goto label_494eac;
        case 0x494eb0u: goto label_494eb0;
        case 0x494eb4u: goto label_494eb4;
        case 0x494eb8u: goto label_494eb8;
        case 0x494ebcu: goto label_494ebc;
        case 0x494ec0u: goto label_494ec0;
        case 0x494ec4u: goto label_494ec4;
        case 0x494ec8u: goto label_494ec8;
        case 0x494eccu: goto label_494ecc;
        case 0x494ed0u: goto label_494ed0;
        case 0x494ed4u: goto label_494ed4;
        case 0x494ed8u: goto label_494ed8;
        case 0x494edcu: goto label_494edc;
        case 0x494ee0u: goto label_494ee0;
        case 0x494ee4u: goto label_494ee4;
        case 0x494ee8u: goto label_494ee8;
        case 0x494eecu: goto label_494eec;
        case 0x494ef0u: goto label_494ef0;
        case 0x494ef4u: goto label_494ef4;
        case 0x494ef8u: goto label_494ef8;
        case 0x494efcu: goto label_494efc;
        case 0x494f00u: goto label_494f00;
        case 0x494f04u: goto label_494f04;
        case 0x494f08u: goto label_494f08;
        case 0x494f0cu: goto label_494f0c;
        case 0x494f10u: goto label_494f10;
        case 0x494f14u: goto label_494f14;
        case 0x494f18u: goto label_494f18;
        case 0x494f1cu: goto label_494f1c;
        case 0x494f20u: goto label_494f20;
        case 0x494f24u: goto label_494f24;
        case 0x494f28u: goto label_494f28;
        case 0x494f2cu: goto label_494f2c;
        case 0x494f30u: goto label_494f30;
        case 0x494f34u: goto label_494f34;
        case 0x494f38u: goto label_494f38;
        case 0x494f3cu: goto label_494f3c;
        case 0x494f40u: goto label_494f40;
        case 0x494f44u: goto label_494f44;
        case 0x494f48u: goto label_494f48;
        case 0x494f4cu: goto label_494f4c;
        case 0x494f50u: goto label_494f50;
        case 0x494f54u: goto label_494f54;
        case 0x494f58u: goto label_494f58;
        case 0x494f5cu: goto label_494f5c;
        case 0x494f60u: goto label_494f60;
        case 0x494f64u: goto label_494f64;
        case 0x494f68u: goto label_494f68;
        case 0x494f6cu: goto label_494f6c;
        case 0x494f70u: goto label_494f70;
        case 0x494f74u: goto label_494f74;
        case 0x494f78u: goto label_494f78;
        case 0x494f7cu: goto label_494f7c;
        case 0x494f80u: goto label_494f80;
        case 0x494f84u: goto label_494f84;
        case 0x494f88u: goto label_494f88;
        case 0x494f8cu: goto label_494f8c;
        case 0x494f90u: goto label_494f90;
        case 0x494f94u: goto label_494f94;
        case 0x494f98u: goto label_494f98;
        case 0x494f9cu: goto label_494f9c;
        case 0x494fa0u: goto label_494fa0;
        case 0x494fa4u: goto label_494fa4;
        case 0x494fa8u: goto label_494fa8;
        case 0x494facu: goto label_494fac;
        case 0x494fb0u: goto label_494fb0;
        case 0x494fb4u: goto label_494fb4;
        case 0x494fb8u: goto label_494fb8;
        case 0x494fbcu: goto label_494fbc;
        case 0x494fc0u: goto label_494fc0;
        case 0x494fc4u: goto label_494fc4;
        case 0x494fc8u: goto label_494fc8;
        case 0x494fccu: goto label_494fcc;
        case 0x494fd0u: goto label_494fd0;
        case 0x494fd4u: goto label_494fd4;
        case 0x494fd8u: goto label_494fd8;
        case 0x494fdcu: goto label_494fdc;
        case 0x494fe0u: goto label_494fe0;
        case 0x494fe4u: goto label_494fe4;
        case 0x494fe8u: goto label_494fe8;
        case 0x494fecu: goto label_494fec;
        case 0x494ff0u: goto label_494ff0;
        case 0x494ff4u: goto label_494ff4;
        case 0x494ff8u: goto label_494ff8;
        case 0x494ffcu: goto label_494ffc;
        case 0x495000u: goto label_495000;
        case 0x495004u: goto label_495004;
        case 0x495008u: goto label_495008;
        case 0x49500cu: goto label_49500c;
        case 0x495010u: goto label_495010;
        case 0x495014u: goto label_495014;
        case 0x495018u: goto label_495018;
        case 0x49501cu: goto label_49501c;
        case 0x495020u: goto label_495020;
        case 0x495024u: goto label_495024;
        case 0x495028u: goto label_495028;
        case 0x49502cu: goto label_49502c;
        case 0x495030u: goto label_495030;
        case 0x495034u: goto label_495034;
        case 0x495038u: goto label_495038;
        case 0x49503cu: goto label_49503c;
        case 0x495040u: goto label_495040;
        case 0x495044u: goto label_495044;
        case 0x495048u: goto label_495048;
        case 0x49504cu: goto label_49504c;
        case 0x495050u: goto label_495050;
        case 0x495054u: goto label_495054;
        case 0x495058u: goto label_495058;
        case 0x49505cu: goto label_49505c;
        case 0x495060u: goto label_495060;
        case 0x495064u: goto label_495064;
        case 0x495068u: goto label_495068;
        case 0x49506cu: goto label_49506c;
        case 0x495070u: goto label_495070;
        case 0x495074u: goto label_495074;
        case 0x495078u: goto label_495078;
        case 0x49507cu: goto label_49507c;
        case 0x495080u: goto label_495080;
        case 0x495084u: goto label_495084;
        case 0x495088u: goto label_495088;
        case 0x49508cu: goto label_49508c;
        case 0x495090u: goto label_495090;
        case 0x495094u: goto label_495094;
        case 0x495098u: goto label_495098;
        case 0x49509cu: goto label_49509c;
        case 0x4950a0u: goto label_4950a0;
        case 0x4950a4u: goto label_4950a4;
        case 0x4950a8u: goto label_4950a8;
        case 0x4950acu: goto label_4950ac;
        case 0x4950b0u: goto label_4950b0;
        case 0x4950b4u: goto label_4950b4;
        case 0x4950b8u: goto label_4950b8;
        case 0x4950bcu: goto label_4950bc;
        case 0x4950c0u: goto label_4950c0;
        case 0x4950c4u: goto label_4950c4;
        case 0x4950c8u: goto label_4950c8;
        case 0x4950ccu: goto label_4950cc;
        case 0x4950d0u: goto label_4950d0;
        case 0x4950d4u: goto label_4950d4;
        case 0x4950d8u: goto label_4950d8;
        case 0x4950dcu: goto label_4950dc;
        case 0x4950e0u: goto label_4950e0;
        case 0x4950e4u: goto label_4950e4;
        case 0x4950e8u: goto label_4950e8;
        case 0x4950ecu: goto label_4950ec;
        case 0x4950f0u: goto label_4950f0;
        case 0x4950f4u: goto label_4950f4;
        case 0x4950f8u: goto label_4950f8;
        case 0x4950fcu: goto label_4950fc;
        case 0x495100u: goto label_495100;
        case 0x495104u: goto label_495104;
        case 0x495108u: goto label_495108;
        case 0x49510cu: goto label_49510c;
        case 0x495110u: goto label_495110;
        case 0x495114u: goto label_495114;
        case 0x495118u: goto label_495118;
        case 0x49511cu: goto label_49511c;
        case 0x495120u: goto label_495120;
        case 0x495124u: goto label_495124;
        case 0x495128u: goto label_495128;
        case 0x49512cu: goto label_49512c;
        case 0x495130u: goto label_495130;
        case 0x495134u: goto label_495134;
        case 0x495138u: goto label_495138;
        case 0x49513cu: goto label_49513c;
        case 0x495140u: goto label_495140;
        case 0x495144u: goto label_495144;
        case 0x495148u: goto label_495148;
        case 0x49514cu: goto label_49514c;
        case 0x495150u: goto label_495150;
        case 0x495154u: goto label_495154;
        case 0x495158u: goto label_495158;
        case 0x49515cu: goto label_49515c;
        case 0x495160u: goto label_495160;
        case 0x495164u: goto label_495164;
        case 0x495168u: goto label_495168;
        case 0x49516cu: goto label_49516c;
        case 0x495170u: goto label_495170;
        case 0x495174u: goto label_495174;
        case 0x495178u: goto label_495178;
        case 0x49517cu: goto label_49517c;
        case 0x495180u: goto label_495180;
        case 0x495184u: goto label_495184;
        case 0x495188u: goto label_495188;
        case 0x49518cu: goto label_49518c;
        case 0x495190u: goto label_495190;
        case 0x495194u: goto label_495194;
        case 0x495198u: goto label_495198;
        case 0x49519cu: goto label_49519c;
        case 0x4951a0u: goto label_4951a0;
        case 0x4951a4u: goto label_4951a4;
        case 0x4951a8u: goto label_4951a8;
        case 0x4951acu: goto label_4951ac;
        case 0x4951b0u: goto label_4951b0;
        case 0x4951b4u: goto label_4951b4;
        case 0x4951b8u: goto label_4951b8;
        case 0x4951bcu: goto label_4951bc;
        case 0x4951c0u: goto label_4951c0;
        case 0x4951c4u: goto label_4951c4;
        case 0x4951c8u: goto label_4951c8;
        case 0x4951ccu: goto label_4951cc;
        case 0x4951d0u: goto label_4951d0;
        case 0x4951d4u: goto label_4951d4;
        case 0x4951d8u: goto label_4951d8;
        case 0x4951dcu: goto label_4951dc;
        case 0x4951e0u: goto label_4951e0;
        case 0x4951e4u: goto label_4951e4;
        case 0x4951e8u: goto label_4951e8;
        case 0x4951ecu: goto label_4951ec;
        case 0x4951f0u: goto label_4951f0;
        case 0x4951f4u: goto label_4951f4;
        case 0x4951f8u: goto label_4951f8;
        case 0x4951fcu: goto label_4951fc;
        case 0x495200u: goto label_495200;
        case 0x495204u: goto label_495204;
        case 0x495208u: goto label_495208;
        case 0x49520cu: goto label_49520c;
        case 0x495210u: goto label_495210;
        case 0x495214u: goto label_495214;
        case 0x495218u: goto label_495218;
        case 0x49521cu: goto label_49521c;
        case 0x495220u: goto label_495220;
        case 0x495224u: goto label_495224;
        case 0x495228u: goto label_495228;
        case 0x49522cu: goto label_49522c;
        case 0x495230u: goto label_495230;
        case 0x495234u: goto label_495234;
        case 0x495238u: goto label_495238;
        case 0x49523cu: goto label_49523c;
        case 0x495240u: goto label_495240;
        case 0x495244u: goto label_495244;
        case 0x495248u: goto label_495248;
        case 0x49524cu: goto label_49524c;
        case 0x495250u: goto label_495250;
        case 0x495254u: goto label_495254;
        case 0x495258u: goto label_495258;
        case 0x49525cu: goto label_49525c;
        case 0x495260u: goto label_495260;
        case 0x495264u: goto label_495264;
        case 0x495268u: goto label_495268;
        case 0x49526cu: goto label_49526c;
        case 0x495270u: goto label_495270;
        case 0x495274u: goto label_495274;
        case 0x495278u: goto label_495278;
        case 0x49527cu: goto label_49527c;
        case 0x495280u: goto label_495280;
        case 0x495284u: goto label_495284;
        case 0x495288u: goto label_495288;
        case 0x49528cu: goto label_49528c;
        case 0x495290u: goto label_495290;
        case 0x495294u: goto label_495294;
        case 0x495298u: goto label_495298;
        case 0x49529cu: goto label_49529c;
        case 0x4952a0u: goto label_4952a0;
        case 0x4952a4u: goto label_4952a4;
        case 0x4952a8u: goto label_4952a8;
        case 0x4952acu: goto label_4952ac;
        case 0x4952b0u: goto label_4952b0;
        case 0x4952b4u: goto label_4952b4;
        case 0x4952b8u: goto label_4952b8;
        case 0x4952bcu: goto label_4952bc;
        case 0x4952c0u: goto label_4952c0;
        case 0x4952c4u: goto label_4952c4;
        case 0x4952c8u: goto label_4952c8;
        case 0x4952ccu: goto label_4952cc;
        case 0x4952d0u: goto label_4952d0;
        case 0x4952d4u: goto label_4952d4;
        case 0x4952d8u: goto label_4952d8;
        case 0x4952dcu: goto label_4952dc;
        case 0x4952e0u: goto label_4952e0;
        case 0x4952e4u: goto label_4952e4;
        case 0x4952e8u: goto label_4952e8;
        case 0x4952ecu: goto label_4952ec;
        case 0x4952f0u: goto label_4952f0;
        case 0x4952f4u: goto label_4952f4;
        case 0x4952f8u: goto label_4952f8;
        case 0x4952fcu: goto label_4952fc;
        case 0x495300u: goto label_495300;
        case 0x495304u: goto label_495304;
        case 0x495308u: goto label_495308;
        case 0x49530cu: goto label_49530c;
        case 0x495310u: goto label_495310;
        case 0x495314u: goto label_495314;
        case 0x495318u: goto label_495318;
        case 0x49531cu: goto label_49531c;
        case 0x495320u: goto label_495320;
        case 0x495324u: goto label_495324;
        case 0x495328u: goto label_495328;
        case 0x49532cu: goto label_49532c;
        case 0x495330u: goto label_495330;
        case 0x495334u: goto label_495334;
        case 0x495338u: goto label_495338;
        case 0x49533cu: goto label_49533c;
        case 0x495340u: goto label_495340;
        case 0x495344u: goto label_495344;
        case 0x495348u: goto label_495348;
        case 0x49534cu: goto label_49534c;
        case 0x495350u: goto label_495350;
        case 0x495354u: goto label_495354;
        case 0x495358u: goto label_495358;
        case 0x49535cu: goto label_49535c;
        case 0x495360u: goto label_495360;
        case 0x495364u: goto label_495364;
        case 0x495368u: goto label_495368;
        case 0x49536cu: goto label_49536c;
        case 0x495370u: goto label_495370;
        case 0x495374u: goto label_495374;
        case 0x495378u: goto label_495378;
        case 0x49537cu: goto label_49537c;
        case 0x495380u: goto label_495380;
        case 0x495384u: goto label_495384;
        case 0x495388u: goto label_495388;
        case 0x49538cu: goto label_49538c;
        case 0x495390u: goto label_495390;
        case 0x495394u: goto label_495394;
        case 0x495398u: goto label_495398;
        case 0x49539cu: goto label_49539c;
        case 0x4953a0u: goto label_4953a0;
        case 0x4953a4u: goto label_4953a4;
        case 0x4953a8u: goto label_4953a8;
        case 0x4953acu: goto label_4953ac;
        case 0x4953b0u: goto label_4953b0;
        case 0x4953b4u: goto label_4953b4;
        case 0x4953b8u: goto label_4953b8;
        case 0x4953bcu: goto label_4953bc;
        case 0x4953c0u: goto label_4953c0;
        case 0x4953c4u: goto label_4953c4;
        case 0x4953c8u: goto label_4953c8;
        case 0x4953ccu: goto label_4953cc;
        case 0x4953d0u: goto label_4953d0;
        case 0x4953d4u: goto label_4953d4;
        case 0x4953d8u: goto label_4953d8;
        case 0x4953dcu: goto label_4953dc;
        case 0x4953e0u: goto label_4953e0;
        case 0x4953e4u: goto label_4953e4;
        case 0x4953e8u: goto label_4953e8;
        case 0x4953ecu: goto label_4953ec;
        case 0x4953f0u: goto label_4953f0;
        case 0x4953f4u: goto label_4953f4;
        case 0x4953f8u: goto label_4953f8;
        case 0x4953fcu: goto label_4953fc;
        case 0x495400u: goto label_495400;
        case 0x495404u: goto label_495404;
        case 0x495408u: goto label_495408;
        case 0x49540cu: goto label_49540c;
        case 0x495410u: goto label_495410;
        case 0x495414u: goto label_495414;
        case 0x495418u: goto label_495418;
        case 0x49541cu: goto label_49541c;
        case 0x495420u: goto label_495420;
        case 0x495424u: goto label_495424;
        case 0x495428u: goto label_495428;
        case 0x49542cu: goto label_49542c;
        case 0x495430u: goto label_495430;
        case 0x495434u: goto label_495434;
        case 0x495438u: goto label_495438;
        case 0x49543cu: goto label_49543c;
        case 0x495440u: goto label_495440;
        case 0x495444u: goto label_495444;
        case 0x495448u: goto label_495448;
        case 0x49544cu: goto label_49544c;
        case 0x495450u: goto label_495450;
        case 0x495454u: goto label_495454;
        case 0x495458u: goto label_495458;
        case 0x49545cu: goto label_49545c;
        case 0x495460u: goto label_495460;
        case 0x495464u: goto label_495464;
        case 0x495468u: goto label_495468;
        case 0x49546cu: goto label_49546c;
        case 0x495470u: goto label_495470;
        case 0x495474u: goto label_495474;
        case 0x495478u: goto label_495478;
        case 0x49547cu: goto label_49547c;
        case 0x495480u: goto label_495480;
        case 0x495484u: goto label_495484;
        case 0x495488u: goto label_495488;
        case 0x49548cu: goto label_49548c;
        case 0x495490u: goto label_495490;
        case 0x495494u: goto label_495494;
        case 0x495498u: goto label_495498;
        case 0x49549cu: goto label_49549c;
        case 0x4954a0u: goto label_4954a0;
        case 0x4954a4u: goto label_4954a4;
        case 0x4954a8u: goto label_4954a8;
        case 0x4954acu: goto label_4954ac;
        case 0x4954b0u: goto label_4954b0;
        case 0x4954b4u: goto label_4954b4;
        case 0x4954b8u: goto label_4954b8;
        case 0x4954bcu: goto label_4954bc;
        case 0x4954c0u: goto label_4954c0;
        case 0x4954c4u: goto label_4954c4;
        case 0x4954c8u: goto label_4954c8;
        case 0x4954ccu: goto label_4954cc;
        case 0x4954d0u: goto label_4954d0;
        case 0x4954d4u: goto label_4954d4;
        case 0x4954d8u: goto label_4954d8;
        case 0x4954dcu: goto label_4954dc;
        case 0x4954e0u: goto label_4954e0;
        case 0x4954e4u: goto label_4954e4;
        case 0x4954e8u: goto label_4954e8;
        case 0x4954ecu: goto label_4954ec;
        case 0x4954f0u: goto label_4954f0;
        case 0x4954f4u: goto label_4954f4;
        case 0x4954f8u: goto label_4954f8;
        case 0x4954fcu: goto label_4954fc;
        case 0x495500u: goto label_495500;
        case 0x495504u: goto label_495504;
        case 0x495508u: goto label_495508;
        case 0x49550cu: goto label_49550c;
        case 0x495510u: goto label_495510;
        case 0x495514u: goto label_495514;
        case 0x495518u: goto label_495518;
        case 0x49551cu: goto label_49551c;
        case 0x495520u: goto label_495520;
        case 0x495524u: goto label_495524;
        case 0x495528u: goto label_495528;
        case 0x49552cu: goto label_49552c;
        case 0x495530u: goto label_495530;
        case 0x495534u: goto label_495534;
        case 0x495538u: goto label_495538;
        case 0x49553cu: goto label_49553c;
        case 0x495540u: goto label_495540;
        case 0x495544u: goto label_495544;
        case 0x495548u: goto label_495548;
        case 0x49554cu: goto label_49554c;
        case 0x495550u: goto label_495550;
        case 0x495554u: goto label_495554;
        case 0x495558u: goto label_495558;
        case 0x49555cu: goto label_49555c;
        case 0x495560u: goto label_495560;
        case 0x495564u: goto label_495564;
        case 0x495568u: goto label_495568;
        case 0x49556cu: goto label_49556c;
        case 0x495570u: goto label_495570;
        case 0x495574u: goto label_495574;
        case 0x495578u: goto label_495578;
        case 0x49557cu: goto label_49557c;
        case 0x495580u: goto label_495580;
        case 0x495584u: goto label_495584;
        case 0x495588u: goto label_495588;
        case 0x49558cu: goto label_49558c;
        case 0x495590u: goto label_495590;
        case 0x495594u: goto label_495594;
        case 0x495598u: goto label_495598;
        case 0x49559cu: goto label_49559c;
        case 0x4955a0u: goto label_4955a0;
        case 0x4955a4u: goto label_4955a4;
        case 0x4955a8u: goto label_4955a8;
        case 0x4955acu: goto label_4955ac;
        case 0x4955b0u: goto label_4955b0;
        case 0x4955b4u: goto label_4955b4;
        case 0x4955b8u: goto label_4955b8;
        case 0x4955bcu: goto label_4955bc;
        case 0x4955c0u: goto label_4955c0;
        case 0x4955c4u: goto label_4955c4;
        case 0x4955c8u: goto label_4955c8;
        case 0x4955ccu: goto label_4955cc;
        case 0x4955d0u: goto label_4955d0;
        case 0x4955d4u: goto label_4955d4;
        case 0x4955d8u: goto label_4955d8;
        case 0x4955dcu: goto label_4955dc;
        case 0x4955e0u: goto label_4955e0;
        case 0x4955e4u: goto label_4955e4;
        case 0x4955e8u: goto label_4955e8;
        case 0x4955ecu: goto label_4955ec;
        case 0x4955f0u: goto label_4955f0;
        case 0x4955f4u: goto label_4955f4;
        case 0x4955f8u: goto label_4955f8;
        case 0x4955fcu: goto label_4955fc;
        case 0x495600u: goto label_495600;
        case 0x495604u: goto label_495604;
        case 0x495608u: goto label_495608;
        case 0x49560cu: goto label_49560c;
        case 0x495610u: goto label_495610;
        case 0x495614u: goto label_495614;
        case 0x495618u: goto label_495618;
        case 0x49561cu: goto label_49561c;
        case 0x495620u: goto label_495620;
        case 0x495624u: goto label_495624;
        case 0x495628u: goto label_495628;
        case 0x49562cu: goto label_49562c;
        case 0x495630u: goto label_495630;
        case 0x495634u: goto label_495634;
        case 0x495638u: goto label_495638;
        case 0x49563cu: goto label_49563c;
        case 0x495640u: goto label_495640;
        case 0x495644u: goto label_495644;
        case 0x495648u: goto label_495648;
        case 0x49564cu: goto label_49564c;
        case 0x495650u: goto label_495650;
        case 0x495654u: goto label_495654;
        case 0x495658u: goto label_495658;
        case 0x49565cu: goto label_49565c;
        case 0x495660u: goto label_495660;
        case 0x495664u: goto label_495664;
        case 0x495668u: goto label_495668;
        case 0x49566cu: goto label_49566c;
        case 0x495670u: goto label_495670;
        case 0x495674u: goto label_495674;
        case 0x495678u: goto label_495678;
        case 0x49567cu: goto label_49567c;
        case 0x495680u: goto label_495680;
        case 0x495684u: goto label_495684;
        case 0x495688u: goto label_495688;
        case 0x49568cu: goto label_49568c;
        case 0x495690u: goto label_495690;
        case 0x495694u: goto label_495694;
        case 0x495698u: goto label_495698;
        case 0x49569cu: goto label_49569c;
        case 0x4956a0u: goto label_4956a0;
        case 0x4956a4u: goto label_4956a4;
        case 0x4956a8u: goto label_4956a8;
        case 0x4956acu: goto label_4956ac;
        case 0x4956b0u: goto label_4956b0;
        case 0x4956b4u: goto label_4956b4;
        case 0x4956b8u: goto label_4956b8;
        case 0x4956bcu: goto label_4956bc;
        case 0x4956c0u: goto label_4956c0;
        case 0x4956c4u: goto label_4956c4;
        case 0x4956c8u: goto label_4956c8;
        case 0x4956ccu: goto label_4956cc;
        case 0x4956d0u: goto label_4956d0;
        case 0x4956d4u: goto label_4956d4;
        case 0x4956d8u: goto label_4956d8;
        case 0x4956dcu: goto label_4956dc;
        case 0x4956e0u: goto label_4956e0;
        case 0x4956e4u: goto label_4956e4;
        case 0x4956e8u: goto label_4956e8;
        case 0x4956ecu: goto label_4956ec;
        case 0x4956f0u: goto label_4956f0;
        case 0x4956f4u: goto label_4956f4;
        case 0x4956f8u: goto label_4956f8;
        case 0x4956fcu: goto label_4956fc;
        case 0x495700u: goto label_495700;
        case 0x495704u: goto label_495704;
        case 0x495708u: goto label_495708;
        case 0x49570cu: goto label_49570c;
        case 0x495710u: goto label_495710;
        case 0x495714u: goto label_495714;
        case 0x495718u: goto label_495718;
        case 0x49571cu: goto label_49571c;
        case 0x495720u: goto label_495720;
        case 0x495724u: goto label_495724;
        case 0x495728u: goto label_495728;
        case 0x49572cu: goto label_49572c;
        case 0x495730u: goto label_495730;
        case 0x495734u: goto label_495734;
        case 0x495738u: goto label_495738;
        case 0x49573cu: goto label_49573c;
        case 0x495740u: goto label_495740;
        case 0x495744u: goto label_495744;
        case 0x495748u: goto label_495748;
        case 0x49574cu: goto label_49574c;
        case 0x495750u: goto label_495750;
        case 0x495754u: goto label_495754;
        case 0x495758u: goto label_495758;
        case 0x49575cu: goto label_49575c;
        case 0x495760u: goto label_495760;
        case 0x495764u: goto label_495764;
        case 0x495768u: goto label_495768;
        case 0x49576cu: goto label_49576c;
        case 0x495770u: goto label_495770;
        case 0x495774u: goto label_495774;
        case 0x495778u: goto label_495778;
        case 0x49577cu: goto label_49577c;
        case 0x495780u: goto label_495780;
        case 0x495784u: goto label_495784;
        case 0x495788u: goto label_495788;
        case 0x49578cu: goto label_49578c;
        case 0x495790u: goto label_495790;
        case 0x495794u: goto label_495794;
        case 0x495798u: goto label_495798;
        case 0x49579cu: goto label_49579c;
        case 0x4957a0u: goto label_4957a0;
        case 0x4957a4u: goto label_4957a4;
        case 0x4957a8u: goto label_4957a8;
        case 0x4957acu: goto label_4957ac;
        case 0x4957b0u: goto label_4957b0;
        case 0x4957b4u: goto label_4957b4;
        case 0x4957b8u: goto label_4957b8;
        case 0x4957bcu: goto label_4957bc;
        case 0x4957c0u: goto label_4957c0;
        case 0x4957c4u: goto label_4957c4;
        case 0x4957c8u: goto label_4957c8;
        case 0x4957ccu: goto label_4957cc;
        case 0x4957d0u: goto label_4957d0;
        case 0x4957d4u: goto label_4957d4;
        case 0x4957d8u: goto label_4957d8;
        case 0x4957dcu: goto label_4957dc;
        case 0x4957e0u: goto label_4957e0;
        case 0x4957e4u: goto label_4957e4;
        case 0x4957e8u: goto label_4957e8;
        case 0x4957ecu: goto label_4957ec;
        case 0x4957f0u: goto label_4957f0;
        case 0x4957f4u: goto label_4957f4;
        case 0x4957f8u: goto label_4957f8;
        case 0x4957fcu: goto label_4957fc;
        case 0x495800u: goto label_495800;
        case 0x495804u: goto label_495804;
        case 0x495808u: goto label_495808;
        case 0x49580cu: goto label_49580c;
        case 0x495810u: goto label_495810;
        case 0x495814u: goto label_495814;
        case 0x495818u: goto label_495818;
        case 0x49581cu: goto label_49581c;
        case 0x495820u: goto label_495820;
        case 0x495824u: goto label_495824;
        case 0x495828u: goto label_495828;
        case 0x49582cu: goto label_49582c;
        case 0x495830u: goto label_495830;
        case 0x495834u: goto label_495834;
        case 0x495838u: goto label_495838;
        case 0x49583cu: goto label_49583c;
        case 0x495840u: goto label_495840;
        case 0x495844u: goto label_495844;
        case 0x495848u: goto label_495848;
        case 0x49584cu: goto label_49584c;
        case 0x495850u: goto label_495850;
        case 0x495854u: goto label_495854;
        case 0x495858u: goto label_495858;
        case 0x49585cu: goto label_49585c;
        case 0x495860u: goto label_495860;
        case 0x495864u: goto label_495864;
        case 0x495868u: goto label_495868;
        case 0x49586cu: goto label_49586c;
        case 0x495870u: goto label_495870;
        case 0x495874u: goto label_495874;
        case 0x495878u: goto label_495878;
        case 0x49587cu: goto label_49587c;
        case 0x495880u: goto label_495880;
        case 0x495884u: goto label_495884;
        case 0x495888u: goto label_495888;
        case 0x49588cu: goto label_49588c;
        case 0x495890u: goto label_495890;
        case 0x495894u: goto label_495894;
        case 0x495898u: goto label_495898;
        case 0x49589cu: goto label_49589c;
        case 0x4958a0u: goto label_4958a0;
        case 0x4958a4u: goto label_4958a4;
        case 0x4958a8u: goto label_4958a8;
        case 0x4958acu: goto label_4958ac;
        case 0x4958b0u: goto label_4958b0;
        case 0x4958b4u: goto label_4958b4;
        case 0x4958b8u: goto label_4958b8;
        case 0x4958bcu: goto label_4958bc;
        case 0x4958c0u: goto label_4958c0;
        case 0x4958c4u: goto label_4958c4;
        case 0x4958c8u: goto label_4958c8;
        case 0x4958ccu: goto label_4958cc;
        case 0x4958d0u: goto label_4958d0;
        case 0x4958d4u: goto label_4958d4;
        case 0x4958d8u: goto label_4958d8;
        case 0x4958dcu: goto label_4958dc;
        case 0x4958e0u: goto label_4958e0;
        case 0x4958e4u: goto label_4958e4;
        case 0x4958e8u: goto label_4958e8;
        case 0x4958ecu: goto label_4958ec;
        case 0x4958f0u: goto label_4958f0;
        case 0x4958f4u: goto label_4958f4;
        case 0x4958f8u: goto label_4958f8;
        case 0x4958fcu: goto label_4958fc;
        case 0x495900u: goto label_495900;
        case 0x495904u: goto label_495904;
        case 0x495908u: goto label_495908;
        case 0x49590cu: goto label_49590c;
        case 0x495910u: goto label_495910;
        case 0x495914u: goto label_495914;
        case 0x495918u: goto label_495918;
        case 0x49591cu: goto label_49591c;
        case 0x495920u: goto label_495920;
        case 0x495924u: goto label_495924;
        case 0x495928u: goto label_495928;
        case 0x49592cu: goto label_49592c;
        case 0x495930u: goto label_495930;
        case 0x495934u: goto label_495934;
        case 0x495938u: goto label_495938;
        case 0x49593cu: goto label_49593c;
        case 0x495940u: goto label_495940;
        case 0x495944u: goto label_495944;
        case 0x495948u: goto label_495948;
        case 0x49594cu: goto label_49594c;
        case 0x495950u: goto label_495950;
        case 0x495954u: goto label_495954;
        case 0x495958u: goto label_495958;
        case 0x49595cu: goto label_49595c;
        case 0x495960u: goto label_495960;
        case 0x495964u: goto label_495964;
        case 0x495968u: goto label_495968;
        case 0x49596cu: goto label_49596c;
        case 0x495970u: goto label_495970;
        case 0x495974u: goto label_495974;
        case 0x495978u: goto label_495978;
        case 0x49597cu: goto label_49597c;
        case 0x495980u: goto label_495980;
        case 0x495984u: goto label_495984;
        case 0x495988u: goto label_495988;
        case 0x49598cu: goto label_49598c;
        case 0x495990u: goto label_495990;
        case 0x495994u: goto label_495994;
        case 0x495998u: goto label_495998;
        case 0x49599cu: goto label_49599c;
        case 0x4959a0u: goto label_4959a0;
        case 0x4959a4u: goto label_4959a4;
        case 0x4959a8u: goto label_4959a8;
        case 0x4959acu: goto label_4959ac;
        case 0x4959b0u: goto label_4959b0;
        case 0x4959b4u: goto label_4959b4;
        case 0x4959b8u: goto label_4959b8;
        case 0x4959bcu: goto label_4959bc;
        case 0x4959c0u: goto label_4959c0;
        case 0x4959c4u: goto label_4959c4;
        case 0x4959c8u: goto label_4959c8;
        case 0x4959ccu: goto label_4959cc;
        case 0x4959d0u: goto label_4959d0;
        case 0x4959d4u: goto label_4959d4;
        case 0x4959d8u: goto label_4959d8;
        case 0x4959dcu: goto label_4959dc;
        case 0x4959e0u: goto label_4959e0;
        case 0x4959e4u: goto label_4959e4;
        case 0x4959e8u: goto label_4959e8;
        case 0x4959ecu: goto label_4959ec;
        case 0x4959f0u: goto label_4959f0;
        case 0x4959f4u: goto label_4959f4;
        case 0x4959f8u: goto label_4959f8;
        case 0x4959fcu: goto label_4959fc;
        case 0x495a00u: goto label_495a00;
        case 0x495a04u: goto label_495a04;
        case 0x495a08u: goto label_495a08;
        case 0x495a0cu: goto label_495a0c;
        case 0x495a10u: goto label_495a10;
        case 0x495a14u: goto label_495a14;
        case 0x495a18u: goto label_495a18;
        case 0x495a1cu: goto label_495a1c;
        case 0x495a20u: goto label_495a20;
        case 0x495a24u: goto label_495a24;
        case 0x495a28u: goto label_495a28;
        case 0x495a2cu: goto label_495a2c;
        case 0x495a30u: goto label_495a30;
        case 0x495a34u: goto label_495a34;
        case 0x495a38u: goto label_495a38;
        case 0x495a3cu: goto label_495a3c;
        default: break;
    }

    ctx->pc = 0x494bf0u;

label_494bf0:
    // 0x494bf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x494bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_494bf4:
    // 0x494bf4: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x494bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_494bf8:
    // 0x494bf8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x494bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_494bfc:
    // 0x494bfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x494bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_494c00:
    // 0x494c00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x494c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_494c04:
    // 0x494c04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x494c04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_494c08:
    // 0x494c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x494c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_494c0c:
    // 0x494c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x494c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_494c10:
    // 0x494c10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x494c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_494c14:
    // 0x494c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x494c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_494c18:
    // 0x494c18: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x494c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_494c1c:
    // 0x494c1c: 0x10e300c2  beq         $a3, $v1, . + 4 + (0xC2 << 2)
label_494c20:
    if (ctx->pc == 0x494C20u) {
        ctx->pc = 0x494C20u;
            // 0x494c20: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494C24u;
        goto label_494c24;
    }
    ctx->pc = 0x494C1Cu;
    {
        const bool branch_taken_0x494c1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x494C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494C1Cu;
            // 0x494c20: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494c1c) {
            ctx->pc = 0x494F28u;
            goto label_494f28;
        }
    }
    ctx->pc = 0x494C24u;
label_494c24:
    // 0x494c24: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x494c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_494c28:
    // 0x494c28: 0x50e300b6  beql        $a3, $v1, . + 4 + (0xB6 << 2)
label_494c2c:
    if (ctx->pc == 0x494C2Cu) {
        ctx->pc = 0x494C2Cu;
            // 0x494c2c: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->pc = 0x494C30u;
        goto label_494c30;
    }
    ctx->pc = 0x494C28u;
    {
        const bool branch_taken_0x494c28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x494c28) {
            ctx->pc = 0x494C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494C28u;
            // 0x494c2c: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494F04u;
            goto label_494f04;
        }
    }
    ctx->pc = 0x494C30u;
label_494c30:
    // 0x494c30: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x494c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_494c34:
    // 0x494c34: 0x50e300cb  beql        $a3, $v1, . + 4 + (0xCB << 2)
label_494c38:
    if (ctx->pc == 0x494C38u) {
        ctx->pc = 0x494C38u;
            // 0x494c38: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x494C3Cu;
        goto label_494c3c;
    }
    ctx->pc = 0x494C34u;
    {
        const bool branch_taken_0x494c34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x494c34) {
            ctx->pc = 0x494C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494C34u;
            // 0x494c38: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494F64u;
            goto label_494f64;
        }
    }
    ctx->pc = 0x494C3Cu;
label_494c3c:
    // 0x494c3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x494c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494c40:
    // 0x494c40: 0x10e500c7  beq         $a3, $a1, . + 4 + (0xC7 << 2)
label_494c44:
    if (ctx->pc == 0x494C44u) {
        ctx->pc = 0x494C48u;
        goto label_494c48;
    }
    ctx->pc = 0x494C40u;
    {
        const bool branch_taken_0x494c40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x494c40) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494C48u;
label_494c48:
    // 0x494c48: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x494c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_494c4c:
    // 0x494c4c: 0x50e30087  beql        $a3, $v1, . + 4 + (0x87 << 2)
label_494c50:
    if (ctx->pc == 0x494C50u) {
        ctx->pc = 0x494C50u;
            // 0x494c50: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->pc = 0x494C54u;
        goto label_494c54;
    }
    ctx->pc = 0x494C4Cu;
    {
        const bool branch_taken_0x494c4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x494c4c) {
            ctx->pc = 0x494C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494C4Cu;
            // 0x494c50: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494E6Cu;
            goto label_494e6c;
        }
    }
    ctx->pc = 0x494C54u;
label_494c54:
    // 0x494c54: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x494c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_494c58:
    // 0x494c58: 0x50e30007  beql        $a3, $v1, . + 4 + (0x7 << 2)
label_494c5c:
    if (ctx->pc == 0x494C5Cu) {
        ctx->pc = 0x494C5Cu;
            // 0x494c5c: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->pc = 0x494C60u;
        goto label_494c60;
    }
    ctx->pc = 0x494C58u;
    {
        const bool branch_taken_0x494c58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x494c58) {
            ctx->pc = 0x494C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494C58u;
            // 0x494c5c: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494C78u;
            goto label_494c78;
        }
    }
    ctx->pc = 0x494C60u;
label_494c60:
    // 0x494c60: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x494c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_494c64:
    // 0x494c64: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
label_494c68:
    if (ctx->pc == 0x494C68u) {
        ctx->pc = 0x494C6Cu;
        goto label_494c6c;
    }
    ctx->pc = 0x494C64u;
    {
        const bool branch_taken_0x494c64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x494c64) {
            ctx->pc = 0x494C74u;
            goto label_494c74;
        }
    }
    ctx->pc = 0x494C6Cu;
label_494c6c:
    // 0x494c6c: 0x100000bc  b           . + 4 + (0xBC << 2)
label_494c70:
    if (ctx->pc == 0x494C70u) {
        ctx->pc = 0x494C74u;
        goto label_494c74;
    }
    ctx->pc = 0x494C6Cu;
    {
        const bool branch_taken_0x494c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494c6c) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494C74u;
label_494c74:
    // 0x494c74: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x494c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_494c78:
    // 0x494c78: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
label_494c7c:
    if (ctx->pc == 0x494C7Cu) {
        ctx->pc = 0x494C7Cu;
            // 0x494c7c: 0x8cd10008  lw          $s1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->pc = 0x494C80u;
        goto label_494c80;
    }
    ctx->pc = 0x494C78u;
    {
        const bool branch_taken_0x494c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x494C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494C78u;
            // 0x494c7c: 0x8cd10008  lw          $s1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494c78) {
            ctx->pc = 0x494D88u;
            goto label_494d88;
        }
    }
    ctx->pc = 0x494C80u;
label_494c80:
    // 0x494c80: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x494c80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_494c84:
    // 0x494c84: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
label_494c88:
    if (ctx->pc == 0x494C88u) {
        ctx->pc = 0x494C88u;
            // 0x494c88: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->pc = 0x494C8Cu;
        goto label_494c8c;
    }
    ctx->pc = 0x494C84u;
    {
        const bool branch_taken_0x494c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x494c84) {
            ctx->pc = 0x494C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494C84u;
            // 0x494c88: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494D48u;
            goto label_494d48;
        }
    }
    ctx->pc = 0x494C8Cu;
label_494c8c:
    // 0x494c8c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x494c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_494c90:
    // 0x494c90: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_494c94:
    if (ctx->pc == 0x494C94u) {
        ctx->pc = 0x494C98u;
        goto label_494c98;
    }
    ctx->pc = 0x494C90u;
    {
        const bool branch_taken_0x494c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x494c90) {
            ctx->pc = 0x494D44u;
            goto label_494d44;
        }
    }
    ctx->pc = 0x494C98u;
label_494c98:
    // 0x494c98: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_494c9c:
    if (ctx->pc == 0x494C9Cu) {
        ctx->pc = 0x494C9Cu;
            // 0x494c9c: 0x8e820034  lw          $v0, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->pc = 0x494CA0u;
        goto label_494ca0;
    }
    ctx->pc = 0x494C98u;
    {
        const bool branch_taken_0x494c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494c98) {
            ctx->pc = 0x494C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494C98u;
            // 0x494c9c: 0x8e820034  lw          $v0, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494CB4u;
            goto label_494cb4;
        }
    }
    ctx->pc = 0x494CA0u;
label_494ca0:
    // 0x494ca0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494ca4:
    // 0x494ca4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x494ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_494ca8:
    // 0x494ca8: 0x320f809  jalr        $t9
label_494cac:
    if (ctx->pc == 0x494CACu) {
        ctx->pc = 0x494CACu;
            // 0x494cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x494CB0u;
        goto label_494cb0;
    }
    ctx->pc = 0x494CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494CB0u);
        ctx->pc = 0x494CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494CA8u;
            // 0x494cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494CB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494CB0u; }
            if (ctx->pc != 0x494CB0u) { return; }
        }
        }
    }
    ctx->pc = 0x494CB0u;
label_494cb0:
    // 0x494cb0: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x494cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_494cb4:
    // 0x494cb4: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x494cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_494cb8:
    // 0x494cb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x494cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_494cbc:
    // 0x494cbc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x494cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_494cc0:
    // 0x494cc0: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x494cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_494cc4:
    // 0x494cc4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x494cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_494cc8:
    // 0x494cc8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x494cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_494ccc:
    // 0x494ccc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_494cd0:
    if (ctx->pc == 0x494CD0u) {
        ctx->pc = 0x494CD0u;
            // 0x494cd0: 0x96300000  lhu         $s0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x494CD4u;
        goto label_494cd4;
    }
    ctx->pc = 0x494CCCu;
    {
        const bool branch_taken_0x494ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494CCCu;
            // 0x494cd0: 0x96300000  lhu         $s0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494ccc) {
            ctx->pc = 0x494D18u;
            goto label_494d18;
        }
    }
    ctx->pc = 0x494CD4u;
label_494cd4:
    // 0x494cd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x494cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_494cd8:
    // 0x494cd8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x494cd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_494cdc:
    // 0x494cdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x494cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_494ce0:
    // 0x494ce0: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
label_494ce4:
    if (ctx->pc == 0x494CE4u) {
        ctx->pc = 0x494CE4u;
            // 0x494ce4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x494CE8u;
        goto label_494ce8;
    }
    ctx->pc = 0x494CE0u;
    {
        const bool branch_taken_0x494ce0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x494ce0) {
            ctx->pc = 0x494CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494CE0u;
            // 0x494ce4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494D04u;
            goto label_494d04;
        }
    }
    ctx->pc = 0x494CE8u;
label_494ce8:
    // 0x494ce8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x494ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_494cec:
    // 0x494cec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494cf0:
    // 0x494cf0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x494cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_494cf4:
    // 0x494cf4: 0x320f809  jalr        $t9
label_494cf8:
    if (ctx->pc == 0x494CF8u) {
        ctx->pc = 0x494CFCu;
        goto label_494cfc;
    }
    ctx->pc = 0x494CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494CFCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x494CFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494CFCu; }
            if (ctx->pc != 0x494CFCu) { return; }
        }
        }
    }
    ctx->pc = 0x494CFCu;
label_494cfc:
    // 0x494cfc: 0x10000010  b           . + 4 + (0x10 << 2)
label_494d00:
    if (ctx->pc == 0x494D00u) {
        ctx->pc = 0x494D00u;
            // 0x494d00: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x494D04u;
        goto label_494d04;
    }
    ctx->pc = 0x494CFCu;
    {
        const bool branch_taken_0x494cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494CFCu;
            // 0x494d00: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494cfc) {
            ctx->pc = 0x494D40u;
            goto label_494d40;
        }
    }
    ctx->pc = 0x494D04u;
label_494d04:
    // 0x494d04: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x494d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_494d08:
    // 0x494d08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x494d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_494d0c:
    // 0x494d0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x494d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_494d10:
    // 0x494d10: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_494d14:
    if (ctx->pc == 0x494D14u) {
        ctx->pc = 0x494D14u;
            // 0x494d14: 0x3183c  dsll32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x494D18u;
        goto label_494d18;
    }
    ctx->pc = 0x494D10u;
    {
        const bool branch_taken_0x494d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494d10) {
            ctx->pc = 0x494D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494D10u;
            // 0x494d14: 0x3183c  dsll32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_494cd8;
        }
    }
    ctx->pc = 0x494D18u;
label_494d18:
    // 0x494d18: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x494d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_494d1c:
    // 0x494d1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x494d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_494d20:
    // 0x494d20: 0xc12398c  jal         func_48E630
label_494d24:
    if (ctx->pc == 0x494D24u) {
        ctx->pc = 0x494D24u;
            // 0x494d24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494D28u;
        goto label_494d28;
    }
    ctx->pc = 0x494D20u;
    SET_GPR_U32(ctx, 31, 0x494D28u);
    ctx->pc = 0x494D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494D20u;
            // 0x494d24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E630u;
    if (runtime->hasFunction(0x48E630u)) {
        auto targetFn = runtime->lookupFunction(0x48E630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494D28u; }
        if (ctx->pc != 0x494D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E630_0x48e630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494D28u; }
        if (ctx->pc != 0x494D28u) { return; }
    }
    ctx->pc = 0x494D28u;
label_494d28:
    // 0x494d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_494d2c:
    if (ctx->pc == 0x494D2Cu) {
        ctx->pc = 0x494D30u;
        goto label_494d30;
    }
    ctx->pc = 0x494D28u;
    {
        const bool branch_taken_0x494d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494d28) {
            ctx->pc = 0x494D40u;
            goto label_494d40;
        }
    }
    ctx->pc = 0x494D30u;
label_494d30:
    // 0x494d30: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x494d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494d34:
    // 0x494d34: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x494d34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_494d38:
    // 0x494d38: 0x320f809  jalr        $t9
label_494d3c:
    if (ctx->pc == 0x494D3Cu) {
        ctx->pc = 0x494D3Cu;
            // 0x494d3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494D40u;
        goto label_494d40;
    }
    ctx->pc = 0x494D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494D40u);
        ctx->pc = 0x494D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494D38u;
            // 0x494d3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494D40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494D40u; }
            if (ctx->pc != 0x494D40u) { return; }
        }
        }
    }
    ctx->pc = 0x494D40u;
label_494d40:
    // 0x494d40: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x494d40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_494d44:
    // 0x494d44: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x494d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_494d48:
    // 0x494d48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x494d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494d4c:
    // 0x494d4c: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x494d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
label_494d50:
    // 0x494d50: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x494d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_494d54:
    // 0x494d54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494d58:
    // 0x494d58: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x494d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_494d5c:
    // 0x494d5c: 0x320f809  jalr        $t9
label_494d60:
    if (ctx->pc == 0x494D60u) {
        ctx->pc = 0x494D60u;
            // 0x494d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494D64u;
        goto label_494d64;
    }
    ctx->pc = 0x494D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494D64u);
        ctx->pc = 0x494D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494D5Cu;
            // 0x494d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494D64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494D64u; }
            if (ctx->pc != 0x494D64u) { return; }
        }
        }
    }
    ctx->pc = 0x494D64u;
label_494d64:
    // 0x494d64: 0x1240007e  beqz        $s2, . + 4 + (0x7E << 2)
label_494d68:
    if (ctx->pc == 0x494D68u) {
        ctx->pc = 0x494D6Cu;
        goto label_494d6c;
    }
    ctx->pc = 0x494D64u;
    {
        const bool branch_taken_0x494d64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x494d64) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494D6Cu;
label_494d6c:
    // 0x494d6c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x494d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_494d70:
    // 0x494d70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494d74:
    // 0x494d74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x494d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_494d78:
    // 0x494d78: 0x320f809  jalr        $t9
label_494d7c:
    if (ctx->pc == 0x494D7Cu) {
        ctx->pc = 0x494D7Cu;
            // 0x494d7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494D80u;
        goto label_494d80;
    }
    ctx->pc = 0x494D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494D80u);
        ctx->pc = 0x494D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494D78u;
            // 0x494d7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494D80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494D80u; }
            if (ctx->pc != 0x494D80u) { return; }
        }
        }
    }
    ctx->pc = 0x494D80u;
label_494d80:
    // 0x494d80: 0x10000077  b           . + 4 + (0x77 << 2)
label_494d84:
    if (ctx->pc == 0x494D84u) {
        ctx->pc = 0x494D88u;
        goto label_494d88;
    }
    ctx->pc = 0x494D80u;
    {
        const bool branch_taken_0x494d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494d80) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494D88u;
label_494d88:
    // 0x494d88: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x494d88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_494d8c:
    // 0x494d8c: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
label_494d90:
    if (ctx->pc == 0x494D90u) {
        ctx->pc = 0x494D94u;
        goto label_494d94;
    }
    ctx->pc = 0x494D8Cu;
    {
        const bool branch_taken_0x494d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x494d8c) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494D94u;
label_494d94:
    // 0x494d94: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x494d94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_494d98:
    // 0x494d98: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x494d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_494d9c:
    // 0x494d9c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x494d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_494da0:
    // 0x494da0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x494da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_494da4:
    // 0x494da4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x494da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_494da8:
    // 0x494da8: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x494da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_494dac:
    // 0x494dac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x494dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_494db0:
    // 0x494db0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x494db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_494db4:
    // 0x494db4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_494db8:
    if (ctx->pc == 0x494DB8u) {
        ctx->pc = 0x494DBCu;
        goto label_494dbc;
    }
    ctx->pc = 0x494DB4u;
    {
        const bool branch_taken_0x494db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494db4) {
            ctx->pc = 0x494E00u;
            goto label_494e00;
        }
    }
    ctx->pc = 0x494DBCu;
label_494dbc:
    // 0x494dbc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x494dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_494dc0:
    // 0x494dc0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x494dc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_494dc4:
    // 0x494dc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x494dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_494dc8:
    // 0x494dc8: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
label_494dcc:
    if (ctx->pc == 0x494DCCu) {
        ctx->pc = 0x494DCCu;
            // 0x494dcc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x494DD0u;
        goto label_494dd0;
    }
    ctx->pc = 0x494DC8u;
    {
        const bool branch_taken_0x494dc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x494dc8) {
            ctx->pc = 0x494DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494DC8u;
            // 0x494dcc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494DECu;
            goto label_494dec;
        }
    }
    ctx->pc = 0x494DD0u;
label_494dd0:
    // 0x494dd0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x494dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_494dd4:
    // 0x494dd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494dd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494dd8:
    // 0x494dd8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x494dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_494ddc:
    // 0x494ddc: 0x320f809  jalr        $t9
label_494de0:
    if (ctx->pc == 0x494DE0u) {
        ctx->pc = 0x494DE4u;
        goto label_494de4;
    }
    ctx->pc = 0x494DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494DE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x494DE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494DE4u; }
            if (ctx->pc != 0x494DE4u) { return; }
        }
        }
    }
    ctx->pc = 0x494DE4u;
label_494de4:
    // 0x494de4: 0x10000010  b           . + 4 + (0x10 << 2)
label_494de8:
    if (ctx->pc == 0x494DE8u) {
        ctx->pc = 0x494DE8u;
            // 0x494de8: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x494DECu;
        goto label_494dec;
    }
    ctx->pc = 0x494DE4u;
    {
        const bool branch_taken_0x494de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494DE4u;
            // 0x494de8: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494de4) {
            ctx->pc = 0x494E28u;
            goto label_494e28;
        }
    }
    ctx->pc = 0x494DECu;
label_494dec:
    // 0x494dec: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x494decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_494df0:
    // 0x494df0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x494df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_494df4:
    // 0x494df4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x494df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_494df8:
    // 0x494df8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_494dfc:
    if (ctx->pc == 0x494DFCu) {
        ctx->pc = 0x494DFCu;
            // 0x494dfc: 0x3183c  dsll32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x494E00u;
        goto label_494e00;
    }
    ctx->pc = 0x494DF8u;
    {
        const bool branch_taken_0x494df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494df8) {
            ctx->pc = 0x494DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494DF8u;
            // 0x494dfc: 0x3183c  dsll32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_494dc0;
        }
    }
    ctx->pc = 0x494E00u;
label_494e00:
    // 0x494e00: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x494e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_494e04:
    // 0x494e04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x494e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_494e08:
    // 0x494e08: 0xc12398c  jal         func_48E630
label_494e0c:
    if (ctx->pc == 0x494E0Cu) {
        ctx->pc = 0x494E0Cu;
            // 0x494e0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494E10u;
        goto label_494e10;
    }
    ctx->pc = 0x494E08u;
    SET_GPR_U32(ctx, 31, 0x494E10u);
    ctx->pc = 0x494E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494E08u;
            // 0x494e0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E630u;
    if (runtime->hasFunction(0x48E630u)) {
        auto targetFn = runtime->lookupFunction(0x48E630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494E10u; }
        if (ctx->pc != 0x494E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E630_0x48e630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494E10u; }
        if (ctx->pc != 0x494E10u) { return; }
    }
    ctx->pc = 0x494E10u;
label_494e10:
    // 0x494e10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_494e14:
    if (ctx->pc == 0x494E14u) {
        ctx->pc = 0x494E18u;
        goto label_494e18;
    }
    ctx->pc = 0x494E10u;
    {
        const bool branch_taken_0x494e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494e10) {
            ctx->pc = 0x494E28u;
            goto label_494e28;
        }
    }
    ctx->pc = 0x494E18u;
label_494e18:
    // 0x494e18: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x494e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494e1c:
    // 0x494e1c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x494e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_494e20:
    // 0x494e20: 0x320f809  jalr        $t9
label_494e24:
    if (ctx->pc == 0x494E24u) {
        ctx->pc = 0x494E24u;
            // 0x494e24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494E28u;
        goto label_494e28;
    }
    ctx->pc = 0x494E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494E28u);
        ctx->pc = 0x494E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494E20u;
            // 0x494e24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494E28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494E28u; }
            if (ctx->pc != 0x494E28u) { return; }
        }
        }
    }
    ctx->pc = 0x494E28u;
label_494e28:
    // 0x494e28: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x494e28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_494e2c:
    // 0x494e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x494e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494e30:
    // 0x494e30: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x494e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
label_494e34:
    // 0x494e34: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x494e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_494e38:
    // 0x494e38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494e3c:
    // 0x494e3c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x494e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_494e40:
    // 0x494e40: 0x320f809  jalr        $t9
label_494e44:
    if (ctx->pc == 0x494E44u) {
        ctx->pc = 0x494E44u;
            // 0x494e44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494E48u;
        goto label_494e48;
    }
    ctx->pc = 0x494E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494E48u);
        ctx->pc = 0x494E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494E40u;
            // 0x494e44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494E48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494E48u; }
            if (ctx->pc != 0x494E48u) { return; }
        }
        }
    }
    ctx->pc = 0x494E48u;
label_494e48:
    // 0x494e48: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
label_494e4c:
    if (ctx->pc == 0x494E4Cu) {
        ctx->pc = 0x494E50u;
        goto label_494e50;
    }
    ctx->pc = 0x494E48u;
    {
        const bool branch_taken_0x494e48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x494e48) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494E50u;
label_494e50:
    // 0x494e50: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x494e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_494e54:
    // 0x494e54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494e58:
    // 0x494e58: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x494e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_494e5c:
    // 0x494e5c: 0x320f809  jalr        $t9
label_494e60:
    if (ctx->pc == 0x494E60u) {
        ctx->pc = 0x494E60u;
            // 0x494e60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494E64u;
        goto label_494e64;
    }
    ctx->pc = 0x494E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494E64u);
        ctx->pc = 0x494E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494E5Cu;
            // 0x494e60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494E64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494E64u; }
            if (ctx->pc != 0x494E64u) { return; }
        }
        }
    }
    ctx->pc = 0x494E64u;
label_494e64:
    // 0x494e64: 0x1000003e  b           . + 4 + (0x3E << 2)
label_494e68:
    if (ctx->pc == 0x494E68u) {
        ctx->pc = 0x494E6Cu;
        goto label_494e6c;
    }
    ctx->pc = 0x494E64u;
    {
        const bool branch_taken_0x494e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494e64) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494E6Cu;
label_494e6c:
    // 0x494e6c: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
label_494e70:
    if (ctx->pc == 0x494E70u) {
        ctx->pc = 0x494E74u;
        goto label_494e74;
    }
    ctx->pc = 0x494E6Cu;
    {
        const bool branch_taken_0x494e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494e6c) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494E74u;
label_494e74:
    // 0x494e74: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x494e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_494e78:
    // 0x494e78: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_494e7c:
    if (ctx->pc == 0x494E7Cu) {
        ctx->pc = 0x494E7Cu;
            // 0x494e7c: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x494E80u;
        goto label_494e80;
    }
    ctx->pc = 0x494E78u;
    {
        const bool branch_taken_0x494e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x494e78) {
            ctx->pc = 0x494E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494E78u;
            // 0x494e7c: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494EB8u;
            goto label_494eb8;
        }
    }
    ctx->pc = 0x494E80u;
label_494e80:
    // 0x494e80: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x494e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_494e84:
    // 0x494e84: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x494e84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_494e88:
    // 0x494e88: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x494e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_494e8c:
    // 0x494e8c: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x494e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
label_494e90:
    // 0x494e90: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x494e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_494e94:
    // 0x494e94: 0x50800032  beql        $a0, $zero, . + 4 + (0x32 << 2)
label_494e98:
    if (ctx->pc == 0x494E98u) {
        ctx->pc = 0x494E98u;
            // 0x494e98: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x494E9Cu;
        goto label_494e9c;
    }
    ctx->pc = 0x494E94u;
    {
        const bool branch_taken_0x494e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494e94) {
            ctx->pc = 0x494E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494E94u;
            // 0x494e98: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494E9Cu;
label_494e9c:
    // 0x494e9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494ea0:
    // 0x494ea0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x494ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_494ea4:
    // 0x494ea4: 0x320f809  jalr        $t9
label_494ea8:
    if (ctx->pc == 0x494EA8u) {
        ctx->pc = 0x494EACu;
        goto label_494eac;
    }
    ctx->pc = 0x494EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494EACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x494EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494EACu; }
            if (ctx->pc != 0x494EACu) { return; }
        }
        }
    }
    ctx->pc = 0x494EACu;
label_494eac:
    // 0x494eac: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x494eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_494eb0:
    // 0x494eb0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_494eb4:
    if (ctx->pc == 0x494EB4u) {
        ctx->pc = 0x494EB8u;
        goto label_494eb8;
    }
    ctx->pc = 0x494EB0u;
    {
        const bool branch_taken_0x494eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494eb0) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494EB8u;
label_494eb8:
    // 0x494eb8: 0x50650006  beql        $v1, $a1, . + 4 + (0x6 << 2)
label_494ebc:
    if (ctx->pc == 0x494EBCu) {
        ctx->pc = 0x494EBCu;
            // 0x494ebc: 0xae650018  sw          $a1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 5));
        ctx->pc = 0x494EC0u;
        goto label_494ec0;
    }
    ctx->pc = 0x494EB8u;
    {
        const bool branch_taken_0x494eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x494eb8) {
            ctx->pc = 0x494EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494EB8u;
            // 0x494ebc: 0xae650018  sw          $a1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494ED4u;
            goto label_494ed4;
        }
    }
    ctx->pc = 0x494EC0u;
label_494ec0:
    // 0x494ec0: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x494ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_494ec4:
    // 0x494ec4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x494ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_494ec8:
    // 0x494ec8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_494ecc:
    if (ctx->pc == 0x494ECCu) {
        ctx->pc = 0x494ED0u;
        goto label_494ed0;
    }
    ctx->pc = 0x494EC8u;
    {
        const bool branch_taken_0x494ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x494ec8) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494ED0u;
label_494ed0:
    // 0x494ed0: 0xae650018  sw          $a1, 0x18($s3)
    ctx->pc = 0x494ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 5));
label_494ed4:
    // 0x494ed4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x494ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_494ed8:
    // 0x494ed8: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x494ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
label_494edc:
    // 0x494edc: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x494edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_494ee0:
    // 0x494ee0: 0x5080001f  beql        $a0, $zero, . + 4 + (0x1F << 2)
label_494ee4:
    if (ctx->pc == 0x494EE4u) {
        ctx->pc = 0x494EE4u;
            // 0x494ee4: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x494EE8u;
        goto label_494ee8;
    }
    ctx->pc = 0x494EE0u;
    {
        const bool branch_taken_0x494ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494ee0) {
            ctx->pc = 0x494EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494EE0u;
            // 0x494ee4: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494EE8u;
label_494ee8:
    // 0x494ee8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494eec:
    // 0x494eec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x494eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_494ef0:
    // 0x494ef0: 0x320f809  jalr        $t9
label_494ef4:
    if (ctx->pc == 0x494EF4u) {
        ctx->pc = 0x494EF4u;
            // 0x494ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x494EF8u;
        goto label_494ef8;
    }
    ctx->pc = 0x494EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494EF8u);
        ctx->pc = 0x494EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494EF0u;
            // 0x494ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494EF8u; }
            if (ctx->pc != 0x494EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x494EF8u;
label_494ef8:
    // 0x494ef8: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x494ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_494efc:
    // 0x494efc: 0x10000018  b           . + 4 + (0x18 << 2)
label_494f00:
    if (ctx->pc == 0x494F00u) {
        ctx->pc = 0x494F04u;
        goto label_494f04;
    }
    ctx->pc = 0x494EFCu;
    {
        const bool branch_taken_0x494efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494efc) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494F04u;
label_494f04:
    // 0x494f04: 0x8e8300a8  lw          $v1, 0xA8($s4)
    ctx->pc = 0x494f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
label_494f08:
    // 0x494f08: 0x10650015  beq         $v1, $a1, . + 4 + (0x15 << 2)
label_494f0c:
    if (ctx->pc == 0x494F0Cu) {
        ctx->pc = 0x494F10u;
        goto label_494f10;
    }
    ctx->pc = 0x494F08u;
    {
        const bool branch_taken_0x494f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x494f08) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494F10u;
label_494f10:
    // 0x494f10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x494f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494f14:
    // 0x494f14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x494f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494f18:
    // 0x494f18: 0xc1245b4  jal         func_4916D0
label_494f1c:
    if (ctx->pc == 0x494F1Cu) {
        ctx->pc = 0x494F1Cu;
            // 0x494f1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494F20u;
        goto label_494f20;
    }
    ctx->pc = 0x494F18u;
    SET_GPR_U32(ctx, 31, 0x494F20u);
    ctx->pc = 0x494F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494F18u;
            // 0x494f1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4916D0u;
    if (runtime->hasFunction(0x4916D0u)) {
        auto targetFn = runtime->lookupFunction(0x4916D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494F20u; }
        if (ctx->pc != 0x494F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004916D0_0x4916d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494F20u; }
        if (ctx->pc != 0x494F20u) { return; }
    }
    ctx->pc = 0x494F20u;
label_494f20:
    // 0x494f20: 0x1000000f  b           . + 4 + (0xF << 2)
label_494f24:
    if (ctx->pc == 0x494F24u) {
        ctx->pc = 0x494F28u;
        goto label_494f28;
    }
    ctx->pc = 0x494F20u;
    {
        const bool branch_taken_0x494f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494f20) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494F28u;
label_494f28:
    // 0x494f28: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x494f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_494f2c:
    // 0x494f2c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_494f30:
    if (ctx->pc == 0x494F30u) {
        ctx->pc = 0x494F34u;
        goto label_494f34;
    }
    ctx->pc = 0x494F2Cu;
    {
        const bool branch_taken_0x494f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494f2c) {
            ctx->pc = 0x494F60u;
            goto label_494f60;
        }
    }
    ctx->pc = 0x494F34u;
label_494f34:
    // 0x494f34: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_494f38:
    if (ctx->pc == 0x494F38u) {
        ctx->pc = 0x494F38u;
            // 0x494f38: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->pc = 0x494F3Cu;
        goto label_494f3c;
    }
    ctx->pc = 0x494F34u;
    {
        const bool branch_taken_0x494f34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x494f34) {
            ctx->pc = 0x494F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494F34u;
            // 0x494f38: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494F50u;
            goto label_494f50;
        }
    }
    ctx->pc = 0x494F3Cu;
label_494f3c:
    // 0x494f3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494f40:
    // 0x494f40: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x494f40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_494f44:
    // 0x494f44: 0x320f809  jalr        $t9
label_494f48:
    if (ctx->pc == 0x494F48u) {
        ctx->pc = 0x494F48u;
            // 0x494f48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494F4Cu;
        goto label_494f4c;
    }
    ctx->pc = 0x494F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494F4Cu);
        ctx->pc = 0x494F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494F44u;
            // 0x494f48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494F4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494F4Cu; }
            if (ctx->pc != 0x494F4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x494F4Cu;
label_494f4c:
    // 0x494f4c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x494f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_494f50:
    // 0x494f50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494f54:
    // 0x494f54: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x494f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_494f58:
    // 0x494f58: 0x320f809  jalr        $t9
label_494f5c:
    if (ctx->pc == 0x494F5Cu) {
        ctx->pc = 0x494F5Cu;
            // 0x494f5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494F60u;
        goto label_494f60;
    }
    ctx->pc = 0x494F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494F60u);
        ctx->pc = 0x494F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494F58u;
            // 0x494f5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494F60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494F60u; }
            if (ctx->pc != 0x494F60u) { return; }
        }
        }
    }
    ctx->pc = 0x494F60u;
label_494f60:
    // 0x494f60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x494f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_494f64:
    // 0x494f64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x494f64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_494f68:
    // 0x494f68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x494f68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_494f6c:
    // 0x494f6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x494f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_494f70:
    // 0x494f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x494f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_494f74:
    // 0x494f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x494f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_494f78:
    // 0x494f78: 0x3e00008  jr          $ra
label_494f7c:
    if (ctx->pc == 0x494F7Cu) {
        ctx->pc = 0x494F7Cu;
            // 0x494f7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x494F80u;
        goto label_494f80;
    }
    ctx->pc = 0x494F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494F78u;
            // 0x494f7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x494F80u;
label_494f80:
    // 0x494f80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x494f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_494f84:
    // 0x494f84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x494f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_494f88:
    // 0x494f88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x494f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_494f8c:
    // 0x494f8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x494f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_494f90:
    // 0x494f90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x494f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_494f94:
    // 0x494f94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x494f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_494f98:
    // 0x494f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x494f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_494f9c:
    // 0x494f9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x494f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_494fa0:
    // 0x494fa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x494fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_494fa4:
    // 0x494fa4: 0x8c94002c  lw          $s4, 0x2C($a0)
    ctx->pc = 0x494fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_494fa8:
    // 0x494fa8: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_494fac:
    if (ctx->pc == 0x494FACu) {
        ctx->pc = 0x494FACu;
            // 0x494fac: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494FB0u;
        goto label_494fb0;
    }
    ctx->pc = 0x494FA8u;
    {
        const bool branch_taken_0x494fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x494FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494FA8u;
            // 0x494fac: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494fa8) {
            ctx->pc = 0x494FDCu;
            goto label_494fdc;
        }
    }
    ctx->pc = 0x494FB0u;
label_494fb0:
    // 0x494fb0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x494fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_494fb4:
    // 0x494fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x494fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494fb8:
    // 0x494fb8: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x494fb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_494fbc:
    // 0x494fbc: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_494fc0:
    if (ctx->pc == 0x494FC0u) {
        ctx->pc = 0x494FC0u;
            // 0x494fc0: 0xa26000e8  sb          $zero, 0xE8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 232), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x494FC4u;
        goto label_494fc4;
    }
    ctx->pc = 0x494FBCu;
    {
        const bool branch_taken_0x494fbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x494fbc) {
            ctx->pc = 0x494FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494FBCu;
            // 0x494fc0: 0xa26000e8  sb          $zero, 0xE8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 232), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494FE0u;
            goto label_494fe0;
        }
    }
    ctx->pc = 0x494FC4u;
label_494fc4:
    // 0x494fc4: 0x9243000c  lbu         $v1, 0xC($s2)
    ctx->pc = 0x494fc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
label_494fc8:
    // 0x494fc8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x494fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_494fcc:
    // 0x494fcc: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_494fd0:
    if (ctx->pc == 0x494FD0u) {
        ctx->pc = 0x494FD0u;
            // 0x494fd0: 0xa26000e8  sb          $zero, 0xE8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 232), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x494FD4u;
        goto label_494fd4;
    }
    ctx->pc = 0x494FCCu;
    {
        const bool branch_taken_0x494fcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x494fcc) {
            ctx->pc = 0x494FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494FCCu;
            // 0x494fd0: 0xa26000e8  sb          $zero, 0xE8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 232), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494FE0u;
            goto label_494fe0;
        }
    }
    ctx->pc = 0x494FD4u;
label_494fd4:
    // 0x494fd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_494fd8:
    if (ctx->pc == 0x494FD8u) {
        ctx->pc = 0x494FD8u;
            // 0x494fd8: 0xa26300e8  sb          $v1, 0xE8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 232), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x494FDCu;
        goto label_494fdc;
    }
    ctx->pc = 0x494FD4u;
    {
        const bool branch_taken_0x494fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494FD4u;
            // 0x494fd8: 0xa26300e8  sb          $v1, 0xE8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 232), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494fd4) {
            ctx->pc = 0x494FE0u;
            goto label_494fe0;
        }
    }
    ctx->pc = 0x494FDCu;
label_494fdc:
    // 0x494fdc: 0xa26000e8  sb          $zero, 0xE8($s3)
    ctx->pc = 0x494fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 232), (uint8_t)GPR_U32(ctx, 0));
label_494fe0:
    // 0x494fe0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x494fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494fe4:
    // 0x494fe4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x494fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494fe8:
    // 0x494fe8: 0x8e6300b8  lw          $v1, 0xB8($s3)
    ctx->pc = 0x494fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_494fec:
    // 0x494fec: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x494fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_494ff0:
    // 0x494ff0: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x494ff0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494ff4:
    // 0x494ff4: 0x0  nop
    ctx->pc = 0x494ff4u;
    // NOP
label_494ff8:
    // 0x494ff8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x494ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_494ffc:
    // 0x494ffc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x494ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_495000:
    // 0x495000: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x495000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_495004:
    // 0x495004: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x495004u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_495008:
    // 0x495008: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x495008u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_49500c:
    // 0x49500c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x49500cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_495010:
    // 0x495010: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x495010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_495014:
    // 0x495014: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x495014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_495018:
    // 0x495018: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x495018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49501c:
    // 0x49501c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x49501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_495020:
    // 0x495020: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x495020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_495024:
    // 0x495024: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x495024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_495028:
    // 0x495028: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
label_49502c:
    if (ctx->pc == 0x49502Cu) {
        ctx->pc = 0x495030u;
        goto label_495030;
    }
    ctx->pc = 0x495028u;
    {
        const bool branch_taken_0x495028 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x495028) {
            ctx->pc = 0x4950C8u;
            goto label_4950c8;
        }
    }
    ctx->pc = 0x495030u;
label_495030:
    // 0x495030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x495030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_495034:
    // 0x495034: 0xc1252fc  jal         func_494BF0
label_495038:
    if (ctx->pc == 0x495038u) {
        ctx->pc = 0x495038u;
            // 0x495038: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49503Cu;
        goto label_49503c;
    }
    ctx->pc = 0x495034u;
    SET_GPR_U32(ctx, 31, 0x49503Cu);
    ctx->pc = 0x495038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x495034u;
            // 0x495038: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494BF0u;
    goto label_494bf0;
    ctx->pc = 0x49503Cu;
label_49503c:
    // 0x49503c: 0x14303c  dsll32      $a2, $s4, 0
    ctx->pc = 0x49503cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 0));
label_495040:
    // 0x495040: 0x8e6300b8  lw          $v1, 0xB8($s3)
    ctx->pc = 0x495040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_495044:
    // 0x495044: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x495044u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_495048:
    // 0x495048: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x495048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_49504c:
    // 0x49504c: 0x2033821  addu        $a3, $s0, $v1
    ctx->pc = 0x49504cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_495050:
    // 0x495050: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x495050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_495054:
    // 0x495054: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x495054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_495058:
    // 0x495058: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x495058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_49505c:
    // 0x49505c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x49505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_495060:
    // 0x495060: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x495060u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_495064:
    // 0x495064: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_495068:
    if (ctx->pc == 0x495068u) {
        ctx->pc = 0x49506Cu;
        goto label_49506c;
    }
    ctx->pc = 0x495064u;
    {
        const bool branch_taken_0x495064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x495064) {
            ctx->pc = 0x4950A8u;
            goto label_4950a8;
        }
    }
    ctx->pc = 0x49506Cu;
label_49506c:
    // 0x49506c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x49506cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_495070:
    // 0x495070: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x495070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_495074:
    // 0x495074: 0x8e6300b8  lw          $v1, 0xB8($s3)
    ctx->pc = 0x495074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_495078:
    // 0x495078: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x495078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_49507c:
    // 0x49507c: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x49507cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_495080:
    // 0x495080: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x495080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_495084:
    // 0x495084: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x495084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_495088:
    // 0x495088: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x495088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_49508c:
    // 0x49508c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x49508cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_495090:
    // 0x495090: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x495090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_495094:
    // 0x495094: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x495094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_495098:
    // 0x495098: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x495098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49509c:
    // 0x49509c: 0x10a4ffd6  beq         $a1, $a0, . + 4 + (-0x2A << 2)
label_4950a0:
    if (ctx->pc == 0x4950A0u) {
        ctx->pc = 0x4950A4u;
        goto label_4950a4;
    }
    ctx->pc = 0x49509Cu;
    {
        const bool branch_taken_0x49509c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x49509c) {
            ctx->pc = 0x494FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_494ff8;
        }
    }
    ctx->pc = 0x4950A4u;
label_4950a4:
    // 0x4950a4: 0x0  nop
    ctx->pc = 0x4950a4u;
    // NOP
label_4950a8:
    // 0x4950a8: 0x96650046  lhu         $a1, 0x46($s3)
    ctx->pc = 0x4950a8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_4950ac:
    // 0x4950ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4950acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4950b0:
    // 0x4950b0: 0x14a4000f  bne         $a1, $a0, . + 4 + (0xF << 2)
label_4950b4:
    if (ctx->pc == 0x4950B4u) {
        ctx->pc = 0x4950B8u;
        goto label_4950b8;
    }
    ctx->pc = 0x4950B0u;
    {
        const bool branch_taken_0x4950b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x4950b0) {
            ctx->pc = 0x4950F0u;
            goto label_4950f0;
        }
    }
    ctx->pc = 0x4950B8u;
label_4950b8:
    // 0x4950b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4950b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4950bc:
    // 0x4950bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_4950c0:
    if (ctx->pc == 0x4950C0u) {
        ctx->pc = 0x4950C0u;
            // 0x4950c0: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x4950C4u;
        goto label_4950c4;
    }
    ctx->pc = 0x4950BCu;
    {
        const bool branch_taken_0x4950bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4950C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4950BCu;
            // 0x4950c0: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4950bc) {
            ctx->pc = 0x4950F0u;
            goto label_4950f0;
        }
    }
    ctx->pc = 0x4950C4u;
label_4950c4:
    // 0x4950c4: 0x0  nop
    ctx->pc = 0x4950c4u;
    // NOP
label_4950c8:
    // 0x4950c8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4950c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_4950cc:
    // 0x4950cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4950d0:
    if (ctx->pc == 0x4950D0u) {
        ctx->pc = 0x4950D4u;
        goto label_4950d4;
    }
    ctx->pc = 0x4950CCu;
    {
        const bool branch_taken_0x4950cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4950cc) {
            ctx->pc = 0x4950F0u;
            goto label_4950f0;
        }
    }
    ctx->pc = 0x4950D4u;
label_4950d4:
    // 0x4950d4: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x4950d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4950d8:
    // 0x4950d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4950d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4950dc:
    // 0x4950dc: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x4950dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_4950e0:
    // 0x4950e0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x4950e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4950e4:
    // 0x4950e4: 0xc1252fc  jal         func_494BF0
label_4950e8:
    if (ctx->pc == 0x4950E8u) {
        ctx->pc = 0x4950E8u;
            // 0x4950e8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4950ECu;
        goto label_4950ec;
    }
    ctx->pc = 0x4950E4u;
    SET_GPR_U32(ctx, 31, 0x4950ECu);
    ctx->pc = 0x4950E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4950E4u;
            // 0x4950e8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494BF0u;
    goto label_494bf0;
    ctx->pc = 0x4950ECu;
label_4950ec:
    // 0x4950ec: 0x0  nop
    ctx->pc = 0x4950ecu;
    // NOP
label_4950f0:
    // 0x4950f0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x4950f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_4950f4:
    // 0x4950f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4950f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4950f8:
    // 0x4950f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4950f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4950fc:
    // 0x4950fc: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x4950fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_495100:
    // 0x495100: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
label_495104:
    if (ctx->pc == 0x495104u) {
        ctx->pc = 0x495108u;
        goto label_495108;
    }
    ctx->pc = 0x495100u;
    {
        const bool branch_taken_0x495100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x495100) {
            ctx->pc = 0x4951B8u;
            goto label_4951b8;
        }
    }
    ctx->pc = 0x495108u;
label_495108:
    // 0x495108: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x495108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49510c:
    // 0x49510c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x49510cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_495110:
    // 0x495110: 0x320f809  jalr        $t9
label_495114:
    if (ctx->pc == 0x495114u) {
        ctx->pc = 0x495118u;
        goto label_495118;
    }
    ctx->pc = 0x495110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x495118u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x495118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x495118u; }
            if (ctx->pc != 0x495118u) { return; }
        }
        }
    }
    ctx->pc = 0x495118u;
label_495118:
    // 0x495118: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_49511c:
    if (ctx->pc == 0x49511Cu) {
        ctx->pc = 0x495120u;
        goto label_495120;
    }
    ctx->pc = 0x495118u;
    {
        const bool branch_taken_0x495118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495118) {
            ctx->pc = 0x4951B8u;
            goto label_4951b8;
        }
    }
    ctx->pc = 0x495120u;
label_495120:
    // 0x495120: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x495120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_495124:
    // 0x495124: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x495124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_495128:
    // 0x495128: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x495128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_49512c:
    // 0x49512c: 0xa6630046  sh          $v1, 0x46($s3)
    ctx->pc = 0x49512cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 70), (uint16_t)GPR_U32(ctx, 3));
label_495130:
    // 0x495130: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x495130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_495134:
    // 0x495134: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x495134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_495138:
    // 0x495138: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x495138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49513c:
    // 0x49513c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x49513cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_495140:
    // 0x495140: 0x320f809  jalr        $t9
label_495144:
    if (ctx->pc == 0x495144u) {
        ctx->pc = 0x495144u;
            // 0x495144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x495148u;
        goto label_495148;
    }
    ctx->pc = 0x495140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x495148u);
        ctx->pc = 0x495144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495140u;
            // 0x495144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x495148u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x495148u; }
            if (ctx->pc != 0x495148u) { return; }
        }
        }
    }
    ctx->pc = 0x495148u;
label_495148:
    // 0x495148: 0xae6200c4  sw          $v0, 0xC4($s3)
    ctx->pc = 0x495148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
label_49514c:
    // 0x49514c: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x49514cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_495150:
    // 0x495150: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x495150u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_495154:
    // 0x495154: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x495154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_495158:
    // 0x495158: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x495158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_49515c:
    // 0x49515c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49515cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_495160:
    // 0x495160: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x495160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_495164:
    // 0x495164: 0x320f809  jalr        $t9
label_495168:
    if (ctx->pc == 0x495168u) {
        ctx->pc = 0x495168u;
            // 0x495168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49516Cu;
        goto label_49516c;
    }
    ctx->pc = 0x495164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49516Cu);
        ctx->pc = 0x495168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495164u;
            // 0x495168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49516Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49516Cu; }
            if (ctx->pc != 0x49516Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49516Cu;
label_49516c:
    // 0x49516c: 0xae6200c8  sw          $v0, 0xC8($s3)
    ctx->pc = 0x49516cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 2));
label_495170:
    // 0x495170: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x495170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_495174:
    // 0x495174: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x495174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_495178:
    // 0x495178: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x495178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49517c:
    // 0x49517c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x49517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_495180:
    // 0x495180: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x495180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_495184:
    // 0x495184: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x495184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_495188:
    // 0x495188: 0x320f809  jalr        $t9
label_49518c:
    if (ctx->pc == 0x49518Cu) {
        ctx->pc = 0x49518Cu;
            // 0x49518c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x495190u;
        goto label_495190;
    }
    ctx->pc = 0x495188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x495190u);
        ctx->pc = 0x49518Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495188u;
            // 0x49518c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x495190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x495190u; }
            if (ctx->pc != 0x495190u) { return; }
        }
        }
    }
    ctx->pc = 0x495190u;
label_495190:
    // 0x495190: 0xae6200cc  sw          $v0, 0xCC($s3)
    ctx->pc = 0x495190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 2));
label_495194:
    // 0x495194: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x495194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_495198:
    // 0x495198: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x495198u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_49519c:
    // 0x49519c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x49519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4951a0:
    // 0x4951a0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x4951a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4951a4:
    // 0x4951a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4951a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4951a8:
    // 0x4951a8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4951a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4951ac:
    // 0x4951ac: 0x320f809  jalr        $t9
label_4951b0:
    if (ctx->pc == 0x4951B0u) {
        ctx->pc = 0x4951B0u;
            // 0x4951b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4951B4u;
        goto label_4951b4;
    }
    ctx->pc = 0x4951ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4951B4u);
        ctx->pc = 0x4951B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4951ACu;
            // 0x4951b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4951B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4951B4u; }
            if (ctx->pc != 0x4951B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4951B4u;
label_4951b4:
    // 0x4951b4: 0xae6200d0  sw          $v0, 0xD0($s3)
    ctx->pc = 0x4951b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
label_4951b8:
    // 0x4951b8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x4951b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_4951bc:
    // 0x4951bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4951bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4951c0:
    // 0x4951c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4951c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4951c4:
    // 0x4951c4: 0x24740004  addiu       $s4, $v1, 0x4
    ctx->pc = 0x4951c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4951c8:
    // 0x4951c8: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x4951c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_4951cc:
    // 0x4951cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4951ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4951d0:
    // 0x4951d0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x4951d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4951d4:
    // 0x4951d4: 0x1460ff84  bnez        $v1, . + 4 + (-0x7C << 2)
label_4951d8:
    if (ctx->pc == 0x4951D8u) {
        ctx->pc = 0x4951D8u;
            // 0x4951d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4951DCu;
        goto label_4951dc;
    }
    ctx->pc = 0x4951D4u;
    {
        const bool branch_taken_0x4951d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4951D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4951D4u;
            // 0x4951d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4951d4) {
            ctx->pc = 0x494FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_494fe8;
        }
    }
    ctx->pc = 0x4951DCu;
label_4951dc:
    // 0x4951dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4951dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4951e0:
    // 0x4951e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4951e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4951e4:
    // 0x4951e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4951e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4951e8:
    // 0x4951e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4951e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4951ec:
    // 0x4951ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4951ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4951f0:
    // 0x4951f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4951f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4951f4:
    // 0x4951f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4951f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4951f8:
    // 0x4951f8: 0x3e00008  jr          $ra
label_4951fc:
    if (ctx->pc == 0x4951FCu) {
        ctx->pc = 0x4951FCu;
            // 0x4951fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x495200u;
        goto label_495200;
    }
    ctx->pc = 0x4951F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4951FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4951F8u;
            // 0x4951fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495200u;
label_495200:
    // 0x495200: 0x3e00008  jr          $ra
label_495204:
    if (ctx->pc == 0x495204u) {
        ctx->pc = 0x495204u;
            // 0x495204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x495208u;
        goto label_495208;
    }
    ctx->pc = 0x495200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495200u;
            // 0x495204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495208u;
label_495208:
    // 0x495208: 0x0  nop
    ctx->pc = 0x495208u;
    // NOP
label_49520c:
    // 0x49520c: 0x0  nop
    ctx->pc = 0x49520cu;
    // NOP
label_495210:
    // 0x495210: 0x3e00008  jr          $ra
label_495214:
    if (ctx->pc == 0x495214u) {
        ctx->pc = 0x495214u;
            // 0x495214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x495218u;
        goto label_495218;
    }
    ctx->pc = 0x495210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495210u;
            // 0x495214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495218u;
label_495218:
    // 0x495218: 0x0  nop
    ctx->pc = 0x495218u;
    // NOP
label_49521c:
    // 0x49521c: 0x0  nop
    ctx->pc = 0x49521cu;
    // NOP
label_495220:
    // 0x495220: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x495220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_495224:
    // 0x495224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x495224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495228:
    // 0x495228: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x495228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_49522c:
    // 0x49522c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x49522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_495230:
    // 0x495230: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x495230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_495234:
    // 0x495234: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x495234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_495238:
    // 0x495238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x495238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49523c:
    // 0x49523c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x49523cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_495240:
    // 0x495240: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x495240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_495244:
    // 0x495244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x495244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_495248:
    // 0x495248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x495248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49524c:
    // 0x49524c: 0xa0830044  sb          $v1, 0x44($a0)
    ctx->pc = 0x49524cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 3));
label_495250:
    // 0x495250: 0x8c960014  lw          $s6, 0x14($a0)
    ctx->pc = 0x495250u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_495254:
    // 0x495254: 0xac940014  sw          $s4, 0x14($a0)
    ctx->pc = 0x495254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 20));
label_495258:
    // 0x495258: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x495258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_49525c:
    // 0x49525c: 0x8c91002c  lw          $s1, 0x2C($a0)
    ctx->pc = 0x49525cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_495260:
    // 0x495260: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x495260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_495264:
    // 0x495264: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x495264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_495268:
    // 0x495268: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x495268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
label_49526c:
    // 0x49526c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x49526cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_495270:
    // 0x495270: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x495270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_495274:
    // 0x495274: 0x1060017c  beqz        $v1, . + 4 + (0x17C << 2)
label_495278:
    if (ctx->pc == 0x495278u) {
        ctx->pc = 0x495278u;
            // 0x495278: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49527Cu;
        goto label_49527c;
    }
    ctx->pc = 0x495274u;
    {
        const bool branch_taken_0x495274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x495278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495274u;
            // 0x495278: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495274) {
            ctx->pc = 0x495868u;
            goto label_495868;
        }
    }
    ctx->pc = 0x49527Cu;
label_49527c:
    // 0x49527c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49527cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495280:
    // 0x495280: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x495280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_495284:
    // 0x495284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x495284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495288:
    // 0x495288: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x495288u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_49528c:
    // 0x49528c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x49528cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_495290:
    // 0x495290: 0x8cad0010  lw          $t5, 0x10($a1)
    ctx->pc = 0x495290u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_495294:
    // 0x495294: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x495294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_495298:
    // 0x495298: 0x8db00008  lw          $s0, 0x8($t5)
    ctx->pc = 0x495298u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
label_49529c:
    // 0x49529c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49529cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4952a0:
    // 0x4952a0: 0x260c0004  addiu       $t4, $s0, 0x4
    ctx->pc = 0x4952a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4952a4:
    // 0x4952a4: 0x2035821  addu        $t3, $s0, $v1
    ctx->pc = 0x4952a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4952a8:
    // 0x4952a8: 0x158b0003  bne         $t4, $t3, . + 4 + (0x3 << 2)
label_4952ac:
    if (ctx->pc == 0x4952ACu) {
        ctx->pc = 0x4952ACu;
            // 0x4952ac: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4952B0u;
        goto label_4952b0;
    }
    ctx->pc = 0x4952A8u;
    {
        const bool branch_taken_0x4952a8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        ctx->pc = 0x4952ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4952A8u;
            // 0x4952ac: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4952a8) {
            ctx->pc = 0x4952B8u;
            goto label_4952b8;
        }
    }
    ctx->pc = 0x4952B0u;
label_4952b0:
    // 0x4952b0: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x4952b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4952b4:
    // 0x4952b4: 0x0  nop
    ctx->pc = 0x4952b4u;
    // NOP
label_4952b8:
    // 0x4952b8: 0xc183c  dsll32      $v1, $t4, 0
    ctx->pc = 0x4952b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << (32 + 0));
label_4952bc:
    // 0x4952bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4952bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4952c0:
    // 0x4952c0: 0x6b1826  xor         $v1, $v1, $t3
    ctx->pc = 0x4952c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 11));
label_4952c4:
    // 0x4952c4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4952c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4952c8:
    // 0x4952c8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4952c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4952cc:
    // 0x4952cc: 0x10600122  beqz        $v1, . + 4 + (0x122 << 2)
label_4952d0:
    if (ctx->pc == 0x4952D0u) {
        ctx->pc = 0x4952D4u;
        goto label_4952d4;
    }
    ctx->pc = 0x4952CCu;
    {
        const bool branch_taken_0x4952cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4952cc) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x4952D4u;
label_4952d4:
    // 0x4952d4: 0x2409001a  addiu       $t1, $zero, 0x1A
    ctx->pc = 0x4952d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_4952d8:
    // 0x4952d8: 0x24080046  addiu       $t0, $zero, 0x46
    ctx->pc = 0x4952d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_4952dc:
    // 0x4952dc: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x4952dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4952e0:
    // 0x4952e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4952e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4952e4:
    // 0x4952e4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4952e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4952e8:
    // 0x4952e8: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x4952e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
label_4952ec:
    // 0x4952ec: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4952ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4952f0:
    // 0x4952f0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4952f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4952f4:
    // 0x4952f4: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x4952f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4952f8:
    // 0x4952f8: 0x154082b  sltu        $at, $t2, $s4
    ctx->pc = 0x4952f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4952fc:
    // 0x4952fc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_495300:
    if (ctx->pc == 0x495300u) {
        ctx->pc = 0x495304u;
        goto label_495304;
    }
    ctx->pc = 0x4952FCu;
    {
        const bool branch_taken_0x4952fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4952fc) {
            ctx->pc = 0x495320u;
            goto label_495320;
        }
    }
    ctx->pc = 0x495304u;
label_495304:
    // 0x495304: 0xc783c  dsll32      $t7, $t4, 0
    ctx->pc = 0x495304u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << (32 + 0));
label_495308:
    // 0x495308: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x495308u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
label_49530c:
    // 0x49530c: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x49530cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_495310:
    // 0x495310: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x495310u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_495314:
    // 0x495314: 0x28f782b  sltu        $t7, $s4, $t7
    ctx->pc = 0x495314u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_495318:
    // 0x495318: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
label_49531c:
    if (ctx->pc == 0x49531Cu) {
        ctx->pc = 0x495320u;
        goto label_495320;
    }
    ctx->pc = 0x495318u;
    {
        const bool branch_taken_0x495318 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x495318) {
            ctx->pc = 0x495350u;
            goto label_495350;
        }
    }
    ctx->pc = 0x495320u;
label_495320:
    // 0x495320: 0x128a000b  beq         $s4, $t2, . + 4 + (0xB << 2)
label_495324:
    if (ctx->pc == 0x495324u) {
        ctx->pc = 0x495328u;
        goto label_495328;
    }
    ctx->pc = 0x495320u;
    {
        const bool branch_taken_0x495320 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 10));
        if (branch_taken_0x495320) {
            ctx->pc = 0x495350u;
            goto label_495350;
        }
    }
    ctx->pc = 0x495328u;
label_495328:
    // 0x495328: 0x28a082b  sltu        $at, $s4, $t2
    ctx->pc = 0x495328u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_49532c:
    // 0x49532c: 0x142000f2  bnez        $at, . + 4 + (0xF2 << 2)
label_495330:
    if (ctx->pc == 0x495330u) {
        ctx->pc = 0x495334u;
        goto label_495334;
    }
    ctx->pc = 0x49532Cu;
    {
        const bool branch_taken_0x49532c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x49532c) {
            ctx->pc = 0x4956F8u;
            goto label_4956f8;
        }
    }
    ctx->pc = 0x495334u;
label_495334:
    // 0x495334: 0x10c03c  dsll32      $t8, $s0, 0
    ctx->pc = 0x495334u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 16) << (32 + 0));
label_495338:
    // 0x495338: 0xc783c  dsll32      $t7, $t4, 0
    ctx->pc = 0x495338u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << (32 + 0));
label_49533c:
    // 0x49533c: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x49533cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
label_495340:
    // 0x495340: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x495340u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
label_495344:
    // 0x495344: 0x170f00ec  bne         $t8, $t7, . + 4 + (0xEC << 2)
label_495348:
    if (ctx->pc == 0x495348u) {
        ctx->pc = 0x49534Cu;
        goto label_49534c;
    }
    ctx->pc = 0x495344u;
    {
        const bool branch_taken_0x495344 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 15));
        if (branch_taken_0x495344) {
            ctx->pc = 0x4956F8u;
            goto label_4956f8;
        }
    }
    ctx->pc = 0x49534Cu;
label_49534c:
    // 0x49534c: 0x0  nop
    ctx->pc = 0x49534cu;
    // NOP
label_495350:
    // 0x495350: 0x8ccf0004  lw          $t7, 0x4($a2)
    ctx->pc = 0x495350u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_495354:
    // 0x495354: 0x11e90004  beq         $t7, $t1, . + 4 + (0x4 << 2)
label_495358:
    if (ctx->pc == 0x495358u) {
        ctx->pc = 0x49535Cu;
        goto label_49535c;
    }
    ctx->pc = 0x495354u;
    {
        const bool branch_taken_0x495354 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 9));
        if (branch_taken_0x495354) {
            ctx->pc = 0x495368u;
            goto label_495368;
        }
    }
    ctx->pc = 0x49535Cu;
label_49535c:
    // 0x49535c: 0x15e8008e  bne         $t7, $t0, . + 4 + (0x8E << 2)
label_495360:
    if (ctx->pc == 0x495360u) {
        ctx->pc = 0x495364u;
        goto label_495364;
    }
    ctx->pc = 0x49535Cu;
    {
        const bool branch_taken_0x49535c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 8));
        if (branch_taken_0x49535c) {
            ctx->pc = 0x495598u;
            goto label_495598;
        }
    }
    ctx->pc = 0x495364u;
label_495364:
    // 0x495364: 0x0  nop
    ctx->pc = 0x495364u;
    // NOP
label_495368:
    // 0x495368: 0x16960009  bne         $s4, $s6, . + 4 + (0x9 << 2)
label_49536c:
    if (ctx->pc == 0x49536Cu) {
        ctx->pc = 0x495370u;
        goto label_495370;
    }
    ctx->pc = 0x495368u;
    {
        const bool branch_taken_0x495368 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        if (branch_taken_0x495368) {
            ctx->pc = 0x495390u;
            goto label_495390;
        }
    }
    ctx->pc = 0x495370u;
label_495370:
    // 0x495370: 0x8ea400b8  lw          $a0, 0xB8($s5)
    ctx->pc = 0x495370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
label_495374:
    // 0x495374: 0x640e0001  daddiu      $t6, $zero, 0x1
    ctx->pc = 0x495374u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_495378:
    // 0x495378: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x495378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_49537c:
    // 0x49537c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x49537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_495380:
    // 0x495380: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x495380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_495384:
    // 0x495384: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x495384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_495388:
    // 0x495388: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_49538c:
    if (ctx->pc == 0x49538Cu) {
        ctx->pc = 0x49538Cu;
            // 0x49538c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x495390u;
        goto label_495390;
    }
    ctx->pc = 0x495388u;
    {
        const bool branch_taken_0x495388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49538Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495388u;
            // 0x49538c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495388) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x495390u;
label_495390:
    // 0x495390: 0x168a0007  bne         $s4, $t2, . + 4 + (0x7 << 2)
label_495394:
    if (ctx->pc == 0x495394u) {
        ctx->pc = 0x495398u;
        goto label_495398;
    }
    ctx->pc = 0x495390u;
    {
        const bool branch_taken_0x495390 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 10));
        if (branch_taken_0x495390) {
            ctx->pc = 0x4953B0u;
            goto label_4953b0;
        }
    }
    ctx->pc = 0x495398u;
label_495398:
    // 0x495398: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x495398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_49539c:
    // 0x49539c: 0x640e0001  daddiu      $t6, $zero, 0x1
    ctx->pc = 0x49539cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4953a0:
    // 0x4953a0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4953a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4953a4:
    // 0x4953a4: 0x100000ec  b           . + 4 + (0xEC << 2)
label_4953a8:
    if (ctx->pc == 0x4953A8u) {
        ctx->pc = 0x4953A8u;
            // 0x4953a8: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x4953ACu;
        goto label_4953ac;
    }
    ctx->pc = 0x4953A4u;
    {
        const bool branch_taken_0x4953a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4953A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4953A4u;
            // 0x4953a8: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4953a4) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x4953ACu;
label_4953ac:
    // 0x4953ac: 0x0  nop
    ctx->pc = 0x4953acu;
    // NOP
label_4953b0:
    // 0x4953b0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x4953b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_4953b4:
    // 0x4953b4: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
label_4953b8:
    if (ctx->pc == 0x4953B8u) {
        ctx->pc = 0x4953BCu;
        goto label_4953bc;
    }
    ctx->pc = 0x4953B4u;
    {
        const bool branch_taken_0x4953b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4953b4) {
            ctx->pc = 0x495440u;
            goto label_495440;
        }
    }
    ctx->pc = 0x4953BCu;
label_4953bc:
    // 0x4953bc: 0x8ea7003c  lw          $a3, 0x3C($s5)
    ctx->pc = 0x4953bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_4953c0:
    // 0x4953c0: 0xc1252fc  jal         func_494BF0
label_4953c4:
    if (ctx->pc == 0x4953C4u) {
        ctx->pc = 0x4953C4u;
            // 0x4953c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4953C8u;
        goto label_4953c8;
    }
    ctx->pc = 0x4953C0u;
    SET_GPR_U32(ctx, 31, 0x4953C8u);
    ctx->pc = 0x4953C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4953C0u;
            // 0x4953c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494BF0u;
    goto label_494bf0;
    ctx->pc = 0x4953C8u;
label_4953c8:
    // 0x4953c8: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x4953c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_4953cc:
    // 0x4953cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4953ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4953d0:
    // 0x4953d0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4953d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_4953d4:
    // 0x4953d4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4953d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4953d8:
    // 0x4953d8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4953d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4953dc:
    // 0x4953dc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4953dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4953e0:
    // 0x4953e0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_4953e4:
    if (ctx->pc == 0x4953E4u) {
        ctx->pc = 0x4953E8u;
        goto label_4953e8;
    }
    ctx->pc = 0x4953E0u;
    {
        const bool branch_taken_0x4953e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4953e0) {
            ctx->pc = 0x4953F8u;
            goto label_4953f8;
        }
    }
    ctx->pc = 0x4953E8u;
label_4953e8:
    // 0x4953e8: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x4953e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4953ec:
    // 0x4953ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4953ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4953f0:
    // 0x4953f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4953f4:
    if (ctx->pc == 0x4953F4u) {
        ctx->pc = 0x4953F4u;
            // 0x4953f4: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x4953F8u;
        goto label_4953f8;
    }
    ctx->pc = 0x4953F0u;
    {
        const bool branch_taken_0x4953f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4953F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4953F0u;
            // 0x4953f4: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4953f0) {
            ctx->pc = 0x495408u;
            goto label_495408;
        }
    }
    ctx->pc = 0x4953F8u;
label_4953f8:
    // 0x4953f8: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x4953f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4953fc:
    // 0x4953fc: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x4953fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_495400:
    // 0x495400: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x495400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_495404:
    // 0x495404: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x495404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_495408:
    // 0x495408: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x495408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_49540c:
    // 0x49540c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x49540cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_495410:
    // 0x495410: 0x8ea400bc  lw          $a0, 0xBC($s5)
    ctx->pc = 0x495410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_495414:
    // 0x495414: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x495414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_495418:
    // 0x495418: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x495418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_49541c:
    // 0x49541c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x49541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_495420:
    // 0x495420: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x495420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_495424:
    // 0x495424: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x495424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_495428:
    // 0x495428: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x495428u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49542c:
    // 0x49542c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_495430:
    if (ctx->pc == 0x495430u) {
        ctx->pc = 0x495434u;
        goto label_495434;
    }
    ctx->pc = 0x49542Cu;
    {
        const bool branch_taken_0x49542c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49542c) {
            ctx->pc = 0x495438u;
            goto label_495438;
        }
    }
    ctx->pc = 0x495434u;
label_495434:
    // 0x495434: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x495434u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_495438:
    // 0x495438: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_49543c:
    if (ctx->pc == 0x49543Cu) {
        ctx->pc = 0x49543Cu;
            // 0x49543c: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x495440u;
        goto label_495440;
    }
    ctx->pc = 0x495438u;
    {
        const bool branch_taken_0x495438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495438u;
            // 0x49543c: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x495438) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x495440u;
label_495440:
    // 0x495440: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x495440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_495444:
    // 0x495444: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x495444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_495448:
    // 0x495448: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x495448u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_49544c:
    // 0x49544c: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_495450:
    if (ctx->pc == 0x495450u) {
        ctx->pc = 0x495454u;
        goto label_495454;
    }
    ctx->pc = 0x49544Cu;
    {
        const bool branch_taken_0x49544c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x49544c) {
            ctx->pc = 0x4954D8u;
            goto label_4954d8;
        }
    }
    ctx->pc = 0x495454u;
label_495454:
    // 0x495454: 0x8ea7003c  lw          $a3, 0x3C($s5)
    ctx->pc = 0x495454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_495458:
    // 0x495458: 0xc1252fc  jal         func_494BF0
label_49545c:
    if (ctx->pc == 0x49545Cu) {
        ctx->pc = 0x49545Cu;
            // 0x49545c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x495460u;
        goto label_495460;
    }
    ctx->pc = 0x495458u;
    SET_GPR_U32(ctx, 31, 0x495460u);
    ctx->pc = 0x49545Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x495458u;
            // 0x49545c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494BF0u;
    goto label_494bf0;
    ctx->pc = 0x495460u;
label_495460:
    // 0x495460: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x495460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_495464:
    // 0x495464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x495464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495468:
    // 0x495468: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x495468u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_49546c:
    // 0x49546c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49546cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_495470:
    // 0x495470: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x495470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_495474:
    // 0x495474: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x495474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_495478:
    // 0x495478: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_49547c:
    if (ctx->pc == 0x49547Cu) {
        ctx->pc = 0x495480u;
        goto label_495480;
    }
    ctx->pc = 0x495478u;
    {
        const bool branch_taken_0x495478 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x495478) {
            ctx->pc = 0x495490u;
            goto label_495490;
        }
    }
    ctx->pc = 0x495480u;
label_495480:
    // 0x495480: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x495480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_495484:
    // 0x495484: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x495484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_495488:
    // 0x495488: 0x10000005  b           . + 4 + (0x5 << 2)
label_49548c:
    if (ctx->pc == 0x49548Cu) {
        ctx->pc = 0x49548Cu;
            // 0x49548c: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x495490u;
        goto label_495490;
    }
    ctx->pc = 0x495488u;
    {
        const bool branch_taken_0x495488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495488u;
            // 0x49548c: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495488) {
            ctx->pc = 0x4954A0u;
            goto label_4954a0;
        }
    }
    ctx->pc = 0x495490u;
label_495490:
    // 0x495490: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x495490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_495494:
    // 0x495494: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x495494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_495498:
    // 0x495498: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x495498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_49549c:
    // 0x49549c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x49549cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4954a0:
    // 0x4954a0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x4954a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_4954a4:
    // 0x4954a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4954a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4954a8:
    // 0x4954a8: 0x8ea400bc  lw          $a0, 0xBC($s5)
    ctx->pc = 0x4954a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4954ac:
    // 0x4954ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4954acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4954b0:
    // 0x4954b0: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x4954b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4954b4:
    // 0x4954b4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4954b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4954b8:
    // 0x4954b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4954b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4954bc:
    // 0x4954bc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4954bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4954c0:
    // 0x4954c0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4954c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4954c4:
    // 0x4954c4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_4954c8:
    if (ctx->pc == 0x4954C8u) {
        ctx->pc = 0x4954CCu;
        goto label_4954cc;
    }
    ctx->pc = 0x4954C4u;
    {
        const bool branch_taken_0x4954c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4954c4) {
            ctx->pc = 0x4954D0u;
            goto label_4954d0;
        }
    }
    ctx->pc = 0x4954CCu;
label_4954cc:
    // 0x4954cc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4954ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_4954d0:
    // 0x4954d0: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_4954d4:
    if (ctx->pc == 0x4954D4u) {
        ctx->pc = 0x4954D4u;
            // 0x4954d4: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4954D8u;
        goto label_4954d8;
    }
    ctx->pc = 0x4954D0u;
    {
        const bool branch_taken_0x4954d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4954D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4954D0u;
            // 0x4954d4: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4954d0) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x4954D8u;
label_4954d8:
    // 0x4954d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4954dc:
    if (ctx->pc == 0x4954DCu) {
        ctx->pc = 0x4954E0u;
        goto label_4954e0;
    }
    ctx->pc = 0x4954D8u;
    {
        const bool branch_taken_0x4954d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4954d8) {
            ctx->pc = 0x4954F0u;
            goto label_4954f0;
        }
    }
    ctx->pc = 0x4954E0u;
label_4954e0:
    // 0x4954e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4954e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4954e4:
    // 0x4954e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4954e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4954e8:
    // 0x4954e8: 0x320f809  jalr        $t9
label_4954ec:
    if (ctx->pc == 0x4954ECu) {
        ctx->pc = 0x4954ECu;
            // 0x4954ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4954F0u;
        goto label_4954f0;
    }
    ctx->pc = 0x4954E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4954F0u);
        ctx->pc = 0x4954ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4954E8u;
            // 0x4954ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4954F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4954F0u; }
            if (ctx->pc != 0x4954F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4954F0u;
label_4954f0:
    // 0x4954f0: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x4954f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
label_4954f4:
    // 0x4954f4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x4954f4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_4954f8:
    // 0x4954f8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x4954f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_4954fc:
    // 0x4954fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4954fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_495500:
    // 0x495500: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x495500u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_495504:
    // 0x495504: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x495504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_495508:
    // 0x495508: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x495508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49550c:
    // 0x49550c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x49550cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_495510:
    // 0x495510: 0x8ea7003c  lw          $a3, 0x3C($s5)
    ctx->pc = 0x495510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_495514:
    // 0x495514: 0xc1252fc  jal         func_494BF0
label_495518:
    if (ctx->pc == 0x495518u) {
        ctx->pc = 0x495518u;
            // 0x495518: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49551Cu;
        goto label_49551c;
    }
    ctx->pc = 0x495514u;
    SET_GPR_U32(ctx, 31, 0x49551Cu);
    ctx->pc = 0x495518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x495514u;
            // 0x495518: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494BF0u;
    goto label_494bf0;
    ctx->pc = 0x49551Cu;
label_49551c:
    // 0x49551c: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x49551cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_495520:
    // 0x495520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x495520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495524:
    // 0x495524: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x495524u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_495528:
    // 0x495528: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x495528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49552c:
    // 0x49552c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x49552cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_495530:
    // 0x495530: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x495530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_495534:
    // 0x495534: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_495538:
    if (ctx->pc == 0x495538u) {
        ctx->pc = 0x49553Cu;
        goto label_49553c;
    }
    ctx->pc = 0x495534u;
    {
        const bool branch_taken_0x495534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x495534) {
            ctx->pc = 0x495550u;
            goto label_495550;
        }
    }
    ctx->pc = 0x49553Cu;
label_49553c:
    // 0x49553c: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x49553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_495540:
    // 0x495540: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x495540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_495544:
    // 0x495544: 0x10000006  b           . + 4 + (0x6 << 2)
label_495548:
    if (ctx->pc == 0x495548u) {
        ctx->pc = 0x495548u;
            // 0x495548: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x49554Cu;
        goto label_49554c;
    }
    ctx->pc = 0x495544u;
    {
        const bool branch_taken_0x495544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495544u;
            // 0x495548: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495544) {
            ctx->pc = 0x495560u;
            goto label_495560;
        }
    }
    ctx->pc = 0x49554Cu;
label_49554c:
    // 0x49554c: 0x0  nop
    ctx->pc = 0x49554cu;
    // NOP
label_495550:
    // 0x495550: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x495550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_495554:
    // 0x495554: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x495554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_495558:
    // 0x495558: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x495558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_49555c:
    // 0x49555c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x49555cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_495560:
    // 0x495560: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x495560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_495564:
    // 0x495564: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x495564u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_495568:
    // 0x495568: 0x8ea400bc  lw          $a0, 0xBC($s5)
    ctx->pc = 0x495568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_49556c:
    // 0x49556c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x49556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_495570:
    // 0x495570: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x495570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_495574:
    // 0x495574: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x495574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_495578:
    // 0x495578: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x495578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49557c:
    // 0x49557c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x49557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_495580:
    // 0x495580: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x495580u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_495584:
    // 0x495584: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_495588:
    if (ctx->pc == 0x495588u) {
        ctx->pc = 0x49558Cu;
        goto label_49558c;
    }
    ctx->pc = 0x495584u;
    {
        const bool branch_taken_0x495584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x495584) {
            ctx->pc = 0x495590u;
            goto label_495590;
        }
    }
    ctx->pc = 0x49558Cu;
label_49558c:
    // 0x49558c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x49558cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_495590:
    // 0x495590: 0x10000071  b           . + 4 + (0x71 << 2)
label_495594:
    if (ctx->pc == 0x495594u) {
        ctx->pc = 0x495594u;
            // 0x495594: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x495598u;
        goto label_495598;
    }
    ctx->pc = 0x495590u;
    {
        const bool branch_taken_0x495590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495590u;
            // 0x495594: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x495590) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x495598u;
label_495598:
    // 0x495598: 0x15e70021  bne         $t7, $a3, . + 4 + (0x21 << 2)
label_49559c:
    if (ctx->pc == 0x49559Cu) {
        ctx->pc = 0x4955A0u;
        goto label_4955a0;
    }
    ctx->pc = 0x495598u;
    {
        const bool branch_taken_0x495598 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 7));
        if (branch_taken_0x495598) {
            ctx->pc = 0x495620u;
            goto label_495620;
        }
    }
    ctx->pc = 0x4955A0u;
label_4955a0:
    // 0x4955a0: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x4955a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_4955a4:
    // 0x4955a4: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x4955a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_4955a8:
    // 0x4955a8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4955a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_4955ac:
    // 0x4955ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4955acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4955b0:
    // 0x4955b0: 0xaca60020  sw          $a2, 0x20($a1)
    ctx->pc = 0x4955b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
label_4955b4:
    // 0x4955b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4955b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4955b8:
    // 0x4955b8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4955b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4955bc:
    // 0x4955bc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4955bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4955c0:
    // 0x4955c0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_4955c4:
    if (ctx->pc == 0x4955C4u) {
        ctx->pc = 0x4955C8u;
        goto label_4955c8;
    }
    ctx->pc = 0x4955C0u;
    {
        const bool branch_taken_0x4955c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4955c0) {
            ctx->pc = 0x4955D8u;
            goto label_4955d8;
        }
    }
    ctx->pc = 0x4955C8u;
label_4955c8:
    // 0x4955c8: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x4955c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4955cc:
    // 0x4955cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4955ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4955d0:
    // 0x4955d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4955d4:
    if (ctx->pc == 0x4955D4u) {
        ctx->pc = 0x4955D4u;
            // 0x4955d4: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x4955D8u;
        goto label_4955d8;
    }
    ctx->pc = 0x4955D0u;
    {
        const bool branch_taken_0x4955d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4955D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4955D0u;
            // 0x4955d4: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4955d0) {
            ctx->pc = 0x4955E8u;
            goto label_4955e8;
        }
    }
    ctx->pc = 0x4955D8u;
label_4955d8:
    // 0x4955d8: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x4955d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4955dc:
    // 0x4955dc: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x4955dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4955e0:
    // 0x4955e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4955e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4955e4:
    // 0x4955e4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4955e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4955e8:
    // 0x4955e8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x4955e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_4955ec:
    // 0x4955ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4955ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4955f0:
    // 0x4955f0: 0x8ea400bc  lw          $a0, 0xBC($s5)
    ctx->pc = 0x4955f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4955f4:
    // 0x4955f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4955f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4955f8:
    // 0x4955f8: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x4955f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4955fc:
    // 0x4955fc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4955fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_495600:
    // 0x495600: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x495600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_495604:
    // 0x495604: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x495604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_495608:
    // 0x495608: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x495608u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49560c:
    // 0x49560c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_495610:
    if (ctx->pc == 0x495610u) {
        ctx->pc = 0x495614u;
        goto label_495614;
    }
    ctx->pc = 0x49560Cu;
    {
        const bool branch_taken_0x49560c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49560c) {
            ctx->pc = 0x495618u;
            goto label_495618;
        }
    }
    ctx->pc = 0x495614u;
label_495614:
    // 0x495614: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x495614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_495618:
    // 0x495618: 0x1000004f  b           . + 4 + (0x4F << 2)
label_49561c:
    if (ctx->pc == 0x49561Cu) {
        ctx->pc = 0x49561Cu;
            // 0x49561c: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x495620u;
        goto label_495620;
    }
    ctx->pc = 0x495618u;
    {
        const bool branch_taken_0x495618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49561Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495618u;
            // 0x49561c: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x495618) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x495620u;
label_495620:
    // 0x495620: 0x15e4001b  bne         $t7, $a0, . + 4 + (0x1B << 2)
label_495624:
    if (ctx->pc == 0x495624u) {
        ctx->pc = 0x495628u;
        goto label_495628;
    }
    ctx->pc = 0x495620u;
    {
        const bool branch_taken_0x495620 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 4));
        if (branch_taken_0x495620) {
            ctx->pc = 0x495690u;
            goto label_495690;
        }
    }
    ctx->pc = 0x495628u;
label_495628:
    // 0x495628: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x495628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_49562c:
    // 0x49562c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_495630:
    if (ctx->pc == 0x495630u) {
        ctx->pc = 0x495634u;
        goto label_495634;
    }
    ctx->pc = 0x49562Cu;
    {
        const bool branch_taken_0x49562c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x49562c) {
            ctx->pc = 0x495648u;
            goto label_495648;
        }
    }
    ctx->pc = 0x495634u;
label_495634:
    // 0x495634: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x495634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_495638:
    // 0x495638: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x495638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_49563c:
    // 0x49563c: 0x10000006  b           . + 4 + (0x6 << 2)
label_495640:
    if (ctx->pc == 0x495640u) {
        ctx->pc = 0x495640u;
            // 0x495640: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x495644u;
        goto label_495644;
    }
    ctx->pc = 0x49563Cu;
    {
        const bool branch_taken_0x49563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49563Cu;
            // 0x495640: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49563c) {
            ctx->pc = 0x495658u;
            goto label_495658;
        }
    }
    ctx->pc = 0x495644u;
label_495644:
    // 0x495644: 0x0  nop
    ctx->pc = 0x495644u;
    // NOP
label_495648:
    // 0x495648: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x495648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_49564c:
    // 0x49564c: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x49564cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_495650:
    // 0x495650: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x495650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_495654:
    // 0x495654: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x495654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_495658:
    // 0x495658: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x495658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_49565c:
    // 0x49565c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x49565cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_495660:
    // 0x495660: 0x8ea400bc  lw          $a0, 0xBC($s5)
    ctx->pc = 0x495660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_495664:
    // 0x495664: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x495664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_495668:
    // 0x495668: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x495668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_49566c:
    // 0x49566c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x49566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_495670:
    // 0x495670: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x495670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_495674:
    // 0x495674: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x495674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_495678:
    // 0x495678: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x495678u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49567c:
    // 0x49567c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_495680:
    if (ctx->pc == 0x495680u) {
        ctx->pc = 0x495684u;
        goto label_495684;
    }
    ctx->pc = 0x49567Cu;
    {
        const bool branch_taken_0x49567c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49567c) {
            ctx->pc = 0x495688u;
            goto label_495688;
        }
    }
    ctx->pc = 0x495684u;
label_495684:
    // 0x495684: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x495684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_495688:
    // 0x495688: 0x10000033  b           . + 4 + (0x33 << 2)
label_49568c:
    if (ctx->pc == 0x49568Cu) {
        ctx->pc = 0x49568Cu;
            // 0x49568c: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x495690u;
        goto label_495690;
    }
    ctx->pc = 0x495688u;
    {
        const bool branch_taken_0x495688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49568Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495688u;
            // 0x49568c: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x495688) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x495690u;
label_495690:
    // 0x495690: 0x15e3001d  bne         $t7, $v1, . + 4 + (0x1D << 2)
label_495694:
    if (ctx->pc == 0x495694u) {
        ctx->pc = 0x495698u;
        goto label_495698;
    }
    ctx->pc = 0x495690u;
    {
        const bool branch_taken_0x495690 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 3));
        if (branch_taken_0x495690) {
            ctx->pc = 0x495708u;
            goto label_495708;
        }
    }
    ctx->pc = 0x495698u;
label_495698:
    // 0x495698: 0x168a0005  bne         $s4, $t2, . + 4 + (0x5 << 2)
label_49569c:
    if (ctx->pc == 0x49569Cu) {
        ctx->pc = 0x4956A0u;
        goto label_4956a0;
    }
    ctx->pc = 0x495698u;
    {
        const bool branch_taken_0x495698 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 10));
        if (branch_taken_0x495698) {
            ctx->pc = 0x4956B0u;
            goto label_4956b0;
        }
    }
    ctx->pc = 0x4956A0u;
label_4956a0:
    // 0x4956a0: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x4956a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4956a4:
    // 0x4956a4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4956a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4956a8:
    // 0x4956a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4956ac:
    if (ctx->pc == 0x4956ACu) {
        ctx->pc = 0x4956ACu;
            // 0x4956ac: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x4956B0u;
        goto label_4956b0;
    }
    ctx->pc = 0x4956A8u;
    {
        const bool branch_taken_0x4956a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4956ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4956A8u;
            // 0x4956ac: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4956a8) {
            ctx->pc = 0x4956C0u;
            goto label_4956c0;
        }
    }
    ctx->pc = 0x4956B0u;
label_4956b0:
    // 0x4956b0: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x4956b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4956b4:
    // 0x4956b4: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x4956b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4956b8:
    // 0x4956b8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4956b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4956bc:
    // 0x4956bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4956bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4956c0:
    // 0x4956c0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x4956c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_4956c4:
    // 0x4956c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4956c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4956c8:
    // 0x4956c8: 0x8ea400bc  lw          $a0, 0xBC($s5)
    ctx->pc = 0x4956c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4956cc:
    // 0x4956cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4956ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4956d0:
    // 0x4956d0: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x4956d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4956d4:
    // 0x4956d4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4956d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4956d8:
    // 0x4956d8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4956d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4956dc:
    // 0x4956dc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4956dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4956e0:
    // 0x4956e0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4956e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4956e4:
    // 0x4956e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_4956e8:
    if (ctx->pc == 0x4956E8u) {
        ctx->pc = 0x4956ECu;
        goto label_4956ec;
    }
    ctx->pc = 0x4956E4u;
    {
        const bool branch_taken_0x4956e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4956e4) {
            ctx->pc = 0x4956F0u;
            goto label_4956f0;
        }
    }
    ctx->pc = 0x4956ECu;
label_4956ec:
    // 0x4956ec: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4956ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_4956f0:
    // 0x4956f0: 0x10000019  b           . + 4 + (0x19 << 2)
label_4956f4:
    if (ctx->pc == 0x4956F4u) {
        ctx->pc = 0x4956F4u;
            // 0x4956f4: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4956F8u;
        goto label_4956f8;
    }
    ctx->pc = 0x4956F0u;
    {
        const bool branch_taken_0x4956f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4956F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4956F0u;
            // 0x4956f4: 0x640e0001  daddiu      $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4956f0) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x4956F8u;
label_4956f8:
    // 0x4956f8: 0x28a082b  sltu        $at, $s4, $t2
    ctx->pc = 0x4956f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_4956fc:
    // 0x4956fc: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
label_495700:
    if (ctx->pc == 0x495700u) {
        ctx->pc = 0x495704u;
        goto label_495704;
    }
    ctx->pc = 0x4956FCu;
    {
        const bool branch_taken_0x4956fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4956fc) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x495704u;
label_495704:
    // 0x495704: 0x0  nop
    ctx->pc = 0x495704u;
    // NOP
label_495708:
    // 0x495708: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x495708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
label_49570c:
    // 0x49570c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x49570cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_495710:
    // 0x495710: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x495710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_495714:
    // 0x495714: 0x24d00004  addiu       $s0, $a2, 0x4
    ctx->pc = 0x495714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_495718:
    // 0x495718: 0xc303c  dsll32      $a2, $t4, 0
    ctx->pc = 0x495718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) << (32 + 0));
label_49571c:
    // 0x49571c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x49571cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_495720:
    // 0x495720: 0x120b000d  beq         $s0, $t3, . + 4 + (0xD << 2)
label_495724:
    if (ctx->pc == 0x495724u) {
        ctx->pc = 0x495724u;
            // 0x495724: 0x24cc0004  addiu       $t4, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x495728u;
        goto label_495728;
    }
    ctx->pc = 0x495720u;
    {
        const bool branch_taken_0x495720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        ctx->pc = 0x495724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495720u;
            // 0x495724: 0x24cc0004  addiu       $t4, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495720) {
            ctx->pc = 0x495758u;
            goto label_495758;
        }
    }
    ctx->pc = 0x495728u;
label_495728:
    // 0x495728: 0x158b0003  bne         $t4, $t3, . + 4 + (0x3 << 2)
label_49572c:
    if (ctx->pc == 0x49572Cu) {
        ctx->pc = 0x495730u;
        goto label_495730;
    }
    ctx->pc = 0x495728u;
    {
        const bool branch_taken_0x495728 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        if (branch_taken_0x495728) {
            ctx->pc = 0x495738u;
            goto label_495738;
        }
    }
    ctx->pc = 0x495730u;
label_495730:
    // 0x495730: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x495730u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_495734:
    // 0x495734: 0x0  nop
    ctx->pc = 0x495734u;
    // NOP
label_495738:
    // 0x495738: 0xc303c  dsll32      $a2, $t4, 0
    ctx->pc = 0x495738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) << (32 + 0));
label_49573c:
    // 0x49573c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x49573cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_495740:
    // 0x495740: 0xcb3026  xor         $a2, $a2, $t3
    ctx->pc = 0x495740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 11));
label_495744:
    // 0x495744: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x495744u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_495748:
    // 0x495748: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x495748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_49574c:
    // 0x49574c: 0x14c0fee6  bnez        $a2, . + 4 + (-0x11A << 2)
label_495750:
    if (ctx->pc == 0x495750u) {
        ctx->pc = 0x495754u;
        goto label_495754;
    }
    ctx->pc = 0x49574Cu;
    {
        const bool branch_taken_0x49574c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x49574c) {
            ctx->pc = 0x4952E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4952e8;
        }
    }
    ctx->pc = 0x495754u;
label_495754:
    // 0x495754: 0x0  nop
    ctx->pc = 0x495754u;
    // NOP
label_495758:
    // 0x495758: 0x31c300ff  andi        $v1, $t6, 0xFF
    ctx->pc = 0x495758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_49575c:
    // 0x49575c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_495760:
    if (ctx->pc == 0x495760u) {
        ctx->pc = 0x495764u;
        goto label_495764;
    }
    ctx->pc = 0x49575Cu;
    {
        const bool branch_taken_0x49575c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49575c) {
            ctx->pc = 0x495838u;
            goto label_495838;
        }
    }
    ctx->pc = 0x495764u;
label_495764:
    // 0x495764: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x495764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_495768:
    // 0x495768: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x495768u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_49576c:
    // 0x49576c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x49576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_495770:
    // 0x495770: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x495770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_495774:
    // 0x495774: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_495778:
    if (ctx->pc == 0x495778u) {
        ctx->pc = 0x49577Cu;
        goto label_49577c;
    }
    ctx->pc = 0x495774u;
    {
        const bool branch_taken_0x495774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x495774) {
            ctx->pc = 0x495790u;
            goto label_495790;
        }
    }
    ctx->pc = 0x49577Cu;
label_49577c:
    // 0x49577c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49577cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_495780:
    // 0x495780: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x495780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_495784:
    // 0x495784: 0x320f809  jalr        $t9
label_495788:
    if (ctx->pc == 0x495788u) {
        ctx->pc = 0x495788u;
            // 0x495788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49578Cu;
        goto label_49578c;
    }
    ctx->pc = 0x495784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49578Cu);
        ctx->pc = 0x495788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495784u;
            // 0x495788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49578Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49578Cu; }
            if (ctx->pc != 0x49578Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49578Cu;
label_49578c:
    // 0x49578c: 0x0  nop
    ctx->pc = 0x49578cu;
    // NOP
label_495790:
    // 0x495790: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x495790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_495794:
    // 0x495794: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x495794u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_495798:
    // 0x495798: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x495798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49579c:
    // 0x49579c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x49579cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_4957a0:
    // 0x4957a0: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x4957a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4957a4:
    // 0x4957a4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4957a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4957a8:
    // 0x4957a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4957a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4957ac:
    // 0x4957ac: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4957acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4957b0:
    // 0x4957b0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x4957b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4957b4:
    // 0x4957b4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4957b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4957b8:
    // 0x4957b8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4957b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4957bc:
    // 0x4957bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4957bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4957c0:
    // 0x4957c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4957c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4957c4:
    // 0x4957c4: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x4957c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
label_4957c8:
    // 0x4957c8: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x4957c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4957cc:
    // 0x4957cc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4957ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4957d0:
    // 0x4957d0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x4957d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4957d4:
    // 0x4957d4: 0x8c66fffc  lw          $a2, -0x4($v1)
    ctx->pc = 0x4957d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4957d8:
    // 0x4957d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4957d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4957dc:
    // 0x4957dc: 0x74082b  sltu        $at, $v1, $s4
    ctx->pc = 0x4957dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4957e0:
    // 0x4957e0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_4957e4:
    if (ctx->pc == 0x4957E4u) {
        ctx->pc = 0x4957E8u;
        goto label_4957e8;
    }
    ctx->pc = 0x4957E0u;
    {
        const bool branch_taken_0x4957e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4957e0) {
            ctx->pc = 0x495838u;
            goto label_495838;
        }
    }
    ctx->pc = 0x4957E8u;
label_4957e8:
    // 0x4957e8: 0x8ea7003c  lw          $a3, 0x3C($s5)
    ctx->pc = 0x4957e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_4957ec:
    // 0x4957ec: 0xc1252fc  jal         func_494BF0
label_4957f0:
    if (ctx->pc == 0x4957F0u) {
        ctx->pc = 0x4957F0u;
            // 0x4957f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4957F4u;
        goto label_4957f4;
    }
    ctx->pc = 0x4957ECu;
    SET_GPR_U32(ctx, 31, 0x4957F4u);
    ctx->pc = 0x4957F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4957ECu;
            // 0x4957f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494BF0u;
    goto label_494bf0;
    ctx->pc = 0x4957F4u;
label_4957f4:
    // 0x4957f4: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x4957f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
label_4957f8:
    // 0x4957f8: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x4957f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_4957fc:
    // 0x4957fc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x4957fcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_495800:
    // 0x495800: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x495800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_495804:
    // 0x495804: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x495804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_495808:
    // 0x495808: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x495808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49580c:
    // 0x49580c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x49580cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_495810:
    // 0x495810: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x495810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_495814:
    // 0x495814: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x495814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_495818:
    // 0x495818: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x495818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49581c:
    // 0x49581c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x49581cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_495820:
    // 0x495820: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_495824:
    if (ctx->pc == 0x495824u) {
        ctx->pc = 0x495828u;
        goto label_495828;
    }
    ctx->pc = 0x495820u;
    {
        const bool branch_taken_0x495820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x495820) {
            ctx->pc = 0x495838u;
            goto label_495838;
        }
    }
    ctx->pc = 0x495828u;
label_495828:
    // 0x495828: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x495828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49582c:
    // 0x49582c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x49582cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_495830:
    // 0x495830: 0x320f809  jalr        $t9
label_495834:
    if (ctx->pc == 0x495834u) {
        ctx->pc = 0x495834u;
            // 0x495834: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x495838u;
        goto label_495838;
    }
    ctx->pc = 0x495830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x495838u);
        ctx->pc = 0x495834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495830u;
            // 0x495834: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x495838u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x495838u; }
            if (ctx->pc != 0x495838u) { return; }
        }
        }
    }
    ctx->pc = 0x495838u;
label_495838:
    // 0x495838: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x495838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_49583c:
    // 0x49583c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x49583cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_495840:
    // 0x495840: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x495840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_495844:
    // 0x495844: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x495844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_495848:
    // 0x495848: 0x8ea3002c  lw          $v1, 0x2C($s5)
    ctx->pc = 0x495848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_49584c:
    // 0x49584c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x49584cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_495850:
    // 0x495850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x495850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_495854:
    // 0x495854: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x495854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
label_495858:
    // 0x495858: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x495858u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_49585c:
    // 0x49585c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x49585cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_495860:
    // 0x495860: 0x1460fe87  bnez        $v1, . + 4 + (-0x179 << 2)
label_495864:
    if (ctx->pc == 0x495864u) {
        ctx->pc = 0x495864u;
            // 0x495864: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x495868u;
        goto label_495868;
    }
    ctx->pc = 0x495860u;
    {
        const bool branch_taken_0x495860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x495864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495860u;
            // 0x495864: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495860) {
            ctx->pc = 0x495280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_495280;
        }
    }
    ctx->pc = 0x495868u;
label_495868:
    // 0x495868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x495868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49586c:
    // 0x49586c: 0xa2a300c0  sb          $v1, 0xC0($s5)
    ctx->pc = 0x49586cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 192), (uint8_t)GPR_U32(ctx, 3));
label_495870:
    // 0x495870: 0xaea000a8  sw          $zero, 0xA8($s5)
    ctx->pc = 0x495870u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 168), GPR_U32(ctx, 0));
label_495874:
    // 0x495874: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x495874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_495878:
    // 0x495878: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x495878u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49587c:
    // 0x49587c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x49587cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_495880:
    // 0x495880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x495880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_495884:
    // 0x495884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x495884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_495888:
    // 0x495888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x495888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49588c:
    // 0x49588c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49588cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_495890:
    // 0x495890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x495890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_495894:
    // 0x495894: 0x3e00008  jr          $ra
label_495898:
    if (ctx->pc == 0x495898u) {
        ctx->pc = 0x495898u;
            // 0x495898: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x49589Cu;
        goto label_49589c;
    }
    ctx->pc = 0x495894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495894u;
            // 0x495898: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49589Cu;
label_49589c:
    // 0x49589c: 0x0  nop
    ctx->pc = 0x49589cu;
    // NOP
label_4958a0:
    // 0x4958a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4958a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4958a4:
    // 0x4958a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4958a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4958a8:
    // 0x4958a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4958a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4958ac:
    // 0x4958ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4958acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4958b0:
    // 0x4958b0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4958b4:
    if (ctx->pc == 0x4958B4u) {
        ctx->pc = 0x4958B4u;
            // 0x4958b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4958B8u;
        goto label_4958b8;
    }
    ctx->pc = 0x4958B0u;
    {
        const bool branch_taken_0x4958b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4958b0) {
            ctx->pc = 0x4958B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4958B0u;
            // 0x4958b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4958F0u;
            goto label_4958f0;
        }
    }
    ctx->pc = 0x4958B8u;
label_4958b8:
    // 0x4958b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4958b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4958bc:
    // 0x4958bc: 0x2442f970  addiu       $v0, $v0, -0x690
    ctx->pc = 0x4958bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965616));
label_4958c0:
    // 0x4958c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4958c4:
    if (ctx->pc == 0x4958C4u) {
        ctx->pc = 0x4958C4u;
            // 0x4958c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4958C8u;
        goto label_4958c8;
    }
    ctx->pc = 0x4958C0u;
    {
        const bool branch_taken_0x4958c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4958C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4958C0u;
            // 0x4958c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4958c0) {
            ctx->pc = 0x4958D4u;
            goto label_4958d4;
        }
    }
    ctx->pc = 0x4958C8u;
label_4958c8:
    // 0x4958c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4958c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4958cc:
    // 0x4958cc: 0x2442f9c0  addiu       $v0, $v0, -0x640
    ctx->pc = 0x4958ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965696));
label_4958d0:
    // 0x4958d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4958d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4958d4:
    // 0x4958d4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x4958d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_4958d8:
    // 0x4958d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4958d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4958dc:
    // 0x4958dc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_4958e0:
    if (ctx->pc == 0x4958E0u) {
        ctx->pc = 0x4958E4u;
        goto label_4958e4;
    }
    ctx->pc = 0x4958DCu;
    {
        const bool branch_taken_0x4958dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4958dc) {
            ctx->pc = 0x4958ECu;
            goto label_4958ec;
        }
    }
    ctx->pc = 0x4958E4u;
label_4958e4:
    // 0x4958e4: 0xc0400a8  jal         func_1002A0
label_4958e8:
    if (ctx->pc == 0x4958E8u) {
        ctx->pc = 0x4958E8u;
            // 0x4958e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4958ECu;
        goto label_4958ec;
    }
    ctx->pc = 0x4958E4u;
    SET_GPR_U32(ctx, 31, 0x4958ECu);
    ctx->pc = 0x4958E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4958E4u;
            // 0x4958e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4958ECu; }
        if (ctx->pc != 0x4958ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4958ECu; }
        if (ctx->pc != 0x4958ECu) { return; }
    }
    ctx->pc = 0x4958ECu;
label_4958ec:
    // 0x4958ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4958ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4958f0:
    // 0x4958f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4958f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4958f4:
    // 0x4958f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4958f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4958f8:
    // 0x4958f8: 0x3e00008  jr          $ra
label_4958fc:
    if (ctx->pc == 0x4958FCu) {
        ctx->pc = 0x4958FCu;
            // 0x4958fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x495900u;
        goto label_495900;
    }
    ctx->pc = 0x4958F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4958FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4958F8u;
            // 0x4958fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495900u;
label_495900:
    // 0x495900: 0x3e00008  jr          $ra
label_495904:
    if (ctx->pc == 0x495904u) {
        ctx->pc = 0x495908u;
        goto label_495908;
    }
    ctx->pc = 0x495900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495908u;
label_495908:
    // 0x495908: 0x0  nop
    ctx->pc = 0x495908u;
    // NOP
label_49590c:
    // 0x49590c: 0x0  nop
    ctx->pc = 0x49590cu;
    // NOP
label_495910:
    // 0x495910: 0x3e00008  jr          $ra
label_495914:
    if (ctx->pc == 0x495914u) {
        ctx->pc = 0x495914u;
            // 0x495914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x495918u;
        goto label_495918;
    }
    ctx->pc = 0x495910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495910u;
            // 0x495914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495918u;
label_495918:
    // 0x495918: 0x0  nop
    ctx->pc = 0x495918u;
    // NOP
label_49591c:
    // 0x49591c: 0x0  nop
    ctx->pc = 0x49591cu;
    // NOP
label_495920:
    // 0x495920: 0x3e00008  jr          $ra
label_495924:
    if (ctx->pc == 0x495924u) {
        ctx->pc = 0x495924u;
            // 0x495924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x495928u;
        goto label_495928;
    }
    ctx->pc = 0x495920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495920u;
            // 0x495924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495928u;
label_495928:
    // 0x495928: 0x0  nop
    ctx->pc = 0x495928u;
    // NOP
label_49592c:
    // 0x49592c: 0x0  nop
    ctx->pc = 0x49592cu;
    // NOP
label_495930:
    // 0x495930: 0x3e00008  jr          $ra
label_495934:
    if (ctx->pc == 0x495934u) {
        ctx->pc = 0x495938u;
        goto label_495938;
    }
    ctx->pc = 0x495930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495938u;
label_495938:
    // 0x495938: 0x0  nop
    ctx->pc = 0x495938u;
    // NOP
label_49593c:
    // 0x49593c: 0x0  nop
    ctx->pc = 0x49593cu;
    // NOP
label_495940:
    // 0x495940: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x495940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_495944:
    // 0x495944: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x495944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_495948:
    // 0x495948: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x495948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_49594c:
    // 0x49594c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x49594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_495950:
    // 0x495950: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x495950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_495954:
    // 0x495954: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_495958:
    if (ctx->pc == 0x495958u) {
        ctx->pc = 0x495958u;
            // 0x495958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49595Cu;
        goto label_49595c;
    }
    ctx->pc = 0x495954u;
    {
        const bool branch_taken_0x495954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x495954) {
            ctx->pc = 0x495958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x495954u;
            // 0x495958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49597Cu;
            goto label_49597c;
        }
    }
    ctx->pc = 0x49595Cu;
label_49595c:
    // 0x49595c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x49595cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_495960:
    // 0x495960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x495960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495964:
    // 0x495964: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x495964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_495968:
    // 0x495968: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_49596c:
    if (ctx->pc == 0x49596Cu) {
        ctx->pc = 0x495970u;
        goto label_495970;
    }
    ctx->pc = 0x495968u;
    {
        const bool branch_taken_0x495968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x495968) {
            ctx->pc = 0x495978u;
            goto label_495978;
        }
    }
    ctx->pc = 0x495970u;
label_495970:
    // 0x495970: 0x10000002  b           . + 4 + (0x2 << 2)
label_495974:
    if (ctx->pc == 0x495974u) {
        ctx->pc = 0x495974u;
            // 0x495974: 0xa082001c  sb          $v0, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x495978u;
        goto label_495978;
    }
    ctx->pc = 0x495970u;
    {
        const bool branch_taken_0x495970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495970u;
            // 0x495974: 0xa082001c  sb          $v0, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495970) {
            ctx->pc = 0x49597Cu;
            goto label_49597c;
        }
    }
    ctx->pc = 0x495978u;
label_495978:
    // 0x495978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x495978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49597c:
    // 0x49597c: 0x3e00008  jr          $ra
label_495980:
    if (ctx->pc == 0x495980u) {
        ctx->pc = 0x495984u;
        goto label_495984;
    }
    ctx->pc = 0x49597Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495984u;
label_495984:
    // 0x495984: 0x0  nop
    ctx->pc = 0x495984u;
    // NOP
label_495988:
    // 0x495988: 0x0  nop
    ctx->pc = 0x495988u;
    // NOP
label_49598c:
    // 0x49598c: 0x0  nop
    ctx->pc = 0x49598cu;
    // NOP
label_495990:
    // 0x495990: 0x3e00008  jr          $ra
label_495994:
    if (ctx->pc == 0x495994u) {
        ctx->pc = 0x495994u;
            // 0x495994: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->pc = 0x495998u;
        goto label_495998;
    }
    ctx->pc = 0x495990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495990u;
            // 0x495994: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495998u;
label_495998:
    // 0x495998: 0x0  nop
    ctx->pc = 0x495998u;
    // NOP
label_49599c:
    // 0x49599c: 0x0  nop
    ctx->pc = 0x49599cu;
    // NOP
label_4959a0:
    // 0x4959a0: 0x3e00008  jr          $ra
label_4959a4:
    if (ctx->pc == 0x4959A4u) {
        ctx->pc = 0x4959A4u;
            // 0x4959a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4959A8u;
        goto label_4959a8;
    }
    ctx->pc = 0x4959A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4959A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4959A0u;
            // 0x4959a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4959A8u;
label_4959a8:
    // 0x4959a8: 0x0  nop
    ctx->pc = 0x4959a8u;
    // NOP
label_4959ac:
    // 0x4959ac: 0x0  nop
    ctx->pc = 0x4959acu;
    // NOP
label_4959b0:
    // 0x4959b0: 0x3e00008  jr          $ra
label_4959b4:
    if (ctx->pc == 0x4959B4u) {
        ctx->pc = 0x4959B8u;
        goto label_4959b8;
    }
    ctx->pc = 0x4959B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4959B8u;
label_4959b8:
    // 0x4959b8: 0x0  nop
    ctx->pc = 0x4959b8u;
    // NOP
label_4959bc:
    // 0x4959bc: 0x0  nop
    ctx->pc = 0x4959bcu;
    // NOP
label_4959c0:
    // 0x4959c0: 0x3e00008  jr          $ra
label_4959c4:
    if (ctx->pc == 0x4959C4u) {
        ctx->pc = 0x4959C4u;
            // 0x4959c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4959C8u;
        goto label_4959c8;
    }
    ctx->pc = 0x4959C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4959C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4959C0u;
            // 0x4959c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4959C8u;
label_4959c8:
    // 0x4959c8: 0x0  nop
    ctx->pc = 0x4959c8u;
    // NOP
label_4959cc:
    // 0x4959cc: 0x0  nop
    ctx->pc = 0x4959ccu;
    // NOP
label_4959d0:
    // 0x4959d0: 0x3e00008  jr          $ra
label_4959d4:
    if (ctx->pc == 0x4959D4u) {
        ctx->pc = 0x4959D4u;
            // 0x4959d4: 0x90820039  lbu         $v0, 0x39($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
        ctx->pc = 0x4959D8u;
        goto label_4959d8;
    }
    ctx->pc = 0x4959D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4959D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4959D0u;
            // 0x4959d4: 0x90820039  lbu         $v0, 0x39($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4959D8u;
label_4959d8:
    // 0x4959d8: 0x0  nop
    ctx->pc = 0x4959d8u;
    // NOP
label_4959dc:
    // 0x4959dc: 0x0  nop
    ctx->pc = 0x4959dcu;
    // NOP
label_4959e0:
    // 0x4959e0: 0x3e00008  jr          $ra
label_4959e4:
    if (ctx->pc == 0x4959E4u) {
        ctx->pc = 0x4959E4u;
            // 0x4959e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4959E8u;
        goto label_4959e8;
    }
    ctx->pc = 0x4959E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4959E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4959E0u;
            // 0x4959e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4959E8u;
label_4959e8:
    // 0x4959e8: 0x0  nop
    ctx->pc = 0x4959e8u;
    // NOP
label_4959ec:
    // 0x4959ec: 0x0  nop
    ctx->pc = 0x4959ecu;
    // NOP
label_4959f0:
    // 0x4959f0: 0x3e00008  jr          $ra
label_4959f4:
    if (ctx->pc == 0x4959F4u) {
        ctx->pc = 0x4959F4u;
            // 0x4959f4: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->pc = 0x4959F8u;
        goto label_4959f8;
    }
    ctx->pc = 0x4959F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4959F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4959F0u;
            // 0x4959f4: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4959F8u;
label_4959f8:
    // 0x4959f8: 0x0  nop
    ctx->pc = 0x4959f8u;
    // NOP
label_4959fc:
    // 0x4959fc: 0x0  nop
    ctx->pc = 0x4959fcu;
    // NOP
label_495a00:
    // 0x495a00: 0x3e00008  jr          $ra
label_495a04:
    if (ctx->pc == 0x495A04u) {
        ctx->pc = 0x495A04u;
            // 0x495a04: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->pc = 0x495A08u;
        goto label_495a08;
    }
    ctx->pc = 0x495A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495A00u;
            // 0x495a04: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495A08u;
label_495a08:
    // 0x495a08: 0x0  nop
    ctx->pc = 0x495a08u;
    // NOP
label_495a0c:
    // 0x495a0c: 0x0  nop
    ctx->pc = 0x495a0cu;
    // NOP
label_495a10:
    // 0x495a10: 0x3e00008  jr          $ra
label_495a14:
    if (ctx->pc == 0x495A14u) {
        ctx->pc = 0x495A14u;
            // 0x495a14: 0xac85003c  sw          $a1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
        ctx->pc = 0x495A18u;
        goto label_495a18;
    }
    ctx->pc = 0x495A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495A10u;
            // 0x495a14: 0xac85003c  sw          $a1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495A18u;
label_495a18:
    // 0x495a18: 0x0  nop
    ctx->pc = 0x495a18u;
    // NOP
label_495a1c:
    // 0x495a1c: 0x0  nop
    ctx->pc = 0x495a1cu;
    // NOP
label_495a20:
    // 0x495a20: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x495a20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_495a24:
    // 0x495a24: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x495a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_495a28:
    // 0x495a28: 0x3e00008  jr          $ra
label_495a2c:
    if (ctx->pc == 0x495A2Cu) {
        ctx->pc = 0x495A2Cu;
            // 0x495a2c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x495A30u;
        goto label_495a30;
    }
    ctx->pc = 0x495A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495A28u;
            // 0x495a2c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495A30u;
label_495a30:
    // 0x495a30: 0x3e00008  jr          $ra
label_495a34:
    if (ctx->pc == 0x495A34u) {
        ctx->pc = 0x495A34u;
            // 0x495a34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x495A38u;
        goto label_495a38;
    }
    ctx->pc = 0x495A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495A30u;
            // 0x495a34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495A38u;
label_495a38:
    // 0x495a38: 0x0  nop
    ctx->pc = 0x495a38u;
    // NOP
label_495a3c:
    // 0x495a3c: 0x0  nop
    ctx->pc = 0x495a3cu;
    // NOP
}
