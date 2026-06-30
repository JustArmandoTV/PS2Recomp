#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052EE20
// Address: 0x52ee20 - 0x52f220
void sub_0052EE20_0x52ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052EE20_0x52ee20");
#endif

    switch (ctx->pc) {
        case 0x52ee20u: goto label_52ee20;
        case 0x52ee24u: goto label_52ee24;
        case 0x52ee28u: goto label_52ee28;
        case 0x52ee2cu: goto label_52ee2c;
        case 0x52ee30u: goto label_52ee30;
        case 0x52ee34u: goto label_52ee34;
        case 0x52ee38u: goto label_52ee38;
        case 0x52ee3cu: goto label_52ee3c;
        case 0x52ee40u: goto label_52ee40;
        case 0x52ee44u: goto label_52ee44;
        case 0x52ee48u: goto label_52ee48;
        case 0x52ee4cu: goto label_52ee4c;
        case 0x52ee50u: goto label_52ee50;
        case 0x52ee54u: goto label_52ee54;
        case 0x52ee58u: goto label_52ee58;
        case 0x52ee5cu: goto label_52ee5c;
        case 0x52ee60u: goto label_52ee60;
        case 0x52ee64u: goto label_52ee64;
        case 0x52ee68u: goto label_52ee68;
        case 0x52ee6cu: goto label_52ee6c;
        case 0x52ee70u: goto label_52ee70;
        case 0x52ee74u: goto label_52ee74;
        case 0x52ee78u: goto label_52ee78;
        case 0x52ee7cu: goto label_52ee7c;
        case 0x52ee80u: goto label_52ee80;
        case 0x52ee84u: goto label_52ee84;
        case 0x52ee88u: goto label_52ee88;
        case 0x52ee8cu: goto label_52ee8c;
        case 0x52ee90u: goto label_52ee90;
        case 0x52ee94u: goto label_52ee94;
        case 0x52ee98u: goto label_52ee98;
        case 0x52ee9cu: goto label_52ee9c;
        case 0x52eea0u: goto label_52eea0;
        case 0x52eea4u: goto label_52eea4;
        case 0x52eea8u: goto label_52eea8;
        case 0x52eeacu: goto label_52eeac;
        case 0x52eeb0u: goto label_52eeb0;
        case 0x52eeb4u: goto label_52eeb4;
        case 0x52eeb8u: goto label_52eeb8;
        case 0x52eebcu: goto label_52eebc;
        case 0x52eec0u: goto label_52eec0;
        case 0x52eec4u: goto label_52eec4;
        case 0x52eec8u: goto label_52eec8;
        case 0x52eeccu: goto label_52eecc;
        case 0x52eed0u: goto label_52eed0;
        case 0x52eed4u: goto label_52eed4;
        case 0x52eed8u: goto label_52eed8;
        case 0x52eedcu: goto label_52eedc;
        case 0x52eee0u: goto label_52eee0;
        case 0x52eee4u: goto label_52eee4;
        case 0x52eee8u: goto label_52eee8;
        case 0x52eeecu: goto label_52eeec;
        case 0x52eef0u: goto label_52eef0;
        case 0x52eef4u: goto label_52eef4;
        case 0x52eef8u: goto label_52eef8;
        case 0x52eefcu: goto label_52eefc;
        case 0x52ef00u: goto label_52ef00;
        case 0x52ef04u: goto label_52ef04;
        case 0x52ef08u: goto label_52ef08;
        case 0x52ef0cu: goto label_52ef0c;
        case 0x52ef10u: goto label_52ef10;
        case 0x52ef14u: goto label_52ef14;
        case 0x52ef18u: goto label_52ef18;
        case 0x52ef1cu: goto label_52ef1c;
        case 0x52ef20u: goto label_52ef20;
        case 0x52ef24u: goto label_52ef24;
        case 0x52ef28u: goto label_52ef28;
        case 0x52ef2cu: goto label_52ef2c;
        case 0x52ef30u: goto label_52ef30;
        case 0x52ef34u: goto label_52ef34;
        case 0x52ef38u: goto label_52ef38;
        case 0x52ef3cu: goto label_52ef3c;
        case 0x52ef40u: goto label_52ef40;
        case 0x52ef44u: goto label_52ef44;
        case 0x52ef48u: goto label_52ef48;
        case 0x52ef4cu: goto label_52ef4c;
        case 0x52ef50u: goto label_52ef50;
        case 0x52ef54u: goto label_52ef54;
        case 0x52ef58u: goto label_52ef58;
        case 0x52ef5cu: goto label_52ef5c;
        case 0x52ef60u: goto label_52ef60;
        case 0x52ef64u: goto label_52ef64;
        case 0x52ef68u: goto label_52ef68;
        case 0x52ef6cu: goto label_52ef6c;
        case 0x52ef70u: goto label_52ef70;
        case 0x52ef74u: goto label_52ef74;
        case 0x52ef78u: goto label_52ef78;
        case 0x52ef7cu: goto label_52ef7c;
        case 0x52ef80u: goto label_52ef80;
        case 0x52ef84u: goto label_52ef84;
        case 0x52ef88u: goto label_52ef88;
        case 0x52ef8cu: goto label_52ef8c;
        case 0x52ef90u: goto label_52ef90;
        case 0x52ef94u: goto label_52ef94;
        case 0x52ef98u: goto label_52ef98;
        case 0x52ef9cu: goto label_52ef9c;
        case 0x52efa0u: goto label_52efa0;
        case 0x52efa4u: goto label_52efa4;
        case 0x52efa8u: goto label_52efa8;
        case 0x52efacu: goto label_52efac;
        case 0x52efb0u: goto label_52efb0;
        case 0x52efb4u: goto label_52efb4;
        case 0x52efb8u: goto label_52efb8;
        case 0x52efbcu: goto label_52efbc;
        case 0x52efc0u: goto label_52efc0;
        case 0x52efc4u: goto label_52efc4;
        case 0x52efc8u: goto label_52efc8;
        case 0x52efccu: goto label_52efcc;
        case 0x52efd0u: goto label_52efd0;
        case 0x52efd4u: goto label_52efd4;
        case 0x52efd8u: goto label_52efd8;
        case 0x52efdcu: goto label_52efdc;
        case 0x52efe0u: goto label_52efe0;
        case 0x52efe4u: goto label_52efe4;
        case 0x52efe8u: goto label_52efe8;
        case 0x52efecu: goto label_52efec;
        case 0x52eff0u: goto label_52eff0;
        case 0x52eff4u: goto label_52eff4;
        case 0x52eff8u: goto label_52eff8;
        case 0x52effcu: goto label_52effc;
        case 0x52f000u: goto label_52f000;
        case 0x52f004u: goto label_52f004;
        case 0x52f008u: goto label_52f008;
        case 0x52f00cu: goto label_52f00c;
        case 0x52f010u: goto label_52f010;
        case 0x52f014u: goto label_52f014;
        case 0x52f018u: goto label_52f018;
        case 0x52f01cu: goto label_52f01c;
        case 0x52f020u: goto label_52f020;
        case 0x52f024u: goto label_52f024;
        case 0x52f028u: goto label_52f028;
        case 0x52f02cu: goto label_52f02c;
        case 0x52f030u: goto label_52f030;
        case 0x52f034u: goto label_52f034;
        case 0x52f038u: goto label_52f038;
        case 0x52f03cu: goto label_52f03c;
        case 0x52f040u: goto label_52f040;
        case 0x52f044u: goto label_52f044;
        case 0x52f048u: goto label_52f048;
        case 0x52f04cu: goto label_52f04c;
        case 0x52f050u: goto label_52f050;
        case 0x52f054u: goto label_52f054;
        case 0x52f058u: goto label_52f058;
        case 0x52f05cu: goto label_52f05c;
        case 0x52f060u: goto label_52f060;
        case 0x52f064u: goto label_52f064;
        case 0x52f068u: goto label_52f068;
        case 0x52f06cu: goto label_52f06c;
        case 0x52f070u: goto label_52f070;
        case 0x52f074u: goto label_52f074;
        case 0x52f078u: goto label_52f078;
        case 0x52f07cu: goto label_52f07c;
        case 0x52f080u: goto label_52f080;
        case 0x52f084u: goto label_52f084;
        case 0x52f088u: goto label_52f088;
        case 0x52f08cu: goto label_52f08c;
        case 0x52f090u: goto label_52f090;
        case 0x52f094u: goto label_52f094;
        case 0x52f098u: goto label_52f098;
        case 0x52f09cu: goto label_52f09c;
        case 0x52f0a0u: goto label_52f0a0;
        case 0x52f0a4u: goto label_52f0a4;
        case 0x52f0a8u: goto label_52f0a8;
        case 0x52f0acu: goto label_52f0ac;
        case 0x52f0b0u: goto label_52f0b0;
        case 0x52f0b4u: goto label_52f0b4;
        case 0x52f0b8u: goto label_52f0b8;
        case 0x52f0bcu: goto label_52f0bc;
        case 0x52f0c0u: goto label_52f0c0;
        case 0x52f0c4u: goto label_52f0c4;
        case 0x52f0c8u: goto label_52f0c8;
        case 0x52f0ccu: goto label_52f0cc;
        case 0x52f0d0u: goto label_52f0d0;
        case 0x52f0d4u: goto label_52f0d4;
        case 0x52f0d8u: goto label_52f0d8;
        case 0x52f0dcu: goto label_52f0dc;
        case 0x52f0e0u: goto label_52f0e0;
        case 0x52f0e4u: goto label_52f0e4;
        case 0x52f0e8u: goto label_52f0e8;
        case 0x52f0ecu: goto label_52f0ec;
        case 0x52f0f0u: goto label_52f0f0;
        case 0x52f0f4u: goto label_52f0f4;
        case 0x52f0f8u: goto label_52f0f8;
        case 0x52f0fcu: goto label_52f0fc;
        case 0x52f100u: goto label_52f100;
        case 0x52f104u: goto label_52f104;
        case 0x52f108u: goto label_52f108;
        case 0x52f10cu: goto label_52f10c;
        case 0x52f110u: goto label_52f110;
        case 0x52f114u: goto label_52f114;
        case 0x52f118u: goto label_52f118;
        case 0x52f11cu: goto label_52f11c;
        case 0x52f120u: goto label_52f120;
        case 0x52f124u: goto label_52f124;
        case 0x52f128u: goto label_52f128;
        case 0x52f12cu: goto label_52f12c;
        case 0x52f130u: goto label_52f130;
        case 0x52f134u: goto label_52f134;
        case 0x52f138u: goto label_52f138;
        case 0x52f13cu: goto label_52f13c;
        case 0x52f140u: goto label_52f140;
        case 0x52f144u: goto label_52f144;
        case 0x52f148u: goto label_52f148;
        case 0x52f14cu: goto label_52f14c;
        case 0x52f150u: goto label_52f150;
        case 0x52f154u: goto label_52f154;
        case 0x52f158u: goto label_52f158;
        case 0x52f15cu: goto label_52f15c;
        case 0x52f160u: goto label_52f160;
        case 0x52f164u: goto label_52f164;
        case 0x52f168u: goto label_52f168;
        case 0x52f16cu: goto label_52f16c;
        case 0x52f170u: goto label_52f170;
        case 0x52f174u: goto label_52f174;
        case 0x52f178u: goto label_52f178;
        case 0x52f17cu: goto label_52f17c;
        case 0x52f180u: goto label_52f180;
        case 0x52f184u: goto label_52f184;
        case 0x52f188u: goto label_52f188;
        case 0x52f18cu: goto label_52f18c;
        case 0x52f190u: goto label_52f190;
        case 0x52f194u: goto label_52f194;
        case 0x52f198u: goto label_52f198;
        case 0x52f19cu: goto label_52f19c;
        case 0x52f1a0u: goto label_52f1a0;
        case 0x52f1a4u: goto label_52f1a4;
        case 0x52f1a8u: goto label_52f1a8;
        case 0x52f1acu: goto label_52f1ac;
        case 0x52f1b0u: goto label_52f1b0;
        case 0x52f1b4u: goto label_52f1b4;
        case 0x52f1b8u: goto label_52f1b8;
        case 0x52f1bcu: goto label_52f1bc;
        case 0x52f1c0u: goto label_52f1c0;
        case 0x52f1c4u: goto label_52f1c4;
        case 0x52f1c8u: goto label_52f1c8;
        case 0x52f1ccu: goto label_52f1cc;
        case 0x52f1d0u: goto label_52f1d0;
        case 0x52f1d4u: goto label_52f1d4;
        case 0x52f1d8u: goto label_52f1d8;
        case 0x52f1dcu: goto label_52f1dc;
        case 0x52f1e0u: goto label_52f1e0;
        case 0x52f1e4u: goto label_52f1e4;
        case 0x52f1e8u: goto label_52f1e8;
        case 0x52f1ecu: goto label_52f1ec;
        case 0x52f1f0u: goto label_52f1f0;
        case 0x52f1f4u: goto label_52f1f4;
        case 0x52f1f8u: goto label_52f1f8;
        case 0x52f1fcu: goto label_52f1fc;
        case 0x52f200u: goto label_52f200;
        case 0x52f204u: goto label_52f204;
        case 0x52f208u: goto label_52f208;
        case 0x52f20cu: goto label_52f20c;
        case 0x52f210u: goto label_52f210;
        case 0x52f214u: goto label_52f214;
        case 0x52f218u: goto label_52f218;
        case 0x52f21cu: goto label_52f21c;
        default: break;
    }

    ctx->pc = 0x52ee20u;

