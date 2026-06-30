#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051ED40
// Address: 0x51ed40 - 0x51efa0
void sub_0051ED40_0x51ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051ED40_0x51ed40");
#endif

    switch (ctx->pc) {
        case 0x51ed40u: goto label_51ed40;
        case 0x51ed44u: goto label_51ed44;
        case 0x51ed48u: goto label_51ed48;
        case 0x51ed4cu: goto label_51ed4c;
        case 0x51ed50u: goto label_51ed50;
        case 0x51ed54u: goto label_51ed54;
        case 0x51ed58u: goto label_51ed58;
        case 0x51ed5cu: goto label_51ed5c;
        case 0x51ed60u: goto label_51ed60;
        case 0x51ed64u: goto label_51ed64;
        case 0x51ed68u: goto label_51ed68;
        case 0x51ed6cu: goto label_51ed6c;
        case 0x51ed70u: goto label_51ed70;
        case 0x51ed74u: goto label_51ed74;
        case 0x51ed78u: goto label_51ed78;
        case 0x51ed7cu: goto label_51ed7c;
        case 0x51ed80u: goto label_51ed80;
        case 0x51ed84u: goto label_51ed84;
        case 0x51ed88u: goto label_51ed88;
        case 0x51ed8cu: goto label_51ed8c;
        case 0x51ed90u: goto label_51ed90;
        case 0x51ed94u: goto label_51ed94;
        case 0x51ed98u: goto label_51ed98;
        case 0x51ed9cu: goto label_51ed9c;
        case 0x51eda0u: goto label_51eda0;
        case 0x51eda4u: goto label_51eda4;
        case 0x51eda8u: goto label_51eda8;
        case 0x51edacu: goto label_51edac;
        case 0x51edb0u: goto label_51edb0;
        case 0x51edb4u: goto label_51edb4;
        case 0x51edb8u: goto label_51edb8;
        case 0x51edbcu: goto label_51edbc;
        case 0x51edc0u: goto label_51edc0;
        case 0x51edc4u: goto label_51edc4;
        case 0x51edc8u: goto label_51edc8;
        case 0x51edccu: goto label_51edcc;
        case 0x51edd0u: goto label_51edd0;
        case 0x51edd4u: goto label_51edd4;
        case 0x51edd8u: goto label_51edd8;
        case 0x51eddcu: goto label_51eddc;
        case 0x51ede0u: goto label_51ede0;
        case 0x51ede4u: goto label_51ede4;
        case 0x51ede8u: goto label_51ede8;
        case 0x51edecu: goto label_51edec;
        case 0x51edf0u: goto label_51edf0;
        case 0x51edf4u: goto label_51edf4;
        case 0x51edf8u: goto label_51edf8;
        case 0x51edfcu: goto label_51edfc;
        case 0x51ee00u: goto label_51ee00;
        case 0x51ee04u: goto label_51ee04;
        case 0x51ee08u: goto label_51ee08;
        case 0x51ee0cu: goto label_51ee0c;
        case 0x51ee10u: goto label_51ee10;
        case 0x51ee14u: goto label_51ee14;
        case 0x51ee18u: goto label_51ee18;
        case 0x51ee1cu: goto label_51ee1c;
        case 0x51ee20u: goto label_51ee20;
        case 0x51ee24u: goto label_51ee24;
        case 0x51ee28u: goto label_51ee28;
        case 0x51ee2cu: goto label_51ee2c;
        case 0x51ee30u: goto label_51ee30;
        case 0x51ee34u: goto label_51ee34;
        case 0x51ee38u: goto label_51ee38;
        case 0x51ee3cu: goto label_51ee3c;
        case 0x51ee40u: goto label_51ee40;
        case 0x51ee44u: goto label_51ee44;
        case 0x51ee48u: goto label_51ee48;
        case 0x51ee4cu: goto label_51ee4c;
        case 0x51ee50u: goto label_51ee50;
        case 0x51ee54u: goto label_51ee54;
        case 0x51ee58u: goto label_51ee58;
        case 0x51ee5cu: goto label_51ee5c;
        case 0x51ee60u: goto label_51ee60;
        case 0x51ee64u: goto label_51ee64;
        case 0x51ee68u: goto label_51ee68;
        case 0x51ee6cu: goto label_51ee6c;
        case 0x51ee70u: goto label_51ee70;
        case 0x51ee74u: goto label_51ee74;
        case 0x51ee78u: goto label_51ee78;
        case 0x51ee7cu: goto label_51ee7c;
        case 0x51ee80u: goto label_51ee80;
        case 0x51ee84u: goto label_51ee84;
        case 0x51ee88u: goto label_51ee88;
        case 0x51ee8cu: goto label_51ee8c;
        case 0x51ee90u: goto label_51ee90;
        case 0x51ee94u: goto label_51ee94;
        case 0x51ee98u: goto label_51ee98;
        case 0x51ee9cu: goto label_51ee9c;
        case 0x51eea0u: goto label_51eea0;
        case 0x51eea4u: goto label_51eea4;
        case 0x51eea8u: goto label_51eea8;
        case 0x51eeacu: goto label_51eeac;
        case 0x51eeb0u: goto label_51eeb0;
        case 0x51eeb4u: goto label_51eeb4;
        case 0x51eeb8u: goto label_51eeb8;
        case 0x51eebcu: goto label_51eebc;
        case 0x51eec0u: goto label_51eec0;
        case 0x51eec4u: goto label_51eec4;
        case 0x51eec8u: goto label_51eec8;
        case 0x51eeccu: goto label_51eecc;
        case 0x51eed0u: goto label_51eed0;
        case 0x51eed4u: goto label_51eed4;
        case 0x51eed8u: goto label_51eed8;
        case 0x51eedcu: goto label_51eedc;
        case 0x51eee0u: goto label_51eee0;
        case 0x51eee4u: goto label_51eee4;
        case 0x51eee8u: goto label_51eee8;
        case 0x51eeecu: goto label_51eeec;
        case 0x51eef0u: goto label_51eef0;
        case 0x51eef4u: goto label_51eef4;
        case 0x51eef8u: goto label_51eef8;
        case 0x51eefcu: goto label_51eefc;
        case 0x51ef00u: goto label_51ef00;
        case 0x51ef04u: goto label_51ef04;
        case 0x51ef08u: goto label_51ef08;
        case 0x51ef0cu: goto label_51ef0c;
        case 0x51ef10u: goto label_51ef10;
        case 0x51ef14u: goto label_51ef14;
        case 0x51ef18u: goto label_51ef18;
        case 0x51ef1cu: goto label_51ef1c;
        case 0x51ef20u: goto label_51ef20;
        case 0x51ef24u: goto label_51ef24;
        case 0x51ef28u: goto label_51ef28;
        case 0x51ef2cu: goto label_51ef2c;
        case 0x51ef30u: goto label_51ef30;
        case 0x51ef34u: goto label_51ef34;
        case 0x51ef38u: goto label_51ef38;
        case 0x51ef3cu: goto label_51ef3c;
        case 0x51ef40u: goto label_51ef40;
        case 0x51ef44u: goto label_51ef44;
        case 0x51ef48u: goto label_51ef48;
        case 0x51ef4cu: goto label_51ef4c;
        case 0x51ef50u: goto label_51ef50;
        case 0x51ef54u: goto label_51ef54;
        case 0x51ef58u: goto label_51ef58;
        case 0x51ef5cu: goto label_51ef5c;
        case 0x51ef60u: goto label_51ef60;
        case 0x51ef64u: goto label_51ef64;
        case 0x51ef68u: goto label_51ef68;
        case 0x51ef6cu: goto label_51ef6c;
        case 0x51ef70u: goto label_51ef70;
        case 0x51ef74u: goto label_51ef74;
        case 0x51ef78u: goto label_51ef78;
        case 0x51ef7cu: goto label_51ef7c;
        case 0x51ef80u: goto label_51ef80;
        case 0x51ef84u: goto label_51ef84;
        case 0x51ef88u: goto label_51ef88;
        case 0x51ef8cu: goto label_51ef8c;
        case 0x51ef90u: goto label_51ef90;
        case 0x51ef94u: goto label_51ef94;
        case 0x51ef98u: goto label_51ef98;
        case 0x51ef9cu: goto label_51ef9c;
        default: break;
    }

    ctx->pc = 0x51ed40u;

