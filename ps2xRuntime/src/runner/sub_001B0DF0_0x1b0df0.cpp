#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0DF0
// Address: 0x1b0df0 - 0x1b0ff0
void sub_001B0DF0_0x1b0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0DF0_0x1b0df0");
#endif

    switch (ctx->pc) {
        case 0x1b0e28u: goto label_1b0e28;
        case 0x1b0e3cu: goto label_1b0e3c;
        case 0x1b0e50u: goto label_1b0e50;
        case 0x1b0e70u: goto label_1b0e70;
        case 0x1b0f20u: goto label_1b0f20;
        case 0x1b0f30u: goto label_1b0f30;
        case 0x1b0f5cu: goto label_1b0f5c;
        case 0x1b0fb4u: goto label_1b0fb4;
        case 0x1b0fbcu: goto label_1b0fbc;
        default: break;
    }

    ctx->pc = 0x1b0df0u;

    // 0x1b0df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b0df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0df8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b0df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dfc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1b0dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1b0e00: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1b0e00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0e08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0e0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b0e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b0e10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b0e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b0e14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b0e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b0e18: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b0e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b0e1c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b0e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b0e20: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1B0E20u;
    SET_GPR_U32(ctx, 31, 0x1B0E28u);
    ctx->pc = 0x1B0E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E20u;
            // 0x1b0e24: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E28u; }
        if (ctx->pc != 0x1B0E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E28u; }
        if (ctx->pc != 0x1B0E28u) { return; }
    }
    ctx->pc = 0x1B0E28u;
label_1b0e28:
    // 0x1b0e28: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1b0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1b0e2c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0E2Cu;
    {
        const bool branch_taken_0x1b0e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e2c) {
            ctx->pc = 0x1B0E48u;
            goto label_1b0e48;
        }
    }
    ctx->pc = 0x1B0E34u;
    // 0x1b0e34: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x1B0E34u;
    SET_GPR_U32(ctx, 31, 0x1B0E3Cu);
    ctx->pc = 0x1B0E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E34u;
            // 0x1b0e38: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E3Cu; }
        if (ctx->pc != 0x1B0E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E3Cu; }
        if (ctx->pc != 0x1B0E3Cu) { return; }
    }
    ctx->pc = 0x1B0E3Cu;
label_1b0e3c:
    // 0x1b0e3c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1B0E3Cu;
    {
        const bool branch_taken_0x1b0e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E3Cu;
            // 0x1b0e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e3c) {
            ctx->pc = 0x1B0FC0u;
            goto label_1b0fc0;
        }
    }
    ctx->pc = 0x1B0E44u;
    // 0x1b0e44: 0x0  nop
    ctx->pc = 0x1b0e44u;
    // NOP
label_1b0e48:
    // 0x1b0e48: 0xc06c27a  jal         func_1B09E8
    ctx->pc = 0x1B0E48u;
    SET_GPR_U32(ctx, 31, 0x1B0E50u);
    ctx->pc = 0x1B0E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E48u;
            // 0x1b0e4c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B09E8u;
    if (runtime->hasFunction(0x1B09E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B09E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E50u; }
        if (ctx->pc != 0x1B0E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09E8_0x1b09e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E50u; }
        if (ctx->pc != 0x1B0E50u) { return; }
    }
    ctx->pc = 0x1B0E50u;
label_1b0e50:
    // 0x1b0e50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1b0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1b0e54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b0e58: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1b0e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1b0e5c: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1b0e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1b0e60: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1b0e60u;
    SET_GPR_S32(ctx, 21, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1b0e64: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b0e64u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1b0e68: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x1B0E68u;
    SET_GPR_U32(ctx, 31, 0x1B0E70u);
    ctx->pc = 0x1B0E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E68u;
            // 0x1b0e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (runtime->hasFunction(0x1B0930u)) {
        auto targetFn = runtime->lookupFunction(0x1B0930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E70u; }
        if (ctx->pc != 0x1B0E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0930_0x1b0930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E70u; }
        if (ctx->pc != 0x1B0E70u) { return; }
    }
    ctx->pc = 0x1B0E70u;
