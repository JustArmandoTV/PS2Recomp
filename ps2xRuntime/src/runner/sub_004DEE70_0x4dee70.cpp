#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DEE70
// Address: 0x4dee70 - 0x4df3b0
void sub_004DEE70_0x4dee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DEE70_0x4dee70");
#endif

    switch (ctx->pc) {
        case 0x4dee70u: goto label_4dee70;
        case 0x4dee74u: goto label_4dee74;
        case 0x4dee78u: goto label_4dee78;
        case 0x4dee7cu: goto label_4dee7c;
        case 0x4dee80u: goto label_4dee80;
        case 0x4dee84u: goto label_4dee84;
        case 0x4dee88u: goto label_4dee88;
        case 0x4dee8cu: goto label_4dee8c;
        case 0x4dee90u: goto label_4dee90;
        case 0x4dee94u: goto label_4dee94;
        case 0x4dee98u: goto label_4dee98;
        case 0x4dee9cu: goto label_4dee9c;
        case 0x4deea0u: goto label_4deea0;
        case 0x4deea4u: goto label_4deea4;
        case 0x4deea8u: goto label_4deea8;
        case 0x4deeacu: goto label_4deeac;
        case 0x4deeb0u: goto label_4deeb0;
        case 0x4deeb4u: goto label_4deeb4;
        case 0x4deeb8u: goto label_4deeb8;
        case 0x4deebcu: goto label_4deebc;
        case 0x4deec0u: goto label_4deec0;
        case 0x4deec4u: goto label_4deec4;
        case 0x4deec8u: goto label_4deec8;
        case 0x4deeccu: goto label_4deecc;
        case 0x4deed0u: goto label_4deed0;
        case 0x4deed4u: goto label_4deed4;
        case 0x4deed8u: goto label_4deed8;
        case 0x4deedcu: goto label_4deedc;
        case 0x4deee0u: goto label_4deee0;
        case 0x4deee4u: goto label_4deee4;
        case 0x4deee8u: goto label_4deee8;
        case 0x4deeecu: goto label_4deeec;
        case 0x4deef0u: goto label_4deef0;
        case 0x4deef4u: goto label_4deef4;
        case 0x4deef8u: goto label_4deef8;
        case 0x4deefcu: goto label_4deefc;
        case 0x4def00u: goto label_4def00;
        case 0x4def04u: goto label_4def04;
        case 0x4def08u: goto label_4def08;
        case 0x4def0cu: goto label_4def0c;
        case 0x4def10u: goto label_4def10;
        case 0x4def14u: goto label_4def14;
        case 0x4def18u: goto label_4def18;
        case 0x4def1cu: goto label_4def1c;
        case 0x4def20u: goto label_4def20;
        case 0x4def24u: goto label_4def24;
        case 0x4def28u: goto label_4def28;
        case 0x4def2cu: goto label_4def2c;
        case 0x4def30u: goto label_4def30;
        case 0x4def34u: goto label_4def34;
        case 0x4def38u: goto label_4def38;
        case 0x4def3cu: goto label_4def3c;
        case 0x4def40u: goto label_4def40;
        case 0x4def44u: goto label_4def44;
        case 0x4def48u: goto label_4def48;
        case 0x4def4cu: goto label_4def4c;
        case 0x4def50u: goto label_4def50;
        case 0x4def54u: goto label_4def54;
        case 0x4def58u: goto label_4def58;
        case 0x4def5cu: goto label_4def5c;
        case 0x4def60u: goto label_4def60;
        case 0x4def64u: goto label_4def64;
        case 0x4def68u: goto label_4def68;
        case 0x4def6cu: goto label_4def6c;
        case 0x4def70u: goto label_4def70;
        case 0x4def74u: goto label_4def74;
        case 0x4def78u: goto label_4def78;
        case 0x4def7cu: goto label_4def7c;
        case 0x4def80u: goto label_4def80;
        case 0x4def84u: goto label_4def84;
        case 0x4def88u: goto label_4def88;
        case 0x4def8cu: goto label_4def8c;
        case 0x4def90u: goto label_4def90;
        case 0x4def94u: goto label_4def94;
        case 0x4def98u: goto label_4def98;
        case 0x4def9cu: goto label_4def9c;
        case 0x4defa0u: goto label_4defa0;
        case 0x4defa4u: goto label_4defa4;
        case 0x4defa8u: goto label_4defa8;
        case 0x4defacu: goto label_4defac;
        case 0x4defb0u: goto label_4defb0;
        case 0x4defb4u: goto label_4defb4;
        case 0x4defb8u: goto label_4defb8;
        case 0x4defbcu: goto label_4defbc;
        case 0x4defc0u: goto label_4defc0;
        case 0x4defc4u: goto label_4defc4;
        case 0x4defc8u: goto label_4defc8;
        case 0x4defccu: goto label_4defcc;
        case 0x4defd0u: goto label_4defd0;
        case 0x4defd4u: goto label_4defd4;
        case 0x4defd8u: goto label_4defd8;
        case 0x4defdcu: goto label_4defdc;
        case 0x4defe0u: goto label_4defe0;
        case 0x4defe4u: goto label_4defe4;
        case 0x4defe8u: goto label_4defe8;
        case 0x4defecu: goto label_4defec;
        case 0x4deff0u: goto label_4deff0;
        case 0x4deff4u: goto label_4deff4;
        case 0x4deff8u: goto label_4deff8;
        case 0x4deffcu: goto label_4deffc;
        case 0x4df000u: goto label_4df000;
        case 0x4df004u: goto label_4df004;
        case 0x4df008u: goto label_4df008;
        case 0x4df00cu: goto label_4df00c;
        case 0x4df010u: goto label_4df010;
        case 0x4df014u: goto label_4df014;
        case 0x4df018u: goto label_4df018;
        case 0x4df01cu: goto label_4df01c;
        case 0x4df020u: goto label_4df020;
        case 0x4df024u: goto label_4df024;
        case 0x4df028u: goto label_4df028;
        case 0x4df02cu: goto label_4df02c;
        case 0x4df030u: goto label_4df030;
        case 0x4df034u: goto label_4df034;
        case 0x4df038u: goto label_4df038;
        case 0x4df03cu: goto label_4df03c;
        case 0x4df040u: goto label_4df040;
        case 0x4df044u: goto label_4df044;
        case 0x4df048u: goto label_4df048;
        case 0x4df04cu: goto label_4df04c;
        case 0x4df050u: goto label_4df050;
        case 0x4df054u: goto label_4df054;
        case 0x4df058u: goto label_4df058;
        case 0x4df05cu: goto label_4df05c;
        case 0x4df060u: goto label_4df060;
        case 0x4df064u: goto label_4df064;
        case 0x4df068u: goto label_4df068;
        case 0x4df06cu: goto label_4df06c;
        case 0x4df070u: goto label_4df070;
        case 0x4df074u: goto label_4df074;
        case 0x4df078u: goto label_4df078;
        case 0x4df07cu: goto label_4df07c;
        case 0x4df080u: goto label_4df080;
        case 0x4df084u: goto label_4df084;
        case 0x4df088u: goto label_4df088;
        case 0x4df08cu: goto label_4df08c;
        case 0x4df090u: goto label_4df090;
        case 0x4df094u: goto label_4df094;
        case 0x4df098u: goto label_4df098;
        case 0x4df09cu: goto label_4df09c;
        case 0x4df0a0u: goto label_4df0a0;
        case 0x4df0a4u: goto label_4df0a4;
        case 0x4df0a8u: goto label_4df0a8;
        case 0x4df0acu: goto label_4df0ac;
        case 0x4df0b0u: goto label_4df0b0;
        case 0x4df0b4u: goto label_4df0b4;
        case 0x4df0b8u: goto label_4df0b8;
        case 0x4df0bcu: goto label_4df0bc;
        case 0x4df0c0u: goto label_4df0c0;
        case 0x4df0c4u: goto label_4df0c4;
        case 0x4df0c8u: goto label_4df0c8;
        case 0x4df0ccu: goto label_4df0cc;
        case 0x4df0d0u: goto label_4df0d0;
        case 0x4df0d4u: goto label_4df0d4;
        case 0x4df0d8u: goto label_4df0d8;
        case 0x4df0dcu: goto label_4df0dc;
        case 0x4df0e0u: goto label_4df0e0;
        case 0x4df0e4u: goto label_4df0e4;
        case 0x4df0e8u: goto label_4df0e8;
        case 0x4df0ecu: goto label_4df0ec;
        case 0x4df0f0u: goto label_4df0f0;
        case 0x4df0f4u: goto label_4df0f4;
        case 0x4df0f8u: goto label_4df0f8;
        case 0x4df0fcu: goto label_4df0fc;
        case 0x4df100u: goto label_4df100;
        case 0x4df104u: goto label_4df104;
        case 0x4df108u: goto label_4df108;
        case 0x4df10cu: goto label_4df10c;
        case 0x4df110u: goto label_4df110;
        case 0x4df114u: goto label_4df114;
        case 0x4df118u: goto label_4df118;
        case 0x4df11cu: goto label_4df11c;
        case 0x4df120u: goto label_4df120;
        case 0x4df124u: goto label_4df124;
        case 0x4df128u: goto label_4df128;
        case 0x4df12cu: goto label_4df12c;
        case 0x4df130u: goto label_4df130;
        case 0x4df134u: goto label_4df134;
        case 0x4df138u: goto label_4df138;
        case 0x4df13cu: goto label_4df13c;
        case 0x4df140u: goto label_4df140;
        case 0x4df144u: goto label_4df144;
        case 0x4df148u: goto label_4df148;
        case 0x4df14cu: goto label_4df14c;
        case 0x4df150u: goto label_4df150;
        case 0x4df154u: goto label_4df154;
        case 0x4df158u: goto label_4df158;
        case 0x4df15cu: goto label_4df15c;
        case 0x4df160u: goto label_4df160;
        case 0x4df164u: goto label_4df164;
        case 0x4df168u: goto label_4df168;
        case 0x4df16cu: goto label_4df16c;
        case 0x4df170u: goto label_4df170;
        case 0x4df174u: goto label_4df174;
        case 0x4df178u: goto label_4df178;
        case 0x4df17cu: goto label_4df17c;
        case 0x4df180u: goto label_4df180;
        case 0x4df184u: goto label_4df184;
        case 0x4df188u: goto label_4df188;
        case 0x4df18cu: goto label_4df18c;
        case 0x4df190u: goto label_4df190;
        case 0x4df194u: goto label_4df194;
        case 0x4df198u: goto label_4df198;
        case 0x4df19cu: goto label_4df19c;
        case 0x4df1a0u: goto label_4df1a0;
        case 0x4df1a4u: goto label_4df1a4;
        case 0x4df1a8u: goto label_4df1a8;
        case 0x4df1acu: goto label_4df1ac;
        case 0x4df1b0u: goto label_4df1b0;
        case 0x4df1b4u: goto label_4df1b4;
        case 0x4df1b8u: goto label_4df1b8;
        case 0x4df1bcu: goto label_4df1bc;
        case 0x4df1c0u: goto label_4df1c0;
        case 0x4df1c4u: goto label_4df1c4;
        case 0x4df1c8u: goto label_4df1c8;
        case 0x4df1ccu: goto label_4df1cc;
        case 0x4df1d0u: goto label_4df1d0;
        case 0x4df1d4u: goto label_4df1d4;
        case 0x4df1d8u: goto label_4df1d8;
        case 0x4df1dcu: goto label_4df1dc;
        case 0x4df1e0u: goto label_4df1e0;
        case 0x4df1e4u: goto label_4df1e4;
        case 0x4df1e8u: goto label_4df1e8;
        case 0x4df1ecu: goto label_4df1ec;
        case 0x4df1f0u: goto label_4df1f0;
        case 0x4df1f4u: goto label_4df1f4;
        case 0x4df1f8u: goto label_4df1f8;
        case 0x4df1fcu: goto label_4df1fc;
        case 0x4df200u: goto label_4df200;
        case 0x4df204u: goto label_4df204;
        case 0x4df208u: goto label_4df208;
        case 0x4df20cu: goto label_4df20c;
        case 0x4df210u: goto label_4df210;
        case 0x4df214u: goto label_4df214;
        case 0x4df218u: goto label_4df218;
        case 0x4df21cu: goto label_4df21c;
        case 0x4df220u: goto label_4df220;
        case 0x4df224u: goto label_4df224;
        case 0x4df228u: goto label_4df228;
        case 0x4df22cu: goto label_4df22c;
        case 0x4df230u: goto label_4df230;
        case 0x4df234u: goto label_4df234;
        case 0x4df238u: goto label_4df238;
        case 0x4df23cu: goto label_4df23c;
        case 0x4df240u: goto label_4df240;
        case 0x4df244u: goto label_4df244;
        case 0x4df248u: goto label_4df248;
        case 0x4df24cu: goto label_4df24c;
        case 0x4df250u: goto label_4df250;
        case 0x4df254u: goto label_4df254;
        case 0x4df258u: goto label_4df258;
        case 0x4df25cu: goto label_4df25c;
        case 0x4df260u: goto label_4df260;
        case 0x4df264u: goto label_4df264;
        case 0x4df268u: goto label_4df268;
        case 0x4df26cu: goto label_4df26c;
        case 0x4df270u: goto label_4df270;
        case 0x4df274u: goto label_4df274;
        case 0x4df278u: goto label_4df278;
        case 0x4df27cu: goto label_4df27c;
        case 0x4df280u: goto label_4df280;
        case 0x4df284u: goto label_4df284;
        case 0x4df288u: goto label_4df288;
        case 0x4df28cu: goto label_4df28c;
        case 0x4df290u: goto label_4df290;
        case 0x4df294u: goto label_4df294;
        case 0x4df298u: goto label_4df298;
        case 0x4df29cu: goto label_4df29c;
        case 0x4df2a0u: goto label_4df2a0;
        case 0x4df2a4u: goto label_4df2a4;
        case 0x4df2a8u: goto label_4df2a8;
        case 0x4df2acu: goto label_4df2ac;
        case 0x4df2b0u: goto label_4df2b0;
        case 0x4df2b4u: goto label_4df2b4;
        case 0x4df2b8u: goto label_4df2b8;
        case 0x4df2bcu: goto label_4df2bc;
        case 0x4df2c0u: goto label_4df2c0;
        case 0x4df2c4u: goto label_4df2c4;
        case 0x4df2c8u: goto label_4df2c8;
        case 0x4df2ccu: goto label_4df2cc;
        case 0x4df2d0u: goto label_4df2d0;
        case 0x4df2d4u: goto label_4df2d4;
        case 0x4df2d8u: goto label_4df2d8;
        case 0x4df2dcu: goto label_4df2dc;
        case 0x4df2e0u: goto label_4df2e0;
        case 0x4df2e4u: goto label_4df2e4;
        case 0x4df2e8u: goto label_4df2e8;
        case 0x4df2ecu: goto label_4df2ec;
        case 0x4df2f0u: goto label_4df2f0;
        case 0x4df2f4u: goto label_4df2f4;
        case 0x4df2f8u: goto label_4df2f8;
        case 0x4df2fcu: goto label_4df2fc;
        case 0x4df300u: goto label_4df300;
        case 0x4df304u: goto label_4df304;
        case 0x4df308u: goto label_4df308;
        case 0x4df30cu: goto label_4df30c;
        case 0x4df310u: goto label_4df310;
        case 0x4df314u: goto label_4df314;
        case 0x4df318u: goto label_4df318;
        case 0x4df31cu: goto label_4df31c;
        case 0x4df320u: goto label_4df320;
        case 0x4df324u: goto label_4df324;
        case 0x4df328u: goto label_4df328;
        case 0x4df32cu: goto label_4df32c;
        case 0x4df330u: goto label_4df330;
        case 0x4df334u: goto label_4df334;
        case 0x4df338u: goto label_4df338;
        case 0x4df33cu: goto label_4df33c;
        case 0x4df340u: goto label_4df340;
        case 0x4df344u: goto label_4df344;
        case 0x4df348u: goto label_4df348;
        case 0x4df34cu: goto label_4df34c;
        case 0x4df350u: goto label_4df350;
        case 0x4df354u: goto label_4df354;
        case 0x4df358u: goto label_4df358;
        case 0x4df35cu: goto label_4df35c;
        case 0x4df360u: goto label_4df360;
        case 0x4df364u: goto label_4df364;
        case 0x4df368u: goto label_4df368;
        case 0x4df36cu: goto label_4df36c;
        case 0x4df370u: goto label_4df370;
        case 0x4df374u: goto label_4df374;
        case 0x4df378u: goto label_4df378;
        case 0x4df37cu: goto label_4df37c;
        case 0x4df380u: goto label_4df380;
        case 0x4df384u: goto label_4df384;
        case 0x4df388u: goto label_4df388;
        case 0x4df38cu: goto label_4df38c;
        case 0x4df390u: goto label_4df390;
        case 0x4df394u: goto label_4df394;
        case 0x4df398u: goto label_4df398;
        case 0x4df39cu: goto label_4df39c;
        case 0x4df3a0u: goto label_4df3a0;
        case 0x4df3a4u: goto label_4df3a4;
        case 0x4df3a8u: goto label_4df3a8;
        case 0x4df3acu: goto label_4df3ac;
        default: break;
    }

    ctx->pc = 0x4dee70u;

