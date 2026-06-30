#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135350
// Address: 0x135350 - 0x1354b0
void sub_00135350_0x135350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135350_0x135350");
#endif

    switch (ctx->pc) {
        case 0x1353c0u: goto label_1353c0;
        case 0x1353d0u: goto label_1353d0;
        case 0x135464u: goto label_135464;
        case 0x135474u: goto label_135474;
        case 0x135484u: goto label_135484;
        case 0x135494u: goto label_135494;
        default: break;
    }

    ctx->pc = 0x135350u;

    // 0x135350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135354: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x135354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13535c: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x13535cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x135360: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x135360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x135364: 0x8c890024  lw          $t1, 0x24($a0)
    ctx->pc = 0x135364u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x135368: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x135368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x13536c: 0x30e70700  andi        $a3, $a3, 0x700
    ctx->pc = 0x13536cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1792);
    // 0x135370: 0x14e30019  bne         $a3, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x135370u;
    {
        const bool branch_taken_0x135370 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x135374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135370u;
            // 0x135374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135370) {
            ctx->pc = 0x1353D8u;
            goto label_1353d8;
        }
    }
    ctx->pc = 0x135378u;
    // 0x135378: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x135378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13537c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x135380: 0x30840e77  andi        $a0, $a0, 0xE77
    ctx->pc = 0x135380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3703);
    // 0x135384: 0x50830045  beql        $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x135384u;
    {
        const bool branch_taken_0x135384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135384) {
            ctx->pc = 0x135388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135384u;
            // 0x135388: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13549Cu;
            goto label_13549c;
        }
    }
    ctx->pc = 0x13538Cu;
    // 0x13538c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13538cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x135390: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x135390u;
    {
        const bool branch_taken_0x135390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135390) {
            ctx->pc = 0x135394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135390u;
            // 0x135394: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1353C8u;
            goto label_1353c8;
        }
    }
    ctx->pc = 0x135398u;
    // 0x135398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x135398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13539c: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13539Cu;
    {
        const bool branch_taken_0x13539c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13539c) {
            ctx->pc = 0x1353A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13539Cu;
            // 0x1353a0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1353B8u;
            goto label_1353b8;
        }
    }
    ctx->pc = 0x1353A4u;
    // 0x1353a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1353a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1353a8: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1353A8u;
    {
        const bool branch_taken_0x1353a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1353a8) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x1353B0u;
    // 0x1353b0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1353B0u;
    {
        const bool branch_taken_0x1353b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353b0) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x1353B8u;
label_1353b8:
    // 0x1353b8: 0xc04d894  jal         func_136250
    ctx->pc = 0x1353B8u;
    SET_GPR_U32(ctx, 31, 0x1353C0u);
    ctx->pc = 0x136250u;
    if (runtime->hasFunction(0x136250u)) {
        auto targetFn = runtime->lookupFunction(0x136250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1353C0u; }
        if (ctx->pc != 0x1353C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136250_0x136250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1353C0u; }
        if (ctx->pc != 0x1353C0u) { return; }
    }
    ctx->pc = 0x1353C0u;
label_1353c0:
    // 0x1353c0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1353C0u;
    {
        const bool branch_taken_0x1353c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1353C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1353C0u;
            // 0x1353c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353c0) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x1353C8u;
label_1353c8:
    // 0x1353c8: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x1353C8u;
    SET_GPR_U32(ctx, 31, 0x1353D0u);
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1353D0u; }
        if (ctx->pc != 0x1353D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135F20_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1353D0u; }
        if (ctx->pc != 0x1353D0u) { return; }
    }
    ctx->pc = 0x1353D0u;
label_1353d0:
    // 0x1353d0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1353D0u;
    {
        const bool branch_taken_0x1353d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1353D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1353D0u;
            // 0x1353d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353d0) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x1353D8u;
label_1353d8:
    // 0x1353d8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1353d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1353dc: 0x10e30009  beq         $a3, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1353DCu;
    {
        const bool branch_taken_0x1353dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1353E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1353DCu;
            // 0x1353e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353dc) {
            ctx->pc = 0x135404u;
            goto label_135404;
        }
    }
    ctx->pc = 0x1353E4u;
    // 0x1353e4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1353e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1353e8: 0x50e30007  beql        $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1353E8u;
    {
        const bool branch_taken_0x1353e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1353e8) {
            ctx->pc = 0x1353ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1353E8u;
            // 0x1353ec: 0x24c80004  addiu       $t0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135408u;
            goto label_135408;
        }
    }
    ctx->pc = 0x1353F0u;
    // 0x1353f0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1353f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1353f4: 0x50e30004  beql        $a3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1353F4u;
    {
        const bool branch_taken_0x1353f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1353f4) {
            ctx->pc = 0x1353F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1353F4u;
            // 0x1353f8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135408u;
            goto label_135408;
        }
    }
    ctx->pc = 0x1353FCu;
    // 0x1353fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1353FCu;
    {
        const bool branch_taken_0x1353fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353fc) {
            ctx->pc = 0x135408u;
            goto label_135408;
        }
    }
    ctx->pc = 0x135404u;