label_1b0e70:
    // 0x1b0e70: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1b0e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b0e74: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1b0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b0e78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1b0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1b0e7c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B0E7Cu;
    {
        const bool branch_taken_0x1b0e7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e7c) {
            ctx->pc = 0x1B0E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E7Cu;
            // 0x1b0e80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0E84u;
            goto label_1b0e84;
        }
    }
    ctx->pc = 0x1B0E84u;
label_1b0e84:
    // 0x1b0e84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0e88: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1b0e88u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0e8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b0e90: 0x2010  mfhi        $a0
    ctx->pc = 0x1b0e90u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1b0e94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0e98: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1b0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b0e9c: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1b0e9cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0ea0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1b0ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1b0ea4: 0x2810  mfhi        $a1
    ctx->pc = 0x1b0ea4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1b0ea8: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x1b0ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b0eac: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x1b0eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x1b0eb0: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x1b0eb0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0eb4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1b0eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b0eb8: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1b0eb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b0ebc: 0x248507ff  addiu       $a1, $a0, 0x7FF
    ctx->pc = 0x1b0ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    // 0x1b0ec0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b0ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ec4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1b0ec4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1b0ec8: 0x29ac3  sra         $s3, $v0, 11
    ctx->pc = 0x1b0ec8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1b0ecc: 0x131ac0  sll         $v1, $s3, 11
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
    // 0x1b0ed0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1b0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b0ed4: 0x8010  mfhi        $s0
    ctx->pc = 0x1b0ed4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1b0ed8: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B0ED8u;
    {
        const bool branch_taken_0x1b0ed8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1B0EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0ED8u;
            // 0x1b0edc: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ed8) {
            ctx->pc = 0x1B0F20u;
            goto label_1b0f20;
        }
    }
    ctx->pc = 0x1B0EE0u;
    // 0x1b0ee0: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1b0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1b0ee4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1b0ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b0ee8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b0eec: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B0EECu;
    {
        const bool branch_taken_0x1b0eec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0eec) {
            ctx->pc = 0x1B0EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EECu;
            // 0x1b0ef0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0EF4u;
            goto label_1b0ef4;
        }
    }
    ctx->pc = 0x1B0EF4u;
label_1b0ef4:
    // 0x1b0ef4: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1b0ef4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0ef8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1b0ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0efc: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b0f00: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1b0f00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0f04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b0f08: 0x2010  mfhi        $a0
    ctx->pc = 0x1b0f08u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1b0f0c: 0x42ac0  sll         $a1, $a0, 11
    ctx->pc = 0x1b0f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x1b0f10: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1b0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b0f14: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1b0f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1b0f18: 0xc06c294  jal         func_1B0A50
    ctx->pc = 0x1B0F18u;
    SET_GPR_U32(ctx, 31, 0x1B0F20u);
    ctx->pc = 0x1B0F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F18u;
            // 0x1b0f1c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0A50u;
    if (runtime->hasFunction(0x1B0A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F20u; }
        if (ctx->pc != 0x1B0F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0A50_0x1b0a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F20u; }
        if (ctx->pc != 0x1B0F20u) { return; }
    }
    ctx->pc = 0x1B0F20u;
label_1b0f20:
    // 0x1b0f20: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B0F20u;
    {
        const bool branch_taken_0x1b0f20 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1B0F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F20u;
            // 0x1b0f24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f20) {
            ctx->pc = 0x1B0F84u;
            goto label_1b0f84;
        }
    }
    ctx->pc = 0x1B0F28u;
    // 0x1b0f28: 0x2674ffff  addiu       $s4, $s3, -0x1
    ctx->pc = 0x1b0f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1b0f2c: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x1b0f2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b0f30:
    // 0x1b0f30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b0f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b0f34: 0x2543826  xor         $a3, $s2, $s4
    ctx->pc = 0x1b0f34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
    // 0x1b0f38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b0f3c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1b0f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b0f40: 0x102ac0  sll         $a1, $s0, 11
    ctx->pc = 0x1b0f40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x1b0f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f48: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1b0f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0f4c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1b0f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b0f50: 0x2c7300b  movn        $a2, $s6, $a3
    ctx->pc = 0x1b0f50u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
    // 0x1b0f54: 0xc06c294  jal         func_1B0A50
    ctx->pc = 0x1B0F54u;
    SET_GPR_U32(ctx, 31, 0x1B0F5Cu);
    ctx->pc = 0x1B0F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F54u;
            // 0x1b0f58: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0A50u;
    if (runtime->hasFunction(0x1B0A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F5Cu; }
        if (ctx->pc != 0x1B0F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0A50_0x1b0a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F5Cu; }
        if (ctx->pc != 0x1B0F5Cu) { return; }
    }
    ctx->pc = 0x1B0F5Cu;