label_52ee20:
    // 0x52ee20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x52ee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_52ee24:
    // 0x52ee24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x52ee24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52ee28:
    // 0x52ee28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x52ee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_52ee2c:
    // 0x52ee2c: 0x8c880070  lw          $t0, 0x70($a0)
    ctx->pc = 0x52ee2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52ee30:
    // 0x52ee30: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x52ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_52ee34:
    // 0x52ee34: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x52ee34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52ee38:
    // 0x52ee38: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x52ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_52ee3c:
    // 0x52ee3c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x52ee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_52ee40:
    // 0x52ee40: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_52ee44:
    if (ctx->pc == 0x52EE44u) {
        ctx->pc = 0x52EE44u;
            // 0x52ee44: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->pc = 0x52EE48u;
        goto label_52ee48;
    }
    ctx->pc = 0x52EE40u;
    {
        const bool branch_taken_0x52ee40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x52ee40) {
            ctx->pc = 0x52EE44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52EE40u;
            // 0x52ee44: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52EE60u;
            goto label_52ee60;
        }
    }
    ctx->pc = 0x52EE48u;
label_52ee48:
    // 0x52ee48: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x52ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_52ee4c:
    // 0x52ee4c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x52ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_52ee50:
    // 0x52ee50: 0xc14bdd0  jal         func_52F740
