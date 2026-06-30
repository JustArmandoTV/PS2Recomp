#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C24F8
// Address: 0x1c24f8 - 0x1c2540
void sub_001C24F8_0x1c24f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C24F8_0x1c24f8");
#endif

    switch (ctx->pc) {
        case 0x1c2518u: goto label_1c2518;
        default: break;
    }

    ctx->pc = 0x1c24f8u;

    // 0x1c24f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c24f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c24fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c24fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2504: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2504u;
    {
        const bool branch_taken_0x1c2504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2504u;
            // 0x1c2508: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2504) {
            ctx->pc = 0x1C2518u;
            goto label_1c2518;
        }
    }
    ctx->pc = 0x1C250Cu;
    // 0x1c250c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c250cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2510: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C2510u;
    SET_GPR_U32(ctx, 31, 0x1C2518u);
    ctx->pc = 0x1C2514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2510u;
            // 0x1c2514: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2518u; }
        if (ctx->pc != 0x1C2518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2518u; }
        if (ctx->pc != 0x1C2518u) { return; }
    }
    ctx->pc = 0x1C2518u;
label_1c2518:
    // 0x1c2518: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c2518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c251c: 0x8c42a4d8  lw          $v0, -0x5B28($v0)
    ctx->pc = 0x1c251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c2520: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1c2520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1c2524: 0x52030001  beql        $s0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C2524u;
    {
        const bool branch_taken_0x1c2524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2524) {
            ctx->pc = 0x1C2528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2524u;
            // 0x1c2528: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C252Cu;
            goto label_1c252c;
        }
    }
    ctx->pc = 0x1C252Cu;
label_1c252c:
    // 0x1c252c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c252cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2530: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c2530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2534: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2534u;
            // 0x1c2538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C253Cu;
    // 0x1c253c: 0x0  nop
    ctx->pc = 0x1c253cu;
    // NOP
}
