#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A93B0
// Address: 0x2a93b0 - 0x2a9410
void sub_002A93B0_0x2a93b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A93B0_0x2a93b0");
#endif

    ctx->pc = 0x2a93b0u;

    // 0x2a93b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2a93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a93b4: 0x24430064  addiu       $v1, $v0, 0x64
    ctx->pc = 0x2a93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x2a93b8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2a93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2a93bc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2a93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a93c0: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A93C0u;
    {
        const bool branch_taken_0x2a93c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a93c0) {
            ctx->pc = 0x2A93C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A93C0u;
            // 0x2a93c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9400u;
            goto label_2a9400;
        }
    }
    ctx->pc = 0x2A93C8u;
    // 0x2a93c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a93cc: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2a93ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a93d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a93d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a93d4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a93d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a93d8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A93D8u;
    {
        const bool branch_taken_0x2a93d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a93d8) {
            ctx->pc = 0x2A93DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A93D8u;
            // 0x2a93dc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A93ECu;
            goto label_2a93ec;
        }
    }
    ctx->pc = 0x2A93E0u;
    // 0x2a93e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a93e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a93e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a93e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a93ec:
    // 0x2a93ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a93f0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2a93f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2a93f4: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x2a93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x2a93f8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2a93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2a93fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a93fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9400:
    // 0x2a9400: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9408u;
    // 0x2a9408: 0x0  nop
    ctx->pc = 0x2a9408u;
    // NOP
    // 0x2a940c: 0x0  nop
    ctx->pc = 0x2a940cu;
    // NOP
}
