#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1810
// Address: 0x1b1810 - 0x1b19a8
void sub_001B1810_0x1b1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1810_0x1b1810");
#endif

    switch (ctx->pc) {
        case 0x1b1844u: goto label_1b1844;
        case 0x1b1884u: goto label_1b1884;
        case 0x1b1894u: goto label_1b1894;
        case 0x1b18e8u: goto label_1b18e8;
        case 0x1b18f8u: goto label_1b18f8;
        case 0x1b1928u: goto label_1b1928;
        case 0x1b1938u: goto label_1b1938;
        case 0x1b196cu: goto label_1b196c;
        case 0x1b1994u: goto label_1b1994;
        default: break;
    }

    ctx->pc = 0x1b1810u;

label_1b1810:
    // 0x1b1810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1814: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b1818: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b1818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b181c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b1820: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b1820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1824: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1b1824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b1828: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1b1828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1b182c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1830: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x1b1830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1b1834: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b1834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b1838: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b1838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b183c: 0xc06c30c  jal         func_1B0C30
    ctx->pc = 0x1B183Cu;
    SET_GPR_U32(ctx, 31, 0x1B1844u);
    ctx->pc = 0x1B1840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B183Cu;
            // 0x1b1840: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C30u;
    if (runtime->hasFunction(0x1B0C30u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1844u; }
        if (ctx->pc != 0x1B1844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C30_0x1b0c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1844u; }
        if (ctx->pc != 0x1B1844u) { return; }
    }
    ctx->pc = 0x1B1844u;
label_1b1844:
    // 0x1b1844: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b1844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1848: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1b1848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1b184c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1b184cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1850: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b1850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b1854: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1b1854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1b1858: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1b1858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b185c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1b185cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1b1860: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1b1860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b1864: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1b1864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1b1868: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1b1868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b186c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b186cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1870: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b1870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b1874: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1b1874u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b1878: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b187c: 0xc06c6ea  jal         func_1B1BA8
    ctx->pc = 0x1B187Cu;
    SET_GPR_U32(ctx, 31, 0x1B1884u);
    ctx->pc = 0x1B1880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B187Cu;
            // 0x1b1880: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1BA8u;
    if (runtime->hasFunction(0x1B1BA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1884u; }
        if (ctx->pc != 0x1B1884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1BA8_0x1b1ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1884u; }
        if (ctx->pc != 0x1B1884u) { return; }
    }
    ctx->pc = 0x1B1884u;
label_1b1884:
    // 0x1b1884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b1884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b188c: 0xc06c348  jal         func_1B0D20
    ctx->pc = 0x1B188Cu;
    SET_GPR_U32(ctx, 31, 0x1B1894u);
    ctx->pc = 0x1B1890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B188Cu;
            // 0x1b1890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0D20u;
    if (runtime->hasFunction(0x1B0D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B0D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1894u; }
        if (ctx->pc != 0x1B1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0D20_0x1b0d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1894u; }
        if (ctx->pc != 0x1B1894u) { return; }
    }
    ctx->pc = 0x1B1894u;
label_1b1894:
    // 0x1b1894: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1898: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b1898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b189c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b189cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b18a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b18a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b18a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b18a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b18a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B18A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B18ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18A8u;
            // 0x1b18ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B18B0u;
    // 0x1b18b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b18b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b18b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b18b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b18b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b18b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b18bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b18bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b18c0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b18c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b18c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b18c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b18c8: 0x8cc22030  lw          $v0, 0x2030($a2)
    ctx->pc = 0x1b18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8240)));
    // 0x1b18cc: 0x24511128  addiu       $s1, $v0, 0x1128
    ctx->pc = 0x1b18ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
    // 0x1b18d0: 0x24441150  addiu       $a0, $v0, 0x1150
    ctx->pc = 0x1b18d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
    // 0x1b18d4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1b18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b18d8: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B18D8u;
    {
        const bool branch_taken_0x1b18d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1B18DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18D8u;
            // 0x1b18dc: 0x24501198  addiu       $s0, $v0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18d8) {
            ctx->pc = 0x1B18F0u;
            goto label_1b18f0;
        }
    }
    ctx->pc = 0x1B18E0u;
    // 0x1b18e0: 0xc042766  jal         func_109D98
    ctx->pc = 0x1B18E0u;
    SET_GPR_U32(ctx, 31, 0x1B18E8u);
    ctx->pc = 0x109D98u;
    if (runtime->hasFunction(0x109D98u)) {
        auto targetFn = runtime->lookupFunction(0x109D98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B18E8u; }
        if (ctx->pc != 0x1B18E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109D98_0x109d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B18E8u; }
        if (ctx->pc != 0x1B18E8u) { return; }
    }
    ctx->pc = 0x1B18E8u;
