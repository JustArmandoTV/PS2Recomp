#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF020
// Address: 0x3bf020 - 0x3bf030
void sub_003BF020_0x3bf020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF020_0x3bf020");
#endif

    ctx->pc = 0x3bf020u;

    // 0x3bf020: 0x8c830d60  lw          $v1, 0xD60($a0)
    ctx->pc = 0x3bf020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x3bf024: 0xe46c0010  swc1        $f12, 0x10($v1)
    ctx->pc = 0x3bf024u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3bf028: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF028u;
            // 0x3bf02c: 0xac650018  sw          $a1, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF030u;
}
