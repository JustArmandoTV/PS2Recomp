#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044ECF0
// Address: 0x44ecf0 - 0x44f1b0
void sub_0044ECF0_0x44ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044ECF0_0x44ecf0");
#endif

    switch (ctx->pc) {
        case 0x44ecf0u: goto label_44ecf0;
        case 0x44ecf4u: goto label_44ecf4;
        case 0x44ecf8u: goto label_44ecf8;
        case 0x44ecfcu: goto label_44ecfc;
        case 0x44ed00u: goto label_44ed00;
        case 0x44ed04u: goto label_44ed04;
        case 0x44ed08u: goto label_44ed08;
        case 0x44ed0cu: goto label_44ed0c;
        case 0x44ed10u: goto label_44ed10;
        case 0x44ed14u: goto label_44ed14;
        case 0x44ed18u: goto label_44ed18;
        case 0x44ed1cu: goto label_44ed1c;
        case 0x44ed20u: goto label_44ed20;
        case 0x44ed24u: goto label_44ed24;
        case 0x44ed28u: goto label_44ed28;
        case 0x44ed2cu: goto label_44ed2c;
        case 0x44ed30u: goto label_44ed30;
        case 0x44ed34u: goto label_44ed34;
        case 0x44ed38u: goto label_44ed38;
        case 0x44ed3cu: goto label_44ed3c;
        case 0x44ed40u: goto label_44ed40;
        case 0x44ed44u: goto label_44ed44;
        case 0x44ed48u: goto label_44ed48;
        case 0x44ed4cu: goto label_44ed4c;
        case 0x44ed50u: goto label_44ed50;
        case 0x44ed54u: goto label_44ed54;
        case 0x44ed58u: goto label_44ed58;
        case 0x44ed5cu: goto label_44ed5c;
        case 0x44ed60u: goto label_44ed60;
        case 0x44ed64u: goto label_44ed64;
        case 0x44ed68u: goto label_44ed68;
        case 0x44ed6cu: goto label_44ed6c;
        case 0x44ed70u: goto label_44ed70;
        case 0x44ed74u: goto label_44ed74;
        case 0x44ed78u: goto label_44ed78;
        case 0x44ed7cu: goto label_44ed7c;
        case 0x44ed80u: goto label_44ed80;
        case 0x44ed84u: goto label_44ed84;
        case 0x44ed88u: goto label_44ed88;
        case 0x44ed8cu: goto label_44ed8c;
        case 0x44ed90u: goto label_44ed90;
        case 0x44ed94u: goto label_44ed94;
        case 0x44ed98u: goto label_44ed98;
        case 0x44ed9cu: goto label_44ed9c;
        case 0x44eda0u: goto label_44eda0;
        case 0x44eda4u: goto label_44eda4;
        case 0x44eda8u: goto label_44eda8;
        case 0x44edacu: goto label_44edac;
        case 0x44edb0u: goto label_44edb0;
        case 0x44edb4u: goto label_44edb4;
        case 0x44edb8u: goto label_44edb8;
        case 0x44edbcu: goto label_44edbc;
        case 0x44edc0u: goto label_44edc0;
        case 0x44edc4u: goto label_44edc4;
        case 0x44edc8u: goto label_44edc8;
        case 0x44edccu: goto label_44edcc;
        case 0x44edd0u: goto label_44edd0;
        case 0x44edd4u: goto label_44edd4;
        case 0x44edd8u: goto label_44edd8;
        case 0x44eddcu: goto label_44eddc;
        case 0x44ede0u: goto label_44ede0;
        case 0x44ede4u: goto label_44ede4;
        case 0x44ede8u: goto label_44ede8;
        case 0x44edecu: goto label_44edec;
        case 0x44edf0u: goto label_44edf0;
        case 0x44edf4u: goto label_44edf4;
        case 0x44edf8u: goto label_44edf8;
        case 0x44edfcu: goto label_44edfc;
        case 0x44ee00u: goto label_44ee00;
        case 0x44ee04u: goto label_44ee04;
        case 0x44ee08u: goto label_44ee08;
        case 0x44ee0cu: goto label_44ee0c;
        case 0x44ee10u: goto label_44ee10;
        case 0x44ee14u: goto label_44ee14;
        case 0x44ee18u: goto label_44ee18;
        case 0x44ee1cu: goto label_44ee1c;
        case 0x44ee20u: goto label_44ee20;
        case 0x44ee24u: goto label_44ee24;
        case 0x44ee28u: goto label_44ee28;
        case 0x44ee2cu: goto label_44ee2c;
        case 0x44ee30u: goto label_44ee30;
        case 0x44ee34u: goto label_44ee34;
        case 0x44ee38u: goto label_44ee38;
        case 0x44ee3cu: goto label_44ee3c;
        case 0x44ee40u: goto label_44ee40;
        case 0x44ee44u: goto label_44ee44;
        case 0x44ee48u: goto label_44ee48;
        case 0x44ee4cu: goto label_44ee4c;
        case 0x44ee50u: goto label_44ee50;
        case 0x44ee54u: goto label_44ee54;
        case 0x44ee58u: goto label_44ee58;
        case 0x44ee5cu: goto label_44ee5c;
        case 0x44ee60u: goto label_44ee60;
        case 0x44ee64u: goto label_44ee64;
        case 0x44ee68u: goto label_44ee68;
        case 0x44ee6cu: goto label_44ee6c;
        case 0x44ee70u: goto label_44ee70;
        case 0x44ee74u: goto label_44ee74;
        case 0x44ee78u: goto label_44ee78;
        case 0x44ee7cu: goto label_44ee7c;
        case 0x44ee80u: goto label_44ee80;
        case 0x44ee84u: goto label_44ee84;
        case 0x44ee88u: goto label_44ee88;
        case 0x44ee8cu: goto label_44ee8c;
        case 0x44ee90u: goto label_44ee90;
        case 0x44ee94u: goto label_44ee94;
        case 0x44ee98u: goto label_44ee98;
        case 0x44ee9cu: goto label_44ee9c;
        case 0x44eea0u: goto label_44eea0;
        case 0x44eea4u: goto label_44eea4;
        case 0x44eea8u: goto label_44eea8;
        case 0x44eeacu: goto label_44eeac;
        case 0x44eeb0u: goto label_44eeb0;
        case 0x44eeb4u: goto label_44eeb4;
        case 0x44eeb8u: goto label_44eeb8;
        case 0x44eebcu: goto label_44eebc;
        case 0x44eec0u: goto label_44eec0;
        case 0x44eec4u: goto label_44eec4;
        case 0x44eec8u: goto label_44eec8;
        case 0x44eeccu: goto label_44eecc;
        case 0x44eed0u: goto label_44eed0;
        case 0x44eed4u: goto label_44eed4;
        case 0x44eed8u: goto label_44eed8;
        case 0x44eedcu: goto label_44eedc;
        case 0x44eee0u: goto label_44eee0;
        case 0x44eee4u: goto label_44eee4;
        case 0x44eee8u: goto label_44eee8;
        case 0x44eeecu: goto label_44eeec;
        case 0x44eef0u: goto label_44eef0;
        case 0x44eef4u: goto label_44eef4;
        case 0x44eef8u: goto label_44eef8;
        case 0x44eefcu: goto label_44eefc;
        case 0x44ef00u: goto label_44ef00;
        case 0x44ef04u: goto label_44ef04;
        case 0x44ef08u: goto label_44ef08;
        case 0x44ef0cu: goto label_44ef0c;
        case 0x44ef10u: goto label_44ef10;
        case 0x44ef14u: goto label_44ef14;
        case 0x44ef18u: goto label_44ef18;
        case 0x44ef1cu: goto label_44ef1c;
        case 0x44ef20u: goto label_44ef20;
        case 0x44ef24u: goto label_44ef24;
        case 0x44ef28u: goto label_44ef28;
        case 0x44ef2cu: goto label_44ef2c;
        case 0x44ef30u: goto label_44ef30;
        case 0x44ef34u: goto label_44ef34;
        case 0x44ef38u: goto label_44ef38;
        case 0x44ef3cu: goto label_44ef3c;
        case 0x44ef40u: goto label_44ef40;
        case 0x44ef44u: goto label_44ef44;
        case 0x44ef48u: goto label_44ef48;
        case 0x44ef4cu: goto label_44ef4c;
        case 0x44ef50u: goto label_44ef50;
        case 0x44ef54u: goto label_44ef54;
        case 0x44ef58u: goto label_44ef58;
        case 0x44ef5cu: goto label_44ef5c;
        case 0x44ef60u: goto label_44ef60;
        case 0x44ef64u: goto label_44ef64;
        case 0x44ef68u: goto label_44ef68;
        case 0x44ef6cu: goto label_44ef6c;
        case 0x44ef70u: goto label_44ef70;
        case 0x44ef74u: goto label_44ef74;
        case 0x44ef78u: goto label_44ef78;
        case 0x44ef7cu: goto label_44ef7c;
        case 0x44ef80u: goto label_44ef80;
        case 0x44ef84u: goto label_44ef84;
        case 0x44ef88u: goto label_44ef88;
        case 0x44ef8cu: goto label_44ef8c;
        case 0x44ef90u: goto label_44ef90;
        case 0x44ef94u: goto label_44ef94;
        case 0x44ef98u: goto label_44ef98;
        case 0x44ef9cu: goto label_44ef9c;
        case 0x44efa0u: goto label_44efa0;
        case 0x44efa4u: goto label_44efa4;
        case 0x44efa8u: goto label_44efa8;
        case 0x44efacu: goto label_44efac;
        case 0x44efb0u: goto label_44efb0;
        case 0x44efb4u: goto label_44efb4;
        case 0x44efb8u: goto label_44efb8;
        case 0x44efbcu: goto label_44efbc;
        case 0x44efc0u: goto label_44efc0;
        case 0x44efc4u: goto label_44efc4;
        case 0x44efc8u: goto label_44efc8;
        case 0x44efccu: goto label_44efcc;
        case 0x44efd0u: goto label_44efd0;
        case 0x44efd4u: goto label_44efd4;
        case 0x44efd8u: goto label_44efd8;
        case 0x44efdcu: goto label_44efdc;
        case 0x44efe0u: goto label_44efe0;
        case 0x44efe4u: goto label_44efe4;
        case 0x44efe8u: goto label_44efe8;
        case 0x44efecu: goto label_44efec;
        case 0x44eff0u: goto label_44eff0;
        case 0x44eff4u: goto label_44eff4;
        case 0x44eff8u: goto label_44eff8;
        case 0x44effcu: goto label_44effc;
        case 0x44f000u: goto label_44f000;
        case 0x44f004u: goto label_44f004;
        case 0x44f008u: goto label_44f008;
        case 0x44f00cu: goto label_44f00c;
        case 0x44f010u: goto label_44f010;
        case 0x44f014u: goto label_44f014;
        case 0x44f018u: goto label_44f018;
        case 0x44f01cu: goto label_44f01c;
        case 0x44f020u: goto label_44f020;
        case 0x44f024u: goto label_44f024;
        case 0x44f028u: goto label_44f028;
        case 0x44f02cu: goto label_44f02c;
        case 0x44f030u: goto label_44f030;
        case 0x44f034u: goto label_44f034;
        case 0x44f038u: goto label_44f038;
        case 0x44f03cu: goto label_44f03c;
        case 0x44f040u: goto label_44f040;
        case 0x44f044u: goto label_44f044;
        case 0x44f048u: goto label_44f048;
        case 0x44f04cu: goto label_44f04c;
        case 0x44f050u: goto label_44f050;
        case 0x44f054u: goto label_44f054;
        case 0x44f058u: goto label_44f058;
        case 0x44f05cu: goto label_44f05c;
        case 0x44f060u: goto label_44f060;
        case 0x44f064u: goto label_44f064;
        case 0x44f068u: goto label_44f068;
        case 0x44f06cu: goto label_44f06c;
        case 0x44f070u: goto label_44f070;
        case 0x44f074u: goto label_44f074;
        case 0x44f078u: goto label_44f078;
        case 0x44f07cu: goto label_44f07c;
        case 0x44f080u: goto label_44f080;
        case 0x44f084u: goto label_44f084;
        case 0x44f088u: goto label_44f088;
        case 0x44f08cu: goto label_44f08c;
        case 0x44f090u: goto label_44f090;
        case 0x44f094u: goto label_44f094;
        case 0x44f098u: goto label_44f098;
        case 0x44f09cu: goto label_44f09c;
        case 0x44f0a0u: goto label_44f0a0;
        case 0x44f0a4u: goto label_44f0a4;
        case 0x44f0a8u: goto label_44f0a8;
        case 0x44f0acu: goto label_44f0ac;
        case 0x44f0b0u: goto label_44f0b0;
        case 0x44f0b4u: goto label_44f0b4;
        case 0x44f0b8u: goto label_44f0b8;
        case 0x44f0bcu: goto label_44f0bc;
        case 0x44f0c0u: goto label_44f0c0;
        case 0x44f0c4u: goto label_44f0c4;
        case 0x44f0c8u: goto label_44f0c8;
        case 0x44f0ccu: goto label_44f0cc;
        case 0x44f0d0u: goto label_44f0d0;
        case 0x44f0d4u: goto label_44f0d4;
        case 0x44f0d8u: goto label_44f0d8;
        case 0x44f0dcu: goto label_44f0dc;
        case 0x44f0e0u: goto label_44f0e0;
        case 0x44f0e4u: goto label_44f0e4;
        case 0x44f0e8u: goto label_44f0e8;
        case 0x44f0ecu: goto label_44f0ec;
        case 0x44f0f0u: goto label_44f0f0;
        case 0x44f0f4u: goto label_44f0f4;
        case 0x44f0f8u: goto label_44f0f8;
        case 0x44f0fcu: goto label_44f0fc;
        case 0x44f100u: goto label_44f100;
        case 0x44f104u: goto label_44f104;
        case 0x44f108u: goto label_44f108;
        case 0x44f10cu: goto label_44f10c;
        case 0x44f110u: goto label_44f110;
        case 0x44f114u: goto label_44f114;
        case 0x44f118u: goto label_44f118;
        case 0x44f11cu: goto label_44f11c;
        case 0x44f120u: goto label_44f120;
        case 0x44f124u: goto label_44f124;
        case 0x44f128u: goto label_44f128;
        case 0x44f12cu: goto label_44f12c;
        case 0x44f130u: goto label_44f130;
        case 0x44f134u: goto label_44f134;
        case 0x44f138u: goto label_44f138;
        case 0x44f13cu: goto label_44f13c;
        case 0x44f140u: goto label_44f140;
        case 0x44f144u: goto label_44f144;
        case 0x44f148u: goto label_44f148;
        case 0x44f14cu: goto label_44f14c;
        case 0x44f150u: goto label_44f150;
        case 0x44f154u: goto label_44f154;
        case 0x44f158u: goto label_44f158;
        case 0x44f15cu: goto label_44f15c;
        case 0x44f160u: goto label_44f160;
        case 0x44f164u: goto label_44f164;
        case 0x44f168u: goto label_44f168;
        case 0x44f16cu: goto label_44f16c;
        case 0x44f170u: goto label_44f170;
        case 0x44f174u: goto label_44f174;
        case 0x44f178u: goto label_44f178;
        case 0x44f17cu: goto label_44f17c;
        case 0x44f180u: goto label_44f180;
        case 0x44f184u: goto label_44f184;
        case 0x44f188u: goto label_44f188;
        case 0x44f18cu: goto label_44f18c;
        case 0x44f190u: goto label_44f190;
        case 0x44f194u: goto label_44f194;
        case 0x44f198u: goto label_44f198;
        case 0x44f19cu: goto label_44f19c;
        case 0x44f1a0u: goto label_44f1a0;
        case 0x44f1a4u: goto label_44f1a4;
        case 0x44f1a8u: goto label_44f1a8;
        case 0x44f1acu: goto label_44f1ac;
        default: break;
    }

    ctx->pc = 0x44ecf0u;

