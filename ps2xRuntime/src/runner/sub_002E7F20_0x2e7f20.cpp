#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E7F20
// Address: 0x2e7f20 - 0x2e7f50
void sub_002E7F20_0x2e7f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7F20_0x2e7f20");
#endif

    ctx->pc = 0x2e7f20u;

    // 0x2e7f20: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2e7f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e7f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f28: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2e7f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2e7f2c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2e7f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f30: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2e7f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2e7f34: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2e7f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f38: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2e7f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2e7f3c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2e7f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f40: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F40u;
            // 0x2e7f44: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7F48u;
    // 0x2e7f48: 0x0  nop
    ctx->pc = 0x2e7f48u;
    // NOP
    // 0x2e7f4c: 0x0  nop
    ctx->pc = 0x2e7f4cu;
    // NOP
}
