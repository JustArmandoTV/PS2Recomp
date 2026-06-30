#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00163C58
// Address: 0x163c58 - 0x164338
void sub_00163C58_0x163c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163C58_0x163c58");
#endif

    switch (ctx->pc) {
        case 0x163c58u: goto label_163c58;
        case 0x163c5cu: goto label_163c5c;
        case 0x163c60u: goto label_163c60;
        case 0x163c64u: goto label_163c64;
        case 0x163c68u: goto label_163c68;
        case 0x163c6cu: goto label_163c6c;
        case 0x163c70u: goto label_163c70;
        case 0x163c74u: goto label_163c74;
        case 0x163c78u: goto label_163c78;
        case 0x163c7cu: goto label_163c7c;
        case 0x163c80u: goto label_163c80;
        case 0x163c84u: goto label_163c84;
        case 0x163c88u: goto label_163c88;
        case 0x163c8cu: goto label_163c8c;
        case 0x163c90u: goto label_163c90;
        case 0x163c94u: goto label_163c94;
        case 0x163c98u: goto label_163c98;
        case 0x163c9cu: goto label_163c9c;
        case 0x163ca0u: goto label_163ca0;
        case 0x163ca4u: goto label_163ca4;
        case 0x163ca8u: goto label_163ca8;
        case 0x163cacu: goto label_163cac;
        case 0x163cb0u: goto label_163cb0;
        case 0x163cb4u: goto label_163cb4;
        case 0x163cb8u: goto label_163cb8;
        case 0x163cbcu: goto label_163cbc;
        case 0x163cc0u: goto label_163cc0;
        case 0x163cc4u: goto label_163cc4;
        case 0x163cc8u: goto label_163cc8;
        case 0x163cccu: goto label_163ccc;
        case 0x163cd0u: goto label_163cd0;
        case 0x163cd4u: goto label_163cd4;
        case 0x163cd8u: goto label_163cd8;
        case 0x163cdcu: goto label_163cdc;
        case 0x163ce0u: goto label_163ce0;
        case 0x163ce4u: goto label_163ce4;
        case 0x163ce8u: goto label_163ce8;
        case 0x163cecu: goto label_163cec;
        case 0x163cf0u: goto label_163cf0;
        case 0x163cf4u: goto label_163cf4;
        case 0x163cf8u: goto label_163cf8;
        case 0x163cfcu: goto label_163cfc;
        case 0x163d00u: goto label_163d00;
        case 0x163d04u: goto label_163d04;
        case 0x163d08u: goto label_163d08;
        case 0x163d0cu: goto label_163d0c;
        case 0x163d10u: goto label_163d10;
        case 0x163d14u: goto label_163d14;
        case 0x163d18u: goto label_163d18;
        case 0x163d1cu: goto label_163d1c;
        case 0x163d20u: goto label_163d20;
        case 0x163d24u: goto label_163d24;
        case 0x163d28u: goto label_163d28;
        case 0x163d2cu: goto label_163d2c;
        case 0x163d30u: goto label_163d30;
        case 0x163d34u: goto label_163d34;
        case 0x163d38u: goto label_163d38;
        case 0x163d3cu: goto label_163d3c;
        case 0x163d40u: goto label_163d40;
        case 0x163d44u: goto label_163d44;
        case 0x163d48u: goto label_163d48;
        case 0x163d4cu: goto label_163d4c;
        case 0x163d50u: goto label_163d50;
        case 0x163d54u: goto label_163d54;
        case 0x163d58u: goto label_163d58;
        case 0x163d5cu: goto label_163d5c;
        case 0x163d60u: goto label_163d60;
        case 0x163d64u: goto label_163d64;
        case 0x163d68u: goto label_163d68;
        case 0x163d6cu: goto label_163d6c;
        case 0x163d70u: goto label_163d70;
        case 0x163d74u: goto label_163d74;
        case 0x163d78u: goto label_163d78;
        case 0x163d7cu: goto label_163d7c;
        case 0x163d80u: goto label_163d80;
        case 0x163d84u: goto label_163d84;
        case 0x163d88u: goto label_163d88;
        case 0x163d8cu: goto label_163d8c;
        case 0x163d90u: goto label_163d90;
        case 0x163d94u: goto label_163d94;
        case 0x163d98u: goto label_163d98;
        case 0x163d9cu: goto label_163d9c;
        case 0x163da0u: goto label_163da0;
        case 0x163da4u: goto label_163da4;
        case 0x163da8u: goto label_163da8;
        case 0x163dacu: goto label_163dac;
        case 0x163db0u: goto label_163db0;
        case 0x163db4u: goto label_163db4;
        case 0x163db8u: goto label_163db8;
        case 0x163dbcu: goto label_163dbc;
        case 0x163dc0u: goto label_163dc0;
        case 0x163dc4u: goto label_163dc4;
        case 0x163dc8u: goto label_163dc8;
        case 0x163dccu: goto label_163dcc;
        case 0x163dd0u: goto label_163dd0;
        case 0x163dd4u: goto label_163dd4;
        case 0x163dd8u: goto label_163dd8;
        case 0x163ddcu: goto label_163ddc;
        case 0x163de0u: goto label_163de0;
        case 0x163de4u: goto label_163de4;
        case 0x163de8u: goto label_163de8;
        case 0x163decu: goto label_163dec;
        case 0x163df0u: goto label_163df0;
        case 0x163df4u: goto label_163df4;
        case 0x163df8u: goto label_163df8;
        case 0x163dfcu: goto label_163dfc;
        case 0x163e00u: goto label_163e00;
        case 0x163e04u: goto label_163e04;
        case 0x163e08u: goto label_163e08;
        case 0x163e0cu: goto label_163e0c;
        case 0x163e10u: goto label_163e10;
        case 0x163e14u: goto label_163e14;
        case 0x163e18u: goto label_163e18;
        case 0x163e1cu: goto label_163e1c;
        case 0x163e20u: goto label_163e20;
        case 0x163e24u: goto label_163e24;
        case 0x163e28u: goto label_163e28;
        case 0x163e2cu: goto label_163e2c;
        case 0x163e30u: goto label_163e30;
        case 0x163e34u: goto label_163e34;
        case 0x163e38u: goto label_163e38;
        case 0x163e3cu: goto label_163e3c;
        case 0x163e40u: goto label_163e40;
        case 0x163e44u: goto label_163e44;
        case 0x163e48u: goto label_163e48;
        case 0x163e4cu: goto label_163e4c;
        case 0x163e50u: goto label_163e50;
        case 0x163e54u: goto label_163e54;
        case 0x163e58u: goto label_163e58;
        case 0x163e5cu: goto label_163e5c;
        case 0x163e60u: goto label_163e60;
        case 0x163e64u: goto label_163e64;
        case 0x163e68u: goto label_163e68;
        case 0x163e6cu: goto label_163e6c;
        case 0x163e70u: goto label_163e70;
        case 0x163e74u: goto label_163e74;
        case 0x163e78u: goto label_163e78;
        case 0x163e7cu: goto label_163e7c;
        case 0x163e80u: goto label_163e80;
        case 0x163e84u: goto label_163e84;
        case 0x163e88u: goto label_163e88;
        case 0x163e8cu: goto label_163e8c;
        case 0x163e90u: goto label_163e90;
        case 0x163e94u: goto label_163e94;
        case 0x163e98u: goto label_163e98;
        case 0x163e9cu: goto label_163e9c;
        case 0x163ea0u: goto label_163ea0;
        case 0x163ea4u: goto label_163ea4;
        case 0x163ea8u: goto label_163ea8;
        case 0x163eacu: goto label_163eac;
        case 0x163eb0u: goto label_163eb0;
        case 0x163eb4u: goto label_163eb4;
        case 0x163eb8u: goto label_163eb8;
        case 0x163ebcu: goto label_163ebc;
        case 0x163ec0u: goto label_163ec0;
        case 0x163ec4u: goto label_163ec4;
        case 0x163ec8u: goto label_163ec8;
        case 0x163eccu: goto label_163ecc;
        case 0x163ed0u: goto label_163ed0;
        case 0x163ed4u: goto label_163ed4;
        case 0x163ed8u: goto label_163ed8;
        case 0x163edcu: goto label_163edc;
        case 0x163ee0u: goto label_163ee0;
        case 0x163ee4u: goto label_163ee4;
        case 0x163ee8u: goto label_163ee8;
        case 0x163eecu: goto label_163eec;
        case 0x163ef0u: goto label_163ef0;
        case 0x163ef4u: goto label_163ef4;
        case 0x163ef8u: goto label_163ef8;
        case 0x163efcu: goto label_163efc;
        case 0x163f00u: goto label_163f00;
        case 0x163f04u: goto label_163f04;
        case 0x163f08u: goto label_163f08;
        case 0x163f0cu: goto label_163f0c;
        case 0x163f10u: goto label_163f10;
        case 0x163f14u: goto label_163f14;
        case 0x163f18u: goto label_163f18;
        case 0x163f1cu: goto label_163f1c;
        case 0x163f20u: goto label_163f20;
        case 0x163f24u: goto label_163f24;
        case 0x163f28u: goto label_163f28;
        case 0x163f2cu: goto label_163f2c;
        case 0x163f30u: goto label_163f30;
        case 0x163f34u: goto label_163f34;
        case 0x163f38u: goto label_163f38;
        case 0x163f3cu: goto label_163f3c;
        case 0x163f40u: goto label_163f40;
        case 0x163f44u: goto label_163f44;
        case 0x163f48u: goto label_163f48;
        case 0x163f4cu: goto label_163f4c;
        case 0x163f50u: goto label_163f50;
        case 0x163f54u: goto label_163f54;
        case 0x163f58u: goto label_163f58;
        case 0x163f5cu: goto label_163f5c;
        case 0x163f60u: goto label_163f60;
        case 0x163f64u: goto label_163f64;
        case 0x163f68u: goto label_163f68;
        case 0x163f6cu: goto label_163f6c;
        case 0x163f70u: goto label_163f70;
        case 0x163f74u: goto label_163f74;
        case 0x163f78u: goto label_163f78;
        case 0x163f7cu: goto label_163f7c;
        case 0x163f80u: goto label_163f80;
        case 0x163f84u: goto label_163f84;
        case 0x163f88u: goto label_163f88;
        case 0x163f8cu: goto label_163f8c;
        case 0x163f90u: goto label_163f90;
        case 0x163f94u: goto label_163f94;
        case 0x163f98u: goto label_163f98;
        case 0x163f9cu: goto label_163f9c;
        case 0x163fa0u: goto label_163fa0;
        case 0x163fa4u: goto label_163fa4;
        case 0x163fa8u: goto label_163fa8;
        case 0x163facu: goto label_163fac;
        case 0x163fb0u: goto label_163fb0;
        case 0x163fb4u: goto label_163fb4;
        case 0x163fb8u: goto label_163fb8;
        case 0x163fbcu: goto label_163fbc;
        case 0x163fc0u: goto label_163fc0;
        case 0x163fc4u: goto label_163fc4;
        case 0x163fc8u: goto label_163fc8;
        case 0x163fccu: goto label_163fcc;
        case 0x163fd0u: goto label_163fd0;
        case 0x163fd4u: goto label_163fd4;
        case 0x163fd8u: goto label_163fd8;
        case 0x163fdcu: goto label_163fdc;
        case 0x163fe0u: goto label_163fe0;
        case 0x163fe4u: goto label_163fe4;
        case 0x163fe8u: goto label_163fe8;
        case 0x163fecu: goto label_163fec;
        case 0x163ff0u: goto label_163ff0;
        case 0x163ff4u: goto label_163ff4;
        case 0x163ff8u: goto label_163ff8;
        case 0x163ffcu: goto label_163ffc;
        case 0x164000u: goto label_164000;
        case 0x164004u: goto label_164004;
        case 0x164008u: goto label_164008;
        case 0x16400cu: goto label_16400c;
        case 0x164010u: goto label_164010;
        case 0x164014u: goto label_164014;
        case 0x164018u: goto label_164018;
        case 0x16401cu: goto label_16401c;
        case 0x164020u: goto label_164020;
        case 0x164024u: goto label_164024;
        case 0x164028u: goto label_164028;
        case 0x16402cu: goto label_16402c;
        case 0x164030u: goto label_164030;
        case 0x164034u: goto label_164034;
        case 0x164038u: goto label_164038;
        case 0x16403cu: goto label_16403c;
        case 0x164040u: goto label_164040;
        case 0x164044u: goto label_164044;
        case 0x164048u: goto label_164048;
        case 0x16404cu: goto label_16404c;
        case 0x164050u: goto label_164050;
        case 0x164054u: goto label_164054;
        case 0x164058u: goto label_164058;
        case 0x16405cu: goto label_16405c;
        case 0x164060u: goto label_164060;
        case 0x164064u: goto label_164064;
        case 0x164068u: goto label_164068;
        case 0x16406cu: goto label_16406c;
        case 0x164070u: goto label_164070;
        case 0x164074u: goto label_164074;
        case 0x164078u: goto label_164078;
        case 0x16407cu: goto label_16407c;
        case 0x164080u: goto label_164080;
        case 0x164084u: goto label_164084;
        case 0x164088u: goto label_164088;
        case 0x16408cu: goto label_16408c;
        case 0x164090u: goto label_164090;
        case 0x164094u: goto label_164094;
        case 0x164098u: goto label_164098;
        case 0x16409cu: goto label_16409c;
        case 0x1640a0u: goto label_1640a0;
        case 0x1640a4u: goto label_1640a4;
        case 0x1640a8u: goto label_1640a8;
        case 0x1640acu: goto label_1640ac;
        case 0x1640b0u: goto label_1640b0;
        case 0x1640b4u: goto label_1640b4;
        case 0x1640b8u: goto label_1640b8;
        case 0x1640bcu: goto label_1640bc;
        case 0x1640c0u: goto label_1640c0;
        case 0x1640c4u: goto label_1640c4;
        case 0x1640c8u: goto label_1640c8;
        case 0x1640ccu: goto label_1640cc;
        case 0x1640d0u: goto label_1640d0;
        case 0x1640d4u: goto label_1640d4;
        case 0x1640d8u: goto label_1640d8;
        case 0x1640dcu: goto label_1640dc;
        case 0x1640e0u: goto label_1640e0;
        case 0x1640e4u: goto label_1640e4;
        case 0x1640e8u: goto label_1640e8;
        case 0x1640ecu: goto label_1640ec;
        case 0x1640f0u: goto label_1640f0;
        case 0x1640f4u: goto label_1640f4;
        case 0x1640f8u: goto label_1640f8;
        case 0x1640fcu: goto label_1640fc;
        case 0x164100u: goto label_164100;
        case 0x164104u: goto label_164104;
        case 0x164108u: goto label_164108;
        case 0x16410cu: goto label_16410c;
        case 0x164110u: goto label_164110;
        case 0x164114u: goto label_164114;
        case 0x164118u: goto label_164118;
        case 0x16411cu: goto label_16411c;
        case 0x164120u: goto label_164120;
        case 0x164124u: goto label_164124;
        case 0x164128u: goto label_164128;
        case 0x16412cu: goto label_16412c;
        case 0x164130u: goto label_164130;
        case 0x164134u: goto label_164134;
        case 0x164138u: goto label_164138;
        case 0x16413cu: goto label_16413c;
        case 0x164140u: goto label_164140;
        case 0x164144u: goto label_164144;
        case 0x164148u: goto label_164148;
        case 0x16414cu: goto label_16414c;
        case 0x164150u: goto label_164150;
        case 0x164154u: goto label_164154;
        case 0x164158u: goto label_164158;
        case 0x16415cu: goto label_16415c;
        case 0x164160u: goto label_164160;
        case 0x164164u: goto label_164164;
        case 0x164168u: goto label_164168;
        case 0x16416cu: goto label_16416c;
        case 0x164170u: goto label_164170;
        case 0x164174u: goto label_164174;
        case 0x164178u: goto label_164178;
        case 0x16417cu: goto label_16417c;
        case 0x164180u: goto label_164180;
        case 0x164184u: goto label_164184;
        case 0x164188u: goto label_164188;
        case 0x16418cu: goto label_16418c;
        case 0x164190u: goto label_164190;
        case 0x164194u: goto label_164194;
        case 0x164198u: goto label_164198;
        case 0x16419cu: goto label_16419c;
        case 0x1641a0u: goto label_1641a0;
        case 0x1641a4u: goto label_1641a4;
        case 0x1641a8u: goto label_1641a8;
        case 0x1641acu: goto label_1641ac;
        case 0x1641b0u: goto label_1641b0;
        case 0x1641b4u: goto label_1641b4;
        case 0x1641b8u: goto label_1641b8;
        case 0x1641bcu: goto label_1641bc;
        case 0x1641c0u: goto label_1641c0;
        case 0x1641c4u: goto label_1641c4;
        case 0x1641c8u: goto label_1641c8;
        case 0x1641ccu: goto label_1641cc;
        case 0x1641d0u: goto label_1641d0;
        case 0x1641d4u: goto label_1641d4;
        case 0x1641d8u: goto label_1641d8;
        case 0x1641dcu: goto label_1641dc;
        case 0x1641e0u: goto label_1641e0;
        case 0x1641e4u: goto label_1641e4;
        case 0x1641e8u: goto label_1641e8;
        case 0x1641ecu: goto label_1641ec;
        case 0x1641f0u: goto label_1641f0;
        case 0x1641f4u: goto label_1641f4;
        case 0x1641f8u: goto label_1641f8;
        case 0x1641fcu: goto label_1641fc;
        case 0x164200u: goto label_164200;
        case 0x164204u: goto label_164204;
        case 0x164208u: goto label_164208;
        case 0x16420cu: goto label_16420c;
        case 0x164210u: goto label_164210;
        case 0x164214u: goto label_164214;
        case 0x164218u: goto label_164218;
        case 0x16421cu: goto label_16421c;
        case 0x164220u: goto label_164220;
        case 0x164224u: goto label_164224;
        case 0x164228u: goto label_164228;
        case 0x16422cu: goto label_16422c;
        case 0x164230u: goto label_164230;
        case 0x164234u: goto label_164234;
        case 0x164238u: goto label_164238;
        case 0x16423cu: goto label_16423c;
        case 0x164240u: goto label_164240;
        case 0x164244u: goto label_164244;
        case 0x164248u: goto label_164248;
        case 0x16424cu: goto label_16424c;
        case 0x164250u: goto label_164250;
        case 0x164254u: goto label_164254;
        case 0x164258u: goto label_164258;
        case 0x16425cu: goto label_16425c;
        case 0x164260u: goto label_164260;
        case 0x164264u: goto label_164264;
        case 0x164268u: goto label_164268;
        case 0x16426cu: goto label_16426c;
        case 0x164270u: goto label_164270;
        case 0x164274u: goto label_164274;
        case 0x164278u: goto label_164278;
        case 0x16427cu: goto label_16427c;
        case 0x164280u: goto label_164280;
        case 0x164284u: goto label_164284;
        case 0x164288u: goto label_164288;
        case 0x16428cu: goto label_16428c;
        case 0x164290u: goto label_164290;
        case 0x164294u: goto label_164294;
        case 0x164298u: goto label_164298;
        case 0x16429cu: goto label_16429c;
        case 0x1642a0u: goto label_1642a0;
        case 0x1642a4u: goto label_1642a4;
        case 0x1642a8u: goto label_1642a8;
        case 0x1642acu: goto label_1642ac;
        case 0x1642b0u: goto label_1642b0;
        case 0x1642b4u: goto label_1642b4;
        case 0x1642b8u: goto label_1642b8;
        case 0x1642bcu: goto label_1642bc;
        case 0x1642c0u: goto label_1642c0;
        case 0x1642c4u: goto label_1642c4;
        case 0x1642c8u: goto label_1642c8;
        case 0x1642ccu: goto label_1642cc;
        case 0x1642d0u: goto label_1642d0;
        case 0x1642d4u: goto label_1642d4;
        case 0x1642d8u: goto label_1642d8;
        case 0x1642dcu: goto label_1642dc;
        case 0x1642e0u: goto label_1642e0;
        case 0x1642e4u: goto label_1642e4;
        case 0x1642e8u: goto label_1642e8;
        case 0x1642ecu: goto label_1642ec;
        case 0x1642f0u: goto label_1642f0;
        case 0x1642f4u: goto label_1642f4;
        case 0x1642f8u: goto label_1642f8;
        case 0x1642fcu: goto label_1642fc;
        case 0x164300u: goto label_164300;
        case 0x164304u: goto label_164304;
        case 0x164308u: goto label_164308;
        case 0x16430cu: goto label_16430c;
        case 0x164310u: goto label_164310;
        case 0x164314u: goto label_164314;
        case 0x164318u: goto label_164318;
        case 0x16431cu: goto label_16431c;
        case 0x164320u: goto label_164320;
        case 0x164324u: goto label_164324;
        case 0x164328u: goto label_164328;
        case 0x16432cu: goto label_16432c;
        case 0x164330u: goto label_164330;
        case 0x164334u: goto label_164334;
        default: break;
    }

    ctx->pc = 0x163c58u;

