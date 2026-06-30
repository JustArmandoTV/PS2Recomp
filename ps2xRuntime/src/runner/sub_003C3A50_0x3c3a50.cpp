#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3A50
// Address: 0x3c3a50 - 0x3c3a60
void sub_003C3A50_0x3c3a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3A50_0x3c3a50");
#endif

    ctx->pc = 0x3c3a50u;

    // 0x3c3a50: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3c3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3c3a54: 0xc4608400  lwc1        $f0, -0x7C00($v1)
    ctx->pc = 0x3c3a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294935552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c3a58: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3A58u;
            // 0x3c3a5c: 0xe48001cc  swc1        $f0, 0x1CC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3A60u;
}