label_52ee54:
    if (ctx->pc == 0x52EE54u) {
        ctx->pc = 0x52EE54u;
            // 0x52ee54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x52EE58u;
        goto label_52ee58;
    }
    ctx->pc = 0x52EE50u;
    SET_GPR_U32(ctx, 31, 0x52EE58u);
    ctx->pc = 0x52EE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EE50u;
            // 0x52ee54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52F740u;
    if (runtime->hasFunction(0x52F740u)) {
        auto targetFn = runtime->lookupFunction(0x52F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EE58u; }
        if (ctx->pc != 0x52EE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052F740_0x52f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EE58u; }
        if (ctx->pc != 0x52EE58u) { return; }
    }
    ctx->pc = 0x52EE58u;
label_52ee58:
    // 0x52ee58: 0x10000005  b           . + 4 + (0x5 << 2)
label_52ee5c:
    if (ctx->pc == 0x52EE5Cu) {
        ctx->pc = 0x52EE60u;
        goto label_52ee60;
    }
    ctx->pc = 0x52EE58u;
    {
        const bool branch_taken_0x52ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ee58) {
            ctx->pc = 0x52EE70u;
            goto label_52ee70;
        }
    }
    ctx->pc = 0x52EE60u;
label_52ee60:
    // 0x52ee60: 0x148182b  sltu        $v1, $t2, $t0
    ctx->pc = 0x52ee60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_52ee64:
    // 0x52ee64: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_52ee68:
    if (ctx->pc == 0x52EE68u) {
        ctx->pc = 0x52EE68u;
            // 0x52ee68: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->pc = 0x52EE6Cu;
        goto label_52ee6c;
    }
    ctx->pc = 0x52EE64u;
    {
        const bool branch_taken_0x52ee64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EE64u;
            // 0x52ee68: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52ee64) {
            ctx->pc = 0x52EE38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52ee38;
        }
    }
    ctx->pc = 0x52EE6Cu;
label_52ee6c:
    // 0x52ee6c: 0x0  nop
    ctx->pc = 0x52ee6cu;
    // NOP
label_52ee70:
    // 0x52ee70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x52ee70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_52ee74:
    // 0x52ee74: 0x3e00008  jr          $ra
label_52ee78:
    if (ctx->pc == 0x52EE78u) {
        ctx->pc = 0x52EE78u;
            // 0x52ee78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x52EE7Cu;
        goto label_52ee7c;
    }
    ctx->pc = 0x52EE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52EE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EE74u;
            // 0x52ee78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52EE7Cu;
label_52ee7c:
    // 0x52ee7c: 0x0  nop
    ctx->pc = 0x52ee7cu;
    // NOP