label_4dee70:
    // 0x4dee70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4dee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4dee74:
    // 0x4dee74: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4dee74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4dee78:
    // 0x4dee78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4dee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4dee7c:
    // 0x4dee7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dee80:
    // 0x4dee80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dee80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dee84:
    // 0x4dee84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4dee84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dee88:
    // 0x4dee88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dee8c:
    // 0x4dee8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dee90:
    // 0x4dee90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dee90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dee94:
    // 0x4dee94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4dee94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dee98:
    // 0x4dee98: 0xc10ca68  jal         func_4329A0
label_4dee9c:
    if (ctx->pc == 0x4DEE9Cu) {
        ctx->pc = 0x4DEE9Cu;
            // 0x4dee9c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4DEEA0u;
        goto label_4deea0;
    }
    ctx->pc = 0x4DEE98u;
    SET_GPR_U32(ctx, 31, 0x4DEEA0u);
    ctx->pc = 0x4DEE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEE98u;
            // 0x4dee9c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEEA0u; }
        if (ctx->pc != 0x4DEEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEEA0u; }
        if (ctx->pc != 0x4DEEA0u) { return; }
    }
    ctx->pc = 0x4DEEA0u;
label_4deea0:
    // 0x4deea0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4deea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4deea4:
    // 0x4deea4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4deea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4deea8:
    // 0x4deea8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4deea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4deeac:
    // 0x4deeac: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4deeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4deeb0:
    // 0x4deeb0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4deeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4deeb4:
    // 0x4deeb4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4deeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4deeb8:
    // 0x4deeb8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4deeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4deebc:
    // 0x4deebc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4deebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4deec0:
    // 0x4deec0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4deec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4deec4:
    // 0x4deec4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4deec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4deec8:
    // 0x4deec8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4deec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4deecc:
    // 0x4deecc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4deeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4deed0:
    // 0x4deed0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4deed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4deed4:
    // 0x4deed4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4deed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4deed8:
    // 0x4deed8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4deed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4deedc:
    // 0x4deedc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4deedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4deee0:
    // 0x4deee0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4deee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4deee4:
    // 0x4deee4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4deee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4deee8:
    // 0x4deee8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4deee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4deeec:
    // 0x4deeec: 0xc0582cc  jal         func_160B30
