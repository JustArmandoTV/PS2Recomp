#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042ABA0
// Address: 0x42aba0 - 0x42ae50
void sub_0042ABA0_0x42aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042ABA0_0x42aba0");
#endif

    switch (ctx->pc) {
        case 0x42abecu: goto label_42abec;
        case 0x42ac24u: goto label_42ac24;
        case 0x42ac34u: goto label_42ac34;
        case 0x42ac44u: goto label_42ac44;
        case 0x42ac7cu: goto label_42ac7c;
        case 0x42ac9cu: goto label_42ac9c;
        case 0x42ad40u: goto label_42ad40;
        case 0x42ad58u: goto label_42ad58;
        case 0x42ad80u: goto label_42ad80;
        case 0x42ade0u: goto label_42ade0;
        case 0x42adecu: goto label_42adec;
        case 0x42adf8u: goto label_42adf8;
        case 0x42ae04u: goto label_42ae04;
        case 0x42ae10u: goto label_42ae10;
        case 0x42ae1cu: goto label_42ae1c;
        case 0x42ae34u: goto label_42ae34;
        default: break;
    }

    ctx->pc = 0x42aba0u;

    // 0x42aba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x42aba4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42aba8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42aba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x42abac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x42abacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x42abb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x42abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x42abb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x42abb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42abb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x42abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x42abbc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x42abbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42abc0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x42abc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42abc4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x42abc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42abc8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x42abc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42abcc: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x42abccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42abd0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x42abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x42abd4: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x42abd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42abd8: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x42abd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42abdc: 0x8fab0050  lw          $t3, 0x50($sp)
    ctx->pc = 0x42abdcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42abe0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x42abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x42abe4: 0xc0cd08c  jal         func_334230
    ctx->pc = 0x42ABE4u;
    SET_GPR_U32(ctx, 31, 0x42ABECu);
    ctx->pc = 0x42ABE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42ABE4u;
            // 0x42abe8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334230u;
    if (runtime->hasFunction(0x334230u)) {
        auto targetFn = runtime->lookupFunction(0x334230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ABECu; }
        if (ctx->pc != 0x42ABECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334230_0x334230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ABECu; }
        if (ctx->pc != 0x42ABECu) { return; }
    }
    ctx->pc = 0x42ABECu;
label_42abec:
    // 0x42abec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42abecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x42abf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42abf4: 0x2463c0d0  addiu       $v1, $v1, -0x3F30
    ctx->pc = 0x42abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951120));
    // 0x42abf8: 0x26440cd4  addiu       $a0, $s2, 0xCD4
    ctx->pc = 0x42abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3284));
    // 0x42abfc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x42abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x42ac00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42ac00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ac04: 0xae400ccc  sw          $zero, 0xCCC($s2)
    ctx->pc = 0x42ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3276), GPR_U32(ctx, 0));
    // 0x42ac08: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x42ac08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x42ac0c: 0xae420cd0  sw          $v0, 0xCD0($s2)
    ctx->pc = 0x42ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3280), GPR_U32(ctx, 2));
    // 0x42ac10: 0xae400ce4  sw          $zero, 0xCE4($s2)
    ctx->pc = 0x42ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3300), GPR_U32(ctx, 0));
    // 0x42ac14: 0xae400cf8  sw          $zero, 0xCF8($s2)
    ctx->pc = 0x42ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3320), GPR_U32(ctx, 0));
    // 0x42ac18: 0xae400cfc  sw          $zero, 0xCFC($s2)
    ctx->pc = 0x42ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3324), GPR_U32(ctx, 0));
    // 0x42ac1c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x42AC1Cu;
    SET_GPR_U32(ctx, 31, 0x42AC24u);
    ctx->pc = 0x42AC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AC1Cu;
            // 0x42ac20: 0xae400d00  sw          $zero, 0xD00($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AC24u; }
        if (ctx->pc != 0x42AC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AC24u; }
        if (ctx->pc != 0x42AC24u) { return; }
    }
    ctx->pc = 0x42AC24u;
label_42ac24:
    // 0x42ac24: 0x26440ce8  addiu       $a0, $s2, 0xCE8
    ctx->pc = 0x42ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3304));
    // 0x42ac28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42ac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ac2c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x42AC2Cu;
    SET_GPR_U32(ctx, 31, 0x42AC34u);
    ctx->pc = 0x42AC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AC2Cu;
            // 0x42ac30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AC34u; }
        if (ctx->pc != 0x42AC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AC34u; }
        if (ctx->pc != 0x42AC34u) { return; }
    }
    ctx->pc = 0x42AC34u;