label_52ee80:
    // 0x52ee80: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x52ee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_52ee84:
    // 0x52ee84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x52ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52ee88:
    // 0x52ee88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x52ee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_52ee8c:
    // 0x52ee8c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x52ee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_52ee90:
    // 0x52ee90: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x52ee90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_52ee94:
    // 0x52ee94: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x52ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_52ee98:
    // 0x52ee98: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x52ee98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_52ee9c:
    // 0x52ee9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x52ee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_52eea0:
    // 0x52eea0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x52eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_52eea4:
    // 0x52eea4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x52eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_52eea8:
    // 0x52eea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x52eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_52eeac:
    // 0x52eeac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x52eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_52eeb0:
    // 0x52eeb0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x52eeb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_52eeb4:
    // 0x52eeb4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x52eeb4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_52eeb8:
    // 0x52eeb8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_52eebc:
    if (ctx->pc == 0x52EEBCu) {
        ctx->pc = 0x52EEBCu;
            // 0x52eebc: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EEC0u;
        goto label_52eec0;
    }
    ctx->pc = 0x52EEB8u;
    {
        const bool branch_taken_0x52eeb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x52EEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EEB8u;
            // 0x52eebc: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52eeb8) {
            ctx->pc = 0x52EF08u;
            goto label_52ef08;
        }
    }
    ctx->pc = 0x52EEC0u;
label_52eec0:
    // 0x52eec0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52eec4:
    // 0x52eec4: 0x10a30074  beq         $a1, $v1, . + 4 + (0x74 << 2)
label_52eec8:
    if (ctx->pc == 0x52EEC8u) {
        ctx->pc = 0x52EECCu;
        goto label_52eecc;
    }
    ctx->pc = 0x52EEC4u;
    {
        const bool branch_taken_0x52eec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52eec4) {
            ctx->pc = 0x52F098u;
            goto label_52f098;
        }
    }
    ctx->pc = 0x52EECCu;
label_52eecc:
    // 0x52eecc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52eed0:
    // 0x52eed0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_52eed4:
    if (ctx->pc == 0x52EED4u) {
        ctx->pc = 0x52EED8u;
        goto label_52eed8;
    }
    ctx->pc = 0x52EED0u;
    {
        const bool branch_taken_0x52eed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52eed0) {
            ctx->pc = 0x52EEE0u;
            goto label_52eee0;
        }
    }
    ctx->pc = 0x52EED8u;
label_52eed8:
    // 0x52eed8: 0x1000006f  b           . + 4 + (0x6F << 2)
label_52eedc:
    if (ctx->pc == 0x52EEDCu) {
        ctx->pc = 0x52EEE0u;
        goto label_52eee0;
    }
    ctx->pc = 0x52EED8u;
    {
        const bool branch_taken_0x52eed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52eed8) {
            ctx->pc = 0x52F098u;
            goto label_52f098;
        }
    }
    ctx->pc = 0x52EEE0u;
label_52eee0:
    // 0x52eee0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52eee4:
    // 0x52eee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52eee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52eee8:
    // 0x52eee8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x52eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52eeec:
    // 0x52eeec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x52eeecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_52eef0:
    // 0x52eef0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x52eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_52eef4:
    // 0x52eef4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x52eef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_52eef8:
    // 0x52eef8: 0x320f809  jalr        $t9
label_52eefc:
    if (ctx->pc == 0x52EEFCu) {
        ctx->pc = 0x52EEFCu;
            // 0x52eefc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x52EF00u;
        goto label_52ef00;
    }
    ctx->pc = 0x52EEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52EF00u);
        ctx->pc = 0x52EEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EEF8u;
            // 0x52eefc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52EF00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52EF00u; }
            if (ctx->pc != 0x52EF00u) { return; }
        }
        }
    }
    ctx->pc = 0x52EF00u;
label_52ef00:
    // 0x52ef00: 0x10000065  b           . + 4 + (0x65 << 2)
label_52ef04:
    if (ctx->pc == 0x52EF04u) {
        ctx->pc = 0x52EF08u;
        goto label_52ef08;
    }
    ctx->pc = 0x52EF00u;
    {
        const bool branch_taken_0x52ef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ef00) {
            ctx->pc = 0x52F098u;
            goto label_52f098;
        }
    }
    ctx->pc = 0x52EF08u;
label_52ef08:
    // 0x52ef08: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x52ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_52ef0c:
    // 0x52ef0c: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_52ef10:
    if (ctx->pc == 0x52EF10u) {
        ctx->pc = 0x52EF10u;
            // 0x52ef10: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x52EF14u;
        goto label_52ef14;
    }
    ctx->pc = 0x52EF0Cu;
    {
        const bool branch_taken_0x52ef0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x52EF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EF0Cu;
            // 0x52ef10: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52ef0c) {
            ctx->pc = 0x52F098u;
            goto label_52f098;
        }
    }
    ctx->pc = 0x52EF14u;
label_52ef14:
    // 0x52ef14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ef18:
    // 0x52ef18: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x52ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_52ef1c:
    // 0x52ef1c: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x52ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_52ef20:
    // 0x52ef20: 0x27d30084  addiu       $s3, $fp, 0x84
    ctx->pc = 0x52ef20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
label_52ef24:
    // 0x52ef24: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x52ef24u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_52ef28:
    // 0x52ef28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52ef2c:
    // 0x52ef2c: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x52ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_52ef30:
    // 0x52ef30: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x52ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_52ef34:
    // 0x52ef34: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x52ef34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_52ef38:
    // 0x52ef38: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x52ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_52ef3c:
    // 0x52ef3c: 0x8fc40088  lw          $a0, 0x88($fp)
    ctx->pc = 0x52ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_52ef40:
    // 0x52ef40: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x52ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_52ef44:
    // 0x52ef44: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x52ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_52ef48:
    // 0x52ef48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x52ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52ef4c:
    // 0x52ef4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x52ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52ef50:
    // 0x52ef50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x52ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_52ef54:
    // 0x52ef54: 0xc04e738  jal         func_139CE0
label_52ef58:
    if (ctx->pc == 0x52EF58u) {
        ctx->pc = 0x52EF58u;
            // 0x52ef58: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x52EF5Cu;
        goto label_52ef5c;
    }
    ctx->pc = 0x52EF54u;
    SET_GPR_U32(ctx, 31, 0x52EF5Cu);
    ctx->pc = 0x52EF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EF54u;
            // 0x52ef58: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EF5Cu; }
        if (ctx->pc != 0x52EF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EF5Cu; }
        if (ctx->pc != 0x52EF5Cu) { return; }
    }
    ctx->pc = 0x52EF5Cu;
label_52ef5c:
    // 0x52ef5c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x52ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_52ef60:
    // 0x52ef60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x52ef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52ef64:
    // 0x52ef64: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x52ef64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_52ef68:
    // 0x52ef68: 0xc04e4a4  jal         func_139290