label_44ecf0:
    // 0x44ecf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44ecf4:
    // 0x44ecf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44ecf8:
    // 0x44ecf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44ecfc:
    // 0x44ecfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44ecfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44ed00:
    // 0x44ed00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44ed00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44ed04:
    // 0x44ed04: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_44ed08:
    if (ctx->pc == 0x44ED08u) {
        ctx->pc = 0x44ED08u;
            // 0x44ed08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44ED0Cu;
        goto label_44ed0c;
    }
    ctx->pc = 0x44ED04u;
    {
        const bool branch_taken_0x44ed04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44ED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44ED04u;
            // 0x44ed08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ed04) {
            ctx->pc = 0x44EE38u;
            goto label_44ee38;
        }
    }
    ctx->pc = 0x44ED0Cu;
label_44ed0c:
    // 0x44ed0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44ed10:
    // 0x44ed10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44ed14:
    // 0x44ed14: 0x2463dc60  addiu       $v1, $v1, -0x23A0
    ctx->pc = 0x44ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958176));
label_44ed18:
    // 0x44ed18: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_44ed1c:
    // 0x44ed1c: 0x2442dc98  addiu       $v0, $v0, -0x2368
    ctx->pc = 0x44ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958232));
label_44ed20:
    // 0x44ed20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_44ed24:
    // 0x44ed24: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x44ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_44ed28:
    // 0x44ed28: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x44ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_44ed2c:
    // 0x44ed2c: 0xc0407c0  jal         func_101F00