label_4deef0:
    if (ctx->pc == 0x4DEEF0u) {
        ctx->pc = 0x4DEEF0u;
            // 0x4deef0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4DEEF4u;
        goto label_4deef4;
    }
    ctx->pc = 0x4DEEECu;
    SET_GPR_U32(ctx, 31, 0x4DEEF4u);
    ctx->pc = 0x4DEEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEEECu;
            // 0x4deef0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEEF4u; }
        if (ctx->pc != 0x4DEEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEEF4u; }
        if (ctx->pc != 0x4DEEF4u) { return; }
    }
    ctx->pc = 0x4DEEF4u;
label_4deef4:
    // 0x4deef4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4deef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4deef8:
    // 0x4deef8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4deef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4deefc:
    // 0x4deefc: 0x24633058  addiu       $v1, $v1, 0x3058
    ctx->pc = 0x4deefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12376));
label_4def00:
    // 0x4def00: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4def00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4def04:
    // 0x4def04: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4def04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4def08:
    // 0x4def08: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4def08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4def0c:
    // 0x4def0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4def0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4def10:
    // 0x4def10: 0xac44aa78  sw          $a0, -0x5588($v0)
    ctx->pc = 0x4def10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945400), GPR_U32(ctx, 4));
label_4def14:
    // 0x4def14: 0x24633070  addiu       $v1, $v1, 0x3070
    ctx->pc = 0x4def14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12400));