label_163c58:
    // 0x163c58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x163c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_163c5c:
    // 0x163c5c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x163c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_163c60:
    // 0x163c60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x163c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_163c64:
    // 0x163c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163c68:
    // 0x163c68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x163c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_163c6c:
    // 0x163c6c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x163c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_163c70:
    // 0x163c70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x163c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_163c74:
    // 0x163c74: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x163c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_163c78:
    // 0x163c78: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x163c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_163c7c:
    // 0x163c7c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x163c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_163c80:
    // 0x163c80: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x163c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_163c84:
    // 0x163c84: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x163c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_163c88:
    // 0x163c88: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x163c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_163c8c:
    // 0x163c8c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x163c8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_163c90:
    // 0x163c90: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x163c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_163c94:
    // 0x163c94: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x163c94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_163c98:
    // 0x163c98: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x163c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_163c9c:
    // 0x163c9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x163c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163ca0:
    // 0x163ca0: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x163ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_163ca4:
    // 0x163ca4: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x163ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_163ca8:
    // 0x163ca8: 0x27a9000c  addiu       $t1, $sp, 0xC
    ctx->pc = 0x163ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_163cac:
    // 0x163cac: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x163cacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163cb0:
    // 0x163cb0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x163cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_163cb4:
    // 0x163cb4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x163cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_163cb8:
    // 0x163cb8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x163cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_163cbc:
    // 0x163cbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_163cc0:
    if (ctx->pc == 0x163CC0u) {
        ctx->pc = 0x163CC0u;
            // 0x163cc0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x163CC4u;
        goto label_163cc4;
    }
    ctx->pc = 0x163CBCu;
    {
        const bool branch_taken_0x163cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163CBCu;
            // 0x163cc0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cbc) {
            ctx->pc = 0x163CD0u;
            goto label_163cd0;
        }
    }
    ctx->pc = 0x163CC4u;