label_44ed30:
    if (ctx->pc == 0x44ED30u) {
        ctx->pc = 0x44ED30u;
            // 0x44ed30: 0x24a5ee50  addiu       $a1, $a1, -0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
        ctx->pc = 0x44ED34u;
        goto label_44ed34;
    }
    ctx->pc = 0x44ED2Cu;
    SET_GPR_U32(ctx, 31, 0x44ED34u);
    ctx->pc = 0x44ED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ED2Cu;
            // 0x44ed30: 0x24a5ee50  addiu       $a1, $a1, -0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ED34u; }
        if (ctx->pc != 0x44ED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ED34u; }
        if (ctx->pc != 0x44ED34u) { return; }
    }
    ctx->pc = 0x44ED34u;
label_44ed34:
    // 0x44ed34: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x44ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_44ed38:
    // 0x44ed38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_44ed3c:
    if (ctx->pc == 0x44ED3Cu) {
        ctx->pc = 0x44ED3Cu;
            // 0x44ed3c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x44ED40u;
        goto label_44ed40;
    }
    ctx->pc = 0x44ED38u;
    {
        const bool branch_taken_0x44ed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ed38) {
            ctx->pc = 0x44ED3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44ED38u;
            // 0x44ed3c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44ED4Cu;
            goto label_44ed4c;
        }
    }
    ctx->pc = 0x44ED40u;
label_44ed40:
    // 0x44ed40: 0xc07507c  jal         func_1D41F0
label_44ed44:
    if (ctx->pc == 0x44ED44u) {
        ctx->pc = 0x44ED44u;
            // 0x44ed44: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x44ED48u;
        goto label_44ed48;
    }
    ctx->pc = 0x44ED40u;
    SET_GPR_U32(ctx, 31, 0x44ED48u);
    ctx->pc = 0x44ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ED40u;
            // 0x44ed44: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ED48u; }
        if (ctx->pc != 0x44ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ED48u; }
        if (ctx->pc != 0x44ED48u) { return; }
    }
    ctx->pc = 0x44ED48u;
label_44ed48:
    // 0x44ed48: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x44ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_44ed4c:
    // 0x44ed4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_44ed50:
    if (ctx->pc == 0x44ED50u) {
        ctx->pc = 0x44ED50u;
            // 0x44ed50: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x44ED54u;
        goto label_44ed54;
    }
    ctx->pc = 0x44ED4Cu;
    {
        const bool branch_taken_0x44ed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ed4c) {
            ctx->pc = 0x44ED50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44ED4Cu;
            // 0x44ed50: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44ED7Cu;
            goto label_44ed7c;
        }
    }
    ctx->pc = 0x44ED54u;
label_44ed54:
    // 0x44ed54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_44ed58:
    if (ctx->pc == 0x44ED58u) {
        ctx->pc = 0x44ED5Cu;
        goto label_44ed5c;
    }
    ctx->pc = 0x44ED54u;
    {
        const bool branch_taken_0x44ed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ed54) {
            ctx->pc = 0x44ED78u;
            goto label_44ed78;
        }
    }
    ctx->pc = 0x44ED5Cu;
label_44ed5c:
    // 0x44ed5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44ed60:
    if (ctx->pc == 0x44ED60u) {
        ctx->pc = 0x44ED64u;
        goto label_44ed64;
    }
    ctx->pc = 0x44ED5Cu;
    {
        const bool branch_taken_0x44ed5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ed5c) {
            ctx->pc = 0x44ED78u;
            goto label_44ed78;
        }
    }
    ctx->pc = 0x44ED64u;
label_44ed64:
    // 0x44ed64: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x44ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_44ed68:
    // 0x44ed68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_44ed6c:
    if (ctx->pc == 0x44ED6Cu) {
        ctx->pc = 0x44ED70u;
        goto label_44ed70;
    }
    ctx->pc = 0x44ED68u;
    {
        const bool branch_taken_0x44ed68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ed68) {
            ctx->pc = 0x44ED78u;
            goto label_44ed78;
        }
    }
    ctx->pc = 0x44ED70u;
label_44ed70:
    // 0x44ed70: 0xc0400a8  jal         func_1002A0
label_44ed74:
    if (ctx->pc == 0x44ED74u) {
        ctx->pc = 0x44ED78u;
        goto label_44ed78;
    }
    ctx->pc = 0x44ED70u;
    SET_GPR_U32(ctx, 31, 0x44ED78u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ED78u; }
        if (ctx->pc != 0x44ED78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ED78u; }
        if (ctx->pc != 0x44ED78u) { return; }
    }
    ctx->pc = 0x44ED78u;
label_44ed78:
    // 0x44ed78: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x44ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_44ed7c:
    // 0x44ed7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_44ed80:
    if (ctx->pc == 0x44ED80u) {
        ctx->pc = 0x44ED80u;
            // 0x44ed80: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x44ED84u;
        goto label_44ed84;
    }
    ctx->pc = 0x44ED7Cu;
    {
        const bool branch_taken_0x44ed7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ed7c) {
            ctx->pc = 0x44ED80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44ED7Cu;
            // 0x44ed80: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EDACu;
            goto label_44edac;
        }
    }
    ctx->pc = 0x44ED84u;
label_44ed84:
    // 0x44ed84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_44ed88:
    if (ctx->pc == 0x44ED88u) {
        ctx->pc = 0x44ED8Cu;
        goto label_44ed8c;
    }
    ctx->pc = 0x44ED84u;
    {
        const bool branch_taken_0x44ed84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ed84) {
            ctx->pc = 0x44EDA8u;
            goto label_44eda8;
        }
    }
    ctx->pc = 0x44ED8Cu;
label_44ed8c:
    // 0x44ed8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44ed90:
    if (ctx->pc == 0x44ED90u) {
        ctx->pc = 0x44ED94u;
        goto label_44ed94;
    }
    ctx->pc = 0x44ED8Cu;
    {
        const bool branch_taken_0x44ed8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ed8c) {
            ctx->pc = 0x44EDA8u;
            goto label_44eda8;
        }
    }
    ctx->pc = 0x44ED94u;
