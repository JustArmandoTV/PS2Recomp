#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0DB0
// Address: 0x1a0db0 - 0x1a0de0
void sub_001A0DB0_0x1a0db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0DB0_0x1a0db0");
#endif

    ctx->pc = 0x1a0db0u;

    // 0x1a0db0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a0db4: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x1a0db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1a0db8: 0x344249e4  ori         $v0, $v0, 0x49E4
    ctx->pc = 0x1a0db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18916);
    // 0x1a0dbc: 0x34039c40  ori         $v1, $zero, 0x9C40
    ctx->pc = 0x1a0dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
    // 0x1a0dc0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a0dc4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a0dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a0dc8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1a0dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1a0dcc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0dd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a0dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0dd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DD8u;
            // 0x1a0ddc: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0DE0u;
}
