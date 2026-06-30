#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00439CF0
// Address: 0x439cf0 - 0x439d10
void sub_00439CF0_0x439cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439CF0_0x439cf0");
#endif

    ctx->pc = 0x439cf0u;

    // 0x439cf0: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x439cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x439cf4: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x439cf4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x439cf8: 0xe48d000c  swc1        $f13, 0xC($a0)
    ctx->pc = 0x439cf8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x439cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x439CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439CFCu;
            // 0x439d00: 0xe48e0014  swc1        $f14, 0x14($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x439D04u;
    // 0x439d04: 0x0  nop
    ctx->pc = 0x439d04u;
    // NOP
    // 0x439d08: 0x0  nop
    ctx->pc = 0x439d08u;
    // NOP
    // 0x439d0c: 0x0  nop
    ctx->pc = 0x439d0cu;
    // NOP
}
