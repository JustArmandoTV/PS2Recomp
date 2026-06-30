#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175A18
// Address: 0x175a18 - 0x175ab0
void sub_00175A18_0x175a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175A18_0x175a18");
#endif

    switch (ctx->pc) {
        case 0x175a58u: goto label_175a58;
        case 0x175a7cu: goto label_175a7c;
        case 0x175a8cu: goto label_175a8c;
        case 0x175a94u: goto label_175a94;
        default: break;
    }

    ctx->pc = 0x175a18u;

    // 0x175a18: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x175a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a1c: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x175a1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x175a20: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x175A20u;
    {
        const bool branch_taken_0x175a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175A20u;
            // 0x175a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a20) {
            ctx->pc = 0x175A50u;
            goto label_175a50;
        }
    }
    ctx->pc = 0x175A28u;
    // 0x175a28: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x175a28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175a2c: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x175a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x175a30: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x175a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x175a34: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x175a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x175a38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x175a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x175a3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x175a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x175a40: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175A40u;
    {
        const bool branch_taken_0x175a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x175a40) {
            ctx->pc = 0x175A50u;
            goto label_175a50;
        }
    }
    ctx->pc = 0x175A48u;
    // 0x175a48: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x175a48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x175a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175a50:
    // 0x175a50: 0x3e00008  jr          $ra
    ctx->pc = 0x175A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175A58u;
label_175a58:
    // 0x175a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175a68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175a70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x175a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x175a74: 0xc0599de  jal         func_166778
    ctx->pc = 0x175A74u;
    SET_GPR_U32(ctx, 31, 0x175A7Cu);
    ctx->pc = 0x175A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A74u;
            // 0x175a78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A7Cu; }
        if (ctx->pc != 0x175A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A7Cu; }
        if (ctx->pc != 0x175A7Cu) { return; }
    }
    ctx->pc = 0x175A7Cu;
label_175a7c:
    // 0x175a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a84: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x175A84u;
    SET_GPR_U32(ctx, 31, 0x175A8Cu);
    ctx->pc = 0x175A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A84u;
            // 0x175a88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A8Cu; }
        if (ctx->pc != 0x175A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A8Cu; }
        if (ctx->pc != 0x175A8Cu) { return; }
    }
    ctx->pc = 0x175A8Cu;
label_175a8c:
    // 0x175a8c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x175A8Cu;
    SET_GPR_U32(ctx, 31, 0x175A94u);
    ctx->pc = 0x175A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A8Cu;
            // 0x175a90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A94u; }
        if (ctx->pc != 0x175A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A94u; }
        if (ctx->pc != 0x175A94u) { return; }
    }
    ctx->pc = 0x175A94u;
label_175a94:
    // 0x175a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175a98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175aa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x175aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x175AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175AA8u;
            // 0x175aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175AB0u;
}
