#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051DF00
// Address: 0x51df00 - 0x51e030
void sub_0051DF00_0x51df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051DF00_0x51df00");
#endif

    switch (ctx->pc) {
        case 0x51df3cu: goto label_51df3c;
        case 0x51df50u: goto label_51df50;
        case 0x51df58u: goto label_51df58;
        case 0x51df68u: goto label_51df68;
        case 0x51df7cu: goto label_51df7c;
        case 0x51df84u: goto label_51df84;
        case 0x51dfa0u: goto label_51dfa0;
        case 0x51dfa8u: goto label_51dfa8;
        case 0x51dfc0u: goto label_51dfc0;
        case 0x51dfccu: goto label_51dfcc;
        case 0x51dfe8u: goto label_51dfe8;
        case 0x51e00cu: goto label_51e00c;
        default: break;
    }

    ctx->pc = 0x51df00u;

    // 0x51df00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x51df00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x51df04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x51df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x51df08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51df08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x51df0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51df0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51df10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51df10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x51df14: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x51df14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x51df18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51df18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51df1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51df1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51df20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51df20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51df24: 0xac8200a8  sw          $v0, 0xA8($a0)
    ctx->pc = 0x51df24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
    // 0x51df28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51df28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51df2c: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x51df2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x51df30: 0x26110064  addiu       $s1, $s0, 0x64
    ctx->pc = 0x51df30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x51df34: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x51DF34u;
    SET_GPR_U32(ctx, 31, 0x51DF3Cu);
    ctx->pc = 0x51DF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DF34u;
            // 0x51df38: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DF3Cu; }
        if (ctx->pc != 0x51DF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DF3Cu; }
        if (ctx->pc != 0x51DF3Cu) { return; }
    }
    ctx->pc = 0x51DF3Cu;
label_51df3c:
    // 0x51df3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51df40: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x51df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x51df44: 0x8c530788  lw          $s3, 0x788($v0)
    ctx->pc = 0x51df44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x51df48: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x51df48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x51df4c: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x51df4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_51df50:
    // 0x51df50: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x51DF50u;
    SET_GPR_U32(ctx, 31, 0x51DF58u);
    ctx->pc = 0x51DF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DF50u;
            // 0x51df54: 0x924400be  lbu         $a0, 0xBE($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 190)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DF58u; }
        if (ctx->pc != 0x51DF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DF58u; }
        if (ctx->pc != 0x51DF58u) { return; }
    }
    ctx->pc = 0x51DF58u;
label_51df58:
    // 0x51df58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51DF58u;
    {
        const bool branch_taken_0x51df58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51df58) {
            ctx->pc = 0x51DF68u;
            goto label_51df68;
        }
    }
    ctx->pc = 0x51DF60u;
    // 0x51df60: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x51DF60u;
    SET_GPR_U32(ctx, 31, 0x51DF68u);
    ctx->pc = 0x51DF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DF60u;
            // 0x51df64: 0x924400be  lbu         $a0, 0xBE($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 190)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DF68u; }
        if (ctx->pc != 0x51DF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DF68u; }
        if (ctx->pc != 0x51DF68u) { return; }
    }
    ctx->pc = 0x51DF68u;
label_51df68:
    // 0x51df68: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x51df68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x51df6c: 0x1660fff8  bnez        $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x51DF6Cu;
    {
        const bool branch_taken_0x51df6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x51DF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DF6Cu;
            // 0x51df70: 0x2652fffe  addiu       $s2, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51df6c) {
            ctx->pc = 0x51DF50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51df50;
        }
    }
    ctx->pc = 0x51DF74u;
    // 0x51df74: 0xc147c44  jal         func_51F110
    ctx->pc = 0x51DF74u;
    SET_GPR_U32(ctx, 31, 0x51DF7Cu);
    ctx->pc = 0x51DF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DF74u;
            // 0x51df78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51F110u;
    if (runtime->hasFunction(0x51F110u)) {
        auto targetFn = runtime->lookupFunction(0x51F110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DF7Cu; }
        if (ctx->pc != 0x51DF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051F110_0x51f110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DF7Cu; }
        if (ctx->pc != 0x51DF7Cu) { return; }
    }
    ctx->pc = 0x51DF7Cu;
label_51df7c:
    // 0x51df7c: 0xc147be8  jal         func_51EFA0
    ctx->pc = 0x51DF7Cu;
    SET_GPR_U32(ctx, 31, 0x51DF84u);
    ctx->pc = 0x51DF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DF7Cu;
            // 0x51df80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EFA0u;
    if (runtime->hasFunction(0x51EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x51EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DF84u; }
        if (ctx->pc != 0x51DF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EFA0_0x51efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DF84u; }
        if (ctx->pc != 0x51DF84u) { return; }
    }
    ctx->pc = 0x51DF84u;