label_163cc4:
    // 0x163cc4: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x163cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_163cc8:
    // 0x163cc8: 0x10000021  b           . + 4 + (0x21 << 2)
label_163ccc:
    if (ctx->pc == 0x163CCCu) {
        ctx->pc = 0x163CCCu;
            // 0x163ccc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x163CD0u;
        goto label_163cd0;
    }
    ctx->pc = 0x163CC8u;
    {
        const bool branch_taken_0x163cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163CC8u;
            // 0x163ccc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cc8) {
            ctx->pc = 0x163D50u;
            goto label_163d50;
        }
    }
    ctx->pc = 0x163CD0u;
label_163cd0:
    // 0x163cd0: 0xc058e3a  jal         func_1638E8
label_163cd4:
    if (ctx->pc == 0x163CD4u) {
        ctx->pc = 0x163CD8u;
        goto label_163cd8;
    }
    ctx->pc = 0x163CD0u;
    SET_GPR_U32(ctx, 31, 0x163CD8u);
    ctx->pc = 0x1638E8u;
    if (runtime->hasFunction(0x1638E8u)) {
        auto targetFn = runtime->lookupFunction(0x1638E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CD8u; }
        if (ctx->pc != 0x163CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001638E8_0x1638e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CD8u; }
        if (ctx->pc != 0x163CD8u) { return; }
    }
    ctx->pc = 0x163CD8u;
