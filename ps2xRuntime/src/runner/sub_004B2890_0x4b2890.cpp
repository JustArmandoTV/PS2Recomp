#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B2890
// Address: 0x4b2890 - 0x4b28f0
void sub_004B2890_0x4b2890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2890_0x4b2890");
#endif

    ctx->pc = 0x4b2890u;

    // 0x4b2890: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b2890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4b2894: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b2894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x4b2898: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x4b2898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b289c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b289cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b28a0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4b28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b28a4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4b28a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4b28a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b28a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b28ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4B28ACu;
    {
        const bool branch_taken_0x4b28ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B28B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B28ACu;
            // 0x4b28b0: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b28ac) {
            ctx->pc = 0x4B28B8u;
            goto label_4b28b8;
        }
    }
    ctx->pc = 0x4B28B4u;
    // 0x4b28b4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4b28b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_4b28b8:
    // 0x4b28b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4b28bc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x4b28c0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x4b28c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b28c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b28c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b28c8: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4b28c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b28cc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4b28ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4b28d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b28d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b28d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4B28D4u;
    {
        const bool branch_taken_0x4b28d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B28D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B28D4u;
            // 0x4b28d8: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b28d4) {
            ctx->pc = 0x4B28E0u;
            goto label_4b28e0;
        }
    }
    ctx->pc = 0x4B28DCu;
    // 0x4b28dc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x4b28dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_4b28e0:
    // 0x4b28e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B28E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B28E8u;
    // 0x4b28e8: 0x0  nop
    ctx->pc = 0x4b28e8u;
    // NOP
    // 0x4b28ec: 0x0  nop
    ctx->pc = 0x4b28ecu;
    // NOP
}