label_44ed94:
    // 0x44ed94: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x44ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_44ed98:
    // 0x44ed98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_44ed9c:
    if (ctx->pc == 0x44ED9Cu) {
        ctx->pc = 0x44EDA0u;
        goto label_44eda0;
    }
    ctx->pc = 0x44ED98u;
    {
        const bool branch_taken_0x44ed98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ed98) {
            ctx->pc = 0x44EDA8u;
            goto label_44eda8;
        }
    }
    ctx->pc = 0x44EDA0u;
label_44eda0:
    // 0x44eda0: 0xc0400a8  jal         func_1002A0
label_44eda4:
    if (ctx->pc == 0x44EDA4u) {
        ctx->pc = 0x44EDA8u;
        goto label_44eda8;
    }
    ctx->pc = 0x44EDA0u;
    SET_GPR_U32(ctx, 31, 0x44EDA8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EDA8u; }
        if (ctx->pc != 0x44EDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EDA8u; }
        if (ctx->pc != 0x44EDA8u) { return; }
    }
    ctx->pc = 0x44EDA8u;
label_44eda8:
    // 0x44eda8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x44eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_44edac:
    // 0x44edac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44edb0:
    if (ctx->pc == 0x44EDB0u) {
        ctx->pc = 0x44EDB4u;
        goto label_44edb4;
    }
    ctx->pc = 0x44EDACu;
    {
        const bool branch_taken_0x44edac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44edac) {
            ctx->pc = 0x44EDC8u;
            goto label_44edc8;
        }
    }
    ctx->pc = 0x44EDB4u;
label_44edb4:
    // 0x44edb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44edb8:
    // 0x44edb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44edbc:
    // 0x44edbc: 0x2463dc48  addiu       $v1, $v1, -0x23B8
    ctx->pc = 0x44edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958152));
label_44edc0:
    // 0x44edc0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x44edc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_44edc4:
    // 0x44edc4: 0xac4075a0  sw          $zero, 0x75A0($v0)
    ctx->pc = 0x44edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30112), GPR_U32(ctx, 0));
label_44edc8:
    // 0x44edc8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_44edcc:
    if (ctx->pc == 0x44EDCCu) {
        ctx->pc = 0x44EDCCu;
            // 0x44edcc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x44EDD0u;
        goto label_44edd0;
    }
    ctx->pc = 0x44EDC8u;
    {
        const bool branch_taken_0x44edc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44edc8) {
            ctx->pc = 0x44EDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EDC8u;
            // 0x44edcc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EE24u;
            goto label_44ee24;
        }
    }
    ctx->pc = 0x44EDD0u;
label_44edd0:
    // 0x44edd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44edd4:
    // 0x44edd4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x44edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_44edd8:
    // 0x44edd8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44eddc:
    // 0x44eddc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x44eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_44ede0:
    // 0x44ede0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44ede4:
    if (ctx->pc == 0x44EDE4u) {
        ctx->pc = 0x44EDE4u;
            // 0x44ede4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x44EDE8u;
        goto label_44ede8;
    }
    ctx->pc = 0x44EDE0u;
    {
        const bool branch_taken_0x44ede0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ede0) {
            ctx->pc = 0x44EDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EDE0u;
            // 0x44ede4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EDFCu;
            goto label_44edfc;
        }
    }
    ctx->pc = 0x44EDE8u;
label_44ede8:
    // 0x44ede8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ede8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44edec:
    // 0x44edec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44edecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44edf0:
    // 0x44edf0: 0x320f809  jalr        $t9
label_44edf4:
    if (ctx->pc == 0x44EDF4u) {
        ctx->pc = 0x44EDF4u;
            // 0x44edf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44EDF8u;
        goto label_44edf8;
    }
    ctx->pc = 0x44EDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EDF8u);
        ctx->pc = 0x44EDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EDF0u;
            // 0x44edf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44EDF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44EDF8u; }
            if (ctx->pc != 0x44EDF8u) { return; }
        }
        }
    }
    ctx->pc = 0x44EDF8u;
label_44edf8:
    // 0x44edf8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x44edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_44edfc:
    // 0x44edfc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44ee00:
    if (ctx->pc == 0x44EE00u) {
        ctx->pc = 0x44EE00u;
            // 0x44ee00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EE04u;
        goto label_44ee04;
    }
    ctx->pc = 0x44EDFCu;
    {
        const bool branch_taken_0x44edfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44edfc) {
            ctx->pc = 0x44EE00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EDFCu;
            // 0x44ee00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EE18u;
            goto label_44ee18;
        }
    }
    ctx->pc = 0x44EE04u;
label_44ee04:
    // 0x44ee04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ee04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ee08:
    // 0x44ee08: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44ee08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44ee0c:
    // 0x44ee0c: 0x320f809  jalr        $t9
label_44ee10:
    if (ctx->pc == 0x44EE10u) {
        ctx->pc = 0x44EE10u;
            // 0x44ee10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44EE14u;
        goto label_44ee14;
    }
    ctx->pc = 0x44EE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EE14u);
        ctx->pc = 0x44EE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EE0Cu;
            // 0x44ee10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44EE14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44EE14u; }
            if (ctx->pc != 0x44EE14u) { return; }
        }
        }
    }
    ctx->pc = 0x44EE14u;
label_44ee14:
    // 0x44ee14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44ee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44ee18:
    // 0x44ee18: 0xc075bf8  jal         func_1D6FE0
label_44ee1c:
    if (ctx->pc == 0x44EE1Cu) {
        ctx->pc = 0x44EE1Cu;
            // 0x44ee1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EE20u;
        goto label_44ee20;
    }
    ctx->pc = 0x44EE18u;
    SET_GPR_U32(ctx, 31, 0x44EE20u);
    ctx->pc = 0x44EE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44EE18u;
            // 0x44ee1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EE20u; }
        if (ctx->pc != 0x44EE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EE20u; }
        if (ctx->pc != 0x44EE20u) { return; }
    }
    ctx->pc = 0x44EE20u;
label_44ee20:
    // 0x44ee20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x44ee20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_44ee24:
    // 0x44ee24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44ee24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_44ee28:
    // 0x44ee28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_44ee2c:
    if (ctx->pc == 0x44EE2Cu) {
        ctx->pc = 0x44EE2Cu;
            // 0x44ee2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EE30u;
        goto label_44ee30;
    }
    ctx->pc = 0x44EE28u;
    {
        const bool branch_taken_0x44ee28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44ee28) {
            ctx->pc = 0x44EE2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EE28u;
            // 0x44ee2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EE3Cu;
            goto label_44ee3c;
        }
    }
    ctx->pc = 0x44EE30u;
label_44ee30:
    // 0x44ee30: 0xc0400a8  jal         func_1002A0
label_44ee34:
    if (ctx->pc == 0x44EE34u) {
        ctx->pc = 0x44EE34u;
            // 0x44ee34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EE38u;
        goto label_44ee38;
    }
    ctx->pc = 0x44EE30u;
    SET_GPR_U32(ctx, 31, 0x44EE38u);
    ctx->pc = 0x44EE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44EE30u;
            // 0x44ee34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EE38u; }
        if (ctx->pc != 0x44EE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EE38u; }
        if (ctx->pc != 0x44EE38u) { return; }
    }
    ctx->pc = 0x44EE38u;
label_44ee38:
    // 0x44ee38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44ee38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44ee3c:
    // 0x44ee3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44ee40:
    // 0x44ee40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44ee40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44ee44:
    // 0x44ee44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ee44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ee48:
    // 0x44ee48: 0x3e00008  jr          $ra
