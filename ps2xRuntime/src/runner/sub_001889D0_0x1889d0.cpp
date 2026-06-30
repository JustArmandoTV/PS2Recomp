#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001889D0
// Address: 0x1889d0 - 0x188a10
void sub_001889D0_0x1889d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001889D0_0x1889d0");
#endif

    switch (ctx->pc) {
        case 0x1889f4u: goto label_1889f4;
        default: break;
    }

    ctx->pc = 0x1889d0u;

    // 0x1889d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1889d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1889d4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1889d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1889d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1889d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1889dc: 0x2450690c  addiu       $s0, $v0, 0x690C
    ctx->pc = 0x1889dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26892));
    // 0x1889e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1889e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1889e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1889E4u;
    {
        const bool branch_taken_0x1889e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1889E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889E4u;
            // 0x1889e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889e4) {
            ctx->pc = 0x1889F4u;
            goto label_1889f4;
        }
    }
    ctx->pc = 0x1889ECu;
    // 0x1889ec: 0xc06224a  jal         func_188928
    ctx->pc = 0x1889ECu;
    SET_GPR_U32(ctx, 31, 0x1889F4u);
    ctx->pc = 0x188928u;
    if (runtime->hasFunction(0x188928u)) {
        auto targetFn = runtime->lookupFunction(0x188928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889F4u; }
        if (ctx->pc != 0x1889F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188928_0x188928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889F4u; }
        if (ctx->pc != 0x1889F4u) { return; }
    }
    ctx->pc = 0x1889F4u;
label_1889f4:
    // 0x1889f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1889f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1889f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1889f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1889fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1889fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188a00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x188a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x188a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188a08: 0x3e00008  jr          $ra
    ctx->pc = 0x188A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A08u;
            // 0x188a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188A10u;
}