label_1b0f5c:
    // 0x1b0f5c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b0f60: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b0f64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b0f64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b0f68: 0x253282a  slt         $a1, $s2, $s3
    ctx->pc = 0x1b0f68u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1b0f6c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b0f6cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0f70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B0F70u;
    {
        const bool branch_taken_0x1b0f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f70) {
            ctx->pc = 0x1B0F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F70u;
            // 0x1b0f74: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F78u;
            goto label_1b0f78;
        }
    }
    ctx->pc = 0x1B0F78u;
label_1b0f78:
    // 0x1b0f78: 0x2010  mfhi        $a0
    ctx->pc = 0x1b0f78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1b0f7c: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B0F7Cu;
    {
        const bool branch_taken_0x1b0f7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F7Cu;
            // 0x1b0f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f7c) {
            ctx->pc = 0x1B0F30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0f30;
        }
    }
    ctx->pc = 0x1B0F84u;
label_1b0f84:
    // 0x1b0f84: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b0f88: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1b0f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1b0f8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0F8Cu;
    {
        const bool branch_taken_0x1b0f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F8Cu;
            // 0x1b0f90: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f8c) {
            ctx->pc = 0x1B0FB4u;
            goto label_1b0fb4;
        }
    }
    ctx->pc = 0x1B0F94u;
    // 0x1b0f94: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0F94u;
    {
        const bool branch_taken_0x1b0f94 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F94u;
            // 0x1b0f98: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f94) {
            ctx->pc = 0x1B0FACu;
            goto label_1b0fac;
        }
    }
    ctx->pc = 0x1B0F9Cu;
    // 0x1b0f9c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1b0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1b0fa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b0fa4: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x1b0fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1b0fa8: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x1b0fa8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b0fac:
    // 0x1b0fac: 0xc06c27a  jal         func_1B09E8
    ctx->pc = 0x1B0FACu;
    SET_GPR_U32(ctx, 31, 0x1B0FB4u);
    ctx->pc = 0x1B0FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FACu;
            // 0x1b0fb0: 0x36a40100  ori         $a0, $s5, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B09E8u;
    if (runtime->hasFunction(0x1B09E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B09E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FB4u; }
        if (ctx->pc != 0x1B0FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09E8_0x1b09e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FB4u; }
        if (ctx->pc != 0x1B0FB4u) { return; }
    }
    ctx->pc = 0x1B0FB4u;
label_1b0fb4:
    // 0x1b0fb4: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x1B0FB4u;
    SET_GPR_U32(ctx, 31, 0x1B0FBCu);
    ctx->pc = 0x1B0FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FB4u;
            // 0x1b0fb8: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FBCu; }
        if (ctx->pc != 0x1B0FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FBCu; }
        if (ctx->pc != 0x1B0FBCu) { return; }
    }
    ctx->pc = 0x1B0FBCu;
label_1b0fbc:
    // 0x1b0fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0fc0:
    // 0x1b0fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0fc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0fc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0fcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b0fccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0fd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b0fd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0fd4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b0fd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b0fd8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b0fd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0fdc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1b0fdcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b0fe0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b0fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FE4u;
            // 0x1b0fe8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0FECu;
    // 0x1b0fec: 0x0  nop
    ctx->pc = 0x1b0fecu;
    // NOP
}
