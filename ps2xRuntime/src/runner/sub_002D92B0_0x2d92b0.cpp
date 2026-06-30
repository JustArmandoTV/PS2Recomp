#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D92B0
// Address: 0x2d92b0 - 0x2d9370
void sub_002D92B0_0x2d92b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D92B0_0x2d92b0");
#endif

    switch (ctx->pc) {
        case 0x2d92f0u: goto label_2d92f0;
        case 0x2d930cu: goto label_2d930c;
        case 0x2d9324u: goto label_2d9324;
        case 0x2d9338u: goto label_2d9338;
        default: break;
    }

    ctx->pc = 0x2d92b0u;

    // 0x2d92b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d92b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d92b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d92b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d92b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d92b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d92bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d92bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d92c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d92c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d92c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d92c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92c8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x2d92c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d92cc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2d92ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d92d0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d92d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d92d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d92d8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2d92dc: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x2d92dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d92e0: 0x212082b  sltu        $at, $s0, $s2
    ctx->pc = 0x2d92e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d92e4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D92E4u;
    {
        const bool branch_taken_0x2d92e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92e4) {
            ctx->pc = 0x2D9348u;
            goto label_2d9348;
        }
    }
    ctx->pc = 0x2D92ECu;
    // 0x2d92ec: 0x2652ffa0  addiu       $s2, $s2, -0x60
    ctx->pc = 0x2d92ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
label_2d92f0:
    // 0x2d92f0: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D92F0u;
    {
        const bool branch_taken_0x2d92f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92f0) {
            ctx->pc = 0x2D9338u;
            goto label_2d9338;
        }
    }
    ctx->pc = 0x2D92F8u;
    // 0x2d92f8: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x2d92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2d92fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D92FCu;
    {
        const bool branch_taken_0x2d92fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92fc) {
            ctx->pc = 0x2D9310u;
            goto label_2d9310;
        }
    }
    ctx->pc = 0x2D9304u;
    // 0x2d9304: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2D9304u;
    SET_GPR_U32(ctx, 31, 0x2D930Cu);
    ctx->pc = 0x2D9308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9304u;
            // 0x2d9308: 0x8e440044  lw          $a0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D930Cu; }
        if (ctx->pc != 0x2D930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D930Cu; }
        if (ctx->pc != 0x2D930Cu) { return; }
    }
    ctx->pc = 0x2D930Cu;
label_2d930c:
    // 0x2d930c: 0x0  nop
    ctx->pc = 0x2d930cu;
    // NOP
label_2d9310:
    // 0x2d9310: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x2d9310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2d9314: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9314u;
    {
        const bool branch_taken_0x2d9314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9314) {
            ctx->pc = 0x2D9328u;
            goto label_2d9328;
        }
    }
    ctx->pc = 0x2D931Cu;
    // 0x2d931c: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2D931Cu;
    SET_GPR_U32(ctx, 31, 0x2D9324u);
    ctx->pc = 0x2D9320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D931Cu;
            // 0x2d9320: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9324u; }
        if (ctx->pc != 0x2D9324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9324u; }
        if (ctx->pc != 0x2D9324u) { return; }
    }
    ctx->pc = 0x2D9324u;
label_2d9324:
    // 0x2d9324: 0x0  nop
    ctx->pc = 0x2d9324u;
    // NOP
label_2d9328:
    // 0x2d9328: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9328u;
    {
        const bool branch_taken_0x2d9328 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9328) {
            ctx->pc = 0x2D9338u;
            goto label_2d9338;
        }
    }
    ctx->pc = 0x2D9330u;
    // 0x2d9330: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2D9330u;
    SET_GPR_U32(ctx, 31, 0x2D9338u);
    ctx->pc = 0x2D9334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9330u;
            // 0x2d9334: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9338u; }
        if (ctx->pc != 0x2D9338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9338u; }
        if (ctx->pc != 0x2D9338u) { return; }
    }
    ctx->pc = 0x2D9338u;
label_2d9338:
    // 0x2d9338: 0x212082b  sltu        $at, $s0, $s2
    ctx->pc = 0x2d9338u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d933c: 0x5420ffec  bnel        $at, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D933Cu;
    {
        const bool branch_taken_0x2d933c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d933c) {
            ctx->pc = 0x2D9340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D933Cu;
            // 0x2d9340: 0x2652ffa0  addiu       $s2, $s2, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D92F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d92f0;
        }
    }
    ctx->pc = 0x2D9344u;
    // 0x2d9344: 0x0  nop
    ctx->pc = 0x2d9344u;
    // NOP
label_2d9348:
    // 0x2d9348: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2d9348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2d934c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d934cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d935c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D935Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D935Cu;
            // 0x2d9360: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9364u;
    // 0x2d9364: 0x0  nop
    ctx->pc = 0x2d9364u;
    // NOP
    // 0x2d9368: 0x0  nop
    ctx->pc = 0x2d9368u;
    // NOP
    // 0x2d936c: 0x0  nop
    ctx->pc = 0x2d936cu;
    // NOP
}
