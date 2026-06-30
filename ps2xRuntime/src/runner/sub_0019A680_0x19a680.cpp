#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A680
// Address: 0x19a680 - 0x19a6c0
void sub_0019A680_0x19a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A680_0x19a680");
#endif

    switch (ctx->pc) {
        case 0x19a690u: goto label_19a690;
        default: break;
    }

    ctx->pc = 0x19a680u;

    // 0x19a680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a688: 0xc067a88  jal         func_19EA20
    ctx->pc = 0x19A688u;
    SET_GPR_U32(ctx, 31, 0x19A690u);
    ctx->pc = 0x19A68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A688u;
            // 0x19a68c: 0x8c8500c8  lw          $a1, 0xC8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EA20u;
    if (runtime->hasFunction(0x19EA20u)) {
        auto targetFn = runtime->lookupFunction(0x19EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A690u; }
        if (ctx->pc != 0x19A690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EA20_0x19ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A690u; }
        if (ctx->pc != 0x19A690u) { return; }
    }
    ctx->pc = 0x19A690u;
label_19a690:
    // 0x19a690: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a694: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x19a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x19a698: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A698u;
    {
        const bool branch_taken_0x19a698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A698u;
            // 0x19a69c: 0x24040061  addiu       $a0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a698) {
            ctx->pc = 0x19A6A8u;
            goto label_19a6a8;
        }
    }
    ctx->pc = 0x19A6A0u;
    // 0x19a6a0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A6A0u;
    {
        const bool branch_taken_0x19a6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x19A6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A6A0u;
            // 0x19a6a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6a0) {
            ctx->pc = 0x19A6B0u;
            goto label_19a6b0;
        }
    }
    ctx->pc = 0x19A6A8u;
label_19a6a8:
    // 0x19a6a8: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x19a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x19a6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a6b0:
    // 0x19a6b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19a6b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x19A6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A6B4u;
            // 0x19a6b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A6BCu;
    // 0x19a6bc: 0x0  nop
    ctx->pc = 0x19a6bcu;
    // NOP
}
