#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFA50
// Address: 0x1efa50 - 0x1efb60
void sub_001EFA50_0x1efa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFA50_0x1efa50");
#endif

    switch (ctx->pc) {
        case 0x1efa50u: goto label_1efa50;
        case 0x1efa54u: goto label_1efa54;
        case 0x1efa58u: goto label_1efa58;
        case 0x1efa5cu: goto label_1efa5c;
        case 0x1efa60u: goto label_1efa60;
        case 0x1efa64u: goto label_1efa64;
        case 0x1efa68u: goto label_1efa68;
        case 0x1efa6cu: goto label_1efa6c;
        case 0x1efa70u: goto label_1efa70;
        case 0x1efa74u: goto label_1efa74;
        case 0x1efa78u: goto label_1efa78;
        case 0x1efa7cu: goto label_1efa7c;
        case 0x1efa80u: goto label_1efa80;
        case 0x1efa84u: goto label_1efa84;
        case 0x1efa88u: goto label_1efa88;
        case 0x1efa8cu: goto label_1efa8c;
        case 0x1efa90u: goto label_1efa90;
        case 0x1efa94u: goto label_1efa94;
        case 0x1efa98u: goto label_1efa98;
        case 0x1efa9cu: goto label_1efa9c;
        case 0x1efaa0u: goto label_1efaa0;
        case 0x1efaa4u: goto label_1efaa4;
        case 0x1efaa8u: goto label_1efaa8;
        case 0x1efaacu: goto label_1efaac;
        case 0x1efab0u: goto label_1efab0;
        case 0x1efab4u: goto label_1efab4;
        case 0x1efab8u: goto label_1efab8;
        case 0x1efabcu: goto label_1efabc;
        case 0x1efac0u: goto label_1efac0;
        case 0x1efac4u: goto label_1efac4;
        case 0x1efac8u: goto label_1efac8;
        case 0x1efaccu: goto label_1efacc;
        case 0x1efad0u: goto label_1efad0;
        case 0x1efad4u: goto label_1efad4;
        case 0x1efad8u: goto label_1efad8;
        case 0x1efadcu: goto label_1efadc;
        case 0x1efae0u: goto label_1efae0;
        case 0x1efae4u: goto label_1efae4;
        case 0x1efae8u: goto label_1efae8;
        case 0x1efaecu: goto label_1efaec;
        case 0x1efaf0u: goto label_1efaf0;
        case 0x1efaf4u: goto label_1efaf4;
        case 0x1efaf8u: goto label_1efaf8;
        case 0x1efafcu: goto label_1efafc;
        case 0x1efb00u: goto label_1efb00;
        case 0x1efb04u: goto label_1efb04;
        case 0x1efb08u: goto label_1efb08;
        case 0x1efb0cu: goto label_1efb0c;
        case 0x1efb10u: goto label_1efb10;
        case 0x1efb14u: goto label_1efb14;
        case 0x1efb18u: goto label_1efb18;
        case 0x1efb1cu: goto label_1efb1c;
        case 0x1efb20u: goto label_1efb20;
        case 0x1efb24u: goto label_1efb24;
        case 0x1efb28u: goto label_1efb28;
        case 0x1efb2cu: goto label_1efb2c;
        case 0x1efb30u: goto label_1efb30;
        case 0x1efb34u: goto label_1efb34;
        case 0x1efb38u: goto label_1efb38;
        case 0x1efb3cu: goto label_1efb3c;
        case 0x1efb40u: goto label_1efb40;
        case 0x1efb44u: goto label_1efb44;
        case 0x1efb48u: goto label_1efb48;
        case 0x1efb4cu: goto label_1efb4c;
        case 0x1efb50u: goto label_1efb50;
        case 0x1efb54u: goto label_1efb54;
        case 0x1efb58u: goto label_1efb58;
        case 0x1efb5cu: goto label_1efb5c;
        default: break;
    }

    ctx->pc = 0x1efa50u;

label_1efa50:
    // 0x1efa50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1efa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1efa54:
    // 0x1efa54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1efa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1efa58:
    // 0x1efa58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1efa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1efa5c:
    // 0x1efa5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1efa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1efa60:
    // 0x1efa60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1efa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1efa64:
    // 0x1efa64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1efa64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1efa68:
    // 0x1efa68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1efa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1efa6c:
    // 0x1efa6c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1efa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1efa70:
    // 0x1efa70: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_1efa74:
    if (ctx->pc == 0x1EFA74u) {
        ctx->pc = 0x1EFA74u;
            // 0x1efa74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA78u;
        goto label_1efa78;
    }
    ctx->pc = 0x1EFA70u;
    {
        const bool branch_taken_0x1efa70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA70u;
            // 0x1efa74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa70) {
            ctx->pc = 0x1EFAB8u;
            goto label_1efab8;
        }
    }
    ctx->pc = 0x1EFA78u;
