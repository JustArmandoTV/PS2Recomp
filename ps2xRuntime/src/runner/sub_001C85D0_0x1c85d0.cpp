#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C85D0
// Address: 0x1c85d0 - 0x1c8788
void sub_001C85D0_0x1c85d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C85D0_0x1c85d0");
#endif

    switch (ctx->pc) {
        case 0x1c8668u: goto label_1c8668;
        case 0x1c8690u: goto label_1c8690;
        case 0x1c86b8u: goto label_1c86b8;
        case 0x1c86c8u: goto label_1c86c8;
        case 0x1c86dcu: goto label_1c86dc;
        case 0x1c86f0u: goto label_1c86f0;
        default: break;
    }

    ctx->pc = 0x1c85d0u;

    // 0x1c85d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c85d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c85d4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c85d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c85d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c85d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85dc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c85dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c85e0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1c85e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85e4: 0x211001a  div         $zero, $s0, $s1
    ctx->pc = 0x1c85e4u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c85e8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c85e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c85ec: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1c85ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1c85f0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1c85f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85f4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c85f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c85f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c85f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85fc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c85fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c8600: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1c8600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1c8604: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1c8604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1c8608: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1c8608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1c860c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1c860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1c8610: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x1c8610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x1c8614: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x1c8614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x1c8618: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8618u;
    {
        const bool branch_taken_0x1c8618 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8618) {
            ctx->pc = 0x1C861Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8618u;
            // 0x1c861c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8620u;
            goto label_1c8620;
        }
    }
    ctx->pc = 0x1C8620u;
label_1c8620:
    // 0x1c8620: 0x1010  mfhi        $v0
    ctx->pc = 0x1c8620u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c8624: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1C8624u;
    {
        const bool branch_taken_0x1c8624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8624u;
            // 0x1c8628: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8624) {
            ctx->pc = 0x1C8758u;
            goto label_1c8758;
        }
    }
    ctx->pc = 0x1C862Cu;
    // 0x1c862c: 0x290001a  div         $zero, $s4, $s0
    ctx->pc = 0x1c862cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c8630: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8630u;
    {
        const bool branch_taken_0x1c8630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8630) {
            ctx->pc = 0x1C8634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8630u;
            // 0x1c8634: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8638u;
            goto label_1c8638;
        }
    }
    ctx->pc = 0x1C8638u;
label_1c8638:
    // 0x1c8638: 0x1010  mfhi        $v0
    ctx->pc = 0x1c8638u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c863c: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1C863Cu;
    {
        const bool branch_taken_0x1c863c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C863Cu;
            // 0x1c8640: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c863c) {
            ctx->pc = 0x1C8758u;
            goto label_1c8758;
        }
    }
    ctx->pc = 0x1C8644u;
    // 0x1c8644: 0x52a00045  beql        $s5, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C8644u;
    {
        const bool branch_taken_0x1c8644 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8644) {
            ctx->pc = 0x1C8648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8644u;
            // 0x1c8648: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C875Cu;
            goto label_1c875c;
        }
    }
    ctx->pc = 0x1C864Cu;
    // 0x1c864c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C864Cu;
    {
        const bool branch_taken_0x1c864c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C864Cu;
            // 0x1c8650: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c864c) {
            ctx->pc = 0x1C8660u;
            goto label_1c8660;
        }
    }
    ctx->pc = 0x1C8654u;
    // 0x1c8654: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1C8654u;
    {
        const bool branch_taken_0x1c8654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8654u;
            // 0x1c8658: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8654) {
            ctx->pc = 0x1C875Cu;
            goto label_1c875c;
        }
    }
    ctx->pc = 0x1C865Cu;
    // 0x1c865c: 0x0  nop
    ctx->pc = 0x1c865cu;
    // NOP
label_1c8660:
    // 0x1c8660: 0xc07228c  jal         func_1C8A30
    ctx->pc = 0x1C8660u;
    SET_GPR_U32(ctx, 31, 0x1C8668u);
    ctx->pc = 0x1C8664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8660u;
            // 0x1c8664: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8A30u;
    if (runtime->hasFunction(0x1C8A30u)) {
        auto targetFn = runtime->lookupFunction(0x1C8A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8668u; }
        if (ctx->pc != 0x1C8668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8A30_0x1c8a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8668u; }
        if (ctx->pc != 0x1C8668u) { return; }
    }
    ctx->pc = 0x1C8668u;
label_1c8668:
    // 0x1c8668: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1C8668u;
    {
        const bool branch_taken_0x1c8668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8668u;
            // 0x1c866c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8668) {
            ctx->pc = 0x1C8758u;
            goto label_1c8758;
        }
    }
    ctx->pc = 0x1C8670u;
    // 0x1c8670: 0x290001a  div         $zero, $s4, $s0
    ctx->pc = 0x1c8670u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c8674: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8674u;
    {
        const bool branch_taken_0x1c8674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8674) {
            ctx->pc = 0x1C8678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8674u;
            // 0x1c8678: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C867Cu;
            goto label_1c867c;
        }
    }
    ctx->pc = 0x1C867Cu;
label_1c867c:
    // 0x1c867c: 0x1012  mflo        $v0
    ctx->pc = 0x1c867cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8680: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C8680u;
    {
        const bool branch_taken_0x1c8680 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C8684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8680u;
            // 0x1c8684: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8680) {
            ctx->pc = 0x1C8754u;
            goto label_1c8754;
        }
    }
    ctx->pc = 0x1C8688u;
    // 0x1c8688: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1c8688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1c868c: 0x0  nop
    ctx->pc = 0x1c868cu;
    // NOP
