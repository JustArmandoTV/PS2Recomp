#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E17B0
// Address: 0x3e17b0 - 0x3e1910
void sub_003E17B0_0x3e17b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E17B0_0x3e17b0");
#endif

    switch (ctx->pc) {
        case 0x3e17e8u: goto label_3e17e8;
        case 0x3e1830u: goto label_3e1830;
        case 0x3e1854u: goto label_3e1854;
        case 0x3e185cu: goto label_3e185c;
        default: break;
    }

    ctx->pc = 0x3e17b0u;

    // 0x3e17b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e17b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e17b4: 0x3c0900af  lui         $t1, 0xAF
    ctx->pc = 0x3e17b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)175 << 16));
    // 0x3e17b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e17b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e17bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e17c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e17c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e17c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e17c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e17c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e17c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e17cc: 0x25290e80  addiu       $t1, $t1, 0xE80
    ctx->pc = 0x3e17ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3712));
    // 0x3e17d0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3e17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3e17d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e17d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e17d8: 0x8c48077c  lw          $t0, 0x77C($v0)
    ctx->pc = 0x3e17d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
    // 0x3e17dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e17dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e17e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e17e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e17e4: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x3e17e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3e17e8:
    // 0x3e17e8: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x3e17e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3e17ec: 0x8ce20db0  lw          $v0, 0xDB0($a3)
    ctx->pc = 0x3e17ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3504)));
    // 0x3e17f0: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E17F0u;
    {
        const bool branch_taken_0x3e17f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x3e17f0) {
            ctx->pc = 0x3E1810u;
            goto label_3e1810;
        }
    }
    ctx->pc = 0x3E17F8u;
    // 0x3e17f8: 0x8ce20a68  lw          $v0, 0xA68($a3)
    ctx->pc = 0x3e17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2664)));
    // 0x3e17fc: 0x24e50a50  addiu       $a1, $a3, 0xA50
    ctx->pc = 0x3e17fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 2640));
    // 0x3e1800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e1800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e1804: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3e1804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3e1808: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3e1808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3e180c: 0xa04401bc  sb          $a0, 0x1BC($v0)
    ctx->pc = 0x3e180cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 444), (uint8_t)GPR_U32(ctx, 4));
label_3e1810:
    // 0x3e1810: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3e1810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3e1814: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x3e1814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3e1818: 0xace30a70  sw          $v1, 0xA70($a3)
    ctx->pc = 0x3e1818u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2672), GPR_U32(ctx, 3));
    // 0x3e181c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3E181Cu;
    {
        const bool branch_taken_0x3e181c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E181Cu;
            // 0x3e1820: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e181c) {
            ctx->pc = 0x3E17E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e17e8;
        }
    }
    ctx->pc = 0x3E1824u;
    // 0x3e1824: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e1824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e1828: 0xc109d50  jal         func_427540
    ctx->pc = 0x3E1828u;
    SET_GPR_U32(ctx, 31, 0x3E1830u);
    ctx->pc = 0x3E182Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1828u;
            // 0x3e182c: 0x8c446ec8  lw          $a0, 0x6EC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x427540u;
    if (runtime->hasFunction(0x427540u)) {
        auto targetFn = runtime->lookupFunction(0x427540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1830u; }
        if (ctx->pc != 0x3E1830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00427540_0x427540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1830u; }
        if (ctx->pc != 0x3E1830u) { return; }
    }
    ctx->pc = 0x3E1830u;
label_3e1830:
    // 0x3e1830: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e1830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e1834: 0x8c4264c0  lw          $v0, 0x64C0($v0)
    ctx->pc = 0x3e1834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25792)));
    // 0x3e1838: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E1838u;
    {
        const bool branch_taken_0x3e1838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1838) {
            ctx->pc = 0x3E1844u;
            goto label_3e1844;
        }
    }
    ctx->pc = 0x3E1840u;
    // 0x3e1840: 0xa0400091  sb          $zero, 0x91($v0)
    ctx->pc = 0x3e1840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 145), (uint8_t)GPR_U32(ctx, 0));
