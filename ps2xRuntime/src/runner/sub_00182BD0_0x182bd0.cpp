#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182BD0
// Address: 0x182bd0 - 0x182cb0
void sub_00182BD0_0x182bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182BD0_0x182bd0");
#endif

    switch (ctx->pc) {
        case 0x182bd0u: goto label_182bd0;
        case 0x182bd4u: goto label_182bd4;
        case 0x182bd8u: goto label_182bd8;
        case 0x182bdcu: goto label_182bdc;
        case 0x182be0u: goto label_182be0;
        case 0x182be4u: goto label_182be4;
        case 0x182be8u: goto label_182be8;
        case 0x182becu: goto label_182bec;
        case 0x182bf0u: goto label_182bf0;
        case 0x182bf4u: goto label_182bf4;
        case 0x182bf8u: goto label_182bf8;
        case 0x182bfcu: goto label_182bfc;
        case 0x182c00u: goto label_182c00;
        case 0x182c04u: goto label_182c04;
        case 0x182c08u: goto label_182c08;
        case 0x182c0cu: goto label_182c0c;
        case 0x182c10u: goto label_182c10;
        case 0x182c14u: goto label_182c14;
        case 0x182c18u: goto label_182c18;
        case 0x182c1cu: goto label_182c1c;
        case 0x182c20u: goto label_182c20;
        case 0x182c24u: goto label_182c24;
        case 0x182c28u: goto label_182c28;
        case 0x182c2cu: goto label_182c2c;
        case 0x182c30u: goto label_182c30;
        case 0x182c34u: goto label_182c34;
        case 0x182c38u: goto label_182c38;
        case 0x182c3cu: goto label_182c3c;
        case 0x182c40u: goto label_182c40;
        case 0x182c44u: goto label_182c44;
        case 0x182c48u: goto label_182c48;
        case 0x182c4cu: goto label_182c4c;
        case 0x182c50u: goto label_182c50;
        case 0x182c54u: goto label_182c54;
        case 0x182c58u: goto label_182c58;
        case 0x182c5cu: goto label_182c5c;
        case 0x182c60u: goto label_182c60;
        case 0x182c64u: goto label_182c64;
        case 0x182c68u: goto label_182c68;
        case 0x182c6cu: goto label_182c6c;
        case 0x182c70u: goto label_182c70;
        case 0x182c74u: goto label_182c74;
        case 0x182c78u: goto label_182c78;
        case 0x182c7cu: goto label_182c7c;
        case 0x182c80u: goto label_182c80;
        case 0x182c84u: goto label_182c84;
        case 0x182c88u: goto label_182c88;
        case 0x182c8cu: goto label_182c8c;
        case 0x182c90u: goto label_182c90;
        case 0x182c94u: goto label_182c94;
        case 0x182c98u: goto label_182c98;
        case 0x182c9cu: goto label_182c9c;
        case 0x182ca0u: goto label_182ca0;
        case 0x182ca4u: goto label_182ca4;
        case 0x182ca8u: goto label_182ca8;
        case 0x182cacu: goto label_182cac;
        default: break;
    }

    ctx->pc = 0x182bd0u;

label_182bd0:
    // 0x182bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_182bd4:
    // 0x182bd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x182bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_182bd8:
    // 0x182bd8: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x182bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
label_182bdc:
    // 0x182bdc: 0x8e42ced0  lw          $v0, -0x3130($s2)
    ctx->pc = 0x182bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954704)));
label_182be0:
    // 0x182be0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_182be4:
    // 0x182be4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x182be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182be8:
    // 0x182be8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_182bec:
    // 0x182bec: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_182bf0:
    if (ctx->pc == 0x182BF0u) {
        ctx->pc = 0x182BF0u;
            // 0x182bf0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x182BF4u;
        goto label_182bf4;
    }
    ctx->pc = 0x182BECu;
    {
        const bool branch_taken_0x182bec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x182BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BECu;
            // 0x182bf0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bec) {
            ctx->pc = 0x182C68u;
            goto label_182c68;
        }
    }
    ctx->pc = 0x182BF4u;