label_163cd8:
    // 0x163cd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x163cd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163cdc:
    // 0x163cdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x163cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_163ce0:
    // 0x163ce0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_163ce4:
    if (ctx->pc == 0x163CE4u) {
        ctx->pc = 0x163CE4u;
            // 0x163ce4: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->pc = 0x163CE8u;
        goto label_163ce8;
    }
    ctx->pc = 0x163CE0u;
    {
        const bool branch_taken_0x163ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163CE0u;
            // 0x163ce4: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ce0) {
            ctx->pc = 0x163D50u;
            goto label_163d50;
        }
    }
    ctx->pc = 0x163CE8u;
label_163ce8:
    // 0x163ce8: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x163ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_163cec:
    // 0x163cec: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
label_163cf0:
    if (ctx->pc == 0x163CF0u) {
        ctx->pc = 0x163CF0u;
            // 0x163cf0: 0xa6240000  sh          $a0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x163CF4u;
        goto label_163cf4;
    }
    ctx->pc = 0x163CECu;
    {
        const bool branch_taken_0x163cec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x163CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163CECu;
            // 0x163cf0: 0xa6240000  sh          $a0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cec) {
            ctx->pc = 0x163D50u;
            goto label_163d50;
        }
    }
    ctx->pc = 0x163CF4u;
label_163cf4:
    // 0x163cf4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x163cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_163cf8:
    // 0x163cf8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x163cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_163cfc:
    // 0x163cfc: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x163cfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_163d00:
    // 0x163d00: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x163d00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163d04:
    // 0x163d04: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x163d04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_163d08:
    // 0x163d08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163d0c:
    // 0x163d0c: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x163d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
label_163d10:
    // 0x163d10: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x163d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_163d14:
    // 0x163d14: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x163d14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_163d18:
    // 0x163d18: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x163d18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_163d1c:
    // 0x163d1c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x163d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_163d20:
    // 0x163d20: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x163d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_163d24:
    // 0x163d24: 0xa2a70000  sb          $a3, 0x0($s5)
    ctx->pc = 0x163d24u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
label_163d28:
    // 0x163d28: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x163d28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_163d2c:
    // 0x163d2c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x163d2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_163d30:
    // 0x163d30: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x163d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_163d34:
    // 0x163d34: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x163d34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_163d38:
    // 0x163d38: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x163d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_163d3c:
    // 0x163d3c: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x163d3cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_163d40:
    // 0x163d40: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x163d40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_163d44:
    // 0x163d44: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x163d44u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_163d48:
    // 0x163d48: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x163d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_163d4c:
    // 0x163d4c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x163d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_163d50:
    // 0x163d50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x163d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163d54:
    // 0x163d54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x163d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_163d58:
    // 0x163d58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x163d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_163d5c:
    // 0x163d5c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x163d5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_163d60:
    // 0x163d60: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x163d60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_163d64:
    // 0x163d64: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x163d64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_163d68:
    // 0x163d68: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x163d68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163d6c:
    // 0x163d6c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x163d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_163d70:
    // 0x163d70: 0x3e00008  jr          $ra
label_163d74:
    if (ctx->pc == 0x163D74u) {
        ctx->pc = 0x163D74u;
            // 0x163d74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x163D78u;
        goto label_163d78;
    }
    ctx->pc = 0x163D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163D70u;
            // 0x163d74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163D78u;
label_163d78:
    // 0x163d78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x163d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_163d7c:
    // 0x163d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163d80:
    // 0x163d80: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x163d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_163d84:
    // 0x163d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163d88:
    // 0x163d88: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x163d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_163d8c:
    // 0x163d8c: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x163d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_163d90:
    // 0x163d90: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x163d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_163d94:
    // 0x163d94: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x163d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_163d98:
    // 0x163d98: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x163d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_163d9c:
    // 0x163d9c: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x163d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_163da0:
    // 0x163da0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x163da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_163da4:
    // 0x163da4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x163da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_163da8:
    // 0x163da8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x163da8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_163dac:
    // 0x163dac: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x163dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_163db0:
    // 0x163db0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x163db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_163db4:
    // 0x163db4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x163db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_163db8:
    // 0x163db8: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x163db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_163dbc:
    // 0x163dbc: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x163dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_163dc0:
    // 0x163dc0: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x163dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_163dc4:
    // 0x163dc4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x163dc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163dc8:
    // 0x163dc8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x163dc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163dcc:
    // 0x163dcc: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x163dccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_163dd0:
    // 0x163dd0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x163dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_163dd4:
    // 0x163dd4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x163dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_163dd8:
    // 0x163dd8: 0xc058f16  jal         func_163C58
label_163ddc:
    if (ctx->pc == 0x163DDCu) {
        ctx->pc = 0x163DDCu;
            // 0x163ddc: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->pc = 0x163DE0u;
        goto label_163de0;
    }
    ctx->pc = 0x163DD8u;
    SET_GPR_U32(ctx, 31, 0x163DE0u);
    ctx->pc = 0x163DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163DD8u;
            // 0x163ddc: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163C58u;
    goto label_163c58;
    ctx->pc = 0x163DE0u;
label_163de0:
    // 0x163de0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_163de4:
    if (ctx->pc == 0x163DE4u) {
        ctx->pc = 0x163DE4u;
            // 0x163de4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x163DE8u;
        goto label_163de8;
    }
    ctx->pc = 0x163DE0u;
    {
        const bool branch_taken_0x163de0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x163de0) {
            ctx->pc = 0x163DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163DE0u;
            // 0x163de4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163DF0u;
            goto label_163df0;
        }
    }
    ctx->pc = 0x163DE8u;
label_163de8:
    // 0x163de8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_163dec:
    if (ctx->pc == 0x163DECu) {
        ctx->pc = 0x163DECu;
            // 0x163dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163DF0u;
        goto label_163df0;
    }
    ctx->pc = 0x163DE8u;
    {
        const bool branch_taken_0x163de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DE8u;
            // 0x163dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163de8) {
            ctx->pc = 0x163E58u;
            goto label_163e58;
        }
    }
    ctx->pc = 0x163DF0u;
label_163df0:
    // 0x163df0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x163df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_163df4:
    // 0x163df4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x163df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_163df8:
    // 0x163df8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x163df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_163dfc:
    // 0x163dfc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x163dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_163e00:
    // 0x163e00: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x163e00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_163e04:
    // 0x163e04: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x163e04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_163e08:
    // 0x163e08: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x163e08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_163e0c:
    // 0x163e0c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x163e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_163e10:
    // 0x163e10: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x163e10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_163e14:
    // 0x163e14: 0x97a40024  lhu         $a0, 0x24($sp)
    ctx->pc = 0x163e14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
label_163e18:
    // 0x163e18: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x163e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_163e1c:
    // 0x163e1c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x163e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_163e20:
    // 0x163e20: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x163e20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_163e24:
    // 0x163e24: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x163e24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_163e28:
    // 0x163e28: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x163e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_163e2c:
    // 0x163e2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x163e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_163e30:
    // 0x163e30: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x163e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_163e34:
    // 0x163e34: 0xa604009c  sh          $a0, 0x9C($s0)
    ctx->pc = 0x163e34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 4));
label_163e38:
    // 0x163e38: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x163e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_163e3c:
    // 0x163e3c: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x163e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_163e40:
    // 0x163e40: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x163e40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