label_51ed40:
    // 0x51ed40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x51ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_51ed44:
    // 0x51ed44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_51ed48:
    // 0x51ed48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51ed4c:
    // 0x51ed4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51ed50:
    // 0x51ed50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x51ed50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51ed54:
    // 0x51ed54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51ed58:
    // 0x51ed58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51ed5c:
    // 0x51ed5c: 0xac8601c8  sw          $a2, 0x1C8($a0)
    ctx->pc = 0x51ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 6));
label_51ed60:
    // 0x51ed60: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x51ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_51ed64:
    // 0x51ed64: 0xc04c968  jal         func_1325A0
label_51ed68:
    if (ctx->pc == 0x51ED68u) {
        ctx->pc = 0x51ED68u;
            // 0x51ed68: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x51ED6Cu;
        goto label_51ed6c;
    }
    ctx->pc = 0x51ED64u;
    SET_GPR_U32(ctx, 31, 0x51ED6Cu);
    ctx->pc = 0x51ED68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51ED64u;
            // 0x51ed68: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ED6Cu; }
        if (ctx->pc != 0x51ED6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ED6Cu; }
        if (ctx->pc != 0x51ED6Cu) { return; }
    }
    ctx->pc = 0x51ED6Cu;
label_51ed6c:
    // 0x51ed6c: 0xc040180  jal         func_100600
