#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7E48
// Address: 0x1b7e48 - 0x1b7f60
void sub_001B7E48_0x1b7e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7E48_0x1b7e48");
#endif

    switch (ctx->pc) {
        case 0x1b7e90u: goto label_1b7e90;
        case 0x1b7ec8u: goto label_1b7ec8;
        case 0x1b7f14u: goto label_1b7f14;
        case 0x1b7f30u: goto label_1b7f30;
        default: break;
    }

    ctx->pc = 0x1b7e48u;

    // 0x1b7e48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b7e4c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b7e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b7e50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b7e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1b7e54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b7e54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e58: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1b7e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1b7e5c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b7e5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b7e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e64: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1b7e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b7e68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b7e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b7e6c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1b7e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e70: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b7e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b7e74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b7e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b7e7c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1b7e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e80: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1b7e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1b7e84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b7e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b7e88: 0xc06dbb6  jal         func_1B6ED8
    ctx->pc = 0x1B7E88u;
    SET_GPR_U32(ctx, 31, 0x1B7E90u);
    ctx->pc = 0x1B7E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E88u;
            // 0x1b7e8c: 0x24559b30  addiu       $s5, $v0, -0x64D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (runtime->hasFunction(0x1B6ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E90u; }
        if (ctx->pc != 0x1B7E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6ED8_0x1b6ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E90u; }
        if (ctx->pc != 0x1B7E90u) { return; }
    }
    ctx->pc = 0x1B7E90u;
label_1b7e90:
    // 0x1b7e90: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x1b7e90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b7e94: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1b7e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7e98: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1b7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1b7e9c: 0x1509000c  bne         $t0, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B7E9Cu;
    {
        const bool branch_taken_0x1b7e9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x1B7EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E9Cu;
            // 0x1b7ea0: 0x1102818  mult        $a1, $t0, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e9c) {
            ctx->pc = 0x1B7ED0u;
            goto label_1b7ed0;
        }
    }
    ctx->pc = 0x1B7EA4u;
    // 0x1b7ea4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7ea8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7EA8u;
    {
        const bool branch_taken_0x1b7ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B7EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EA8u;
            // 0x1b7eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ea8) {
            ctx->pc = 0x1B7EB8u;
            goto label_1b7eb8;
        }
    }
    ctx->pc = 0x1B7EB0u;
    // 0x1b7eb0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B7EB0u;
    {
        const bool branch_taken_0x1b7eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EB0u;
            // 0x1b7eb4: 0xae480000  sw          $t0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7eb0) {
            ctx->pc = 0x1B7F38u;
            goto label_1b7f38;
        }
    }
    ctx->pc = 0x1B7EB8u;
label_1b7eb8:
    // 0x1b7eb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b7eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ebc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b7ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ec0: 0xc06dfd8  jal         func_1B7F60
    ctx->pc = 0x1B7EC0u;
    SET_GPR_U32(ctx, 31, 0x1B7EC8u);
    ctx->pc = 0x1B7EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EC0u;
            // 0x1b7ec4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F60u;
    if (runtime->hasFunction(0x1B7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1B7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7EC8u; }
        if (ctx->pc != 0x1B7EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7F60_0x1b7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7EC8u; }
        if (ctx->pc != 0x1B7EC8u) { return; }
    }
    ctx->pc = 0x1B7EC8u;
label_1b7ec8:
    // 0x1b7ec8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B7EC8u;
    {
        const bool branch_taken_0x1b7ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EC8u;
            // 0x1b7ecc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ec8) {
            ctx->pc = 0x1B7F3Cu;
            goto label_1b7f3c;
        }
    }
    ctx->pc = 0x1B7ED0u;
label_1b7ed0:
    // 0x1b7ed0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1b7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1b7ed4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1b7ed4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b7ed8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B7ED8u;
    {
        const bool branch_taken_0x1b7ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ed8) {
            ctx->pc = 0x1B7EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7ED8u;
            // 0x1b7edc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7EE0u;
            goto label_1b7ee0;
        }
    }
    ctx->pc = 0x1B7EE0u;
label_1b7ee0:
    // 0x1b7ee0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7ee4: 0x8e240a48  lw          $a0, 0xA48($s1)
    ctx->pc = 0x1b7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2632)));
    // 0x1b7ee8: 0x1012  mflo        $v0
    ctx->pc = 0x1b7ee8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b7eec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7ef0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1b7ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ef4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b7ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ef8: 0x10890009  beq         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7EF8u;
    {
        const bool branch_taken_0x1b7ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x1B7EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EF8u;
            // 0x1b7efc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ef8) {
            ctx->pc = 0x1B7F20u;
            goto label_1b7f20;
        }
    }
    ctx->pc = 0x1B7F00u;
    // 0x1b7f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b7f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b7f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f0c: 0xc06dff4  jal         func_1B7FD0
    ctx->pc = 0x1B7F0Cu;
    SET_GPR_U32(ctx, 31, 0x1B7F14u);
    ctx->pc = 0x1B7F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F0Cu;
            // 0x1b7f10: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FD0u;
    if (runtime->hasFunction(0x1B7FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F14u; }
        if (ctx->pc != 0x1B7F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7FD0_0x1b7fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F14u; }
        if (ctx->pc != 0x1B7F14u) { return; }
    }
    ctx->pc = 0x1B7F14u;
label_1b7f14:
    // 0x1b7f14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7F14u;
    {
        const bool branch_taken_0x1b7f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F14u;
            // 0x1b7f18: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f14) {
            ctx->pc = 0x1B7F3Cu;
            goto label_1b7f3c;
        }
    }
    ctx->pc = 0x1B7F1Cu;
    // 0x1b7f1c: 0x0  nop
    ctx->pc = 0x1b7f1cu;
    // NOP
label_1b7f20:
    // 0x1b7f20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b7f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b7f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f28: 0xc062890  jal         func_18A240
    ctx->pc = 0x1B7F28u;
    SET_GPR_U32(ctx, 31, 0x1B7F30u);
    ctx->pc = 0x1B7F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F28u;
            // 0x1b7f2c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F30u; }
        if (ctx->pc != 0x1B7F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F30u; }
        if (ctx->pc != 0x1B7F30u) { return; }
    }
    ctx->pc = 0x1B7F30u;
label_1b7f30:
    // 0x1b7f30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b7f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b7f34: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b7f38:
    // 0x1b7f38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b7f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7f3c:
    // 0x1b7f3c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b7f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7f40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b7f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7f44: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b7f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b7f48: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1b7f48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7f4c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1b7f4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b7f50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b7f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7f54: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F54u;
            // 0x1b7f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7F5Cu;
    // 0x1b7f5c: 0x0  nop
    ctx->pc = 0x1b7f5cu;
    // NOP
}
