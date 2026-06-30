#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173420
// Address: 0x173420 - 0x173538
void sub_00173420_0x173420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173420_0x173420");
#endif

    switch (ctx->pc) {
        case 0x173460u: goto label_173460;
        case 0x17347cu: goto label_17347c;
        case 0x173488u: goto label_173488;
        case 0x173494u: goto label_173494;
        case 0x17350cu: goto label_17350c;
        case 0x17351cu: goto label_17351c;
        default: break;
    }

    ctx->pc = 0x173420u;

    // 0x173420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17342c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173430: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x173430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173434: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173438: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x173438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17343c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x173440: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x173440u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x173444: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x173444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x173448: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x173448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x17344c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17344cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x173450: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173450u;
    {
        const bool branch_taken_0x173450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173450u;
            // 0x173454: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173450) {
            ctx->pc = 0x173468u;
            goto label_173468;
        }
    }
    ctx->pc = 0x173458u;
    // 0x173458: 0xc05ba7c  jal         func_16E9F0
    ctx->pc = 0x173458u;
    SET_GPR_U32(ctx, 31, 0x173460u);
    ctx->pc = 0x17345Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173458u;
            // 0x17345c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9F0u;
    if (runtime->hasFunction(0x16E9F0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173460u; }
        if (ctx->pc != 0x173460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9F0_0x16e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173460u; }
        if (ctx->pc != 0x173460u) { return; }
    }
    ctx->pc = 0x173460u;
label_173460:
    // 0x173460: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x173460u;
    {
        const bool branch_taken_0x173460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173460u;
            // 0x173464: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173460) {
            ctx->pc = 0x1734C4u;
            goto label_1734c4;
        }
    }
    ctx->pc = 0x173468u;
label_173468:
    // 0x173468: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x173468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17346c: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17346Cu;
    {
        const bool branch_taken_0x17346c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17346c) {
            ctx->pc = 0x173470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17346Cu;
            // 0x173470: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1734B8u;
            goto label_1734b8;
        }
    }
    ctx->pc = 0x173474u;
    // 0x173474: 0xc05c064  jal         func_170190
    ctx->pc = 0x173474u;
    SET_GPR_U32(ctx, 31, 0x17347Cu);
    ctx->pc = 0x173478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173474u;
            // 0x173478: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170190u;
    if (runtime->hasFunction(0x170190u)) {
        auto targetFn = runtime->lookupFunction(0x170190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17347Cu; }
        if (ctx->pc != 0x17347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170190_0x170190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17347Cu; }
        if (ctx->pc != 0x17347Cu) { return; }
    }
    ctx->pc = 0x17347Cu;
label_17347c:
    // 0x17347c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173480: 0xc05c046  jal         func_170118
    ctx->pc = 0x173480u;
    SET_GPR_U32(ctx, 31, 0x173488u);
    ctx->pc = 0x173484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173480u;
            // 0x173484: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170118u;
    if (runtime->hasFunction(0x170118u)) {
        auto targetFn = runtime->lookupFunction(0x170118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173488u; }
        if (ctx->pc != 0x173488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170118_0x170118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173488u; }
        if (ctx->pc != 0x173488u) { return; }
    }
    ctx->pc = 0x173488u;
label_173488:
    // 0x173488: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x173488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17348c: 0xc05c052  jal         func_170148
    ctx->pc = 0x17348Cu;
    SET_GPR_U32(ctx, 31, 0x173494u);
    ctx->pc = 0x173490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17348Cu;
            // 0x173490: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170148u;
    if (runtime->hasFunction(0x170148u)) {
        auto targetFn = runtime->lookupFunction(0x170148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173494u; }
        if (ctx->pc != 0x173494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170148_0x170148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173494u; }
        if (ctx->pc != 0x173494u) { return; }
    }
    ctx->pc = 0x173494u;
label_173494:
    // 0x173494: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x173494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173498: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x173498u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17349c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17349Cu;
    {
        const bool branch_taken_0x17349c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17349c) {
            ctx->pc = 0x1734A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17349Cu;
            // 0x1734a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1734A4u;
            goto label_1734a4;
        }
    }
    ctx->pc = 0x1734A4u;
label_1734a4:
    // 0x1734a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1734a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1734a8: 0x1812  mflo        $v1
    ctx->pc = 0x1734a8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1734ac: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1734acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1734b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1734B0u;
    {
        const bool branch_taken_0x1734b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1734B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1734B0u;
            // 0x1734b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734b0) {
            ctx->pc = 0x1734C0u;
            goto label_1734c0;
        }
    }
    ctx->pc = 0x1734B8u;
label_1734b8:
    // 0x1734b8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1734b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1734bc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1734bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1734c0:
    // 0x1734c0: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1734c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1734c4:
    // 0x1734c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1734c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1734c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1734c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1734cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1734ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1734d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1734d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1734d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1734d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1734d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1734d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1734dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1734dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1734e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1734E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1734E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1734E0u;
            // 0x1734e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1734E8u;
    // 0x1734e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1734e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1734ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1734ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1734f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1734f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1734f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1734f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1734f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1734fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173500: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x173500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x173504: 0xc0599de  jal         func_166778
    ctx->pc = 0x173504u;
    SET_GPR_U32(ctx, 31, 0x17350Cu);
    ctx->pc = 0x173508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173504u;
            // 0x173508: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17350Cu; }
        if (ctx->pc != 0x17350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17350Cu; }
        if (ctx->pc != 0x17350Cu) { return; }
    }
    ctx->pc = 0x17350Cu;
label_17350c:
    // 0x17350c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x173510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173514: 0xc05cd4e  jal         func_173538
    ctx->pc = 0x173514u;
    SET_GPR_U32(ctx, 31, 0x17351Cu);
    ctx->pc = 0x173518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173514u;
            // 0x173518: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173538u;
    if (runtime->hasFunction(0x173538u)) {
        auto targetFn = runtime->lookupFunction(0x173538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17351Cu; }
        if (ctx->pc != 0x17351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173538_0x173538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17351Cu; }
        if (ctx->pc != 0x17351Cu) { return; }
    }
    ctx->pc = 0x17351Cu;
label_17351c:
    // 0x17351c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17351cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173524: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173528: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x173528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17352c: 0x80599e0  j           func_166780
    ctx->pc = 0x17352Cu;
    ctx->pc = 0x173530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17352Cu;
            // 0x173530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173534u;
    // 0x173534: 0x0  nop
    ctx->pc = 0x173534u;
    // NOP
}