label_1c8690:
    // 0x1c8690: 0x92a90005  lbu         $t1, 0x5($s5)
    ctx->pc = 0x1c8690u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x1c8694: 0x1a000025  blez        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C8694u;
    {
        const bool branch_taken_0x1c8694 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1C8698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8694u;
            // 0x1c8698: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8694) {
            ctx->pc = 0x1C872Cu;
            goto label_1c872c;
        }
    }
    ctx->pc = 0x1C869Cu;
    // 0x1c869c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c86a0: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1c86a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c86a4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1c86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1c86a8: 0x5eb821  addu        $s7, $v0, $fp
    ctx->pc = 0x1c86a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1c86ac: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1c86acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c86b0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1c86b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c86b4: 0x0  nop
    ctx->pc = 0x1c86b4u;
    // NOP
label_1c86b8:
    // 0x1c86b8: 0x1372018  mult        $a0, $t1, $s7
    ctx->pc = 0x1c86b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c86bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1c86bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c86c0: 0xc07223c  jal         func_1C88F0
    ctx->pc = 0x1C86C0u;
    SET_GPR_U32(ctx, 31, 0x1C86C8u);
    ctx->pc = 0x1C86C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C86C0u;
            // 0x1c86c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C88F0u;
    if (runtime->hasFunction(0x1C88F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C88F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C86C8u; }
        if (ctx->pc != 0x1C86C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C88F0_0x1c88f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C86C8u; }
        if (ctx->pc != 0x1C86C8u) { return; }
    }
    ctx->pc = 0x1C86C8u;
label_1c86c8:
    // 0x1c86c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c86c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86cc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1c86ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c86d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c86d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86d4: 0xc072246  jal         func_1C8918
    ctx->pc = 0x1C86D4u;
    SET_GPR_U32(ctx, 31, 0x1C86DCu);
    ctx->pc = 0x1C86D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C86D4u;
            // 0x1c86d8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8918u;
    if (runtime->hasFunction(0x1C8918u)) {
        auto targetFn = runtime->lookupFunction(0x1C8918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C86DCu; }
        if (ctx->pc != 0x1C86DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8918_0x1c8918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C86DCu; }
        if (ctx->pc != 0x1C86DCu) { return; }
    }
    ctx->pc = 0x1C86DCu;
label_1c86dc:
    // 0x1c86dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c86dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c86e4: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C86E4u;
    {
        const bool branch_taken_0x1c86e4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1C86E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C86E4u;
            // 0x1c86e8: 0x534821  addu        $t1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86e4) {
            ctx->pc = 0x1C871Cu;
            goto label_1c871c;
        }
    }
    ctx->pc = 0x1C86ECu;
    // 0x1c86ec: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1c86ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c86f0:
    // 0x1c86f0: 0x2483821  addu        $a3, $s2, $t0
    ctx->pc = 0x1c86f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1c86f4: 0x1482821  addu        $a1, $t2, $t0
    ctx->pc = 0x1c86f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1c86f8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1c86f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c86fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c86fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c8700: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1c8700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c8704: 0x111302a  slt         $a2, $t0, $s1
    ctx->pc = 0x1c8704u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1c8708: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c8708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c870c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c870cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8710: 0x1244818  mult        $t1, $t1, $a0
    ctx->pc = 0x1c8710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1c8714: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C8714u;
    {
        const bool branch_taken_0x1c8714 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8714u;
            // 0x1c8718: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8714) {
            ctx->pc = 0x1C86F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C871Cu;
label_1c871c:
    // 0x1c871c: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x1c871cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1c8720: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x1c8720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c8724: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C8724u;
    {
        const bool branch_taken_0x1c8724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8724u;
            // 0x1c8728: 0x2519021  addu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8724) {
            ctx->pc = 0x1C86B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c86b8;
        }
    }
    ctx->pc = 0x1C872Cu;
label_1c872c:
    // 0x1c872c: 0x290001a  div         $zero, $s4, $s0
    ctx->pc = 0x1c872cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c8730: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8730u;
    {
        const bool branch_taken_0x1c8730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8730) {
            ctx->pc = 0x1C8734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8730u;
            // 0x1c8734: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8738u;
            goto label_1c8738;
        }
    }
    ctx->pc = 0x1C8738u;
label_1c8738:
    // 0x1c8738: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1c8738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1c873c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1c873cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1c8740: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c8740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c8744: 0x1012  mflo        $v0
    ctx->pc = 0x1c8744u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8748: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x1c8748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c874c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1C874Cu;
    {
        const bool branch_taken_0x1c874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C874Cu;
            // 0x1c8750: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c874c) {
            ctx->pc = 0x1C8690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8690;
        }
    }
    ctx->pc = 0x1C8754u;
label_1c8754:
    // 0x1c8754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8758:
    // 0x1c8758: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c8758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c875c:
    // 0x1c875c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c875cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c8760: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c8760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8764: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c8764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8768: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c8768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c876c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1c876cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c8770: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1c8770u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c8774: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1c8774u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c8778: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1c8778u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c877c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1c877cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c8780: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8780u;
            // 0x1c8784: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8788u;
}
