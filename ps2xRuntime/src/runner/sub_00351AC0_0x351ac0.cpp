#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351AC0
// Address: 0x351ac0 - 0x351ae0
void sub_00351AC0_0x351ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351AC0_0x351ac0");
#endif

    ctx->pc = 0x351ac0u;

    // 0x351ac0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x351ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x351ac4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x351ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351ac8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x351ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x351acc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x351accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x351ad0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x351ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x351ad4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x351ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x351ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x351AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351AD8u;
            // 0x351adc: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351AE0u;
}
