#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175C58
// Address: 0x175c58 - 0x175d50
void sub_00175C58_0x175c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175C58_0x175c58");
#endif

    switch (ctx->pc) {
        case 0x175c88u: goto label_175c88;
        case 0x175ca8u: goto label_175ca8;
        case 0x175cb0u: goto label_175cb0;
        case 0x175cc4u: goto label_175cc4;
        case 0x175cdcu: goto label_175cdc;
        case 0x175ce8u: goto label_175ce8;
        case 0x175d2cu: goto label_175d2c;
        case 0x175d38u: goto label_175d38;
        default: break;
    }

    ctx->pc = 0x175c58u;

    // 0x175c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175c5c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x175c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x175c60: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x175c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x175c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175c68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x175c6c: 0xac449d80  sw          $a0, -0x6280($v0)
    ctx->pc = 0x175c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942080), GPR_U32(ctx, 4));
    // 0x175c70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175c74: 0x24719d90  addiu       $s1, $v1, -0x6270
    ctx->pc = 0x175c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942096));
    // 0x175c78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175c7c: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x175c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x175c80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x175c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x175c84: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x175c84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175c88:
    // 0x175c88: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x175c88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175c8c: 0x54530017  bnel        $v0, $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x175C8Cu;
    {
        const bool branch_taken_0x175c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x175c8c) {
            ctx->pc = 0x175C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175C8Cu;
            // 0x175c90: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175CECu;
            goto label_175cec;
        }
    }
    ctx->pc = 0x175C94u;
    // 0x175c94: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x175c94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x175c98: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x175C98u;
    {
        const bool branch_taken_0x175c98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x175C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C98u;
            // 0x175c9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c98) {
            ctx->pc = 0x175CD4u;
            goto label_175cd4;
        }
    }
    ctx->pc = 0x175CA0u;
    // 0x175ca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ca4: 0x0  nop
    ctx->pc = 0x175ca4u;
    // NOP
label_175ca8:
    // 0x175ca8: 0xc05cfaa  jal         func_173EA8
    ctx->pc = 0x175CA8u;
    SET_GPR_U32(ctx, 31, 0x175CB0u);
    ctx->pc = 0x175CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175CA8u;
            // 0x175cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173EA8u;
    if (runtime->hasFunction(0x173EA8u)) {
        auto targetFn = runtime->lookupFunction(0x173EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CB0u; }
        if (ctx->pc != 0x175CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173EA8_0x173ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CB0u; }
        if (ctx->pc != 0x175CB0u) { return; }
    }
    ctx->pc = 0x175CB0u;
label_175cb0:
    // 0x175cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175cb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x175cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x175cbc: 0xc05cf52  jal         func_173D48
    ctx->pc = 0x175CBCu;
    SET_GPR_U32(ctx, 31, 0x175CC4u);
    ctx->pc = 0x175CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175CBCu;
            // 0x175cc0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D48u;
    if (runtime->hasFunction(0x173D48u)) {
        auto targetFn = runtime->lookupFunction(0x173D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CC4u; }
        if (ctx->pc != 0x175CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173D48_0x173d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CC4u; }
        if (ctx->pc != 0x175CC4u) { return; }
    }
    ctx->pc = 0x175CC4u;
label_175cc4:
    // 0x175cc4: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x175cc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x175cc8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x175cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175ccc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x175CCCu;
    {
        const bool branch_taken_0x175ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175CCCu;
            // 0x175cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ccc) {
            ctx->pc = 0x175CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_175ca8;
        }
    }
    ctx->pc = 0x175CD4u;
label_175cd4:
    // 0x175cd4: 0xc05cffa  jal         func_173FE8
    ctx->pc = 0x175CD4u;
    SET_GPR_U32(ctx, 31, 0x175CDCu);
    ctx->pc = 0x175CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175CD4u;
            // 0x175cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173FE8u;
    if (runtime->hasFunction(0x173FE8u)) {
        auto targetFn = runtime->lookupFunction(0x173FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CDCu; }
        if (ctx->pc != 0x175CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173FE8_0x173fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CDCu; }
        if (ctx->pc != 0x175CDCu) { return; }
    }
    ctx->pc = 0x175CDCu;
label_175cdc:
    // 0x175cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ce0: 0xc05cfca  jal         func_173F28
    ctx->pc = 0x175CE0u;
    SET_GPR_U32(ctx, 31, 0x175CE8u);
    ctx->pc = 0x175CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175CE0u;
            // 0x175ce4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173F28u;
    if (runtime->hasFunction(0x173F28u)) {
        auto targetFn = runtime->lookupFunction(0x173F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CE8u; }
        if (ctx->pc != 0x175CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173F28_0x173f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CE8u; }
        if (ctx->pc != 0x175CE8u) { return; }
    }
    ctx->pc = 0x175CE8u;
label_175ce8:
    // 0x175ce8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x175ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_175cec:
    // 0x175cec: 0x641ffe6  bgez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x175CECu;
    {
        const bool branch_taken_0x175cec = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x175CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175CECu;
            // 0x175cf0: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cec) {
            ctx->pc = 0x175C88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_175c88;
        }
    }
    ctx->pc = 0x175CF4u;
    // 0x175cf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175cf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175cfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175cfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175d00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x175d00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175d04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175d08: 0x3e00008  jr          $ra
    ctx->pc = 0x175D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D08u;
            // 0x175d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175D10u;
    // 0x175d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175d14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175d20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175d24: 0xc0599de  jal         func_166778
    ctx->pc = 0x175D24u;
    SET_GPR_U32(ctx, 31, 0x175D2Cu);
    ctx->pc = 0x175D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D24u;
            // 0x175d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D2Cu; }
        if (ctx->pc != 0x175D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D2Cu; }
        if (ctx->pc != 0x175D2Cu) { return; }
    }
    ctx->pc = 0x175D2Cu;
label_175d2c:
    // 0x175d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d30: 0xc05d754  jal         func_175D50
    ctx->pc = 0x175D30u;
    SET_GPR_U32(ctx, 31, 0x175D38u);
    ctx->pc = 0x175D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D30u;
            // 0x175d34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D50u;
    if (runtime->hasFunction(0x175D50u)) {
        auto targetFn = runtime->lookupFunction(0x175D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D38u; }
        if (ctx->pc != 0x175D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D50_0x175d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D38u; }
        if (ctx->pc != 0x175D38u) { return; }
    }
    ctx->pc = 0x175D38u;
label_175d38:
    // 0x175d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175d3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175d44: 0x80599e0  j           func_166780
    ctx->pc = 0x175D44u;
    ctx->pc = 0x175D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D44u;
            // 0x175d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175D4Cu;
    // 0x175d4c: 0x0  nop
    ctx->pc = 0x175d4cu;
    // NOP
}
