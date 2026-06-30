#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039EDE0
// Address: 0x39ede0 - 0x39f370
void sub_0039EDE0_0x39ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EDE0_0x39ede0");
#endif

    switch (ctx->pc) {
        case 0x39ede0u: goto label_39ede0;
        case 0x39ede4u: goto label_39ede4;
        case 0x39ede8u: goto label_39ede8;
        case 0x39edecu: goto label_39edec;
        case 0x39edf0u: goto label_39edf0;
        case 0x39edf4u: goto label_39edf4;
        case 0x39edf8u: goto label_39edf8;
        case 0x39edfcu: goto label_39edfc;
        case 0x39ee00u: goto label_39ee00;
        case 0x39ee04u: goto label_39ee04;
        case 0x39ee08u: goto label_39ee08;
        case 0x39ee0cu: goto label_39ee0c;
        case 0x39ee10u: goto label_39ee10;
        case 0x39ee14u: goto label_39ee14;
        case 0x39ee18u: goto label_39ee18;
        case 0x39ee1cu: goto label_39ee1c;
        case 0x39ee20u: goto label_39ee20;
        case 0x39ee24u: goto label_39ee24;
        case 0x39ee28u: goto label_39ee28;
        case 0x39ee2cu: goto label_39ee2c;
        case 0x39ee30u: goto label_39ee30;
        case 0x39ee34u: goto label_39ee34;
        case 0x39ee38u: goto label_39ee38;
        case 0x39ee3cu: goto label_39ee3c;
        case 0x39ee40u: goto label_39ee40;
        case 0x39ee44u: goto label_39ee44;
        case 0x39ee48u: goto label_39ee48;
        case 0x39ee4cu: goto label_39ee4c;
        case 0x39ee50u: goto label_39ee50;
        case 0x39ee54u: goto label_39ee54;
        case 0x39ee58u: goto label_39ee58;
        case 0x39ee5cu: goto label_39ee5c;
        case 0x39ee60u: goto label_39ee60;
        case 0x39ee64u: goto label_39ee64;
        case 0x39ee68u: goto label_39ee68;
        case 0x39ee6cu: goto label_39ee6c;
        case 0x39ee70u: goto label_39ee70;
        case 0x39ee74u: goto label_39ee74;
        case 0x39ee78u: goto label_39ee78;
        case 0x39ee7cu: goto label_39ee7c;
        case 0x39ee80u: goto label_39ee80;
        case 0x39ee84u: goto label_39ee84;
        case 0x39ee88u: goto label_39ee88;
        case 0x39ee8cu: goto label_39ee8c;
        case 0x39ee90u: goto label_39ee90;
        case 0x39ee94u: goto label_39ee94;
        case 0x39ee98u: goto label_39ee98;
        case 0x39ee9cu: goto label_39ee9c;
        case 0x39eea0u: goto label_39eea0;
        case 0x39eea4u: goto label_39eea4;
        case 0x39eea8u: goto label_39eea8;
        case 0x39eeacu: goto label_39eeac;
        case 0x39eeb0u: goto label_39eeb0;
        case 0x39eeb4u: goto label_39eeb4;
        case 0x39eeb8u: goto label_39eeb8;
        case 0x39eebcu: goto label_39eebc;
        case 0x39eec0u: goto label_39eec0;
        case 0x39eec4u: goto label_39eec4;
        case 0x39eec8u: goto label_39eec8;
        case 0x39eeccu: goto label_39eecc;
        case 0x39eed0u: goto label_39eed0;
        case 0x39eed4u: goto label_39eed4;
        case 0x39eed8u: goto label_39eed8;
        case 0x39eedcu: goto label_39eedc;
        case 0x39eee0u: goto label_39eee0;
        case 0x39eee4u: goto label_39eee4;
        case 0x39eee8u: goto label_39eee8;
        case 0x39eeecu: goto label_39eeec;
        case 0x39eef0u: goto label_39eef0;
        case 0x39eef4u: goto label_39eef4;
        case 0x39eef8u: goto label_39eef8;
        case 0x39eefcu: goto label_39eefc;
        case 0x39ef00u: goto label_39ef00;
        case 0x39ef04u: goto label_39ef04;
        case 0x39ef08u: goto label_39ef08;
        case 0x39ef0cu: goto label_39ef0c;
        case 0x39ef10u: goto label_39ef10;
        case 0x39ef14u: goto label_39ef14;
        case 0x39ef18u: goto label_39ef18;
        case 0x39ef1cu: goto label_39ef1c;
        case 0x39ef20u: goto label_39ef20;
        case 0x39ef24u: goto label_39ef24;
        case 0x39ef28u: goto label_39ef28;
        case 0x39ef2cu: goto label_39ef2c;
        case 0x39ef30u: goto label_39ef30;
        case 0x39ef34u: goto label_39ef34;
        case 0x39ef38u: goto label_39ef38;
        case 0x39ef3cu: goto label_39ef3c;
        case 0x39ef40u: goto label_39ef40;
        case 0x39ef44u: goto label_39ef44;
        case 0x39ef48u: goto label_39ef48;
        case 0x39ef4cu: goto label_39ef4c;
        case 0x39ef50u: goto label_39ef50;
        case 0x39ef54u: goto label_39ef54;
        case 0x39ef58u: goto label_39ef58;
        case 0x39ef5cu: goto label_39ef5c;
        case 0x39ef60u: goto label_39ef60;
        case 0x39ef64u: goto label_39ef64;
        case 0x39ef68u: goto label_39ef68;
        case 0x39ef6cu: goto label_39ef6c;
        case 0x39ef70u: goto label_39ef70;
        case 0x39ef74u: goto label_39ef74;
        case 0x39ef78u: goto label_39ef78;
        case 0x39ef7cu: goto label_39ef7c;
        case 0x39ef80u: goto label_39ef80;
        case 0x39ef84u: goto label_39ef84;
        case 0x39ef88u: goto label_39ef88;
        case 0x39ef8cu: goto label_39ef8c;
        case 0x39ef90u: goto label_39ef90;
        case 0x39ef94u: goto label_39ef94;
        case 0x39ef98u: goto label_39ef98;
        case 0x39ef9cu: goto label_39ef9c;
        case 0x39efa0u: goto label_39efa0;
        case 0x39efa4u: goto label_39efa4;
        case 0x39efa8u: goto label_39efa8;
        case 0x39efacu: goto label_39efac;
        case 0x39efb0u: goto label_39efb0;
        case 0x39efb4u: goto label_39efb4;
        case 0x39efb8u: goto label_39efb8;
        case 0x39efbcu: goto label_39efbc;
        case 0x39efc0u: goto label_39efc0;
        case 0x39efc4u: goto label_39efc4;
        case 0x39efc8u: goto label_39efc8;
        case 0x39efccu: goto label_39efcc;
        case 0x39efd0u: goto label_39efd0;
        case 0x39efd4u: goto label_39efd4;
        case 0x39efd8u: goto label_39efd8;
        case 0x39efdcu: goto label_39efdc;
        case 0x39efe0u: goto label_39efe0;
        case 0x39efe4u: goto label_39efe4;
        case 0x39efe8u: goto label_39efe8;
        case 0x39efecu: goto label_39efec;
        case 0x39eff0u: goto label_39eff0;
        case 0x39eff4u: goto label_39eff4;
        case 0x39eff8u: goto label_39eff8;
        case 0x39effcu: goto label_39effc;
        case 0x39f000u: goto label_39f000;
        case 0x39f004u: goto label_39f004;
        case 0x39f008u: goto label_39f008;
        case 0x39f00cu: goto label_39f00c;
        case 0x39f010u: goto label_39f010;
        case 0x39f014u: goto label_39f014;
        case 0x39f018u: goto label_39f018;
        case 0x39f01cu: goto label_39f01c;
        case 0x39f020u: goto label_39f020;
        case 0x39f024u: goto label_39f024;
        case 0x39f028u: goto label_39f028;
        case 0x39f02cu: goto label_39f02c;
        case 0x39f030u: goto label_39f030;
        case 0x39f034u: goto label_39f034;
        case 0x39f038u: goto label_39f038;
        case 0x39f03cu: goto label_39f03c;
        case 0x39f040u: goto label_39f040;
        case 0x39f044u: goto label_39f044;
        case 0x39f048u: goto label_39f048;
        case 0x39f04cu: goto label_39f04c;
        case 0x39f050u: goto label_39f050;
        case 0x39f054u: goto label_39f054;
        case 0x39f058u: goto label_39f058;
        case 0x39f05cu: goto label_39f05c;
        case 0x39f060u: goto label_39f060;
        case 0x39f064u: goto label_39f064;
        case 0x39f068u: goto label_39f068;
        case 0x39f06cu: goto label_39f06c;
        case 0x39f070u: goto label_39f070;
        case 0x39f074u: goto label_39f074;
        case 0x39f078u: goto label_39f078;
        case 0x39f07cu: goto label_39f07c;
        case 0x39f080u: goto label_39f080;
        case 0x39f084u: goto label_39f084;
        case 0x39f088u: goto label_39f088;
        case 0x39f08cu: goto label_39f08c;
        case 0x39f090u: goto label_39f090;
        case 0x39f094u: goto label_39f094;
        case 0x39f098u: goto label_39f098;
        case 0x39f09cu: goto label_39f09c;
        case 0x39f0a0u: goto label_39f0a0;
        case 0x39f0a4u: goto label_39f0a4;
        case 0x39f0a8u: goto label_39f0a8;
        case 0x39f0acu: goto label_39f0ac;
        case 0x39f0b0u: goto label_39f0b0;
        case 0x39f0b4u: goto label_39f0b4;
        case 0x39f0b8u: goto label_39f0b8;
        case 0x39f0bcu: goto label_39f0bc;
        case 0x39f0c0u: goto label_39f0c0;
        case 0x39f0c4u: goto label_39f0c4;
        case 0x39f0c8u: goto label_39f0c8;
        case 0x39f0ccu: goto label_39f0cc;
        case 0x39f0d0u: goto label_39f0d0;
        case 0x39f0d4u: goto label_39f0d4;
        case 0x39f0d8u: goto label_39f0d8;
        case 0x39f0dcu: goto label_39f0dc;
        case 0x39f0e0u: goto label_39f0e0;
        case 0x39f0e4u: goto label_39f0e4;
        case 0x39f0e8u: goto label_39f0e8;
        case 0x39f0ecu: goto label_39f0ec;
        case 0x39f0f0u: goto label_39f0f0;
        case 0x39f0f4u: goto label_39f0f4;
        case 0x39f0f8u: goto label_39f0f8;
        case 0x39f0fcu: goto label_39f0fc;
        case 0x39f100u: goto label_39f100;
        case 0x39f104u: goto label_39f104;
        case 0x39f108u: goto label_39f108;
        case 0x39f10cu: goto label_39f10c;
        case 0x39f110u: goto label_39f110;
        case 0x39f114u: goto label_39f114;
        case 0x39f118u: goto label_39f118;
        case 0x39f11cu: goto label_39f11c;
        case 0x39f120u: goto label_39f120;
        case 0x39f124u: goto label_39f124;
        case 0x39f128u: goto label_39f128;
        case 0x39f12cu: goto label_39f12c;
        case 0x39f130u: goto label_39f130;
        case 0x39f134u: goto label_39f134;
        case 0x39f138u: goto label_39f138;
        case 0x39f13cu: goto label_39f13c;
        case 0x39f140u: goto label_39f140;
        case 0x39f144u: goto label_39f144;
        case 0x39f148u: goto label_39f148;
        case 0x39f14cu: goto label_39f14c;
        case 0x39f150u: goto label_39f150;
        case 0x39f154u: goto label_39f154;
        case 0x39f158u: goto label_39f158;
        case 0x39f15cu: goto label_39f15c;
        case 0x39f160u: goto label_39f160;
        case 0x39f164u: goto label_39f164;
        case 0x39f168u: goto label_39f168;
        case 0x39f16cu: goto label_39f16c;
        case 0x39f170u: goto label_39f170;
        case 0x39f174u: goto label_39f174;
        case 0x39f178u: goto label_39f178;
        case 0x39f17cu: goto label_39f17c;
        case 0x39f180u: goto label_39f180;
        case 0x39f184u: goto label_39f184;
        case 0x39f188u: goto label_39f188;
        case 0x39f18cu: goto label_39f18c;
        case 0x39f190u: goto label_39f190;
        case 0x39f194u: goto label_39f194;
        case 0x39f198u: goto label_39f198;
        case 0x39f19cu: goto label_39f19c;
        case 0x39f1a0u: goto label_39f1a0;
        case 0x39f1a4u: goto label_39f1a4;
        case 0x39f1a8u: goto label_39f1a8;
        case 0x39f1acu: goto label_39f1ac;
        case 0x39f1b0u: goto label_39f1b0;
        case 0x39f1b4u: goto label_39f1b4;
        case 0x39f1b8u: goto label_39f1b8;
        case 0x39f1bcu: goto label_39f1bc;
        case 0x39f1c0u: goto label_39f1c0;
        case 0x39f1c4u: goto label_39f1c4;
        case 0x39f1c8u: goto label_39f1c8;
        case 0x39f1ccu: goto label_39f1cc;
        case 0x39f1d0u: goto label_39f1d0;
        case 0x39f1d4u: goto label_39f1d4;
        case 0x39f1d8u: goto label_39f1d8;
        case 0x39f1dcu: goto label_39f1dc;
        case 0x39f1e0u: goto label_39f1e0;
        case 0x39f1e4u: goto label_39f1e4;
        case 0x39f1e8u: goto label_39f1e8;
        case 0x39f1ecu: goto label_39f1ec;
        case 0x39f1f0u: goto label_39f1f0;
        case 0x39f1f4u: goto label_39f1f4;
        case 0x39f1f8u: goto label_39f1f8;
        case 0x39f1fcu: goto label_39f1fc;
        case 0x39f200u: goto label_39f200;
        case 0x39f204u: goto label_39f204;
        case 0x39f208u: goto label_39f208;
        case 0x39f20cu: goto label_39f20c;
        case 0x39f210u: goto label_39f210;
        case 0x39f214u: goto label_39f214;
        case 0x39f218u: goto label_39f218;
        case 0x39f21cu: goto label_39f21c;
        case 0x39f220u: goto label_39f220;
        case 0x39f224u: goto label_39f224;
        case 0x39f228u: goto label_39f228;
        case 0x39f22cu: goto label_39f22c;
        case 0x39f230u: goto label_39f230;
        case 0x39f234u: goto label_39f234;
        case 0x39f238u: goto label_39f238;
        case 0x39f23cu: goto label_39f23c;
        case 0x39f240u: goto label_39f240;
        case 0x39f244u: goto label_39f244;
        case 0x39f248u: goto label_39f248;
        case 0x39f24cu: goto label_39f24c;
        case 0x39f250u: goto label_39f250;
        case 0x39f254u: goto label_39f254;
        case 0x39f258u: goto label_39f258;
        case 0x39f25cu: goto label_39f25c;
        case 0x39f260u: goto label_39f260;
        case 0x39f264u: goto label_39f264;
        case 0x39f268u: goto label_39f268;
        case 0x39f26cu: goto label_39f26c;
        case 0x39f270u: goto label_39f270;
        case 0x39f274u: goto label_39f274;
        case 0x39f278u: goto label_39f278;
        case 0x39f27cu: goto label_39f27c;
        case 0x39f280u: goto label_39f280;
        case 0x39f284u: goto label_39f284;
        case 0x39f288u: goto label_39f288;
        case 0x39f28cu: goto label_39f28c;
        case 0x39f290u: goto label_39f290;
        case 0x39f294u: goto label_39f294;
        case 0x39f298u: goto label_39f298;
        case 0x39f29cu: goto label_39f29c;
        case 0x39f2a0u: goto label_39f2a0;
        case 0x39f2a4u: goto label_39f2a4;
        case 0x39f2a8u: goto label_39f2a8;
        case 0x39f2acu: goto label_39f2ac;
        case 0x39f2b0u: goto label_39f2b0;
        case 0x39f2b4u: goto label_39f2b4;
        case 0x39f2b8u: goto label_39f2b8;
        case 0x39f2bcu: goto label_39f2bc;
        case 0x39f2c0u: goto label_39f2c0;
        case 0x39f2c4u: goto label_39f2c4;
        case 0x39f2c8u: goto label_39f2c8;
        case 0x39f2ccu: goto label_39f2cc;
        case 0x39f2d0u: goto label_39f2d0;
        case 0x39f2d4u: goto label_39f2d4;
        case 0x39f2d8u: goto label_39f2d8;
        case 0x39f2dcu: goto label_39f2dc;
        case 0x39f2e0u: goto label_39f2e0;
        case 0x39f2e4u: goto label_39f2e4;
        case 0x39f2e8u: goto label_39f2e8;
        case 0x39f2ecu: goto label_39f2ec;
        case 0x39f2f0u: goto label_39f2f0;
        case 0x39f2f4u: goto label_39f2f4;
        case 0x39f2f8u: goto label_39f2f8;
        case 0x39f2fcu: goto label_39f2fc;
        case 0x39f300u: goto label_39f300;
        case 0x39f304u: goto label_39f304;
        case 0x39f308u: goto label_39f308;
        case 0x39f30cu: goto label_39f30c;
        case 0x39f310u: goto label_39f310;
        case 0x39f314u: goto label_39f314;
        case 0x39f318u: goto label_39f318;
        case 0x39f31cu: goto label_39f31c;
        case 0x39f320u: goto label_39f320;
        case 0x39f324u: goto label_39f324;
        case 0x39f328u: goto label_39f328;
        case 0x39f32cu: goto label_39f32c;
        case 0x39f330u: goto label_39f330;
        case 0x39f334u: goto label_39f334;
        case 0x39f338u: goto label_39f338;
        case 0x39f33cu: goto label_39f33c;
        case 0x39f340u: goto label_39f340;
        case 0x39f344u: goto label_39f344;
        case 0x39f348u: goto label_39f348;
        case 0x39f34cu: goto label_39f34c;
        case 0x39f350u: goto label_39f350;
        case 0x39f354u: goto label_39f354;
        case 0x39f358u: goto label_39f358;
        case 0x39f35cu: goto label_39f35c;
        case 0x39f360u: goto label_39f360;
        case 0x39f364u: goto label_39f364;
        case 0x39f368u: goto label_39f368;
        case 0x39f36cu: goto label_39f36c;
        default: break;
    }

    ctx->pc = 0x39ede0u;

