#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018AB58
// Address: 0x18ab58 - 0x18acc0
void sub_0018AB58_0x18ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AB58_0x18ab58");
#endif

    switch (ctx->pc) {
        case 0x18ab78u: goto label_18ab78;
        case 0x18ac5cu: goto label_18ac5c;
        case 0x18ac90u: goto label_18ac90;
        case 0x18aca4u: goto label_18aca4;
        default: break;
    }

    ctx->pc = 0x18ab58u;

    // 0x18ab58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ab5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ab5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18ab60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18ab64: 0x24900180  addiu       $s0, $a0, 0x180
    ctx->pc = 0x18ab64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x18ab68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ab68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18ab70: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x18AB70u;
    SET_GPR_U32(ctx, 31, 0x18AB78u);
    ctx->pc = 0x18AB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB70u;
            // 0x18ab74: 0x240604d0  addiu       $a2, $zero, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AB78u; }
        if (ctx->pc != 0x18AB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AB78u; }
        if (ctx->pc != 0x18AB78u) { return; }
    }
    ctx->pc = 0x18AB78u;
label_18ab78:
    // 0x18ab78: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18ab7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ab80: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x18ab80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x18ab84: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x18ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x18ab88: 0xae0004c0  sw          $zero, 0x4C0($s0)
    ctx->pc = 0x18ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 0));
    // 0x18ab8c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x18ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x18ab90: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x18ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x18ab94: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x18ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x18ab98: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x18ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x18ab9c: 0xae00040c  sw          $zero, 0x40C($s0)
    ctx->pc = 0x18ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 0));
    // 0x18aba0: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x18aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
    // 0x18aba4: 0xae000414  sw          $zero, 0x414($s0)
    ctx->pc = 0x18aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
    // 0x18aba8: 0xae000418  sw          $zero, 0x418($s0)
    ctx->pc = 0x18aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
    // 0x18abac: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x18abacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x18abb0: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x18abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
    // 0x18abb4: 0xae000428  sw          $zero, 0x428($s0)
    ctx->pc = 0x18abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 0));
    // 0x18abb8: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x18abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x18abbc: 0xae00049c  sw          $zero, 0x49C($s0)
    ctx->pc = 0x18abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 0));
    // 0x18abc0: 0xae0004a0  sw          $zero, 0x4A0($s0)
    ctx->pc = 0x18abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 0));
    // 0x18abc4: 0xae0004b0  sw          $zero, 0x4B0($s0)
    ctx->pc = 0x18abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 0));
    // 0x18abc8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x18abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x18abcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18abccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18abd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18abd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18abd4: 0x3e00008  jr          $ra
    ctx->pc = 0x18ABD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ABD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABD4u;
            // 0x18abd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18ABDCu;
    // 0x18abdc: 0x0  nop
    ctx->pc = 0x18abdcu;
    // NOP
    // 0x18abe0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x18abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18abe4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18abe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18abec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x18abecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18abf0: 0x2484013c  addiu       $a0, $a0, 0x13C
    ctx->pc = 0x18abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 316));
    // 0x18abf4: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x18abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x18abf8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x18abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x18abfc: 0x3e00008  jr          $ra
    ctx->pc = 0x18ABFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABFCu;
            // 0x18ac00: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AC04u;
    // 0x18ac04: 0x0  nop
    ctx->pc = 0x18ac04u;
    // NOP
    // 0x18ac08: 0x2484016c  addiu       $a0, $a0, 0x16C
    ctx->pc = 0x18ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 364));
    // 0x18ac0c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x18ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x18ac10: 0x3e00008  jr          $ra
    ctx->pc = 0x18AC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC10u;
            // 0x18ac14: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AC18u;
    // 0x18ac18: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC18u;
    {
        const bool branch_taken_0x18ac18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC18u;
            // 0x18ac1c: 0x2484016c  addiu       $a0, $a0, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac18) {
            ctx->pc = 0x18AC28u;
            goto label_18ac28;
        }
    }
    ctx->pc = 0x18AC20u;
    // 0x18ac20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ac24: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_18ac28:
    // 0x18ac28: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC28u;
    {
        const bool branch_taken_0x18ac28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ac28) {
            ctx->pc = 0x18AC38u;
            goto label_18ac38;
        }
    }
    ctx->pc = 0x18AC30u;
    // 0x18ac30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x18ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18ac34: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x18ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_18ac38:
    // 0x18ac38: 0x3e00008  jr          $ra
    ctx->pc = 0x18AC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AC40u;
    // 0x18ac40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ac44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18ac48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18ac48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18ac50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ac50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ac54: 0xc064076  jal         func_1901D8
    ctx->pc = 0x18AC54u;
    SET_GPR_U32(ctx, 31, 0x18AC5Cu);
    ctx->pc = 0x18AC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC54u;
            // 0x18ac58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC5Cu; }
        if (ctx->pc != 0x18AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC5Cu; }
        if (ctx->pc != 0x18AC5Cu) { return; }
    }
    ctx->pc = 0x18AC5Cu;
label_18ac5c:
    // 0x18ac5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18AC60u;
    {
        const bool branch_taken_0x18ac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC60u;
            // 0x18ac64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac60) {
            ctx->pc = 0x18AC88u;
            goto label_18ac88;
        }
    }
    ctx->pc = 0x18AC68u;
    // 0x18ac68: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x18ac68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x18ac6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ac6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ac70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18ac70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18ac74: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x18ac74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    // 0x18ac78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ac78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ac7c: 0x80629ca  j           func_18A728
    ctx->pc = 0x18AC7Cu;
    ctx->pc = 0x18AC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC7Cu;
            // 0x18ac80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    {
        auto targetFn = runtime->lookupFunction(0x18A728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x18AC84u;
    // 0x18ac84: 0x0  nop
    ctx->pc = 0x18ac84u;
    // NOP
label_18ac88:
    // 0x18ac88: 0xc062b8c  jal         func_18AE30
    ctx->pc = 0x18AC88u;
    SET_GPR_U32(ctx, 31, 0x18AC90u);
    ctx->pc = 0x18AC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC88u;
            // 0x18ac8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE30u;
    if (runtime->hasFunction(0x18AE30u)) {
        auto targetFn = runtime->lookupFunction(0x18AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC90u; }
        if (ctx->pc != 0x18AC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE30_0x18ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC90u; }
        if (ctx->pc != 0x18AC90u) { return; }
    }
    ctx->pc = 0x18AC90u;
label_18ac90:
    // 0x18ac90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18ac90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac94: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC94u;
    {
        const bool branch_taken_0x18ac94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC94u;
            // 0x18ac98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac94) {
            ctx->pc = 0x18ACA4u;
            goto label_18aca4;
        }
    }
    ctx->pc = 0x18AC9Cu;
    // 0x18ac9c: 0xc062b30  jal         func_18ACC0
    ctx->pc = 0x18AC9Cu;
    SET_GPR_U32(ctx, 31, 0x18ACA4u);
    ctx->pc = 0x18ACC0u;
    if (runtime->hasFunction(0x18ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x18ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACA4u; }
        if (ctx->pc != 0x18ACA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ACC0_0x18acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACA4u; }
        if (ctx->pc != 0x18ACA4u) { return; }
    }
    ctx->pc = 0x18ACA4u;
label_18aca4:
    // 0x18aca4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18aca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18aca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18acac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18acacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18acb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18acb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18acb4: 0x3e00008  jr          $ra
    ctx->pc = 0x18ACB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ACB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACB4u;
            // 0x18acb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18ACBCu;
    // 0x18acbc: 0x0  nop
    ctx->pc = 0x18acbcu;
    // NOP
}
