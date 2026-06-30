#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032EC30
// Address: 0x32ec30 - 0x32f010
void sub_0032EC30_0x32ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EC30_0x32ec30");
#endif

    switch (ctx->pc) {
        case 0x32ec30u: goto label_32ec30;
        case 0x32ec34u: goto label_32ec34;
        case 0x32ec38u: goto label_32ec38;
        case 0x32ec3cu: goto label_32ec3c;
        case 0x32ec40u: goto label_32ec40;
        case 0x32ec44u: goto label_32ec44;
        case 0x32ec48u: goto label_32ec48;
        case 0x32ec4cu: goto label_32ec4c;
        case 0x32ec50u: goto label_32ec50;
        case 0x32ec54u: goto label_32ec54;
        case 0x32ec58u: goto label_32ec58;
        case 0x32ec5cu: goto label_32ec5c;
        case 0x32ec60u: goto label_32ec60;
        case 0x32ec64u: goto label_32ec64;
        case 0x32ec68u: goto label_32ec68;
        case 0x32ec6cu: goto label_32ec6c;
        case 0x32ec70u: goto label_32ec70;
        case 0x32ec74u: goto label_32ec74;
        case 0x32ec78u: goto label_32ec78;
        case 0x32ec7cu: goto label_32ec7c;
        case 0x32ec80u: goto label_32ec80;
        case 0x32ec84u: goto label_32ec84;
        case 0x32ec88u: goto label_32ec88;
        case 0x32ec8cu: goto label_32ec8c;
        case 0x32ec90u: goto label_32ec90;
        case 0x32ec94u: goto label_32ec94;
        case 0x32ec98u: goto label_32ec98;
        case 0x32ec9cu: goto label_32ec9c;
        case 0x32eca0u: goto label_32eca0;
        case 0x32eca4u: goto label_32eca4;
        case 0x32eca8u: goto label_32eca8;
        case 0x32ecacu: goto label_32ecac;
        case 0x32ecb0u: goto label_32ecb0;
        case 0x32ecb4u: goto label_32ecb4;
        case 0x32ecb8u: goto label_32ecb8;
        case 0x32ecbcu: goto label_32ecbc;
        case 0x32ecc0u: goto label_32ecc0;
        case 0x32ecc4u: goto label_32ecc4;
        case 0x32ecc8u: goto label_32ecc8;
        case 0x32ecccu: goto label_32eccc;
        case 0x32ecd0u: goto label_32ecd0;
        case 0x32ecd4u: goto label_32ecd4;
        case 0x32ecd8u: goto label_32ecd8;
        case 0x32ecdcu: goto label_32ecdc;
        case 0x32ece0u: goto label_32ece0;
        case 0x32ece4u: goto label_32ece4;
        case 0x32ece8u: goto label_32ece8;
        case 0x32ececu: goto label_32ecec;
        case 0x32ecf0u: goto label_32ecf0;
        case 0x32ecf4u: goto label_32ecf4;
        case 0x32ecf8u: goto label_32ecf8;
        case 0x32ecfcu: goto label_32ecfc;
        case 0x32ed00u: goto label_32ed00;
        case 0x32ed04u: goto label_32ed04;
        case 0x32ed08u: goto label_32ed08;
        case 0x32ed0cu: goto label_32ed0c;
        case 0x32ed10u: goto label_32ed10;
        case 0x32ed14u: goto label_32ed14;
        case 0x32ed18u: goto label_32ed18;
        case 0x32ed1cu: goto label_32ed1c;
        case 0x32ed20u: goto label_32ed20;
        case 0x32ed24u: goto label_32ed24;
        case 0x32ed28u: goto label_32ed28;
        case 0x32ed2cu: goto label_32ed2c;
        case 0x32ed30u: goto label_32ed30;
        case 0x32ed34u: goto label_32ed34;
        case 0x32ed38u: goto label_32ed38;
        case 0x32ed3cu: goto label_32ed3c;
        case 0x32ed40u: goto label_32ed40;
        case 0x32ed44u: goto label_32ed44;
        case 0x32ed48u: goto label_32ed48;
        case 0x32ed4cu: goto label_32ed4c;
        case 0x32ed50u: goto label_32ed50;
        case 0x32ed54u: goto label_32ed54;
        case 0x32ed58u: goto label_32ed58;
        case 0x32ed5cu: goto label_32ed5c;
        case 0x32ed60u: goto label_32ed60;
        case 0x32ed64u: goto label_32ed64;
        case 0x32ed68u: goto label_32ed68;
        case 0x32ed6cu: goto label_32ed6c;
        case 0x32ed70u: goto label_32ed70;
        case 0x32ed74u: goto label_32ed74;
        case 0x32ed78u: goto label_32ed78;
        case 0x32ed7cu: goto label_32ed7c;
        case 0x32ed80u: goto label_32ed80;
        case 0x32ed84u: goto label_32ed84;
        case 0x32ed88u: goto label_32ed88;
        case 0x32ed8cu: goto label_32ed8c;
        case 0x32ed90u: goto label_32ed90;
        case 0x32ed94u: goto label_32ed94;
        case 0x32ed98u: goto label_32ed98;
        case 0x32ed9cu: goto label_32ed9c;
        case 0x32eda0u: goto label_32eda0;
        case 0x32eda4u: goto label_32eda4;
        case 0x32eda8u: goto label_32eda8;
        case 0x32edacu: goto label_32edac;
        case 0x32edb0u: goto label_32edb0;
        case 0x32edb4u: goto label_32edb4;
        case 0x32edb8u: goto label_32edb8;
        case 0x32edbcu: goto label_32edbc;
        case 0x32edc0u: goto label_32edc0;
        case 0x32edc4u: goto label_32edc4;
        case 0x32edc8u: goto label_32edc8;
        case 0x32edccu: goto label_32edcc;
        case 0x32edd0u: goto label_32edd0;
        case 0x32edd4u: goto label_32edd4;
        case 0x32edd8u: goto label_32edd8;
        case 0x32eddcu: goto label_32eddc;
        case 0x32ede0u: goto label_32ede0;
        case 0x32ede4u: goto label_32ede4;
        case 0x32ede8u: goto label_32ede8;
        case 0x32edecu: goto label_32edec;
        case 0x32edf0u: goto label_32edf0;
        case 0x32edf4u: goto label_32edf4;
        case 0x32edf8u: goto label_32edf8;
        case 0x32edfcu: goto label_32edfc;
        case 0x32ee00u: goto label_32ee00;
        case 0x32ee04u: goto label_32ee04;
        case 0x32ee08u: goto label_32ee08;
        case 0x32ee0cu: goto label_32ee0c;
        case 0x32ee10u: goto label_32ee10;
        case 0x32ee14u: goto label_32ee14;
        case 0x32ee18u: goto label_32ee18;
        case 0x32ee1cu: goto label_32ee1c;
        case 0x32ee20u: goto label_32ee20;
        case 0x32ee24u: goto label_32ee24;
        case 0x32ee28u: goto label_32ee28;
        case 0x32ee2cu: goto label_32ee2c;
        case 0x32ee30u: goto label_32ee30;
        case 0x32ee34u: goto label_32ee34;
        case 0x32ee38u: goto label_32ee38;
        case 0x32ee3cu: goto label_32ee3c;
        case 0x32ee40u: goto label_32ee40;
        case 0x32ee44u: goto label_32ee44;
        case 0x32ee48u: goto label_32ee48;
        case 0x32ee4cu: goto label_32ee4c;
        case 0x32ee50u: goto label_32ee50;
        case 0x32ee54u: goto label_32ee54;
        case 0x32ee58u: goto label_32ee58;
        case 0x32ee5cu: goto label_32ee5c;
        case 0x32ee60u: goto label_32ee60;
        case 0x32ee64u: goto label_32ee64;
        case 0x32ee68u: goto label_32ee68;
        case 0x32ee6cu: goto label_32ee6c;
        case 0x32ee70u: goto label_32ee70;
        case 0x32ee74u: goto label_32ee74;
        case 0x32ee78u: goto label_32ee78;
        case 0x32ee7cu: goto label_32ee7c;
        case 0x32ee80u: goto label_32ee80;
        case 0x32ee84u: goto label_32ee84;
        case 0x32ee88u: goto label_32ee88;
        case 0x32ee8cu: goto label_32ee8c;
        case 0x32ee90u: goto label_32ee90;
        case 0x32ee94u: goto label_32ee94;
        case 0x32ee98u: goto label_32ee98;
        case 0x32ee9cu: goto label_32ee9c;
        case 0x32eea0u: goto label_32eea0;
        case 0x32eea4u: goto label_32eea4;
        case 0x32eea8u: goto label_32eea8;
        case 0x32eeacu: goto label_32eeac;
        case 0x32eeb0u: goto label_32eeb0;
        case 0x32eeb4u: goto label_32eeb4;
        case 0x32eeb8u: goto label_32eeb8;
        case 0x32eebcu: goto label_32eebc;
        case 0x32eec0u: goto label_32eec0;
        case 0x32eec4u: goto label_32eec4;
        case 0x32eec8u: goto label_32eec8;
        case 0x32eeccu: goto label_32eecc;
        case 0x32eed0u: goto label_32eed0;
        case 0x32eed4u: goto label_32eed4;
        case 0x32eed8u: goto label_32eed8;
        case 0x32eedcu: goto label_32eedc;
        case 0x32eee0u: goto label_32eee0;
        case 0x32eee4u: goto label_32eee4;
        case 0x32eee8u: goto label_32eee8;
        case 0x32eeecu: goto label_32eeec;
        case 0x32eef0u: goto label_32eef0;
        case 0x32eef4u: goto label_32eef4;
        case 0x32eef8u: goto label_32eef8;
        case 0x32eefcu: goto label_32eefc;
        case 0x32ef00u: goto label_32ef00;
        case 0x32ef04u: goto label_32ef04;
        case 0x32ef08u: goto label_32ef08;
        case 0x32ef0cu: goto label_32ef0c;
        case 0x32ef10u: goto label_32ef10;
        case 0x32ef14u: goto label_32ef14;
        case 0x32ef18u: goto label_32ef18;
        case 0x32ef1cu: goto label_32ef1c;
        case 0x32ef20u: goto label_32ef20;
        case 0x32ef24u: goto label_32ef24;
        case 0x32ef28u: goto label_32ef28;
        case 0x32ef2cu: goto label_32ef2c;
        case 0x32ef30u: goto label_32ef30;
        case 0x32ef34u: goto label_32ef34;
        case 0x32ef38u: goto label_32ef38;
        case 0x32ef3cu: goto label_32ef3c;
        case 0x32ef40u: goto label_32ef40;
        case 0x32ef44u: goto label_32ef44;
        case 0x32ef48u: goto label_32ef48;
        case 0x32ef4cu: goto label_32ef4c;
        case 0x32ef50u: goto label_32ef50;
        case 0x32ef54u: goto label_32ef54;
        case 0x32ef58u: goto label_32ef58;
        case 0x32ef5cu: goto label_32ef5c;
        case 0x32ef60u: goto label_32ef60;
        case 0x32ef64u: goto label_32ef64;
        case 0x32ef68u: goto label_32ef68;
        case 0x32ef6cu: goto label_32ef6c;
        case 0x32ef70u: goto label_32ef70;
        case 0x32ef74u: goto label_32ef74;
        case 0x32ef78u: goto label_32ef78;
        case 0x32ef7cu: goto label_32ef7c;
        case 0x32ef80u: goto label_32ef80;
        case 0x32ef84u: goto label_32ef84;
        case 0x32ef88u: goto label_32ef88;
        case 0x32ef8cu: goto label_32ef8c;
        case 0x32ef90u: goto label_32ef90;
        case 0x32ef94u: goto label_32ef94;
        case 0x32ef98u: goto label_32ef98;
        case 0x32ef9cu: goto label_32ef9c;
        case 0x32efa0u: goto label_32efa0;
        case 0x32efa4u: goto label_32efa4;
        case 0x32efa8u: goto label_32efa8;
        case 0x32efacu: goto label_32efac;
        case 0x32efb0u: goto label_32efb0;
        case 0x32efb4u: goto label_32efb4;
        case 0x32efb8u: goto label_32efb8;
        case 0x32efbcu: goto label_32efbc;
        case 0x32efc0u: goto label_32efc0;
        case 0x32efc4u: goto label_32efc4;
        case 0x32efc8u: goto label_32efc8;
        case 0x32efccu: goto label_32efcc;
        case 0x32efd0u: goto label_32efd0;
        case 0x32efd4u: goto label_32efd4;
        case 0x32efd8u: goto label_32efd8;
        case 0x32efdcu: goto label_32efdc;
        case 0x32efe0u: goto label_32efe0;
        case 0x32efe4u: goto label_32efe4;
        case 0x32efe8u: goto label_32efe8;
        case 0x32efecu: goto label_32efec;
        case 0x32eff0u: goto label_32eff0;
        case 0x32eff4u: goto label_32eff4;
        case 0x32eff8u: goto label_32eff8;
        case 0x32effcu: goto label_32effc;
        case 0x32f000u: goto label_32f000;
        case 0x32f004u: goto label_32f004;
        case 0x32f008u: goto label_32f008;
        case 0x32f00cu: goto label_32f00c;
        default: break;
    }

    ctx->pc = 0x32ec30u;

