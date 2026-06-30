#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E8D0
// Address: 0x15e8d0 - 0x15e950
void sub_0015E8D0_0x15e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E8D0_0x15e8d0");
#endif

    switch (ctx->pc) {
        case 0x15e908u: goto label_15e908;
        case 0x15e928u: goto label_15e928;
        case 0x15e934u: goto label_15e934;
        default: break;
    }

    ctx->pc = 0x15e8d0u;

    // 0x15e8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15e8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e8e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15e8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8e4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x15e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x15e8e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E8E8u;
    {
        const bool branch_taken_0x15e8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8E8u;
            // 0x15e8ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8e8) {
            ctx->pc = 0x15E910u;
            goto label_15e910;
        }
    }
    ctx->pc = 0x15E8F0u;
    // 0x15e8f0: 0x2445001c  addiu       $a1, $v0, 0x1C
    ctx->pc = 0x15e8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x15e8f4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x15e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x15e8f8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x15e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x15e8fc: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x15e8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x15e900: 0xc0582ac  jal         func_160AB0
    ctx->pc = 0x15E900u;
    SET_GPR_U32(ctx, 31, 0x15E908u);
    ctx->pc = 0x15E904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E900u;
            // 0x15e904: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160AB0u;
    if (runtime->hasFunction(0x160AB0u)) {
        auto targetFn = runtime->lookupFunction(0x160AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E908u; }
        if (ctx->pc != 0x15E908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160AB0_0x160ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E908u; }
        if (ctx->pc != 0x15E908u) { return; }
    }
    ctx->pc = 0x15E908u;
label_15e908:
    // 0x15e908: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15E908u;
    {
        const bool branch_taken_0x15e908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E908u;
            // 0x15e90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e908) {
            ctx->pc = 0x15E92Cu;
            goto label_15e92c;
        }
    }
    ctx->pc = 0x15E910u;
label_15e910:
    // 0x15e910: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x15e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x15e914: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x15e914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x15e918: 0x262500dc  addiu       $a1, $s1, 0xDC
    ctx->pc = 0x15e918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    // 0x15e91c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15e91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e920: 0xc0582ac  jal         func_160AB0
    ctx->pc = 0x15E920u;
    SET_GPR_U32(ctx, 31, 0x15E928u);
    ctx->pc = 0x15E924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E920u;
            // 0x15e924: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160AB0u;
    if (runtime->hasFunction(0x160AB0u)) {
        auto targetFn = runtime->lookupFunction(0x160AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E928u; }
        if (ctx->pc != 0x15E928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160AB0_0x160ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E928u; }
        if (ctx->pc != 0x15E928u) { return; }
    }
    ctx->pc = 0x15E928u;
label_15e928:
    // 0x15e928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e92c:
    // 0x15e92c: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15E92Cu;
    SET_GPR_U32(ctx, 31, 0x15E934u);
    ctx->pc = 0x15E930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E92Cu;
            // 0x15e930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECC0u;
    if (runtime->hasFunction(0x15ECC0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E934u; }
        if (ctx->pc != 0x15E934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECC0_0x15ecc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E934u; }
        if (ctx->pc != 0x15E934u) { return; }
    }
    ctx->pc = 0x15E934u;
label_15e934:
    // 0x15e934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15e934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e93c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e940: 0x3e00008  jr          $ra
    ctx->pc = 0x15E940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E940u;
            // 0x15e944: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E948u;
    // 0x15e948: 0x0  nop
    ctx->pc = 0x15e948u;
    // NOP
    // 0x15e94c: 0x0  nop
    ctx->pc = 0x15e94cu;
    // NOP
}
