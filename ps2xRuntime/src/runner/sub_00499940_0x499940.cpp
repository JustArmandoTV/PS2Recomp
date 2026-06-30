#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00499940
// Address: 0x499940 - 0x499ad0
void sub_00499940_0x499940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499940_0x499940");
#endif

    switch (ctx->pc) {
        case 0x499990u: goto label_499990;
        case 0x49999cu: goto label_49999c;
        case 0x4999acu: goto label_4999ac;
        case 0x499a14u: goto label_499a14;
        case 0x499a20u: goto label_499a20;
        case 0x499a30u: goto label_499a30;
        case 0x499a60u: goto label_499a60;
        case 0x499a6cu: goto label_499a6c;
        case 0x499a7cu: goto label_499a7c;
        case 0x499aa4u: goto label_499aa4;
        default: break;
    }

    ctx->pc = 0x499940u;

    // 0x499940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x499940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x499944: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x499944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x499948: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x499948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x49994c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x499950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x499950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x499954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x499954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x499958: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x499958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49995c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x499960: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x499960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499964: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x499964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x499968: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x499968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x49996c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x49996Cu;
    {
        const bool branch_taken_0x49996c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x499970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49996Cu;
            // 0x499970: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49996c) {
            ctx->pc = 0x4999C8u;
            goto label_4999c8;
        }
    }
    ctx->pc = 0x499974u;
    // 0x499974: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x499974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x499978: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49997c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499980: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499984: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x499984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x499988: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499988u;
    SET_GPR_U32(ctx, 31, 0x499990u);
    ctx->pc = 0x49998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499988u;
            // 0x49998c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499990u; }
        if (ctx->pc != 0x499990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499990u; }
        if (ctx->pc != 0x499990u) { return; }
    }
    ctx->pc = 0x499990u;
label_499990:
    // 0x499990: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x499990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x499994: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x499994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499998: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x499998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49999c:
    // 0x49999c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49999cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4999a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4999a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4999a4: 0xc04a508  jal         func_129420
    ctx->pc = 0x4999A4u;
    SET_GPR_U32(ctx, 31, 0x4999ACu);
    ctx->pc = 0x4999A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4999A4u;
            // 0x4999a8: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4999ACu; }
        if (ctx->pc != 0x4999ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4999ACu; }
        if (ctx->pc != 0x4999ACu) { return; }
    }
    ctx->pc = 0x4999ACu;
label_4999ac:
    // 0x4999ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4999acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4999b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4999b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4999b4: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x4999b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x4999b8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x4999b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4999bc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4999BCu;
    {
        const bool branch_taken_0x4999bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4999C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4999BCu;
            // 0x4999c0: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4999bc) {
            ctx->pc = 0x49999Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49999c;
        }
    }
    ctx->pc = 0x4999C4u;
    // 0x4999c4: 0x0  nop
    ctx->pc = 0x4999c4u;
    // NOP
label_4999c8:
    // 0x4999c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4999c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4999cc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4999ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x4999d0: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x4999d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4999d4: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x4999d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x4999d8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4999d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4999dc: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x4999DCu;
    {
        const bool branch_taken_0x4999dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4999E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4999DCu;
            // 0x4999e0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4999dc) {
            ctx->pc = 0x499A98u;
            goto label_499a98;
        }
    }
    ctx->pc = 0x4999E4u;
    // 0x4999e4: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x4999e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4999e8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x4999E8u;
    {
        const bool branch_taken_0x4999e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4999e8) {
            ctx->pc = 0x4999ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4999E8u;
            // 0x4999ec: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x499A50u;
            goto label_499a50;
        }
    }
    ctx->pc = 0x4999F0u;
    // 0x4999f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4999f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4999f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4999f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4999f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4999f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4999fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4999fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499a00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x499a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x499a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x499a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x499a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499a0c: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499A0Cu;
    SET_GPR_U32(ctx, 31, 0x499A14u);
    ctx->pc = 0x499A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499A0Cu;
            // 0x499a10: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499A14u; }
        if (ctx->pc != 0x499A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499A14u; }
        if (ctx->pc != 0x499A14u) { return; }
    }
    ctx->pc = 0x499A14u;
