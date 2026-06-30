#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0850
// Address: 0x1a0850 - 0x1a08d8
void sub_001A0850_0x1a0850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0850_0x1a0850");
#endif

    switch (ctx->pc) {
        case 0x1a0860u: goto label_1a0860;
        case 0x1a0878u: goto label_1a0878;
        case 0x1a08c0u: goto label_1a08c0;
        default: break;
    }

    ctx->pc = 0x1a0850u;

    // 0x1a0850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0858: 0xc06018a  jal         func_180628
    ctx->pc = 0x1A0858u;
    SET_GPR_U32(ctx, 31, 0x1A0860u);
    ctx->pc = 0x180628u;
    if (runtime->hasFunction(0x180628u)) {
        auto targetFn = runtime->lookupFunction(0x180628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0860u; }
        if (ctx->pc != 0x1A0860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180628_0x180628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0860u; }
        if (ctx->pc != 0x1A0860u) { return; }
    }
    ctx->pc = 0x1A0860u;
label_1a0860:
    // 0x1a0860: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1a0860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1a0864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0868: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a0868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a086c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A086Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A086Cu;
            // 0x1a0870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0874u;
    // 0x1a0874: 0x0  nop
    ctx->pc = 0x1a0874u;
    // NOP
label_1a0878:
    // 0x1a0878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a087c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0880: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a0884: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0884u;
    {
        const bool branch_taken_0x1a0884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0884u;
            // 0x1a0888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0884) {
            ctx->pc = 0x1A0898u;
            goto label_1a0898;
        }
    }
    ctx->pc = 0x1A088Cu;
    // 0x1a088c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a088cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0890: 0x806029c  j           func_180A70
    ctx->pc = 0x1A0890u;
    ctx->pc = 0x1A0894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0890u;
            // 0x1a0894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A70u;
    if (runtime->hasFunction(0x180A70u)) {
        auto targetFn = runtime->lookupFunction(0x180A70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180A70_0x180a70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0898u;
label_1a0898:
    // 0x1a0898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a089c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A089Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A08A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A089Cu;
            // 0x1a08a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A08A4u;
    // 0x1a08a4: 0x0  nop
    ctx->pc = 0x1a08a4u;
    // NOP
    // 0x1a08a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a08a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a08ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a08acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a08b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a08b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a08b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a08b8: 0xc0602c6  jal         func_180B18
    ctx->pc = 0x1A08B8u;
    SET_GPR_U32(ctx, 31, 0x1A08C0u);
    ctx->pc = 0x1A08BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08B8u;
            // 0x1a08bc: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180B18u;
    if (runtime->hasFunction(0x180B18u)) {
        auto targetFn = runtime->lookupFunction(0x180B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08C0u; }
        if (ctx->pc != 0x1A08C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180B18_0x180b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08C0u; }
        if (ctx->pc != 0x1A08C0u) { return; }
    }
    ctx->pc = 0x1A08C0u;
label_1a08c0:
    // 0x1a08c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a08c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a08c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a08c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a08c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a08c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a08cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A08CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A08D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08CCu;
            // 0x1a08d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A08D4u;
    // 0x1a08d4: 0x0  nop
    ctx->pc = 0x1a08d4u;
    // NOP
}