label_3e1844:
    // 0x3e1844: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e1844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e1848: 0x8c516ec0  lw          $s1, 0x6EC0($v0)
    ctx->pc = 0x3e1848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28352)));
    // 0x3e184c: 0xc10e6ec  jal         func_439BB0
    ctx->pc = 0x3E184Cu;
    SET_GPR_U32(ctx, 31, 0x3E1854u);
    ctx->pc = 0x3E1850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E184Cu;
            // 0x3e1850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439BB0u;
    if (runtime->hasFunction(0x439BB0u)) {
        auto targetFn = runtime->lookupFunction(0x439BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1854u; }
        if (ctx->pc != 0x3E1854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439BB0_0x439bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1854u; }
        if (ctx->pc != 0x3E1854u) { return; }
    }
    ctx->pc = 0x3E1854u;
label_3e1854:
    // 0x3e1854: 0xc10e6ac  jal         func_439AB0
    ctx->pc = 0x3E1854u;
    SET_GPR_U32(ctx, 31, 0x3E185Cu);
    ctx->pc = 0x3E1858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1854u;
            // 0x3e1858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439AB0u;
    if (runtime->hasFunction(0x439AB0u)) {
        auto targetFn = runtime->lookupFunction(0x439AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E185Cu; }
        if (ctx->pc != 0x3E185Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439AB0_0x439ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E185Cu; }
        if (ctx->pc != 0x3E185Cu) { return; }
    }
    ctx->pc = 0x3E185Cu;
label_3e185c:
    // 0x3e185c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x3e185cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x3e1860: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e1860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e1864: 0xae04027c  sw          $a0, 0x27C($s0)
    ctx->pc = 0x3e1864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 4));
    // 0x3e1868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e1868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e186c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3e186cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x3e1870: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e1870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e1874: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3e1874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3e1878: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e1878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e187c: 0xa0850c75  sb          $a1, 0xC75($a0)
    ctx->pc = 0x3e187cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3189), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e1880: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e1880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3e1884: 0x8c630788  lw          $v1, 0x788($v1)
    ctx->pc = 0x3e1884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
    // 0x3e1888: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x3e1888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e188c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E188Cu;
    {
        const bool branch_taken_0x3e188c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e188c) {
            ctx->pc = 0x3E18A0u;
            goto label_3e18a0;
        }
    }
    ctx->pc = 0x3E1894u;
    // 0x3e1894: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e1894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e1898: 0x8c630ea4  lw          $v1, 0xEA4($v1)
    ctx->pc = 0x3e1898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
    // 0x3e189c: 0xa065014c  sb          $a1, 0x14C($v1)
    ctx->pc = 0x3e189cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 332), (uint8_t)GPR_U32(ctx, 5));
label_3e18a0:
    // 0x3e18a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3e18a4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3e18a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e18a8: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3e18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x3e18ac: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3e18acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x3e18b0: 0x54640011  bnel        $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E18B0u;
    {
        const bool branch_taken_0x3e18b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e18b0) {
            ctx->pc = 0x3E18B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E18B0u;
            // 0x3e18b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E18F8u;
            goto label_3e18f8;
        }
    }
    ctx->pc = 0x3E18B8u;
    // 0x3e18b8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e18bc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3e18bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e18c0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3e18c4: 0x8c630cc4  lw          $v1, 0xCC4($v1)
    ctx->pc = 0x3e18c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3268)));
    // 0x3e18c8: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E18C8u;
    {
        const bool branch_taken_0x3e18c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e18c8) {
            ctx->pc = 0x3E18F4u;
            goto label_3e18f4;
        }
    }
    ctx->pc = 0x3E18D0u;
    // 0x3e18d0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3e18d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3e18d4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E18D4u;
    {
        const bool branch_taken_0x3e18d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e18d4) {
            ctx->pc = 0x3E18D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E18D4u;
            // 0x3e18d8: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E18E8u;
            goto label_3e18e8;
        }
    }
    ctx->pc = 0x3E18DCu;
    // 0x3e18dc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3e18dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3e18e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E18E0u;
    {
        const bool branch_taken_0x3e18e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E18E0u;
            // 0x3e18e4: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18e0) {
            ctx->pc = 0x3E18ECu;
            goto label_3e18ec;
        }
    }
    ctx->pc = 0x3E18E8u;
label_3e18e8:
    // 0x3e18e8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3e18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_3e18ec:
    // 0x3e18ec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3e18ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3e18f0: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x3e18f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_3e18f4:
    // 0x3e18f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e18f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e18f8:
    // 0x3e18f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e18f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e18fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e18fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1900: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1900u;
            // 0x3e1904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E1908u;
    // 0x3e1908: 0x0  nop
    ctx->pc = 0x3e1908u;
    // NOP
    // 0x3e190c: 0x0  nop
    ctx->pc = 0x3e190cu;
    // NOP
}
