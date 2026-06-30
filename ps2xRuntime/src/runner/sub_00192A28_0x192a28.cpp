#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192A28
// Address: 0x192a28 - 0x192ac0
void sub_00192A28_0x192a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192A28_0x192a28");
#endif

    switch (ctx->pc) {
        case 0x192a58u: goto label_192a58;
        case 0x192a68u: goto label_192a68;
        case 0x192aa0u: goto label_192aa0;
        default: break;
    }

    ctx->pc = 0x192a28u;

    // 0x192a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192a30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192a38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x192a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x192a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x192a40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x192a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a44: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192A44u;
    {
        const bool branch_taken_0x192a44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x192A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A44u;
            // 0x192a48: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a44) {
            ctx->pc = 0x192A60u;
            goto label_192a60;
        }
    }
    ctx->pc = 0x192A4Cu;
    // 0x192a4c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x192a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x192a50: 0xc064ab0  jal         func_192AC0
    ctx->pc = 0x192A50u;
    SET_GPR_U32(ctx, 31, 0x192A58u);
    ctx->pc = 0x192A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A50u;
            // 0x192a54: 0x8c446a58  lw          $a0, 0x6A58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192AC0u;
    if (runtime->hasFunction(0x192AC0u)) {
        auto targetFn = runtime->lookupFunction(0x192AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A58u; }
        if (ctx->pc != 0x192A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192AC0_0x192ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A58u; }
        if (ctx->pc != 0x192A58u) { return; }
    }
    ctx->pc = 0x192A58u;
label_192a58:
    // 0x192a58: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x192A58u;
    {
        const bool branch_taken_0x192a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A58u;
            // 0x192a5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a58) {
            ctx->pc = 0x192AA4u;
            goto label_192aa4;
        }
    }
    ctx->pc = 0x192A60u;
label_192a60:
    // 0x192a60: 0xc064adc  jal         func_192B70
    ctx->pc = 0x192A60u;
    SET_GPR_U32(ctx, 31, 0x192A68u);
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A68u; }
        if (ctx->pc != 0x192A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A68u; }
        if (ctx->pc != 0x192A68u) { return; }
    }
    ctx->pc = 0x192A68u;
label_192a68:
    // 0x192a68: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x192a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x192a6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192A6Cu;
    {
        const bool branch_taken_0x192a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A6Cu;
            // 0x192a70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a6c) {
            ctx->pc = 0x192A90u;
            goto label_192a90;
        }
    }
    ctx->pc = 0x192A74u;
    // 0x192a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192a78: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x192a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x192a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192a80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x192a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192a84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x192a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x192a88: 0x8064a68  j           func_1929A0
    ctx->pc = 0x192A88u;
    ctx->pc = 0x192A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A88u;
            // 0x192a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1929A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1929A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x192A90u;
label_192a90:
    // 0x192a90: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x192a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x192a94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a98: 0xc064ab0  jal         func_192AC0
    ctx->pc = 0x192A98u;
    SET_GPR_U32(ctx, 31, 0x192AA0u);
    ctx->pc = 0x192A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A98u;
            // 0x192a9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192AC0u;
    if (runtime->hasFunction(0x192AC0u)) {
        auto targetFn = runtime->lookupFunction(0x192AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AA0u; }
        if (ctx->pc != 0x192AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192AC0_0x192ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AA0u; }
        if (ctx->pc != 0x192AA0u) { return; }
    }
    ctx->pc = 0x192AA0u;
label_192aa0:
    // 0x192aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192aa4:
    // 0x192aa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192aac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x192aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192ab0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x192ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x192ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x192AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192AB4u;
            // 0x192ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192ABCu;
    // 0x192abc: 0x0  nop
    ctx->pc = 0x192abcu;
    // NOP
}
