#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358E80
// Address: 0x358e80 - 0x358ea0
void sub_00358E80_0x358e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358E80_0x358e80");
#endif

    ctx->pc = 0x358e80u;

    // 0x358e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358e84: 0xa32804  sllv        $a1, $v1, $a1
    ctx->pc = 0x358e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x358e88: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x358e88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x358e8c: 0xa02827  not         $a1, $a1
    ctx->pc = 0x358e8cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x358e90: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x358e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x358e94: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x358e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x358e98: 0x3e00008  jr          $ra
    ctx->pc = 0x358E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358E98u;
            // 0x358e9c: 0xa083004d  sb          $v1, 0x4D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358EA0u;
}