label_39ede0:
    // 0x39ede0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x39ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_39ede4:
    // 0x39ede4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39ede8:
    // 0x39ede8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x39ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39edec:
    // 0x39edec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39edecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39edf0:
    // 0x39edf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39edf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39edf4:
    // 0x39edf4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x39edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_39edf8:
    // 0x39edf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39edf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39edfc:
    // 0x39edfc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x39edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_39ee00:
    // 0x39ee00: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x39ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39ee04:
    // 0x39ee04: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x39ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39ee08:
    // 0x39ee08: 0xc089688  jal         func_225A20
label_39ee0c:
    if (ctx->pc == 0x39EE0Cu) {
        ctx->pc = 0x39EE0Cu;
            // 0x39ee0c: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x39EE10u;
        goto label_39ee10;
    }
    ctx->pc = 0x39EE08u;
    SET_GPR_U32(ctx, 31, 0x39EE10u);
    ctx->pc = 0x39EE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EE08u;
            // 0x39ee0c: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE10u; }
        if (ctx->pc != 0x39EE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE10u; }
        if (ctx->pc != 0x39EE10u) { return; }
    }
    ctx->pc = 0x39EE10u;
label_39ee10:
    // 0x39ee10: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x39ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39ee14:
    // 0x39ee14: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x39ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_39ee18:
    // 0x39ee18: 0xc7ae0068  lwc1        $f14, 0x68($sp)
    ctx->pc = 0x39ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_39ee1c:
    // 0x39ee1c: 0xc04cbd8  jal         func_132F60
