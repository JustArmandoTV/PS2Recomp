#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1370
// Address: 0x1d1370 - 0x1d1450
void sub_001D1370_0x1d1370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1370_0x1d1370");
#endif

    switch (ctx->pc) {
        case 0x1d13acu: goto label_1d13ac;
        case 0x1d13c0u: goto label_1d13c0;
        case 0x1d13f8u: goto label_1d13f8;
        case 0x1d1424u: goto label_1d1424;
        case 0x1d1434u: goto label_1d1434;
        default: break;
    }

    ctx->pc = 0x1d1370u;

    // 0x1d1370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1374: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1d1374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1d1378: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d1378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d137c: 0x2484a180  addiu       $a0, $a0, -0x5E80
    ctx->pc = 0x1d137cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943104));
    // 0x1d1380: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x1d1380u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x1d1384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1388: 0x2607a1c0  addiu       $a3, $s0, -0x5E40
    ctx->pc = 0x1d1388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943168));
    // 0x1d138c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d1390: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d1390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d1394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1398: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1d1398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d139c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d139cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13a0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d13a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d13a4: 0xc04410c  jal         func_110430
    ctx->pc = 0x1D13A4u;
    SET_GPR_U32(ctx, 31, 0x1D13ACu);
    ctx->pc = 0x1D13A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13A4u;
            // 0x1d13a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D13ACu; }
        if (ctx->pc != 0x1D13ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D13ACu; }
        if (ctx->pc != 0x1D13ACu) { return; }
    }
    ctx->pc = 0x1D13ACu;
label_1d13ac:
    // 0x1d13ac: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D13ACu;
    {
        const bool branch_taken_0x1d13ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D13B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13ACu;
            // 0x1d13b0: 0x8e02a1c0  lw          $v0, -0x5E40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13ac) {
            ctx->pc = 0x1D13C4u;
            goto label_1d13c4;
        }
    }
    ctx->pc = 0x1D13B4u;
    // 0x1d13b4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1d13b8: 0xc0743ca  jal         func_1D0F28
    ctx->pc = 0x1D13B8u;
    SET_GPR_U32(ctx, 31, 0x1D13C0u);
    ctx->pc = 0x1D13BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13B8u;
            // 0x1d13bc: 0x2484c460  addiu       $a0, $a0, -0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F28u;
    if (runtime->hasFunction(0x1D0F28u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D13C0u; }
        if (ctx->pc != 0x1D13C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F28_0x1d0f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D13C0u; }
        if (ctx->pc != 0x1D13C0u) { return; }
    }
    ctx->pc = 0x1D13C0u;
label_1d13c0:
    // 0x1d13c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d13c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d13c4:
    // 0x1d13c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d13c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d13c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d13c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d13cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D13CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D13D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13CCu;
            // 0x1d13d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D13D4u;
    // 0x1d13d4: 0x0  nop
    ctx->pc = 0x1d13d4u;
    // NOP
    // 0x1d13d8: 0x0  nop
    ctx->pc = 0x1d13d8u;
    // NOP
    // 0x1d13dc: 0x0  nop
    ctx->pc = 0x1d13dcu;
    // NOP
    // 0x1d13e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d13e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d13e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d13e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d13e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d13e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d13ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d13ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13f0: 0xc0663b2  jal         func_198EC8
    ctx->pc = 0x1D13F0u;
    SET_GPR_U32(ctx, 31, 0x1D13F8u);
    ctx->pc = 0x1D13F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13F0u;
            // 0x1d13f4: 0x8c84019c  lw          $a0, 0x19C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198EC8u;
    if (runtime->hasFunction(0x198EC8u)) {
        auto targetFn = runtime->lookupFunction(0x198EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D13F8u; }
        if (ctx->pc != 0x1D13F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198EC8_0x198ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D13F8u; }
        if (ctx->pc != 0x1D13F8u) { return; }
    }
    ctx->pc = 0x1D13F8u;
label_1d13f8:
    // 0x1d13f8: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x1d13f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x1d13fc: 0x8e0502d4  lw          $a1, 0x2D4($s0)
    ctx->pc = 0x1d13fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x1d1400: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1D1400u;
    {
        const bool branch_taken_0x1d1400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1400) {
            ctx->pc = 0x1D1404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1400u;
            // 0x1d1404: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D143Cu;
            goto label_1d143c;
        }
    }
    ctx->pc = 0x1D1408u;
    // 0x1d1408: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x1d1408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1d140c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d1410: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x1d1410u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d1414: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1414u;
    {
        const bool branch_taken_0x1d1414 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1414) {
            ctx->pc = 0x1D142Cu;
            goto label_1d142c;
        }
    }
    ctx->pc = 0x1D141Cu;
    // 0x1d141c: 0xc0fe4e8  jal         func_3F93A0
    ctx->pc = 0x1D141Cu;
    SET_GPR_U32(ctx, 31, 0x1D1424u);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1424u; }
        if (ctx->pc != 0x1D1424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1424u; }
        if (ctx->pc != 0x1D1424u) { return; }
    }
    ctx->pc = 0x1D1424u;
label_1d1424:
    // 0x1d1424: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1424u;
    {
        const bool branch_taken_0x1d1424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1424u;
            // 0x1d1428: 0xae0002d4  sw          $zero, 0x2D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1424) {
            ctx->pc = 0x1D1438u;
            goto label_1d1438;
        }
    }
    ctx->pc = 0x1D142Cu;
label_1d142c:
    // 0x1d142c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x1D142Cu;
    SET_GPR_U32(ctx, 31, 0x1D1434u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1434u; }
        if (ctx->pc != 0x1D1434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1434u; }
        if (ctx->pc != 0x1D1434u) { return; }
    }
    ctx->pc = 0x1D1434u;
label_1d1434:
    // 0x1d1434: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x1d1434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_1d1438:
    // 0x1d1438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d143c:
    // 0x1d143c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d143cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1440: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1440u;
            // 0x1d1444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1448u;
    // 0x1d1448: 0x0  nop
    ctx->pc = 0x1d1448u;
    // NOP
    // 0x1d144c: 0x0  nop
    ctx->pc = 0x1d144cu;
    // NOP
}
