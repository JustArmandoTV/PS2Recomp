#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012AD80
// Address: 0x12ad80 - 0x12ad98
void sub_0012AD80_0x12ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AD80_0x12ad80");
#endif

    ctx->pc = 0x12ad80u;

    // 0x12ad80: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12ad80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12ad84: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12ad84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12ad88: 0x8dee1ad8  lw          $t6, 0x1AD8($t7)
    ctx->pc = 0x12ad88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12ad8c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12ad8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12ad90: 0x3e00008  jr          $ra
    ctx->pc = 0x12AD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD90u;
            // 0x12ad94: 0xfdc400a8  sd          $a0, 0xA8($t6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 14), 168), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12AD98u;
}