label_39ee20:
    if (ctx->pc == 0x39EE20u) {
        ctx->pc = 0x39EE20u;
            // 0x39ee20: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x39EE24u;
        goto label_39ee24;
    }
    ctx->pc = 0x39EE1Cu;
    SET_GPR_U32(ctx, 31, 0x39EE24u);
    ctx->pc = 0x39EE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EE1Cu;
            // 0x39ee20: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE24u; }
        if (ctx->pc != 0x39EE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE24u; }
        if (ctx->pc != 0x39EE24u) { return; }
    }
    ctx->pc = 0x39EE24u;
label_39ee24:
    // 0x39ee24: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x39ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_39ee28:
    // 0x39ee28: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x39ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_39ee2c:
    // 0x39ee2c: 0x8c420a5c  lw          $v0, 0xA5C($v0)
    ctx->pc = 0x39ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2652)));
label_39ee30:
    // 0x39ee30: 0x245100d0  addiu       $s1, $v0, 0xD0
    ctx->pc = 0x39ee30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_39ee34:
    // 0x39ee34: 0xc04cce8  jal         func_1333A0
label_39ee38:
    if (ctx->pc == 0x39EE38u) {
        ctx->pc = 0x39EE38u;
            // 0x39ee38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39EE3Cu;
        goto label_39ee3c;
    }
    ctx->pc = 0x39EE34u;
    SET_GPR_U32(ctx, 31, 0x39EE3Cu);
    ctx->pc = 0x39EE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EE34u;
            // 0x39ee38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE3Cu; }
        if (ctx->pc != 0x39EE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE3Cu; }
        if (ctx->pc != 0x39EE3Cu) { return; }
    }
    ctx->pc = 0x39EE3Cu;
label_39ee3c:
    // 0x39ee3c: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x39ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_39ee40:
    // 0x39ee40: 0xc04ce80  jal         func_133A00
label_39ee44:
    if (ctx->pc == 0x39EE44u) {
        ctx->pc = 0x39EE44u;
            // 0x39ee44: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x39EE48u;
        goto label_39ee48;
    }
    ctx->pc = 0x39EE40u;
    SET_GPR_U32(ctx, 31, 0x39EE48u);
    ctx->pc = 0x39EE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EE40u;
            // 0x39ee44: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE48u; }
        if (ctx->pc != 0x39EE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE48u; }
        if (ctx->pc != 0x39EE48u) { return; }
    }
    ctx->pc = 0x39EE48u;
label_39ee48:
    // 0x39ee48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x39ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_39ee4c:
    // 0x39ee4c: 0xc04ccf4  jal         func_1333D0
label_39ee50:
    if (ctx->pc == 0x39EE50u) {
        ctx->pc = 0x39EE50u;
            // 0x39ee50: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x39EE54u;
        goto label_39ee54;
    }
    ctx->pc = 0x39EE4Cu;
    SET_GPR_U32(ctx, 31, 0x39EE54u);
    ctx->pc = 0x39EE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EE4Cu;
            // 0x39ee50: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE54u; }
        if (ctx->pc != 0x39EE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE54u; }
        if (ctx->pc != 0x39EE54u) { return; }
    }
    ctx->pc = 0x39EE54u;
label_39ee54:
    // 0x39ee54: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x39ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_39ee58:
    // 0x39ee58: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x39ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_39ee5c:
    // 0x39ee5c: 0xc04cca0  jal         func_133280
label_39ee60:
    if (ctx->pc == 0x39EE60u) {
        ctx->pc = 0x39EE60u;
            // 0x39ee60: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x39EE64u;
        goto label_39ee64;
    }
    ctx->pc = 0x39EE5Cu;
    SET_GPR_U32(ctx, 31, 0x39EE64u);
    ctx->pc = 0x39EE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EE5Cu;
            // 0x39ee60: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE64u; }
        if (ctx->pc != 0x39EE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE64u; }
        if (ctx->pc != 0x39EE64u) { return; }
    }
    ctx->pc = 0x39EE64u;
label_39ee64:
    // 0x39ee64: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x39ee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ee68:
    // 0x39ee68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39ee68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39ee6c:
    // 0x39ee6c: 0x0  nop
    ctx->pc = 0x39ee6cu;
    // NOP
label_39ee70:
    // 0x39ee70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39ee70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39ee74:
    // 0x39ee74: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_39ee78:
    if (ctx->pc == 0x39EE78u) {
        ctx->pc = 0x39EE78u;
            // 0x39ee78: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->pc = 0x39EE7Cu;
        goto label_39ee7c;
    }
    ctx->pc = 0x39EE74u;
    {
        const bool branch_taken_0x39ee74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39ee74) {
            ctx->pc = 0x39EE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39EE74u;
            // 0x39ee78: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39EE98u;
            goto label_39ee98;
        }
    }
    ctx->pc = 0x39EE7Cu;
label_39ee7c:
    // 0x39ee7c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x39ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_39ee80:
    // 0x39ee80: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x39ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_39ee84:
    // 0x39ee84: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x39ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_39ee88:
    // 0x39ee88: 0xc04f2b8  jal         func_13CAE0
label_39ee8c:
    if (ctx->pc == 0x39EE8Cu) {
        ctx->pc = 0x39EE8Cu;
            // 0x39ee8c: 0x22823  negu        $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x39EE90u;
        goto label_39ee90;
    }
    ctx->pc = 0x39EE88u;
    SET_GPR_U32(ctx, 31, 0x39EE90u);
    ctx->pc = 0x39EE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EE88u;
            // 0x39ee8c: 0x22823  negu        $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE90u; }
        if (ctx->pc != 0x39EE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EE90u; }
        if (ctx->pc != 0x39EE90u) { return; }
    }
    ctx->pc = 0x39EE90u;
label_39ee90:
    // 0x39ee90: 0x10000004  b           . + 4 + (0x4 << 2)
label_39ee94:
    if (ctx->pc == 0x39EE94u) {
        ctx->pc = 0x39EE98u;
        goto label_39ee98;
    }
    ctx->pc = 0x39EE90u;
    {
        const bool branch_taken_0x39ee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ee90) {
            ctx->pc = 0x39EEA4u;
            goto label_39eea4;
        }
    }
    ctx->pc = 0x39EE98u;
label_39ee98:
    // 0x39ee98: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x39ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_39ee9c:
    // 0x39ee9c: 0xc04f2b8  jal         func_13CAE0
label_39eea0:
    if (ctx->pc == 0x39EEA0u) {
        ctx->pc = 0x39EEA0u;
            // 0x39eea0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39EEA4u;
        goto label_39eea4;
    }
    ctx->pc = 0x39EE9Cu;
    SET_GPR_U32(ctx, 31, 0x39EEA4u);
    ctx->pc = 0x39EEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EE9Cu;
            // 0x39eea0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EEA4u; }
        if (ctx->pc != 0x39EEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EEA4u; }
        if (ctx->pc != 0x39EEA4u) { return; }
    }
    ctx->pc = 0x39EEA4u;
label_39eea4:
    // 0x39eea4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x39eea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_39eea8:
    // 0x39eea8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x39eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_39eeac:
    // 0x39eeac: 0xc04ce80  jal         func_133A00