label_32ec30:
    // 0x32ec30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32ec34:
    // 0x32ec34: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x32ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_32ec38:
    // 0x32ec38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32ec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32ec3c:
    // 0x32ec3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32ec40:
    // 0x32ec40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32ec44:
    // 0x32ec44: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x32ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_32ec48:
    // 0x32ec48: 0x8c850968  lw          $a1, 0x968($a0)
    ctx->pc = 0x32ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_32ec4c:
    // 0x32ec4c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x32ec4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_32ec50:
    // 0x32ec50: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x32ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_32ec54:
    // 0x32ec54: 0x10a40051  beq         $a1, $a0, . + 4 + (0x51 << 2)
label_32ec58:
    if (ctx->pc == 0x32EC58u) {
        ctx->pc = 0x32EC58u;
            // 0x32ec58: 0x24b1ffff  addiu       $s1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x32EC5Cu;
        goto label_32ec5c;
    }
    ctx->pc = 0x32EC54u;
    {
        const bool branch_taken_0x32ec54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x32EC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EC54u;
            // 0x32ec58: 0x24b1ffff  addiu       $s1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ec54) {
            ctx->pc = 0x32ED9Cu;
            goto label_32ed9c;
        }
    }
    ctx->pc = 0x32EC5Cu;
label_32ec5c:
    // 0x32ec5c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x32ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32ec60:
    // 0x32ec60: 0x50a3004f  beql        $a1, $v1, . + 4 + (0x4F << 2)
