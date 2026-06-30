#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CCF0
// Address: 0x29ccf0 - 0x29ce00
void sub_0029CCF0_0x29ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CCF0_0x29ccf0");
#endif

    switch (ctx->pc) {
        case 0x29cd48u: goto label_29cd48;
        case 0x29cd5cu: goto label_29cd5c;
        case 0x29cd7cu: goto label_29cd7c;
        case 0x29cd94u: goto label_29cd94;
        case 0x29cdd0u: goto label_29cdd0;
        default: break;
    }

    ctx->pc = 0x29ccf0u;

    // 0x29ccf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29ccf4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29ccf8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29ccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29ccfc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29ccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29cd00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29cd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29cd04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29cd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29cd08: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29cd08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29cd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29cd10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29cd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29cd14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29cd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29cd18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29cd18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29cd20: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x29cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x29cd24: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x29cd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29cd28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cd2c: 0x8c960000  lw          $s6, 0x0($a0)
    ctx->pc = 0x29cd2cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cd30: 0xc28824  and         $s1, $a2, $v0
    ctx->pc = 0x29cd30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x29cd34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29cd38: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x29cd38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29cd3c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29cd40: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x29CD40u;
    SET_GPR_U32(ctx, 31, 0x29CD48u);
    ctx->pc = 0x29CD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CD40u;
            // 0x29cd44: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CD48u; }
        if (ctx->pc != 0x29CD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CD48u; }
        if (ctx->pc != 0x29CD48u) { return; }
    }
    ctx->pc = 0x29CD48u;
label_29cd48:
    // 0x29cd48: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x29cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x29cd4c: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x29cd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29cd50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29cd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd54: 0xc0a8458  jal         func_2A1160
    ctx->pc = 0x29CD54u;
    SET_GPR_U32(ctx, 31, 0x29CD5Cu);
    ctx->pc = 0x29CD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CD54u;
            // 0x29cd58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1160u;
    if (runtime->hasFunction(0x2A1160u)) {
        auto targetFn = runtime->lookupFunction(0x2A1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CD5Cu; }
        if (ctx->pc != 0x29CD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1160_0x2a1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CD5Cu; }
        if (ctx->pc != 0x29CD5Cu) { return; }
    }
    ctx->pc = 0x29CD5Cu;
label_29cd5c:
    // 0x29cd5c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x29cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x29cd60: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x29cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x29cd64: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x29cd64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x29cd68: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29CD68u;
    {
        const bool branch_taken_0x29cd68 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x29CD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CD68u;
            // 0x29cd6c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd68) {
            ctx->pc = 0x29CDB0u;
            goto label_29cdb0;
        }
    }
    ctx->pc = 0x29CD70u;
    // 0x29cd70: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29cd74: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x29cd74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd78: 0x2c39021  addu        $s2, $s6, $v1
    ctx->pc = 0x29cd78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_29cd7c:
    // 0x29cd7c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29cd80: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CD80u;
    {
        const bool branch_taken_0x29cd80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd80) {
            ctx->pc = 0x29CD98u;
            goto label_29cd98;
        }
    }
    ctx->pc = 0x29CD88u;
    // 0x29cd88: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x29cd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29cd8c: 0xc0a7420  jal         func_29D080
    ctx->pc = 0x29CD8Cu;
    SET_GPR_U32(ctx, 31, 0x29CD94u);
    ctx->pc = 0x29CD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CD8Cu;
            // 0x29cd90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D080u;
    if (runtime->hasFunction(0x29D080u)) {
        auto targetFn = runtime->lookupFunction(0x29D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CD94u; }
        if (ctx->pc != 0x29CD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D080_0x29d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CD94u; }
        if (ctx->pc != 0x29CD94u) { return; }
    }
    ctx->pc = 0x29CD94u;
label_29cd94:
    // 0x29cd94: 0x0  nop
    ctx->pc = 0x29cd94u;
    // NOP
label_29cd98:
    // 0x29cd98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29cd98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x29cd9c: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x29cd9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29cda0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x29cda0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x29cda4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x29CDA4u;
    {
        const bool branch_taken_0x29cda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDA4u;
            // 0x29cda8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cda4) {
            ctx->pc = 0x29CD7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29cd7c;
        }
    }
    ctx->pc = 0x29CDACu;
    // 0x29cdac: 0x0  nop
    ctx->pc = 0x29cdacu;
    // NOP
label_29cdb0:
    // 0x29cdb0: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29CDB0u;
    {
        const bool branch_taken_0x29cdb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cdb0) {
            ctx->pc = 0x29CDB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDB0u;
            // 0x29cdb4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29CDD4u;
            goto label_29cdd4;
        }
    }
    ctx->pc = 0x29CDB8u;
    // 0x29cdb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29cdbc: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x29cdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x29cdc0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29cdc4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29cdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cdc8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29CDC8u;
    SET_GPR_U32(ctx, 31, 0x29CDD0u);
    ctx->pc = 0x29CDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDC8u;
            // 0x29cdcc: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CDD0u; }
        if (ctx->pc != 0x29CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CDD0u; }
        if (ctx->pc != 0x29CDD0u) { return; }
    }
    ctx->pc = 0x29CDD0u;
label_29cdd0:
    // 0x29cdd0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29cdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29cdd4:
    // 0x29cdd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29cdd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29cdd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29cdd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29cddc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29cddcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cde0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29cde0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cde4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29cde4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cde8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29cde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cdec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29cdecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x29CDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDF0u;
            // 0x29cdf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CDF8u;
    // 0x29cdf8: 0x0  nop
    ctx->pc = 0x29cdf8u;
    // NOP
    // 0x29cdfc: 0x0  nop
    ctx->pc = 0x29cdfcu;
    // NOP
}