label_39eeb0:
    if (ctx->pc == 0x39EEB0u) {
        ctx->pc = 0x39EEB0u;
            // 0x39eeb0: 0x24a57330  addiu       $a1, $a1, 0x7330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29488));
        ctx->pc = 0x39EEB4u;
        goto label_39eeb4;
    }
    ctx->pc = 0x39EEACu;
    SET_GPR_U32(ctx, 31, 0x39EEB4u);
    ctx->pc = 0x39EEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EEACu;
            // 0x39eeb0: 0x24a57330  addiu       $a1, $a1, 0x7330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EEB4u; }
        if (ctx->pc != 0x39EEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EEB4u; }
        if (ctx->pc != 0x39EEB4u) { return; }
    }
    ctx->pc = 0x39EEB4u;
label_39eeb4:
    // 0x39eeb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x39eeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_39eeb8:
    // 0x39eeb8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x39eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_39eebc:
    // 0x39eebc: 0xc04cd60  jal         func_133580
label_39eec0:
    if (ctx->pc == 0x39EEC0u) {
        ctx->pc = 0x39EEC0u;
            // 0x39eec0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39EEC4u;
        goto label_39eec4;
    }
    ctx->pc = 0x39EEBCu;
    SET_GPR_U32(ctx, 31, 0x39EEC4u);
    ctx->pc = 0x39EEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EEBCu;
            // 0x39eec0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EEC4u; }
        if (ctx->pc != 0x39EEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EEC4u; }
        if (ctx->pc != 0x39EEC4u) { return; }
    }
    ctx->pc = 0x39EEC4u;
label_39eec4:
    // 0x39eec4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x39eec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_39eec8:
    // 0x39eec8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x39eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_39eecc:
    // 0x39eecc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x39eeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_39eed0:
    // 0x39eed0: 0xc04cca0  jal         func_133280
label_39eed4:
    if (ctx->pc == 0x39EED4u) {
        ctx->pc = 0x39EED4u;
            // 0x39eed4: 0x24c67320  addiu       $a2, $a2, 0x7320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29472));
        ctx->pc = 0x39EED8u;
        goto label_39eed8;
    }
    ctx->pc = 0x39EED0u;
    SET_GPR_U32(ctx, 31, 0x39EED8u);
    ctx->pc = 0x39EED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EED0u;
            // 0x39eed4: 0x24c67320  addiu       $a2, $a2, 0x7320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EED8u; }
        if (ctx->pc != 0x39EED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EED8u; }
        if (ctx->pc != 0x39EED8u) { return; }
    }
    ctx->pc = 0x39EED8u;
label_39eed8:
    // 0x39eed8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x39eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_39eedc:
    // 0x39eedc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x39eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_39eee0:
    // 0x39eee0: 0x24a57320  addiu       $a1, $a1, 0x7320
    ctx->pc = 0x39eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29472));
label_39eee4:
    // 0x39eee4: 0xc0bc610  jal         func_2F1840
label_39eee8:
    if (ctx->pc == 0x39EEE8u) {
        ctx->pc = 0x39EEE8u;
            // 0x39eee8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x39EEECu;
        goto label_39eeec;
    }
    ctx->pc = 0x39EEE4u;
    SET_GPR_U32(ctx, 31, 0x39EEECu);
    ctx->pc = 0x39EEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EEE4u;
            // 0x39eee8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1840u;
    if (runtime->hasFunction(0x2F1840u)) {
        auto targetFn = runtime->lookupFunction(0x2F1840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EEECu; }
        if (ctx->pc != 0x39EEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1840_0x2f1840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EEECu; }
        if (ctx->pc != 0x39EEECu) { return; }
    }
    ctx->pc = 0x39EEECu;
label_39eeec:
    // 0x39eeec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39eeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39eef0:
    // 0x39eef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39eef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39eef4:
    // 0x39eef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39eef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39eef8:
    // 0x39eef8: 0x3e00008  jr          $ra
label_39eefc:
    if (ctx->pc == 0x39EEFCu) {
        ctx->pc = 0x39EEFCu;
            // 0x39eefc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x39EF00u;
        goto label_39ef00;
    }
    ctx->pc = 0x39EEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EEF8u;
            // 0x39eefc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39EF00u;
label_39ef00:
    // 0x39ef00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39ef04:
    // 0x39ef04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39ef08:
    // 0x39ef08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39ef0c:
    // 0x39ef0c: 0xc0e4a78  jal         func_3929E0
label_39ef10:
    if (ctx->pc == 0x39EF10u) {
        ctx->pc = 0x39EF10u;
            // 0x39ef10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39EF14u;
        goto label_39ef14;
    }
    ctx->pc = 0x39EF0Cu;
    SET_GPR_U32(ctx, 31, 0x39EF14u);
    ctx->pc = 0x39EF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EF0Cu;
            // 0x39ef10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3929E0u;
    if (runtime->hasFunction(0x3929E0u)) {
        auto targetFn = runtime->lookupFunction(0x3929E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EF14u; }
        if (ctx->pc != 0x39EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003929E0_0x3929e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EF14u; }
        if (ctx->pc != 0x39EF14u) { return; }
    }
    ctx->pc = 0x39EF14u;
label_39ef14:
    // 0x39ef14: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x39ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_39ef18:
    // 0x39ef18: 0xc04c968  jal         func_1325A0
label_39ef1c:
    if (ctx->pc == 0x39EF1Cu) {
        ctx->pc = 0x39EF1Cu;
            // 0x39ef1c: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x39EF20u;
        goto label_39ef20;
    }
    ctx->pc = 0x39EF18u;
    SET_GPR_U32(ctx, 31, 0x39EF20u);
    ctx->pc = 0x39EF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EF18u;
            // 0x39ef1c: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EF20u; }
        if (ctx->pc != 0x39EF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EF20u; }
        if (ctx->pc != 0x39EF20u) { return; }
    }
    ctx->pc = 0x39EF20u;
label_39ef20:
    // 0x39ef20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39ef20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39ef24:
    // 0x39ef24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39ef24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39ef28:
    // 0x39ef28: 0x3e00008  jr          $ra
label_39ef2c:
    if (ctx->pc == 0x39EF2Cu) {
        ctx->pc = 0x39EF2Cu;
            // 0x39ef2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39EF30u;
        goto label_39ef30;
    }
    ctx->pc = 0x39EF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EF28u;
            // 0x39ef2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39EF30u;
label_39ef30:
    // 0x39ef30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39ef34:
    // 0x39ef34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39ef38:
    // 0x39ef38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39ef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39ef3c:
    // 0x39ef3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39ef3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39ef40:
    // 0x39ef40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39ef40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39ef44:
    // 0x39ef44: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_39ef48:
    if (ctx->pc == 0x39EF48u) {
        ctx->pc = 0x39EF48u;
            // 0x39ef48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39EF4Cu;
        goto label_39ef4c;
    }
    ctx->pc = 0x39EF44u;
    {
        const bool branch_taken_0x39ef44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EF44u;
            // 0x39ef48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef44) {
            ctx->pc = 0x39EF88u;
            goto label_39ef88;
        }
    }
    ctx->pc = 0x39EF4Cu;
label_39ef4c:
    // 0x39ef4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39ef50:
    // 0x39ef50: 0x24428600  addiu       $v0, $v0, -0x7A00
    ctx->pc = 0x39ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936064));
label_39ef54:
    // 0x39ef54: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_39ef58:
    if (ctx->pc == 0x39EF58u) {
        ctx->pc = 0x39EF58u;
            // 0x39ef58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x39EF5Cu;
        goto label_39ef5c;
    }
    ctx->pc = 0x39EF54u;
    {
        const bool branch_taken_0x39ef54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EF54u;
            // 0x39ef58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef54) {
            ctx->pc = 0x39EF70u;
            goto label_39ef70;
        }
    }
    ctx->pc = 0x39EF5Cu;
label_39ef5c:
    // 0x39ef5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39ef60:
    // 0x39ef60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ef60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ef64:
    // 0x39ef64: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x39ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_39ef68:
    // 0x39ef68: 0xc057a68  jal         func_15E9A0
label_39ef6c:
    if (ctx->pc == 0x39EF6Cu) {
        ctx->pc = 0x39EF6Cu;
            // 0x39ef6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x39EF70u;
        goto label_39ef70;
    }
    ctx->pc = 0x39EF68u;
    SET_GPR_U32(ctx, 31, 0x39EF70u);
    ctx->pc = 0x39EF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EF68u;
            // 0x39ef6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EF70u; }
        if (ctx->pc != 0x39EF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EF70u; }
        if (ctx->pc != 0x39EF70u) { return; }
    }
    ctx->pc = 0x39EF70u;
label_39ef70:
    // 0x39ef70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x39ef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_39ef74:
    // 0x39ef74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39ef74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39ef78:
    // 0x39ef78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39ef7c:
    if (ctx->pc == 0x39EF7Cu) {
        ctx->pc = 0x39EF7Cu;
            // 0x39ef7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39EF80u;
        goto label_39ef80;
    }
    ctx->pc = 0x39EF78u;
    {
        const bool branch_taken_0x39ef78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39ef78) {
            ctx->pc = 0x39EF7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39EF78u;
            // 0x39ef7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39EF8Cu;
            goto label_39ef8c;
        }
    }
    ctx->pc = 0x39EF80u;