label_51ed70:
    if (ctx->pc == 0x51ED70u) {
        ctx->pc = 0x51ED70u;
            // 0x51ed70: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x51ED74u;
        goto label_51ed74;
    }
    ctx->pc = 0x51ED6Cu;
    SET_GPR_U32(ctx, 31, 0x51ED74u);
    ctx->pc = 0x51ED70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51ED6Cu;
            // 0x51ed70: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ED74u; }
        if (ctx->pc != 0x51ED74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ED74u; }
        if (ctx->pc != 0x51ED74u) { return; }
    }
    ctx->pc = 0x51ED74u;
label_51ed74:
    // 0x51ed74: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_51ed78:
    if (ctx->pc == 0x51ED78u) {
        ctx->pc = 0x51ED78u;
            // 0x51ed78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51ED7Cu;
        goto label_51ed7c;
    }
    ctx->pc = 0x51ED74u;
    {
        const bool branch_taken_0x51ed74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51ED74u;
            // 0x51ed78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ed74) {
            ctx->pc = 0x51EDF8u;
            goto label_51edf8;
        }
    }
    ctx->pc = 0x51ED7Cu;
label_51ed7c:
    // 0x51ed7c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x51ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_51ed80:
    // 0x51ed80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x51ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_51ed84:
    // 0x51ed84: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x51ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_51ed88:
    // 0x51ed88: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x51ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_51ed8c:
    // 0x51ed8c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x51ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_51ed90:
    // 0x51ed90: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x51ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_51ed94:
    // 0x51ed94: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x51ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_51ed98:
    // 0x51ed98: 0xc040138  jal         func_1004E0
label_51ed9c:
    if (ctx->pc == 0x51ED9Cu) {
        ctx->pc = 0x51ED9Cu;
            // 0x51ed9c: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x51EDA0u;
        goto label_51eda0;
    }
    ctx->pc = 0x51ED98u;
    SET_GPR_U32(ctx, 31, 0x51EDA0u);
    ctx->pc = 0x51ED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51ED98u;
            // 0x51ed9c: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EDA0u; }
        if (ctx->pc != 0x51EDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EDA0u; }
        if (ctx->pc != 0x51EDA0u) { return; }
    }
    ctx->pc = 0x51EDA0u;
label_51eda0:
    // 0x51eda0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_51eda4:
    // 0x51eda4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x51eda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51eda8:
    // 0x51eda8: 0xc040138  jal         func_1004E0
