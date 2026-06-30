#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A4DF0
// Address: 0x3a4df0 - 0x3a4e10
void sub_003A4DF0_0x3a4df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4DF0_0x3a4df0");
#endif

    ctx->pc = 0x3a4df0u;

    // 0x3a4df0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3a4df4: 0xe46c64d8  swc1        $f12, 0x64D8($v1)
    ctx->pc = 0x3a4df4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25816), bits); }
    // 0x3a4df8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a4df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3a4dfc: 0xe46d64dc  swc1        $f13, 0x64DC($v1)
    ctx->pc = 0x3a4dfcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25820), bits); }
    // 0x3a4e00: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a4e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3a4e04: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4E04u;
            // 0x3a4e08: 0xe46e64e0  swc1        $f14, 0x64E0($v1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25824), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4E0Cu;
    // 0x3a4e0c: 0x0  nop
    ctx->pc = 0x3a4e0cu;
    // NOP
}