label_32ec64:
    if (ctx->pc == 0x32EC64u) {
        ctx->pc = 0x32EC64u;
            // 0x32ec64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x32EC68u;
        goto label_32ec68;
    }
    ctx->pc = 0x32EC60u;
    {
        const bool branch_taken_0x32ec60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32ec60) {
            ctx->pc = 0x32EC64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32EC60u;
            // 0x32ec64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EDA0u;
            goto label_32eda0;
        }
    }
    ctx->pc = 0x32EC68u;
label_32ec68:
    // 0x32ec68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ec6c:
    // 0x32ec6c: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
label_32ec70:
    if (ctx->pc == 0x32EC70u) {
        ctx->pc = 0x32EC70u;
            // 0x32ec70: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x32EC74u;
        goto label_32ec74;
    }
    ctx->pc = 0x32EC6Cu;
    {
        const bool branch_taken_0x32ec6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32ec6c) {
            ctx->pc = 0x32EC70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32EC6Cu;
            // 0x32ec70: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EC7Cu;
            goto label_32ec7c;
        }
    }
    ctx->pc = 0x32EC74u;
label_32ec74:
    // 0x32ec74: 0x1000002d  b           . + 4 + (0x2D << 2)
label_32ec78:
    if (ctx->pc == 0x32EC78u) {
        ctx->pc = 0x32EC78u;
            // 0x32ec78: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x32EC7Cu;
        goto label_32ec7c;
    }
    ctx->pc = 0x32EC74u;
    {
        const bool branch_taken_0x32ec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EC74u;
            // 0x32ec78: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ec74) {
            ctx->pc = 0x32ED2Cu;
            goto label_32ed2c;
        }
    }
    ctx->pc = 0x32EC7Cu;
label_32ec7c:
    // 0x32ec7c: 0xc0b90e0  jal         func_2E4380
label_32ec80:
    if (ctx->pc == 0x32EC80u) {
        ctx->pc = 0x32EC80u;
            // 0x32ec80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32EC84u;
        goto label_32ec84;
    }
    ctx->pc = 0x32EC7Cu;
    SET_GPR_U32(ctx, 31, 0x32EC84u);
    ctx->pc = 0x32EC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EC7Cu;
            // 0x32ec80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EC84u; }
        if (ctx->pc != 0x32EC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EC84u; }
        if (ctx->pc != 0x32EC84u) { return; }
    }
    ctx->pc = 0x32EC84u;
label_32ec84:
    // 0x32ec84: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_32ec88:
    if (ctx->pc == 0x32EC88u) {
        ctx->pc = 0x32EC88u;
            // 0x32ec88: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x32EC8Cu;
        goto label_32ec8c;
    }
    ctx->pc = 0x32EC84u;
    {
        const bool branch_taken_0x32ec84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ec84) {
            ctx->pc = 0x32EC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32EC84u;
            // 0x32ec88: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32ECA4u;
            goto label_32eca4;
        }
    }
    ctx->pc = 0x32EC8Cu;
label_32ec8c:
    // 0x32ec8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32ec90:
    // 0x32ec90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ec94:
    // 0x32ec94: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x32ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_32ec98:
    // 0x32ec98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x32ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_32ec9c:
    // 0x32ec9c: 0xa04300d5  sb          $v1, 0xD5($v0)
    ctx->pc = 0x32ec9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 213), (uint8_t)GPR_U32(ctx, 3));
label_32eca0:
    // 0x32eca0: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x32eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_32eca4:
    // 0x32eca4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32eca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32eca8:
    // 0x32eca8: 0xc0ca4b0  jal         func_3292C0
label_32ecac:
    if (ctx->pc == 0x32ECACu) {
        ctx->pc = 0x32ECACu;
            // 0x32ecac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32ECB0u;
        goto label_32ecb0;
    }
    ctx->pc = 0x32ECA8u;
    SET_GPR_U32(ctx, 31, 0x32ECB0u);
    ctx->pc = 0x32ECACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ECA8u;
            // 0x32ecac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ECB0u; }
        if (ctx->pc != 0x32ECB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ECB0u; }
        if (ctx->pc != 0x32ECB0u) { return; }
    }
    ctx->pc = 0x32ECB0u;
label_32ecb0:
    // 0x32ecb0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x32ecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_32ecb4:
    // 0x32ecb4: 0xc0b90e0  jal         func_2E4380
label_32ecb8:
    if (ctx->pc == 0x32ECB8u) {
        ctx->pc = 0x32ECB8u;
            // 0x32ecb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ECBCu;
        goto label_32ecbc;
    }
    ctx->pc = 0x32ECB4u;
    SET_GPR_U32(ctx, 31, 0x32ECBCu);
    ctx->pc = 0x32ECB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ECB4u;
            // 0x32ecb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ECBCu; }
        if (ctx->pc != 0x32ECBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ECBCu; }
        if (ctx->pc != 0x32ECBCu) { return; }
    }
    ctx->pc = 0x32ECBCu;
