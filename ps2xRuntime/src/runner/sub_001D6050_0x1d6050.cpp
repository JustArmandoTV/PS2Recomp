#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D6050
// Address: 0x1d6050 - 0x1d60c0
void sub_001D6050_0x1d6050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6050_0x1d6050");
#endif

    ctx->pc = 0x1d6050u;

    // 0x1d6050: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1d6050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1d6054: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x1d6054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x1d6058: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x1d6058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x1d605c: 0x24a5fac8  addiu       $a1, $a1, -0x538
    ctx->pc = 0x1d605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965960));
    // 0x1d6060: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x1d6060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6064: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x1d6064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1d6068: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1d6068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d606c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x1d606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d6070: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d6070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d6074: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d6074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d6078: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1d6078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1d607c: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x1d607cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x1d6080: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1d6080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d6084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6088: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6088u;
    {
        const bool branch_taken_0x1d6088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6088) {
            ctx->pc = 0x1D608Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6088u;
            // 0x1d608c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D609Cu;
            goto label_1d609c;
        }
    }
    ctx->pc = 0x1D6090u;
    // 0x1d6090: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d6090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d6094: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x1d6094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x1d6098: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d609c:
    // 0x1d609c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1d609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d60a0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1d60a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d60a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d60a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d60a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D60A8u;
    {
        const bool branch_taken_0x1d60a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d60a8) {
            ctx->pc = 0x1D60B8u;
            goto label_1d60b8;
        }
    }
    ctx->pc = 0x1D60B0u;
    // 0x1d60b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d60b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d60b4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1d60b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1d60b8:
    // 0x1d60b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D60B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D60C0u;
}
