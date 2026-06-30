#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003182D0
// Address: 0x3182d0 - 0x318310
void sub_003182D0_0x3182d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003182D0_0x3182d0");
#endif

    ctx->pc = 0x3182d0u;

    // 0x3182d0: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x3182d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3182d4: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x3182d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3182d8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3182d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3182dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3182dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3182e0: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x3182e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3182e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3182e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3182e8: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x3182e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3182ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3182ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3182f0: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x3182f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3182f4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3182f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3182f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3182f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3182fc: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x3182fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x318300: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x318300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318304: 0x80bc5b0  j           func_2F16C0
    ctx->pc = 0x318304u;
    ctx->pc = 0x318308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318304u;
            // 0x318308: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x31830Cu;
    // 0x31830c: 0x0  nop
    ctx->pc = 0x31830cu;
    // NOP
}
