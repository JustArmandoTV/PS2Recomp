#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168738
// Address: 0x168738 - 0x1687b8
void sub_00168738_0x168738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168738_0x168738");
#endif

    switch (ctx->pc) {
        case 0x16875cu: goto label_16875c;
        case 0x168770u: goto label_168770;
        case 0x168778u: goto label_168778;
        case 0x168780u: goto label_168780;
        case 0x168788u: goto label_168788;
        default: break;
    }

    ctx->pc = 0x168738u;

    // 0x168738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16873c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168748: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x168748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16874c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168750: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x168750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x168754: 0xc05a208  jal         func_168820
    ctx->pc = 0x168754u;
    SET_GPR_U32(ctx, 31, 0x16875Cu);
    ctx->pc = 0x168758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168754u;
            // 0x168758: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168820u;
    if (runtime->hasFunction(0x168820u)) {
        auto targetFn = runtime->lookupFunction(0x168820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16875Cu; }
        if (ctx->pc != 0x16875Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168820_0x168820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16875Cu; }
        if (ctx->pc != 0x16875Cu) { return; }
    }
    ctx->pc = 0x16875Cu;
label_16875c:
    // 0x16875c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16875Cu;
    {
        const bool branch_taken_0x16875c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16875c) {
            ctx->pc = 0x168780u;
            goto label_168780;
        }
    }
    ctx->pc = 0x168764u;
    // 0x168764: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x168764u;
    {
        const bool branch_taken_0x168764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168764u;
            // 0x168768: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168764) {
            ctx->pc = 0x1687A0u;
            goto label_1687a0;
        }
    }
    ctx->pc = 0x16876Cu;
    // 0x16876c: 0x0  nop
    ctx->pc = 0x16876cu;
    // NOP
label_168770:
    // 0x168770: 0xc05b774  jal         func_16DDD0
    ctx->pc = 0x168770u;
    SET_GPR_U32(ctx, 31, 0x168778u);
    ctx->pc = 0x16DDD0u;
    if (runtime->hasFunction(0x16DDD0u)) {
        auto targetFn = runtime->lookupFunction(0x16DDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168778u; }
        if (ctx->pc != 0x168778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DDD0_0x16ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168778u; }
        if (ctx->pc != 0x168778u) { return; }
    }
    ctx->pc = 0x168778u;
label_168778:
    // 0x168778: 0xc05a174  jal         func_1685D0
    ctx->pc = 0x168778u;
    SET_GPR_U32(ctx, 31, 0x168780u);
    ctx->pc = 0x1685D0u;
    if (runtime->hasFunction(0x1685D0u)) {
        auto targetFn = runtime->lookupFunction(0x1685D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168780u; }
        if (ctx->pc != 0x168780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001685D0_0x1685d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168780u; }
        if (ctx->pc != 0x168780u) { return; }
    }
    ctx->pc = 0x168780u;
label_168780:
    // 0x168780: 0xc05a484  jal         func_169210
    ctx->pc = 0x168780u;
    SET_GPR_U32(ctx, 31, 0x168788u);
    ctx->pc = 0x168784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168780u;
            // 0x168784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169210u;
    if (runtime->hasFunction(0x169210u)) {
        auto targetFn = runtime->lookupFunction(0x169210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168788u; }
        if (ctx->pc != 0x168788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169210_0x169210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168788u; }
        if (ctx->pc != 0x168788u) { return; }
    }
    ctx->pc = 0x168788u;
label_168788:
    // 0x168788: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x168788u;
    {
        const bool branch_taken_0x168788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x16878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168788u;
            // 0x16878c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168788) {
            ctx->pc = 0x168798u;
            goto label_168798;
        }
    }
    ctx->pc = 0x168790u;
    // 0x168790: 0x1451fff7  bne         $v0, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x168790u;
    {
        const bool branch_taken_0x168790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x168794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168790u;
            // 0x168794: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168790) {
            ctx->pc = 0x168770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168770;
        }
    }
    ctx->pc = 0x168798u;
label_168798:
    // 0x168798: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x168798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16879c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16879cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1687a0:
    // 0x1687a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1687a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1687a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1687a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1687a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1687a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1687ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1687ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1687B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1687ACu;
            // 0x1687b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1687B4u;
    // 0x1687b4: 0x0  nop
    ctx->pc = 0x1687b4u;
    // NOP
}