label_1b18e8:
    // 0x1b18e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B18E8u;
    {
        const bool branch_taken_0x1b18e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18E8u;
            // 0x1b18ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18e8) {
            ctx->pc = 0x1B193Cu;
            goto label_1b193c;
        }
    }
    ctx->pc = 0x1B18F0u;
label_1b18f0:
    // 0x1b18f0: 0xc06c37c  jal         func_1B0DF0
    ctx->pc = 0x1B18F0u;
    SET_GPR_U32(ctx, 31, 0x1B18F8u);
    ctx->pc = 0x1B18F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18F0u;
            // 0x1b18f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DF0u;
    if (runtime->hasFunction(0x1B0DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B18F8u; }
        if (ctx->pc != 0x1B18F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0DF0_0x1b0df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B18F8u; }
        if (ctx->pc != 0x1B18F8u) { return; }
    }
    ctx->pc = 0x1B18F8u;
label_1b18f8:
    // 0x1b18f8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b18fc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B18FCu;
    {
        const bool branch_taken_0x1b18fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18FCu;
            // 0x1b1900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18fc) {
            ctx->pc = 0x1B193Cu;
            goto label_1b193c;
        }
    }
    ctx->pc = 0x1B1904u;
    // 0x1b1904: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b1904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b1908: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B1908u;
    {
        const bool branch_taken_0x1b1908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1908u;
            // 0x1b190c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1908) {
            ctx->pc = 0x1B193Cu;
            goto label_1b193c;
        }
    }
    ctx->pc = 0x1B1910u;
    // 0x1b1910: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x1b1910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
    // 0x1b1914: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1b1914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1b1918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b191c: 0x24a5ac68  addiu       $a1, $a1, -0x5398
    ctx->pc = 0x1b191cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945896));
    // 0x1b1920: 0xc06c604  jal         func_1B1810
    ctx->pc = 0x1B1920u;
    SET_GPR_U32(ctx, 31, 0x1B1928u);
    ctx->pc = 0x1B1924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1920u;
            // 0x1b1924: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1810u;
    goto label_1b1810;
    ctx->pc = 0x1B1928u;
label_1b1928:
    // 0x1b1928: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b1928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b192c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1930: 0xc06c37c  jal         func_1B0DF0
    ctx->pc = 0x1B1930u;
    SET_GPR_U32(ctx, 31, 0x1B1938u);
    ctx->pc = 0x1B1934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1930u;
            // 0x1b1934: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DF0u;
    if (runtime->hasFunction(0x1B0DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1938u; }
        if (ctx->pc != 0x1B1938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0DF0_0x1b0df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1938u; }
        if (ctx->pc != 0x1B1938u) { return; }
    }
    ctx->pc = 0x1B1938u;
label_1b1938:
    // 0x1b1938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b193c:
    // 0x1b193c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b193cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1944: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1948: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b1948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b194c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B194Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B194Cu;
            // 0x1b1950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1954u;
    // 0x1b1954: 0x0  nop
    ctx->pc = 0x1b1954u;
    // NOP
    // 0x1b1958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b195c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b195cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1960: 0x8cc42030  lw          $a0, 0x2030($a2)
    ctx->pc = 0x1b1960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8240)));
    // 0x1b1964: 0xc06c3fc  jal         func_1B0FF0
    ctx->pc = 0x1B1964u;
    SET_GPR_U32(ctx, 31, 0x1B196Cu);
    ctx->pc = 0x1B1968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1964u;
            // 0x1b1968: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B196Cu; }
        if (ctx->pc != 0x1B196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0FF0_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B196Cu; }
        if (ctx->pc != 0x1B196Cu) { return; }
    }
    ctx->pc = 0x1B196Cu;
label_1b196c:
    // 0x1b196c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1974: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1974u;
            // 0x1b1978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B197Cu;
    // 0x1b197c: 0x0  nop
    ctx->pc = 0x1b197cu;
    // NOP
    // 0x1b1980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1988: 0x8cc42030  lw          $a0, 0x2030($a2)
    ctx->pc = 0x1b1988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8240)));
    // 0x1b198c: 0xc06c43c  jal         func_1B10F0
    ctx->pc = 0x1B198Cu;
    SET_GPR_U32(ctx, 31, 0x1B1994u);
    ctx->pc = 0x1B1990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B198Cu;
            // 0x1b1990: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B10F0u;
    if (runtime->hasFunction(0x1B10F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B10F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1994u; }
        if (ctx->pc != 0x1B1994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B10F0_0x1b10f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1994u; }
        if (ctx->pc != 0x1B1994u) { return; }
    }
    ctx->pc = 0x1B1994u;
label_1b1994:
    // 0x1b1994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b199c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B199Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B19A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B199Cu;
            // 0x1b19a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B19A4u;
    // 0x1b19a4: 0x0  nop
    ctx->pc = 0x1b19a4u;
    // NOP
}
