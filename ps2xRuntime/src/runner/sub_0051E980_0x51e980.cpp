#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051E980
// Address: 0x51e980 - 0x51e9e0
void sub_0051E980_0x51e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051E980_0x51e980");
#endif

    ctx->pc = 0x51e980u;

    // 0x51e980: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x51e980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x51e984: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x51e984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x51e988: 0x0  nop
    ctx->pc = 0x51e988u;
    // NOP
    // 0x51e98c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x51e98cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x51e990: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x51E990u;
    {
        const bool branch_taken_0x51e990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x51e990) {
            ctx->pc = 0x51E9C0u;
            goto label_51e9c0;
        }
    }
    ctx->pc = 0x51E998u;
    // 0x51e998: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x51e998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x51e99c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x51e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x51e9a0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x51e9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x51e9a4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x51e9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51e9a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x51e9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x51e9ac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x51e9acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x51e9b0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x51E9B0u;
    {
        const bool branch_taken_0x51e9b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x51E9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E9B0u;
            // 0x51e9b4: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e9b0) {
            ctx->pc = 0x51E9D4u;
            goto label_51e9d4;
        }
    }
    ctx->pc = 0x51E9B8u;
    // 0x51e9b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x51E9B8u;
    {
        const bool branch_taken_0x51e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51E9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E9B8u;
            // 0x51e9bc: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e9b8) {
            ctx->pc = 0x51E9D4u;
            goto label_51e9d4;
        }
    }
    ctx->pc = 0x51E9C0u;
label_51e9c0:
    // 0x51e9c0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x51e9c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x51e9c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x51E9C4u;
    {
        const bool branch_taken_0x51e9c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51e9c4) {
            ctx->pc = 0x51E9D4u;
            goto label_51e9d4;
        }
    }
    ctx->pc = 0x51E9CCu;
    // 0x51e9cc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x51e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x51e9d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x51e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_51e9d4:
    // 0x51e9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x51E9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51E9DCu;
    // 0x51e9dc: 0x0  nop
    ctx->pc = 0x51e9dcu;
    // NOP
}
