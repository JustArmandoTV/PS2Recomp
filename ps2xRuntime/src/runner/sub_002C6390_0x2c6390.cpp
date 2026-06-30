#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6390
// Address: 0x2c6390 - 0x2c6500
void sub_002C6390_0x2c6390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6390_0x2c6390");
#endif

    switch (ctx->pc) {
        case 0x2c63b8u: goto label_2c63b8;
        case 0x2c63d0u: goto label_2c63d0;
        case 0x2c63d8u: goto label_2c63d8;
        case 0x2c6430u: goto label_2c6430;
        case 0x2c6490u: goto label_2c6490;
        case 0x2c649cu: goto label_2c649c;
        case 0x2c64a8u: goto label_2c64a8;
        case 0x2c64b4u: goto label_2c64b4;
        case 0x2c64c0u: goto label_2c64c0;
        case 0x2c64ccu: goto label_2c64cc;
        case 0x2c64e4u: goto label_2c64e4;
        default: break;
    }

    ctx->pc = 0x2c6390u;

    // 0x2c6390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c6394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c6398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c639c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c63a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c63a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c63a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c63a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c63a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c63a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c63ac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c63acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c63b0: 0xc0b4adc  jal         func_2D2B70
    ctx->pc = 0x2C63B0u;
    SET_GPR_U32(ctx, 31, 0x2C63B8u);
    ctx->pc = 0x2C63B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C63B0u;
            // 0x2c63b4: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B70u;
    if (runtime->hasFunction(0x2D2B70u)) {
        auto targetFn = runtime->lookupFunction(0x2D2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C63B8u; }
        if (ctx->pc != 0x2C63B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2B70_0x2d2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C63B8u; }
        if (ctx->pc != 0x2C63B8u) { return; }
    }
    ctx->pc = 0x2C63B8u;
label_2c63b8:
    // 0x2c63b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c63b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c63bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c63c0: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x2c63c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c63c4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c63c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2c63c8: 0xc0b1a14  jal         func_2C6850
    ctx->pc = 0x2C63C8u;
    SET_GPR_U32(ctx, 31, 0x2C63D0u);
    ctx->pc = 0x2C63CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C63C8u;
            // 0x2c63cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6850u;
    if (runtime->hasFunction(0x2C6850u)) {
        auto targetFn = runtime->lookupFunction(0x2C6850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C63D0u; }
        if (ctx->pc != 0x2C63D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6850_0x2c6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C63D0u; }
        if (ctx->pc != 0x2C63D0u) { return; }
    }
    ctx->pc = 0x2C63D0u;
label_2c63d0:
    // 0x2c63d0: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2C63D0u;
    SET_GPR_U32(ctx, 31, 0x2C63D8u);
    ctx->pc = 0x2C63D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C63D0u;
            // 0x2c63d4: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C63D8u; }
        if (ctx->pc != 0x2C63D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C63D8u; }
        if (ctx->pc != 0x2C63D8u) { return; }
    }
    ctx->pc = 0x2C63D8u;
label_2c63d8:
    // 0x2c63d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c63d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c63dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c63e0: 0x24630b90  addiu       $v1, $v1, 0xB90
    ctx->pc = 0x2c63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2960));
    // 0x2c63e4: 0x24420bc8  addiu       $v0, $v0, 0xBC8
    ctx->pc = 0x2c63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3016));
    // 0x2c63e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c63e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2c63ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c63f0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c63f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2c63f4: 0x24630b30  addiu       $v1, $v1, 0xB30
    ctx->pc = 0x2c63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2864));
    // 0x2c63f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c63fc: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x2c63fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x2c6400: 0x24420b38  addiu       $v0, $v0, 0xB38
    ctx->pc = 0x2c6400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2872));
    // 0x2c6404: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6408: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2c6408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2c640c: 0x24630b70  addiu       $v1, $v1, 0xB70
    ctx->pc = 0x2c640cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2928));
    // 0x2c6410: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c6410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6414: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x2c6414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x2c6418: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c641c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c641cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6424: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6424u;
            // 0x2c6428: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C642Cu;
    // 0x2c642c: 0x0  nop
    ctx->pc = 0x2c642cu;
    // NOP