label_4def18:
    // 0x4def18: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4def18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4def1c:
    // 0x4def1c: 0x244230a8  addiu       $v0, $v0, 0x30A8
    ctx->pc = 0x4def1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12456));
label_4def20:
    // 0x4def20: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4def20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4def24:
    // 0x4def24: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4def24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4def28:
    // 0x4def28: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4def28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4def2c:
    // 0x4def2c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4def2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4def30:
    // 0x4def30: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4def30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4def34:
    // 0x4def34: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4def34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4def38:
    // 0x4def38: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4def38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4def3c:
    // 0x4def3c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4def3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4def40:
    // 0x4def40: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4def40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4def44:
    // 0x4def44: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4def44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4def48:
    // 0x4def48: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4def48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4def4c:
    // 0x4def4c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4def4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4def50:
    // 0x4def50: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4def50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4def54:
    // 0x4def54: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4def58:
    if (ctx->pc == 0x4DEF58u) {
        ctx->pc = 0x4DEF5Cu;
        goto label_4def5c;
    }
    ctx->pc = 0x4DEF54u;
    {
        const bool branch_taken_0x4def54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4def54) {
            ctx->pc = 0x4DEFE8u;
            goto label_4defe8;
        }
    }
    ctx->pc = 0x4DEF5Cu;
label_4def5c:
    // 0x4def5c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4def5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4def60:
    // 0x4def60: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4def60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4def64:
    // 0x4def64: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4def64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4def68:
    // 0x4def68: 0xc040138  jal         func_1004E0
label_4def6c:
    if (ctx->pc == 0x4DEF6Cu) {
        ctx->pc = 0x4DEF6Cu;
            // 0x4def6c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4DEF70u;
        goto label_4def70;
    }
    ctx->pc = 0x4DEF68u;
    SET_GPR_U32(ctx, 31, 0x4DEF70u);
    ctx->pc = 0x4DEF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEF68u;
            // 0x4def6c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEF70u; }
        if (ctx->pc != 0x4DEF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEF70u; }
        if (ctx->pc != 0x4DEF70u) { return; }
    }
    ctx->pc = 0x4DEF70u;
label_4def70:
    // 0x4def70: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4def70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4def74:
    // 0x4def74: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4def74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_4def78:
    // 0x4def78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4def78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4def7c:
    // 0x4def7c: 0x24a5f010  addiu       $a1, $a1, -0xFF0
    ctx->pc = 0x4def7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963216));
label_4def80:
    // 0x4def80: 0x24c6e7b0  addiu       $a2, $a2, -0x1850
    ctx->pc = 0x4def80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961072));
label_4def84:
    // 0x4def84: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4def84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_4def88:
    // 0x4def88: 0xc040840  jal         func_102100
label_4def8c:
    if (ctx->pc == 0x4DEF8Cu) {
        ctx->pc = 0x4DEF8Cu;
            // 0x4def8c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DEF90u;
        goto label_4def90;
    }
    ctx->pc = 0x4DEF88u;
    SET_GPR_U32(ctx, 31, 0x4DEF90u);
    ctx->pc = 0x4DEF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEF88u;
            // 0x4def8c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEF90u; }
        if (ctx->pc != 0x4DEF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEF90u; }
        if (ctx->pc != 0x4DEF90u) { return; }
    }
    ctx->pc = 0x4DEF90u;
label_4def90:
    // 0x4def90: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4def90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4def94:
    // 0x4def94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4def94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4def98:
    // 0x4def98: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4def98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4def9c:
    // 0x4def9c: 0xc0788fc  jal         func_1E23F0
label_4defa0:
    if (ctx->pc == 0x4DEFA0u) {
        ctx->pc = 0x4DEFA0u;
            // 0x4defa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DEFA4u;
        goto label_4defa4;
    }
    ctx->pc = 0x4DEF9Cu;
    SET_GPR_U32(ctx, 31, 0x4DEFA4u);
    ctx->pc = 0x4DEFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEF9Cu;
            // 0x4defa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEFA4u; }
        if (ctx->pc != 0x4DEFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEFA4u; }
        if (ctx->pc != 0x4DEFA4u) { return; }
    }
    ctx->pc = 0x4DEFA4u;
label_4defa4:
    // 0x4defa4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4defa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4defa8:
    // 0x4defa8: 0xc0788fc  jal         func_1E23F0
label_4defac:
    if (ctx->pc == 0x4DEFACu) {
        ctx->pc = 0x4DEFACu;
            // 0x4defac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DEFB0u;
        goto label_4defb0;
    }
    ctx->pc = 0x4DEFA8u;
    SET_GPR_U32(ctx, 31, 0x4DEFB0u);
    ctx->pc = 0x4DEFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEFA8u;
            // 0x4defac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEFB0u; }
        if (ctx->pc != 0x4DEFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEFB0u; }
        if (ctx->pc != 0x4DEFB0u) { return; }
    }
    ctx->pc = 0x4DEFB0u;
label_4defb0:
    // 0x4defb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4defb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4defb4:
    // 0x4defb4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4defb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4defb8:
    // 0x4defb8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4defb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4defbc:
    // 0x4defbc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4defbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4defc0:
    // 0x4defc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4defc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4defc4:
    // 0x4defc4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4defc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4defc8:
    // 0x4defc8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4defc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4defcc:
    // 0x4defcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4defccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4defd0:
    // 0x4defd0: 0xc0a997c  jal         func_2A65F0
label_4defd4:
    if (ctx->pc == 0x4DEFD4u) {
        ctx->pc = 0x4DEFD4u;
            // 0x4defd4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4DEFD8u;
        goto label_4defd8;
    }
    ctx->pc = 0x4DEFD0u;
    SET_GPR_U32(ctx, 31, 0x4DEFD8u);
    ctx->pc = 0x4DEFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEFD0u;
            // 0x4defd4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEFD8u; }
        if (ctx->pc != 0x4DEFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEFD8u; }
        if (ctx->pc != 0x4DEFD8u) { return; }
    }
    ctx->pc = 0x4DEFD8u;
label_4defd8:
    // 0x4defd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4defd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4defdc:
    // 0x4defdc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4defdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4defe0:
    // 0x4defe0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4defe4:
    if (ctx->pc == 0x4DEFE4u) {
        ctx->pc = 0x4DEFE4u;
            // 0x4defe4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x4DEFE8u;
        goto label_4defe8;
    }
    ctx->pc = 0x4DEFE0u;
    {
        const bool branch_taken_0x4defe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DEFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEFE0u;
            // 0x4defe4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4defe0) {
            ctx->pc = 0x4DEFB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4defb4;
        }
    }
    ctx->pc = 0x4DEFE8u;