label_39ef80:
    // 0x39ef80: 0xc0400a8  jal         func_1002A0
label_39ef84:
    if (ctx->pc == 0x39EF84u) {
        ctx->pc = 0x39EF84u;
            // 0x39ef84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39EF88u;
        goto label_39ef88;
    }
    ctx->pc = 0x39EF80u;
    SET_GPR_U32(ctx, 31, 0x39EF88u);
    ctx->pc = 0x39EF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EF80u;
            // 0x39ef84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EF88u; }
        if (ctx->pc != 0x39EF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EF88u; }
        if (ctx->pc != 0x39EF88u) { return; }
    }
    ctx->pc = 0x39EF88u;
label_39ef88:
    // 0x39ef88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39ef88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39ef8c:
    // 0x39ef8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39ef8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39ef90:
    // 0x39ef90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39ef90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39ef94:
    // 0x39ef94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39ef94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39ef98:
    // 0x39ef98: 0x3e00008  jr          $ra
label_39ef9c:
    if (ctx->pc == 0x39EF9Cu) {
        ctx->pc = 0x39EF9Cu;
            // 0x39ef9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39EFA0u;
        goto label_39efa0;
    }
    ctx->pc = 0x39EF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EF98u;
            // 0x39ef9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39EFA0u;
label_39efa0:
    // 0x39efa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39efa4:
    // 0x39efa4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x39efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_39efa8:
    // 0x39efa8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39efac:
    // 0x39efac: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x39efacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_39efb0:
    // 0x39efb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39efb4:
    // 0x39efb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39efb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39efb8:
    // 0x39efb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39efbc:
    // 0x39efbc: 0x8c700ea8  lw          $s0, 0xEA8($v1)
    ctx->pc = 0x39efbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3752)));
label_39efc0:
    // 0x39efc0: 0x8e060790  lw          $a2, 0x790($s0)
    ctx->pc = 0x39efc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
label_39efc4:
    // 0x39efc4: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x39efc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_39efc8:
    // 0x39efc8: 0x146000a6  bnez        $v1, . + 4 + (0xA6 << 2)
label_39efcc:
    if (ctx->pc == 0x39EFCCu) {
        ctx->pc = 0x39EFCCu;
            // 0x39efcc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39EFD0u;
        goto label_39efd0;
    }
    ctx->pc = 0x39EFC8u;
    {
        const bool branch_taken_0x39efc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EFC8u;
            // 0x39efcc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39efc8) {
            ctx->pc = 0x39F264u;
            goto label_39f264;
        }
    }
    ctx->pc = 0x39EFD0u;
label_39efd0:
    // 0x39efd0: 0x92250010  lbu         $a1, 0x10($s1)
    ctx->pc = 0x39efd0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_39efd4:
    // 0x39efd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39efd8:
    // 0x39efd8: 0x10a3009d  beq         $a1, $v1, . + 4 + (0x9D << 2)
label_39efdc:
    if (ctx->pc == 0x39EFDCu) {
        ctx->pc = 0x39EFE0u;
        goto label_39efe0;
    }
    ctx->pc = 0x39EFD8u;
    {
        const bool branch_taken_0x39efd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39efd8) {
            ctx->pc = 0x39F250u;
            goto label_39f250;
        }
    }
    ctx->pc = 0x39EFE0u;
label_39efe0:
    // 0x39efe0: 0x50a0008b  beql        $a1, $zero, . + 4 + (0x8B << 2)
label_39efe4:
    if (ctx->pc == 0x39EFE4u) {
        ctx->pc = 0x39EFE4u;
            // 0x39efe4: 0xc6210080  lwc1        $f1, 0x80($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x39EFE8u;
        goto label_39efe8;
    }
    ctx->pc = 0x39EFE0u;
    {
        const bool branch_taken_0x39efe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39efe0) {
            ctx->pc = 0x39EFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39EFE0u;
            // 0x39efe4: 0xc6210080  lwc1        $f1, 0x80($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F210u;
            goto label_39f210;
        }
    }
    ctx->pc = 0x39EFE8u;
label_39efe8:
    // 0x39efe8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39efec:
    // 0x39efec: 0x50a30038  beql        $a1, $v1, . + 4 + (0x38 << 2)
label_39eff0:
    if (ctx->pc == 0x39EFF0u) {
        ctx->pc = 0x39EFF0u;
            // 0x39eff0: 0x92020010  lbu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x39EFF4u;
        goto label_39eff4;
    }
    ctx->pc = 0x39EFECu;
    {
        const bool branch_taken_0x39efec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39efec) {
            ctx->pc = 0x39EFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39EFECu;
            // 0x39eff0: 0x92020010  lbu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F0D0u;
            goto label_39f0d0;
        }
    }
    ctx->pc = 0x39EFF4u;
label_39eff4:
    // 0x39eff4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39eff8:
    // 0x39eff8: 0x50a30019  beql        $a1, $v1, . + 4 + (0x19 << 2)
label_39effc:
    if (ctx->pc == 0x39EFFCu) {
        ctx->pc = 0x39EFFCu;
            // 0x39effc: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x39F000u;
        goto label_39f000;
    }
    ctx->pc = 0x39EFF8u;
    {
        const bool branch_taken_0x39eff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39eff8) {
            ctx->pc = 0x39EFFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39EFF8u;
            // 0x39effc: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F060u;
            goto label_39f060;
        }
    }
    ctx->pc = 0x39F000u;
label_39f000:
    // 0x39f000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39f000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39f004:
    // 0x39f004: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_39f008:
    if (ctx->pc == 0x39F008u) {
        ctx->pc = 0x39F008u;
            // 0x39f008: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x39F00Cu;
        goto label_39f00c;
    }
    ctx->pc = 0x39F004u;
    {
        const bool branch_taken_0x39f004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39f004) {
            ctx->pc = 0x39F008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39F004u;
            // 0x39f008: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F014u;
            goto label_39f014;
        }
    }
    ctx->pc = 0x39F00Cu;
label_39f00c:
    // 0x39f00c: 0x10000096  b           . + 4 + (0x96 << 2)
label_39f010:
    if (ctx->pc == 0x39F010u) {
        ctx->pc = 0x39F010u;
            // 0x39f010: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x39F014u;
        goto label_39f014;
    }
    ctx->pc = 0x39F00Cu;
    {
        const bool branch_taken_0x39f00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F00Cu;
            // 0x39f010: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f00c) {
            ctx->pc = 0x39F268u;
            goto label_39f268;
        }
    }
    ctx->pc = 0x39F014u;
label_39f014:
    // 0x39f014: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x39f014u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_39f018:
    // 0x39f018: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_39f01c:
    if (ctx->pc == 0x39F01Cu) {
        ctx->pc = 0x39F01Cu;
            // 0x39f01c: 0x3c033800  lui         $v1, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
        ctx->pc = 0x39F020u;
        goto label_39f020;
    }
    ctx->pc = 0x39F018u;
    {
        const bool branch_taken_0x39f018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f018) {
            ctx->pc = 0x39F01Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39F018u;
            // 0x39f01c: 0x3c033800  lui         $v1, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F040u;
            goto label_39f040;
        }
    }
    ctx->pc = 0x39F020u;
label_39f020:
    // 0x39f020: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39f020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39f024:
    // 0x39f024: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x39f024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_39f028:
    // 0x39f028: 0x320f809  jalr        $t9
label_39f02c:
    if (ctx->pc == 0x39F02Cu) {
        ctx->pc = 0x39F02Cu;
            // 0x39f02c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F030u;
        goto label_39f030;
    }
    ctx->pc = 0x39F028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39F030u);
        ctx->pc = 0x39F02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F028u;
            // 0x39f02c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39F030u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39F030u; }
            if (ctx->pc != 0x39F030u) { return; }
        }
        }
    }
    ctx->pc = 0x39F030u;
label_39f030:
    // 0x39f030: 0xc0ba2f4  jal         func_2E8BD0
label_39f034:
    if (ctx->pc == 0x39F034u) {
        ctx->pc = 0x39F038u;
        goto label_39f038;
    }
    ctx->pc = 0x39F030u;
    SET_GPR_U32(ctx, 31, 0x39F038u);
    ctx->pc = 0x2E8BD0u;
    if (runtime->hasFunction(0x2E8BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2E8BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F038u; }
        if (ctx->pc != 0x39F038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8BD0_0x2e8bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F038u; }
        if (ctx->pc != 0x39F038u) { return; }
    }
    ctx->pc = 0x39F038u;
label_39f038:
    // 0x39f038: 0x1000008a  b           . + 4 + (0x8A << 2)
label_39f03c:
    if (ctx->pc == 0x39F03Cu) {
        ctx->pc = 0x39F040u;
        goto label_39f040;
    }
    ctx->pc = 0x39F038u;
    {
        const bool branch_taken_0x39f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f038) {
            ctx->pc = 0x39F264u;
            goto label_39f264;
        }
    }
    ctx->pc = 0x39F040u;