label_42ac34:
    // 0x42ac34: 0x26440cbc  addiu       $a0, $s2, 0xCBC
    ctx->pc = 0x42ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3260));
    // 0x42ac38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42ac38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ac3c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x42AC3Cu;
    SET_GPR_U32(ctx, 31, 0x42AC44u);
    ctx->pc = 0x42AC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AC3Cu;
            // 0x42ac40: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AC44u; }
        if (ctx->pc != 0x42AC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AC44u; }
        if (ctx->pc != 0x42AC44u) { return; }
    }
    ctx->pc = 0x42AC44u;
label_42ac44:
    // 0x42ac44: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x42ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x42ac48: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x42ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x42ac4c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x42ac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x42ac50: 0x2484caa8  addiu       $a0, $a0, -0x3558
    ctx->pc = 0x42ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953640));
    // 0x42ac54: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x42ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x42ac58: 0x2442cac0  addiu       $v0, $v0, -0x3540
    ctx->pc = 0x42ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953664));
    // 0x42ac5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42ac60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x42ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x42ac64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x42ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42ac68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42ac6c: 0xae430cbc  sw          $v1, 0xCBC($s2)
    ctx->pc = 0x42ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3260), GPR_U32(ctx, 3));
    // 0x42ac70: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x42ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x42ac74: 0xc040180  jal         func_100600
    ctx->pc = 0x42AC74u;
    SET_GPR_U32(ctx, 31, 0x42AC7Cu);
    ctx->pc = 0x42AC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AC74u;
            // 0x42ac78: 0xae420cc8  sw          $v0, 0xCC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AC7Cu; }
        if (ctx->pc != 0x42AC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AC7Cu; }
        if (ctx->pc != 0x42AC7Cu) { return; }
    }
    ctx->pc = 0x42AC7Cu;
label_42ac7c:
    // 0x42ac7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x42AC7Cu;
    {
        const bool branch_taken_0x42ac7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AC7Cu;
            // 0x42ac80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ac7c) {
            ctx->pc = 0x42ACB4u;
            goto label_42acb4;
        }
    }
    ctx->pc = 0x42AC84u;
    // 0x42ac84: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x42ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x42ac88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42ac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ac8c: 0x3445a598  ori         $a1, $v0, 0xA598
    ctx->pc = 0x42ac8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42392);
    // 0x42ac90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42ac90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42ac94: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x42AC94u;
    SET_GPR_U32(ctx, 31, 0x42AC9Cu);
    ctx->pc = 0x42AC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AC94u;
            // 0x42ac98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AC9Cu; }
        if (ctx->pc != 0x42AC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AC9Cu; }
        if (ctx->pc != 0x42AC9Cu) { return; }
    }
    ctx->pc = 0x42AC9Cu;
label_42ac9c:
    // 0x42ac9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x42aca0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42aca4: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x42aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x42aca8: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x42aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
    // 0x42acac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42acacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x42acb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_42acb4:
    // 0x42acb4: 0x8e460960  lw          $a2, 0x960($s2)
    ctx->pc = 0x42acb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
    // 0x42acb8: 0x2405f070  addiu       $a1, $zero, -0xF90
    ctx->pc = 0x42acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963312));
    // 0x42acbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42acc0: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x42acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x42acc4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x42acc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42acc8: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x42acc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x42accc: 0xae450960  sw          $a1, 0x960($s2)
    ctx->pc = 0x42acccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2400), GPR_U32(ctx, 5));
    // 0x42acd0: 0xa2440c76  sb          $a0, 0xC76($s2)
    ctx->pc = 0x42acd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3190), (uint8_t)GPR_U32(ctx, 4));
    // 0x42acd4: 0x8e440964  lw          $a0, 0x964($s2)
    ctx->pc = 0x42acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2404)));
    // 0x42acd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x42acd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x42acdc: 0xae430964  sw          $v1, 0x964($s2)
    ctx->pc = 0x42acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2404), GPR_U32(ctx, 3));
    // 0x42ace0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x42ace0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x42ace4: 0xae430964  sw          $v1, 0x964($s2)
    ctx->pc = 0x42ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2404), GPR_U32(ctx, 3));
    // 0x42ace8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42ace8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42acec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x42acecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42acf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x42acf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42acf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x42acf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42acf8: 0x3e00008  jr          $ra
    ctx->pc = 0x42ACF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42ACFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42ACF8u;
            // 0x42acfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42AD00u;
    // 0x42ad00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42ad04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42ad08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42ad08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42ad0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42ad0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42ad10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42ad10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ad14: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x42AD14u;
    {
        const bool branch_taken_0x42ad14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AD14u;
            // 0x42ad18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad14) {
            ctx->pc = 0x42AD58u;
            goto label_42ad58;
        }
    }
    ctx->pc = 0x42AD1Cu;
    // 0x42ad1c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42ad20: 0x2442c190  addiu       $v0, $v0, -0x3E70
    ctx->pc = 0x42ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951312));
    // 0x42ad24: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42AD24u;
    {
        const bool branch_taken_0x42ad24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AD24u;
            // 0x42ad28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad24) {
            ctx->pc = 0x42AD40u;
            goto label_42ad40;
        }
    }
    ctx->pc = 0x42AD2Cu;
    // 0x42ad2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x42ad30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42ad30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ad34: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x42ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x42ad38: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x42AD38u;
    SET_GPR_U32(ctx, 31, 0x42AD40u);
    ctx->pc = 0x42AD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AD38u;
            // 0x42ad3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AD40u; }
        if (ctx->pc != 0x42AD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AD40u; }
        if (ctx->pc != 0x42AD40u) { return; }
    }
    ctx->pc = 0x42AD40u;
