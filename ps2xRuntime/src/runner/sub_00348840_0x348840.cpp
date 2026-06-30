#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348840
// Address: 0x348840 - 0x3488a0
void sub_00348840_0x348840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348840_0x348840");
#endif

    switch (ctx->pc) {
        case 0x348864u: goto label_348864;
        case 0x348880u: goto label_348880;
        default: break;
    }

    ctx->pc = 0x348840u;

    // 0x348840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x348848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34884c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34884cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348850: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x348850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x348854: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x348854u;
    {
        const bool branch_taken_0x348854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348854) {
            ctx->pc = 0x348858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348854u;
            // 0x348858: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x348868u;
            goto label_348868;
        }
    }
    ctx->pc = 0x34885Cu;
    // 0x34885c: 0xc04008c  jal         func_100230
    ctx->pc = 0x34885Cu;
    SET_GPR_U32(ctx, 31, 0x348864u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348864u; }
        if (ctx->pc != 0x348864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348864u; }
        if (ctx->pc != 0x348864u) { return; }
    }
    ctx->pc = 0x348864u;
label_348864:
    // 0x348864: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x348864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_348868:
    // 0x348868: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x348868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x34886c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34886Cu;
    {
        const bool branch_taken_0x34886c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34886c) {
            ctx->pc = 0x348870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34886Cu;
            // 0x348870: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x348884u;
            goto label_348884;
        }
    }
    ctx->pc = 0x348874u;
    // 0x348874: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x348874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x348878: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x348878u;
    SET_GPR_U32(ctx, 31, 0x348880u);
    ctx->pc = 0x34887Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348878u;
            // 0x34887c: 0x24a58490  addiu       $a1, $a1, -0x7B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348880u; }
        if (ctx->pc != 0x348880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348880u; }
        if (ctx->pc != 0x348880u) { return; }
    }
    ctx->pc = 0x348880u;
label_348880:
    // 0x348880: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x348880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_348884:
    // 0x348884: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x348884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x348888: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x348888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x34888c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x34888cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x348890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348898: 0x3e00008  jr          $ra
    ctx->pc = 0x348898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348898u;
            // 0x34889c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3488A0u;
}