label_182bf4:
    // 0x182bf4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x182bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_182bf8:
    // 0x182bf8: 0x2450cf30  addiu       $s0, $v0, -0x30D0
    ctx->pc = 0x182bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954800));
label_182bfc:
    // 0x182bfc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x182bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_182c00:
    // 0x182c00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_182c04:
    if (ctx->pc == 0x182C04u) {
        ctx->pc = 0x182C04u;
            // 0x182c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x182C08u;
        goto label_182c08;
    }
    ctx->pc = 0x182C00u;
    {
        const bool branch_taken_0x182c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C00u;
            // 0x182c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c00) {
            ctx->pc = 0x182C10u;
            goto label_182c10;
        }
    }
    ctx->pc = 0x182C08u;
label_182c08:
    // 0x182c08: 0xc061d24  jal         func_187490
label_182c0c:
    if (ctx->pc == 0x182C0Cu) {
        ctx->pc = 0x182C10u;
        goto label_182c10;
    }
    ctx->pc = 0x182C08u;
    SET_GPR_U32(ctx, 31, 0x182C10u);
    ctx->pc = 0x187490u;
    if (runtime->hasFunction(0x187490u)) {
        auto targetFn = runtime->lookupFunction(0x187490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C10u; }
        if (ctx->pc != 0x182C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187490_0x187490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C10u; }
        if (ctx->pc != 0x182C10u) { return; }
    }
    ctx->pc = 0x182C10u;
label_182c10:
    // 0x182c10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x182c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_182c14:
    // 0x182c14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_182c18:
    if (ctx->pc == 0x182C18u) {
        ctx->pc = 0x182C18u;
            // 0x182c18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x182C1Cu;
        goto label_182c1c;
    }
    ctx->pc = 0x182C14u;
    {
        const bool branch_taken_0x182c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C14u;
            // 0x182c18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c14) {
            ctx->pc = 0x182C2Cu;
            goto label_182c2c;
        }
    }
    ctx->pc = 0x182C1Cu;
label_182c1c:
    // 0x182c1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x182c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_182c20:
    // 0x182c20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x182c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_182c24:
    // 0x182c24: 0x60f809  jalr        $v1
label_182c28:
    if (ctx->pc == 0x182C28u) {
        ctx->pc = 0x182C2Cu;
        goto label_182c2c;
    }
    ctx->pc = 0x182C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x182C2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x182C2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x182C2Cu; }
            if (ctx->pc != 0x182C2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x182C2Cu;
label_182c2c:
    // 0x182c2c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x182c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_182c30:
    // 0x182c30: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_182c34:
    if (ctx->pc == 0x182C34u) {
        ctx->pc = 0x182C34u;
            // 0x182c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x182C38u;
        goto label_182c38;
    }
    ctx->pc = 0x182C30u;
    {
        const bool branch_taken_0x182c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182c30) {
            ctx->pc = 0x182C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182C30u;
            // 0x182c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182C44u;
            goto label_182c44;
        }
    }
    ctx->pc = 0x182C38u;
label_182c38:
    // 0x182c38: 0xc061f22  jal         func_187C88
label_182c3c:
    if (ctx->pc == 0x182C3Cu) {
        ctx->pc = 0x182C40u;
        goto label_182c40;
    }
    ctx->pc = 0x182C38u;
    SET_GPR_U32(ctx, 31, 0x182C40u);
    ctx->pc = 0x187C88u;
    if (runtime->hasFunction(0x187C88u)) {
        auto targetFn = runtime->lookupFunction(0x187C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C40u; }
        if (ctx->pc != 0x182C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187C88_0x187c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C40u; }
        if (ctx->pc != 0x182C40u) { return; }
    }
    ctx->pc = 0x182C40u;
