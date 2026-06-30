#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00479530
// Address: 0x479530 - 0x479570
void sub_00479530_0x479530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479530_0x479530");
#endif

    ctx->pc = 0x479530u;

    // 0x479530: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x479530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x479534: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x479534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x479538: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x479538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47953c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47953cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x479540: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x479540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x479544: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x479544u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x479548: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x479548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47954c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x47954Cu;
    {
        const bool branch_taken_0x47954c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x479550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47954Cu;
            // 0x479550: 0xe4a1000c  swc1        $f1, 0xC($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47954c) {
            ctx->pc = 0x479564u;
            goto label_479564;
        }
    }
    ctx->pc = 0x479554u;
    // 0x479554: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x479554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x479558: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x479558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47955c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x47955cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x479560: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x479560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_479564:
    // 0x479564: 0x3e00008  jr          $ra
    ctx->pc = 0x479564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47956Cu;
    // 0x47956c: 0x0  nop
    ctx->pc = 0x47956cu;
    // NOP
}
