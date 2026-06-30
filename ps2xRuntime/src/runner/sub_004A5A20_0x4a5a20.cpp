#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5A20
// Address: 0x4a5a20 - 0x4a5a30
void sub_004A5A20_0x4a5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5A20_0x4a5a20");
#endif

    ctx->pc = 0x4a5a20u;

    // 0x4a5a20: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x4a5a20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4a5a24: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5A24u;
            // 0x4a5a28: 0xac850018  sw          $a1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5A2Cu;
    // 0x4a5a2c: 0x0  nop
    ctx->pc = 0x4a5a2cu;
    // NOP
}
