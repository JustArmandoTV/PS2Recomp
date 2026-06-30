#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5590
// Address: 0x2c5590 - 0x2c5700
void sub_002C5590_0x2c5590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5590_0x2c5590");
#endif

    switch (ctx->pc) {
        case 0x2c55b8u: goto label_2c55b8;
        case 0x2c55d0u: goto label_2c55d0;
        case 0x2c55d8u: goto label_2c55d8;
        case 0x2c5630u: goto label_2c5630;
        case 0x2c5690u: goto label_2c5690;
        case 0x2c569cu: goto label_2c569c;
        case 0x2c56a8u: goto label_2c56a8;
        case 0x2c56b4u: goto label_2c56b4;
        case 0x2c56c0u: goto label_2c56c0;
        case 0x2c56ccu: goto label_2c56cc;
        case 0x2c56e4u: goto label_2c56e4;
        default: break;
    }

    ctx->pc = 0x2c5590u;

    // 0x2c5590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c5594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c559c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c559cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c55a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c55a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c55a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c55a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c55a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c55ac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c55acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c55b0: 0xc0b4adc  jal         func_2D2B70
    ctx->pc = 0x2C55B0u;
    SET_GPR_U32(ctx, 31, 0x2C55B8u);
    ctx->pc = 0x2C55B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55B0u;
            // 0x2c55b4: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B70u;
    if (runtime->hasFunction(0x2D2B70u)) {
        auto targetFn = runtime->lookupFunction(0x2D2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55B8u; }
        if (ctx->pc != 0x2C55B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2B70_0x2d2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55B8u; }
        if (ctx->pc != 0x2C55B8u) { return; }
    }
    ctx->pc = 0x2C55B8u;
label_2c55b8:
    // 0x2c55b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c55b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c55bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c55bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c55c0: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x2c55c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c55c4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c55c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2c55c8: 0xc0b1654  jal         func_2C5950
    ctx->pc = 0x2C55C8u;
    SET_GPR_U32(ctx, 31, 0x2C55D0u);
    ctx->pc = 0x2C55CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55C8u;
            // 0x2c55cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5950u;
    if (runtime->hasFunction(0x2C5950u)) {
        auto targetFn = runtime->lookupFunction(0x2C5950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55D0u; }
        if (ctx->pc != 0x2C55D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5950_0x2c5950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55D0u; }
        if (ctx->pc != 0x2C55D0u) { return; }
    }
    ctx->pc = 0x2C55D0u;
label_2c55d0:
    // 0x2c55d0: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2C55D0u;
    SET_GPR_U32(ctx, 31, 0x2C55D8u);
    ctx->pc = 0x2C55D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55D0u;
            // 0x2c55d4: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55D8u; }
        if (ctx->pc != 0x2C55D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55D8u; }
        if (ctx->pc != 0x2C55D8u) { return; }
    }
    ctx->pc = 0x2C55D8u;
label_2c55d8:
    // 0x2c55d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c55dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c55e0: 0x24630db0  addiu       $v1, $v1, 0xDB0
    ctx->pc = 0x2c55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3504));
    // 0x2c55e4: 0x24420de8  addiu       $v0, $v0, 0xDE8
    ctx->pc = 0x2c55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3560));
    // 0x2c55e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c55e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2c55ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c55f0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c55f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2c55f4: 0x24630d50  addiu       $v1, $v1, 0xD50
    ctx->pc = 0x2c55f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3408));
    // 0x2c55f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c55f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c55fc: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x2c55fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x2c5600: 0x24420d58  addiu       $v0, $v0, 0xD58
    ctx->pc = 0x2c5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3416));
    // 0x2c5604: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5608: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2c5608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2c560c: 0x24630d90  addiu       $v1, $v1, 0xD90
    ctx->pc = 0x2c560cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3472));
    // 0x2c5610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c5610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5614: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x2c5614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x2c5618: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c561c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c561cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5624: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5624u;
            // 0x2c5628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C562Cu;
    // 0x2c562c: 0x0  nop
    ctx->pc = 0x2c562cu;
    // NOP