label_39f040:
    // 0x39f040: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x39f040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_39f044:
    // 0x39f044: 0x14600087  bnez        $v1, . + 4 + (0x87 << 2)
label_39f048:
    if (ctx->pc == 0x39F048u) {
        ctx->pc = 0x39F04Cu;
        goto label_39f04c;
    }
    ctx->pc = 0x39F044u;
    {
        const bool branch_taken_0x39f044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f044) {
            ctx->pc = 0x39F264u;
            goto label_39f264;
        }
    }
    ctx->pc = 0x39F04Cu;
label_39f04c:
    // 0x39f04c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39f04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39f050:
    // 0x39f050: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x39f050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_39f054:
    // 0x39f054: 0x320f809  jalr        $t9
label_39f058:
    if (ctx->pc == 0x39F058u) {
        ctx->pc = 0x39F05Cu;
        goto label_39f05c;
    }
    ctx->pc = 0x39F054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39F05Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39F05Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39F05Cu; }
            if (ctx->pc != 0x39F05Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39F05Cu;
label_39f05c:
    // 0x39f05c: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x39f05cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_39f060:
    // 0x39f060: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x39f060u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_39f064:
    // 0x39f064: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
label_39f068:
    if (ctx->pc == 0x39F068u) {
        ctx->pc = 0x39F068u;
            // 0x39f068: 0xc6210080  lwc1        $f1, 0x80($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x39F06Cu;
        goto label_39f06c;
    }
    ctx->pc = 0x39F064u;
    {
        const bool branch_taken_0x39f064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f064) {
            ctx->pc = 0x39F068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39F064u;
            // 0x39f068: 0xc6210080  lwc1        $f1, 0x80($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F090u;
            goto label_39f090;
        }
    }
    ctx->pc = 0x39F06Cu;
label_39f06c:
    // 0x39f06c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x39f06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39f070:
    // 0x39f070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39f070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39f074:
    // 0x39f074: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x39f074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_39f078:
    // 0x39f078: 0x320f809  jalr        $t9
label_39f07c:
    if (ctx->pc == 0x39F07Cu) {
        ctx->pc = 0x39F07Cu;
            // 0x39f07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F080u;
        goto label_39f080;
    }
    ctx->pc = 0x39F078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39F080u);
        ctx->pc = 0x39F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F078u;
            // 0x39f07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39F080u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39F080u; }
            if (ctx->pc != 0x39F080u) { return; }
        }
        }
    }
    ctx->pc = 0x39F080u;
label_39f080:
    // 0x39f080: 0xc0ba2f4  jal         func_2E8BD0
label_39f084:
    if (ctx->pc == 0x39F084u) {
        ctx->pc = 0x39F088u;
        goto label_39f088;
    }
    ctx->pc = 0x39F080u;
    SET_GPR_U32(ctx, 31, 0x39F088u);
    ctx->pc = 0x2E8BD0u;
    if (runtime->hasFunction(0x2E8BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2E8BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F088u; }
        if (ctx->pc != 0x39F088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8BD0_0x2e8bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F088u; }
        if (ctx->pc != 0x39F088u) { return; }
    }
    ctx->pc = 0x39F088u;
label_39f088:
    // 0x39f088: 0x10000076  b           . + 4 + (0x76 << 2)
label_39f08c:
    if (ctx->pc == 0x39F08Cu) {
        ctx->pc = 0x39F090u;
        goto label_39f090;
    }
    ctx->pc = 0x39F088u;
    {
        const bool branch_taken_0x39f088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f088) {
            ctx->pc = 0x39F264u;
            goto label_39f264;
        }
    }
    ctx->pc = 0x39F090u;
label_39f090:
    // 0x39f090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39f090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f094:
    // 0x39f094: 0x0  nop
    ctx->pc = 0x39f094u;
    // NOP
label_39f098:
    // 0x39f098: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39f098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39f09c:
    // 0x39f09c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_39f0a0:
    if (ctx->pc == 0x39F0A0u) {
        ctx->pc = 0x39F0A0u;
            // 0x39f0a0: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->pc = 0x39F0A4u;
        goto label_39f0a4;
    }
    ctx->pc = 0x39F09Cu;
    {
        const bool branch_taken_0x39f09c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39f09c) {
            ctx->pc = 0x39F0A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39F09Cu;
            // 0x39f0a0: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F0BCu;
            goto label_39f0bc;
        }
    }
    ctx->pc = 0x39F0A4u;
label_39f0a4:
    // 0x39f0a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x39f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_39f0a8:
    // 0x39f0a8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x39f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_39f0ac:
    // 0x39f0ac: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x39f0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f0b0:
    // 0x39f0b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x39f0b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_39f0b4:
    // 0x39f0b4: 0x1000006b  b           . + 4 + (0x6B << 2)
label_39f0b8:
    if (ctx->pc == 0x39F0B8u) {
        ctx->pc = 0x39F0B8u;
            // 0x39f0b8: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->pc = 0x39F0BCu;
        goto label_39f0bc;
    }
    ctx->pc = 0x39F0B4u;
    {
        const bool branch_taken_0x39f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F0B4u;
            // 0x39f0b8: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f0b4) {
            ctx->pc = 0x39F264u;
            goto label_39f264;
        }
    }
    ctx->pc = 0x39F0BCu;
label_39f0bc:
    // 0x39f0bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x39f0bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39f0c0:
    // 0x39f0c0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x39f0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_39f0c4:
    // 0x39f0c4: 0x320f809  jalr        $t9
label_39f0c8:
    if (ctx->pc == 0x39F0C8u) {
        ctx->pc = 0x39F0C8u;
            // 0x39f0c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F0CCu;
        goto label_39f0cc;
    }
    ctx->pc = 0x39F0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39F0CCu);
        ctx->pc = 0x39F0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F0C4u;
            // 0x39f0c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39F0CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39F0CCu; }
            if (ctx->pc != 0x39F0CCu) { return; }
        }
        }
    }
    ctx->pc = 0x39F0CCu;
label_39f0cc:
    // 0x39f0cc: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x39f0ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_39f0d0:
    // 0x39f0d0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x39f0d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_39f0d4:
    // 0x39f0d4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_39f0d8:
    if (ctx->pc == 0x39F0D8u) {
        ctx->pc = 0x39F0DCu;
        goto label_39f0dc;
    }
    ctx->pc = 0x39F0D4u;
    {
        const bool branch_taken_0x39f0d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f0d4) {
            ctx->pc = 0x39F100u;
            goto label_39f100;
        }
    }
    ctx->pc = 0x39F0DCu;
label_39f0dc:
    // 0x39f0dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x39f0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39f0e0:
    // 0x39f0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39f0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39f0e4:
    // 0x39f0e4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x39f0e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_39f0e8:
    // 0x39f0e8: 0x320f809  jalr        $t9
label_39f0ec:
    if (ctx->pc == 0x39F0ECu) {
        ctx->pc = 0x39F0ECu;
            // 0x39f0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F0F0u;
        goto label_39f0f0;
    }
    ctx->pc = 0x39F0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39F0F0u);
        ctx->pc = 0x39F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F0E8u;
            // 0x39f0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39F0F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39F0F0u; }
            if (ctx->pc != 0x39F0F0u) { return; }
        }
        }
    }
    ctx->pc = 0x39F0F0u;
label_39f0f0:
    // 0x39f0f0: 0xc0ba2f4  jal         func_2E8BD0
label_39f0f4:
    if (ctx->pc == 0x39F0F4u) {
        ctx->pc = 0x39F0F8u;
        goto label_39f0f8;
    }
    ctx->pc = 0x39F0F0u;
    SET_GPR_U32(ctx, 31, 0x39F0F8u);
    ctx->pc = 0x2E8BD0u;
    if (runtime->hasFunction(0x2E8BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2E8BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F0F8u; }
        if (ctx->pc != 0x39F0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8BD0_0x2e8bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F0F8u; }
        if (ctx->pc != 0x39F0F8u) { return; }
    }
    ctx->pc = 0x39F0F8u;
label_39f0f8:
    // 0x39f0f8: 0x1000005a  b           . + 4 + (0x5A << 2)
label_39f0fc:
    if (ctx->pc == 0x39F0FCu) {
        ctx->pc = 0x39F100u;
        goto label_39f100;
    }
    ctx->pc = 0x39F0F8u;
    {
        const bool branch_taken_0x39f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f0f8) {
            ctx->pc = 0x39F264u;
            goto label_39f264;
        }
    }
    ctx->pc = 0x39F100u;
label_39f100:
    // 0x39f100: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39f104:
    // 0x39f104: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39f108:
    // 0x39f108: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x39f108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f10c:
    // 0x39f10c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x39f10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f110:
    // 0x39f110: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x39f110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_39f114:
    // 0x39f114: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x39f114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_39f118:
    // 0x39f118: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x39f118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f11c:
    // 0x39f11c: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x39f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f120:
    // 0x39f120: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x39f120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39f124:
    // 0x39f124: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_39f128:
    if (ctx->pc == 0x39F128u) {
        ctx->pc = 0x39F12Cu;
        goto label_39f12c;
    }
    ctx->pc = 0x39F124u;
    {
        const bool branch_taken_0x39f124 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39f124) {
            ctx->pc = 0x39F148u;
            goto label_39f148;
        }
    }
    ctx->pc = 0x39F12Cu;
