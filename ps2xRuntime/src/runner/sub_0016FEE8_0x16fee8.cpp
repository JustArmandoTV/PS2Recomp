#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016FEE8
// Address: 0x16fee8 - 0x16ff78
void sub_0016FEE8_0x16fee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FEE8_0x16fee8");
#endif

    switch (ctx->pc) {
        case 0x16fee8u: goto label_16fee8;
        case 0x16feecu: goto label_16feec;
        case 0x16fef0u: goto label_16fef0;
        case 0x16fef4u: goto label_16fef4;
        case 0x16fef8u: goto label_16fef8;
        case 0x16fefcu: goto label_16fefc;
        case 0x16ff00u: goto label_16ff00;
        case 0x16ff04u: goto label_16ff04;
        case 0x16ff08u: goto label_16ff08;
        case 0x16ff0cu: goto label_16ff0c;
        case 0x16ff10u: goto label_16ff10;
        case 0x16ff14u: goto label_16ff14;
        case 0x16ff18u: goto label_16ff18;
        case 0x16ff1cu: goto label_16ff1c;
        case 0x16ff20u: goto label_16ff20;
        case 0x16ff24u: goto label_16ff24;
        case 0x16ff28u: goto label_16ff28;
        case 0x16ff2cu: goto label_16ff2c;
        case 0x16ff30u: goto label_16ff30;
        case 0x16ff34u: goto label_16ff34;
        case 0x16ff38u: goto label_16ff38;
        case 0x16ff3cu: goto label_16ff3c;
        case 0x16ff40u: goto label_16ff40;
        case 0x16ff44u: goto label_16ff44;
        case 0x16ff48u: goto label_16ff48;
        case 0x16ff4cu: goto label_16ff4c;
        case 0x16ff50u: goto label_16ff50;
        case 0x16ff54u: goto label_16ff54;
        case 0x16ff58u: goto label_16ff58;
        case 0x16ff5cu: goto label_16ff5c;
        case 0x16ff60u: goto label_16ff60;
        case 0x16ff64u: goto label_16ff64;
        case 0x16ff68u: goto label_16ff68;
        case 0x16ff6cu: goto label_16ff6c;
        case 0x16ff70u: goto label_16ff70;
        case 0x16ff74u: goto label_16ff74;
        default: break;
    }

    ctx->pc = 0x16fee8u;

label_16fee8:
    // 0x16fee8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16feec:
    // 0x16feec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16feecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16fef0:
    // 0x16fef0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x16fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
label_16fef4:
    // 0x16fef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16fef8:
    // 0x16fef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16fef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16fefc:
    // 0x16fefc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16fefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16ff00:
    // 0x16ff00: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_16ff04:
    if (ctx->pc == 0x16FF04u) {
        ctx->pc = 0x16FF04u;
            // 0x16ff04: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x16FF08u;
        goto label_16ff08;
    }
    ctx->pc = 0x16FF00u;
    {
        const bool branch_taken_0x16ff00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF00u;
            // 0x16ff04: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff00) {
            ctx->pc = 0x16FF14u;
            goto label_16ff14;
        }
    }
    ctx->pc = 0x16FF08u;
label_16ff08:
    // 0x16ff08: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16ff0c:
    // 0x16ff0c: 0x60f809  jalr        $v1
label_16ff10:
    if (ctx->pc == 0x16FF10u) {
        ctx->pc = 0x16FF10u;
            // 0x16ff10: 0x8c442388  lw          $a0, 0x2388($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9096)));
        ctx->pc = 0x16FF14u;
        goto label_16ff14;
    }
    ctx->pc = 0x16FF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FF14u);
        ctx->pc = 0x16FF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF0Cu;
            // 0x16ff10: 0x8c442388  lw          $a0, 0x2388($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9096)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FF14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FF14u; }
            if (ctx->pc != 0x16FF14u) { return; }
        }
        }
    }
    ctx->pc = 0x16FF14u;
label_16ff14:
    // 0x16ff14: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16ff18:
    // 0x16ff18: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16ff18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ff1c:
    // 0x16ff1c: 0x24502398  addiu       $s0, $v0, 0x2398
    ctx->pc = 0x16ff1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9112));
label_16ff20:
    // 0x16ff20: 0x26110ac0  addiu       $s1, $s0, 0xAC0
    ctx->pc = 0x16ff20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2752));
