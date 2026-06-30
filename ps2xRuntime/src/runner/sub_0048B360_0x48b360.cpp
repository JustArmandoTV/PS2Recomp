#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048B360
// Address: 0x48b360 - 0x48b390
void sub_0048B360_0x48b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B360_0x48b360");
#endif

    ctx->pc = 0x48b360u;

    // 0x48b360: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x48b360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x48b364: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x48b364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x48b368: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48b368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48b36c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48b370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48b374: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x48b374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x48b378: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x48b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x48b37c: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x48b37cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x48b380: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x48b380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48b384: 0xe44d0008  swc1        $f13, 0x8($v0)
    ctx->pc = 0x48b384u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x48b388: 0x804a576  j           func_1295D8
    ctx->pc = 0x48B388u;
    ctx->pc = 0x48B38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B388u;
            // 0x48b38c: 0xa047001c  sb          $a3, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x48B390u;
}