label_52ef6c:
    if (ctx->pc == 0x52EF6Cu) {
        ctx->pc = 0x52EF6Cu;
            // 0x52ef6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EF70u;
        goto label_52ef70;
    }
    ctx->pc = 0x52EF68u;
    SET_GPR_U32(ctx, 31, 0x52EF70u);
    ctx->pc = 0x52EF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EF68u;
            // 0x52ef6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EF70u; }
        if (ctx->pc != 0x52EF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EF70u; }
        if (ctx->pc != 0x52EF70u) { return; }
    }
    ctx->pc = 0x52EF70u;
label_52ef70:
    // 0x52ef70: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x52ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_52ef74:
    // 0x52ef74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52ef74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52ef78:
    // 0x52ef78: 0xc474cd70  lwc1        $f20, -0x3290($v1)
    ctx->pc = 0x52ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_52ef7c:
    // 0x52ef7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x52ef7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52ef80:
    // 0x52ef80: 0x8fc40074  lw          $a0, 0x74($fp)
    ctx->pc = 0x52ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_52ef84:
    // 0x52ef84: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x52ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_52ef88:
    // 0x52ef88: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x52ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_52ef8c:
    // 0x52ef8c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x52ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_52ef90:
    // 0x52ef90: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x52ef90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52ef94:
    // 0x52ef94: 0x8c760130  lw          $s6, 0x130($v1)
    ctx->pc = 0x52ef94u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_52ef98:
    // 0x52ef98: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x52ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_52ef9c:
    // 0x52ef9c: 0x18600038  blez        $v1, . + 4 + (0x38 << 2)
label_52efa0:
    if (ctx->pc == 0x52EFA0u) {
        ctx->pc = 0x52EFA4u;
        goto label_52efa4;
    }
    ctx->pc = 0x52EF9Cu;
    {
        const bool branch_taken_0x52ef9c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x52ef9c) {
            ctx->pc = 0x52F080u;
            goto label_52f080;
        }
    }
    ctx->pc = 0x52EFA4u;
label_52efa4:
    // 0x52efa4: 0xc0d1c14  jal         func_347050
label_52efa8:
    if (ctx->pc == 0x52EFA8u) {
        ctx->pc = 0x52EFA8u;
            // 0x52efa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EFACu;
        goto label_52efac;
    }
    ctx->pc = 0x52EFA4u;
    SET_GPR_U32(ctx, 31, 0x52EFACu);
    ctx->pc = 0x52EFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EFA4u;
            // 0x52efa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFACu; }
        if (ctx->pc != 0x52EFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFACu; }
        if (ctx->pc != 0x52EFACu) { return; }
    }
    ctx->pc = 0x52EFACu;
label_52efac:
    // 0x52efac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x52efacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52efb0:
    // 0x52efb0: 0xc04f278  jal         func_13C9E0
label_52efb4:
    if (ctx->pc == 0x52EFB4u) {
        ctx->pc = 0x52EFB4u;
            // 0x52efb4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x52EFB8u;
        goto label_52efb8;
    }
    ctx->pc = 0x52EFB0u;
    SET_GPR_U32(ctx, 31, 0x52EFB8u);
    ctx->pc = 0x52EFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EFB0u;
            // 0x52efb4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFB8u; }
        if (ctx->pc != 0x52EFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFB8u; }
        if (ctx->pc != 0x52EFB8u) { return; }
    }
    ctx->pc = 0x52EFB8u;
label_52efb8:
    // 0x52efb8: 0xc0d1c10  jal         func_347040
label_52efbc:
    if (ctx->pc == 0x52EFBCu) {
        ctx->pc = 0x52EFBCu;
            // 0x52efbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EFC0u;
        goto label_52efc0;
    }
    ctx->pc = 0x52EFB8u;
    SET_GPR_U32(ctx, 31, 0x52EFC0u);
    ctx->pc = 0x52EFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EFB8u;
            // 0x52efbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFC0u; }
        if (ctx->pc != 0x52EFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFC0u; }
        if (ctx->pc != 0x52EFC0u) { return; }
    }
    ctx->pc = 0x52EFC0u;
label_52efc0:
    // 0x52efc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x52efc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52efc4:
    // 0x52efc4: 0xc04ce80  jal         func_133A00
label_52efc8:
    if (ctx->pc == 0x52EFC8u) {
        ctx->pc = 0x52EFC8u;
            // 0x52efc8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x52EFCCu;
        goto label_52efcc;
    }
    ctx->pc = 0x52EFC4u;
    SET_GPR_U32(ctx, 31, 0x52EFCCu);
    ctx->pc = 0x52EFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EFC4u;
            // 0x52efc8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFCCu; }
        if (ctx->pc != 0x52EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFCCu; }
        if (ctx->pc != 0x52EFCCu) { return; }
    }
    ctx->pc = 0x52EFCCu;
label_52efcc:
    // 0x52efcc: 0xc62c0060  lwc1        $f12, 0x60($s1)
    ctx->pc = 0x52efccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52efd0:
    // 0x52efd0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x52efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52efd4:
    // 0x52efd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x52efd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52efd8:
    // 0x52efd8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x52efd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_52efdc:
    // 0x52efdc: 0xc04ce50  jal         func_133940
label_52efe0:
    if (ctx->pc == 0x52EFE0u) {
        ctx->pc = 0x52EFE0u;
            // 0x52efe0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x52EFE4u;
        goto label_52efe4;
    }
    ctx->pc = 0x52EFDCu;
    SET_GPR_U32(ctx, 31, 0x52EFE4u);
    ctx->pc = 0x52EFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EFDCu;
            // 0x52efe0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFE4u; }
        if (ctx->pc != 0x52EFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFE4u; }
        if (ctx->pc != 0x52EFE4u) { return; }
    }
    ctx->pc = 0x52EFE4u;
label_52efe4:
    // 0x52efe4: 0xc0d4108  jal         func_350420