label_4defe8:
    // 0x4defe8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4defe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4defec:
    // 0x4defec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4defecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4deff0:
    // 0x4deff0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4deff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4deff4:
    // 0x4deff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4deff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4deff8:
    // 0x4deff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4deff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4deffc:
    // 0x4deffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4deffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4df000:
    // 0x4df000: 0x3e00008  jr          $ra
label_4df004:
    if (ctx->pc == 0x4DF004u) {
        ctx->pc = 0x4DF004u;
            // 0x4df004: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DF008u;
        goto label_4df008;
    }
    ctx->pc = 0x4DF000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF000u;
            // 0x4df004: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF008u;
label_4df008:
    // 0x4df008: 0x0  nop
    ctx->pc = 0x4df008u;
    // NOP
label_4df00c:
    // 0x4df00c: 0x0  nop
    ctx->pc = 0x4df00cu;
    // NOP
label_4df010:
    // 0x4df010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4df010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4df014:
    // 0x4df014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4df014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4df018:
    // 0x4df018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4df018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4df01c:
    // 0x4df01c: 0xc12e6bc  jal         func_4B9AF0
label_4df020:
    if (ctx->pc == 0x4DF020u) {
        ctx->pc = 0x4DF020u;
            // 0x4df020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF024u;
        goto label_4df024;
    }
    ctx->pc = 0x4DF01Cu;
    SET_GPR_U32(ctx, 31, 0x4DF024u);
    ctx->pc = 0x4DF020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF01Cu;
            // 0x4df020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF024u; }
        if (ctx->pc != 0x4DF024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF024u; }
        if (ctx->pc != 0x4DF024u) { return; }
    }
    ctx->pc = 0x4DF024u;
label_4df024:
    // 0x4df024: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4df024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4df028:
    // 0x4df028: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4df028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4df02c:
    // 0x4df02c: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x4df02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
label_4df030:
    // 0x4df030: 0x24633150  addiu       $v1, $v1, 0x3150
    ctx->pc = 0x4df030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12624));
label_4df034:
    // 0x4df034: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4df034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4df038:
    // 0x4df038: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4df038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4df03c:
    // 0x4df03c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4df03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4df040:
    // 0x4df040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4df040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4df044:
    // 0x4df044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4df044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4df048:
    // 0x4df048: 0x3e00008  jr          $ra
label_4df04c:
    if (ctx->pc == 0x4DF04Cu) {
        ctx->pc = 0x4DF04Cu;
            // 0x4df04c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DF050u;
        goto label_4df050;
    }
    ctx->pc = 0x4DF048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF048u;
            // 0x4df04c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF050u;
label_4df050:
    // 0x4df050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4df050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4df054:
    // 0x4df054: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4df054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4df058:
    // 0x4df058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4df058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4df05c:
    // 0x4df05c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4df05cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4df060:
    // 0x4df060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4df060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4df064:
    // 0x4df064: 0x8c42aa78  lw          $v0, -0x5588($v0)
    ctx->pc = 0x4df064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945400)));
label_4df068:
    // 0x4df068: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4df068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4df06c:
    // 0x4df06c: 0xc12e608  jal         func_4B9820
label_4df070:
    if (ctx->pc == 0x4DF070u) {
        ctx->pc = 0x4DF070u;
            // 0x4df070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF074u;
        goto label_4df074;
    }
    ctx->pc = 0x4DF06Cu;
    SET_GPR_U32(ctx, 31, 0x4DF074u);
    ctx->pc = 0x4DF070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF06Cu;
            // 0x4df070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF074u; }
        if (ctx->pc != 0x4DF074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF074u; }
        if (ctx->pc != 0x4DF074u) { return; }
    }
    ctx->pc = 0x4DF074u;
label_4df074:
    // 0x4df074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4df074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4df078:
    // 0x4df078: 0xa20300d1  sb          $v1, 0xD1($s0)
    ctx->pc = 0x4df078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 3));
label_4df07c:
    // 0x4df07c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4df07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4df080:
    // 0x4df080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4df080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4df084:
    // 0x4df084: 0x3e00008  jr          $ra
label_4df088:
    if (ctx->pc == 0x4DF088u) {
        ctx->pc = 0x4DF088u;
            // 0x4df088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DF08Cu;
        goto label_4df08c;
    }
    ctx->pc = 0x4DF084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF084u;
            // 0x4df088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF08Cu;
label_4df08c:
    // 0x4df08c: 0x0  nop
    ctx->pc = 0x4df08cu;
    // NOP
label_4df090:
    // 0x4df090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4df090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4df094:
    // 0x4df094: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4df094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4df098:
    // 0x4df098: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4df098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4df09c:
    // 0x4df09c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4df09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4df0a0:
    // 0x4df0a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4df0a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4df0a4:
    // 0x4df0a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4df0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4df0a8:
    // 0x4df0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4df0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4df0ac:
    // 0x4df0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4df0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4df0b0:
    // 0x4df0b0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4df0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4df0b4:
    // 0x4df0b4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4df0b8:
    if (ctx->pc == 0x4DF0B8u) {
        ctx->pc = 0x4DF0B8u;
            // 0x4df0b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF0BCu;
        goto label_4df0bc;
    }
    ctx->pc = 0x4DF0B4u;
    {
        const bool branch_taken_0x4df0b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF0B4u;
            // 0x4df0b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df0b4) {
            ctx->pc = 0x4DF0F8u;
            goto label_4df0f8;
        }
    }
    ctx->pc = 0x4DF0BCu;
label_4df0bc:
    // 0x4df0bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4df0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4df0c0:
    // 0x4df0c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4df0c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4df0c4:
    // 0x4df0c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4df0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4df0c8:
    // 0x4df0c8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4df0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4df0cc:
    // 0x4df0cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4df0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4df0d0:
    // 0x4df0d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4df0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4df0d4:
    // 0x4df0d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4df0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4df0d8:
    // 0x4df0d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4df0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4df0dc:
    // 0x4df0dc: 0x320f809  jalr        $t9
label_4df0e0:
    if (ctx->pc == 0x4DF0E0u) {
        ctx->pc = 0x4DF0E4u;
        goto label_4df0e4;
    }
    ctx->pc = 0x4DF0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DF0E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DF0E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DF0E4u; }
            if (ctx->pc != 0x4DF0E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DF0E4u;
label_4df0e4:
    // 0x4df0e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4df0e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4df0e8:
    // 0x4df0e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4df0e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4df0ec:
    // 0x4df0ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4df0ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4df0f0:
    // 0x4df0f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4df0f4:
    if (ctx->pc == 0x4DF0F4u) {
        ctx->pc = 0x4DF0F4u;
            // 0x4df0f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4DF0F8u;
        goto label_4df0f8;
    }
    ctx->pc = 0x4DF0F0u;
    {
        const bool branch_taken_0x4df0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DF0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF0F0u;
            // 0x4df0f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df0f0) {
            ctx->pc = 0x4DF0C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4df0c8;
        }
    }
    ctx->pc = 0x4DF0F8u;
