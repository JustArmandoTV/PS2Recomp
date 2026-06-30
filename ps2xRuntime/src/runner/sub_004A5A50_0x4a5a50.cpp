#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5A50
// Address: 0x4a5a50 - 0x4a5a60
void sub_004A5A50_0x4a5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5A50_0x4a5a50");
#endif

    ctx->pc = 0x4a5a50u;

    // 0x4a5a50: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4a5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4a5a54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a5a58: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5A58u;
            // 0x4a5a5c: 0xe46c0e1c  swc1        $f12, 0xE1C($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3612), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5A60u;
}