label_1efa78:
    // 0x1efa78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1efa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1efa7c:
    // 0x1efa7c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1efa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1efa80:
    // 0x1efa80: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1efa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1efa84:
    // 0x1efa84: 0xc0a7a88  jal         func_29EA20
label_1efa88:
    if (ctx->pc == 0x1EFA88u) {
        ctx->pc = 0x1EFA88u;
            // 0x1efa88: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EFA8Cu;
        goto label_1efa8c;
    }
    ctx->pc = 0x1EFA84u;
    SET_GPR_U32(ctx, 31, 0x1EFA8Cu);
    ctx->pc = 0x1EFA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA84u;
            // 0x1efa88: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA8Cu; }
        if (ctx->pc != 0x1EFA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA8Cu; }
        if (ctx->pc != 0x1EFA8Cu) { return; }
    }
    ctx->pc = 0x1EFA8Cu;
label_1efa8c:
    // 0x1efa8c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1efa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1efa90:
    // 0x1efa90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1efa90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1efa94:
    // 0x1efa94: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1efa98:
    if (ctx->pc == 0x1EFA98u) {
        ctx->pc = 0x1EFA98u;
            // 0x1efa98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EFA9Cu;
        goto label_1efa9c;
    }
    ctx->pc = 0x1EFA94u;
    {
        const bool branch_taken_0x1efa94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA94u;
            // 0x1efa98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa94) {
            ctx->pc = 0x1EFAB0u;
            goto label_1efab0;
        }
    }
    ctx->pc = 0x1EFA9Cu;
label_1efa9c:
    // 0x1efa9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1efa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1efaa0:
    // 0x1efaa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1efaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1efaa4:
    // 0x1efaa4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1efaa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1efaa8:
    // 0x1efaa8: 0xc07be84  jal         func_1EFA10
label_1efaac:
    if (ctx->pc == 0x1EFAACu) {
        ctx->pc = 0x1EFAACu;
            // 0x1efaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAB0u;
        goto label_1efab0;
    }
    ctx->pc = 0x1EFAA8u;
    SET_GPR_U32(ctx, 31, 0x1EFAB0u);
    ctx->pc = 0x1EFAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAA8u;
            // 0x1efaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA10u;
    if (runtime->hasFunction(0x1EFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1EFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAB0u; }
        if (ctx->pc != 0x1EFAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFA10_0x1efa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAB0u; }
        if (ctx->pc != 0x1EFAB0u) { return; }
    }
    ctx->pc = 0x1EFAB0u;
label_1efab0:
    // 0x1efab0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1efab4:
    if (ctx->pc == 0x1EFAB4u) {
        ctx->pc = 0x1EFAB4u;
            // 0x1efab4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAB8u;
        goto label_1efab8;
    }
    ctx->pc = 0x1EFAB0u;
    {
        const bool branch_taken_0x1efab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAB0u;
            // 0x1efab4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efab0) {
            ctx->pc = 0x1EFAF4u;
            goto label_1efaf4;
        }
    }
    ctx->pc = 0x1EFAB8u;
label_1efab8:
    // 0x1efab8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1efab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1efabc:
    // 0x1efabc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1efabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1efac0:
    // 0x1efac0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1efac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1efac4:
    // 0x1efac4: 0xc0a7a88  jal         func_29EA20
label_1efac8:
    if (ctx->pc == 0x1EFAC8u) {
        ctx->pc = 0x1EFAC8u;
            // 0x1efac8: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EFACCu;
        goto label_1efacc;
    }
    ctx->pc = 0x1EFAC4u;
    SET_GPR_U32(ctx, 31, 0x1EFACCu);
    ctx->pc = 0x1EFAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAC4u;
            // 0x1efac8: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFACCu; }
        if (ctx->pc != 0x1EFACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFACCu; }
        if (ctx->pc != 0x1EFACCu) { return; }
    }
    ctx->pc = 0x1EFACCu;
label_1efacc:
    // 0x1efacc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1efaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1efad0:
    // 0x1efad0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1efad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1efad4:
    // 0x1efad4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1efad8:
    if (ctx->pc == 0x1EFAD8u) {
        ctx->pc = 0x1EFAD8u;
            // 0x1efad8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EFADCu;
        goto label_1efadc;
    }
    ctx->pc = 0x1EFAD4u;
    {
        const bool branch_taken_0x1efad4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAD4u;
            // 0x1efad8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efad4) {
            ctx->pc = 0x1EFAF0u;
            goto label_1efaf0;
        }
    }
    ctx->pc = 0x1EFADCu;