label_51edac:
    if (ctx->pc == 0x51EDACu) {
        ctx->pc = 0x51EDACu;
            // 0x51edac: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x51EDB0u;
        goto label_51edb0;
    }
    ctx->pc = 0x51EDA8u;
    SET_GPR_U32(ctx, 31, 0x51EDB0u);
    ctx->pc = 0x51EDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EDA8u;
            // 0x51edac: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EDB0u; }
        if (ctx->pc != 0x51EDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EDB0u; }
        if (ctx->pc != 0x51EDB0u) { return; }
    }
    ctx->pc = 0x51EDB0u;
label_51edb0:
    // 0x51edb0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x51edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_51edb4:
    // 0x51edb4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x51edb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_51edb8:
    // 0x51edb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51edb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51edbc:
    // 0x51edbc: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x51edbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_51edc0:
    // 0x51edc0: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x51edc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_51edc4:
    // 0x51edc4: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x51edc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_51edc8:
    // 0x51edc8: 0xc040840  jal         func_102100
label_51edcc:
    if (ctx->pc == 0x51EDCCu) {
        ctx->pc = 0x51EDCCu;
            // 0x51edcc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x51EDD0u;
        goto label_51edd0;
    }
    ctx->pc = 0x51EDC8u;
    SET_GPR_U32(ctx, 31, 0x51EDD0u);
    ctx->pc = 0x51EDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EDC8u;
            // 0x51edcc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EDD0u; }
        if (ctx->pc != 0x51EDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EDD0u; }
        if (ctx->pc != 0x51EDD0u) { return; }
    }
    ctx->pc = 0x51EDD0u;
label_51edd0:
    // 0x51edd0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x51edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_51edd4:
    // 0x51edd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x51edd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51edd8:
    // 0x51edd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x51edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_51eddc:
    // 0x51eddc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x51eddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_51ede0:
    // 0x51ede0: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x51ede0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_51ede4:
    // 0x51ede4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x51ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_51ede8:
    // 0x51ede8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x51ede8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_51edec:
    // 0x51edec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_51edf0:
    if (ctx->pc == 0x51EDF0u) {
        ctx->pc = 0x51EDF4u;
        goto label_51edf4;
    }
    ctx->pc = 0x51EDECu;
    {
        const bool branch_taken_0x51edec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51edec) {
            ctx->pc = 0x51EDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51edd8;
        }
    }
    ctx->pc = 0x51EDF4u;
label_51edf4:
    // 0x51edf4: 0x0  nop
    ctx->pc = 0x51edf4u;
    // NOP
label_51edf8:
    // 0x51edf8: 0xae700210  sw          $s0, 0x210($s3)
    ctx->pc = 0x51edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 16));
label_51edfc:
    // 0x51edfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x51edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51ee00:
    // 0x51ee00: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x51ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_51ee04:
    // 0x51ee04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51ee04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51ee08:
    // 0x51ee08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x51ee08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51ee0c:
    // 0x51ee0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x51ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_51ee10:
    // 0x51ee10: 0xc0e7d2c  jal         func_39F4B0
label_51ee14:
    if (ctx->pc == 0x51EE14u) {
        ctx->pc = 0x51EE14u;
            // 0x51ee14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51EE18u;
        goto label_51ee18;
    }
    ctx->pc = 0x51EE10u;
    SET_GPR_U32(ctx, 31, 0x51EE18u);
    ctx->pc = 0x51EE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EE10u;
            // 0x51ee14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EE18u; }
        if (ctx->pc != 0x51EE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EE18u; }
        if (ctx->pc != 0x51EE18u) { return; }
    }
    ctx->pc = 0x51EE18u;
label_51ee18:
    // 0x51ee18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x51ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51ee1c:
    // 0x51ee1c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x51ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_51ee20:
    // 0x51ee20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51ee20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51ee24:
    // 0x51ee24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x51ee24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_51ee28:
    // 0x51ee28: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x51ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_51ee2c:
    // 0x51ee2c: 0xc0e7d2c  jal         func_39F4B0
label_51ee30:
    if (ctx->pc == 0x51EE30u) {
        ctx->pc = 0x51EE30u;
            // 0x51ee30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51EE34u;
        goto label_51ee34;
    }
    ctx->pc = 0x51EE2Cu;
    SET_GPR_U32(ctx, 31, 0x51EE34u);
    ctx->pc = 0x51EE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EE2Cu;
            // 0x51ee30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EE34u; }
        if (ctx->pc != 0x51EE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EE34u; }
        if (ctx->pc != 0x51EE34u) { return; }
    }
    ctx->pc = 0x51EE34u;