label_135404:
    // 0x135404: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x135404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_135408:
    // 0x135408: 0x11000023  beqz        $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x135408u;
    {
        const bool branch_taken_0x135408 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x135408) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x135410u;
    // 0x135410: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x135410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x135414: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x135414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x135418: 0x30840e77  andi        $a0, $a0, 0xE77
    ctx->pc = 0x135418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3703);
    // 0x13541c: 0x5083001b  beql        $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x13541Cu;
    {
        const bool branch_taken_0x13541c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13541c) {
            ctx->pc = 0x135420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13541Cu;
            // 0x135420: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13548Cu;
            goto label_13548c;
        }
    }
    ctx->pc = 0x135424u;
    // 0x135424: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x135424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x135428: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x135428u;
    {
        const bool branch_taken_0x135428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135428) {
            ctx->pc = 0x13542Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135428u;
            // 0x13542c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13547Cu;
            goto label_13547c;
        }
    }
    ctx->pc = 0x135430u;
    // 0x135430: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x135430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x135434: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x135434u;
    {
        const bool branch_taken_0x135434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135434) {
            ctx->pc = 0x135438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135434u;
            // 0x135438: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13546Cu;
            goto label_13546c;
        }
    }
    ctx->pc = 0x13543Cu;
    // 0x13543c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13543cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135440: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135440u;
    {
        const bool branch_taken_0x135440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135440) {
            ctx->pc = 0x135444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135440u;
            // 0x135444: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13545Cu;
            goto label_13545c;
        }
    }
    ctx->pc = 0x135448u;
    // 0x135448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13544c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13544Cu;
    {
        const bool branch_taken_0x13544c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13544c) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x135454u;
    // 0x135454: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x135454u;
    {
        const bool branch_taken_0x135454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135454) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x13545Cu;
label_13545c:
    // 0x13545c: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x13545Cu;
    SET_GPR_U32(ctx, 31, 0x135464u);
    ctx->pc = 0x135460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13545Cu;
            // 0x135460: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135464u; }
        if (ctx->pc != 0x135464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135464u; }
        if (ctx->pc != 0x135464u) { return; }
    }
    ctx->pc = 0x135464u;
label_135464:
    // 0x135464: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x135464u;
    {
        const bool branch_taken_0x135464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135464u;
            // 0x135468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135464) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x13546Cu;
label_13546c:
    // 0x13546c: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x13546Cu;
    SET_GPR_U32(ctx, 31, 0x135474u);
    ctx->pc = 0x135470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13546Cu;
            // 0x135470: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135474u; }
        if (ctx->pc != 0x135474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135474u; }
        if (ctx->pc != 0x135474u) { return; }
    }
    ctx->pc = 0x135474u;
label_135474:
    // 0x135474: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135474u;
    {
        const bool branch_taken_0x135474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135474u;
            // 0x135478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135474) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x13547Cu;
label_13547c:
    // 0x13547c: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x13547Cu;
    SET_GPR_U32(ctx, 31, 0x135484u);
    ctx->pc = 0x135480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13547Cu;
            // 0x135480: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135484u; }
        if (ctx->pc != 0x135484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135484u; }
        if (ctx->pc != 0x135484u) { return; }
    }
    ctx->pc = 0x135484u;
label_135484:
    // 0x135484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135484u;
    {
        const bool branch_taken_0x135484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135484u;
            // 0x135488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135484) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x13548Cu;
label_13548c:
    // 0x13548c: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x13548Cu;
    SET_GPR_U32(ctx, 31, 0x135494u);
    ctx->pc = 0x135490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13548Cu;
            // 0x135490: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135494u; }
        if (ctx->pc != 0x135494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135494u; }
        if (ctx->pc != 0x135494u) { return; }
    }
    ctx->pc = 0x135494u;
label_135494:
    // 0x135494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135498:
    // 0x135498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13549c:
    // 0x13549c: 0x3e00008  jr          $ra
    ctx->pc = 0x13549Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1354A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13549Cu;
            // 0x1354a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1354A4u;
    // 0x1354a4: 0x0  nop
    ctx->pc = 0x1354a4u;
    // NOP
    // 0x1354a8: 0x0  nop
    ctx->pc = 0x1354a8u;
    // NOP
    // 0x1354ac: 0x0  nop
    ctx->pc = 0x1354acu;
    // NOP
}