label_32ecbc:
    // 0x32ecbc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_32ecc0:
    if (ctx->pc == 0x32ECC0u) {
        ctx->pc = 0x32ECC0u;
            // 0x32ecc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ECC4u;
        goto label_32ecc4;
    }
    ctx->pc = 0x32ECBCu;
    {
        const bool branch_taken_0x32ecbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ecbc) {
            ctx->pc = 0x32ECC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32ECBCu;
            // 0x32ecc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32ECE0u;
            goto label_32ece0;
        }
    }
    ctx->pc = 0x32ECC4u;
label_32ecc4:
    // 0x32ecc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32ecc8:
    // 0x32ecc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32eccc:
    // 0x32eccc: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x32ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_32ecd0:
    // 0x32ecd0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_32ecd4:
    // 0x32ecd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32ecd8:
    // 0x32ecd8: 0xa0440095  sb          $a0, 0x95($v0)
    ctx->pc = 0x32ecd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 4));
label_32ecdc:
    // 0x32ecdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32ecdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ece0:
    // 0x32ece0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x32ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_32ece4:
    // 0x32ece4: 0xc0ca4b0  jal         func_3292C0
label_32ece8:
    if (ctx->pc == 0x32ECE8u) {
        ctx->pc = 0x32ECE8u;
            // 0x32ece8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32ECECu;
        goto label_32ecec;
    }
    ctx->pc = 0x32ECE4u;
    SET_GPR_U32(ctx, 31, 0x32ECECu);
    ctx->pc = 0x32ECE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ECE4u;
            // 0x32ece8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ECECu; }
        if (ctx->pc != 0x32ECECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ECECu; }
        if (ctx->pc != 0x32ECECu) { return; }
    }
    ctx->pc = 0x32ECECu;
label_32ecec:
    // 0x32ecec: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x32ececu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_32ecf0:
    // 0x32ecf0: 0xc0b90e0  jal         func_2E4380
label_32ecf4:
    if (ctx->pc == 0x32ECF4u) {
        ctx->pc = 0x32ECF4u;
            // 0x32ecf4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x32ECF8u;
        goto label_32ecf8;
    }
    ctx->pc = 0x32ECF0u;
    SET_GPR_U32(ctx, 31, 0x32ECF8u);
    ctx->pc = 0x32ECF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ECF0u;
            // 0x32ecf4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ECF8u; }
        if (ctx->pc != 0x32ECF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ECF8u; }
        if (ctx->pc != 0x32ECF8u) { return; }
    }
    ctx->pc = 0x32ECF8u;
label_32ecf8:
    // 0x32ecf8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_32ecfc:
    if (ctx->pc == 0x32ECFCu) {
        ctx->pc = 0x32ECFCu;
            // 0x32ecfc: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x32ED00u;
        goto label_32ed00;
    }
    ctx->pc = 0x32ECF8u;
    {
        const bool branch_taken_0x32ecf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ecf8) {
            ctx->pc = 0x32ECFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32ECF8u;
            // 0x32ecfc: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32ED18u;
            goto label_32ed18;
        }
    }
    ctx->pc = 0x32ED00u;
label_32ed00:
    // 0x32ed00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32ed04:
    // 0x32ed04: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x32ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_32ed08:
    // 0x32ed08: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x32ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_32ed0c:
    // 0x32ed0c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x32ed0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_32ed10:
    // 0x32ed10: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x32ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_32ed14:
    // 0x32ed14: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x32ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_32ed18:
    // 0x32ed18: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x32ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_32ed1c:
    // 0x32ed1c: 0xc0ca4b0  jal         func_3292C0
label_32ed20:
    if (ctx->pc == 0x32ED20u) {
        ctx->pc = 0x32ED20u;
            // 0x32ed20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32ED24u;
        goto label_32ed24;
    }
    ctx->pc = 0x32ED1Cu;
    SET_GPR_U32(ctx, 31, 0x32ED24u);
    ctx->pc = 0x32ED20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ED1Cu;
            // 0x32ed20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ED24u; }
        if (ctx->pc != 0x32ED24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ED24u; }
        if (ctx->pc != 0x32ED24u) { return; }
    }
    ctx->pc = 0x32ED24u;
label_32ed24:
    // 0x32ed24: 0x1000001d  b           . + 4 + (0x1D << 2)
label_32ed28:
    if (ctx->pc == 0x32ED28u) {
        ctx->pc = 0x32ED2Cu;
        goto label_32ed2c;
    }
    ctx->pc = 0x32ED24u;
    {
        const bool branch_taken_0x32ed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ed24) {
            ctx->pc = 0x32ED9Cu;
            goto label_32ed9c;
        }
    }
    ctx->pc = 0x32ED2Cu;
label_32ed2c:
    // 0x32ed2c: 0xc0b90e0  jal         func_2E4380
label_32ed30:
    if (ctx->pc == 0x32ED30u) {
        ctx->pc = 0x32ED30u;
            // 0x32ed30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ED34u;
        goto label_32ed34;
    }
    ctx->pc = 0x32ED2Cu;
    SET_GPR_U32(ctx, 31, 0x32ED34u);
    ctx->pc = 0x32ED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ED2Cu;
            // 0x32ed30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ED34u; }
        if (ctx->pc != 0x32ED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ED34u; }
        if (ctx->pc != 0x32ED34u) { return; }
    }
    ctx->pc = 0x32ED34u;
label_32ed34:
    // 0x32ed34: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_32ed38:
    if (ctx->pc == 0x32ED38u) {
        ctx->pc = 0x32ED38u;
            // 0x32ed38: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x32ED3Cu;
        goto label_32ed3c;
    }
    ctx->pc = 0x32ED34u;
    {
        const bool branch_taken_0x32ed34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ed34) {
            ctx->pc = 0x32ED38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32ED34u;
            // 0x32ed38: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32ED54u;
            goto label_32ed54;
        }
    }
    ctx->pc = 0x32ED3Cu;
label_32ed3c:
    // 0x32ed3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32ed40:
    // 0x32ed40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ed44:
    // 0x32ed44: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x32ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_32ed48:
    // 0x32ed48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x32ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_32ed4c:
    // 0x32ed4c: 0xa04300d5  sb          $v1, 0xD5($v0)
    ctx->pc = 0x32ed4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 213), (uint8_t)GPR_U32(ctx, 3));
label_32ed50:
    // 0x32ed50: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x32ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_32ed54:
    // 0x32ed54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32ed54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ed58:
    // 0x32ed58: 0xc0ca4b0  jal         func_3292C0