label_39f12c:
    // 0x39f12c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x39f12cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_39f130:
    // 0x39f130: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x39f130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_39f134:
    // 0x39f134: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x39f134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_39f138:
    // 0x39f138: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x39f138u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_39f13c:
    // 0x39f13c: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x39f13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_39f140:
    // 0x39f140: 0xc0ba398  jal         func_2E8E60
label_39f144:
    if (ctx->pc == 0x39F144u) {
        ctx->pc = 0x39F144u;
            // 0x39f144: 0x262700a0  addiu       $a3, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x39F148u;
        goto label_39f148;
    }
    ctx->pc = 0x39F140u;
    SET_GPR_U32(ctx, 31, 0x39F148u);
    ctx->pc = 0x39F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F140u;
            // 0x39f144: 0x262700a0  addiu       $a3, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E60u;
    if (runtime->hasFunction(0x2E8E60u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F148u; }
        if (ctx->pc != 0x39F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8E60_0x2e8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F148u; }
        if (ctx->pc != 0x39F148u) { return; }
    }
    ctx->pc = 0x39F148u;
label_39f148:
    // 0x39f148: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39f148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39f14c:
    // 0x39f14c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39f150:
    // 0x39f150: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x39f150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f154:
    // 0x39f154: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x39f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f158:
    // 0x39f158: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x39f158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_39f15c:
    // 0x39f15c: 0xe6210078  swc1        $f1, 0x78($s1)
    ctx->pc = 0x39f15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_39f160:
    // 0x39f160: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x39f160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f164:
    // 0x39f164: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39f164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39f168:
    // 0x39f168: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_39f16c:
    if (ctx->pc == 0x39F16Cu) {
        ctx->pc = 0x39F170u;
        goto label_39f170;
    }
    ctx->pc = 0x39F168u;
    {
        const bool branch_taken_0x39f168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39f168) {
            ctx->pc = 0x39F194u;
            goto label_39f194;
        }
    }
    ctx->pc = 0x39F170u;
label_39f170:
    // 0x39f170: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x39f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_39f174:
    // 0x39f174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39f174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39f178:
    // 0x39f178: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x39f178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_39f17c:
    // 0x39f17c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x39f17cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39f180:
    // 0x39f180: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x39f180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_39f184:
    // 0x39f184: 0x320f809  jalr        $t9
label_39f188:
    if (ctx->pc == 0x39F188u) {
        ctx->pc = 0x39F188u;
            // 0x39f188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F18Cu;
        goto label_39f18c;
    }
    ctx->pc = 0x39F184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39F18Cu);
        ctx->pc = 0x39F188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F184u;
            // 0x39f188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39F18Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39F18Cu; }
            if (ctx->pc != 0x39F18Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39F18Cu;
label_39f18c:
    // 0x39f18c: 0x10000035  b           . + 4 + (0x35 << 2)
label_39f190:
    if (ctx->pc == 0x39F190u) {
        ctx->pc = 0x39F194u;
        goto label_39f194;
    }
    ctx->pc = 0x39F18Cu;
    {
        const bool branch_taken_0x39f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f18c) {
            ctx->pc = 0x39F264u;
            goto label_39f264;
        }
    }
    ctx->pc = 0x39F194u;
label_39f194:
    // 0x39f194: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39f198:
    // 0x39f198: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x39f198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_39f19c:
    // 0x39f19c: 0x8c50e360  lw          $s0, -0x1CA0($v0)
    ctx->pc = 0x39f19cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_39f1a0:
    // 0x39f1a0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x39f1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39f1a4:
    // 0x39f1a4: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x39f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_39f1a8:
    // 0x39f1a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39f1ac:
    // 0x39f1ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39f1b0:
    // 0x39f1b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x39f1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39f1b4:
    // 0x39f1b4: 0x24424680  addiu       $v0, $v0, 0x4680
    ctx->pc = 0x39f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18048));
label_39f1b8:
    // 0x39f1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39f1bc:
    // 0x39f1bc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x39f1bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39f1c0:
    // 0x39f1c0: 0xc0d9e28  jal         func_3678A0
label_39f1c4:
    if (ctx->pc == 0x39F1C4u) {
        ctx->pc = 0x39F1C4u;
            // 0x39f1c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F1C8u;
        goto label_39f1c8;
    }
    ctx->pc = 0x39F1C0u;
    SET_GPR_U32(ctx, 31, 0x39F1C8u);
    ctx->pc = 0x39F1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F1C0u;
            // 0x39f1c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3678A0u;
    if (runtime->hasFunction(0x3678A0u)) {
        auto targetFn = runtime->lookupFunction(0x3678A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F1C8u; }
        if (ctx->pc != 0x39F1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003678A0_0x3678a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F1C8u; }
        if (ctx->pc != 0x39F1C8u) { return; }
    }
    ctx->pc = 0x39F1C8u;
label_39f1c8:
    // 0x39f1c8: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x39f1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_39f1cc:
    // 0x39f1cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39f1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39f1d0:
    // 0x39f1d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x39f1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39f1d4:
    // 0x39f1d4: 0xc0d9dfc  jal         func_3677F0
label_39f1d8:
    if (ctx->pc == 0x39F1D8u) {
        ctx->pc = 0x39F1D8u;
            // 0x39f1d8: 0x262500a0  addiu       $a1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x39F1DCu;
        goto label_39f1dc;
    }
    ctx->pc = 0x39F1D4u;
    SET_GPR_U32(ctx, 31, 0x39F1DCu);
    ctx->pc = 0x39F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F1D4u;
            // 0x39f1d8: 0x262500a0  addiu       $a1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3677F0u;
    if (runtime->hasFunction(0x3677F0u)) {
        auto targetFn = runtime->lookupFunction(0x3677F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F1DCu; }
        if (ctx->pc != 0x39F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003677F0_0x3677f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F1DCu; }
        if (ctx->pc != 0x39F1DCu) { return; }
    }
    ctx->pc = 0x39F1DCu;
label_39f1dc:
    // 0x39f1dc: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x39f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f1e0:
    // 0x39f1e0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x39f1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f1e4:
    // 0x39f1e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x39f1e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_39f1e8:
    // 0x39f1e8: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x39f1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_39f1ec:
    // 0x39f1ec: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x39f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f1f0:
    // 0x39f1f0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x39f1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f1f4:
    // 0x39f1f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x39f1f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_39f1f8:
    // 0x39f1f8: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x39f1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_39f1fc:
    // 0x39f1fc: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x39f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f200:
    // 0x39f200: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x39f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f204:
    // 0x39f204: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x39f204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_39f208:
    // 0x39f208: 0x10000016  b           . + 4 + (0x16 << 2)
label_39f20c:
    if (ctx->pc == 0x39F20Cu) {
        ctx->pc = 0x39F20Cu;
            // 0x39f20c: 0xe6200098  swc1        $f0, 0x98($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
        ctx->pc = 0x39F210u;
        goto label_39f210;
    }
    ctx->pc = 0x39F208u;
    {
        const bool branch_taken_0x39f208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F208u;
            // 0x39f20c: 0xe6200098  swc1        $f0, 0x98($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f208) {
            ctx->pc = 0x39F264u;
            goto label_39f264;
        }
    }
    ctx->pc = 0x39F210u;
label_39f210:
    // 0x39f210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39f210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f214:
    // 0x39f214: 0x0  nop
    ctx->pc = 0x39f214u;
    // NOP
label_39f218:
    // 0x39f218: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39f218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39f21c:
    // 0x39f21c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_39f220:
    if (ctx->pc == 0x39F220u) {
        ctx->pc = 0x39F220u;
            // 0x39f220: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x39F224u;
        goto label_39f224;
    }
    ctx->pc = 0x39F21Cu;
    {
        const bool branch_taken_0x39f21c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39f21c) {
            ctx->pc = 0x39F220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39F21Cu;
            // 0x39f220: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F23Cu;
            goto label_39f23c;
        }
    }
    ctx->pc = 0x39F224u;
label_39f224:
    // 0x39f224: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x39f224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_39f228:
    // 0x39f228: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x39f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_39f22c:
    // 0x39f22c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x39f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f230:
    // 0x39f230: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x39f230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_39f234:
    // 0x39f234: 0x1000000b  b           . + 4 + (0xB << 2)
label_39f238:
    if (ctx->pc == 0x39F238u) {
        ctx->pc = 0x39F238u;
            // 0x39f238: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->pc = 0x39F23Cu;
        goto label_39f23c;
    }
    ctx->pc = 0x39F234u;
    {
        const bool branch_taken_0x39f234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F234u;
            // 0x39f238: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f234) {
            ctx->pc = 0x39F264u;
            goto label_39f264;
        }
    }
    ctx->pc = 0x39F23Cu;
