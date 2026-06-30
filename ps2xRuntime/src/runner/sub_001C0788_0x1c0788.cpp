#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0788
// Address: 0x1c0788 - 0x1c0900
void sub_001C0788_0x1c0788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0788_0x1c0788");
#endif

    switch (ctx->pc) {
        case 0x1c08a8u: goto label_1c08a8;
        default: break;
    }

    ctx->pc = 0x1c0788u;

    // 0x1c0788: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c0788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c078c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C078Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C078Cu;
            // 0x1c0790: 0xfc44a4b8  sd          $a0, -0x5B48($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294943928), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0794u;
    // 0x1c0794: 0x0  nop
    ctx->pc = 0x1c0794u;
    // NOP
    // 0x1c0798: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c0798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c079c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1c079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1c07a0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1c07a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1c07a4: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1c07a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1c07a8: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1c07a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1c07ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C07ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C07B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07ACu;
            // 0x1c07b0: 0xfc800010  sd          $zero, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C07B4u;
    // 0x1c07b4: 0x0  nop
    ctx->pc = 0x1c07b4u;
    // NOP
    // 0x1c07b8: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x1c07b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c07bc: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x1c07bcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c07c0: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x1c07c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c07c4: 0xa7482a  slt         $t1, $a1, $a3
    ctx->pc = 0x1c07c4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1c07c8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1c07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c07cc: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x1c07ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c07d0: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x1c07d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x1c07d4: 0xc5302d  daddu       $a2, $a2, $a1
    ctx->pc = 0x1c07d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1c07d8: 0xa9380b  movn        $a3, $a1, $t1
    ctx->pc = 0x1c07d8u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x1c07dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c07e0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1c07e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1c07e4: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1c07e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1c07e8: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1c07e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1c07ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C07ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C07F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07ECu;
            // 0x1c07f0: 0xfc880010  sd          $t0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C07F4u;
    // 0x1c07f4: 0x0  nop
    ctx->pc = 0x1c07f4u;
    // NOP
    // 0x1c07f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c07fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0800: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C0800u;
    {
        const bool branch_taken_0x1c0800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0800u;
            // 0x1c0804: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0800) {
            ctx->pc = 0x1C0840u;
            goto label_1c0840;
        }
    }
    ctx->pc = 0x1C0808u;
    // 0x1c0808: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1C0808u;
    {
        const bool branch_taken_0x1c0808 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C080Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0808u;
            // 0x1c080c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0808) {
            ctx->pc = 0x1C0840u;
            goto label_1c0840;
        }
    }
    ctx->pc = 0x1C0810u;
    // 0x1c0810: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0814: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0814u;
    {
        const bool branch_taken_0x1c0814 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0814u;
            // 0x1c0818: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0814) {
            ctx->pc = 0x1C0840u;
            goto label_1c0840;
        }
    }
    ctx->pc = 0x1C081Cu;
    // 0x1c081c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c081cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c0820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0824: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x1c0824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    // 0x1c0828: 0x24c6b8b8  addiu       $a2, $a2, -0x4748
    ctx->pc = 0x1c0828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949048));
    // 0x1c082c: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x1c082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1c0830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0834: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c0834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c0838: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C0838u;
    ctx->pc = 0x1C083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0838u;
            // 0x1c083c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0840u;
label_1c0840:
    // 0x1c0840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0844: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c0844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0848: 0x805e358  j           func_178D60
    ctx->pc = 0x1C0848u;
    ctx->pc = 0x1C084Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0848u;
            // 0x1c084c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178D60u;
    if (runtime->hasFunction(0x178D60u)) {
        auto targetFn = runtime->lookupFunction(0x178D60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178D60_0x178d60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0850u;
    // 0x1c0850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c085c: 0x805e33e  j           func_178CF8
    ctx->pc = 0x1C085Cu;
    ctx->pc = 0x1C0860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C085Cu;
            // 0x1c0860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178CF8u;
    if (runtime->hasFunction(0x178CF8u)) {
        auto targetFn = runtime->lookupFunction(0x178CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178CF8_0x178cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0864u;
    // 0x1c0864: 0x0  nop
    ctx->pc = 0x1c0864u;
    // NOP
    // 0x1c0868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c086c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0874: 0x805e372  j           func_178DC8
    ctx->pc = 0x1C0874u;
    ctx->pc = 0x1C0878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0874u;
            // 0x1c0878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DC8u;
    if (runtime->hasFunction(0x178DC8u)) {
        auto targetFn = runtime->lookupFunction(0x178DC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178DC8_0x178dc8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C087Cu;
    // 0x1c087c: 0x0  nop
    ctx->pc = 0x1c087cu;
    // NOP
    // 0x1c0880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c088c: 0x805e3a6  j           func_178E98
    ctx->pc = 0x1C088Cu;
    ctx->pc = 0x1C0890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C088Cu;
            // 0x1c0890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178E98u;
    {
        auto targetFn = runtime->lookupFunction(0x178E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C0894u;
    // 0x1c0894: 0x0  nop
    ctx->pc = 0x1c0894u;
    // NOP
    // 0x1c0898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c089c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c08a0: 0xc05e3ee  jal         func_178FB8
    ctx->pc = 0x1C08A0u;
    SET_GPR_U32(ctx, 31, 0x1C08A8u);
    ctx->pc = 0x178FB8u;
    if (runtime->hasFunction(0x178FB8u)) {
        auto targetFn = runtime->lookupFunction(0x178FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08A8u; }
        if (ctx->pc != 0x1C08A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178FB8_0x178fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08A8u; }
        if (ctx->pc != 0x1C08A8u) { return; }
    }
    ctx->pc = 0x1C08A8u;
label_1c08a8:
    // 0x1c08a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c08a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c08ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c08acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c08b0: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C08B0u;
    {
        const bool branch_taken_0x1c08b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C08B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08B0u;
            // 0x1c08b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08b0) {
            ctx->pc = 0x1C08DCu;
            goto label_1c08dc;
        }
    }
    ctx->pc = 0x1C08B8u;
    // 0x1c08b8: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C08B8u;
    {
        const bool branch_taken_0x1c08b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c08b8) {
            ctx->pc = 0x1C08BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08B8u;
            // 0x1c08bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C08DCu;
            goto label_1c08dc;
        }
    }
    ctx->pc = 0x1C08C0u;
    // 0x1c08c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c08c4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C08C4u;
    {
        const bool branch_taken_0x1c08c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c08c4) {
            ctx->pc = 0x1C08DCu;
            goto label_1c08dc;
        }
    }
    ctx->pc = 0x1C08CCu;
    // 0x1c08cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C08CCu;
    {
        const bool branch_taken_0x1c08cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C08D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08CCu;
            // 0x1c08d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08cc) {
            ctx->pc = 0x1C08DCu;
            goto label_1c08dc;
        }
    }
    ctx->pc = 0x1C08D4u;
    // 0x1c08d4: 0x0  nop
    ctx->pc = 0x1c08d4u;
    // NOP
    // 0x1c08d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c08d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c08dc:
    // 0x1c08dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C08DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C08E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08DCu;
            // 0x1c08e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C08E4u;
    // 0x1c08e4: 0x0  nop
    ctx->pc = 0x1c08e4u;
    // NOP
    // 0x1c08e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c08e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c08ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c08ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c08f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c08f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c08f4: 0x805e4fc  j           func_1793F0
    ctx->pc = 0x1C08F4u;
    ctx->pc = 0x1C08F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08F4u;
            // 0x1c08f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1793F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1793F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C08FCu;
    // 0x1c08fc: 0x0  nop
    ctx->pc = 0x1c08fcu;
    // NOP
}
