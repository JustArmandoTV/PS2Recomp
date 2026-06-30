#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306800
// Address: 0x306800 - 0x306810
void sub_00306800_0x306800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306800_0x306800");
#endif

    ctx->pc = 0x306800u;

    // 0x306800: 0x3e00008  jr          $ra
    ctx->pc = 0x306800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306800u;
            // 0x306804: 0xe48c0dec  swc1        $f12, 0xDEC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x306808u;
    // 0x306808: 0x0  nop
    ctx->pc = 0x306808u;
    // NOP
    // 0x30680c: 0x0  nop
    ctx->pc = 0x30680cu;
    // NOP
}
