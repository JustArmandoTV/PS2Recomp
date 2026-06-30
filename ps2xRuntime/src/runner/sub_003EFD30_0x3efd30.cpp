#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EFD30
// Address: 0x3efd30 - 0x3efd60
void sub_003EFD30_0x3efd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFD30_0x3efd30");
#endif

    ctx->pc = 0x3efd30u;

    // 0x3efd30: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3efd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3efd34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3efd34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efd38: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3efd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3efd3c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3efd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3efd40: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3efd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3efd44: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3efd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3efd48: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3efd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3efd4c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3efd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3efd50: 0x3e00008  jr          $ra
    ctx->pc = 0x3EFD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFD50u;
            // 0x3efd54: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EFD58u;
    // 0x3efd58: 0x0  nop
    ctx->pc = 0x3efd58u;
    // NOP
    // 0x3efd5c: 0x0  nop
    ctx->pc = 0x3efd5cu;
    // NOP
}
