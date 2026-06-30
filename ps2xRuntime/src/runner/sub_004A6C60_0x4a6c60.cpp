#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A6C60
// Address: 0x4a6c60 - 0x4a6c90
void sub_004A6C60_0x4a6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6C60_0x4a6c60");
#endif

    ctx->pc = 0x4a6c60u;

    // 0x4a6c60: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4a6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x4a6c64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4a6c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a6c6c: 0x3c064220  lui         $a2, 0x4220
    ctx->pc = 0x4a6c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16928 << 16));
    // 0x4a6c70: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x4a6c70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x4a6c74: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4a6c78: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4a6c78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a6c7c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4a6c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4a6c80: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a6c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x4a6c84: 0x0  nop
    ctx->pc = 0x4a6c84u;
    // NOP
    // 0x4a6c88: 0x8156e30  j           func_55B8C0
    ctx->pc = 0x4A6C88u;
    ctx->pc = 0x4A6C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6C88u;
            // 0x4a6c8c: 0x460d0340  add.s       $f13, $f0, $f13 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55B8C0u;
    if (runtime->hasFunction(0x55B8C0u)) {
        auto targetFn = runtime->lookupFunction(0x55B8C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0055B8C0_0x55b8c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4A6C90u;
}
