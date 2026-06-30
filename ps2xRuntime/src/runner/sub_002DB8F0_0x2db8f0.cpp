#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB8F0
// Address: 0x2db8f0 - 0x2db910
void sub_002DB8F0_0x2db8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB8F0_0x2db8f0");
#endif

    ctx->pc = 0x2db8f0u;

    // 0x2db8f0: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x2db8f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2db8f4: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x2db8f4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2db8f8: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x2db8f8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2db8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB8FCu;
            // 0x2db900: 0xe48f000c  swc1        $f15, 0xC($a0) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB904u;
    // 0x2db904: 0x0  nop
    ctx->pc = 0x2db904u;
    // NOP
    // 0x2db908: 0x0  nop
    ctx->pc = 0x2db908u;
    // NOP
    // 0x2db90c: 0x0  nop
    ctx->pc = 0x2db90cu;
    // NOP
}