label_182c40:
    // 0x182c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182c44:
    // 0x182c44: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x182c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_182c48:
    // 0x182c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182c4c:
    // 0x182c4c: 0xc04a576  jal         func_1295D8
label_182c50:
    if (ctx->pc == 0x182C50u) {
        ctx->pc = 0x182C50u;
            // 0x182c50: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x182C54u;
        goto label_182c54;
    }
    ctx->pc = 0x182C4Cu;
    SET_GPR_U32(ctx, 31, 0x182C54u);
    ctx->pc = 0x182C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182C4Cu;
            // 0x182c50: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C54u; }
        if (ctx->pc != 0x182C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C54u; }
        if (ctx->pc != 0x182C54u) { return; }
    }
    ctx->pc = 0x182C54u;
label_182c54:
    // 0x182c54: 0x8e43ced0  lw          $v1, -0x3130($s2)
    ctx->pc = 0x182c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954704)));
label_182c58:
    // 0x182c58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x182c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_182c5c:
    // 0x182c5c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x182c5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_182c60:
    // 0x182c60: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
label_182c64:
    if (ctx->pc == 0x182C64u) {
        ctx->pc = 0x182C64u;
            // 0x182c64: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x182C68u;
        goto label_182c68;
    }
    ctx->pc = 0x182C60u;
    {
        const bool branch_taken_0x182c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182c60) {
            ctx->pc = 0x182C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182C60u;
            // 0x182c64: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182c00;
        }
    }
    ctx->pc = 0x182C68u;
label_182c68:
    // 0x182c68: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x182c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_182c6c:
    // 0x182c6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x182c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182c70:
    // 0x182c70: 0x2451cee4  addiu       $s1, $v0, -0x311C
    ctx->pc = 0x182c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954724));
label_182c74:
    // 0x182c74: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x182c74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_182c78:
    // 0x182c78: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_182c7c:
    if (ctx->pc == 0x182C7Cu) {
        ctx->pc = 0x182C7Cu;
            // 0x182c7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x182C80u;
        goto label_182c80;
    }
    ctx->pc = 0x182C78u;
    {
        const bool branch_taken_0x182c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x182C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C78u;
            // 0x182c7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c78) {
            ctx->pc = 0x182C9Cu;
            goto label_182c9c;
        }
    }
    ctx->pc = 0x182C80u;
label_182c80:
    // 0x182c80: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x182c80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_182c84:
    // 0x182c84: 0x2610cedc  addiu       $s0, $s0, -0x3124
    ctx->pc = 0x182c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954716));
label_182c88:
    // 0x182c88: 0xc045262  jal         func_114988
label_182c8c:
    if (ctx->pc == 0x182C8Cu) {
        ctx->pc = 0x182C8Cu;
            // 0x182c8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x182C90u;
        goto label_182c90;
    }
    ctx->pc = 0x182C88u;
    SET_GPR_U32(ctx, 31, 0x182C90u);
    ctx->pc = 0x182C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182C88u;
            // 0x182c8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C90u; }
        if (ctx->pc != 0x182C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C90u; }
        if (ctx->pc != 0x182C90u) { return; }
    }
    ctx->pc = 0x182C90u;
label_182c90:
    // 0x182c90: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x182c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_182c94:
    // 0x182c94: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x182c94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_182c98:
    // 0x182c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182c9c:
    // 0x182c9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_182ca0:
    // 0x182ca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_182ca4:
    // 0x182ca4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x182ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_182ca8:
    // 0x182ca8: 0x3e00008  jr          $ra
label_182cac:
    if (ctx->pc == 0x182CACu) {
        ctx->pc = 0x182CACu;
            // 0x182cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x182CB0u;
        goto label_fallthrough_0x182ca8;
    }
    ctx->pc = 0x182CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CA8u;
            // 0x182cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x182ca8:
    ctx->pc = 0x182CB0u;
}
