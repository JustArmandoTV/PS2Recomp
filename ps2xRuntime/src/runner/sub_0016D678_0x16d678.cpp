#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D678
// Address: 0x16d678 - 0x16d710
void sub_0016D678_0x16d678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D678_0x16d678");
#endif

    switch (ctx->pc) {
        case 0x16d6a0u: goto label_16d6a0;
        case 0x16d6a8u: goto label_16d6a8;
        case 0x16d6b0u: goto label_16d6b0;
        case 0x16d6b8u: goto label_16d6b8;
        case 0x16d6c0u: goto label_16d6c0;
        case 0x16d6d8u: goto label_16d6d8;
        case 0x16d6e4u: goto label_16d6e4;
        case 0x16d6f0u: goto label_16d6f0;
        default: break;
    }

    ctx->pc = 0x16d678u;

    // 0x16d678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d67c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d684: 0x2463aa34  addiu       $v1, $v1, -0x55CC
    ctx->pc = 0x16d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945332));
    // 0x16d688: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d68c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16d690: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16D690u;
    {
        const bool branch_taken_0x16d690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d690) {
            ctx->pc = 0x16D700u;
            goto label_16d700;
        }
    }
    ctx->pc = 0x16D698u;
    // 0x16d698: 0xc05b58a  jal         func_16D628
    ctx->pc = 0x16D698u;
    SET_GPR_U32(ctx, 31, 0x16D6A0u);
    ctx->pc = 0x16D628u;
    if (runtime->hasFunction(0x16D628u)) {
        auto targetFn = runtime->lookupFunction(0x16D628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6A0u; }
        if (ctx->pc != 0x16D6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D628_0x16d628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6A0u; }
        if (ctx->pc != 0x16D6A0u) { return; }
    }
    ctx->pc = 0x16D6A0u;
label_16d6a0:
    // 0x16d6a0: 0xc05b5f8  jal         func_16D7E0
    ctx->pc = 0x16D6A0u;
    SET_GPR_U32(ctx, 31, 0x16D6A8u);
    ctx->pc = 0x16D7E0u;
    if (runtime->hasFunction(0x16D7E0u)) {
        auto targetFn = runtime->lookupFunction(0x16D7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6A8u; }
        if (ctx->pc != 0x16D6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D7E0_0x16d7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6A8u; }
        if (ctx->pc != 0x16D6A8u) { return; }
    }
    ctx->pc = 0x16D6A8u;
label_16d6a8:
    // 0x16d6a8: 0xc05b660  jal         func_16D980
    ctx->pc = 0x16D6A8u;
    SET_GPR_U32(ctx, 31, 0x16D6B0u);
    ctx->pc = 0x16D980u;
    if (runtime->hasFunction(0x16D980u)) {
        auto targetFn = runtime->lookupFunction(0x16D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6B0u; }
        if (ctx->pc != 0x16D6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D980_0x16d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6B0u; }
        if (ctx->pc != 0x16D6B0u) { return; }
    }
    ctx->pc = 0x16D6B0u;
label_16d6b0:
    // 0x16d6b0: 0xc05b62c  jal         func_16D8B0
    ctx->pc = 0x16D6B0u;
    SET_GPR_U32(ctx, 31, 0x16D6B8u);
    ctx->pc = 0x16D8B0u;
    if (runtime->hasFunction(0x16D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x16D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6B8u; }
        if (ctx->pc != 0x16D6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D8B0_0x16d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6B8u; }
        if (ctx->pc != 0x16D6B8u) { return; }
    }
    ctx->pc = 0x16D6B8u;
label_16d6b8:
    // 0x16d6b8: 0xc05b6e0  jal         func_16DB80
    ctx->pc = 0x16D6B8u;
    SET_GPR_U32(ctx, 31, 0x16D6C0u);
    ctx->pc = 0x16DB80u;
    if (runtime->hasFunction(0x16DB80u)) {
        auto targetFn = runtime->lookupFunction(0x16DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6C0u; }
        if (ctx->pc != 0x16D6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DB80_0x16db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6C0u; }
        if (ctx->pc != 0x16D6C0u) { return; }
    }
    ctx->pc = 0x16D6C0u;
label_16d6c0:
    // 0x16d6c0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d6c4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d6c8: 0x2442aad8  addiu       $v0, $v0, -0x5528
    ctx->pc = 0x16d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945496));
    // 0x16d6cc: 0x8c652368  lw          $a1, 0x2368($v1)
    ctx->pc = 0x16d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9064)));
    // 0x16d6d0: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D6D0u;
    SET_GPR_U32(ctx, 31, 0x16D6D8u);
    ctx->pc = 0x16D6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6D0u;
            // 0x16d6d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6D8u; }
        if (ctx->pc != 0x16D6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6D8u; }
        if (ctx->pc != 0x16D6D8u) { return; }
    }
    ctx->pc = 0x16D6D8u;
label_16d6d8:
    // 0x16d6d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6dc: 0xc0621ac  jal         func_1886B0
    ctx->pc = 0x16D6DCu;
    SET_GPR_U32(ctx, 31, 0x16D6E4u);
    ctx->pc = 0x16D6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6DCu;
            // 0x16d6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886B0u;
    if (runtime->hasFunction(0x1886B0u)) {
        auto targetFn = runtime->lookupFunction(0x1886B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6E4u; }
        if (ctx->pc != 0x16D6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001886B0_0x1886b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6E4u; }
        if (ctx->pc != 0x16D6E4u) { return; }
    }
    ctx->pc = 0x16D6E4u;
label_16d6e4:
    // 0x16d6e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6e8: 0xc0621b2  jal         func_1886C8
    ctx->pc = 0x16D6E8u;
    SET_GPR_U32(ctx, 31, 0x16D6F0u);
    ctx->pc = 0x16D6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6E8u;
            // 0x16d6ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886C8u;
    if (runtime->hasFunction(0x1886C8u)) {
        auto targetFn = runtime->lookupFunction(0x1886C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6F0u; }
        if (ctx->pc != 0x16D6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001886C8_0x1886c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6F0u; }
        if (ctx->pc != 0x16D6F0u) { return; }
    }
    ctx->pc = 0x16D6F0u;
label_16d6f0:
    // 0x16d6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d6f4: 0x8062284  j           func_188A10
    ctx->pc = 0x16D6F4u;
    ctx->pc = 0x16D6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6F4u;
            // 0x16d6f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188A10u;
    if (runtime->hasFunction(0x188A10u)) {
        auto targetFn = runtime->lookupFunction(0x188A10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188A10_0x188a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16D6FCu;
    // 0x16d6fc: 0x0  nop
    ctx->pc = 0x16d6fcu;
    // NOP
label_16d700:
    // 0x16d700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d704: 0x3e00008  jr          $ra
    ctx->pc = 0x16D704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D704u;
            // 0x16d708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D70Cu;
    // 0x16d70c: 0x0  nop
    ctx->pc = 0x16d70cu;
    // NOP
}
