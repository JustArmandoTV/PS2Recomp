#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AC80
// Address: 0x17ac80 - 0x17ae68
void sub_0017AC80_0x17ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AC80_0x17ac80");
#endif

    switch (ctx->pc) {
        case 0x17acd8u: goto label_17acd8;
        case 0x17ace0u: goto label_17ace0;
        case 0x17acecu: goto label_17acec;
        case 0x17ad08u: goto label_17ad08;
        case 0x17ad10u: goto label_17ad10;
        case 0x17ad18u: goto label_17ad18;
        case 0x17ad20u: goto label_17ad20;
        case 0x17ad70u: goto label_17ad70;
        case 0x17ada0u: goto label_17ada0;
        case 0x17adacu: goto label_17adac;
        case 0x17ae04u: goto label_17ae04;
        case 0x17ae0cu: goto label_17ae0c;
        case 0x17ae18u: goto label_17ae18;
        case 0x17ae20u: goto label_17ae20;
        default: break;
    }

    ctx->pc = 0x17ac80u;

    // 0x17ac80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ac84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ac88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ac8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ac8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ac94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17ac98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17ac9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17aca0: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x17ACA0u;
    {
        const bool branch_taken_0x17aca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17ACA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACA0u;
            // 0x17aca4: 0x92250002  lbu         $a1, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aca0) {
            ctx->pc = 0x17AD54u;
            goto label_17ad54;
        }
    }
    ctx->pc = 0x17ACA8u;
    // 0x17aca8: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x17aca8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17acac: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x17acacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x17acb0: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x17ACB0u;
    {
        const bool branch_taken_0x17acb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17acb0) {
            ctx->pc = 0x17ACB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACB0u;
            // 0x17acb4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AD54u;
            goto label_17ad54;
        }
    }
    ctx->pc = 0x17ACB8u;
    // 0x17acb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17acbc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x17acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x17acc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17acc4: 0x8c635940  lw          $v1, 0x5940($v1)
    ctx->pc = 0x17acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22848)));
    // 0x17acc8: 0x600008  jr          $v1
    ctx->pc = 0x17ACC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ACD0u: goto label_17acd0;
            case 0x17AD48u: goto label_17ad48;
            case 0x17AD50u: goto label_17ad50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17ACD0u;
label_17acd0:
    // 0x17acd0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17ACD0u;
    SET_GPR_U32(ctx, 31, 0x17ACD8u);
    ctx->pc = 0x17ACD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACD0u;
            // 0x17acd4: 0x24041600  addiu       $a0, $zero, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACD8u; }
        if (ctx->pc != 0x17ACD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACD8u; }
        if (ctx->pc != 0x17ACD8u) { return; }
    }
    ctx->pc = 0x17ACD8u;
label_17acd8:
    // 0x17acd8: 0xc047e7c  jal         func_11F9F0
    ctx->pc = 0x17ACD8u;
    SET_GPR_U32(ctx, 31, 0x17ACE0u);
    ctx->pc = 0x11F9F0u;
    if (runtime->hasFunction(0x11F9F0u)) {
        auto targetFn = runtime->lookupFunction(0x11F9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACE0u; }
        if (ctx->pc != 0x17ACE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F9F0_0x11f9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACE0u; }
        if (ctx->pc != 0x17ACE0u) { return; }
    }
    ctx->pc = 0x17ACE0u;
label_17ace0:
    // 0x17ace0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ace0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ace4: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17ACE4u;
    SET_GPR_U32(ctx, 31, 0x17ACECu);
    ctx->pc = 0x17ACE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACE4u;
            // 0x17ace8: 0x24041601  addiu       $a0, $zero, 0x1601 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5633));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACECu; }
        if (ctx->pc != 0x17ACECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACECu; }
        if (ctx->pc != 0x17ACECu) { return; }
    }
    ctx->pc = 0x17ACECu;
label_17acec:
    // 0x17acec: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17ACECu;
    {
        const bool branch_taken_0x17acec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ACF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACECu;
            // 0x17acf0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acec) {
            ctx->pc = 0x17AD08u;
            goto label_17ad08;
        }
    }
    ctx->pc = 0x17ACF4u;
    // 0x17acf4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17acf8: 0x244243dc  addiu       $v0, $v0, 0x43DC
    ctx->pc = 0x17acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17372));
    // 0x17acfc: 0x24845918  addiu       $a0, $a0, 0x5918
    ctx->pc = 0x17acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22808));
    // 0x17ad00: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17AD00u;
    SET_GPR_U32(ctx, 31, 0x17AD08u);
    ctx->pc = 0x17AD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD00u;
            // 0x17ad04: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD08u; }
        if (ctx->pc != 0x17AD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD08u; }
        if (ctx->pc != 0x17AD08u) { return; }
    }
    ctx->pc = 0x17AD08u;
