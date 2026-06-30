#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E1780
// Address: 0x4e1780 - 0x4e1910
void sub_004E1780_0x4e1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1780_0x4e1780");
#endif

    switch (ctx->pc) {
        case 0x4e179cu: goto label_4e179c;
        case 0x4e17bcu: goto label_4e17bc;
        case 0x4e1804u: goto label_4e1804;
        case 0x4e1820u: goto label_4e1820;
        case 0x4e1840u: goto label_4e1840;
        case 0x4e18a0u: goto label_4e18a0;
        case 0x4e18acu: goto label_4e18ac;
        case 0x4e18b8u: goto label_4e18b8;
        case 0x4e18c4u: goto label_4e18c4;
        case 0x4e18d0u: goto label_4e18d0;
        case 0x4e18dcu: goto label_4e18dc;
        case 0x4e18f4u: goto label_4e18f4;
        default: break;
    }

    ctx->pc = 0x4e1780u;

    // 0x4e1780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e1784: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4e1784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4e1788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e178c: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4e178cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x4e1790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e1790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e1794: 0xc13867c  jal         func_4E19F0
    ctx->pc = 0x4E1794u;
    SET_GPR_U32(ctx, 31, 0x4E179Cu);
    ctx->pc = 0x4E1798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1794u;
            // 0x4e1798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E19F0u;
    if (runtime->hasFunction(0x4E19F0u)) {
        auto targetFn = runtime->lookupFunction(0x4E19F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E179Cu; }
        if (ctx->pc != 0x4E179Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E19F0_0x4e19f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E179Cu; }
        if (ctx->pc != 0x4E179Cu) { return; }
    }
    ctx->pc = 0x4E179Cu;
label_4e179c:
    // 0x4e179c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e179cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e17a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e17a4: 0x246335a0  addiu       $v1, $v1, 0x35A0
    ctx->pc = 0x4e17a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13728));
    // 0x4e17a8: 0x244235d8  addiu       $v0, $v0, 0x35D8
    ctx->pc = 0x4e17a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13784));
    // 0x4e17ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e17acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e17b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e17b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e17b4: 0xc138678  jal         func_4E19E0
    ctx->pc = 0x4E17B4u;
    SET_GPR_U32(ctx, 31, 0x4E17BCu);
    ctx->pc = 0x4E17B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E17B4u;
            // 0x4e17b8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E19E0u;
    if (runtime->hasFunction(0x4E19E0u)) {
        auto targetFn = runtime->lookupFunction(0x4E19E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E17BCu; }
        if (ctx->pc != 0x4E17BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E19E0_0x4e19e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E17BCu; }
        if (ctx->pc != 0x4E17BCu) { return; }
    }
    ctx->pc = 0x4E17BCu;
label_4e17bc:
    // 0x4e17bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4e17c0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x4e17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x4e17c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e17c8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4e17c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4e17cc: 0x244234f0  addiu       $v0, $v0, 0x34F0
    ctx->pc = 0x4e17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13552));
    // 0x4e17d0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4e17d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4e17d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e17d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e17dc: 0x24423528  addiu       $v0, $v0, 0x3528
    ctx->pc = 0x4e17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13608));
    // 0x4e17e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4e17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4e17e4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4e17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x4e17e8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4e17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x4e17ec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4e17ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4e17f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4e17f4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4e17f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x4e17f8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e17f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4e17fc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4E17FCu;
    SET_GPR_U32(ctx, 31, 0x4E1804u);
    ctx->pc = 0x4E1800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E17FCu;
            // 0x4e1800: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1804u; }
        if (ctx->pc != 0x4E1804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1804u; }
        if (ctx->pc != 0x4E1804u) { return; }
    }
    ctx->pc = 0x4E1804u;
label_4e1804:
    // 0x4e1804: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4e1804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4e1808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e1808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e180c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E180Cu;
    {
        const bool branch_taken_0x4e180c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E180Cu;
            // 0x4e1810: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e180c) {
            ctx->pc = 0x4E1824u;
            goto label_4e1824;
        }
    }
    ctx->pc = 0x4E1814u;
    // 0x4e1814: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4e1814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4e1818: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4E1818u;
    SET_GPR_U32(ctx, 31, 0x4E1820u);
    ctx->pc = 0x4E181Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1818u;
            // 0x4e181c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1820u; }
        if (ctx->pc != 0x4E1820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1820u; }
        if (ctx->pc != 0x4E1820u) { return; }
    }
    ctx->pc = 0x4E1820u;
label_4e1820:
    // 0x4e1820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e1820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e1824:
    // 0x4e1824: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4e1824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4e1828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e1828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e182c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e182cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e1834: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1834u;
            // 0x4e1838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E183Cu;
    // 0x4e183c: 0x0  nop
    ctx->pc = 0x4e183cu;
    // NOP