label_52efe8:
    if (ctx->pc == 0x52EFE8u) {
        ctx->pc = 0x52EFECu;
        goto label_52efec;
    }
    ctx->pc = 0x52EFE4u;
    SET_GPR_U32(ctx, 31, 0x52EFECu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFECu; }
        if (ctx->pc != 0x52EFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFECu; }
        if (ctx->pc != 0x52EFECu) { return; }
    }
    ctx->pc = 0x52EFECu;
label_52efec:
    // 0x52efec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x52efecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52eff0:
    // 0x52eff0: 0xc0d4104  jal         func_350410
label_52eff4:
    if (ctx->pc == 0x52EFF4u) {
        ctx->pc = 0x52EFF4u;
            // 0x52eff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EFF8u;
        goto label_52eff8;
    }
    ctx->pc = 0x52EFF0u;
    SET_GPR_U32(ctx, 31, 0x52EFF8u);
    ctx->pc = 0x52EFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EFF0u;
            // 0x52eff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFF8u; }
        if (ctx->pc != 0x52EFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EFF8u; }
        if (ctx->pc != 0x52EFF8u) { return; }
    }
    ctx->pc = 0x52EFF8u;
label_52eff8:
    // 0x52eff8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x52eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_52effc:
    // 0x52effc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x52effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_52f000:
    // 0x52f000: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x52f000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_52f004:
    // 0x52f004: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x52f004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52f008:
    // 0x52f008: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x52f008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52f00c:
    // 0x52f00c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x52f00cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52f010:
    // 0x52f010: 0xc0d40ac  jal         func_3502B0
label_52f014:
    if (ctx->pc == 0x52F014u) {
        ctx->pc = 0x52F014u;
            // 0x52f014: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x52F018u;
        goto label_52f018;
    }
    ctx->pc = 0x52F010u;
    SET_GPR_U32(ctx, 31, 0x52F018u);
    ctx->pc = 0x52F014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F010u;
            // 0x52f014: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F018u; }
        if (ctx->pc != 0x52F018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F018u; }
        if (ctx->pc != 0x52F018u) { return; }
    }
    ctx->pc = 0x52F018u;
label_52f018:
    // 0x52f018: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x52f018u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_52f01c:
    // 0x52f01c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_52f020:
    if (ctx->pc == 0x52F020u) {
        ctx->pc = 0x52F020u;
            // 0x52f020: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x52F024u;
        goto label_52f024;
    }
    ctx->pc = 0x52F01Cu;
    {
        const bool branch_taken_0x52f01c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52F020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F01Cu;
            // 0x52f020: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f01c) {
            ctx->pc = 0x52F080u;
            goto label_52f080;
        }
    }
    ctx->pc = 0x52F024u;
label_52f024:
    // 0x52f024: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x52f024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_52f028:
    // 0x52f028: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x52f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52f02c:
    // 0x52f02c: 0xc04cd60  jal         func_133580
label_52f030:
    if (ctx->pc == 0x52F030u) {
        ctx->pc = 0x52F030u;
            // 0x52f030: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52F034u;
        goto label_52f034;
    }
    ctx->pc = 0x52F02Cu;
    SET_GPR_U32(ctx, 31, 0x52F034u);
    ctx->pc = 0x52F030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F02Cu;
            // 0x52f030: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F034u; }
        if (ctx->pc != 0x52F034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F034u; }
        if (ctx->pc != 0x52F034u) { return; }
    }
    ctx->pc = 0x52F034u;
label_52f034:
    // 0x52f034: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x52f034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_52f038:
    // 0x52f038: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x52f038u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_52f03c:
    // 0x52f03c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x52f03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52f040:
    // 0x52f040: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x52f040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52f044:
    // 0x52f044: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x52f044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52f048:
    // 0x52f048: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x52f048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_52f04c:
    // 0x52f04c: 0xc04cfcc  jal         func_133F30
label_52f050:
    if (ctx->pc == 0x52F050u) {
        ctx->pc = 0x52F050u;
            // 0x52f050: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52F054u;
        goto label_52f054;
    }
    ctx->pc = 0x52F04Cu;
    SET_GPR_U32(ctx, 31, 0x52F054u);
    ctx->pc = 0x52F050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F04Cu;
            // 0x52f050: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F054u; }
        if (ctx->pc != 0x52F054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F054u; }
        if (ctx->pc != 0x52F054u) { return; }
    }
    ctx->pc = 0x52F054u;
label_52f054:
    // 0x52f054: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x52f054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_52f058:
    // 0x52f058: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x52f058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_52f05c:
    // 0x52f05c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x52f05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_52f060:
    // 0x52f060: 0xc054bbc  jal         func_152EF0
label_52f064:
    if (ctx->pc == 0x52F064u) {
        ctx->pc = 0x52F064u;
            // 0x52f064: 0xc62c006c  lwc1        $f12, 0x6C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x52F068u;
        goto label_52f068;
    }
    ctx->pc = 0x52F060u;
    SET_GPR_U32(ctx, 31, 0x52F068u);
    ctx->pc = 0x52F064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F060u;
            // 0x52f064: 0xc62c006c  lwc1        $f12, 0x6C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F068u; }
        if (ctx->pc != 0x52F068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F068u; }
        if (ctx->pc != 0x52F068u) { return; }
    }
    ctx->pc = 0x52F068u;
label_52f068:
    // 0x52f068: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x52f068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_52f06c:
    // 0x52f06c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x52f06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52f070:
    // 0x52f070: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x52f070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52f074:
    // 0x52f074: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x52f074u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_52f078:
    // 0x52f078: 0xc054c2c  jal         func_1530B0
label_52f07c:
    if (ctx->pc == 0x52F07Cu) {
        ctx->pc = 0x52F07Cu;
            // 0x52f07c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52F080u;
        goto label_52f080;
    }
    ctx->pc = 0x52F078u;
    SET_GPR_U32(ctx, 31, 0x52F080u);
    ctx->pc = 0x52F07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F078u;
            // 0x52f07c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F080u; }
        if (ctx->pc != 0x52F080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F080u; }
        if (ctx->pc != 0x52F080u) { return; }
    }
    ctx->pc = 0x52F080u;