label_163e44:
    // 0x163e44: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x163e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_163e48:
    // 0x163e48: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x163e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_163e4c:
    // 0x163e4c: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x163e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_163e50:
    // 0x163e50: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x163e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_163e54:
    // 0x163e54: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x163e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_163e58:
    // 0x163e58: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x163e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_163e5c:
    // 0x163e5c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x163e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_163e60:
    // 0x163e60: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x163e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163e64:
    // 0x163e64: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x163e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_163e68:
    // 0x163e68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x163e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_163e6c:
    // 0x163e6c: 0x3e00008  jr          $ra
label_163e70:
    if (ctx->pc == 0x163E70u) {
        ctx->pc = 0x163E70u;
            // 0x163e70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x163E74u;
        goto label_163e74;
    }
    ctx->pc = 0x163E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E6Cu;
            // 0x163e70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163E74u;
label_163e74:
    // 0x163e74: 0x0  nop
    ctx->pc = 0x163e74u;
    // NOP
label_163e78:
    // 0x163e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_163e7c:
    // 0x163e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163e80:
    // 0x163e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x163e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_163e84:
    // 0x163e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163e88:
    // 0x163e88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x163e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_163e8c:
    // 0x163e8c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x163e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_163e90:
    // 0x163e90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x163e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_163e94:
    // 0x163e94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x163e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_163e98:
    // 0x163e98: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x163e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_163e9c:
    // 0x163e9c: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_163ea0:
    if (ctx->pc == 0x163EA0u) {
        ctx->pc = 0x163EA0u;
            // 0x163ea0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x163EA4u;
        goto label_163ea4;
    }
    ctx->pc = 0x163E9Cu;
    {
        const bool branch_taken_0x163e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E9Cu;
            // 0x163ea0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e9c) {
            ctx->pc = 0x163FD0u;
            goto label_163fd0;
        }
    }
    ctx->pc = 0x163EA4u;
label_163ea4:
    // 0x163ea4: 0xc05df6e  jal         func_177DB8
label_163ea8:
    if (ctx->pc == 0x163EA8u) {
        ctx->pc = 0x163EA8u;
            // 0x163ea8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x163EACu;
        goto label_163eac;
    }
    ctx->pc = 0x163EA4u;
    SET_GPR_U32(ctx, 31, 0x163EACu);
    ctx->pc = 0x163EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163EA4u;
            // 0x163ea8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EACu; }
        if (ctx->pc != 0x163EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EACu; }
        if (ctx->pc != 0x163EACu) { return; }
    }
    ctx->pc = 0x163EACu;
label_163eac:
    // 0x163eac: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_163eb0:
    if (ctx->pc == 0x163EB0u) {
        ctx->pc = 0x163EB0u;
            // 0x163eb0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x163EB4u;
        goto label_163eb4;
    }
    ctx->pc = 0x163EACu;
    {
        const bool branch_taken_0x163eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163eac) {
            ctx->pc = 0x163EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163EACu;
            // 0x163eb0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163FD0u;
            goto label_163fd0;
        }
    }
    ctx->pc = 0x163EB4u;
label_163eb4:
    // 0x163eb4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x163eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_163eb8:
    // 0x163eb8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x163eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_163ebc:
    // 0x163ebc: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x163ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_163ec0:
    // 0x163ec0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x163ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_163ec4:
    // 0x163ec4: 0x40f809  jalr        $v0
label_163ec8:
    if (ctx->pc == 0x163EC8u) {
        ctx->pc = 0x163EC8u;
            // 0x163ec8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x163ECCu;
        goto label_163ecc;
    }
    ctx->pc = 0x163EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163ECCu);
        ctx->pc = 0x163EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163EC4u;
            // 0x163ec8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x163ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163ECCu; }
            if (ctx->pc != 0x163ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x163ECCu;
label_163ecc:
    // 0x163ecc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x163eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_163ed0:
    // 0x163ed0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x163ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_163ed4:
    // 0x163ed4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x163ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163ed8:
    // 0x163ed8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x163ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_163edc:
    // 0x163edc: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x163edcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_163ee0:
    // 0x163ee0: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x163ee0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_163ee4:
    // 0x163ee4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x163ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_163ee8:
    // 0x163ee8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x163ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_163eec:
    // 0x163eec: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x163eecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_163ef0:
    // 0x163ef0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x163ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_163ef4:
    // 0x163ef4: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x163ef4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_163ef8:
    // 0x163ef8: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x163ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_163efc:
    // 0x163efc: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x163efcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_163f00:
    // 0x163f00: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x163f00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_163f04:
    // 0x163f04: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_163f08:
    if (ctx->pc == 0x163F08u) {
        ctx->pc = 0x163F08u;
            // 0x163f08: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x163F0Cu;
        goto label_163f0c;
    }
    ctx->pc = 0x163F04u;
    {
        const bool branch_taken_0x163f04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x163F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F04u;
            // 0x163f08: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f04) {
            ctx->pc = 0x163F78u;
            goto label_163f78;
        }
    }
    ctx->pc = 0x163F0Cu;
label_163f0c:
    // 0x163f0c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x163f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_163f10:
    // 0x163f10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163f14:
    // 0x163f14: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_163f18:
    // 0x163f18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x163f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_163f1c:
    // 0x163f1c: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_163f20:
    if (ctx->pc == 0x163F20u) {
        ctx->pc = 0x163F20u;
            // 0x163f20: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x163F24u;
        goto label_163f24;
    }
    ctx->pc = 0x163F1Cu;
    {
        const bool branch_taken_0x163f1c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x163F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F1Cu;
            // 0x163f20: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f1c) {
            ctx->pc = 0x163FB0u;
            goto label_163fb0;
        }
    }
    ctx->pc = 0x163F24u;
label_163f24:
    // 0x163f24: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x163f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163f28:
    // 0x163f28: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x163f28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_163f2c:
    // 0x163f2c: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x163f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_163f30:
    // 0x163f30: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x163f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_163f34:
    // 0x163f34: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x163f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_163f38:
    // 0x163f38: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x163f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_163f3c:
    // 0x163f3c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_163f40:
    // 0x163f40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x163f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_163f44:
    // 0x163f44: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x163f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_163f48:
    // 0x163f48: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x163f48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_163f4c:
    // 0x163f4c: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x163f4cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_163f50:
    // 0x163f50: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x163f50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_163f54:
    // 0x163f54: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x163f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_163f58:
    // 0x163f58: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x163f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_163f5c:
    // 0x163f5c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x163f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_163f60:
    // 0x163f60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x163f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_163f64:
    // 0x163f64: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_163f68:
    if (ctx->pc == 0x163F68u) {
        ctx->pc = 0x163F68u;
            // 0x163f68: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x163F6Cu;
        goto label_163f6c;
    }
    ctx->pc = 0x163F64u;
    {
        const bool branch_taken_0x163f64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x163F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F64u;
            // 0x163f68: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f64) {
            ctx->pc = 0x163F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_163f28;
        }
    }
    ctx->pc = 0x163F6Cu;
label_163f6c:
    // 0x163f6c: 0x10000010  b           . + 4 + (0x10 << 2)
label_163f70:
    if (ctx->pc == 0x163F70u) {
        ctx->pc = 0x163F70u;
            // 0x163f70: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x163F74u;
        goto label_163f74;
    }
    ctx->pc = 0x163F6Cu;
    {
        const bool branch_taken_0x163f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F6Cu;
            // 0x163f70: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f6c) {
            ctx->pc = 0x163FB0u;
            goto label_163fb0;
        }
    }
    ctx->pc = 0x163F74u;
label_163f74:
    // 0x163f74: 0x0  nop
    ctx->pc = 0x163f74u;
    // NOP
label_163f78:
    // 0x163f78: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
label_163f7c:
    if (ctx->pc == 0x163F7Cu) {
        ctx->pc = 0x163F7Cu;
            // 0x163f7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163F80u;
        goto label_163f80;
    }
    ctx->pc = 0x163F78u;
    {
        const bool branch_taken_0x163f78 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x163F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F78u;
            // 0x163f7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f78) {
            ctx->pc = 0x163FB0u;
            goto label_163fb0;
        }
    }
    ctx->pc = 0x163F80u;
