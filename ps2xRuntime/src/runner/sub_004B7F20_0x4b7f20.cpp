#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B7F20
// Address: 0x4b7f20 - 0x4b7f40
void sub_004B7F20_0x4b7f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7F20_0x4b7f20");
#endif

    ctx->pc = 0x4b7f20u;

    // 0x4b7f20: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x4b7f20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4b7f24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b7f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7f28: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x4b7f28u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4b7f2c: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x4b7f2cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4b7f30: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7F30u;
            // 0x4b7f34: 0xe48f000c  swc1        $f15, 0xC($a0) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B7F38u;
    // 0x4b7f38: 0x0  nop
    ctx->pc = 0x4b7f38u;
    // NOP
    // 0x4b7f3c: 0x0  nop
    ctx->pc = 0x4b7f3cu;
    // NOP
}
