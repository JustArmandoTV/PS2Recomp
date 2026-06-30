#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0D80
// Address: 0x1a0d80 - 0x1a0db0
void sub_001A0D80_0x1a0d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0D80_0x1a0d80");
#endif

    ctx->pc = 0x1a0d80u;

    // 0x1a0d80: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a0d84: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x1a0d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1a0d88: 0x344249e4  ori         $v0, $v0, 0x49E4
    ctx->pc = 0x1a0d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18916);
    // 0x1a0d8c: 0x24036978  addiu       $v1, $zero, 0x6978
    ctx->pc = 0x1a0d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27000));
    // 0x1a0d90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a0d94: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a0d98: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1a0d98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1a0d9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0da0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a0da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DA8u;
            // 0x1a0dac: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0DB0u;
}