label_163f80:
    // 0x163f80: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x163f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_163f84:
    // 0x163f84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x163f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_163f88:
    // 0x163f88: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x163f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_163f8c:
    // 0x163f8c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x163f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_163f90:
    // 0x163f90: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x163f90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_163f94:
    // 0x163f94: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x163f94u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_163f98:
    // 0x163f98: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x163f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_163f9c:
    // 0x163f9c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x163f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_163fa0:
    // 0x163fa0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x163fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_163fa4:
    // 0x163fa4: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_163fa8:
    if (ctx->pc == 0x163FA8u) {
        ctx->pc = 0x163FA8u;
            // 0x163fa8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x163FACu;
        goto label_163fac;
    }
    ctx->pc = 0x163FA4u;
    {
        const bool branch_taken_0x163fa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x163FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163FA4u;
            // 0x163fa8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163fa4) {
            ctx->pc = 0x163F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_163f80;
        }
    }
    ctx->pc = 0x163FACu;
label_163fac:
    // 0x163fac: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x163facu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_163fb0:
    // 0x163fb0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x163fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_163fb4:
    // 0x163fb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163fb8:
    // 0x163fb8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x163fb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_163fbc:
    // 0x163fbc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x163fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_163fc0:
    // 0x163fc0: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x163fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_163fc4:
    // 0x163fc4: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x163fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_163fc8:
    // 0x163fc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x163fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_163fcc:
    // 0x163fcc: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x163fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_163fd0:
    // 0x163fd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163fd4:
    // 0x163fd4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_163fd8:
    if (ctx->pc == 0x163FD8u) {
        ctx->pc = 0x163FD8u;
            // 0x163fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163FDCu;
        goto label_163fdc;
    }
    ctx->pc = 0x163FD4u;
    {
        const bool branch_taken_0x163fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163fd4) {
            ctx->pc = 0x163FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163FD4u;
            // 0x163fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163FFCu;
            goto label_163ffc;
        }
    }
    ctx->pc = 0x163FDCu;
label_163fdc:
    // 0x163fdc: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x163fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_163fe0:
    // 0x163fe0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x163fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_163fe4:
    // 0x163fe4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x163fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_163fe8:
    // 0x163fe8: 0x60f809  jalr        $v1
label_163fec:
    if (ctx->pc == 0x163FECu) {
        ctx->pc = 0x163FECu;
            // 0x163fec: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x163FF0u;
        goto label_163ff0;
    }
    ctx->pc = 0x163FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163FF0u);
        ctx->pc = 0x163FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163FE8u;
            // 0x163fec: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x163FF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163FF0u; }
            if (ctx->pc != 0x163FF0u) { return; }
        }
        }
    }
    ctx->pc = 0x163FF0u;
label_163ff0:
    // 0x163ff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163ff4:
    // 0x163ff4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x163ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_163ff8:
    // 0x163ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163ffc:
    // 0x163ffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x163ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_164000:
    // 0x164000: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_164004:
    // 0x164004: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_164008:
    // 0x164008: 0x3e00008  jr          $ra
label_16400c:
    if (ctx->pc == 0x16400Cu) {
        ctx->pc = 0x16400Cu;
            // 0x16400c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x164010u;
        goto label_164010;
    }
    ctx->pc = 0x164008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164008u;
            // 0x16400c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164010u;
label_164010:
    // 0x164010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_164014:
    // 0x164014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164018:
    // 0x164018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16401c:
    // 0x16401c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16401cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164020:
    // 0x164020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_164024:
    // 0x164024: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x164024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_164028:
    // 0x164028: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16402c:
    // 0x16402c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_164030:
    // 0x164030: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x164030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_164034:
    // 0x164034: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_164038:
    if (ctx->pc == 0x164038u) {
        ctx->pc = 0x164038u;
            // 0x164038: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16403Cu;
        goto label_16403c;
    }
    ctx->pc = 0x164034u;
    {
        const bool branch_taken_0x164034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164034u;
            // 0x164038: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164034) {
            ctx->pc = 0x164150u;
            goto label_164150;
        }
    }
    ctx->pc = 0x16403Cu;
label_16403c:
    // 0x16403c: 0xc05df6e  jal         func_177DB8
label_164040:
    if (ctx->pc == 0x164040u) {
        ctx->pc = 0x164040u;
            // 0x164040: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x164044u;
        goto label_164044;
    }
    ctx->pc = 0x16403Cu;
    SET_GPR_U32(ctx, 31, 0x164044u);
    ctx->pc = 0x164040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16403Cu;
            // 0x164040: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164044u; }
        if (ctx->pc != 0x164044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164044u; }
        if (ctx->pc != 0x164044u) { return; }
    }
    ctx->pc = 0x164044u;
label_164044:
    // 0x164044: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_164048:
    if (ctx->pc == 0x164048u) {
        ctx->pc = 0x164048u;
            // 0x164048: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x16404Cu;
        goto label_16404c;
    }
    ctx->pc = 0x164044u;
    {
        const bool branch_taken_0x164044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164044) {
            ctx->pc = 0x164048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164044u;
            // 0x164048: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164150u;
            goto label_164150;
        }
    }
    ctx->pc = 0x16404Cu;
label_16404c:
    // 0x16404c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x16404cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_164050:
    // 0x164050: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x164050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_164054:
    // 0x164054: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x164054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_164058:
    // 0x164058: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x164058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_16405c:
    // 0x16405c: 0x40f809  jalr        $v0
label_164060:
    if (ctx->pc == 0x164060u) {
        ctx->pc = 0x164060u;
            // 0x164060: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x164064u;
        goto label_164064;
    }
    ctx->pc = 0x16405Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164064u);
        ctx->pc = 0x164060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16405Cu;
            // 0x164060: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x164064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164064u; }
            if (ctx->pc != 0x164064u) { return; }
        }
        }
    }
    ctx->pc = 0x164064u;
label_164064:
    // 0x164064: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x164064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_164068:
    // 0x164068: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x164068u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_16406c:
    // 0x16406c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16406cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_164070:
    // 0x164070: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x164070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_164074:
    // 0x164074: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x164074u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_164078:
    // 0x164078: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x164078u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_16407c:
    // 0x16407c: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x16407cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_164080:
    // 0x164080: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x164080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164084:
    // 0x164084: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x164084u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_164088:
    // 0x164088: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x164088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_16408c:
    // 0x16408c: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x16408cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_164090:
    // 0x164090: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x164090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_164094:
    // 0x164094: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x164094u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
label_164098:
    // 0x164098: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x164098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_16409c:
    // 0x16409c: 0x14860018  bne         $a0, $a2, . + 4 + (0x18 << 2)
label_1640a0:
    if (ctx->pc == 0x1640A0u) {
        ctx->pc = 0x1640A0u;
            // 0x1640a0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1640A4u;
        goto label_1640a4;
    }
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1640A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16409Cu;
            // 0x1640a0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16409c) {
            ctx->pc = 0x164100u;
            goto label_164100;
        }
    }
    ctx->pc = 0x1640A4u;
label_1640a4:
    // 0x1640a4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1640a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1640a8:
    // 0x1640a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1640a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1640ac:
    // 0x1640ac: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1640acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1640b0:
    // 0x1640b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1640b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1640b4:
    // 0x1640b4: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
label_1640b8:
    if (ctx->pc == 0x1640B8u) {
        ctx->pc = 0x1640B8u;
            // 0x1640b8: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x1640BCu;
        goto label_1640bc;
    }
    ctx->pc = 0x1640B4u;
    {
        const bool branch_taken_0x1640b4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1640B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1640B4u;
            // 0x1640b8: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640b4) {
            ctx->pc = 0x164134u;
            goto label_164134;
        }
    }
    ctx->pc = 0x1640BCu;