label_4df0f8:
    // 0x4df0f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4df0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4df0fc:
    // 0x4df0fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4df0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4df100:
    // 0x4df100: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4df100u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4df104:
    // 0x4df104: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4df104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4df108:
    // 0x4df108: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4df108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4df10c:
    // 0x4df10c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4df10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df110:
    // 0x4df110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4df110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4df114:
    // 0x4df114: 0x3e00008  jr          $ra
label_4df118:
    if (ctx->pc == 0x4DF118u) {
        ctx->pc = 0x4DF118u;
            // 0x4df118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DF11Cu;
        goto label_4df11c;
    }
    ctx->pc = 0x4DF114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF114u;
            // 0x4df118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF11Cu;
label_4df11c:
    // 0x4df11c: 0x0  nop
    ctx->pc = 0x4df11cu;
    // NOP
label_4df120:
    // 0x4df120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4df120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4df124:
    // 0x4df124: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4df124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4df128:
    // 0x4df128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4df128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4df12c:
    // 0x4df12c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4df12cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4df130:
    // 0x4df130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4df130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4df134:
    // 0x4df134: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4df134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4df138:
    // 0x4df138: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4df138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4df13c:
    // 0x4df13c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4df13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4df140:
    // 0x4df140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4df140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4df144:
    // 0x4df144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4df144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4df148:
    // 0x4df148: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4df148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4df14c:
    // 0x4df14c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4df14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4df150:
    // 0x4df150: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4df150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4df154:
    // 0x4df154: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4df154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4df158:
    // 0x4df158: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4df158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4df15c:
    // 0x4df15c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4df15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4df160:
    // 0x4df160: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4df160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4df164:
    // 0x4df164: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4df164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4df168:
    // 0x4df168: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4df168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4df16c:
    // 0x4df16c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4df16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4df170:
    // 0x4df170: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4df170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4df174:
    // 0x4df174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4df174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4df178:
    // 0x4df178: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4df178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4df17c:
    // 0x4df17c: 0xc0a997c  jal         func_2A65F0
label_4df180:
    if (ctx->pc == 0x4DF180u) {
        ctx->pc = 0x4DF180u;
            // 0x4df180: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4DF184u;
        goto label_4df184;
    }
    ctx->pc = 0x4DF17Cu;
    SET_GPR_U32(ctx, 31, 0x4DF184u);
    ctx->pc = 0x4DF180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF17Cu;
            // 0x4df180: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF184u; }
        if (ctx->pc != 0x4DF184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF184u; }
        if (ctx->pc != 0x4DF184u) { return; }
    }
    ctx->pc = 0x4DF184u;
label_4df184:
    // 0x4df184: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4df184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4df188:
    // 0x4df188: 0xc0d879c  jal         func_361E70
label_4df18c:
    if (ctx->pc == 0x4DF18Cu) {
        ctx->pc = 0x4DF18Cu;
            // 0x4df18c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF190u;
        goto label_4df190;
    }
    ctx->pc = 0x4DF188u;
    SET_GPR_U32(ctx, 31, 0x4DF190u);
    ctx->pc = 0x4DF18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF188u;
            // 0x4df18c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF190u; }
        if (ctx->pc != 0x4DF190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF190u; }
        if (ctx->pc != 0x4DF190u) { return; }
    }
    ctx->pc = 0x4DF190u;
label_4df190:
    // 0x4df190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4df190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4df194:
    // 0x4df194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4df194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4df198:
    // 0x4df198: 0x3e00008  jr          $ra
label_4df19c:
    if (ctx->pc == 0x4DF19Cu) {
        ctx->pc = 0x4DF19Cu;
            // 0x4df19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DF1A0u;
        goto label_4df1a0;
    }
    ctx->pc = 0x4DF198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF198u;
            // 0x4df19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF1A0u;
label_4df1a0:
    // 0x4df1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4df1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4df1a4:
    // 0x4df1a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4df1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4df1a8:
    // 0x4df1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4df1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4df1ac:
    // 0x4df1ac: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4df1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4df1b0:
    // 0x4df1b0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4df1b4:
    if (ctx->pc == 0x4DF1B4u) {
        ctx->pc = 0x4DF1B4u;
            // 0x4df1b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF1B8u;
        goto label_4df1b8;
    }
    ctx->pc = 0x4DF1B0u;
    {
        const bool branch_taken_0x4df1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF1B0u;
            // 0x4df1b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df1b0) {
            ctx->pc = 0x4DF2D0u;
            goto label_4df2d0;
        }
    }
    ctx->pc = 0x4DF1B8u;
label_4df1b8:
    // 0x4df1b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4df1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4df1bc:
    // 0x4df1bc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4df1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4df1c0:
    // 0x4df1c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4df1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4df1c4:
    // 0x4df1c4: 0xc075128  jal         func_1D44A0
label_4df1c8:
    if (ctx->pc == 0x4DF1C8u) {
        ctx->pc = 0x4DF1C8u;
            // 0x4df1c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4DF1CCu;
        goto label_4df1cc;
    }
    ctx->pc = 0x4DF1C4u;
    SET_GPR_U32(ctx, 31, 0x4DF1CCu);
    ctx->pc = 0x4DF1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF1C4u;
            // 0x4df1c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF1CCu; }
        if (ctx->pc != 0x4DF1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF1CCu; }
        if (ctx->pc != 0x4DF1CCu) { return; }
    }
    ctx->pc = 0x4DF1CCu;
label_4df1cc:
    // 0x4df1cc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4df1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4df1d0:
    // 0x4df1d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4df1d4:
    // 0x4df1d4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4df1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4df1d8:
    // 0x4df1d8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4df1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4df1dc:
    // 0x4df1dc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4df1dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4df1e0:
    // 0x4df1e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4df1e4:
    if (ctx->pc == 0x4DF1E4u) {
        ctx->pc = 0x4DF1E4u;
            // 0x4df1e4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4DF1E8u;
        goto label_4df1e8;
    }
    ctx->pc = 0x4DF1E0u;
    {
        const bool branch_taken_0x4df1e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF1E0u;
            // 0x4df1e4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df1e0) {
            ctx->pc = 0x4DF1F0u;
            goto label_4df1f0;
        }
    }
    ctx->pc = 0x4DF1E8u;
label_4df1e8:
    // 0x4df1e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4df1ec:
    // 0x4df1ec: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4df1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4df1f0:
    // 0x4df1f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4df1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4df1f4:
    // 0x4df1f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4df1f8:
    // 0x4df1f8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4df1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4df1fc:
    // 0x4df1fc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4df1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4df200:
    // 0x4df200: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4df200u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4df204:
    // 0x4df204: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4df208:
    if (ctx->pc == 0x4DF208u) {
        ctx->pc = 0x4DF208u;
            // 0x4df208: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DF20Cu;
        goto label_4df20c;
    }
    ctx->pc = 0x4DF204u;
    {
        const bool branch_taken_0x4df204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df204) {
            ctx->pc = 0x4DF208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF204u;
            // 0x4df208: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF218u;
            goto label_4df218;
        }
    }
    ctx->pc = 0x4DF20Cu;
