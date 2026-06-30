#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001848B8
// Address: 0x1848b8 - 0x1848f8
void sub_001848B8_0x1848b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001848B8_0x1848b8");
#endif

    ctx->pc = 0x1848b8u;

    // 0x1848b8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1848b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1848bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1848bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1848c0: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1848c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
    // 0x1848c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1848c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848c8: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1848C8u;
    {
        const bool branch_taken_0x1848c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1848CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1848C8u;
            // 0x1848cc: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848c8) {
            ctx->pc = 0x1848E0u;
            goto label_1848e0;
        }
    }
    ctx->pc = 0x1848D0u;
    // 0x1848d0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1848d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x1848d4: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x1848d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
    // 0x1848d8: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1848D8u;
    {
        const bool branch_taken_0x1848d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1848DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1848D8u;
            // 0x1848dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848d8) {
            ctx->pc = 0x1848ECu;
            goto label_1848ec;
        }
    }
    ctx->pc = 0x1848E0u;
label_1848e0:
    // 0x1848e0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1848e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1848e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1848e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1848e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1848e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1848ec:
    // 0x1848ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1848ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1848F4u;
    // 0x1848f4: 0x0  nop
    ctx->pc = 0x1848f4u;
    // NOP
}
