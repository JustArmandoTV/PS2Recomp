#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C33D0
// Address: 0x3c33d0 - 0x3c3460
void sub_003C33D0_0x3c33d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C33D0_0x3c33d0");
#endif

    ctx->pc = 0x3c33d0u;

    // 0x3c33d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3c33d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c33d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3c33d8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3c33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3c33dc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3c33dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c33e0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3c33e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c33e4: 0xc4810dbc  lwc1        $f1, 0xDBC($a0)
    ctx->pc = 0x3c33e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c33e8: 0xc4840de4  lwc1        $f4, 0xDE4($a0)
    ctx->pc = 0x3c33e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c33ec: 0xc4830de0  lwc1        $f3, 0xDE0($a0)
    ctx->pc = 0x3c33ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c33f0: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x3c33f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c33f4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x3C33F4u;
    {
        const bool branch_taken_0x3c33f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C33F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C33F4u;
            // 0x3c33f8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c33f4) {
            ctx->pc = 0x3C3434u;
            goto label_3c3434;
        }
    }
    ctx->pc = 0x3C33FCu;
    // 0x3c33fc: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x3c33fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x3c3400: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x3c3400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x3c3404: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3c3404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3c3408: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3c3408u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c340c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c340cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3410: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c3410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c3414: 0x0  nop
    ctx->pc = 0x3c3414u;
    // NOP
    // 0x3c3418: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x3c3418u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3c341c: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x3c341cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x3c3420: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3c3420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c3424: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x3C3424u;
    {
        const bool branch_taken_0x3c3424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c3424) {
            ctx->pc = 0x3C3428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3424u;
            // 0x3c3428: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3450u;
            goto label_3c3450;
        }
    }
    ctx->pc = 0x3C342Cu;
    // 0x3c342c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C342Cu;
    {
        const bool branch_taken_0x3c342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C342Cu;
            // 0x3c3430: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c342c) {
            ctx->pc = 0x3C344Cu;
            goto label_3c344c;
        }
    }
    ctx->pc = 0x3C3434u;
label_3c3434:
    // 0x3c3434: 0xc4800de8  lwc1        $f0, 0xDE8($a0)
    ctx->pc = 0x3c3434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c3438: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x3c3438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3c343c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x3c343cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c3440: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3440u;
    {
        const bool branch_taken_0x3c3440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c3440) {
            ctx->pc = 0x3C344Cu;
            goto label_3c344c;
        }
    }
    ctx->pc = 0x3C3448u;
    // 0x3c3448: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x3c3448u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_3c344c:
    // 0x3c344c: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x3c344cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_3c3450:
    // 0x3c3450: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3458u;
    // 0x3c3458: 0x0  nop
    ctx->pc = 0x3c3458u;
    // NOP
    // 0x3c345c: 0x0  nop
    ctx->pc = 0x3c345cu;
    // NOP
}