label_44ee4c:
    if (ctx->pc == 0x44EE4Cu) {
        ctx->pc = 0x44EE4Cu;
            // 0x44ee4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44EE50u;
        goto label_44ee50;
    }
    ctx->pc = 0x44EE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EE48u;
            // 0x44ee4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44EE50u;
label_44ee50:
    // 0x44ee50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44ee54:
    // 0x44ee54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44ee58:
    // 0x44ee58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44ee5c:
    // 0x44ee5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44ee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44ee60:
    // 0x44ee60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44ee60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44ee64:
    // 0x44ee64: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_44ee68:
    if (ctx->pc == 0x44EE68u) {
        ctx->pc = 0x44EE68u;
            // 0x44ee68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EE6Cu;
        goto label_44ee6c;
    }
    ctx->pc = 0x44EE64u;
    {
        const bool branch_taken_0x44ee64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EE64u;
            // 0x44ee68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ee64) {
            ctx->pc = 0x44EF2Cu;
            goto label_44ef2c;
        }
    }
    ctx->pc = 0x44EE6Cu;
label_44ee6c:
    // 0x44ee6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44ee70:
    // 0x44ee70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44ee74:
    // 0x44ee74: 0x2463dd00  addiu       $v1, $v1, -0x2300
    ctx->pc = 0x44ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958336));
label_44ee78:
    // 0x44ee78: 0x2442dd40  addiu       $v0, $v0, -0x22C0
    ctx->pc = 0x44ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
label_44ee7c:
    // 0x44ee7c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_44ee80:
    // 0x44ee80: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x44ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_44ee84:
    // 0x44ee84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ee84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ee88:
    // 0x44ee88: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x44ee88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_44ee8c:
    // 0x44ee8c: 0x320f809  jalr        $t9
label_44ee90:
    if (ctx->pc == 0x44EE90u) {
        ctx->pc = 0x44EE94u;
        goto label_44ee94;
    }
    ctx->pc = 0x44EE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EE94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44EE94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44EE94u; }
            if (ctx->pc != 0x44EE94u) { return; }
        }
        }
    }
    ctx->pc = 0x44EE94u;
label_44ee94:
    // 0x44ee94: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_44ee98:
    if (ctx->pc == 0x44EE98u) {
        ctx->pc = 0x44EE98u;
            // 0x44ee98: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x44EE9Cu;
        goto label_44ee9c;
    }
    ctx->pc = 0x44EE94u;
    {
        const bool branch_taken_0x44ee94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ee94) {
            ctx->pc = 0x44EE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EE94u;
            // 0x44ee98: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EF18u;
            goto label_44ef18;
        }
    }
    ctx->pc = 0x44EE9Cu;
label_44ee9c:
    // 0x44ee9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44eea0:
    // 0x44eea0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44eea4:
    // 0x44eea4: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x44eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_44eea8:
    // 0x44eea8: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x44eea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_44eeac:
    // 0x44eeac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44eeb0:
    // 0x44eeb0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x44eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_44eeb4:
    // 0x44eeb4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_44eeb8:
    if (ctx->pc == 0x44EEB8u) {
        ctx->pc = 0x44EEB8u;
            // 0x44eeb8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x44EEBCu;
        goto label_44eebc;
    }
    ctx->pc = 0x44EEB4u;
    {
        const bool branch_taken_0x44eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EEB4u;
            // 0x44eeb8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44eeb4) {
            ctx->pc = 0x44EEF0u;
            goto label_44eef0;
        }
    }
    ctx->pc = 0x44EEBCu;
label_44eebc:
    // 0x44eebc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44eec0:
    // 0x44eec0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x44eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_44eec4:
    // 0x44eec4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x44eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_44eec8:
    // 0x44eec8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x44eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_44eecc:
    // 0x44eecc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_44eed0:
    if (ctx->pc == 0x44EED0u) {
        ctx->pc = 0x44EED4u;
        goto label_44eed4;
    }
    ctx->pc = 0x44EECCu;
    {
        const bool branch_taken_0x44eecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eecc) {
            ctx->pc = 0x44EEF0u;
            goto label_44eef0;
        }
    }
    ctx->pc = 0x44EED4u;
label_44eed4:
    // 0x44eed4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44eed8:
    if (ctx->pc == 0x44EED8u) {
        ctx->pc = 0x44EED8u;
            // 0x44eed8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x44EEDCu;
        goto label_44eedc;
    }
    ctx->pc = 0x44EED4u;
    {
        const bool branch_taken_0x44eed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eed4) {
            ctx->pc = 0x44EED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EED4u;
            // 0x44eed8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EEF0u;
            goto label_44eef0;
        }
    }
    ctx->pc = 0x44EEDCu;
label_44eedc:
    // 0x44eedc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44eedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44eee0:
    // 0x44eee0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44eee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44eee4:
    // 0x44eee4: 0x320f809  jalr        $t9
label_44eee8:
    if (ctx->pc == 0x44EEE8u) {
        ctx->pc = 0x44EEE8u;
            // 0x44eee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44EEECu;
        goto label_44eeec;
    }
    ctx->pc = 0x44EEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EEECu);
        ctx->pc = 0x44EEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EEE4u;
            // 0x44eee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44EEECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44EEECu; }
            if (ctx->pc != 0x44EEECu) { return; }
        }
        }
    }
    ctx->pc = 0x44EEECu;
label_44eeec:
    // 0x44eeec: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x44eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_44eef0:
    // 0x44eef0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_44eef4:
    if (ctx->pc == 0x44EEF4u) {
        ctx->pc = 0x44EEF8u;
        goto label_44eef8;
    }
    ctx->pc = 0x44EEF0u;
    {
        const bool branch_taken_0x44eef0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44eef0) {
            ctx->pc = 0x44EF14u;
            goto label_44ef14;
        }
    }
    ctx->pc = 0x44EEF8u;
label_44eef8:
    // 0x44eef8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44eefc:
    // 0x44eefc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x44eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_44ef00:
    // 0x44ef00: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_44ef04:
    if (ctx->pc == 0x44EF04u) {
        ctx->pc = 0x44EF04u;
            // 0x44ef04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x44EF08u;
        goto label_44ef08;
    }
    ctx->pc = 0x44EF00u;
    {
        const bool branch_taken_0x44ef00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EF00u;
            // 0x44ef04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ef00) {
            ctx->pc = 0x44EF14u;
            goto label_44ef14;
        }
    }
    ctx->pc = 0x44EF08u;
label_44ef08:
    // 0x44ef08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44ef0c:
    // 0x44ef0c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x44ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_44ef10:
    // 0x44ef10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44ef14:
    // 0x44ef14: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x44ef14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_44ef18:
    // 0x44ef18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44ef18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_44ef1c:
    // 0x44ef1c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_44ef20:
    if (ctx->pc == 0x44EF20u) {
        ctx->pc = 0x44EF20u;
            // 0x44ef20: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EF24u;
        goto label_44ef24;
    }
    ctx->pc = 0x44EF1Cu;
    {
        const bool branch_taken_0x44ef1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44ef1c) {
            ctx->pc = 0x44EF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44EF1Cu;
            // 0x44ef20: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44EF30u;
            goto label_44ef30;
        }
    }
    ctx->pc = 0x44EF24u;
label_44ef24:
    // 0x44ef24: 0xc0400a8  jal         func_1002A0
label_44ef28:
    if (ctx->pc == 0x44EF28u) {
        ctx->pc = 0x44EF28u;
            // 0x44ef28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EF2Cu;
        goto label_44ef2c;
    }
    ctx->pc = 0x44EF24u;
    SET_GPR_U32(ctx, 31, 0x44EF2Cu);
    ctx->pc = 0x44EF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44EF24u;
            // 0x44ef28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EF2Cu; }
        if (ctx->pc != 0x44EF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44EF2Cu; }
        if (ctx->pc != 0x44EF2Cu) { return; }
    }
    ctx->pc = 0x44EF2Cu;