label_2c5630:
    // 0x2c5630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c5634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c563c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5644: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C5644u;
    {
        const bool branch_taken_0x2c5644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5644u;
            // 0x2c5648: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5644) {
            ctx->pc = 0x2C56E4u;
            goto label_2c56e4;
        }
    }
    ctx->pc = 0x2C564Cu;
    // 0x2c564c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c564cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5650: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5654: 0x24630db0  addiu       $v1, $v1, 0xDB0
    ctx->pc = 0x2c5654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3504));
    // 0x2c5658: 0x24420de8  addiu       $v0, $v0, 0xDE8
    ctx->pc = 0x2c5658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3560));
    // 0x2c565c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c565cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c5660: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C5660u;
    {
        const bool branch_taken_0x2c5660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5660u;
            // 0x2c5664: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5660) {
            ctx->pc = 0x2C56CCu;
            goto label_2c56cc;
        }
    }
    ctx->pc = 0x2C5668u;
    // 0x2c5668: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c566c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c566cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5670: 0x24630d00  addiu       $v1, $v1, 0xD00
    ctx->pc = 0x2c5670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
    // 0x2c5674: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c5674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c5678: 0x24420d38  addiu       $v0, $v0, 0xD38
    ctx->pc = 0x2c5678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3384));
    // 0x2c567c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c567cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c5680: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c5680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c5684: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c5684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c5688: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C5688u;
    SET_GPR_U32(ctx, 31, 0x2C5690u);
    ctx->pc = 0x2C568Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5688u;
            // 0x2c568c: 0x24a54cc0  addiu       $a1, $a1, 0x4CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5690u; }
        if (ctx->pc != 0x2C5690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5690u; }
        if (ctx->pc != 0x2C5690u) { return; }
    }
    ctx->pc = 0x2C5690u;
label_2c5690:
    // 0x2c5690: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c5690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c5694: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x2C5694u;
    SET_GPR_U32(ctx, 31, 0x2C569Cu);
    ctx->pc = 0x2C5698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5694u;
            // 0x2c5698: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C569Cu; }
        if (ctx->pc != 0x2C569Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C569Cu; }
        if (ctx->pc != 0x2C569Cu) { return; }
    }
    ctx->pc = 0x2C569Cu;
label_2c569c:
    // 0x2c569c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c56a0: 0xc0b15d8  jal         func_2C5760
    ctx->pc = 0x2C56A0u;
    SET_GPR_U32(ctx, 31, 0x2C56A8u);
    ctx->pc = 0x2C56A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56A0u;
            // 0x2c56a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5760u;
    if (runtime->hasFunction(0x2C5760u)) {
        auto targetFn = runtime->lookupFunction(0x2C5760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56A8u; }
        if (ctx->pc != 0x2C56A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5760_0x2c5760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56A8u; }
        if (ctx->pc != 0x2C56A8u) { return; }
    }
    ctx->pc = 0x2C56A8u;
label_2c56a8:
    // 0x2c56a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c56a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c56ac: 0xc0b15d8  jal         func_2C5760
    ctx->pc = 0x2C56ACu;
    SET_GPR_U32(ctx, 31, 0x2C56B4u);
    ctx->pc = 0x2C56B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56ACu;
            // 0x2c56b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5760u;
    if (runtime->hasFunction(0x2C5760u)) {
        auto targetFn = runtime->lookupFunction(0x2C5760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56B4u; }
        if (ctx->pc != 0x2C56B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5760_0x2c5760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56B4u; }
        if (ctx->pc != 0x2C56B4u) { return; }
    }
    ctx->pc = 0x2C56B4u;
label_2c56b4:
    // 0x2c56b4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c56b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c56b8: 0xc0b15c0  jal         func_2C5700
    ctx->pc = 0x2C56B8u;
    SET_GPR_U32(ctx, 31, 0x2C56C0u);
    ctx->pc = 0x2C56BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56B8u;
            // 0x2c56bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5700u;
    if (runtime->hasFunction(0x2C5700u)) {
        auto targetFn = runtime->lookupFunction(0x2C5700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56C0u; }
        if (ctx->pc != 0x2C56C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5700_0x2c5700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56C0u; }
        if (ctx->pc != 0x2C56C0u) { return; }
    }
    ctx->pc = 0x2C56C0u;
label_2c56c0:
    // 0x2c56c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c56c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56c4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C56C4u;
    SET_GPR_U32(ctx, 31, 0x2C56CCu);
    ctx->pc = 0x2C56C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56C4u;
            // 0x2c56c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56CCu; }
        if (ctx->pc != 0x2C56CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56CCu; }
        if (ctx->pc != 0x2C56CCu) { return; }
    }
    ctx->pc = 0x2C56CCu;
label_2c56cc:
    // 0x2c56cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c56ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c56d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c56d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c56d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C56D4u;
    {
        const bool branch_taken_0x2c56d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c56d4) {
            ctx->pc = 0x2C56D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56D4u;
            // 0x2c56d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C56E8u;
            goto label_2c56e8;
        }
    }
    ctx->pc = 0x2C56DCu;
    // 0x2c56dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C56DCu;
    SET_GPR_U32(ctx, 31, 0x2C56E4u);
    ctx->pc = 0x2C56E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56DCu;
            // 0x2c56e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56E4u; }
        if (ctx->pc != 0x2C56E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56E4u; }
        if (ctx->pc != 0x2C56E4u) { return; }
    }
    ctx->pc = 0x2C56E4u;
label_2c56e4:
    // 0x2c56e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c56e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c56e8:
    // 0x2c56e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c56e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c56ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c56ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c56f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c56f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c56f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C56F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C56F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56F4u;
            // 0x2c56f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C56FCu;
    // 0x2c56fc: 0x0  nop
    ctx->pc = 0x2c56fcu;
    // NOP
}