label_1640bc:
    // 0x1640bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1640bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1640c0:
    // 0x1640c0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1640c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1640c4:
    // 0x1640c4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1640c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1640c8:
    // 0x1640c8: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x1640c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1640cc:
    // 0x1640cc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1640ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1640d0:
    // 0x1640d0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1640d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1640d4:
    // 0x1640d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1640d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1640d8:
    // 0x1640d8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1640d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_1640dc:
    // 0x1640dc: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x1640dcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1640e0:
    // 0x1640e0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x1640e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_1640e4:
    // 0x1640e4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1640e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1640e8:
    // 0x1640e8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1640e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1640ec:
    // 0x1640ec: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_1640f0:
    if (ctx->pc == 0x1640F0u) {
        ctx->pc = 0x1640F0u;
            // 0x1640f0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1640F4u;
        goto label_1640f4;
    }
    ctx->pc = 0x1640ECu;
    {
        const bool branch_taken_0x1640ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1640F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1640ECu;
            // 0x1640f0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640ec) {
            ctx->pc = 0x1640C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1640c0;
        }
    }
    ctx->pc = 0x1640F4u;
label_1640f4:
    // 0x1640f4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1640f8:
    if (ctx->pc == 0x1640F8u) {
        ctx->pc = 0x1640F8u;
            // 0x1640f8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1640FCu;
        goto label_1640fc;
    }
    ctx->pc = 0x1640F4u;
    {
        const bool branch_taken_0x1640f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1640F4u;
            // 0x1640f8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640f4) {
            ctx->pc = 0x164134u;
            goto label_164134;
        }
    }
    ctx->pc = 0x1640FCu;
label_1640fc:
    // 0x1640fc: 0x0  nop
    ctx->pc = 0x1640fcu;
    // NOP
label_164100:
    // 0x164100: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_164104:
    if (ctx->pc == 0x164104u) {
        ctx->pc = 0x164104u;
            // 0x164104: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164108u;
        goto label_164108;
    }
    ctx->pc = 0x164100u;
    {
        const bool branch_taken_0x164100 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x164104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164100u;
            // 0x164104: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164100) {
            ctx->pc = 0x164134u;
            goto label_164134;
        }
    }
    ctx->pc = 0x164108u;
label_164108:
    // 0x164108: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x164108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_16410c:
    // 0x16410c: 0x0  nop
    ctx->pc = 0x16410cu;
    // NOP
label_164110:
    // 0x164110: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x164110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_164114:
    // 0x164114: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x164114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_164118:
    // 0x164118: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x164118u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_16411c:
    // 0x16411c: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x16411cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_164120:
    // 0x164120: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x164120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_164124:
    // 0x164124: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x164124u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_164128:
    // 0x164128: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_16412c:
    if (ctx->pc == 0x16412Cu) {
        ctx->pc = 0x16412Cu;
            // 0x16412c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x164130u;
        goto label_164130;
    }
    ctx->pc = 0x164128u;
    {
        const bool branch_taken_0x164128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16412Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164128u;
            // 0x16412c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164128) {
            ctx->pc = 0x164110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164110;
        }
    }
    ctx->pc = 0x164130u;
label_164130:
    // 0x164130: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x164130u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_164134:
    // 0x164134: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x164134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_164138:
    // 0x164138: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x164138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16413c:
    // 0x16413c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x16413cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_164140:
    // 0x164140: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x164140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_164144:
    // 0x164144: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x164144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_164148:
    // 0x164148: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x164148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_16414c:
    // 0x16414c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x16414cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_164150:
    // 0x164150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_164154:
    // 0x164154: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_164158:
    if (ctx->pc == 0x164158u) {
        ctx->pc = 0x164158u;
            // 0x164158: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x16415Cu;
        goto label_16415c;
    }
    ctx->pc = 0x164154u;
    {
        const bool branch_taken_0x164154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164154) {
            ctx->pc = 0x164158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164154u;
            // 0x164158: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16417Cu;
            goto label_16417c;
        }
    }
    ctx->pc = 0x16415Cu;
label_16415c:
    // 0x16415c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x16415cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_164160:
    // 0x164160: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x164160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_164164:
    // 0x164164: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x164164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_164168:
    // 0x164168: 0x60f809  jalr        $v1
label_16416c:
    if (ctx->pc == 0x16416Cu) {
        ctx->pc = 0x16416Cu;
            // 0x16416c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x164170u;
        goto label_164170;
    }
    ctx->pc = 0x164168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x164170u);
        ctx->pc = 0x16416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164168u;
            // 0x16416c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x164170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164170u; }
            if (ctx->pc != 0x164170u) { return; }
        }
        }
    }
    ctx->pc = 0x164170u;
label_164170:
    // 0x164170: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164174:
    // 0x164174: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x164174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_164178:
    // 0x164178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16417c:
    // 0x16417c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16417cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_164180:
    // 0x164180: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_164184:
    // 0x164184: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_164188:
    // 0x164188: 0x3e00008  jr          $ra
label_16418c:
    if (ctx->pc == 0x16418Cu) {
        ctx->pc = 0x16418Cu;
            // 0x16418c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x164190u;
        goto label_164190;
    }
    ctx->pc = 0x164188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16418Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164188u;
            // 0x16418c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164190u;
label_164190:
    // 0x164190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_164194:
    // 0x164194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164198:
    // 0x164198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16419c:
    // 0x16419c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16419cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1641a0:
    // 0x1641a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1641a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1641a4:
    // 0x1641a4: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x1641a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1641a8:
    // 0x1641a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1641a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1641ac:
    // 0x1641ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1641acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1641b0:
    // 0x1641b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1641b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1641b4:
    // 0x1641b4: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_1641b8:
    if (ctx->pc == 0x1641B8u) {
        ctx->pc = 0x1641B8u;
            // 0x1641b8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1641BCu;
        goto label_1641bc;
    }
    ctx->pc = 0x1641B4u;
    {
        const bool branch_taken_0x1641b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1641B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1641B4u;
            // 0x1641b8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641b4) {
            ctx->pc = 0x1642F8u;
            goto label_1642f8;
        }
    }
    ctx->pc = 0x1641BCu;
label_1641bc:
    // 0x1641bc: 0xc05df6e  jal         func_177DB8
label_1641c0:
    if (ctx->pc == 0x1641C0u) {
        ctx->pc = 0x1641C0u;
            // 0x1641c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1641C4u;
        goto label_1641c4;
    }
    ctx->pc = 0x1641BCu;
    SET_GPR_U32(ctx, 31, 0x1641C4u);
    ctx->pc = 0x1641C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1641BCu;
            // 0x1641c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641C4u; }
        if (ctx->pc != 0x1641C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641C4u; }
        if (ctx->pc != 0x1641C4u) { return; }
    }
    ctx->pc = 0x1641C4u;
label_1641c4:
    // 0x1641c4: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
label_1641c8:
    if (ctx->pc == 0x1641C8u) {
        ctx->pc = 0x1641C8u;
            // 0x1641c8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1641CCu;
        goto label_1641cc;
    }
    ctx->pc = 0x1641C4u;
    {
        const bool branch_taken_0x1641c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1641c4) {
            ctx->pc = 0x1641C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1641C4u;
            // 0x1641c8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1642F8u;
            goto label_1642f8;
        }
    }
    ctx->pc = 0x1641CCu;
label_1641cc:
    // 0x1641cc: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1641ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1641d0:
    // 0x1641d0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1641d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1641d4:
    // 0x1641d4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1641d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1641d8:
    // 0x1641d8: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1641d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1641dc:
    // 0x1641dc: 0x40f809  jalr        $v0