label_2c6430:
    // 0x2c6430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c6434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c6438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c643c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c643cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6444: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C6444u;
    {
        const bool branch_taken_0x2c6444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6444u;
            // 0x2c6448: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6444) {
            ctx->pc = 0x2C64E4u;
            goto label_2c64e4;
        }
    }
    ctx->pc = 0x2C644Cu;
    // 0x2c644c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c644cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6450: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c6454: 0x24630b90  addiu       $v1, $v1, 0xB90
    ctx->pc = 0x2c6454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2960));
    // 0x2c6458: 0x24420bc8  addiu       $v0, $v0, 0xBC8
    ctx->pc = 0x2c6458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3016));
    // 0x2c645c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c645cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c6460: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C6460u;
    {
        const bool branch_taken_0x2c6460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6460u;
            // 0x2c6464: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6460) {
            ctx->pc = 0x2C64CCu;
            goto label_2c64cc;
        }
    }
    ctx->pc = 0x2C6468u;
    // 0x2c6468: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c646c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c646cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c6470: 0x24630ae0  addiu       $v1, $v1, 0xAE0
    ctx->pc = 0x2c6470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2784));
    // 0x2c6474: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c6474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c6478: 0x24420b18  addiu       $v0, $v0, 0xB18
    ctx->pc = 0x2c6478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2840));
    // 0x2c647c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c647cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c6480: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c6480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c6484: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c6484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c6488: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C6488u;
    SET_GPR_U32(ctx, 31, 0x2C6490u);
    ctx->pc = 0x2C648Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6488u;
            // 0x2c648c: 0x24a565d0  addiu       $a1, $a1, 0x65D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6490u; }
        if (ctx->pc != 0x2C6490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6490u; }
        if (ctx->pc != 0x2C6490u) { return; }
    }
    ctx->pc = 0x2C6490u;
label_2c6490:
    // 0x2c6490: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c6490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c6494: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x2C6494u;
    SET_GPR_U32(ctx, 31, 0x2C649Cu);
    ctx->pc = 0x2C6498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6494u;
            // 0x2c6498: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C649Cu; }
        if (ctx->pc != 0x2C649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C649Cu; }
        if (ctx->pc != 0x2C649Cu) { return; }
    }
    ctx->pc = 0x2C649Cu;
label_2c649c:
    // 0x2c649c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c64a0: 0xc0b1958  jal         func_2C6560
    ctx->pc = 0x2C64A0u;
    SET_GPR_U32(ctx, 31, 0x2C64A8u);
    ctx->pc = 0x2C64A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64A0u;
            // 0x2c64a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6560u;
    if (runtime->hasFunction(0x2C6560u)) {
        auto targetFn = runtime->lookupFunction(0x2C6560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64A8u; }
        if (ctx->pc != 0x2C64A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6560_0x2c6560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64A8u; }
        if (ctx->pc != 0x2C64A8u) { return; }
    }
    ctx->pc = 0x2C64A8u;
label_2c64a8:
    // 0x2c64a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c64a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c64ac: 0xc0b1958  jal         func_2C6560
    ctx->pc = 0x2C64ACu;
    SET_GPR_U32(ctx, 31, 0x2C64B4u);
    ctx->pc = 0x2C64B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64ACu;
            // 0x2c64b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6560u;
    if (runtime->hasFunction(0x2C6560u)) {
        auto targetFn = runtime->lookupFunction(0x2C6560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64B4u; }
        if (ctx->pc != 0x2C64B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6560_0x2c6560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64B4u; }
        if (ctx->pc != 0x2C64B4u) { return; }
    }
    ctx->pc = 0x2C64B4u;
label_2c64b4:
    // 0x2c64b4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c64b8: 0xc0b1940  jal         func_2C6500
    ctx->pc = 0x2C64B8u;
    SET_GPR_U32(ctx, 31, 0x2C64C0u);
    ctx->pc = 0x2C64BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64B8u;
            // 0x2c64bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6500u;
    if (runtime->hasFunction(0x2C6500u)) {
        auto targetFn = runtime->lookupFunction(0x2C6500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64C0u; }
        if (ctx->pc != 0x2C64C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6500_0x2c6500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64C0u; }
        if (ctx->pc != 0x2C64C0u) { return; }
    }
    ctx->pc = 0x2C64C0u;
label_2c64c0:
    // 0x2c64c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c64c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64c4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C64C4u;
    SET_GPR_U32(ctx, 31, 0x2C64CCu);
    ctx->pc = 0x2C64C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64C4u;
            // 0x2c64c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64CCu; }
        if (ctx->pc != 0x2C64CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64CCu; }
        if (ctx->pc != 0x2C64CCu) { return; }
    }
    ctx->pc = 0x2C64CCu;
label_2c64cc:
    // 0x2c64cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c64ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c64d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c64d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c64d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C64D4u;
    {
        const bool branch_taken_0x2c64d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c64d4) {
            ctx->pc = 0x2C64D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64D4u;
            // 0x2c64d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C64E8u;
            goto label_2c64e8;
        }
    }
    ctx->pc = 0x2C64DCu;
    // 0x2c64dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C64DCu;
    SET_GPR_U32(ctx, 31, 0x2C64E4u);
    ctx->pc = 0x2C64E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64DCu;
            // 0x2c64e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64E4u; }
        if (ctx->pc != 0x2C64E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64E4u; }
        if (ctx->pc != 0x2C64E4u) { return; }
    }
    ctx->pc = 0x2C64E4u;
label_2c64e4:
    // 0x2c64e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c64e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c64e8:
    // 0x2c64e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c64e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c64ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c64ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c64f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c64f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c64f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C64F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C64F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64F4u;
            // 0x2c64f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C64FCu;
    // 0x2c64fc: 0x0  nop
    ctx->pc = 0x2c64fcu;
    // NOP
}