label_4df20c:
    // 0x4df20c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4df210:
    // 0x4df210: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4df210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4df214:
    // 0x4df214: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4df214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4df218:
    // 0x4df218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4df21c:
    // 0x4df21c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4df21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4df220:
    // 0x4df220: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4df220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4df224:
    // 0x4df224: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4df224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4df228:
    // 0x4df228: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4df22c:
    if (ctx->pc == 0x4DF22Cu) {
        ctx->pc = 0x4DF22Cu;
            // 0x4df22c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4DF230u;
        goto label_4df230;
    }
    ctx->pc = 0x4DF228u;
    {
        const bool branch_taken_0x4df228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df228) {
            ctx->pc = 0x4DF22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF228u;
            // 0x4df22c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF23Cu;
            goto label_4df23c;
        }
    }
    ctx->pc = 0x4DF230u;
label_4df230:
    // 0x4df230: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4df234:
    // 0x4df234: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4df234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4df238:
    // 0x4df238: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4df238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4df23c:
    // 0x4df23c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4df23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4df240:
    // 0x4df240: 0x320f809  jalr        $t9
label_4df244:
    if (ctx->pc == 0x4DF244u) {
        ctx->pc = 0x4DF244u;
            // 0x4df244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF248u;
        goto label_4df248;
    }
    ctx->pc = 0x4DF240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DF248u);
        ctx->pc = 0x4DF244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF240u;
            // 0x4df244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DF248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DF248u; }
            if (ctx->pc != 0x4DF248u) { return; }
        }
        }
    }
    ctx->pc = 0x4DF248u;
label_4df248:
    // 0x4df248: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4df248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4df24c:
    // 0x4df24c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df250:
    // 0x4df250: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4df250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4df254:
    // 0x4df254: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4df254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4df258:
    // 0x4df258: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4df258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4df25c:
    // 0x4df25c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4df25cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4df260:
    // 0x4df260: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4df264:
    if (ctx->pc == 0x4DF264u) {
        ctx->pc = 0x4DF264u;
            // 0x4df264: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4DF268u;
        goto label_4df268;
    }
    ctx->pc = 0x4DF260u;
    {
        const bool branch_taken_0x4df260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df260) {
            ctx->pc = 0x4DF264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF260u;
            // 0x4df264: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF274u;
            goto label_4df274;
        }
    }
    ctx->pc = 0x4DF268u;
label_4df268:
    // 0x4df268: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df26c:
    // 0x4df26c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4df26cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4df270:
    // 0x4df270: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4df270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4df274:
    // 0x4df274: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df278:
    // 0x4df278: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4df278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4df27c:
    // 0x4df27c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4df27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4df280:
    // 0x4df280: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4df280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4df284:
    // 0x4df284: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4df284u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4df288:
    // 0x4df288: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4df28c:
    if (ctx->pc == 0x4DF28Cu) {
        ctx->pc = 0x4DF290u;
        goto label_4df290;
    }
    ctx->pc = 0x4DF288u;
    {
        const bool branch_taken_0x4df288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df288) {
            ctx->pc = 0x4DF298u;
            goto label_4df298;
        }
    }
    ctx->pc = 0x4DF290u;
label_4df290:
    // 0x4df290: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df294:
    // 0x4df294: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4df294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4df298:
    // 0x4df298: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df29c:
    // 0x4df29c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4df29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4df2a0:
    // 0x4df2a0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4df2a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4df2a4:
    // 0x4df2a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4df2a8:
    if (ctx->pc == 0x4DF2A8u) {
        ctx->pc = 0x4DF2ACu;
        goto label_4df2ac;
    }
    ctx->pc = 0x4DF2A4u;
    {
        const bool branch_taken_0x4df2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df2a4) {
            ctx->pc = 0x4DF2B4u;
            goto label_4df2b4;
        }
    }
    ctx->pc = 0x4DF2ACu;
label_4df2ac:
    // 0x4df2ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df2b0:
    // 0x4df2b0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4df2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4df2b4:
    // 0x4df2b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df2b8:
    // 0x4df2b8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4df2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4df2bc:
    // 0x4df2bc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4df2bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4df2c0:
    // 0x4df2c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4df2c4:
    if (ctx->pc == 0x4DF2C4u) {
        ctx->pc = 0x4DF2C4u;
            // 0x4df2c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4DF2C8u;
        goto label_4df2c8;
    }
    ctx->pc = 0x4DF2C0u;
    {
        const bool branch_taken_0x4df2c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df2c0) {
            ctx->pc = 0x4DF2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF2C0u;
            // 0x4df2c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF2D4u;
            goto label_4df2d4;
        }
    }
    ctx->pc = 0x4DF2C8u;
label_4df2c8:
    // 0x4df2c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df2cc:
    // 0x4df2cc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4df2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4df2d0:
    // 0x4df2d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4df2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4df2d4:
    // 0x4df2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4df2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4df2d8:
    // 0x4df2d8: 0x3e00008  jr          $ra
label_4df2dc:
    if (ctx->pc == 0x4DF2DCu) {
        ctx->pc = 0x4DF2DCu;
            // 0x4df2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DF2E0u;
        goto label_4df2e0;
    }
    ctx->pc = 0x4DF2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF2D8u;
            // 0x4df2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF2E0u;
label_4df2e0:
    // 0x4df2e0: 0x81379ec  j           func_4DE7B0
