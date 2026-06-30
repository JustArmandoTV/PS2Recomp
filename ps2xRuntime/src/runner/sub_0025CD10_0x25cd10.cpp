#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CD10
// Address: 0x25cd10 - 0x25cde0
void sub_0025CD10_0x25cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CD10_0x25cd10");
#endif

    switch (ctx->pc) {
        case 0x25cd6cu: goto label_25cd6c;
        case 0x25cda4u: goto label_25cda4;
        default: break;
    }

    ctx->pc = 0x25cd10u;

    // 0x25cd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25cd14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25cd18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25cd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cd20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25cd20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd24: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x25CD24u;
    {
        const bool branch_taken_0x25cd24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD24u;
            // 0x25cd28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd24) {
            ctx->pc = 0x25CDC0u;
            goto label_25cdc0;
        }
    }
    ctx->pc = 0x25CD2Cu;
    // 0x25cd2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x25cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25cd30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x25cd34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25cd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25cd38: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25CD38u;
    {
        const bool branch_taken_0x25cd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cd38) {
            ctx->pc = 0x25CD70u;
            goto label_25cd70;
        }
    }
    ctx->pc = 0x25CD40u;
    // 0x25cd40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x25cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25cd44: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25cd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x25cd48: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x25cd4c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x25cd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x25cd50: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x25cd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25cd54: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x25cd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x25cd58: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x25cd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x25cd5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25cd60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25cd64: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x25CD64u;
    SET_GPR_U32(ctx, 31, 0x25CD6Cu);
    ctx->pc = 0x25CD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD64u;
            // 0x25cd68: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD6Cu; }
        if (ctx->pc != 0x25CD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD6Cu; }
        if (ctx->pc != 0x25CD6Cu) { return; }
    }
    ctx->pc = 0x25CD6Cu;
label_25cd6c:
    // 0x25cd6c: 0x0  nop
    ctx->pc = 0x25cd6cu;
    // NOP
label_25cd70:
    // 0x25cd70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x25cd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x25cd74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25cd74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25cd78: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25CD78u;
    {
        const bool branch_taken_0x25cd78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25CD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD78u;
            // 0x25cd7c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd78) {
            ctx->pc = 0x25CDC0u;
            goto label_25cdc0;
        }
    }
    ctx->pc = 0x25CD80u;
    // 0x25cd80: 0x8c30ea40  lw          $s0, -0x15C0($at)
    ctx->pc = 0x25cd80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x25cd84: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x25cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x25cd88: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x25cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25cd8c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25cd8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25cd90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25CD90u;
    {
        const bool branch_taken_0x25cd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD90u;
            // 0x25cd94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd90) {
            ctx->pc = 0x25CDA8u;
            goto label_25cda8;
        }
    }
    ctx->pc = 0x25CD98u;
    // 0x25cd98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25cd9c: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x25CD9Cu;
    SET_GPR_U32(ctx, 31, 0x25CDA4u);
    ctx->pc = 0x25CDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD9Cu;
            // 0x25cda0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CDA4u; }
        if (ctx->pc != 0x25CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CDA4u; }
        if (ctx->pc != 0x25CDA4u) { return; }
    }
    ctx->pc = 0x25CDA4u;
label_25cda4:
    // 0x25cda4: 0x0  nop
    ctx->pc = 0x25cda4u;
    // NOP
label_25cda8:
    // 0x25cda8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x25cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x25cdac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25cdb0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x25cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x25cdb4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x25cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25cdb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x25cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x25cdbc: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x25cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_25cdc0:
    // 0x25cdc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25cdc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cdc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25cdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cdc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cdc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cdcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CDD0u;
            // 0x25cdd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CDD8u;
    // 0x25cdd8: 0x0  nop
    ctx->pc = 0x25cdd8u;
    // NOP
    // 0x25cddc: 0x0  nop
    ctx->pc = 0x25cddcu;
    // NOP
}