label_1efadc:
    // 0x1efadc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1efadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1efae0:
    // 0x1efae0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1efae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1efae4:
    // 0x1efae4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1efae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1efae8:
    // 0x1efae8: 0xc07bb08  jal         func_1EEC20
label_1efaec:
    if (ctx->pc == 0x1EFAECu) {
        ctx->pc = 0x1EFAECu;
            // 0x1efaec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAF0u;
        goto label_1efaf0;
    }
    ctx->pc = 0x1EFAE8u;
    SET_GPR_U32(ctx, 31, 0x1EFAF0u);
    ctx->pc = 0x1EFAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAE8u;
            // 0x1efaec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEC20u;
    if (runtime->hasFunction(0x1EEC20u)) {
        auto targetFn = runtime->lookupFunction(0x1EEC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAF0u; }
        if (ctx->pc != 0x1EFAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEC20_0x1eec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAF0u; }
        if (ctx->pc != 0x1EFAF0u) { return; }
    }
    ctx->pc = 0x1EFAF0u;
label_1efaf0:
    // 0x1efaf0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1efaf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1efaf4:
    // 0x1efaf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1efaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1efaf8:
    // 0x1efaf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1efaf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1efafc:
    // 0x1efafc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1efafcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1efb00:
    // 0x1efb00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1efb00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1efb04:
    // 0x1efb04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1efb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1efb08:
    // 0x1efb08: 0x3e00008  jr          $ra
label_1efb0c:
    if (ctx->pc == 0x1EFB0Cu) {
        ctx->pc = 0x1EFB0Cu;
            // 0x1efb0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1EFB10u;
        goto label_1efb10;
    }
    ctx->pc = 0x1EFB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB08u;
            // 0x1efb0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFB10u;
label_1efb10:
    // 0x1efb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1efb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1efb14:
    // 0x1efb14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1efb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1efb18:
    // 0x1efb18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1efb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1efb1c:
    // 0x1efb1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1efb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1efb20:
    // 0x1efb20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1efb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1efb24:
    // 0x1efb24: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1efb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1efb28:
    // 0x1efb28: 0xc098768  jal         func_261DA0
label_1efb2c:
    if (ctx->pc == 0x1EFB2Cu) {
        ctx->pc = 0x1EFB2Cu;
            // 0x1efb2c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1EFB30u;
        goto label_1efb30;
    }
    ctx->pc = 0x1EFB28u;
    SET_GPR_U32(ctx, 31, 0x1EFB30u);
    ctx->pc = 0x1EFB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB28u;
            // 0x1efb2c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261DA0u;
    if (runtime->hasFunction(0x261DA0u)) {
        auto targetFn = runtime->lookupFunction(0x261DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB30u; }
        if (ctx->pc != 0x1EFB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261DA0_0x261da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB30u; }
        if (ctx->pc != 0x1EFB30u) { return; }
    }
    ctx->pc = 0x1EFB30u;
label_1efb30:
    // 0x1efb30: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1efb34:
    if (ctx->pc == 0x1EFB34u) {
        ctx->pc = 0x1EFB34u;
            // 0x1efb34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1EFB38u;
        goto label_1efb38;
    }
    ctx->pc = 0x1EFB30u;
    {
        const bool branch_taken_0x1efb30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb30) {
            ctx->pc = 0x1EFB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB30u;
            // 0x1efb34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB50u;
            goto label_1efb50;
        }
    }
    ctx->pc = 0x1EFB38u;
label_1efb38:
    // 0x1efb38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1efb38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1efb3c:
    // 0x1efb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1efb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1efb40:
    // 0x1efb40: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1efb40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1efb44:
    // 0x1efb44: 0x320f809  jalr        $t9
label_1efb48:
    if (ctx->pc == 0x1EFB48u) {
        ctx->pc = 0x1EFB48u;
            // 0x1efb48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EFB4Cu;
        goto label_1efb4c;
    }
    ctx->pc = 0x1EFB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EFB4Cu);
        ctx->pc = 0x1EFB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB44u;
            // 0x1efb48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EFB4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB4Cu; }
            if (ctx->pc != 0x1EFB4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1EFB4Cu;
label_1efb4c:
    // 0x1efb4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1efb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1efb50:
    // 0x1efb50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1efb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1efb54:
    // 0x1efb54: 0x3e00008  jr          $ra
label_1efb58:
    if (ctx->pc == 0x1EFB58u) {
        ctx->pc = 0x1EFB58u;
            // 0x1efb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EFB5Cu;
        goto label_1efb5c;
    }
    ctx->pc = 0x1EFB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB54u;
            // 0x1efb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFB5Cu;
label_1efb5c:
    // 0x1efb5c: 0x0  nop
    ctx->pc = 0x1efb5cu;
    // NOP
}
