#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5C60
// Address: 0x4a5c60 - 0x4a5c70
void sub_004A5C60_0x4a5c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5C60_0x4a5c60");
#endif

    ctx->pc = 0x4a5c60u;

    // 0x4a5c60: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4a5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4a5c64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a5c68: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5C68u;
            // 0x4a5c6c: 0xc4400e1c  lwc1        $f0, 0xE1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5C70u;
}
