#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE400
// Address: 0x2fe400 - 0x2fe460
void sub_002FE400_0x2fe400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE400_0x2fe400");
#endif

    ctx->pc = 0x2fe400u;

    // 0x2fe400: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2fe400u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe404: 0x8c890024  lw          $t1, 0x24($a0)
    ctx->pc = 0x2fe404u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2fe408: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2fe408u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe40c: 0x8c880028  lw          $t0, 0x28($a0)
    ctx->pc = 0x2fe40cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2fe410: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x2fe410u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x2fe414: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x2fe414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x2fe418: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x2fe418u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x2fe41c: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x2fe41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x2fe420: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2fe420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2fe424: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x2fe424u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2fe428: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x2fe428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x2fe42c: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x2fe42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe430: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x2fe430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2fe434: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2fe434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2fe438: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x2fe438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x2fe43c: 0xac870038  sw          $a3, 0x38($a0)
    ctx->pc = 0x2fe43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
    // 0x2fe440: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x2fe440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x2fe444: 0xe48c003c  swc1        $f12, 0x3C($a0)
    ctx->pc = 0x2fe444u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2fe448: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2fe448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fe44c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2fe44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fe450: 0xa61825  or          $v1, $a1, $a2
    ctx->pc = 0x2fe450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2fe454: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x2fe454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x2fe458: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE458u;
            // 0x2fe45c: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE460u;
}