label_44ef2c:
    // 0x44ef2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44ef2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44ef30:
    // 0x44ef30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44ef30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44ef34:
    // 0x44ef34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44ef34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44ef38:
    // 0x44ef38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ef38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ef3c:
    // 0x44ef3c: 0x3e00008  jr          $ra
label_44ef40:
    if (ctx->pc == 0x44EF40u) {
        ctx->pc = 0x44EF40u;
            // 0x44ef40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44EF44u;
        goto label_44ef44;
    }
    ctx->pc = 0x44EF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EF3Cu;
            // 0x44ef40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44EF44u;
label_44ef44:
    // 0x44ef44: 0x0  nop
    ctx->pc = 0x44ef44u;
    // NOP
label_44ef48:
    // 0x44ef48: 0x0  nop
    ctx->pc = 0x44ef48u;
    // NOP
label_44ef4c:
    // 0x44ef4c: 0x0  nop
    ctx->pc = 0x44ef4cu;
    // NOP
label_44ef50:
    // 0x44ef50: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x44ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_44ef54:
    // 0x44ef54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44ef58:
    // 0x44ef58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x44ef58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_44ef5c:
    // 0x44ef5c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x44ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_44ef60:
    // 0x44ef60: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x44ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_44ef64:
    // 0x44ef64: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x44ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_44ef68:
    // 0x44ef68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x44ef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_44ef6c:
    // 0x44ef6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x44ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_44ef70:
    // 0x44ef70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x44ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_44ef74:
    // 0x44ef74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x44ef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_44ef78:
    // 0x44ef78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x44ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_44ef7c:
    // 0x44ef7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x44ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_44ef80:
    // 0x44ef80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x44ef80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_44ef84:
    // 0x44ef84: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x44ef84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_44ef88:
    // 0x44ef88: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_44ef8c:
    if (ctx->pc == 0x44EF8Cu) {
        ctx->pc = 0x44EF8Cu;
            // 0x44ef8c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44EF90u;
        goto label_44ef90;
    }
    ctx->pc = 0x44EF88u;
    {
        const bool branch_taken_0x44ef88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x44EF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EF88u;
            // 0x44ef8c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ef88) {
            ctx->pc = 0x44EFD8u;
            goto label_44efd8;
        }
    }
    ctx->pc = 0x44EF90u;
label_44ef90:
    // 0x44ef90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44ef94:
    // 0x44ef94: 0x10a30076  beq         $a1, $v1, . + 4 + (0x76 << 2)
label_44ef98:
    if (ctx->pc == 0x44EF98u) {
        ctx->pc = 0x44EF9Cu;
        goto label_44ef9c;
    }
    ctx->pc = 0x44EF94u;
    {
        const bool branch_taken_0x44ef94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44ef94) {
            ctx->pc = 0x44F170u;
            goto label_44f170;
        }
    }
    ctx->pc = 0x44EF9Cu;
label_44ef9c:
    // 0x44ef9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44efa0:
    // 0x44efa0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_44efa4:
    if (ctx->pc == 0x44EFA4u) {
        ctx->pc = 0x44EFA8u;
        goto label_44efa8;
    }
    ctx->pc = 0x44EFA0u;
    {
        const bool branch_taken_0x44efa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44efa0) {
            ctx->pc = 0x44EFB0u;
            goto label_44efb0;
        }
    }
    ctx->pc = 0x44EFA8u;
label_44efa8:
    // 0x44efa8: 0x10000071  b           . + 4 + (0x71 << 2)
label_44efac:
    if (ctx->pc == 0x44EFACu) {
        ctx->pc = 0x44EFB0u;
        goto label_44efb0;
    }
    ctx->pc = 0x44EFA8u;
    {
        const bool branch_taken_0x44efa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44efa8) {
            ctx->pc = 0x44F170u;
            goto label_44f170;
        }
    }
    ctx->pc = 0x44EFB0u;
label_44efb0:
    // 0x44efb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44efb4:
    // 0x44efb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44efb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44efb8:
    // 0x44efb8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_44efbc:
    // 0x44efbc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x44efbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_44efc0:
    // 0x44efc0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x44efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_44efc4:
    // 0x44efc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x44efc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_44efc8:
    // 0x44efc8: 0x320f809  jalr        $t9
label_44efcc:
    if (ctx->pc == 0x44EFCCu) {
        ctx->pc = 0x44EFCCu;
            // 0x44efcc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x44EFD0u;
        goto label_44efd0;
    }
    ctx->pc = 0x44EFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EFD0u);
        ctx->pc = 0x44EFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EFC8u;
            // 0x44efcc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44EFD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44EFD0u; }
            if (ctx->pc != 0x44EFD0u) { return; }
        }
        }
    }
    ctx->pc = 0x44EFD0u;
label_44efd0:
    // 0x44efd0: 0x10000067  b           . + 4 + (0x67 << 2)
label_44efd4:
    if (ctx->pc == 0x44EFD4u) {
        ctx->pc = 0x44EFD8u;
        goto label_44efd8;
    }
    ctx->pc = 0x44EFD0u;
    {
        const bool branch_taken_0x44efd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44efd0) {
            ctx->pc = 0x44F170u;
            goto label_44f170;
        }
    }
    ctx->pc = 0x44EFD8u;
label_44efd8:
    // 0x44efd8: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x44efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_44efdc:
    // 0x44efdc: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
label_44efe0:
    if (ctx->pc == 0x44EFE0u) {
        ctx->pc = 0x44EFE0u;
            // 0x44efe0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x44EFE4u;
        goto label_44efe4;
    }
    ctx->pc = 0x44EFDCu;
    {
        const bool branch_taken_0x44efdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44EFDCu;
            // 0x44efe0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44efdc) {
            ctx->pc = 0x44F170u;
            goto label_44f170;
        }
    }
    ctx->pc = 0x44EFE4u;
label_44efe4:
    // 0x44efe4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44efe8:
    // 0x44efe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44efe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44efec:
    // 0x44efec: 0x8c55e378  lw          $s5, -0x1C88($v0)
    ctx->pc = 0x44efecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_44eff0:
    // 0x44eff0: 0x27d00084  addiu       $s0, $fp, 0x84
    ctx->pc = 0x44eff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
label_44eff4:
    // 0x44eff4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x44eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_44eff8:
    // 0x44eff8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x44eff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_44effc:
    // 0x44effc: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x44effcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_44f000:
    // 0x44f000: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x44f000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_44f004:
    // 0x44f004: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x44f004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_44f008:
    // 0x44f008: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x44f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_44f00c:
    // 0x44f00c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x44f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_44f010:
    // 0x44f010: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44f010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44f014:
    // 0x44f014: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x44f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_44f018:
    // 0x44f018: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x44f018u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_44f01c:
    // 0x44f01c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x44f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_44f020:
    // 0x44f020: 0x8fc20084  lw          $v0, 0x84($fp)
    ctx->pc = 0x44f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 132)));
label_44f024:
    // 0x44f024: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x44f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44f028:
    // 0x44f028: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x44f028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_44f02c:
    // 0x44f02c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x44f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_44f030:
    // 0x44f030: 0xc04e4a4  jal         func_139290
label_44f034:
    if (ctx->pc == 0x44F034u) {
        ctx->pc = 0x44F034u;
            // 0x44f034: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x44F038u;
        goto label_44f038;
    }
    ctx->pc = 0x44F030u;
    SET_GPR_U32(ctx, 31, 0x44F038u);
    ctx->pc = 0x44F034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F030u;
            // 0x44f034: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F038u; }
        if (ctx->pc != 0x44F038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F038u; }
        if (ctx->pc != 0x44F038u) { return; }
    }
    ctx->pc = 0x44F038u;
label_44f038:
    // 0x44f038: 0xc04e738  jal         func_139CE0