label_17ad08:
    // 0x17ad08: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AD08u;
    SET_GPR_U32(ctx, 31, 0x17AD10u);
    ctx->pc = 0x17AD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD08u;
            // 0x17ad0c: 0x24041700  addiu       $a0, $zero, 0x1700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD10u; }
        if (ctx->pc != 0x17AD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD10u; }
        if (ctx->pc != 0x17AD10u) { return; }
    }
    ctx->pc = 0x17AD10u;
label_17ad10:
    // 0x17ad10: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17AD10u;
    SET_GPR_U32(ctx, 31, 0x17AD18u);
    ctx->pc = 0x17AD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD10u;
            // 0x17ad14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD18u; }
        if (ctx->pc != 0x17AD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD18u; }
        if (ctx->pc != 0x17AD18u) { return; }
    }
    ctx->pc = 0x17AD18u;
label_17ad18:
    // 0x17ad18: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AD18u;
    SET_GPR_U32(ctx, 31, 0x17AD20u);
    ctx->pc = 0x17AD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD18u;
            // 0x17ad1c: 0x24041701  addiu       $a0, $zero, 0x1701 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD20u; }
        if (ctx->pc != 0x17AD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD20u; }
        if (ctx->pc != 0x17AD20u) { return; }
    }
    ctx->pc = 0x17AD20u;
label_17ad20:
    // 0x17ad20: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x17ad20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ad24: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17ad28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ad28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad2c: 0x246343e4  addiu       $v1, $v1, 0x43E4
    ctx->pc = 0x17ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17380));
    // 0x17ad30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ad34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ad38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17ad3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17AD3Cu;
    {
        const bool branch_taken_0x17ad3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD3Cu;
            // 0x17ad40: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad3c) {
            ctx->pc = 0x17AD54u;
            goto label_17ad54;
        }
    }
    ctx->pc = 0x17AD44u;
    // 0x17ad44: 0x0  nop
    ctx->pc = 0x17ad44u;
    // NOP
label_17ad48:
    // 0x17ad48: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x17ad48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ad4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ad4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ad50:
    // 0x17ad50: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x17ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_17ad54:
    // 0x17ad54: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x17ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x17ad58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ad5c: 0x29603  sra         $s2, $v0, 24
    ctx->pc = 0x17ad5cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17ad60: 0x56430023  bnel        $s2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x17AD60u;
    {
        const bool branch_taken_0x17ad60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x17ad60) {
            ctx->pc = 0x17AD64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD60u;
            // 0x17ad64: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17ADF0u;
            goto label_17adf0;
        }
    }
    ctx->pc = 0x17AD68u;
    // 0x17ad68: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AD68u;
    SET_GPR_U32(ctx, 31, 0x17AD70u);
    ctx->pc = 0x17AD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD68u;
            // 0x17ad6c: 0x24041800  addiu       $a0, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD70u; }
        if (ctx->pc != 0x17AD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD70u; }
        if (ctx->pc != 0x17AD70u) { return; }
    }
    ctx->pc = 0x17AD70u;
label_17ad70:
    // 0x17ad70: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17ad74: 0x8c434410  lw          $v1, 0x4410($v0)
    ctx->pc = 0x17ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17424)));
    // 0x17ad78: 0x54720005  bnel        $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17AD78u;
    {
        const bool branch_taken_0x17ad78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x17ad78) {
            ctx->pc = 0x17AD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD78u;
            // 0x17ad7c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AD90u;
            goto label_17ad90;
        }
    }
    ctx->pc = 0x17AD80u;
    // 0x17ad80: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17ad84: 0x90434414  lbu         $v1, 0x4414($v0)
    ctx->pc = 0x17ad84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17428)));
    // 0x17ad88: 0xa2230015  sb          $v1, 0x15($s1)
    ctx->pc = 0x17ad88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x17ad8c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17ad90:
    // 0x17ad90: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x17ad90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x17ad94: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x17ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17ad98: 0xc047d7c  jal         func_11F5F0
    ctx->pc = 0x17AD98u;
    SET_GPR_U32(ctx, 31, 0x17ADA0u);
    ctx->pc = 0x17AD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD98u;
            // 0x17ad9c: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5F0u;
    if (runtime->hasFunction(0x11F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x11F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADA0u; }
        if (ctx->pc != 0x17ADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F5F0_0x11f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADA0u; }
        if (ctx->pc != 0x17ADA0u) { return; }
    }
    ctx->pc = 0x17ADA0u;
label_17ada0:
    // 0x17ada0: 0x24041801  addiu       $a0, $zero, 0x1801
    ctx->pc = 0x17ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6145));
    // 0x17ada4: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17ADA4u;
    SET_GPR_U32(ctx, 31, 0x17ADACu);
    ctx->pc = 0x17ADA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ADA4u;
            // 0x17ada8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADACu; }
        if (ctx->pc != 0x17ADACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADACu; }
        if (ctx->pc != 0x17ADACu) { return; }
    }
    ctx->pc = 0x17ADACu;
