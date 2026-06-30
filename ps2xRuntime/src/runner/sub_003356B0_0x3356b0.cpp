#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003356B0
// Address: 0x3356b0 - 0x3357b0
void sub_003356B0_0x3356b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003356B0_0x3356b0");
#endif

    switch (ctx->pc) {
        case 0x335708u: goto label_335708;
        case 0x335710u: goto label_335710;
        case 0x335724u: goto label_335724;
        case 0x33577cu: goto label_33577c;
        default: break;
    }

    ctx->pc = 0x3356b0u;

    // 0x3356b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3356b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3356b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3356b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3356b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3356b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3356bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3356bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3356c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3356c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3356c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3356c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3356c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3356ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3356d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3356d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3356d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3356d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3356d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3356dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3356e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3356e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3356e4: 0x2c41ffff  sltiu       $at, $v0, -0x1
    ctx->pc = 0x3356e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x3356e8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3356E8u;
    {
        const bool branch_taken_0x3356e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3356ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3356E8u;
            // 0x3356ec: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356e8) {
            ctx->pc = 0x335710u;
            goto label_335710;
        }
    }
    ctx->pc = 0x3356F0u;
    // 0x3356f0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3356f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3356f4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3356f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3356f8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x3356f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x3356fc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3356fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x335700: 0xc049e92  jal         func_127A48
    ctx->pc = 0x335700u;
    SET_GPR_U32(ctx, 31, 0x335708u);
    ctx->pc = 0x335704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335700u;
            // 0x335704: 0x24a5d350  addiu       $a1, $a1, -0x2CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335708u; }
        if (ctx->pc != 0x335708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335708u; }
        if (ctx->pc != 0x335708u) { return; }
    }
    ctx->pc = 0x335708u;
label_335708:
    // 0x335708: 0xc04981a  jal         func_126068
    ctx->pc = 0x335708u;
    SET_GPR_U32(ctx, 31, 0x335710u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335710u; }
        if (ctx->pc != 0x335710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335710u; }
        if (ctx->pc != 0x335710u) { return; }
    }
    ctx->pc = 0x335710u;
label_335710:
    // 0x335710: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x335710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x335714: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x335714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x335718: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x335718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x33571c: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x33571Cu;
    SET_GPR_U32(ctx, 31, 0x335724u);
    ctx->pc = 0x335720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33571Cu;
            // 0x335720: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335724u; }
        if (ctx->pc != 0x335724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335724u; }
        if (ctx->pc != 0x335724u) { return; }
    }
    ctx->pc = 0x335724u;
label_335724:
    // 0x335724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x335724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335728: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x335728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x33572c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33572Cu;
    {
        const bool branch_taken_0x33572c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33572c) {
            ctx->pc = 0x335730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33572Cu;
            // 0x335730: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335740u;
            goto label_335740;
        }
    }
    ctx->pc = 0x335734u;
    // 0x335734: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x335734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x335738: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x335738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33573c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33573cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_335740:
    // 0x335740: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x335740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x335744: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x335744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x335748: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x335748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33574c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x33574cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x335750: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x335750u;
    {
        const bool branch_taken_0x335750 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x335754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335750u;
            // 0x335754: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335750) {
            ctx->pc = 0x335760u;
            goto label_335760;
        }
    }
    ctx->pc = 0x335758u;
    // 0x335758: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x335758u;
    {
        const bool branch_taken_0x335758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33575Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335758u;
            // 0x33575c: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335758) {
            ctx->pc = 0x335764u;
            goto label_335764;
        }
    }
    ctx->pc = 0x335760u;
label_335760:
    // 0x335760: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x335760u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_335764:
    // 0x335764: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x335764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x335768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33576c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x33576cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x335770: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x335770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x335774: 0xc0583d8  jal         func_160F60
    ctx->pc = 0x335774u;
    SET_GPR_U32(ctx, 31, 0x33577Cu);
    ctx->pc = 0x335778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335774u;
            // 0x335778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F60u;
    if (runtime->hasFunction(0x160F60u)) {
        auto targetFn = runtime->lookupFunction(0x160F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33577Cu; }
        if (ctx->pc != 0x33577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F60_0x160f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33577Cu; }
        if (ctx->pc != 0x33577Cu) { return; }
    }
    ctx->pc = 0x33577Cu;
label_33577c:
    // 0x33577c: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33577Cu;
    {
        const bool branch_taken_0x33577c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33577c) {
            ctx->pc = 0x335780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33577Cu;
            // 0x335780: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33578Cu;
            goto label_33578c;
        }
    }
    ctx->pc = 0x335784u;
    // 0x335784: 0xaeb00010  sw          $s0, 0x10($s5)
    ctx->pc = 0x335784u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
    // 0x335788: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x335788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33578c:
    // 0x33578c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x33578cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x335790: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x335790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335794: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x335794u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335798: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x335798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33579c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33579cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3357a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3357a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3357a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3357a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3357a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3357A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3357ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3357A8u;
            // 0x3357ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3357B0u;
}
