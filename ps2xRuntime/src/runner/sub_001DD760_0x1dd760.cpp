#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD760
// Address: 0x1dd760 - 0x1dd7e0
void sub_001DD760_0x1dd760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD760_0x1dd760");
#endif

    switch (ctx->pc) {
        case 0x1dd7b0u: goto label_1dd7b0;
        case 0x1dd7c8u: goto label_1dd7c8;
        default: break;
    }

    ctx->pc = 0x1dd760u;

    // 0x1dd760: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD760u;
            // 0x1dd764: 0x8c820d74  lw          $v0, 0xD74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD768u;
    // 0x1dd768: 0x0  nop
    ctx->pc = 0x1dd768u;
    // NOP
    // 0x1dd76c: 0x0  nop
    ctx->pc = 0x1dd76cu;
    // NOP
    // 0x1dd770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dd774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dd778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd77c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd784: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD784u;
    {
        const bool branch_taken_0x1dd784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD784u;
            // 0x1dd788: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd784) {
            ctx->pc = 0x1DD7C8u;
            goto label_1dd7c8;
        }
    }
    ctx->pc = 0x1DD78Cu;
    // 0x1dd78c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1dd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1dd790: 0x244241f0  addiu       $v0, $v0, 0x41F0
    ctx->pc = 0x1dd790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16880));
    // 0x1dd794: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD794u;
    {
        const bool branch_taken_0x1dd794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD794u;
            // 0x1dd798: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd794) {
            ctx->pc = 0x1DD7B0u;
            goto label_1dd7b0;
        }
    }
    ctx->pc = 0x1DD79Cu;
    // 0x1dd79c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1dd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1dd7a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7a4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x1dd7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x1dd7a8: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x1DD7A8u;
    SET_GPR_U32(ctx, 31, 0x1DD7B0u);
    ctx->pc = 0x1DD7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7A8u;
            // 0x1dd7ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7B0u; }
        if (ctx->pc != 0x1DD7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7B0u; }
        if (ctx->pc != 0x1DD7B0u) { return; }
    }
    ctx->pc = 0x1DD7B0u;
label_1dd7b0:
    // 0x1dd7b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1dd7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1dd7b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dd7b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1dd7b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD7B8u;
    {
        const bool branch_taken_0x1dd7b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dd7b8) {
            ctx->pc = 0x1DD7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7B8u;
            // 0x1dd7bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7CCu;
            goto label_1dd7cc;
        }
    }
    ctx->pc = 0x1DD7C0u;
    // 0x1dd7c0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1DD7C0u;
    SET_GPR_U32(ctx, 31, 0x1DD7C8u);
    ctx->pc = 0x1DD7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7C0u;
            // 0x1dd7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7C8u; }
        if (ctx->pc != 0x1DD7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7C8u; }
        if (ctx->pc != 0x1DD7C8u) { return; }
    }
    ctx->pc = 0x1DD7C8u;
label_1dd7c8:
    // 0x1dd7c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dd7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd7cc:
    // 0x1dd7cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dd7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd7d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd7d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7D8u;
            // 0x1dd7dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD7E0u;
}
