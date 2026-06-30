#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D4F0
// Address: 0x31d4f0 - 0x31d540
void sub_0031D4F0_0x31d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D4F0_0x31d4f0");
#endif

    ctx->pc = 0x31d4f0u;

    // 0x31d4f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d4f4: 0x0  nop
    ctx->pc = 0x31d4f4u;
    // NOP
    // 0x31d4f8: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x31d4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d4fc: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x31D4FCu;
    {
        const bool branch_taken_0x31d4fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d4fc) {
            ctx->pc = 0x31D500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31D4FCu;
            // 0x31d500: 0xe48d0000  swc1        $f13, 0x0($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x31D524u;
            goto label_31d524;
        }
    }
    ctx->pc = 0x31D504u;
    // 0x31d504: 0x460c6801  sub.s       $f0, $f13, $f12
    ctx->pc = 0x31d504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x31d508: 0x460e0003  div.s       $f0, $f0, $f14
    ctx->pc = 0x31d508u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[14];
    // 0x31d50c: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x31d50cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x31d510: 0xe48d0000  swc1        $f13, 0x0($a0)
    ctx->pc = 0x31d510u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x31d514: 0x0  nop
    ctx->pc = 0x31d514u;
    // NOP
    // 0x31d518: 0xe48e000c  swc1        $f14, 0xC($a0)
    ctx->pc = 0x31d518u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x31d51c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31D51Cu;
    {
        const bool branch_taken_0x31d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D51Cu;
            // 0x31d520: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d51c) {
            ctx->pc = 0x31D530u;
            goto label_31d530;
        }
    }
    ctx->pc = 0x31D524u;
label_31d524:
    // 0x31d524: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x31d524u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x31d528: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x31d528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x31d52c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x31d52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_31d530:
    // 0x31d530: 0x3e00008  jr          $ra
    ctx->pc = 0x31D530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D538u;
    // 0x31d538: 0x0  nop
    ctx->pc = 0x31d538u;
    // NOP
    // 0x31d53c: 0x0  nop
    ctx->pc = 0x31d53cu;
    // NOP
}
