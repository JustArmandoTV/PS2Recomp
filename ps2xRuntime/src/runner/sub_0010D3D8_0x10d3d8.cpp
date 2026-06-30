#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D3D8
// Address: 0x10d3d8 - 0x10d4a0
void sub_0010D3D8_0x10d3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D3D8_0x10d3d8");
#endif

    switch (ctx->pc) {
        case 0x10d428u: goto label_10d428;
        case 0x10d448u: goto label_10d448;
        case 0x10d45cu: goto label_10d45c;
        case 0x10d470u: goto label_10d470;
        case 0x10d480u: goto label_10d480;
        case 0x10d488u: goto label_10d488;
        default: break;
    }

    ctx->pc = 0x10d3d8u;

    // 0x10d3d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10d3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10d3dc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10d3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10d3e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10d3e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10d3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10d3ec: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10d3f0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10d3f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10d3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10d3f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D3F8u;
    {
        const bool branch_taken_0x10d3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d3f8) {
            ctx->pc = 0x10D3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3F8u;
            // 0x10d3fc: 0x3c020063  lui         $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D40Cu;
            goto label_10d40c;
        }
    }
    ctx->pc = 0x10D400u;
    // 0x10d400: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10d400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10d404: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10D404u;
    {
        const bool branch_taken_0x10d404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D404u;
            // 0x10d408: 0x34428008  ori         $v0, $v0, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d404) {
            ctx->pc = 0x10D48Cu;
            goto label_10d48c;
        }
    }
    ctx->pc = 0x10D40Cu;
label_10d40c:
    // 0x10d40c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d410: 0x2442ec10  addiu       $v0, $v0, -0x13F0
    ctx->pc = 0x10d410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962192));
    // 0x10d414: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x10d414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10d418: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x10d418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x10d41c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10d41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d420: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x10D420u;
    SET_GPR_U32(ctx, 31, 0x10D428u);
    ctx->pc = 0x10D424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D420u;
            // 0x10d424: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D428u; }
        if (ctx->pc != 0x10D428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D428u; }
        if (ctx->pc != 0x10D428u) { return; }
    }
    ctx->pc = 0x10D428u;
label_10d428:
    // 0x10d428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d42c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D42Cu;
    {
        const bool branch_taken_0x10d42c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x10D430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D42Cu;
            // 0x10d430: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d42c) {
            ctx->pc = 0x10D440u;
            goto label_10d440;
        }
    }
    ctx->pc = 0x10D434u;
    // 0x10d434: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10d434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10d438: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10D438u;
    {
        const bool branch_taken_0x10d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D438u;
            // 0x10d43c: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d438) {
            ctx->pc = 0x10D48Cu;
            goto label_10d48c;
        }
    }
    ctx->pc = 0x10D440u;
label_10d440:
    // 0x10d440: 0xc046038  jal         func_1180E0
    ctx->pc = 0x10D440u;
    SET_GPR_U32(ctx, 31, 0x10D448u);
    ctx->pc = 0x10D444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D440u;
            // 0x10d444: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1180E0u;
    if (runtime->hasFunction(0x1180E0u)) {
        auto targetFn = runtime->lookupFunction(0x1180E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D448u; }
        if (ctx->pc != 0x10D448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001180E0_0x1180e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D448u; }
        if (ctx->pc != 0x10D448u) { return; }
    }
    ctx->pc = 0x10D448u;
label_10d448:
    // 0x10d448: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10d448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10d44c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d450: 0x24a5d618  addiu       $a1, $a1, -0x29E8
    ctx->pc = 0x10d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956568));
    // 0x10d454: 0xc0460a4  jal         func_118290
    ctx->pc = 0x10D454u;
    SET_GPR_U32(ctx, 31, 0x10D45Cu);
    ctx->pc = 0x10D458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D454u;
            // 0x10d458: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118290u;
    if (runtime->hasFunction(0x118290u)) {
        auto targetFn = runtime->lookupFunction(0x118290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D45Cu; }
        if (ctx->pc != 0x10D45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118290_0x118290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D45Cu; }
        if (ctx->pc != 0x10D45Cu) { return; }
    }
    ctx->pc = 0x10D45Cu;
label_10d45c:
    // 0x10d45c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d460: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D460u;
    {
        const bool branch_taken_0x10d460 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x10d460) {
            ctx->pc = 0x10D478u;
            goto label_10d478;
        }
    }
    ctx->pc = 0x10D468u;
    // 0x10d468: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x10D468u;
    SET_GPR_U32(ctx, 31, 0x10D470u);
    ctx->pc = 0x10D46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D468u;
            // 0x10d46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D470u; }
        if (ctx->pc != 0x10D470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D470u; }
        if (ctx->pc != 0x10D470u) { return; }
    }
    ctx->pc = 0x10D470u;
label_10d470:
    // 0x10d470: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10D470u;
    {
        const bool branch_taken_0x10d470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D470u;
            // 0x10d474: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d470) {
            ctx->pc = 0x10D48Cu;
            goto label_10d48c;
        }
    }
    ctx->pc = 0x10D478u;
label_10d478:
    // 0x10d478: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x10D478u;
    SET_GPR_U32(ctx, 31, 0x10D480u);
    ctx->pc = 0x10D47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D478u;
            // 0x10d47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D480u; }
        if (ctx->pc != 0x10D480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D480u; }
        if (ctx->pc != 0x10D480u) { return; }
    }
    ctx->pc = 0x10D480u;
label_10d480:
    // 0x10d480: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x10D480u;
    SET_GPR_U32(ctx, 31, 0x10D488u);
    ctx->pc = 0x10D484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D480u;
            // 0x10d484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D488u; }
        if (ctx->pc != 0x10D488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D488u; }
        if (ctx->pc != 0x10D488u) { return; }
    }
    ctx->pc = 0x10D488u;
label_10d488:
    // 0x10d488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d48c:
    // 0x10d48c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10d48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d490: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10d490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d494: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10d494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d498: 0x3e00008  jr          $ra
    ctx->pc = 0x10D498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D498u;
            // 0x10d49c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D4A0u;
}