label_52f080:
    // 0x52f080: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x52f080u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_52f084:
    // 0x52f084: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52f084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52f088:
    // 0x52f088: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x52f088u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52f08c:
    // 0x52f08c: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
label_52f090:
    if (ctx->pc == 0x52F090u) {
        ctx->pc = 0x52F090u;
            // 0x52f090: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x52F094u;
        goto label_52f094;
    }
    ctx->pc = 0x52F08Cu;
    {
        const bool branch_taken_0x52f08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52F090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F08Cu;
            // 0x52f090: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f08c) {
            ctx->pc = 0x52EF80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52ef80;
        }
    }
    ctx->pc = 0x52F094u;
label_52f094:
    // 0x52f094: 0x0  nop
    ctx->pc = 0x52f094u;
    // NOP
label_52f098:
    // 0x52f098: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x52f098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_52f09c:
    // 0x52f09c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x52f09cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_52f0a0:
    // 0x52f0a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x52f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_52f0a4:
    // 0x52f0a4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x52f0a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_52f0a8:
    // 0x52f0a8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x52f0a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_52f0ac:
    // 0x52f0ac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x52f0acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_52f0b0:
    // 0x52f0b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x52f0b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_52f0b4:
    // 0x52f0b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x52f0b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52f0b8:
    // 0x52f0b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x52f0b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52f0bc:
    // 0x52f0bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x52f0bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52f0c0:
    // 0x52f0c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x52f0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52f0c4:
    // 0x52f0c4: 0x3e00008  jr          $ra
label_52f0c8:
    if (ctx->pc == 0x52F0C8u) {
        ctx->pc = 0x52F0C8u;
            // 0x52f0c8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x52F0CCu;
        goto label_52f0cc;
    }
    ctx->pc = 0x52F0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52F0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F0C4u;
            // 0x52f0c8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52F0CCu;
label_52f0cc:
    // 0x52f0cc: 0x0  nop
    ctx->pc = 0x52f0ccu;
    // NOP
label_52f0d0:
    // 0x52f0d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x52f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_52f0d4:
    // 0x52f0d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x52f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52f0d8:
    // 0x52f0d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x52f0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52f0dc:
    // 0x52f0dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52f0e0:
    // 0x52f0e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52f0e4:
    // 0x52f0e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52f0e8:
    // 0x52f0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52f0ec:
    // 0x52f0ec: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x52f0ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_52f0f0:
    // 0x52f0f0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_52f0f4:
    if (ctx->pc == 0x52F0F4u) {
        ctx->pc = 0x52F0F4u;
            // 0x52f0f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52F0F8u;
        goto label_52f0f8;
    }
    ctx->pc = 0x52F0F0u;
    {
        const bool branch_taken_0x52f0f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x52F0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F0F0u;
            // 0x52f0f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f0f0) {
            ctx->pc = 0x52F124u;
            goto label_52f124;
        }
    }
    ctx->pc = 0x52F0F8u;
label_52f0f8:
    // 0x52f0f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52f0fc:
    // 0x52f0fc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_52f100:
    if (ctx->pc == 0x52F100u) {
        ctx->pc = 0x52F100u;
            // 0x52f100: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52F104u;
        goto label_52f104;
    }
    ctx->pc = 0x52F0FCu;
    {
        const bool branch_taken_0x52f0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52f0fc) {
            ctx->pc = 0x52F100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52F0FCu;
            // 0x52f100: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52F118u;
            goto label_52f118;
        }
    }
    ctx->pc = 0x52F104u;
label_52f104:
    // 0x52f104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52f104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52f108:
    // 0x52f108: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_52f10c:
    if (ctx->pc == 0x52F10Cu) {
        ctx->pc = 0x52F110u;
        goto label_52f110;
    }
    ctx->pc = 0x52F108u;
    {
        const bool branch_taken_0x52f108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52f108) {
            ctx->pc = 0x52F158u;
            goto label_52f158;
        }
    }
    ctx->pc = 0x52F110u;
label_52f110:
    // 0x52f110: 0x10000011  b           . + 4 + (0x11 << 2)
label_52f114:
    if (ctx->pc == 0x52F114u) {
        ctx->pc = 0x52F118u;
        goto label_52f118;
    }
    ctx->pc = 0x52F110u;
    {
        const bool branch_taken_0x52f110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52f110) {
            ctx->pc = 0x52F158u;
            goto label_52f158;
        }
    }
    ctx->pc = 0x52F118u;
label_52f118:
    // 0x52f118: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x52f118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_52f11c:
    // 0x52f11c: 0x320f809  jalr        $t9
label_52f120:
    if (ctx->pc == 0x52F120u) {
        ctx->pc = 0x52F124u;
        goto label_52f124;
    }
    ctx->pc = 0x52F11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52F124u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52F124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52F124u; }
            if (ctx->pc != 0x52F124u) { return; }
        }
        }
    }
    ctx->pc = 0x52F124u;
label_52f124:
    // 0x52f124: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x52f124u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_52f128:
    // 0x52f128: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_52f12c:
    if (ctx->pc == 0x52F12Cu) {
        ctx->pc = 0x52F130u;
        goto label_52f130;
    }
    ctx->pc = 0x52F128u;
    {
        const bool branch_taken_0x52f128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52f128) {
            ctx->pc = 0x52F158u;
            goto label_52f158;
        }
    }
    ctx->pc = 0x52F130u;
label_52f130:
    // 0x52f130: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52f130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52f134:
    // 0x52f134: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52f134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52f138:
    // 0x52f138: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x52f138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_52f13c:
    // 0x52f13c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x52f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_52f140:
    // 0x52f140: 0xc14be34  jal         func_52F8D0
label_52f144:
    if (ctx->pc == 0x52F144u) {
        ctx->pc = 0x52F144u;
            // 0x52f144: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x52F148u;
        goto label_52f148;
    }
    ctx->pc = 0x52F140u;
    SET_GPR_U32(ctx, 31, 0x52F148u);
    ctx->pc = 0x52F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F140u;
            // 0x52f144: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52F8D0u;
    if (runtime->hasFunction(0x52F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x52F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F148u; }
        if (ctx->pc != 0x52F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052F8D0_0x52f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F148u; }
        if (ctx->pc != 0x52F148u) { return; }
    }
    ctx->pc = 0x52F148u;