label_51df84:
    // 0x51df84: 0xac5001c8  sw          $s0, 0x1C8($v0)
    ctx->pc = 0x51df84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 16));
    // 0x51df88: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51df88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x51df8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51df8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51df90: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x51df90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x51df94: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x51df94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x51df98: 0xc04cc04  jal         func_133010
    ctx->pc = 0x51DF98u;
    SET_GPR_U32(ctx, 31, 0x51DFA0u);
    ctx->pc = 0x51DF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DF98u;
            // 0x51df9c: 0x24a5c480  addiu       $a1, $a1, -0x3B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DFA0u; }
        if (ctx->pc != 0x51DFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DFA0u; }
        if (ctx->pc != 0x51DFA0u) { return; }
    }
    ctx->pc = 0x51DFA0u;
label_51dfa0:
    // 0x51dfa0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x51DFA0u;
    SET_GPR_U32(ctx, 31, 0x51DFA8u);
    ctx->pc = 0x51DFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DFA0u;
            // 0x51dfa4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DFA8u; }
        if (ctx->pc != 0x51DFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DFA8u; }
        if (ctx->pc != 0x51DFA8u) { return; }
    }
    ctx->pc = 0x51DFA8u;
label_51dfa8:
    // 0x51dfa8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51dfac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x51dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x51dfb0: 0x8c420d20  lw          $v0, 0xD20($v0)
    ctx->pc = 0x51dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3360)));
    // 0x51dfb4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x51dfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x51dfb8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x51DFB8u;
    SET_GPR_U32(ctx, 31, 0x51DFC0u);
    ctx->pc = 0x51DFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DFB8u;
            // 0x51dfbc: 0x24520084  addiu       $s2, $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DFC0u; }
        if (ctx->pc != 0x51DFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DFC0u; }
        if (ctx->pc != 0x51DFC0u) { return; }
    }
    ctx->pc = 0x51DFC0u;
label_51dfc0:
    // 0x51dfc0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x51dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x51dfc4: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x51DFC4u;
    SET_GPR_U32(ctx, 31, 0x51DFCCu);
    ctx->pc = 0x51DFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DFC4u;
            // 0x51dfc8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DFCCu; }
        if (ctx->pc != 0x51DFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DFCCu; }
        if (ctx->pc != 0x51DFCCu) { return; }
    }
    ctx->pc = 0x51DFCCu;
label_51dfcc:
    // 0x51dfcc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x51dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x51dfd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51dfd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51dfd4: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x51dfd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x51dfd8: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x51dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x51dfdc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x51dfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x51dfe0: 0xc05161c  jal         func_145870
    ctx->pc = 0x51DFE0u;
    SET_GPR_U32(ctx, 31, 0x51DFE8u);
    ctx->pc = 0x51DFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DFE0u;
            // 0x51dfe4: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145870u;
    if (runtime->hasFunction(0x145870u)) {
        auto targetFn = runtime->lookupFunction(0x145870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DFE8u; }
        if (ctx->pc != 0x51DFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145870_0x145870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DFE8u; }
        if (ctx->pc != 0x51DFE8u) { return; }
    }
    ctx->pc = 0x51DFE8u;
label_51dfe8:
    // 0x51dfe8: 0xa2000220  sb          $zero, 0x220($s0)
    ctx->pc = 0x51dfe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x51dfec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51dff0: 0xa2000221  sb          $zero, 0x221($s0)
    ctx->pc = 0x51dff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 545), (uint8_t)GPR_U32(ctx, 0));
    // 0x51dff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51dff8: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x51dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x51dffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x51dffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e000: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x51e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x51e004: 0xc147bf4  jal         func_51EFD0
    ctx->pc = 0x51E004u;
    SET_GPR_U32(ctx, 31, 0x51E00Cu);
    ctx->pc = 0x51E008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E004u;
            // 0x51e008: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EFD0u;
    if (runtime->hasFunction(0x51EFD0u)) {
        auto targetFn = runtime->lookupFunction(0x51EFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E00Cu; }
        if (ctx->pc != 0x51E00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EFD0_0x51efd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E00Cu; }
        if (ctx->pc != 0x51E00Cu) { return; }
    }
    ctx->pc = 0x51E00Cu;
label_51e00c:
    // 0x51e00c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51e00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x51e010: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51e010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51e014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51e014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51e018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51e018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51e01c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51e01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51e020: 0x3e00008  jr          $ra
    ctx->pc = 0x51E020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51E024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E020u;
            // 0x51e024: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51E028u;
    // 0x51e028: 0x0  nop
    ctx->pc = 0x51e028u;
    // NOP
    // 0x51e02c: 0x0  nop
    ctx->pc = 0x51e02cu;
    // NOP
}