label_51ee34:
    // 0x51ee34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51ee38:
    // 0x51ee38: 0x8c420d20  lw          $v0, 0xD20($v0)
    ctx->pc = 0x51ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3360)));
label_51ee3c:
    // 0x51ee3c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x51ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_51ee40:
    // 0x51ee40: 0x8c470030  lw          $a3, 0x30($v0)
    ctx->pc = 0x51ee40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_51ee44:
    // 0x51ee44: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x51ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_51ee48:
    // 0x51ee48: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51ee4c:
    // 0x51ee4c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x51ee4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51ee50:
    // 0x51ee50: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x51ee50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_51ee54:
    // 0x51ee54: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x51ee54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_51ee58:
    // 0x51ee58: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x51ee58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_51ee5c:
    // 0x51ee5c: 0x8c43ce58  lw          $v1, -0x31A8($v0)
    ctx->pc = 0x51ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954584)));
label_51ee60:
    // 0x51ee60: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x51ee60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_51ee64:
    // 0x51ee64: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x51ee64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_51ee68:
    // 0x51ee68: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x51ee68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_51ee6c:
    // 0x51ee6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x51ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_51ee70:
    // 0x51ee70: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x51ee70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_51ee74:
    // 0x51ee74: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x51ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_51ee78:
    // 0x51ee78: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x51ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51ee7c:
    // 0x51ee7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x51ee7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_51ee80:
    // 0x51ee80: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x51ee80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51ee84:
    // 0x51ee84: 0x1d00fff3  bgtz        $t0, . + 4 + (-0xD << 2)
label_51ee88:
    if (ctx->pc == 0x51EE88u) {
        ctx->pc = 0x51EE88u;
            // 0x51ee88: 0xa0c30020  sb          $v1, 0x20($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x51EE8Cu;
        goto label_51ee8c;
    }
    ctx->pc = 0x51EE84u;
    {
        const bool branch_taken_0x51ee84 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x51EE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EE84u;
            // 0x51ee88: 0xa0c30020  sb          $v1, 0x20($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ee84) {
            ctx->pc = 0x51EE54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51ee54;
        }
    }
    ctx->pc = 0x51EE8Cu;
label_51ee8c:
    // 0x51ee8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51ee90:
    // 0x51ee90: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_51ee94:
    // 0x51ee94: 0xa2630220  sb          $v1, 0x220($s3)
    ctx->pc = 0x51ee94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 544), (uint8_t)GPR_U32(ctx, 3));
label_51ee98:
    // 0x51ee98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x51ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_51ee9c:
    // 0x51ee9c: 0xae6301c0  sw          $v1, 0x1C0($s3)
    ctx->pc = 0x51ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 3));
label_51eea0:
    // 0x51eea0: 0x26640230  addiu       $a0, $s3, 0x230
    ctx->pc = 0x51eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
label_51eea4:
    // 0x51eea4: 0x24a5c5d0  addiu       $a1, $a1, -0x3A30
    ctx->pc = 0x51eea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952400));
label_51eea8:
    // 0x51eea8: 0xc04cce8  jal         func_1333A0
label_51eeac:
    if (ctx->pc == 0x51EEACu) {
        ctx->pc = 0x51EEACu;
            // 0x51eeac: 0xae6201c4  sw          $v0, 0x1C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 2));
        ctx->pc = 0x51EEB0u;
        goto label_51eeb0;
    }
    ctx->pc = 0x51EEA8u;
    SET_GPR_U32(ctx, 31, 0x51EEB0u);
    ctx->pc = 0x51EEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EEA8u;
            // 0x51eeac: 0xae6201c4  sw          $v0, 0x1C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EEB0u; }
        if (ctx->pc != 0x51EEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EEB0u; }
        if (ctx->pc != 0x51EEB0u) { return; }
    }
    ctx->pc = 0x51EEB0u;