label_32ed5c:
    if (ctx->pc == 0x32ED5Cu) {
        ctx->pc = 0x32ED5Cu;
            // 0x32ed5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32ED60u;
        goto label_32ed60;
    }
    ctx->pc = 0x32ED58u;
    SET_GPR_U32(ctx, 31, 0x32ED60u);
    ctx->pc = 0x32ED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ED58u;
            // 0x32ed5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ED60u; }
        if (ctx->pc != 0x32ED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ED60u; }
        if (ctx->pc != 0x32ED60u) { return; }
    }
    ctx->pc = 0x32ED60u;
label_32ed60:
    // 0x32ed60: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x32ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_32ed64:
    // 0x32ed64: 0xc0b90e0  jal         func_2E4380
label_32ed68:
    if (ctx->pc == 0x32ED68u) {
        ctx->pc = 0x32ED68u;
            // 0x32ed68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ED6Cu;
        goto label_32ed6c;
    }
    ctx->pc = 0x32ED64u;
    SET_GPR_U32(ctx, 31, 0x32ED6Cu);
    ctx->pc = 0x32ED68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ED64u;
            // 0x32ed68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ED6Cu; }
        if (ctx->pc != 0x32ED6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ED6Cu; }
        if (ctx->pc != 0x32ED6Cu) { return; }
    }
    ctx->pc = 0x32ED6Cu;
label_32ed6c:
    // 0x32ed6c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_32ed70:
    if (ctx->pc == 0x32ED70u) {
        ctx->pc = 0x32ED70u;
            // 0x32ed70: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x32ED74u;
        goto label_32ed74;
    }
    ctx->pc = 0x32ED6Cu;
    {
        const bool branch_taken_0x32ed6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ed6c) {
            ctx->pc = 0x32ED70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32ED6Cu;
            // 0x32ed70: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32ED90u;
            goto label_32ed90;
        }
    }
    ctx->pc = 0x32ED74u;
label_32ed74:
    // 0x32ed74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32ed78:
    // 0x32ed78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ed7c:
    // 0x32ed7c: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x32ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_32ed80:
    // 0x32ed80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_32ed84:
    // 0x32ed84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32ed88:
    // 0x32ed88: 0xa0440095  sb          $a0, 0x95($v0)
    ctx->pc = 0x32ed88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 4));
label_32ed8c:
    // 0x32ed8c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x32ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_32ed90:
    // 0x32ed90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32ed90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ed94:
    // 0x32ed94: 0xc0ca4b0  jal         func_3292C0
label_32ed98:
    if (ctx->pc == 0x32ED98u) {
        ctx->pc = 0x32ED98u;
            // 0x32ed98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32ED9Cu;
        goto label_32ed9c;
    }
    ctx->pc = 0x32ED94u;
    SET_GPR_U32(ctx, 31, 0x32ED9Cu);
    ctx->pc = 0x32ED98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ED94u;
            // 0x32ed98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ED9Cu; }
        if (ctx->pc != 0x32ED9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ED9Cu; }
        if (ctx->pc != 0x32ED9Cu) { return; }
    }
    ctx->pc = 0x32ED9Cu;
label_32ed9c:
    // 0x32ed9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32ed9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32eda0:
    // 0x32eda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32eda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32eda4:
    // 0x32eda4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32eda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32eda8:
    // 0x32eda8: 0x3e00008  jr          $ra
label_32edac:
    if (ctx->pc == 0x32EDACu) {
        ctx->pc = 0x32EDACu;
            // 0x32edac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32EDB0u;
        goto label_32edb0;
    }
    ctx->pc = 0x32EDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EDA8u;
            // 0x32edac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32EDB0u;
label_32edb0:
    // 0x32edb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32edb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32edb4:
    // 0x32edb4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32edb8:
    // 0x32edb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32edb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32edbc:
    // 0x32edbc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x32edbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32edc0:
    // 0x32edc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32edc4:
    // 0x32edc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32edc8:
    // 0x32edc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32edc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32edcc:
    // 0x32edcc: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x32edccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_32edd0:
    // 0x32edd0: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x32edd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32edd4:
    // 0x32edd4: 0xc0b90e0  jal         func_2E4380
label_32edd8:
    if (ctx->pc == 0x32EDD8u) {
        ctx->pc = 0x32EDD8u;
            // 0x32edd8: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x32EDDCu;
        goto label_32eddc;
    }
    ctx->pc = 0x32EDD4u;
    SET_GPR_U32(ctx, 31, 0x32EDDCu);
    ctx->pc = 0x32EDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EDD4u;
            // 0x32edd8: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EDDCu; }
        if (ctx->pc != 0x32EDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EDDCu; }
        if (ctx->pc != 0x32EDDCu) { return; }
    }
    ctx->pc = 0x32EDDCu;
label_32eddc:
    // 0x32eddc: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_32ede0:
    if (ctx->pc == 0x32EDE0u) {
        ctx->pc = 0x32EDE4u;
        goto label_32ede4;
    }
    ctx->pc = 0x32EDDCu;
    {
        const bool branch_taken_0x32eddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32eddc) {
            ctx->pc = 0x32EEA8u;
            goto label_32eea8;
        }
    }
    ctx->pc = 0x32EDE4u;
label_32ede4:
    // 0x32ede4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x32ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_32ede8:
    // 0x32ede8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32ede8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32edec:
    // 0x32edec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32edecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32edf0:
    // 0x32edf0: 0x24a50e80  addiu       $a1, $a1, 0xE80
    ctx->pc = 0x32edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3712));
label_32edf4:
    // 0x32edf4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x32edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_32edf8:
    // 0x32edf8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x32edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_32edfc:
    // 0x32edfc: 0x8c630d6c  lw          $v1, 0xD6C($v1)
    ctx->pc = 0x32edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
label_32ee00:
    // 0x32ee00: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x32ee00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_32ee04:
    // 0x32ee04: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
label_32ee08:
    if (ctx->pc == 0x32EE08u) {
        ctx->pc = 0x32EE08u;
            // 0x32ee08: 0x8e23077c  lw          $v1, 0x77C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
        ctx->pc = 0x32EE0Cu;
        goto label_32ee0c;
    }
    ctx->pc = 0x32EE04u;
    {
        const bool branch_taken_0x32ee04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x32ee04) {
            ctx->pc = 0x32EE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32EE04u;
            // 0x32ee08: 0x8e23077c  lw          $v1, 0x77C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EE14u;
            goto label_32ee14;
        }
    }
    ctx->pc = 0x32EE0Cu;
