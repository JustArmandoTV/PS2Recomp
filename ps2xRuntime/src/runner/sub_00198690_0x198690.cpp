#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198690
// Address: 0x198690 - 0x1986d8
void sub_00198690_0x198690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198690_0x198690");
#endif

    switch (ctx->pc) {
        case 0x1986a0u: goto label_1986a0;
        case 0x1986b0u: goto label_1986b0;
        default: break;
    }

    ctx->pc = 0x198690u;

    // 0x198690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198698: 0xc06cedc  jal         func_1B3B70
    ctx->pc = 0x198698u;
    SET_GPR_U32(ctx, 31, 0x1986A0u);
    ctx->pc = 0x1B3B70u;
    if (runtime->hasFunction(0x1B3B70u)) {
        auto targetFn = runtime->lookupFunction(0x1B3B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1986A0u; }
        if (ctx->pc != 0x1986A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B70_0x1b3b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1986A0u; }
        if (ctx->pc != 0x1986A0u) { return; }
    }
    ctx->pc = 0x1986A0u;
label_1986a0:
    // 0x1986a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1986A0u;
    {
        const bool branch_taken_0x1986a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1986A0u;
            // 0x1986a4: 0x2404fece  addiu       $a0, $zero, -0x132 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966990));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986a0) {
            ctx->pc = 0x1986C8u;
            goto label_1986c8;
        }
    }
    ctx->pc = 0x1986A8u;
    // 0x1986a8: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x1986A8u;
    SET_GPR_U32(ctx, 31, 0x1986B0u);
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1986B0u; }
        if (ctx->pc != 0x1986B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1986B0u; }
        if (ctx->pc != 0x1986B0u) { return; }
    }
    ctx->pc = 0x1986B0u;
label_1986b0:
    // 0x1986b0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1986b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1986b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1986b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1986b8: 0x248487b8  addiu       $a0, $a0, -0x7848
    ctx->pc = 0x1986b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936504));
    // 0x1986bc: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1986BCu;
    ctx->pc = 0x1986C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1986BCu;
            // 0x1986c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1986C4u;
    // 0x1986c4: 0x0  nop
    ctx->pc = 0x1986c4u;
    // NOP
label_1986c8:
    // 0x1986c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1986c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1986cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1986CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1986D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1986CCu;
            // 0x1986d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1986D4u;
    // 0x1986d4: 0x0  nop
    ctx->pc = 0x1986d4u;
    // NOP
}