label_51eeb0:
    // 0x51eeb0: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x51eeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_51eeb4:
    // 0x51eeb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x51eeb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51eeb8:
    // 0x51eeb8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x51eeb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51eebc:
    // 0x51eebc: 0x2610c4a0  addiu       $s0, $s0, -0x3B60
    ctx->pc = 0x51eebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952096));
label_51eec0:
    // 0x51eec0: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x51eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_51eec4:
    // 0x51eec4: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_51eec8:
    if (ctx->pc == 0x51EEC8u) {
        ctx->pc = 0x51EECCu;
        goto label_51eecc;
    }
    ctx->pc = 0x51EEC4u;
    {
        const bool branch_taken_0x51eec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51eec4) {
            ctx->pc = 0x51EF48u;
            goto label_51ef48;
        }
    }
    ctx->pc = 0x51EECCu;
label_51eecc:
    // 0x51eecc: 0xc040180  jal         func_100600
label_51eed0:
    if (ctx->pc == 0x51EED0u) {
        ctx->pc = 0x51EED0u;
            // 0x51eed0: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x51EED4u;
        goto label_51eed4;
    }
    ctx->pc = 0x51EECCu;
    SET_GPR_U32(ctx, 31, 0x51EED4u);
    ctx->pc = 0x51EED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EECCu;
            // 0x51eed0: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EED4u; }
        if (ctx->pc != 0x51EED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EED4u; }
        if (ctx->pc != 0x51EED4u) { return; }
    }
    ctx->pc = 0x51EED4u;
label_51eed4:
    // 0x51eed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51eed8:
    // 0x51eed8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_51eedc:
    if (ctx->pc == 0x51EEDCu) {
        ctx->pc = 0x51EEE0u;
        goto label_51eee0;
    }
    ctx->pc = 0x51EED8u;
    {
        const bool branch_taken_0x51eed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51eed8) {
            ctx->pc = 0x51EEF8u;
            goto label_51eef8;
        }
    }
    ctx->pc = 0x51EEE0u;
label_51eee0:
    // 0x51eee0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x51eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_51eee4:
    // 0x51eee4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x51eee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51eee8:
    // 0x51eee8: 0xc0c3f60  jal         func_30FD80
label_51eeec:
    if (ctx->pc == 0x51EEECu) {
        ctx->pc = 0x51EEECu;
            // 0x51eeec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51EEF0u;
        goto label_51eef0;
    }
    ctx->pc = 0x51EEE8u;
    SET_GPR_U32(ctx, 31, 0x51EEF0u);
    ctx->pc = 0x51EEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EEE8u;
            // 0x51eeec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EEF0u; }
        if (ctx->pc != 0x51EEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EEF0u; }
        if (ctx->pc != 0x51EEF0u) { return; }
    }
    ctx->pc = 0x51EEF0u;
label_51eef0:
    // 0x51eef0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51eef4:
    // 0x51eef4: 0x0  nop
    ctx->pc = 0x51eef4u;
    // NOP
label_51eef8:
    // 0x51eef8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_51eefc:
    // 0x51eefc: 0xae240270  sw          $a0, 0x270($s1)
    ctx->pc = 0x51eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 4));
label_51ef00:
    // 0x51ef00: 0x24a5c520  addiu       $a1, $a1, -0x3AE0
    ctx->pc = 0x51ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952224));
label_51ef04:
    // 0x51ef04: 0xac8500d4  sw          $a1, 0xD4($a0)
    ctx->pc = 0x51ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 5));
label_51ef08:
    // 0x51ef08: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x51ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_51ef0c:
    // 0x51ef0c: 0x8e270270  lw          $a3, 0x270($s1)
    ctx->pc = 0x51ef0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_51ef10:
    // 0x51ef10: 0x26650230  addiu       $a1, $s3, 0x230
    ctx->pc = 0x51ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
label_51ef14:
    // 0x51ef14: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x51ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_51ef18:
    // 0x51ef18: 0x94e60064  lhu         $a2, 0x64($a3)
    ctx->pc = 0x51ef18u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 100)));
label_51ef1c:
    // 0x51ef1c: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x51ef1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
label_51ef20:
    // 0x51ef20: 0xa4e60064  sh          $a2, 0x64($a3)
    ctx->pc = 0x51ef20u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 100), (uint16_t)GPR_U32(ctx, 6));