label_499a14:
    // 0x499a14: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x499a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x499a18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x499a18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499a1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x499a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499a20:
    // 0x499a20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x499a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499a24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x499a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499a28: 0xc04a508  jal         func_129420
    ctx->pc = 0x499A28u;
    SET_GPR_U32(ctx, 31, 0x499A30u);
    ctx->pc = 0x499A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499A28u;
            // 0x499a2c: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499A30u; }
        if (ctx->pc != 0x499A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499A30u; }
        if (ctx->pc != 0x499A30u) { return; }
    }
    ctx->pc = 0x499A30u;
label_499a30:
    // 0x499a30: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x499a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x499a34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x499a34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x499a38: 0x26100058  addiu       $s0, $s0, 0x58
    ctx->pc = 0x499a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x499a3c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x499a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499a40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x499A40u;
    {
        const bool branch_taken_0x499a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499A40u;
            // 0x499a44: 0x26940058  addiu       $s4, $s4, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a40) {
            ctx->pc = 0x499A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499a20;
        }
    }
    ctx->pc = 0x499A48u;
    // 0x499a48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x499A48u;
    {
        const bool branch_taken_0x499a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x499a48) {
            ctx->pc = 0x499A98u;
            goto label_499a98;
        }
    }
    ctx->pc = 0x499A50u;
label_499a50:
    // 0x499a50: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499a54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499a58: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499A58u;
    SET_GPR_U32(ctx, 31, 0x499A60u);
    ctx->pc = 0x499A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499A58u;
            // 0x499a5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499A60u; }
        if (ctx->pc != 0x499A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499A60u; }
        if (ctx->pc != 0x499A60u) { return; }
    }
    ctx->pc = 0x499A60u;
label_499a60:
    // 0x499a60: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x499a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x499a64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x499a64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499a68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x499a68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499a6c:
    // 0x499a6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x499a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499a70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x499a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499a74: 0xc04a508  jal         func_129420
    ctx->pc = 0x499A74u;
    SET_GPR_U32(ctx, 31, 0x499A7Cu);
    ctx->pc = 0x499A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499A74u;
            // 0x499a78: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499A7Cu; }
        if (ctx->pc != 0x499A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499A7Cu; }
        if (ctx->pc != 0x499A7Cu) { return; }
    }
    ctx->pc = 0x499A7Cu;
label_499a7c:
    // 0x499a7c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x499a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x499a80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x499a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x499a84: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x499a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x499a88: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x499a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499a8c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x499A8Cu;
    {
        const bool branch_taken_0x499a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499A8Cu;
            // 0x499a90: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a8c) {
            ctx->pc = 0x499A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499a6c;
        }
    }
    ctx->pc = 0x499A94u;
    // 0x499a94: 0x0  nop
    ctx->pc = 0x499a94u;
    // NOP
label_499a98:
    // 0x499a98: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x499a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x499a9c: 0xc126558  jal         func_499560
    ctx->pc = 0x499A9Cu;
    SET_GPR_U32(ctx, 31, 0x499AA4u);
    ctx->pc = 0x499AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499A9Cu;
            // 0x499aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x499560u;
    if (runtime->hasFunction(0x499560u)) {
        auto targetFn = runtime->lookupFunction(0x499560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499AA4u; }
        if (ctx->pc != 0x499AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00499560_0x499560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499AA4u; }
        if (ctx->pc != 0x499AA4u) { return; }
    }
    ctx->pc = 0x499AA4u;
label_499aa4:
    // 0x499aa4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x499aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x499aa8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x499aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x499aac: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x499aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x499ab0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x499ab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499ab4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x499ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499ab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x499ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x499abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x499ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x499AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499AC4u;
            // 0x499ac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x499ACCu;
    // 0x499acc: 0x0  nop
    ctx->pc = 0x499accu;
    // NOP
}
