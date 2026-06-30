#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00400A00
// Address: 0x400a00 - 0x400ab0
void sub_00400A00_0x400a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400A00_0x400a00");
#endif

    switch (ctx->pc) {
        case 0x400a48u: goto label_400a48;
        case 0x400a5cu: goto label_400a5c;
        case 0x400a98u: goto label_400a98;
        default: break;
    }

    ctx->pc = 0x400a00u;

    // 0x400a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x400a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x400a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x400a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x400a08: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x400a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x400a0c: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x400a0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x400a10: 0x50200014  beql        $at, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x400A10u;
    {
        const bool branch_taken_0x400a10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x400a10) {
            ctx->pc = 0x400A14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400A10u;
            // 0x400a14: 0xa3082b  sltu        $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x400A64u;
            goto label_400a64;
        }
    }
    ctx->pc = 0x400A18u;
    // 0x400a18: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x400a18u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x400a1c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x400a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x400a20: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x400a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x400a24: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x400a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x400a28: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x400a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x400a2c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x400a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x400a30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x400a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x400a34: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x400a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x400a38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x400a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x400a3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x400a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x400a40: 0xc100674  jal         func_4019D0
    ctx->pc = 0x400A40u;
    SET_GPR_U32(ctx, 31, 0x400A48u);
    ctx->pc = 0x400A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400A40u;
            // 0x400a44: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4019D0u;
    if (runtime->hasFunction(0x4019D0u)) {
        auto targetFn = runtime->lookupFunction(0x4019D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400A48u; }
        if (ctx->pc != 0x400A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004019D0_0x4019d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400A48u; }
        if (ctx->pc != 0x400A48u) { return; }
    }
    ctx->pc = 0x400A48u;
label_400a48:
    // 0x400a48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x400a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x400a4c: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x400A4Cu;
    {
        const bool branch_taken_0x400a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x400a4c) {
            ctx->pc = 0x400A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400A4Cu;
            // 0x400a50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400A9Cu;
            goto label_400a9c;
        }
    }
    ctx->pc = 0x400A54u;
    // 0x400a54: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x400A54u;
    SET_GPR_U32(ctx, 31, 0x400A5Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400A5Cu; }
        if (ctx->pc != 0x400A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400A5Cu; }
        if (ctx->pc != 0x400A5Cu) { return; }
    }
    ctx->pc = 0x400A5Cu;
label_400a5c:
    // 0x400a5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x400A5Cu;
    {
        const bool branch_taken_0x400a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x400a5c) {
            ctx->pc = 0x400A98u;
            goto label_400a98;
        }
    }
    ctx->pc = 0x400A64u;
label_400a64:
    // 0x400a64: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x400A64u;
    {
        const bool branch_taken_0x400a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x400a64) {
            ctx->pc = 0x400A98u;
            goto label_400a98;
        }
    }
    ctx->pc = 0x400A6Cu;
    // 0x400a6c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x400a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x400a70: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x400a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x400a74: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x400a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x400a78: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x400a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x400a7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x400a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x400a80: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x400a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x400a84: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x400a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x400a88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x400a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x400a8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x400a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x400a90: 0xc10061c  jal         func_401870
    ctx->pc = 0x400A90u;
    SET_GPR_U32(ctx, 31, 0x400A98u);
    ctx->pc = 0x400A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400A90u;
            // 0x400a94: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401870u;
    if (runtime->hasFunction(0x401870u)) {
        auto targetFn = runtime->lookupFunction(0x401870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400A98u; }
        if (ctx->pc != 0x400A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401870_0x401870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400A98u; }
        if (ctx->pc != 0x400A98u) { return; }
    }
    ctx->pc = 0x400A98u;
label_400a98:
    // 0x400a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x400a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_400a9c:
    // 0x400a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x400A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x400AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400A9Cu;
            // 0x400aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x400AA4u;
    // 0x400aa4: 0x0  nop
    ctx->pc = 0x400aa4u;
    // NOP
    // 0x400aa8: 0x0  nop
    ctx->pc = 0x400aa8u;
    // NOP
    // 0x400aac: 0x0  nop
    ctx->pc = 0x400aacu;
    // NOP
}