label_51ef24:
    // 0x51ef24: 0x8c630d20  lw          $v1, 0xD20($v1)
    ctx->pc = 0x51ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3360)));
label_51ef28:
    // 0x51ef28: 0x8e260270  lw          $a2, 0x270($s1)
    ctx->pc = 0x51ef28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_51ef2c:
    // 0x51ef2c: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x51ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_51ef30:
    // 0x51ef30: 0xacc30080  sw          $v1, 0x80($a2)
    ctx->pc = 0x51ef30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 3));
label_51ef34:
    // 0x51ef34: 0xacc00084  sw          $zero, 0x84($a2)
    ctx->pc = 0x51ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
label_51ef38:
    // 0x51ef38: 0xacc50088  sw          $a1, 0x88($a2)
    ctx->pc = 0x51ef38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 5));
label_51ef3c:
    // 0x51ef3c: 0xacc0008c  sw          $zero, 0x8C($a2)
    ctx->pc = 0x51ef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
label_51ef40:
    // 0x51ef40: 0xacc40090  sw          $a0, 0x90($a2)
    ctx->pc = 0x51ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 4));
label_51ef44:
    // 0x51ef44: 0x0  nop
    ctx->pc = 0x51ef44u;
    // NOP
label_51ef48:
    // 0x51ef48: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x51ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_51ef4c:
    // 0x51ef4c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_51ef50:
    if (ctx->pc == 0x51EF50u) {
        ctx->pc = 0x51EF54u;
        goto label_51ef54;
    }
    ctx->pc = 0x51EF4Cu;
    {
        const bool branch_taken_0x51ef4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ef4c) {
            ctx->pc = 0x51EF68u;
            goto label_51ef68;
        }
    }
    ctx->pc = 0x51EF54u;
label_51ef54:
    // 0x51ef54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51ef54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51ef58:
    // 0x51ef58: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x51ef58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_51ef5c:
    // 0x51ef5c: 0x320f809  jalr        $t9
label_51ef60:
    if (ctx->pc == 0x51EF60u) {
        ctx->pc = 0x51EF64u;
        goto label_51ef64;
    }
    ctx->pc = 0x51EF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51EF64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x51EF64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51EF64u; }
            if (ctx->pc != 0x51EF64u) { return; }
        }
        }
    }
    ctx->pc = 0x51EF64u;
label_51ef64:
    // 0x51ef64: 0x0  nop
    ctx->pc = 0x51ef64u;
    // NOP
label_51ef68:
    // 0x51ef68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x51ef68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_51ef6c:
    // 0x51ef6c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x51ef6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_51ef70:
    // 0x51ef70: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x51ef70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_51ef74:
    // 0x51ef74: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_51ef78:
    if (ctx->pc == 0x51EF78u) {
        ctx->pc = 0x51EF78u;
            // 0x51ef78: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x51EF7Cu;
        goto label_51ef7c;
    }
    ctx->pc = 0x51EF74u;
    {
        const bool branch_taken_0x51ef74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x51EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EF74u;
            // 0x51ef78: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ef74) {
            ctx->pc = 0x51EEC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51eec0;
        }
    }
    ctx->pc = 0x51EF7Cu;
label_51ef7c:
    // 0x51ef7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51ef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51ef80:
    // 0x51ef80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51ef80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51ef84:
    // 0x51ef84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51ef84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51ef88:
    // 0x51ef88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51ef88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51ef8c:
    // 0x51ef8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51ef8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51ef90:
    // 0x51ef90: 0x3e00008  jr          $ra
label_51ef94:
    if (ctx->pc == 0x51EF94u) {
        ctx->pc = 0x51EF94u;
            // 0x51ef94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x51EF98u;
        goto label_51ef98;
    }
    ctx->pc = 0x51EF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51EF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EF90u;
            // 0x51ef94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51EF98u;
label_51ef98:
    // 0x51ef98: 0x0  nop
    ctx->pc = 0x51ef98u;
    // NOP
label_51ef9c:
    // 0x51ef9c: 0x0  nop
    ctx->pc = 0x51ef9cu;
    // NOP
}
