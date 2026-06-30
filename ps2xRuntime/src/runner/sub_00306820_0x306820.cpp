#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306820
// Address: 0x306820 - 0x306830
void sub_00306820_0x306820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306820_0x306820");
#endif

    ctx->pc = 0x306820u;

    // 0x306820: 0x3e00008  jr          $ra
    ctx->pc = 0x306820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306820u;
            // 0x306824: 0xc4800de8  lwc1        $f0, 0xDE8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x306828u;
    // 0x306828: 0x0  nop
    ctx->pc = 0x306828u;
    // NOP
    // 0x30682c: 0x0  nop
    ctx->pc = 0x30682cu;
    // NOP
}