label_16ff24:
    // 0x16ff24: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x16ff24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_16ff28:
    // 0x16ff28: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_16ff2c:
    if (ctx->pc == 0x16FF2Cu) {
        ctx->pc = 0x16FF2Cu;
            // 0x16ff2c: 0x261000ac  addiu       $s0, $s0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
        ctx->pc = 0x16FF30u;
        goto label_16ff30;
    }
    ctx->pc = 0x16FF28u;
    {
        const bool branch_taken_0x16ff28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x16ff28) {
            ctx->pc = 0x16FF2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF28u;
            // 0x16ff2c: 0x261000ac  addiu       $s0, $s0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FF3Cu;
            goto label_16ff3c;
        }
    }
    ctx->pc = 0x16FF30u;
label_16ff30:
    // 0x16ff30: 0xc05bee2  jal         func_16FB88
label_16ff34:
    if (ctx->pc == 0x16FF34u) {
        ctx->pc = 0x16FF34u;
            // 0x16ff34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FF38u;
        goto label_16ff38;
    }
    ctx->pc = 0x16FF30u;
    SET_GPR_U32(ctx, 31, 0x16FF38u);
    ctx->pc = 0x16FF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF30u;
            // 0x16ff34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FB88u;
    if (runtime->hasFunction(0x16FB88u)) {
        auto targetFn = runtime->lookupFunction(0x16FB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FF38u; }
        if (ctx->pc != 0x16FF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FB88_0x16fb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FF38u; }
        if (ctx->pc != 0x16FF38u) { return; }
    }
    ctx->pc = 0x16FF38u;
label_16ff38:
    // 0x16ff38: 0x261000ac  addiu       $s0, $s0, 0xAC
    ctx->pc = 0x16ff38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
label_16ff3c:
    // 0x16ff3c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x16ff3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_16ff40:
    // 0x16ff40: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_16ff44:
    if (ctx->pc == 0x16FF44u) {
        ctx->pc = 0x16FF44u;
            // 0x16ff44: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x16FF48u;
        goto label_16ff48;
    }
    ctx->pc = 0x16FF40u;
    {
        const bool branch_taken_0x16ff40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ff40) {
            ctx->pc = 0x16FF44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF40u;
            // 0x16ff44: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FF28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ff28;
        }
    }
    ctx->pc = 0x16FF48u;
label_16ff48:
    // 0x16ff48: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16ff4c:
    // 0x16ff4c: 0x8c43238c  lw          $v1, 0x238C($v0)
    ctx->pc = 0x16ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9100)));
label_16ff50:
    // 0x16ff50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16ff54:
    if (ctx->pc == 0x16FF54u) {
        ctx->pc = 0x16FF54u;
            // 0x16ff54: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16FF58u;
        goto label_16ff58;
    }
    ctx->pc = 0x16FF50u;
    {
        const bool branch_taken_0x16ff50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF50u;
            // 0x16ff54: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff50) {
            ctx->pc = 0x16FF60u;
            goto label_16ff60;
        }
    }
    ctx->pc = 0x16FF58u;
label_16ff58:
    // 0x16ff58: 0x60f809  jalr        $v1
label_16ff5c:
    if (ctx->pc == 0x16FF5Cu) {
        ctx->pc = 0x16FF5Cu;
            // 0x16ff5c: 0x8c442390  lw          $a0, 0x2390($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9104)));
        ctx->pc = 0x16FF60u;
        goto label_16ff60;
    }
    ctx->pc = 0x16FF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FF60u);
        ctx->pc = 0x16FF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF58u;
            // 0x16ff5c: 0x8c442390  lw          $a0, 0x2390($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9104)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FF60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FF60u; }
            if (ctx->pc != 0x16FF60u) { return; }
        }
        }
    }
    ctx->pc = 0x16FF60u;
label_16ff60:
    // 0x16ff60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ff60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ff64:
    // 0x16ff64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ff64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16ff68:
    // 0x16ff68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16ff68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16ff6c:
    // 0x16ff6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16ff6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16ff70:
    // 0x16ff70: 0x3e00008  jr          $ra
label_16ff74:
    if (ctx->pc == 0x16FF74u) {
        ctx->pc = 0x16FF74u;
            // 0x16ff74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16FF78u;
        goto label_fallthrough_0x16ff70;
    }
    ctx->pc = 0x16FF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF70u;
            // 0x16ff74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16ff70:
    ctx->pc = 0x16FF78u;
}
