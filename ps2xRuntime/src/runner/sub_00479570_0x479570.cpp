#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00479570
// Address: 0x479570 - 0x4795b0
void sub_00479570_0x479570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479570_0x479570");
#endif

    ctx->pc = 0x479570u;

    // 0x479570: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x479570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x479574: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x479574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x479578: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x479578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47957c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47957cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x479580: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x479580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x479584: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x479584u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x479588: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x479588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47958c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x47958Cu;
    {
        const bool branch_taken_0x47958c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x479590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47958Cu;
            // 0x479590: 0xe4a10008  swc1        $f1, 0x8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47958c) {
            ctx->pc = 0x4795A4u;
            goto label_4795a4;
        }
    }
    ctx->pc = 0x479594u;
    // 0x479594: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x479594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x479598: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x479598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47959c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x47959cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x4795a0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4795a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4795a4:
    // 0x4795a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4795A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4795ACu;
    // 0x4795ac: 0x0  nop
    ctx->pc = 0x4795acu;
    // NOP
}