label_39f23c:
    // 0x39f23c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x39f23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_39f240:
    // 0x39f240: 0x320f809  jalr        $t9
label_39f244:
    if (ctx->pc == 0x39F244u) {
        ctx->pc = 0x39F248u;
        goto label_39f248;
    }
    ctx->pc = 0x39F240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39F248u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39F248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39F248u; }
            if (ctx->pc != 0x39F248u) { return; }
        }
        }
    }
    ctx->pc = 0x39F248u;
label_39f248:
    // 0x39f248: 0x10000006  b           . + 4 + (0x6 << 2)
label_39f24c:
    if (ctx->pc == 0x39F24Cu) {
        ctx->pc = 0x39F250u;
        goto label_39f250;
    }
    ctx->pc = 0x39F248u;
    {
        const bool branch_taken_0x39f248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f248) {
            ctx->pc = 0x39F264u;
            goto label_39f264;
        }
    }
    ctx->pc = 0x39F250u;
label_39f250:
    // 0x39f250: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x39f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_39f254:
    // 0x39f254: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39f254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39f258:
    // 0x39f258: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x39f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_39f25c:
    // 0x39f25c: 0xc057b7c  jal         func_15EDF0
label_39f260:
    if (ctx->pc == 0x39F260u) {
        ctx->pc = 0x39F260u;
            // 0x39f260: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x39F264u;
        goto label_39f264;
    }
    ctx->pc = 0x39F25Cu;
    SET_GPR_U32(ctx, 31, 0x39F264u);
    ctx->pc = 0x39F260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F25Cu;
            // 0x39f260: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F264u; }
        if (ctx->pc != 0x39F264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F264u; }
        if (ctx->pc != 0x39F264u) { return; }
    }
    ctx->pc = 0x39F264u;
label_39f264:
    // 0x39f264: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39f264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39f268:
    // 0x39f268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39f268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39f26c:
    // 0x39f26c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39f26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39f270:
    // 0x39f270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39f270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39f274:
    // 0x39f274: 0x3e00008  jr          $ra
label_39f278:
    if (ctx->pc == 0x39F278u) {
        ctx->pc = 0x39F278u;
            // 0x39f278: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39F27Cu;
        goto label_39f27c;
    }
    ctx->pc = 0x39F274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F274u;
            // 0x39f278: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39F27Cu;
label_39f27c:
    // 0x39f27c: 0x0  nop
    ctx->pc = 0x39f27cu;
    // NOP
label_39f280:
    // 0x39f280: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x39f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_39f284:
    // 0x39f284: 0x248200a4  addiu       $v0, $a0, 0xA4
    ctx->pc = 0x39f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
label_39f288:
    // 0x39f288: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x39f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_39f28c:
    // 0x39f28c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x39f28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_39f290:
    // 0x39f290: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x39f290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_39f294:
    // 0x39f294: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x39f294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39f298:
    // 0x39f298: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x39f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_39f29c:
    // 0x39f29c: 0x249e0094  addiu       $fp, $a0, 0x94
    ctx->pc = 0x39f29cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
label_39f2a0:
    // 0x39f2a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_39f2a4:
    // 0x39f2a4: 0x24970054  addiu       $s7, $a0, 0x54
    ctx->pc = 0x39f2a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
label_39f2a8:
    // 0x39f2a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_39f2ac:
    // 0x39f2ac: 0x24960044  addiu       $s6, $a0, 0x44
    ctx->pc = 0x39f2acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_39f2b0:
    // 0x39f2b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39f2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39f2b4:
    // 0x39f2b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39f2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f2b8:
    // 0x39f2b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39f2bc:
    // 0x39f2bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39f2c0:
    // 0x39f2c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39f2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39f2c4:
    // 0x39f2c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39f2c8:
    // 0x39f2c8: 0x24910084  addiu       $s1, $a0, 0x84
    ctx->pc = 0x39f2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_39f2cc:
    // 0x39f2cc: 0x8c950014  lw          $s5, 0x14($a0)
    ctx->pc = 0x39f2ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_39f2d0:
    // 0x39f2d0: 0x24900034  addiu       $s0, $a0, 0x34
    ctx->pc = 0x39f2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
label_39f2d4:
    // 0x39f2d4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x39f2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_39f2d8:
    // 0x39f2d8: 0x248200b4  addiu       $v0, $a0, 0xB4
    ctx->pc = 0x39f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
label_39f2dc:
    // 0x39f2dc: 0x8c940024  lw          $s4, 0x24($a0)
    ctx->pc = 0x39f2dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_39f2e0:
    // 0x39f2e0: 0x8c930064  lw          $s3, 0x64($a0)
    ctx->pc = 0x39f2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_39f2e4:
    // 0x39f2e4: 0x8c920074  lw          $s2, 0x74($a0)
    ctx->pc = 0x39f2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_39f2e8:
    // 0x39f2e8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x39f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_39f2ec:
    // 0x39f2ec: 0xc040140  jal         func_100500
label_39f2f0:
    if (ctx->pc == 0x39F2F0u) {
        ctx->pc = 0x39F2F0u;
            // 0x39f2f0: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x39F2F4u;
        goto label_39f2f4;
    }
    ctx->pc = 0x39F2ECu;
    SET_GPR_U32(ctx, 31, 0x39F2F4u);
    ctx->pc = 0x39F2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F2ECu;
            // 0x39f2f0: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F2F4u; }
        if (ctx->pc != 0x39F2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F2F4u; }
        if (ctx->pc != 0x39F2F4u) { return; }
    }
    ctx->pc = 0x39F2F4u;
label_39f2f4:
    // 0x39f2f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f2f8:
    // 0x39f2f8: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
label_39f2fc:
    if (ctx->pc == 0x39F2FCu) {
        ctx->pc = 0x39F2FCu;
            // 0x39f2fc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x39F300u;
        goto label_39f300;
    }
    ctx->pc = 0x39F2F8u;
    {
        const bool branch_taken_0x39f2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f2f8) {
            ctx->pc = 0x39F2FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39F2F8u;
            // 0x39f2fc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F33Cu;
            goto label_39f33c;
        }
    }
    ctx->pc = 0x39F300u;
label_39f300:
    // 0x39f300: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x39f300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_39f304:
    // 0x39f304: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x39f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39f308:
    // 0x39f308: 0xc6cd0000  lwc1        $f13, 0x0($s6)
    ctx->pc = 0x39f308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_39f30c:
    // 0x39f30c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x39f30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39f310:
    // 0x39f310: 0xc6ee0000  lwc1        $f14, 0x0($s7)
    ctx->pc = 0x39f310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_39f314:
    // 0x39f314: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x39f314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39f318:
    // 0x39f318: 0xc4510000  lwc1        $f17, 0x0($v0)
    ctx->pc = 0x39f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_39f31c:
    // 0x39f31c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x39f31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39f320:
    // 0x39f320: 0xc62f0000  lwc1        $f15, 0x0($s1)
    ctx->pc = 0x39f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_39f324:
    // 0x39f324: 0xc7d00000  lwc1        $f16, 0x0($fp)
    ctx->pc = 0x39f324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_39f328:
    // 0x39f328: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x39f328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39f32c:
    // 0x39f32c: 0xc4520000  lwc1        $f18, 0x0($v0)
    ctx->pc = 0x39f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_39f330:
    // 0x39f330: 0xc0e7cdc  jal         func_39F370
label_39f334:
    if (ctx->pc == 0x39F334u) {
        ctx->pc = 0x39F334u;
            // 0x39f334: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F338u;
        goto label_39f338;
    }
    ctx->pc = 0x39F330u;
    SET_GPR_U32(ctx, 31, 0x39F338u);
    ctx->pc = 0x39F334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F330u;
            // 0x39f334: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F370u;
    if (runtime->hasFunction(0x39F370u)) {
        auto targetFn = runtime->lookupFunction(0x39F370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F338u; }
        if (ctx->pc != 0x39F338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F370_0x39f370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F338u; }
        if (ctx->pc != 0x39F338u) { return; }
    }
    ctx->pc = 0x39F338u;
label_39f338:
    // 0x39f338: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x39f338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_39f33c:
    // 0x39f33c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x39f33cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39f340:
    // 0x39f340: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x39f340u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39f344:
    // 0x39f344: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39f344u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39f348:
    // 0x39f348: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39f348u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39f34c:
    // 0x39f34c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39f34cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39f350:
    // 0x39f350: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39f350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39f354:
    // 0x39f354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39f354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39f358:
    // 0x39f358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39f358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39f35c:
    // 0x39f35c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39f35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39f360:
    // 0x39f360: 0x3e00008  jr          $ra
label_39f364:
    if (ctx->pc == 0x39F364u) {
        ctx->pc = 0x39F364u;
            // 0x39f364: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x39F368u;
        goto label_39f368;
    }
    ctx->pc = 0x39F360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F360u;
            // 0x39f364: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39F368u;
label_39f368:
    // 0x39f368: 0x0  nop
    ctx->pc = 0x39f368u;
    // NOP
label_39f36c:
    // 0x39f36c: 0x0  nop
    ctx->pc = 0x39f36cu;
    // NOP
}