label_42ad40:
    // 0x42ad40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x42ad44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42ad44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x42ad48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42AD48u;
    {
        const bool branch_taken_0x42ad48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42ad48) {
            ctx->pc = 0x42AD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42AD48u;
            // 0x42ad4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42AD5Cu;
            goto label_42ad5c;
        }
    }
    ctx->pc = 0x42AD50u;
    // 0x42ad50: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42AD50u;
    SET_GPR_U32(ctx, 31, 0x42AD58u);
    ctx->pc = 0x42AD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AD50u;
            // 0x42ad54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AD58u; }
        if (ctx->pc != 0x42AD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AD58u; }
        if (ctx->pc != 0x42AD58u) { return; }
    }
    ctx->pc = 0x42AD58u;
label_42ad58:
    // 0x42ad58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42ad58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42ad5c:
    // 0x42ad5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42ad5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42ad60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42ad60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42ad64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42ad64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42ad68: 0x3e00008  jr          $ra
    ctx->pc = 0x42AD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42AD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AD68u;
            // 0x42ad6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42AD70u;
    // 0x42ad70: 0x24033ad4  addiu       $v1, $zero, 0x3AD4
    ctx->pc = 0x42ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15060));
    // 0x42ad74: 0x3e00008  jr          $ra
    ctx->pc = 0x42AD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42AD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AD74u;
            // 0x42ad78: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42AD7Cu;
    // 0x42ad7c: 0x0  nop
    ctx->pc = 0x42ad7cu;
    // NOP
label_42ad80:
    // 0x42ad80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42ad84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42ad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42ad88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42ad8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42ad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42ad90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42ad90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ad94: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x42AD94u;
    {
        const bool branch_taken_0x42ad94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AD94u;
            // 0x42ad98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad94) {
            ctx->pc = 0x42AE34u;
            goto label_42ae34;
        }
    }
    ctx->pc = 0x42AD9Cu;
    // 0x42ad9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x42ada0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42ada4: 0x2463c1c0  addiu       $v1, $v1, -0x3E40
    ctx->pc = 0x42ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951360));
    // 0x42ada8: 0x2442c1f8  addiu       $v0, $v0, -0x3E08
    ctx->pc = 0x42ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951416));
    // 0x42adac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42adacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x42adb0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x42ADB0u;
    {
        const bool branch_taken_0x42adb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ADB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42ADB0u;
            // 0x42adb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42adb0) {
            ctx->pc = 0x42AE1Cu;
            goto label_42ae1c;
        }
    }
    ctx->pc = 0x42ADB8u;
    // 0x42adb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x42adbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42adc0: 0x2463c220  addiu       $v1, $v1, -0x3DE0
    ctx->pc = 0x42adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951456));
    // 0x42adc4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x42adc8: 0x2442c258  addiu       $v0, $v0, -0x3DA8
    ctx->pc = 0x42adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951512));
    // 0x42adcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42adccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x42add0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x42add0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x42add4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x42add4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x42add8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x42ADD8u;
    SET_GPR_U32(ctx, 31, 0x42ADE0u);
    ctx->pc = 0x42ADDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42ADD8u;
            // 0x42addc: 0x24a5af20  addiu       $a1, $a1, -0x50E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ADE0u; }
        if (ctx->pc != 0x42ADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ADE0u; }
        if (ctx->pc != 0x42ADE0u) { return; }
    }
    ctx->pc = 0x42ADE0u;
