#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A6710
// Address: 0x4a6710 - 0x4a6750
void sub_004A6710_0x4a6710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6710_0x4a6710");
#endif

    ctx->pc = 0x4a6710u;

    // 0x4a6710: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x4a6710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x4a6714: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x4a6714u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x4a6718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a671c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x4a671cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x4a6720: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x4a6720u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x4a6724: 0x3c09420c  lui         $t1, 0x420C
    ctx->pc = 0x4a6724u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16908 << 16));
    // 0x4a6728: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4a6728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a672c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4a672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4a6730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6734: 0x344586a0  ori         $a1, $v0, 0x86A0
    ctx->pc = 0x4a6734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x4a6738: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4a6738u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a673c: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x4a673cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4a6740: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x4a6740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x4a6744: 0x0  nop
    ctx->pc = 0x4a6744u;
    // NOP
    // 0x4a6748: 0x815706c  j           func_55C1B0
    ctx->pc = 0x4A6748u;
    ctx->pc = 0x4A674Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6748u;
            // 0x4a674c: 0x460d0340  add.s       $f13, $f0, $f13 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4A6750u;
}
