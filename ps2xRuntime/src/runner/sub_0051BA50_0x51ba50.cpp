#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051BA50
// Address: 0x51ba50 - 0x51bb00
void sub_0051BA50_0x51ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051BA50_0x51ba50");
#endif

    switch (ctx->pc) {
        case 0x51ba80u: goto label_51ba80;
        case 0x51ba88u: goto label_51ba88;
        case 0x51ba98u: goto label_51ba98;
        case 0x51baa8u: goto label_51baa8;
        case 0x51baccu: goto label_51bacc;
        default: break;
    }

    ctx->pc = 0x51ba50u;

    // 0x51ba50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x51ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x51ba54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x51ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x51ba58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x51ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x51ba5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51ba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x51ba60: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x51ba60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51ba64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51ba64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51ba68: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x51ba68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51ba6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51ba70: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x51ba70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51ba74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51ba74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51ba78: 0xc0fd068  jal         func_3F41A0
    ctx->pc = 0x51BA78u;
    SET_GPR_U32(ctx, 31, 0x51BA80u);
    ctx->pc = 0x51BA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BA78u;
            // 0x51ba7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F41A0u;
    if (runtime->hasFunction(0x3F41A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F41A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BA80u; }
        if (ctx->pc != 0x51BA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F41A0_0x3f41a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BA80u; }
        if (ctx->pc != 0x51BA80u) { return; }
    }
    ctx->pc = 0x51BA80u;
label_51ba80:
    // 0x51ba80: 0xc040180  jal         func_100600
    ctx->pc = 0x51BA80u;
    SET_GPR_U32(ctx, 31, 0x51BA88u);
    ctx->pc = 0x51BA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BA80u;
            // 0x51ba84: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BA88u; }
        if (ctx->pc != 0x51BA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BA88u; }
        if (ctx->pc != 0x51BA88u) { return; }
    }
    ctx->pc = 0x51BA88u;
label_51ba88:
    // 0x51ba88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x51BA88u;
    {
        const bool branch_taken_0x51ba88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51BA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BA88u;
            // 0x51ba8c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ba88) {
            ctx->pc = 0x51BACCu;
            goto label_51bacc;
        }
    }
    ctx->pc = 0x51BA90u;
    // 0x51ba90: 0xc146f0c  jal         func_51BC30
    ctx->pc = 0x51BA90u;
    SET_GPR_U32(ctx, 31, 0x51BA98u);
    ctx->pc = 0x51BA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BA90u;
            // 0x51ba94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51BC30u;
    if (runtime->hasFunction(0x51BC30u)) {
        auto targetFn = runtime->lookupFunction(0x51BC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BA98u; }
        if (ctx->pc != 0x51BA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BC30_0x51bc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BA98u; }
        if (ctx->pc != 0x51BA98u) { return; }
    }
    ctx->pc = 0x51BA98u;
label_51ba98:
    // 0x51ba98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x51ba98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51ba9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x51ba9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51baa0: 0xc146ef8  jal         func_51BBE0
    ctx->pc = 0x51BAA0u;
    SET_GPR_U32(ctx, 31, 0x51BAA8u);
    ctx->pc = 0x51BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BAA0u;
            // 0x51baa4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51BBE0u;
    if (runtime->hasFunction(0x51BBE0u)) {
        auto targetFn = runtime->lookupFunction(0x51BBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BAA8u; }
        if (ctx->pc != 0x51BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BBE0_0x51bbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BAA8u; }
        if (ctx->pc != 0x51BAA8u) { return; }
    }
    ctx->pc = 0x51BAA8u;
label_51baa8:
    // 0x51baa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51baac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x51baacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bab0: 0x2442fe70  addiu       $v0, $v0, -0x190
    ctx->pc = 0x51bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966896));
    // 0x51bab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bab8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x51bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x51babc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51babcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51bac0: 0x2442fe88  addiu       $v0, $v0, -0x178
    ctx->pc = 0x51bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966920));
    // 0x51bac4: 0xc146ec0  jal         func_51BB00
    ctx->pc = 0x51BAC4u;
    SET_GPR_U32(ctx, 31, 0x51BACCu);
    ctx->pc = 0x51BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BAC4u;
            // 0x51bac8: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51BB00u;
    if (runtime->hasFunction(0x51BB00u)) {
        auto targetFn = runtime->lookupFunction(0x51BB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BACCu; }
        if (ctx->pc != 0x51BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BB00_0x51bb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BACCu; }
        if (ctx->pc != 0x51BACCu) { return; }
    }
    ctx->pc = 0x51BACCu;
label_51bacc:
    // 0x51bacc: 0xae110398  sw          $s1, 0x398($s0)
    ctx->pc = 0x51baccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 17));
    // 0x51bad0: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x51bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x51bad4: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x51bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x51bad8: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x51bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x51badc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x51badcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x51bae0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x51bae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x51bae4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51bae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51bae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51bae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51baec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51baecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51baf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51baf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51baf4: 0x3e00008  jr          $ra
    ctx->pc = 0x51BAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BAF4u;
            // 0x51baf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BAFCu;
    // 0x51bafc: 0x0  nop
    ctx->pc = 0x51bafcu;
    // NOP
}
