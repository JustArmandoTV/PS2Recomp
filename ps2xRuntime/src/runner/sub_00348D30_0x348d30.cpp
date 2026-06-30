#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348D30
// Address: 0x348d30 - 0x348d60
void sub_00348D30_0x348d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348D30_0x348d30");
#endif

    ctx->pc = 0x348d30u;

    // 0x348d30: 0x8c850230  lw          $a1, 0x230($a0)
    ctx->pc = 0x348d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x348d34: 0x94a30064  lhu         $v1, 0x64($a1)
    ctx->pc = 0x348d34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x348d38: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x348d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x348d3c: 0xa4a30064  sh          $v1, 0x64($a1)
    ctx->pc = 0x348d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x348d40: 0x8c840234  lw          $a0, 0x234($a0)
    ctx->pc = 0x348d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x348d44: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x348d44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x348d48: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x348d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x348d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x348D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348D4Cu;
            // 0x348d50: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348D54u;
    // 0x348d54: 0x0  nop
    ctx->pc = 0x348d54u;
    // NOP
    // 0x348d58: 0x0  nop
    ctx->pc = 0x348d58u;
    // NOP
    // 0x348d5c: 0x0  nop
    ctx->pc = 0x348d5cu;
    // NOP
}