label_32ee0c:
    // 0x32ee0c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32ee10:
    if (ctx->pc == 0x32EE10u) {
        ctx->pc = 0x32EE10u;
            // 0x32ee10: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x32EE14u;
        goto label_32ee14;
    }
    ctx->pc = 0x32EE0Cu;
    {
        const bool branch_taken_0x32ee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EE0Cu;
            // 0x32ee10: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ee0c) {
            ctx->pc = 0x32EE28u;
            goto label_32ee28;
        }
    }
    ctx->pc = 0x32EE14u;
label_32ee14:
    // 0x32ee14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32ee14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_32ee18:
    // 0x32ee18: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x32ee18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32ee1c:
    // 0x32ee1c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_32ee20:
    if (ctx->pc == 0x32EE20u) {
        ctx->pc = 0x32EE20u;
            // 0x32ee20: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x32EE24u;
        goto label_32ee24;
    }
    ctx->pc = 0x32EE1Cu;
    {
        const bool branch_taken_0x32ee1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EE1Cu;
            // 0x32ee20: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ee1c) {
            ctx->pc = 0x32EDF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32edf8;
        }
    }
    ctx->pc = 0x32EE24u;
label_32ee24:
    // 0x32ee24: 0x0  nop
    ctx->pc = 0x32ee24u;
    // NOP
label_32ee28:
    // 0x32ee28: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
label_32ee2c:
    if (ctx->pc == 0x32EE2Cu) {
        ctx->pc = 0x32EE30u;
        goto label_32ee30;
    }
    ctx->pc = 0x32EE28u;
    {
        const bool branch_taken_0x32ee28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ee28) {
            ctx->pc = 0x32EEA8u;
            goto label_32eea8;
        }
    }
    ctx->pc = 0x32EE30u;
label_32ee30:
    // 0x32ee30: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x32ee30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_32ee34:
    // 0x32ee34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32ee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ee38:
    // 0x32ee38: 0x24a50e80  addiu       $a1, $a1, 0xE80
    ctx->pc = 0x32ee38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3712));
label_32ee3c:
    // 0x32ee3c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x32ee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_32ee40:
    // 0x32ee40: 0x80630e3f  lb          $v1, 0xE3F($v1)
    ctx->pc = 0x32ee40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3647)));
label_32ee44:
    // 0x32ee44: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_32ee48:
    if (ctx->pc == 0x32EE48u) {
        ctx->pc = 0x32EE48u;
            // 0x32ee48: 0x8e230780  lw          $v1, 0x780($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1920)));
        ctx->pc = 0x32EE4Cu;
        goto label_32ee4c;
    }
    ctx->pc = 0x32EE44u;
    {
        const bool branch_taken_0x32ee44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ee44) {
            ctx->pc = 0x32EE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32EE44u;
            // 0x32ee48: 0x8e230780  lw          $v1, 0x780($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1920)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EE98u;
            goto label_32ee98;
        }
    }
    ctx->pc = 0x32EE4Cu;
label_32ee4c:
    // 0x32ee4c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x32ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_32ee50:
    // 0x32ee50: 0xc0b90e0  jal         func_2E4380
label_32ee54:
    if (ctx->pc == 0x32EE54u) {
        ctx->pc = 0x32EE54u;
            // 0x32ee54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32EE58u;
        goto label_32ee58;
    }
    ctx->pc = 0x32EE50u;
    SET_GPR_U32(ctx, 31, 0x32EE58u);
    ctx->pc = 0x32EE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EE50u;
            // 0x32ee54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EE58u; }
        if (ctx->pc != 0x32EE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EE58u; }
        if (ctx->pc != 0x32EE58u) { return; }
    }
    ctx->pc = 0x32EE58u;
label_32ee58:
    // 0x32ee58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_32ee5c:
    if (ctx->pc == 0x32EE5Cu) {
        ctx->pc = 0x32EE5Cu;
            // 0x32ee5c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x32EE60u;
        goto label_32ee60;
    }
    ctx->pc = 0x32EE58u;
    {
        const bool branch_taken_0x32ee58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ee58) {
            ctx->pc = 0x32EE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32EE58u;
            // 0x32ee5c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EE74u;
            goto label_32ee74;
        }
    }
    ctx->pc = 0x32EE60u;
label_32ee60:
    // 0x32ee60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32ee64:
    // 0x32ee64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ee68:
    // 0x32ee68: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x32ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_32ee6c:
    // 0x32ee6c: 0xa04300ef  sb          $v1, 0xEF($v0)
    ctx->pc = 0x32ee6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 239), (uint8_t)GPR_U32(ctx, 3));
label_32ee70:
    // 0x32ee70: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x32ee70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_32ee74:
    // 0x32ee74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x32ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32ee78:
    // 0x32ee78: 0xc0ca4b0  jal         func_3292C0
label_32ee7c:
    if (ctx->pc == 0x32EE7Cu) {
        ctx->pc = 0x32EE7Cu;
            // 0x32ee7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32EE80u;
        goto label_32ee80;
    }
    ctx->pc = 0x32EE78u;
    SET_GPR_U32(ctx, 31, 0x32EE80u);
    ctx->pc = 0x32EE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EE78u;
            // 0x32ee7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EE80u; }
        if (ctx->pc != 0x32EE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EE80u; }
        if (ctx->pc != 0x32EE80u) { return; }
    }
    ctx->pc = 0x32EE80u;
label_32ee80:
    // 0x32ee80: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x32ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_32ee84:
    // 0x32ee84: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x32ee84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_32ee88:
    // 0x32ee88: 0xc0ca4b0  jal         func_3292C0
label_32ee8c:
    if (ctx->pc == 0x32EE8Cu) {
        ctx->pc = 0x32EE8Cu;
            // 0x32ee8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32EE90u;
        goto label_32ee90;
    }
    ctx->pc = 0x32EE88u;
    SET_GPR_U32(ctx, 31, 0x32EE90u);
    ctx->pc = 0x32EE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EE88u;
            // 0x32ee8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EE90u; }
        if (ctx->pc != 0x32EE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EE90u; }
        if (ctx->pc != 0x32EE90u) { return; }
    }
    ctx->pc = 0x32EE90u;
label_32ee90:
    // 0x32ee90: 0x10000005  b           . + 4 + (0x5 << 2)
label_32ee94:
    if (ctx->pc == 0x32EE94u) {
        ctx->pc = 0x32EE98u;
        goto label_32ee98;
    }
    ctx->pc = 0x32EE90u;
    {
        const bool branch_taken_0x32ee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ee90) {
            ctx->pc = 0x32EEA8u;
            goto label_32eea8;
        }
    }
    ctx->pc = 0x32EE98u;