label_1641e0:
    if (ctx->pc == 0x1641E0u) {
        ctx->pc = 0x1641E0u;
            // 0x1641e0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1641E4u;
        goto label_1641e4;
    }
    ctx->pc = 0x1641DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1641E4u);
        ctx->pc = 0x1641E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1641DCu;
            // 0x1641e0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1641E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1641E4u; }
            if (ctx->pc != 0x1641E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1641E4u;
label_1641e4:
    // 0x1641e4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1641e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1641e8:
    // 0x1641e8: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1641e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1641ec:
    // 0x1641ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1641ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1641f0:
    // 0x1641f0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1641f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1641f4:
    // 0x1641f4: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x1641f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1641f8:
    // 0x1641f8: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1641f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1641fc:
    // 0x1641fc: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1641fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_164200:
    // 0x164200: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x164200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164204:
    // 0x164204: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x164204u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_164208:
    // 0x164208: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x164208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_16420c:
    // 0x16420c: 0x8e2a0014  lw          $t2, 0x14($s1)
    ctx->pc = 0x16420cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_164210:
    // 0x164210: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x164210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_164214:
    // 0x164214: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x164214u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_164218:
    // 0x164218: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x164218u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_16421c:
    // 0x16421c: 0x1486001e  bne         $a0, $a2, . + 4 + (0x1E << 2)
label_164220:
    if (ctx->pc == 0x164220u) {
        ctx->pc = 0x164220u;
            // 0x164220: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x164224u;
        goto label_164224;
    }
    ctx->pc = 0x16421Cu;
    {
        const bool branch_taken_0x16421c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x164220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16421Cu;
            // 0x164220: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16421c) {
            ctx->pc = 0x164298u;
            goto label_164298;
        }
    }
    ctx->pc = 0x164224u;
label_164224:
    // 0x164224: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x164224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_164228:
    // 0x164228: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x164228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16422c:
    // 0x16422c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x16422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_164230:
    // 0x164230: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x164230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_164234:
    // 0x164234: 0x19200029  blez        $t1, . + 4 + (0x29 << 2)
label_164238:
    if (ctx->pc == 0x164238u) {
        ctx->pc = 0x164238u;
            // 0x164238: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->pc = 0x16423Cu;
        goto label_16423c;
    }
    ctx->pc = 0x164234u;
    {
        const bool branch_taken_0x164234 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x164238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164234u;
            // 0x164238: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164234) {
            ctx->pc = 0x1642DCu;
            goto label_1642dc;
        }
    }
    ctx->pc = 0x16423Cu;
label_16423c:
    // 0x16423c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16423cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_164240:
    // 0x164240: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x164240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164244:
    // 0x164244: 0x244a5fd8  addiu       $t2, $v0, 0x5FD8
    ctx->pc = 0x164244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 24536));
label_164248:
    // 0x164248: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x164248u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_16424c:
    // 0x16424c: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x16424cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_164250:
    // 0x164250: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x164250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_164254:
    // 0x164254: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x164254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_164258:
    // 0x164258: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x164258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_16425c:
    // 0x16425c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16425cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_164260:
    // 0x164260: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x164260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_164264:
    // 0x164264: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x164264u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_164268:
    // 0x164268: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x164268u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16426c:
    // 0x16426c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x16426cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_164270:
    // 0x164270: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x164270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_164274:
    // 0x164274: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x164274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_164278:
    // 0x164278: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x164278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_16427c:
    // 0x16427c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x16427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_164280:
    // 0x164280: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x164280u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_164284:
    // 0x164284: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_164288:
    if (ctx->pc == 0x164288u) {
        ctx->pc = 0x164288u;
            // 0x164288: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x16428Cu;
        goto label_16428c;
    }
    ctx->pc = 0x164284u;
    {
        const bool branch_taken_0x164284 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x164288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164284u;
            // 0x164288: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164284) {
            ctx->pc = 0x164248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164248;
        }
    }
    ctx->pc = 0x16428Cu;
label_16428c:
    // 0x16428c: 0x10000013  b           . + 4 + (0x13 << 2)
label_164290:
    if (ctx->pc == 0x164290u) {
        ctx->pc = 0x164290u;
            // 0x164290: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x164294u;
        goto label_164294;
    }
    ctx->pc = 0x16428Cu;
    {
        const bool branch_taken_0x16428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16428Cu;
            // 0x164290: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16428c) {
            ctx->pc = 0x1642DCu;
            goto label_1642dc;
        }
    }
    ctx->pc = 0x164294u;
label_164294:
    // 0x164294: 0x0  nop
    ctx->pc = 0x164294u;
    // NOP
label_164298:
    // 0x164298: 0x19200010  blez        $t1, . + 4 + (0x10 << 2)
label_16429c:
    if (ctx->pc == 0x16429Cu) {
        ctx->pc = 0x16429Cu;
            // 0x16429c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1642A0u;
        goto label_1642a0;
    }
    ctx->pc = 0x164298u;
    {
        const bool branch_taken_0x164298 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x16429Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164298u;
            // 0x16429c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164298) {
            ctx->pc = 0x1642DCu;
            goto label_1642dc;
        }
    }
    ctx->pc = 0x1642A0u;
label_1642a0:
    // 0x1642a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1642a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1642a4:
    // 0x1642a4: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1642a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1642a8:
    // 0x1642a8: 0x24465fd8  addiu       $a2, $v0, 0x5FD8
    ctx->pc = 0x1642a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24536));
label_1642ac:
    // 0x1642ac: 0x0  nop
    ctx->pc = 0x1642acu;
    // NOP
label_1642b0:
    // 0x1642b0: 0x2481821  addu        $v1, $s2, $t0
    ctx->pc = 0x1642b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_1642b4:
    // 0x1642b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1642b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1642b8:
    // 0x1642b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1642b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1642bc:
    // 0x1642bc: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x1642bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1642c0:
    // 0x1642c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1642c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1642c4:
    // 0x1642c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1642c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1642c8:
    // 0x1642c8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1642c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1642cc:
    // 0x1642cc: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1642ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1642d0:
    // 0x1642d0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_1642d4:
    if (ctx->pc == 0x1642D4u) {
        ctx->pc = 0x1642D4u;
            // 0x1642d4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1642D8u;
        goto label_1642d8;
    }
    ctx->pc = 0x1642D0u;
    {
        const bool branch_taken_0x1642d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1642D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1642D0u;
            // 0x1642d4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642d0) {
            ctx->pc = 0x1642B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1642b0;
        }
    }
    ctx->pc = 0x1642D8u;
label_1642d8:
    // 0x1642d8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1642d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1642dc:
    // 0x1642dc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1642dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1642e0:
    // 0x1642e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1642e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1642e4:
    // 0x1642e4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1642e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1642e8:
    // 0x1642e8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1642e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1642ec:
    // 0x1642ec: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x1642ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1642f0:
    // 0x1642f0: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x1642f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1642f4:
    // 0x1642f4: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1642f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1642f8:
    // 0x1642f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1642f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1642fc:
    // 0x1642fc: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_164300:
    if (ctx->pc == 0x164300u) {
        ctx->pc = 0x164300u;
            // 0x164300: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x164304u;
        goto label_164304;
    }
    ctx->pc = 0x1642FCu;
    {
        const bool branch_taken_0x1642fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1642fc) {
            ctx->pc = 0x164300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1642FCu;
            // 0x164300: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164324u;
            goto label_164324;
        }
    }
    ctx->pc = 0x164304u;
label_164304:
    // 0x164304: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x164304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_164308:
    // 0x164308: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x164308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_16430c:
    // 0x16430c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x16430cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_164310:
    // 0x164310: 0x60f809  jalr        $v1
label_164314:
    if (ctx->pc == 0x164314u) {
        ctx->pc = 0x164314u;
            // 0x164314: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x164318u;
        goto label_164318;
    }
    ctx->pc = 0x164310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x164318u);
        ctx->pc = 0x164314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164310u;
            // 0x164314: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x164318u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164318u; }
            if (ctx->pc != 0x164318u) { return; }
        }
        }
    }
    ctx->pc = 0x164318u;
label_164318:
    // 0x164318: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16431c:
    // 0x16431c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16431cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_164320:
    // 0x164320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164324:
    // 0x164324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_164328:
    // 0x164328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16432c:
    // 0x16432c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_164330:
    // 0x164330: 0x3e00008  jr          $ra
label_164334:
    if (ctx->pc == 0x164334u) {
        ctx->pc = 0x164334u;
            // 0x164334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x164338u;
        goto label_fallthrough_0x164330;
    }
    ctx->pc = 0x164330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164330u;
            // 0x164334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x164330:
    ctx->pc = 0x164338u;
}
