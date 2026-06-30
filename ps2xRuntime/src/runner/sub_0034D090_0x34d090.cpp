#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034D090
// Address: 0x34d090 - 0x34d100
void sub_0034D090_0x34d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D090_0x34d090");
#endif

    switch (ctx->pc) {
        case 0x34d0dcu: goto label_34d0dc;
        default: break;
    }

    ctx->pc = 0x34d090u;

    // 0x34d090: 0x3e00008  jr          $ra
    ctx->pc = 0x34D090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D098u;
    // 0x34d098: 0x0  nop
    ctx->pc = 0x34d098u;
    // NOP
    // 0x34d09c: 0x0  nop
    ctx->pc = 0x34d09cu;
    // NOP
    // 0x34d0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D0A8u;
    // 0x34d0a8: 0x0  nop
    ctx->pc = 0x34d0a8u;
    // NOP
    // 0x34d0ac: 0x0  nop
    ctx->pc = 0x34d0acu;
    // NOP
    // 0x34d0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D0B8u;
    // 0x34d0b8: 0x0  nop
    ctx->pc = 0x34d0b8u;
    // NOP
    // 0x34d0bc: 0x0  nop
    ctx->pc = 0x34d0bcu;
    // NOP
    // 0x34d0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d0c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34d0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34d0c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d0cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d0d0: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x34d0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x34d0d4: 0xc0da994  jal         func_36A650
    ctx->pc = 0x34D0D4u;
    SET_GPR_U32(ctx, 31, 0x34D0DCu);
    ctx->pc = 0x34D0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D0D4u;
            // 0x34d0d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36A650u;
    if (runtime->hasFunction(0x36A650u)) {
        auto targetFn = runtime->lookupFunction(0x36A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D0DCu; }
        if (ctx->pc != 0x34D0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036A650_0x36a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D0DCu; }
        if (ctx->pc != 0x34D0DCu) { return; }
    }
    ctx->pc = 0x34D0DCu;
label_34d0dc:
    // 0x34d0dc: 0x8e230898  lw          $v1, 0x898($s1)
    ctx->pc = 0x34d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x34d0e0: 0x2022023  subu        $a0, $s0, $v0
    ctx->pc = 0x34d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34d0e4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x34d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x34d0e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34d0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d0ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d0ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d0f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x34D0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D0F4u;
            // 0x34d0f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D0FCu;
    // 0x34d0fc: 0x0  nop
    ctx->pc = 0x34d0fcu;
    // NOP
}