label_32ee98:
    // 0x32ee98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_32ee9c:
    // 0x32ee9c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x32ee9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32eea0:
    // 0x32eea0: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_32eea4:
    if (ctx->pc == 0x32EEA4u) {
        ctx->pc = 0x32EEA4u;
            // 0x32eea4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x32EEA8u;
        goto label_32eea8;
    }
    ctx->pc = 0x32EEA0u;
    {
        const bool branch_taken_0x32eea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EEA0u;
            // 0x32eea4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eea0) {
            ctx->pc = 0x32EE3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32ee3c;
        }
    }
    ctx->pc = 0x32EEA8u;
label_32eea8:
    // 0x32eea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32eeac:
    // 0x32eeac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32eeacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32eeb0:
    // 0x32eeb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32eeb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32eeb4:
    // 0x32eeb4: 0x3e00008  jr          $ra
label_32eeb8:
    if (ctx->pc == 0x32EEB8u) {
        ctx->pc = 0x32EEB8u;
            // 0x32eeb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32EEBCu;
        goto label_32eebc;
    }
    ctx->pc = 0x32EEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EEB4u;
            // 0x32eeb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32EEBCu;
label_32eebc:
    // 0x32eebc: 0x0  nop
    ctx->pc = 0x32eebcu;
    // NOP
label_32eec0:
    // 0x32eec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32eec4:
    // 0x32eec4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32eec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_32eec8:
    // 0x32eec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32eec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32eecc:
    // 0x32eecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32eeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32eed0:
    // 0x32eed0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32eed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32eed4:
    // 0x32eed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32eed8:
    // 0x32eed8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32eed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32eedc:
    // 0x32eedc: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x32eedcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_32eee0:
    // 0x32eee0: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x32eee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_32eee4:
    // 0x32eee4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32eee8:
    // 0x32eee8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32eee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32eeec:
    // 0x32eeec: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x32eeecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_32eef0:
    // 0x32eef0: 0x320f809  jalr        $t9
label_32eef4:
    if (ctx->pc == 0x32EEF4u) {
        ctx->pc = 0x32EEF4u;
            // 0x32eef4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x32EEF8u;
        goto label_32eef8;
    }
    ctx->pc = 0x32EEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EEF8u);
        ctx->pc = 0x32EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EEF0u;
            // 0x32eef4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EEF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EEF8u; }
            if (ctx->pc != 0x32EEF8u) { return; }
        }
        }
    }
    ctx->pc = 0x32EEF8u;
label_32eef8:
    // 0x32eef8: 0xc0761d4  jal         func_1D8750
label_32eefc:
    if (ctx->pc == 0x32EEFCu) {
        ctx->pc = 0x32EEFCu;
            // 0x32eefc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x32EF00u;
        goto label_32ef00;
    }
    ctx->pc = 0x32EEF8u;
    SET_GPR_U32(ctx, 31, 0x32EF00u);
    ctx->pc = 0x32EEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EEF8u;
            // 0x32eefc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8750u;
    if (runtime->hasFunction(0x1D8750u)) {
        auto targetFn = runtime->lookupFunction(0x1D8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EF00u; }
        if (ctx->pc != 0x32EF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8750_0x1d8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EF00u; }
        if (ctx->pc != 0x32EF00u) { return; }
    }
    ctx->pc = 0x32EF00u;
label_32ef00:
    // 0x32ef00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32ef04:
    // 0x32ef04: 0xc07626c  jal         func_1D89B0
label_32ef08:
    if (ctx->pc == 0x32EF08u) {
        ctx->pc = 0x32EF08u;
            // 0x32ef08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32EF0Cu;
        goto label_32ef0c;
    }
    ctx->pc = 0x32EF04u;
    SET_GPR_U32(ctx, 31, 0x32EF0Cu);
    ctx->pc = 0x32EF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EF04u;
            // 0x32ef08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EF0Cu; }
        if (ctx->pc != 0x32EF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EF0Cu; }
        if (ctx->pc != 0x32EF0Cu) { return; }
    }
    ctx->pc = 0x32EF0Cu;
label_32ef0c:
    // 0x32ef0c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32ef10:
    // 0x32ef10: 0xc07626c  jal         func_1D89B0
label_32ef14:
    if (ctx->pc == 0x32EF14u) {
        ctx->pc = 0x32EF14u;
            // 0x32ef14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32EF18u;
        goto label_32ef18;
    }
    ctx->pc = 0x32EF10u;
    SET_GPR_U32(ctx, 31, 0x32EF18u);
    ctx->pc = 0x32EF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32EF10u;
            // 0x32ef14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EF18u; }
        if (ctx->pc != 0x32EF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32EF18u; }
        if (ctx->pc != 0x32EF18u) { return; }
    }
    ctx->pc = 0x32EF18u;
label_32ef18:
    // 0x32ef18: 0x8e42077c  lw          $v0, 0x77C($s2)
    ctx->pc = 0x32ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
label_32ef1c:
    // 0x32ef1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32ef1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32ef20:
    // 0x32ef20: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x32ef20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32ef24:
    // 0x32ef24: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_32ef28:
    if (ctx->pc == 0x32EF28u) {
        ctx->pc = 0x32EF28u;
            // 0x32ef28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x32EF2Cu;
        goto label_32ef2c;
    }
    ctx->pc = 0x32EF24u;
    {
        const bool branch_taken_0x32ef24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EF24u;
            // 0x32ef28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef24) {
            ctx->pc = 0x32EEE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32eee4;
        }
    }
    ctx->pc = 0x32EF2Cu;
label_32ef2c:
    // 0x32ef2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32ef30:
    // 0x32ef30: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x32ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_32ef34:
    // 0x32ef34: 0x8c440144  lw          $a0, 0x144($v0)
    ctx->pc = 0x32ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_32ef38:
    // 0x32ef38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32ef38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32ef3c:
    // 0x32ef3c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x32ef3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_32ef40:
    // 0x32ef40: 0x320f809  jalr        $t9
label_32ef44:
    if (ctx->pc == 0x32EF44u) {
        ctx->pc = 0x32EF48u;
        goto label_32ef48;
    }
    ctx->pc = 0x32EF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EF48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EF48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EF48u; }
            if (ctx->pc != 0x32EF48u) { return; }
        }
        }
    }
    ctx->pc = 0x32EF48u;
label_32ef48:
    // 0x32ef48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32ef4c:
    // 0x32ef4c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x32ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_32ef50:
    // 0x32ef50: 0x8c440148  lw          $a0, 0x148($v0)
    ctx->pc = 0x32ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_32ef54:
    // 0x32ef54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32ef54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32ef58:
    // 0x32ef58: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x32ef58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_32ef5c:
    // 0x32ef5c: 0x320f809  jalr        $t9
