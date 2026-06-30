#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D710
// Address: 0x16d710 - 0x16d7e0
void sub_0016D710_0x16d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D710_0x16d710");
#endif

    switch (ctx->pc) {
        case 0x16d760u: goto label_16d760;
        case 0x16d770u: goto label_16d770;
        case 0x16d778u: goto label_16d778;
        case 0x16d780u: goto label_16d780;
        default: break;
    }

    ctx->pc = 0x16d710u;

    // 0x16d710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d714: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16d718: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x16d718u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
    // 0x16d71c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d720: 0x26c3ab40  addiu       $v1, $s6, -0x54C0
    ctx->pc = 0x16d720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945600));
    // 0x16d724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d728: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16d728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16d72c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16d72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16d730: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16d730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16d734: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16d738: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16d738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16d73c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x16d73cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d740: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D740u;
    {
        const bool branch_taken_0x16d740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D740u;
            // 0x16d744: 0x3c15005e  lui         $s5, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d740) {
            ctx->pc = 0x16D798u;
            goto label_16d798;
        }
    }
    ctx->pc = 0x16D748u;
    // 0x16d748: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x16d748u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x16d74c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x16d74cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d750: 0x26b2ab38  addiu       $s2, $s5, -0x54C8
    ctx->pc = 0x16d750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945592));
    // 0x16d754: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16d754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d758: 0x2690aae0  addiu       $s0, $s4, -0x5520
    ctx->pc = 0x16d758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945504));
    // 0x16d75c: 0x0  nop
    ctx->pc = 0x16d75cu;
    // NOP
label_16d760:
    // 0x16d760: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x16d760u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x16d764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d768: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D768u;
    SET_GPR_U32(ctx, 31, 0x16D770u);
    ctx->pc = 0x16D76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D768u;
            // 0x16d76c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D770u; }
        if (ctx->pc != 0x16D770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D770u; }
        if (ctx->pc != 0x16D770u) { return; }
    }
    ctx->pc = 0x16D770u;
label_16d770:
    // 0x16d770: 0xc0430a4  jal         func_10C290
    ctx->pc = 0x16D770u;
    SET_GPR_U32(ctx, 31, 0x16D778u);
    ctx->pc = 0x16D774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D770u;
            // 0x16d774: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C290u;
    if (runtime->hasFunction(0x10C290u)) {
        auto targetFn = runtime->lookupFunction(0x10C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D778u; }
        if (ctx->pc != 0x16D778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C290_0x10c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D778u; }
        if (ctx->pc != 0x16D778u) { return; }
    }
    ctx->pc = 0x16D778u;
label_16d778:
    // 0x16d778: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16D778u;
    SET_GPR_U32(ctx, 31, 0x16D780u);
    ctx->pc = 0x16D77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D778u;
            // 0x16d77c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D780u; }
        if (ctx->pc != 0x16D780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D780u; }
        if (ctx->pc != 0x16D780u) { return; }
    }
    ctx->pc = 0x16D780u;
label_16d780:
    // 0x16d780: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x16d780u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16d784: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16D784u;
    {
        const bool branch_taken_0x16d784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D784u;
            // 0x16d788: 0x26c2ab40  addiu       $v0, $s6, -0x54C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d784) {
            ctx->pc = 0x16D760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16d760;
        }
    }
    ctx->pc = 0x16D78Cu;
    // 0x16d78c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16D78Cu;
    {
        const bool branch_taken_0x16d78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D78Cu;
            // 0x16d790: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d78c) {
            ctx->pc = 0x16D7A4u;
            goto label_16d7a4;
        }
    }
    ctx->pc = 0x16D794u;
    // 0x16d794: 0x0  nop
    ctx->pc = 0x16d794u;
    // NOP
label_16d798:
    // 0x16d798: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x16d79c: 0x26c2ab40  addiu       $v0, $s6, -0x54C0
    ctx->pc = 0x16d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945600));
    // 0x16d7a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16d7a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16d7a4:
    // 0x16d7a4: 0x26a3ab38  addiu       $v1, $s5, -0x54C8
    ctx->pc = 0x16d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945592));
    // 0x16d7a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16d7a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d7ac: 0x2684aae0  addiu       $a0, $s4, -0x5520
    ctx->pc = 0x16d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945504));
    // 0x16d7b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16d7b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d7b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d7bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16d7bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d7c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16d7c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d7c4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16d7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d7c8: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x16d7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x16d7cc: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x16d7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x16d7d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16d7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D7D4u;
            // 0x16d7d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D7DCu;
    // 0x16d7dc: 0x0  nop
    ctx->pc = 0x16d7dcu;
    // NOP
}