label_4e1840:
    // 0x4e1840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e1840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e1844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e1844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e1848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e1848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e184c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e1850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e1850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1854: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4E1854u;
    {
        const bool branch_taken_0x4e1854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1854u;
            // 0x4e1858: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1854) {
            ctx->pc = 0x4E18F4u;
            goto label_4e18f4;
        }
    }
    ctx->pc = 0x4E185Cu;
    // 0x4e185c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e185cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e1860: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e1860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e1864: 0x246335a0  addiu       $v1, $v1, 0x35A0
    ctx->pc = 0x4e1864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13728));
    // 0x4e1868: 0x244235d8  addiu       $v0, $v0, 0x35D8
    ctx->pc = 0x4e1868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13784));
    // 0x4e186c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e186cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1870: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4E1870u;
    {
        const bool branch_taken_0x4e1870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1870u;
            // 0x4e1874: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1870) {
            ctx->pc = 0x4E18DCu;
            goto label_4e18dc;
        }
    }
    ctx->pc = 0x4E1878u;
    // 0x4e1878: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e1878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e187c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e187cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e1880: 0x24633550  addiu       $v1, $v1, 0x3550
    ctx->pc = 0x4e1880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13648));
    // 0x4e1884: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e1884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x4e1888: 0x24423588  addiu       $v0, $v0, 0x3588
    ctx->pc = 0x4e1888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13704));
    // 0x4e188c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e188cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1890: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4e1890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4e1894: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4e1894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4e1898: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4E1898u;
    SET_GPR_U32(ctx, 31, 0x4E18A0u);
    ctx->pc = 0x4E189Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1898u;
            // 0x4e189c: 0x24a512c0  addiu       $a1, $a1, 0x12C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18A0u; }
        if (ctx->pc != 0x4E18A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18A0u; }
        if (ctx->pc != 0x4E18A0u) { return; }
    }
    ctx->pc = 0x4E18A0u;
label_4e18a0:
    // 0x4e18a0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4e18a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4e18a4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4E18A4u;
    SET_GPR_U32(ctx, 31, 0x4E18ACu);
    ctx->pc = 0x4E18A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E18A4u;
            // 0x4e18a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18ACu; }
        if (ctx->pc != 0x4E18ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18ACu; }
        if (ctx->pc != 0x4E18ACu) { return; }
    }
    ctx->pc = 0x4E18ACu;
label_4e18ac:
    // 0x4e18ac: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4e18acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4e18b0: 0xc13865c  jal         func_4E1970
    ctx->pc = 0x4E18B0u;
    SET_GPR_U32(ctx, 31, 0x4E18B8u);
    ctx->pc = 0x4E18B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E18B0u;
            // 0x4e18b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E1970u;
    if (runtime->hasFunction(0x4E1970u)) {
        auto targetFn = runtime->lookupFunction(0x4E1970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18B8u; }
        if (ctx->pc != 0x4E18B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E1970_0x4e1970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18B8u; }
        if (ctx->pc != 0x4E18B8u) { return; }
    }
    ctx->pc = 0x4E18B8u;
label_4e18b8:
    // 0x4e18b8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4e18b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4e18bc: 0xc13865c  jal         func_4E1970
    ctx->pc = 0x4E18BCu;
    SET_GPR_U32(ctx, 31, 0x4E18C4u);
    ctx->pc = 0x4E18C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E18BCu;
            // 0x4e18c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E1970u;
    if (runtime->hasFunction(0x4E1970u)) {
        auto targetFn = runtime->lookupFunction(0x4E1970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18C4u; }
        if (ctx->pc != 0x4E18C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E1970_0x4e1970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18C4u; }
        if (ctx->pc != 0x4E18C4u) { return; }
    }
    ctx->pc = 0x4E18C4u;
label_4e18c4:
    // 0x4e18c4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4e18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4e18c8: 0xc138644  jal         func_4E1910
    ctx->pc = 0x4E18C8u;
    SET_GPR_U32(ctx, 31, 0x4E18D0u);
    ctx->pc = 0x4E18CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E18C8u;
            // 0x4e18cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E1910u;
    if (runtime->hasFunction(0x4E1910u)) {
        auto targetFn = runtime->lookupFunction(0x4E1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18D0u; }
        if (ctx->pc != 0x4E18D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E1910_0x4e1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18D0u; }
        if (ctx->pc != 0x4E18D0u) { return; }
    }
    ctx->pc = 0x4E18D0u;
label_4e18d0:
    // 0x4e18d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e18d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e18d4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4E18D4u;
    SET_GPR_U32(ctx, 31, 0x4E18DCu);
    ctx->pc = 0x4E18D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E18D4u;
            // 0x4e18d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18DCu; }
        if (ctx->pc != 0x4E18DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18DCu; }
        if (ctx->pc != 0x4E18DCu) { return; }
    }
    ctx->pc = 0x4E18DCu;
label_4e18dc:
    // 0x4e18dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e18dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4e18e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e18e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4e18e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E18E4u;
    {
        const bool branch_taken_0x4e18e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e18e4) {
            ctx->pc = 0x4E18E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E18E4u;
            // 0x4e18e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E18F8u;
            goto label_4e18f8;
        }
    }
    ctx->pc = 0x4E18ECu;
    // 0x4e18ec: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4E18ECu;
    SET_GPR_U32(ctx, 31, 0x4E18F4u);
    ctx->pc = 0x4E18F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E18ECu;
            // 0x4e18f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18F4u; }
        if (ctx->pc != 0x4E18F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E18F4u; }
        if (ctx->pc != 0x4E18F4u) { return; }
    }
    ctx->pc = 0x4E18F4u;
label_4e18f4:
    // 0x4e18f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e18f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e18f8:
    // 0x4e18f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e18f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e18fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e18fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e1904: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1904u;
            // 0x4e1908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E190Cu;
    // 0x4e190c: 0x0  nop
    ctx->pc = 0x4e190cu;
    // NOP
}
