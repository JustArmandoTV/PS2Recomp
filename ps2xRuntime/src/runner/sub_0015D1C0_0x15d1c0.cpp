#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D1C0
// Address: 0x15d1c0 - 0x15d1f0
void sub_0015D1C0_0x15d1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D1C0_0x15d1c0");
#endif

    ctx->pc = 0x15d1c0u;

    // 0x15d1c0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15d1c4: 0xe46cce10  swc1        $f12, -0x31F0($v1)
    ctx->pc = 0x15d1c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954512), bits); }
    // 0x15d1c8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15d1cc: 0xe46dce14  swc1        $f13, -0x31EC($v1)
    ctx->pc = 0x15d1ccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954516), bits); }
    // 0x15d1d0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15d1d4: 0xe46ece20  swc1        $f14, -0x31E0($v1)
    ctx->pc = 0x15d1d4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954528), bits); }
    // 0x15d1d8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15d1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x15D1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1DCu;
            // 0x15d1e0: 0xe46fce24  swc1        $f15, -0x31DC($v1) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954532), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D1E4u;
    // 0x15d1e4: 0x0  nop
    ctx->pc = 0x15d1e4u;
    // NOP
    // 0x15d1e8: 0x0  nop
    ctx->pc = 0x15d1e8u;
    // NOP
    // 0x15d1ec: 0x0  nop
    ctx->pc = 0x15d1ecu;
    // NOP
}