label_44f03c:
    if (ctx->pc == 0x44F03Cu) {
        ctx->pc = 0x44F03Cu;
            // 0x44f03c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x44F040u;
        goto label_44f040;
    }
    ctx->pc = 0x44F038u;
    SET_GPR_U32(ctx, 31, 0x44F040u);
    ctx->pc = 0x44F03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F038u;
            // 0x44f03c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F040u; }
        if (ctx->pc != 0x44F040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F040u; }
        if (ctx->pc != 0x44F040u) { return; }
    }
    ctx->pc = 0x44F040u;
label_44f040:
    // 0x44f040: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x44f040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_44f044:
    // 0x44f044: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44f044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f048:
    // 0x44f048: 0xc454d9a8  lwc1        $f20, -0x2658($v0)
    ctx->pc = 0x44f048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_44f04c:
    // 0x44f04c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44f04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f050:
    // 0x44f050: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x44f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_44f054:
    // 0x44f054: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x44f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_44f058:
    // 0x44f058: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x44f058u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44f05c:
    // 0x44f05c: 0xc113c6c  jal         func_44F1B0
label_44f060:
    if (ctx->pc == 0x44F060u) {
        ctx->pc = 0x44F060u;
            // 0x44f060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F064u;
        goto label_44f064;
    }
    ctx->pc = 0x44F05Cu;
    SET_GPR_U32(ctx, 31, 0x44F064u);
    ctx->pc = 0x44F060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F05Cu;
            // 0x44f060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44F1B0u;
    if (runtime->hasFunction(0x44F1B0u)) {
        auto targetFn = runtime->lookupFunction(0x44F1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F064u; }
        if (ctx->pc != 0x44F064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044F1B0_0x44f1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F064u; }
        if (ctx->pc != 0x44F064u) { return; }
    }
    ctx->pc = 0x44F064u;
label_44f064:
    // 0x44f064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44f064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44f068:
    // 0x44f068: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
label_44f06c:
    if (ctx->pc == 0x44F06Cu) {
        ctx->pc = 0x44F070u;
        goto label_44f070;
    }
    ctx->pc = 0x44F068u;
    {
        const bool branch_taken_0x44f068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x44f068) {
            ctx->pc = 0x44F158u;
            goto label_44f158;
        }
    }
    ctx->pc = 0x44F070u;
label_44f070:
    // 0x44f070: 0xc0d1c14  jal         func_347050
label_44f074:
    if (ctx->pc == 0x44F074u) {
        ctx->pc = 0x44F074u;
            // 0x44f074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F078u;
        goto label_44f078;
    }
    ctx->pc = 0x44F070u;
    SET_GPR_U32(ctx, 31, 0x44F078u);
    ctx->pc = 0x44F074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F070u;
            // 0x44f074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F078u; }
        if (ctx->pc != 0x44F078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F078u; }
        if (ctx->pc != 0x44F078u) { return; }
    }
    ctx->pc = 0x44F078u;
label_44f078:
    // 0x44f078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44f078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f07c:
    // 0x44f07c: 0xc04f278  jal         func_13C9E0
label_44f080:
    if (ctx->pc == 0x44F080u) {
        ctx->pc = 0x44F080u;
            // 0x44f080: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x44F084u;
        goto label_44f084;
    }
    ctx->pc = 0x44F07Cu;
    SET_GPR_U32(ctx, 31, 0x44F084u);
    ctx->pc = 0x44F080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F07Cu;
            // 0x44f080: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F084u; }
        if (ctx->pc != 0x44F084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F084u; }
        if (ctx->pc != 0x44F084u) { return; }
    }
    ctx->pc = 0x44F084u;
label_44f084:
    // 0x44f084: 0xc0d1c10  jal         func_347040
label_44f088:
    if (ctx->pc == 0x44F088u) {
        ctx->pc = 0x44F088u;
            // 0x44f088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F08Cu;
        goto label_44f08c;
    }
    ctx->pc = 0x44F084u;
    SET_GPR_U32(ctx, 31, 0x44F08Cu);
    ctx->pc = 0x44F088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F084u;
            // 0x44f088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F08Cu; }
        if (ctx->pc != 0x44F08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F08Cu; }
        if (ctx->pc != 0x44F08Cu) { return; }
    }
    ctx->pc = 0x44F08Cu;
label_44f08c:
    // 0x44f08c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44f08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f090:
    // 0x44f090: 0xc04ce80  jal         func_133A00
label_44f094:
    if (ctx->pc == 0x44F094u) {
        ctx->pc = 0x44F094u;
            // 0x44f094: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x44F098u;
        goto label_44f098;
    }
    ctx->pc = 0x44F090u;
    SET_GPR_U32(ctx, 31, 0x44F098u);
    ctx->pc = 0x44F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F090u;
            // 0x44f094: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F098u; }
        if (ctx->pc != 0x44F098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F098u; }
        if (ctx->pc != 0x44F098u) { return; }
    }
    ctx->pc = 0x44F098u;
label_44f098:
    // 0x44f098: 0xc0d4108  jal         func_350420
label_44f09c:
    if (ctx->pc == 0x44F09Cu) {
        ctx->pc = 0x44F0A0u;
        goto label_44f0a0;
    }
    ctx->pc = 0x44F098u;
    SET_GPR_U32(ctx, 31, 0x44F0A0u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0A0u; }
        if (ctx->pc != 0x44F0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0A0u; }
        if (ctx->pc != 0x44F0A0u) { return; }
    }
    ctx->pc = 0x44F0A0u;
label_44f0a0:
    // 0x44f0a0: 0xc0b36b4  jal         func_2CDAD0
label_44f0a4:
    if (ctx->pc == 0x44F0A4u) {
        ctx->pc = 0x44F0A4u;
            // 0x44f0a4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F0A8u;
        goto label_44f0a8;
    }
    ctx->pc = 0x44F0A0u;
    SET_GPR_U32(ctx, 31, 0x44F0A8u);
    ctx->pc = 0x44F0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F0A0u;
            // 0x44f0a4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0A8u; }
        if (ctx->pc != 0x44F0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0A8u; }
        if (ctx->pc != 0x44F0A8u) { return; }
    }
    ctx->pc = 0x44F0A8u;
label_44f0a8:
    // 0x44f0a8: 0xc0b9c64  jal         func_2E7190
label_44f0ac:
    if (ctx->pc == 0x44F0ACu) {
        ctx->pc = 0x44F0ACu;
            // 0x44f0ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F0B0u;
        goto label_44f0b0;
    }
    ctx->pc = 0x44F0A8u;
    SET_GPR_U32(ctx, 31, 0x44F0B0u);
    ctx->pc = 0x44F0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F0A8u;
            // 0x44f0ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0B0u; }
        if (ctx->pc != 0x44F0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0B0u; }
        if (ctx->pc != 0x44F0B0u) { return; }
    }
    ctx->pc = 0x44F0B0u;
label_44f0b0:
    // 0x44f0b0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x44f0b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f0b4:
    // 0x44f0b4: 0xc0d4104  jal         func_350410
label_44f0b8:
    if (ctx->pc == 0x44F0B8u) {
        ctx->pc = 0x44F0B8u;
            // 0x44f0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F0BCu;
        goto label_44f0bc;
    }
    ctx->pc = 0x44F0B4u;
    SET_GPR_U32(ctx, 31, 0x44F0BCu);
    ctx->pc = 0x44F0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F0B4u;
            // 0x44f0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0BCu; }
        if (ctx->pc != 0x44F0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0BCu; }
        if (ctx->pc != 0x44F0BCu) { return; }
    }
    ctx->pc = 0x44F0BCu;
label_44f0bc:
    // 0x44f0bc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x44f0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44f0c0:
    // 0x44f0c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x44f0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_44f0c4:
    // 0x44f0c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x44f0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_44f0c8:
    // 0x44f0c8: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x44f0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_44f0cc:
    // 0x44f0cc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x44f0ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f0d0:
    // 0x44f0d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x44f0d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f0d4:
    // 0x44f0d4: 0xc0d40ac  jal         func_3502B0
