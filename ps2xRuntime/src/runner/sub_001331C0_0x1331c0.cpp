#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001331C0
// Address: 0x1331c0 - 0x1331f0
void sub_001331C0_0x1331c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001331C0_0x1331c0");
#endif

    ctx->pc = 0x1331c0u;

    // 0x1331c0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1331c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1331c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1331c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1331c8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1331c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1331cc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1331ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1331d0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1331d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1331d4: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x1331d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1331d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1331d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1331dc: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1331dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1331e0: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1331e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1331e4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1331e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1331e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1331E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1331ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1331E8u;
            // 0x1331ec: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1331F0u;
}
