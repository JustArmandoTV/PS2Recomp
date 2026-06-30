#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177A40
// Address: 0x177a40 - 0x177b40
void sub_00177A40_0x177a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177A40_0x177a40");
#endif

    switch (ctx->pc) {
        case 0x177a88u: goto label_177a88;
        case 0x177aa0u: goto label_177aa0;
        case 0x177ab8u: goto label_177ab8;
        case 0x177ad0u: goto label_177ad0;
        case 0x177ae8u: goto label_177ae8;
        case 0x177af0u: goto label_177af0;
        case 0x177b1cu: goto label_177b1c;
        case 0x177b24u: goto label_177b24;
        case 0x177b2cu: goto label_177b2c;
        default: break;
    }

    ctx->pc = 0x177a40u;

    // 0x177a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177a48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a4c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x177A4Cu;
    {
        const bool branch_taken_0x177a4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x177A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A4Cu;
            // 0x177a50: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a4c) {
            ctx->pc = 0x177A70u;
            goto label_177a70;
        }
    }
    ctx->pc = 0x177A54u;
    // 0x177a54: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x177a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x177a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177a60: 0x24844aa8  addiu       $a0, $a0, 0x4AA8
    ctx->pc = 0x177a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19112));
    // 0x177a64: 0x8059f4e  j           func_167D38
    ctx->pc = 0x177A64u;
    ctx->pc = 0x177A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A64u;
            // 0x177a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x177A6Cu;
    // 0x177a6c: 0x0  nop
    ctx->pc = 0x177a6cu;
    // NOP
label_177a70:
    // 0x177a70: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x177a74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x177a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177a78: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177A78u;
    {
        const bool branch_taken_0x177a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x177A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A78u;
            // 0x177a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a78) {
            ctx->pc = 0x177A90u;
            goto label_177a90;
        }
    }
    ctx->pc = 0x177A80u;
    // 0x177a80: 0xc05dc8e  jal         func_177238
    ctx->pc = 0x177A80u;
    SET_GPR_U32(ctx, 31, 0x177A88u);
    ctx->pc = 0x177238u;
    if (runtime->hasFunction(0x177238u)) {
        auto targetFn = runtime->lookupFunction(0x177238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A88u; }
        if (ctx->pc != 0x177A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177238_0x177238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A88u; }
        if (ctx->pc != 0x177A88u) { return; }
    }
    ctx->pc = 0x177A88u;
label_177a88:
    // 0x177a88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x177A88u;
    {
        const bool branch_taken_0x177a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177a88) {
            ctx->pc = 0x177AE8u;
            goto label_177ae8;
        }
    }
    ctx->pc = 0x177A90u;
label_177a90:
    // 0x177a90: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177A90u;
    {
        const bool branch_taken_0x177a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x177A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A90u;
            // 0x177a94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a90) {
            ctx->pc = 0x177AA8u;
            goto label_177aa8;
        }
    }
    ctx->pc = 0x177A98u;
    // 0x177a98: 0xc05db16  jal         func_176C58
    ctx->pc = 0x177A98u;
    SET_GPR_U32(ctx, 31, 0x177AA0u);
    ctx->pc = 0x176C58u;
    if (runtime->hasFunction(0x176C58u)) {
        auto targetFn = runtime->lookupFunction(0x176C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AA0u; }
        if (ctx->pc != 0x177AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176C58_0x176c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AA0u; }
        if (ctx->pc != 0x177AA0u) { return; }
    }
    ctx->pc = 0x177AA0u;
label_177aa0:
    // 0x177aa0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x177AA0u;
    {
        const bool branch_taken_0x177aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177aa0) {
            ctx->pc = 0x177AE8u;
            goto label_177ae8;
        }
    }
    ctx->pc = 0x177AA8u;
label_177aa8:
    // 0x177aa8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177AA8u;
    {
        const bool branch_taken_0x177aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x177AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177AA8u;
            // 0x177aac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177aa8) {
            ctx->pc = 0x177AC0u;
            goto label_177ac0;
        }
    }
    ctx->pc = 0x177AB0u;
    // 0x177ab0: 0xc05dc2e  jal         func_1770B8
    ctx->pc = 0x177AB0u;
    SET_GPR_U32(ctx, 31, 0x177AB8u);
    ctx->pc = 0x1770B8u;
    if (runtime->hasFunction(0x1770B8u)) {
        auto targetFn = runtime->lookupFunction(0x1770B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AB8u; }
        if (ctx->pc != 0x177AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001770B8_0x1770b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AB8u; }
        if (ctx->pc != 0x177AB8u) { return; }
    }
    ctx->pc = 0x177AB8u;
label_177ab8:
    // 0x177ab8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x177AB8u;
    {
        const bool branch_taken_0x177ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ab8) {
            ctx->pc = 0x177AE8u;
            goto label_177ae8;
        }
    }
    ctx->pc = 0x177AC0u;