label_44f0d8:
    if (ctx->pc == 0x44F0D8u) {
        ctx->pc = 0x44F0D8u;
            // 0x44f0d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x44F0DCu;
        goto label_44f0dc;
    }
    ctx->pc = 0x44F0D4u;
    SET_GPR_U32(ctx, 31, 0x44F0DCu);
    ctx->pc = 0x44F0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F0D4u;
            // 0x44f0d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0DCu; }
        if (ctx->pc != 0x44F0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0DCu; }
        if (ctx->pc != 0x44F0DCu) { return; }
    }
    ctx->pc = 0x44F0DCu;
label_44f0dc:
    // 0x44f0dc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x44f0dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_44f0e0:
    // 0x44f0e0: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_44f0e4:
    if (ctx->pc == 0x44F0E4u) {
        ctx->pc = 0x44F0E4u;
            // 0x44f0e4: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x44F0E8u;
        goto label_44f0e8;
    }
    ctx->pc = 0x44F0E0u;
    {
        const bool branch_taken_0x44f0e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F0E0u;
            // 0x44f0e4: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f0e0) {
            ctx->pc = 0x44F158u;
            goto label_44f158;
        }
    }
    ctx->pc = 0x44F0E8u;
label_44f0e8:
    // 0x44f0e8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x44f0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_44f0ec:
    // 0x44f0ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x44f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_44f0f0:
    // 0x44f0f0: 0xc04cd60  jal         func_133580
label_44f0f4:
    if (ctx->pc == 0x44F0F4u) {
        ctx->pc = 0x44F0F4u;
            // 0x44f0f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F0F8u;
        goto label_44f0f8;
    }
    ctx->pc = 0x44F0F0u;
    SET_GPR_U32(ctx, 31, 0x44F0F8u);
    ctx->pc = 0x44F0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F0F0u;
            // 0x44f0f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0F8u; }
        if (ctx->pc != 0x44F0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F0F8u; }
        if (ctx->pc != 0x44F0F8u) { return; }
    }
    ctx->pc = 0x44F0F8u;
label_44f0f8:
    // 0x44f0f8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x44f0f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_44f0fc:
    // 0x44f0fc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x44f0fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_44f100:
    // 0x44f100: 0x320f809  jalr        $t9
label_44f104:
    if (ctx->pc == 0x44F104u) {
        ctx->pc = 0x44F104u;
            // 0x44f104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F108u;
        goto label_44f108;
    }
    ctx->pc = 0x44F100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44F108u);
        ctx->pc = 0x44F104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F100u;
            // 0x44f104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44F108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44F108u; }
            if (ctx->pc != 0x44F108u) { return; }
        }
        }
    }
    ctx->pc = 0x44F108u;
label_44f108:
    // 0x44f108: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x44f108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44f10c:
    // 0x44f10c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x44f10cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_44f110:
    // 0x44f110: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x44f110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f114:
    // 0x44f114: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x44f114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44f118:
    // 0x44f118: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x44f118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_44f11c:
    // 0x44f11c: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x44f11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_44f120:
    // 0x44f120: 0xc04cfcc  jal         func_133F30
label_44f124:
    if (ctx->pc == 0x44F124u) {
        ctx->pc = 0x44F124u;
            // 0x44f124: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x44F128u;
        goto label_44f128;
    }
    ctx->pc = 0x44F120u;
    SET_GPR_U32(ctx, 31, 0x44F128u);
    ctx->pc = 0x44F124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F120u;
            // 0x44f124: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F128u; }
        if (ctx->pc != 0x44F128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F128u; }
        if (ctx->pc != 0x44F128u) { return; }
    }
    ctx->pc = 0x44F128u;
label_44f128:
    // 0x44f128: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x44f128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_44f12c:
    // 0x44f12c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x44f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44f130:
    // 0x44f130: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x44f130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_44f134:
    // 0x44f134: 0xc054bbc  jal         func_152EF0
label_44f138:
    if (ctx->pc == 0x44F138u) {
        ctx->pc = 0x44F138u;
            // 0x44f138: 0xc64c0068  lwc1        $f12, 0x68($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x44F13Cu;
        goto label_44f13c;
    }
    ctx->pc = 0x44F134u;
    SET_GPR_U32(ctx, 31, 0x44F13Cu);
    ctx->pc = 0x44F138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F134u;
            // 0x44f138: 0xc64c0068  lwc1        $f12, 0x68($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F13Cu; }
        if (ctx->pc != 0x44F13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F13Cu; }
        if (ctx->pc != 0x44F13Cu) { return; }
    }
    ctx->pc = 0x44F13Cu;
label_44f13c:
    // 0x44f13c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x44f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_44f140:
    // 0x44f140: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x44f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44f144:
    // 0x44f144: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x44f144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_44f148:
    // 0x44f148: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x44f148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_44f14c:
    // 0x44f14c: 0xc054c2c  jal         func_1530B0
label_44f150:
    if (ctx->pc == 0x44F150u) {
        ctx->pc = 0x44F150u;
            // 0x44f150: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x44F154u;
        goto label_44f154;
    }
    ctx->pc = 0x44F14Cu;
    SET_GPR_U32(ctx, 31, 0x44F154u);
    ctx->pc = 0x44F150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F14Cu;
            // 0x44f150: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F154u; }
        if (ctx->pc != 0x44F154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F154u; }
        if (ctx->pc != 0x44F154u) { return; }
    }
    ctx->pc = 0x44F154u;
label_44f154:
    // 0x44f154: 0x0  nop
    ctx->pc = 0x44f154u;
    // NOP
label_44f158:
    // 0x44f158: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x44f158u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_44f15c:
    // 0x44f15c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x44f15cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_44f160:
    // 0x44f160: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x44f160u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44f164:
    // 0x44f164: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_44f168:
    if (ctx->pc == 0x44F168u) {
        ctx->pc = 0x44F168u;
            // 0x44f168: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x44F16Cu;
        goto label_44f16c;
    }
    ctx->pc = 0x44F164u;
    {
        const bool branch_taken_0x44f164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F164u;
            // 0x44f168: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f164) {
            ctx->pc = 0x44F050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44f050;
        }
    }
    ctx->pc = 0x44F16Cu;
label_44f16c:
    // 0x44f16c: 0x0  nop
    ctx->pc = 0x44f16cu;
    // NOP
label_44f170:
    // 0x44f170: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x44f170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_44f174:
    // 0x44f174: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x44f174u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_44f178:
    // 0x44f178: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x44f178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_44f17c:
    // 0x44f17c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x44f17cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_44f180:
    // 0x44f180: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x44f180u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44f184:
    // 0x44f184: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x44f184u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44f188:
    // 0x44f188: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x44f188u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44f18c:
    // 0x44f18c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x44f18cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44f190:
    // 0x44f190: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x44f190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44f194:
    // 0x44f194: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x44f194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44f198:
    // 0x44f198: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x44f198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44f19c:
    // 0x44f19c: 0x3e00008  jr          $ra
label_44f1a0:
    if (ctx->pc == 0x44F1A0u) {
        ctx->pc = 0x44F1A0u;
            // 0x44f1a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x44F1A4u;
        goto label_44f1a4;
    }
    ctx->pc = 0x44F19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F19Cu;
            // 0x44f1a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44F1A4u;
label_44f1a4:
    // 0x44f1a4: 0x0  nop
    ctx->pc = 0x44f1a4u;
    // NOP
label_44f1a8:
    // 0x44f1a8: 0x0  nop
    ctx->pc = 0x44f1a8u;
    // NOP
label_44f1ac:
    // 0x44f1ac: 0x0  nop
    ctx->pc = 0x44f1acu;
    // NOP
}
