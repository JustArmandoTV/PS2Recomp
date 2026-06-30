#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A92E0
// Address: 0x1a92e0 - 0x1a9340
void sub_001A92E0_0x1a92e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A92E0_0x1a92e0");
#endif

    switch (ctx->pc) {
        case 0x1a92f4u: goto label_1a92f4;
        default: break;
    }

    ctx->pc = 0x1a92e0u;

    // 0x1a92e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a92e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a92e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a92e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a92e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a92e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a92ec: 0xc06a4d0  jal         func_1A9340
    ctx->pc = 0x1A92ECu;
    SET_GPR_U32(ctx, 31, 0x1A92F4u);
    ctx->pc = 0x1A92F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92ECu;
            // 0x1a92f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9340u;
    if (runtime->hasFunction(0x1A9340u)) {
        auto targetFn = runtime->lookupFunction(0x1A9340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92F4u; }
        if (ctx->pc != 0x1A92F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9340_0x1a9340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92F4u; }
        if (ctx->pc != 0x1A92F4u) { return; }
    }
    ctx->pc = 0x1A92F4u;
label_1a92f4:
    // 0x1a92f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a92f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a92fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A92FCu;
    {
        const bool branch_taken_0x1a92fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a92fc) {
            ctx->pc = 0x1A9300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92FCu;
            // 0x1a9300: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9320u;
            goto label_1a9320;
        }
    }
    ctx->pc = 0x1A9304u;
    // 0x1a9304: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a9304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a9308: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9308u;
    {
        const bool branch_taken_0x1a9308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A930Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9308u;
            // 0x1a930c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9308) {
            ctx->pc = 0x1A9330u;
            goto label_1a9330;
        }
    }
    ctx->pc = 0x1A9310u;
    // 0x1a9310: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a9310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a9314: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9314u;
    {
        const bool branch_taken_0x1a9314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9314u;
            // 0x1a9318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9314) {
            ctx->pc = 0x1A9330u;
            goto label_1a9330;
        }
    }
    ctx->pc = 0x1A931Cu;
    // 0x1a931c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a9320:
    // 0x1a9320: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a9320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a9324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9328: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x1a9328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1a932c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a932cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a9330:
    // 0x1a9330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a9334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9338: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9338u;
            // 0x1a933c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9340u;
}