label_42ade0:
    // 0x42ade0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x42ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x42ade4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x42ADE4u;
    SET_GPR_U32(ctx, 31, 0x42ADECu);
    ctx->pc = 0x42ADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42ADE4u;
            // 0x42ade8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ADECu; }
        if (ctx->pc != 0x42ADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ADECu; }
        if (ctx->pc != 0x42ADECu) { return; }
    }
    ctx->pc = 0x42ADECu;
label_42adec:
    // 0x42adec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x42adecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x42adf0: 0xc10abac  jal         func_42AEB0
    ctx->pc = 0x42ADF0u;
    SET_GPR_U32(ctx, 31, 0x42ADF8u);
    ctx->pc = 0x42ADF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42ADF0u;
            // 0x42adf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42AEB0u;
    if (runtime->hasFunction(0x42AEB0u)) {
        auto targetFn = runtime->lookupFunction(0x42AEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ADF8u; }
        if (ctx->pc != 0x42ADF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042AEB0_0x42aeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ADF8u; }
        if (ctx->pc != 0x42ADF8u) { return; }
    }
    ctx->pc = 0x42ADF8u;
label_42adf8:
    // 0x42adf8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x42adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x42adfc: 0xc10abac  jal         func_42AEB0
    ctx->pc = 0x42ADFCu;
    SET_GPR_U32(ctx, 31, 0x42AE04u);
    ctx->pc = 0x42AE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42ADFCu;
            // 0x42ae00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42AEB0u;
    if (runtime->hasFunction(0x42AEB0u)) {
        auto targetFn = runtime->lookupFunction(0x42AEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AE04u; }
        if (ctx->pc != 0x42AE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042AEB0_0x42aeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AE04u; }
        if (ctx->pc != 0x42AE04u) { return; }
    }
    ctx->pc = 0x42AE04u;
label_42ae04:
    // 0x42ae04: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x42ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x42ae08: 0xc10ab94  jal         func_42AE50
    ctx->pc = 0x42AE08u;
    SET_GPR_U32(ctx, 31, 0x42AE10u);
    ctx->pc = 0x42AE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AE08u;
            // 0x42ae0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42AE50u;
    if (runtime->hasFunction(0x42AE50u)) {
        auto targetFn = runtime->lookupFunction(0x42AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AE10u; }
        if (ctx->pc != 0x42AE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042AE50_0x42ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AE10u; }
        if (ctx->pc != 0x42AE10u) { return; }
    }
    ctx->pc = 0x42AE10u;
label_42ae10:
    // 0x42ae10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42ae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ae14: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x42AE14u;
    SET_GPR_U32(ctx, 31, 0x42AE1Cu);
    ctx->pc = 0x42AE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AE14u;
            // 0x42ae18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AE1Cu; }
        if (ctx->pc != 0x42AE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AE1Cu; }
        if (ctx->pc != 0x42AE1Cu) { return; }
    }
    ctx->pc = 0x42AE1Cu;
label_42ae1c:
    // 0x42ae1c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x42ae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x42ae20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42ae20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x42ae24: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42AE24u;
    {
        const bool branch_taken_0x42ae24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42ae24) {
            ctx->pc = 0x42AE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42AE24u;
            // 0x42ae28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42AE38u;
            goto label_42ae38;
        }
    }
    ctx->pc = 0x42AE2Cu;
    // 0x42ae2c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42AE2Cu;
    SET_GPR_U32(ctx, 31, 0x42AE34u);
    ctx->pc = 0x42AE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AE2Cu;
            // 0x42ae30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AE34u; }
        if (ctx->pc != 0x42AE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AE34u; }
        if (ctx->pc != 0x42AE34u) { return; }
    }
    ctx->pc = 0x42AE34u;
label_42ae34:
    // 0x42ae34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42ae34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42ae38:
    // 0x42ae38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42ae38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42ae3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42ae3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42ae40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42ae40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42ae44: 0x3e00008  jr          $ra
    ctx->pc = 0x42AE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42AE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AE44u;
            // 0x42ae48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42AE4Cu;
    // 0x42ae4c: 0x0  nop
    ctx->pc = 0x42ae4cu;
    // NOP
}
