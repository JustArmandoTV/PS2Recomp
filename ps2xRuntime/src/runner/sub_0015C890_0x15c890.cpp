#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C890
// Address: 0x15c890 - 0x15c8b0
void sub_0015C890_0x15c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C890_0x15c890");
#endif

    ctx->pc = 0x15c890u;

    // 0x15c890: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15c890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15c894: 0x2463cce0  addiu       $v1, $v1, -0x3320
    ctx->pc = 0x15c894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954208));
    // 0x15c898: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x15c898u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15c89c: 0xe46d0004  swc1        $f13, 0x4($v1)
    ctx->pc = 0x15c89cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x15c8a0: 0xe46e0008  swc1        $f14, 0x8($v1)
    ctx->pc = 0x15c8a0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15c8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x15C8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C8A4u;
            // 0x15c8a8: 0xe46f000c  swc1        $f15, 0xC($v1) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C8ACu;
    // 0x15c8ac: 0x0  nop
    ctx->pc = 0x15c8acu;
    // NOP
}
