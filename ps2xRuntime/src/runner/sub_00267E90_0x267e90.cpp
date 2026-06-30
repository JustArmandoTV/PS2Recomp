#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267E90
// Address: 0x267e90 - 0x267ed0
void sub_00267E90_0x267e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267E90_0x267e90");
#endif

    ctx->pc = 0x267e90u;

    // 0x267e90: 0x3c0241c6  lui         $v0, 0x41C6
    ctx->pc = 0x267e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16838 << 16));
    // 0x267e94: 0x34434e6d  ori         $v1, $v0, 0x4E6D
    ctx->pc = 0x267e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20077);
    // 0x267e98: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x267e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x267e9c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x267e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x267ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267ea4: 0x24623039  addiu       $v0, $v1, 0x3039
    ctx->pc = 0x267ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12345));
    // 0x267ea8: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x267ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x267eac: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x267eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x267eb0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x267eb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267eb4: 0x0  nop
    ctx->pc = 0x267eb4u;
    // NOP
    // 0x267eb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x267eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x267ebc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x267ebcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x267ec0: 0x0  nop
    ctx->pc = 0x267ec0u;
    // NOP
    // 0x267ec4: 0x0  nop
    ctx->pc = 0x267ec4u;
    // NOP
    // 0x267ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x267EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267ED0u;
}
