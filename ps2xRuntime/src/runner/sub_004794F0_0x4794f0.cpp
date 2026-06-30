#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004794F0
// Address: 0x4794f0 - 0x479530
void sub_004794F0_0x4794f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004794F0_0x4794f0");
#endif

    ctx->pc = 0x4794f0u;

    // 0x4794f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4794f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4794f4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4794f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x4794f8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x4794f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4794fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4794fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x479500: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x479500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x479504: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x479504u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x479508: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x479508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47950c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x47950Cu;
    {
        const bool branch_taken_0x47950c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x479510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47950Cu;
            // 0x479510: 0xe4a10010  swc1        $f1, 0x10($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47950c) {
            ctx->pc = 0x479524u;
            goto label_479524;
        }
    }
    ctx->pc = 0x479514u;
    // 0x479514: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x479514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x479518: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x479518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47951c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x47951cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x479520: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x479520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_479524:
    // 0x479524: 0x3e00008  jr          $ra
    ctx->pc = 0x479524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47952Cu;
    // 0x47952c: 0x0  nop
    ctx->pc = 0x47952cu;
    // NOP
}