label_52f148:
    // 0x52f148: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x52f148u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_52f14c:
    // 0x52f14c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x52f14cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_52f150:
    // 0x52f150: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_52f154:
    if (ctx->pc == 0x52F154u) {
        ctx->pc = 0x52F154u;
            // 0x52f154: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x52F158u;
        goto label_52f158;
    }
    ctx->pc = 0x52F150u;
    {
        const bool branch_taken_0x52f150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52F154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F150u;
            // 0x52f154: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f150) {
            ctx->pc = 0x52F138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52f138;
        }
    }
    ctx->pc = 0x52F158u;
label_52f158:
    // 0x52f158: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x52f158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52f15c:
    // 0x52f15c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52f15cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52f160:
    // 0x52f160: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52f160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52f164:
    // 0x52f164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52f164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52f168:
    // 0x52f168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52f168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52f16c:
    // 0x52f16c: 0x3e00008  jr          $ra
label_52f170:
    if (ctx->pc == 0x52F170u) {
        ctx->pc = 0x52F170u;
            // 0x52f170: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x52F174u;
        goto label_52f174;
    }
    ctx->pc = 0x52F16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52F170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F16Cu;
            // 0x52f170: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52F174u;
label_52f174:
    // 0x52f174: 0x0  nop
    ctx->pc = 0x52f174u;
    // NOP
label_52f178:
    // 0x52f178: 0x0  nop
    ctx->pc = 0x52f178u;
    // NOP
label_52f17c:
    // 0x52f17c: 0x0  nop
    ctx->pc = 0x52f17cu;
    // NOP
label_52f180:
    // 0x52f180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x52f180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_52f184:
    // 0x52f184: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x52f184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_52f188:
    // 0x52f188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52f188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52f18c:
    // 0x52f18c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52f18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52f190:
    // 0x52f190: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52f190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52f194:
    // 0x52f194: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52f194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52f198:
    // 0x52f198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52f198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52f19c:
    // 0x52f19c: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x52f19cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52f1a0:
    // 0x52f1a0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_52f1a4:
    if (ctx->pc == 0x52F1A4u) {
        ctx->pc = 0x52F1A4u;
            // 0x52f1a4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52F1A8u;
        goto label_52f1a8;
    }
    ctx->pc = 0x52F1A0u;
    {
        const bool branch_taken_0x52f1a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52F1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F1A0u;
            // 0x52f1a4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f1a0) {
            ctx->pc = 0x52F1F8u;
            goto label_52f1f8;
        }
    }
    ctx->pc = 0x52F1A8u;
label_52f1a8:
    // 0x52f1a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52f1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52f1ac:
    // 0x52f1ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52f1acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52f1b0:
    // 0x52f1b0: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x52f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_52f1b4:
    // 0x52f1b4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x52f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_52f1b8:
    // 0x52f1b8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x52f1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_52f1bc:
    // 0x52f1bc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x52f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_52f1c0:
    // 0x52f1c0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x52f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_52f1c4:
    // 0x52f1c4: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x52f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_52f1c8:
    // 0x52f1c8: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x52f1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_52f1cc:
    // 0x52f1cc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_52f1d0:
    if (ctx->pc == 0x52F1D0u) {
        ctx->pc = 0x52F1D4u;
        goto label_52f1d4;
    }
    ctx->pc = 0x52F1CCu;
    {
        const bool branch_taken_0x52f1cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x52f1cc) {
            ctx->pc = 0x52F1E8u;
            goto label_52f1e8;
        }
    }
    ctx->pc = 0x52F1D4u;
label_52f1d4:
    // 0x52f1d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52f1d8:
    // 0x52f1d8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52f1dc:
    // 0x52f1dc: 0xc08c8fc  jal         func_2323F0
label_52f1e0:
    if (ctx->pc == 0x52F1E0u) {
        ctx->pc = 0x52F1E0u;
            // 0x52f1e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x52F1E4u;
        goto label_52f1e4;
    }
    ctx->pc = 0x52F1DCu;
    SET_GPR_U32(ctx, 31, 0x52F1E4u);
    ctx->pc = 0x52F1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F1DCu;
            // 0x52f1e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F1E4u; }
        if (ctx->pc != 0x52F1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F1E4u; }
        if (ctx->pc != 0x52F1E4u) { return; }
    }
    ctx->pc = 0x52F1E4u;
label_52f1e4:
    // 0x52f1e4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x52f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_52f1e8:
    // 0x52f1e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x52f1e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_52f1ec:
    // 0x52f1ec: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x52f1ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_52f1f0:
    // 0x52f1f0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_52f1f4:
    if (ctx->pc == 0x52F1F4u) {
        ctx->pc = 0x52F1F4u;
            // 0x52f1f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x52F1F8u;
        goto label_52f1f8;
    }
    ctx->pc = 0x52F1F0u;
    {
        const bool branch_taken_0x52f1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52F1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F1F0u;
            // 0x52f1f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f1f0) {
            ctx->pc = 0x52F1B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52f1b0;
        }
    }
    ctx->pc = 0x52F1F8u;
label_52f1f8:
    // 0x52f1f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x52f1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_52f1fc:
    // 0x52f1fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52f1fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52f200:
    // 0x52f200: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52f200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52f204:
    // 0x52f204: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52f204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52f208:
    // 0x52f208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52f208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52f20c:
    // 0x52f20c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52f20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52f210:
    // 0x52f210: 0x3e00008  jr          $ra
label_52f214:
    if (ctx->pc == 0x52F214u) {
        ctx->pc = 0x52F214u;
            // 0x52f214: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x52F218u;
        goto label_52f218;
    }
    ctx->pc = 0x52F210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52F214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F210u;
            // 0x52f214: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52F218u;
label_52f218:
    // 0x52f218: 0x0  nop
    ctx->pc = 0x52f218u;
    // NOP
label_52f21c:
    // 0x52f21c: 0x0  nop
    ctx->pc = 0x52f21cu;
    // NOP
}