label_4df2e4:
    if (ctx->pc == 0x4DF2E4u) {
        ctx->pc = 0x4DF2E4u;
            // 0x4df2e4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4DF2E8u;
        goto label_4df2e8;
    }
    ctx->pc = 0x4DF2E0u;
    ctx->pc = 0x4DF2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF2E0u;
            // 0x4df2e4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DE7B0u;
    {
        auto targetFn = runtime->lookupFunction(0x4DE7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DF2E8u;
label_4df2e8:
    // 0x4df2e8: 0x0  nop
    ctx->pc = 0x4df2e8u;
    // NOP
label_4df2ec:
    // 0x4df2ec: 0x0  nop
    ctx->pc = 0x4df2ecu;
    // NOP
label_4df2f0:
    // 0x4df2f0: 0x8137b30  j           func_4DECC0
label_4df2f4:
    if (ctx->pc == 0x4DF2F4u) {
        ctx->pc = 0x4DF2F4u;
            // 0x4df2f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DF2F8u;
        goto label_4df2f8;
    }
    ctx->pc = 0x4DF2F0u;
    ctx->pc = 0x4DF2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF2F0u;
            // 0x4df2f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DECC0u;
    {
        auto targetFn = runtime->lookupFunction(0x4DECC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DF2F8u;
label_4df2f8:
    // 0x4df2f8: 0x0  nop
    ctx->pc = 0x4df2f8u;
    // NOP
label_4df2fc:
    // 0x4df2fc: 0x0  nop
    ctx->pc = 0x4df2fcu;
    // NOP
label_4df300:
    // 0x4df300: 0x8137994  j           func_4DE650
label_4df304:
    if (ctx->pc == 0x4DF304u) {
        ctx->pc = 0x4DF304u;
            // 0x4df304: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DF308u;
        goto label_4df308;
    }
    ctx->pc = 0x4DF300u;
    ctx->pc = 0x4DF304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF300u;
            // 0x4df304: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DE650u;
    if (runtime->hasFunction(0x4DE650u)) {
        auto targetFn = runtime->lookupFunction(0x4DE650u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004DE650_0x4de650(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4DF308u;
label_4df308:
    // 0x4df308: 0x0  nop
    ctx->pc = 0x4df308u;
    // NOP
label_4df30c:
    // 0x4df30c: 0x0  nop
    ctx->pc = 0x4df30cu;
    // NOP
label_4df310:
    // 0x4df310: 0x8137970  j           func_4DE5C0
label_4df314:
    if (ctx->pc == 0x4DF314u) {
        ctx->pc = 0x4DF314u;
            // 0x4df314: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DF318u;
        goto label_4df318;
    }
    ctx->pc = 0x4DF310u;
    ctx->pc = 0x4DF314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF310u;
            // 0x4df314: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DE5C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4DE5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DF318u;
label_4df318:
    // 0x4df318: 0x0  nop
    ctx->pc = 0x4df318u;
    // NOP
label_4df31c:
    // 0x4df31c: 0x0  nop
    ctx->pc = 0x4df31cu;
    // NOP
label_4df320:
    // 0x4df320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4df320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4df324:
    // 0x4df324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4df324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4df328:
    // 0x4df328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4df328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4df32c:
    // 0x4df32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4df32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4df330:
    // 0x4df330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4df330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4df334:
    // 0x4df334: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4df338:
    if (ctx->pc == 0x4DF338u) {
        ctx->pc = 0x4DF338u;
            // 0x4df338: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF33Cu;
        goto label_4df33c;
    }
    ctx->pc = 0x4DF334u;
    {
        const bool branch_taken_0x4df334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF334u;
            // 0x4df338: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df334) {
            ctx->pc = 0x4DF390u;
            goto label_4df390;
        }
    }
    ctx->pc = 0x4DF33Cu;
label_4df33c:
    // 0x4df33c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4df33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4df340:
    // 0x4df340: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4df340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4df344:
    // 0x4df344: 0x246331b0  addiu       $v1, $v1, 0x31B0
    ctx->pc = 0x4df344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12720));
label_4df348:
    // 0x4df348: 0x244231e8  addiu       $v0, $v0, 0x31E8
    ctx->pc = 0x4df348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12776));
label_4df34c:
    // 0x4df34c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4df350:
    // 0x4df350: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4df354:
    if (ctx->pc == 0x4DF354u) {
        ctx->pc = 0x4DF354u;
            // 0x4df354: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4DF358u;
        goto label_4df358;
    }
    ctx->pc = 0x4DF350u;
    {
        const bool branch_taken_0x4df350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF350u;
            // 0x4df354: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df350) {
            ctx->pc = 0x4DF378u;
            goto label_4df378;
        }
    }
    ctx->pc = 0x4DF358u;
label_4df358:
    // 0x4df358: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4df358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4df35c:
    // 0x4df35c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4df35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4df360:
    // 0x4df360: 0x24633260  addiu       $v1, $v1, 0x3260
    ctx->pc = 0x4df360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12896));
label_4df364:
    // 0x4df364: 0x24423298  addiu       $v0, $v0, 0x3298
    ctx->pc = 0x4df364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12952));
label_4df368:
    // 0x4df368: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4df36c:
    // 0x4df36c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4df36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4df370:
    // 0x4df370: 0xc137cec  jal         func_4DF3B0
label_4df374:
    if (ctx->pc == 0x4DF374u) {
        ctx->pc = 0x4DF374u;
            // 0x4df374: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4DF378u;
        goto label_4df378;
    }
    ctx->pc = 0x4DF370u;
    SET_GPR_U32(ctx, 31, 0x4DF378u);
    ctx->pc = 0x4DF374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF370u;
            // 0x4df374: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DF3B0u;
    if (runtime->hasFunction(0x4DF3B0u)) {
        auto targetFn = runtime->lookupFunction(0x4DF3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF378u; }
        if (ctx->pc != 0x4DF378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DF3B0_0x4df3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF378u; }
        if (ctx->pc != 0x4DF378u) { return; }
    }
    ctx->pc = 0x4DF378u;
label_4df378:
    // 0x4df378: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4df378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4df37c:
    // 0x4df37c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4df37cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4df380:
    // 0x4df380: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4df384:
    if (ctx->pc == 0x4DF384u) {
        ctx->pc = 0x4DF384u;
            // 0x4df384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF388u;
        goto label_4df388;
    }
    ctx->pc = 0x4DF380u;
    {
        const bool branch_taken_0x4df380 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4df380) {
            ctx->pc = 0x4DF384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF380u;
            // 0x4df384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DF394u;
            goto label_4df394;
        }
    }
    ctx->pc = 0x4DF388u;
label_4df388:
    // 0x4df388: 0xc0400a8  jal         func_1002A0
label_4df38c:
    if (ctx->pc == 0x4DF38Cu) {
        ctx->pc = 0x4DF38Cu;
            // 0x4df38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF390u;
        goto label_4df390;
    }
    ctx->pc = 0x4DF388u;
    SET_GPR_U32(ctx, 31, 0x4DF390u);
    ctx->pc = 0x4DF38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF388u;
            // 0x4df38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF390u; }
        if (ctx->pc != 0x4DF390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF390u; }
        if (ctx->pc != 0x4DF390u) { return; }
    }
    ctx->pc = 0x4DF390u;
label_4df390:
    // 0x4df390: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4df390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4df394:
    // 0x4df394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4df394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4df398:
    // 0x4df398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4df398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df39c:
    // 0x4df39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4df39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4df3a0:
    // 0x4df3a0: 0x3e00008  jr          $ra
label_4df3a4:
    if (ctx->pc == 0x4DF3A4u) {
        ctx->pc = 0x4DF3A4u;
            // 0x4df3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DF3A8u;
        goto label_4df3a8;
    }
    ctx->pc = 0x4DF3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF3A0u;
            // 0x4df3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF3A8u;
label_4df3a8:
    // 0x4df3a8: 0x0  nop
    ctx->pc = 0x4df3a8u;
    // NOP
label_4df3ac:
    // 0x4df3ac: 0x0  nop
    ctx->pc = 0x4df3acu;
    // NOP
}