label_32ef60:
    if (ctx->pc == 0x32EF60u) {
        ctx->pc = 0x32EF64u;
        goto label_32ef64;
    }
    ctx->pc = 0x32EF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32EF64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32EF64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32EF64u; }
            if (ctx->pc != 0x32EF64u) { return; }
        }
        }
    }
    ctx->pc = 0x32EF64u;
label_32ef64:
    // 0x32ef64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32ef64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32ef68:
    // 0x32ef68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32ef68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32ef6c:
    // 0x32ef6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32ef6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ef70:
    // 0x32ef70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ef70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32ef74:
    // 0x32ef74: 0x3e00008  jr          $ra
label_32ef78:
    if (ctx->pc == 0x32EF78u) {
        ctx->pc = 0x32EF78u;
            // 0x32ef78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x32EF7Cu;
        goto label_32ef7c;
    }
    ctx->pc = 0x32EF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EF74u;
            // 0x32ef78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32EF7Cu;
label_32ef7c:
    // 0x32ef7c: 0x0  nop
    ctx->pc = 0x32ef7cu;
    // NOP
label_32ef80:
    // 0x32ef80: 0x8c850c5c  lw          $a1, 0xC5C($a0)
    ctx->pc = 0x32ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3164)));
label_32ef84:
    // 0x32ef84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32ef88:
    // 0x32ef88: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x32ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32ef8c:
    // 0x32ef8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x32ef8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_32ef90:
    // 0x32ef90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32ef94:
    // 0x32ef94: 0xac850c5c  sw          $a1, 0xC5C($a0)
    ctx->pc = 0x32ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3164), GPR_U32(ctx, 5));
label_32ef98:
    // 0x32ef98: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x32ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_32ef9c:
    // 0x32ef9c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x32ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_32efa0:
    // 0x32efa0: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_32efa4:
    if (ctx->pc == 0x32EFA4u) {
        ctx->pc = 0x32EFA4u;
            // 0x32efa4: 0x8c830968  lw          $v1, 0x968($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
        ctx->pc = 0x32EFA8u;
        goto label_32efa8;
    }
    ctx->pc = 0x32EFA0u;
    {
        const bool branch_taken_0x32efa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32efa0) {
            ctx->pc = 0x32EFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32EFA0u;
            // 0x32efa4: 0x8c830968  lw          $v1, 0x968($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EFB0u;
            goto label_32efb0;
        }
    }
    ctx->pc = 0x32EFA8u;
label_32efa8:
    // 0x32efa8: 0x10000008  b           . + 4 + (0x8 << 2)
label_32efac:
    if (ctx->pc == 0x32EFACu) {
        ctx->pc = 0x32EFACu;
            // 0x32efac: 0x3c024425  lui         $v0, 0x4425 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17445 << 16));
        ctx->pc = 0x32EFB0u;
        goto label_32efb0;
    }
    ctx->pc = 0x32EFA8u;
    {
        const bool branch_taken_0x32efa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EFA8u;
            // 0x32efac: 0x3c024425  lui         $v0, 0x4425 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17445 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32efa8) {
            ctx->pc = 0x32EFCCu;
            goto label_32efcc;
        }
    }
    ctx->pc = 0x32EFB0u;
label_32efb0:
    // 0x32efb0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x32efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_32efb4:
    // 0x32efb4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_32efb8:
    if (ctx->pc == 0x32EFB8u) {
        ctx->pc = 0x32EFB8u;
            // 0x32efb8: 0x3c0243d2  lui         $v0, 0x43D2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17362 << 16));
        ctx->pc = 0x32EFBCu;
        goto label_32efbc;
    }
    ctx->pc = 0x32EFB4u;
    {
        const bool branch_taken_0x32efb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32efb4) {
            ctx->pc = 0x32EFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32EFB4u;
            // 0x32efb8: 0x3c0243d2  lui         $v0, 0x43D2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17362 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32EFC4u;
            goto label_32efc4;
        }
    }
    ctx->pc = 0x32EFBCu;
label_32efbc:
    // 0x32efbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_32efc0:
    if (ctx->pc == 0x32EFC0u) {
        ctx->pc = 0x32EFC4u;
        goto label_32efc4;
    }
    ctx->pc = 0x32EFBCu;
    {
        const bool branch_taken_0x32efbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32efbc) {
            ctx->pc = 0x32EFC8u;
            goto label_32efc8;
        }
    }
    ctx->pc = 0x32EFC4u;
label_32efc4:
    // 0x32efc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32efc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_32efc8:
    // 0x32efc8: 0x3c024425  lui         $v0, 0x4425
    ctx->pc = 0x32efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17445 << 16));
label_32efcc:
    // 0x32efcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32efccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32efd0:
    // 0x32efd0: 0x0  nop
    ctx->pc = 0x32efd0u;
    // NOP
label_32efd4:
    // 0x32efd4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x32efd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_32efd8:
    // 0x32efd8: 0xc4800c5c  lwc1        $f0, 0xC5C($a0)
    ctx->pc = 0x32efd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32efdc:
    // 0x32efdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32efdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32efe0:
    // 0x32efe0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32efe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32efe4:
    // 0x32efe4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_32efe8:
    if (ctx->pc == 0x32EFE8u) {
        ctx->pc = 0x32EFE8u;
            // 0x32efe8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32EFECu;
        goto label_32efec;
    }
    ctx->pc = 0x32EFE4u;
    {
        const bool branch_taken_0x32efe4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32EFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EFE4u;
            // 0x32efe8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32efe4) {
            ctx->pc = 0x32EFF0u;
            goto label_32eff0;
        }
    }
    ctx->pc = 0x32EFECu;
label_32efec:
    // 0x32efec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32efecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32eff0:
    // 0x32eff0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32eff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32eff4:
    // 0x32eff4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x32eff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_32eff8:
    // 0x32eff8: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x32eff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_32effc:
    // 0x32effc: 0x3200008  jr          $t9
label_32f000:
    if (ctx->pc == 0x32F000u) {
        ctx->pc = 0x32F004u;
        goto label_32f004;
    }
    ctx->pc = 0x32EFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32F004u;
label_32f004:
    // 0x32f004: 0x0  nop
    ctx->pc = 0x32f004u;
    // NOP
label_32f008:
    // 0x32f008: 0x0  nop
    ctx->pc = 0x32f008u;
    // NOP
label_32f00c:
    // 0x32f00c: 0x0  nop
    ctx->pc = 0x32f00cu;
    // NOP
}