label_177ac0:
    // 0x177ac0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177AC0u;
    {
        const bool branch_taken_0x177ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x177AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177AC0u;
            // 0x177ac4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ac0) {
            ctx->pc = 0x177AD8u;
            goto label_177ad8;
        }
    }
    ctx->pc = 0x177AC8u;
    // 0x177ac8: 0xc05dcea  jal         func_1773A8
    ctx->pc = 0x177AC8u;
    SET_GPR_U32(ctx, 31, 0x177AD0u);
    ctx->pc = 0x1773A8u;
    if (runtime->hasFunction(0x1773A8u)) {
        auto targetFn = runtime->lookupFunction(0x1773A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AD0u; }
        if (ctx->pc != 0x177AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001773A8_0x1773a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AD0u; }
        if (ctx->pc != 0x177AD0u) { return; }
    }
    ctx->pc = 0x177AD0u;
label_177ad0:
    // 0x177ad0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x177AD0u;
    {
        const bool branch_taken_0x177ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ad0) {
            ctx->pc = 0x177AE8u;
            goto label_177ae8;
        }
    }
    ctx->pc = 0x177AD8u;
label_177ad8:
    // 0x177ad8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177AD8u;
    {
        const bool branch_taken_0x177ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x177ad8) {
            ctx->pc = 0x177AE8u;
            goto label_177ae8;
        }
    }
    ctx->pc = 0x177AE0u;
    // 0x177ae0: 0xc05dd6c  jal         func_1775B0
    ctx->pc = 0x177AE0u;
    SET_GPR_U32(ctx, 31, 0x177AE8u);
    ctx->pc = 0x1775B0u;
    if (runtime->hasFunction(0x1775B0u)) {
        auto targetFn = runtime->lookupFunction(0x1775B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AE8u; }
        if (ctx->pc != 0x177AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001775B0_0x1775b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AE8u; }
        if (ctx->pc != 0x177AE8u) { return; }
    }
    ctx->pc = 0x177AE8u;
label_177ae8:
    // 0x177ae8: 0xc05de5e  jal         func_177978
    ctx->pc = 0x177AE8u;
    SET_GPR_U32(ctx, 31, 0x177AF0u);
    ctx->pc = 0x177AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177AE8u;
            // 0x177aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177978u;
    if (runtime->hasFunction(0x177978u)) {
        auto targetFn = runtime->lookupFunction(0x177978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AF0u; }
        if (ctx->pc != 0x177AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177978_0x177978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AF0u; }
        if (ctx->pc != 0x177AF0u) { return; }
    }
    ctx->pc = 0x177AF0u;
label_177af0:
    // 0x177af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177af4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177afc: 0x805de3e  j           func_1778F8
    ctx->pc = 0x177AFCu;
    ctx->pc = 0x177B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177AFCu;
            // 0x177b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1778F8u;
    {
        auto targetFn = runtime->lookupFunction(0x1778F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x177B04u;
    // 0x177b04: 0x0  nop
    ctx->pc = 0x177b04u;
    // NOP
    // 0x177b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177b10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177b14: 0xc0599de  jal         func_166778
    ctx->pc = 0x177B14u;
    SET_GPR_U32(ctx, 31, 0x177B1Cu);
    ctx->pc = 0x177B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B14u;
            // 0x177b18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B1Cu; }
        if (ctx->pc != 0x177B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B1Cu; }
        if (ctx->pc != 0x177B1Cu) { return; }
    }
    ctx->pc = 0x177B1Cu;
label_177b1c:
    // 0x177b1c: 0xc05ded0  jal         func_177B40
    ctx->pc = 0x177B1Cu;
    SET_GPR_U32(ctx, 31, 0x177B24u);
    ctx->pc = 0x177B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B1Cu;
            // 0x177b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177B40u;
    if (runtime->hasFunction(0x177B40u)) {
        auto targetFn = runtime->lookupFunction(0x177B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B24u; }
        if (ctx->pc != 0x177B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177B40_0x177b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B24u; }
        if (ctx->pc != 0x177B24u) { return; }
    }
    ctx->pc = 0x177B24u;
label_177b24:
    // 0x177b24: 0xc0599e0  jal         func_166780
    ctx->pc = 0x177B24u;
    SET_GPR_U32(ctx, 31, 0x177B2Cu);
    ctx->pc = 0x177B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B24u;
            // 0x177b28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B2Cu; }
        if (ctx->pc != 0x177B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B2Cu; }
        if (ctx->pc != 0x177B2Cu) { return; }
    }
    ctx->pc = 0x177B2Cu;
label_177b2c:
    // 0x177b2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177b30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x177b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b38: 0x3e00008  jr          $ra
    ctx->pc = 0x177B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B38u;
            // 0x177b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177B40u;
}
