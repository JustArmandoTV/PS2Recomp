#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306830
// Address: 0x306830 - 0x306840
void sub_00306830_0x306830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306830_0x306830");
#endif

    ctx->pc = 0x306830u;

    // 0x306830: 0x3e00008  jr          $ra
    ctx->pc = 0x306830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306830u;
            // 0x306834: 0xe48c0de4  swc1        $f12, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x306838u;
    // 0x306838: 0x0  nop
    ctx->pc = 0x306838u;
    // NOP
    // 0x30683c: 0x0  nop
    ctx->pc = 0x30683cu;
    // NOP
}