label_17adac:
    // 0x17adac: 0x1612000a  bne         $s0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x17ADACu;
    {
        const bool branch_taken_0x17adac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x17ADB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ADACu;
            // 0x17adb0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17adac) {
            ctx->pc = 0x17ADD8u;
            goto label_17add8;
        }
    }
    ctx->pc = 0x17ADB4u;
    // 0x17adb4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17adb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17adbc: 0x244243e0  addiu       $v0, $v0, 0x43E0
    ctx->pc = 0x17adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
    // 0x17adc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17adc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17adc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17adc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17adcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17adccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17add0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17ADD0u;
    {
        const bool branch_taken_0x17add0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ADD0u;
            // 0x17add4: 0xa2240002  sb          $a0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17add0) {
            ctx->pc = 0x17ADE8u;
            goto label_17ade8;
        }
    }
    ctx->pc = 0x17ADD8u;
label_17add8:
    // 0x17add8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17add8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17addc: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x17addcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ade0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x17ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17ade4: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x17ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_17ade8:
    // 0x17ade8: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x17ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x17adec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17adecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17adf0:
    // 0x17adf0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x17adf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17adf4: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17ADF4u;
    {
        const bool branch_taken_0x17adf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17ADF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ADF4u;
            // 0x17adf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17adf4) {
            ctx->pc = 0x17AE54u;
            goto label_17ae54;
        }
    }
    ctx->pc = 0x17ADFCu;
    // 0x17adfc: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17ADFCu;
    SET_GPR_U32(ctx, 31, 0x17AE04u);
    ctx->pc = 0x17AE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ADFCu;
            // 0x17ae00: 0x24041900  addiu       $a0, $zero, 0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE04u; }
        if (ctx->pc != 0x17AE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE04u; }
        if (ctx->pc != 0x17AE04u) { return; }
    }
    ctx->pc = 0x17AE04u;
label_17ae04:
    // 0x17ae04: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17AE04u;
    SET_GPR_U32(ctx, 31, 0x17AE0Cu);
    ctx->pc = 0x17AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE04u;
            // 0x17ae08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE0Cu; }
        if (ctx->pc != 0x17AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE0Cu; }
        if (ctx->pc != 0x17AE0Cu) { return; }
    }
    ctx->pc = 0x17AE0Cu;
label_17ae0c:
    // 0x17ae0c: 0x24041901  addiu       $a0, $zero, 0x1901
    ctx->pc = 0x17ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6401));
    // 0x17ae10: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AE10u;
    SET_GPR_U32(ctx, 31, 0x17AE18u);
    ctx->pc = 0x17AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE10u;
            // 0x17ae14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE18u; }
        if (ctx->pc != 0x17AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE18u; }
        if (ctx->pc != 0x17AE18u) { return; }
    }
    ctx->pc = 0x17AE18u;
label_17ae18:
    // 0x17ae18: 0xc05eac8  jal         func_17AB20
    ctx->pc = 0x17AE18u;
    SET_GPR_U32(ctx, 31, 0x17AE20u);
    ctx->pc = 0x17AE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE18u;
            // 0x17ae1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AB20u;
    if (runtime->hasFunction(0x17AB20u)) {
        auto targetFn = runtime->lookupFunction(0x17AB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE20u; }
        if (ctx->pc != 0x17AE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AB20_0x17ab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE20u; }
        if (ctx->pc != 0x17AE20u) { return; }
    }
    ctx->pc = 0x17AE20u;
label_17ae20:
    // 0x17ae20: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x17AE20u;
    {
        const bool branch_taken_0x17ae20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE20u;
            // 0x17ae24: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae20) {
            ctx->pc = 0x17AE50u;
            goto label_17ae50;
        }
    }
    ctx->pc = 0x17AE28u;
    // 0x17ae28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ae2c: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17AE2Cu;
    {
        const bool branch_taken_0x17ae2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ae2c) {
            ctx->pc = 0x17AE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE2Cu;
            // 0x17ae30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AE38u;
            goto label_17ae38;
        }
    }
    ctx->pc = 0x17AE34u;
    // 0x17ae34: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_17ae38:
    // 0x17ae38: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x17ae38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ae3c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17ae40: 0x246343e4  addiu       $v1, $v1, 0x43E4
    ctx->pc = 0x17ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17380));
    // 0x17ae44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ae48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ae4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17ae50:
    // 0x17ae50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ae50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ae54:
    // 0x17ae54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ae54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ae58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ae58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ae5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17ae5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x17AE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE60u;
            // 0x17ae64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AE68u;
}
