#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D17F0
// Address: 0x1d17f0 - 0x1d18f0
void sub_001D17F0_0x1d17f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D17F0_0x1d17f0");
#endif

    switch (ctx->pc) {
        case 0x1d1848u: goto label_1d1848;
        case 0x1d1874u: goto label_1d1874;
        case 0x1d1894u: goto label_1d1894;
        case 0x1d18acu: goto label_1d18ac;
        case 0x1d18b8u: goto label_1d18b8;
        default: break;
    }

    ctx->pc = 0x1d17f0u;

    // 0x1d17f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d17f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d17f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d17f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1d17f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d17f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d17fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d17fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d1800: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1d1800u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1804: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d1804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d1808: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1d1808u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d180c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d1810: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d1810u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1814: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d1814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d1818: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d1818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d181c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1820: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d1820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1828: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d1828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d182c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1830: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1d1830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1834: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1d1834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1838: 0x26a402bc  addiu       $a0, $s5, 0x2BC
    ctx->pc = 0x1d1838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 700));
    // 0x1d183c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d183cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1840: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1D1840u;
    SET_GPR_U32(ctx, 31, 0x1D1848u);
    ctx->pc = 0x1D1844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1840u;
            // 0x1d1844: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1848u; }
        if (ctx->pc != 0x1D1848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1848u; }
        if (ctx->pc != 0x1D1848u) { return; }
    }
    ctx->pc = 0x1D1848u;
label_1d1848:
    // 0x1d1848: 0xaea002dc  sw          $zero, 0x2DC($s5)
    ctx->pc = 0x1d1848u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 732), GPR_U32(ctx, 0));
    // 0x1d184c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1850: 0xaea202bc  sw          $v0, 0x2BC($s5)
    ctx->pc = 0x1d1850u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 700), GPR_U32(ctx, 2));
    // 0x1d1854: 0x26a402bc  addiu       $a0, $s5, 0x2BC
    ctx->pc = 0x1d1854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 700));
    // 0x1d1858: 0xaeb302c0  sw          $s3, 0x2C0($s5)
    ctx->pc = 0x1d1858u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 704), GPR_U32(ctx, 19));
    // 0x1d185c: 0xaeb202c4  sw          $s2, 0x2C4($s5)
    ctx->pc = 0x1d185cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 708), GPR_U32(ctx, 18));
    // 0x1d1860: 0xaeb102c8  sw          $s1, 0x2C8($s5)
    ctx->pc = 0x1d1860u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 712), GPR_U32(ctx, 17));
    // 0x1d1864: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1d1864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d1868: 0xaeb702cc  sw          $s7, 0x2CC($s5)
    ctx->pc = 0x1d1868u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 716), GPR_U32(ctx, 23));
    // 0x1d186c: 0xc065e42  jal         func_197908
    ctx->pc = 0x1D186Cu;
    SET_GPR_U32(ctx, 31, 0x1D1874u);
    ctx->pc = 0x1D1870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D186Cu;
            // 0x1d1870: 0xaea202d0  sw          $v0, 0x2D0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197908u;
    if (runtime->hasFunction(0x197908u)) {
        auto targetFn = runtime->lookupFunction(0x197908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1874u; }
        if (ctx->pc != 0x1D1874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197908_0x197908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1874u; }
        if (ctx->pc != 0x1D1874u) { return; }
    }
    ctx->pc = 0x1D1874u;
label_1d1874:
    // 0x1d1874: 0xaea202d8  sw          $v0, 0x2D8($s5)
    ctx->pc = 0x1d1874u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 728), GPR_U32(ctx, 2));
    // 0x1d1878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d187c: 0x16c20007  bne         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D187Cu;
    {
        const bool branch_taken_0x1d187c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D187Cu;
            // 0x1d1880: 0xaeb001a0  sw          $s0, 0x1A0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 416), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d187c) {
            ctx->pc = 0x1D189Cu;
            goto label_1d189c;
        }
    }
    ctx->pc = 0x1D1884u;
    // 0x1d1884: 0x8ea502d8  lw          $a1, 0x2D8($s5)
    ctx->pc = 0x1d1884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
    // 0x1d1888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d188c: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x1D188Cu;
    SET_GPR_U32(ctx, 31, 0x1D1894u);
    ctx->pc = 0x1D1890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D188Cu;
            // 0x1d1890: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1894u; }
        if (ctx->pc != 0x1D1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1894u; }
        if (ctx->pc != 0x1D1894u) { return; }
    }
    ctx->pc = 0x1D1894u;
label_1d1894:
    // 0x1d1894: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1894u;
    {
        const bool branch_taken_0x1d1894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1894u;
            // 0x1d1898: 0xaea202d4  sw          $v0, 0x2D4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1894) {
            ctx->pc = 0x1D18B0u;
            goto label_1d18b0;
        }
    }
    ctx->pc = 0x1D189Cu;
label_1d189c:
    // 0x1d189c: 0x8ea502d8  lw          $a1, 0x2D8($s5)
    ctx->pc = 0x1d189cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
    // 0x1d18a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d18a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18a4: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D18A4u;
    SET_GPR_U32(ctx, 31, 0x1D18ACu);
    ctx->pc = 0x1D18A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18A4u;
            // 0x1d18a8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18ACu; }
        if (ctx->pc != 0x1D18ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18ACu; }
        if (ctx->pc != 0x1D18ACu) { return; }
    }
    ctx->pc = 0x1D18ACu;
label_1d18ac:
    // 0x1d18ac: 0xaea202d4  sw          $v0, 0x2D4($s5)
    ctx->pc = 0x1d18acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 724), GPR_U32(ctx, 2));
label_1d18b0:
    // 0x1d18b0: 0xc06623a  jal         func_1988E8
    ctx->pc = 0x1D18B0u;
    SET_GPR_U32(ctx, 31, 0x1D18B8u);
    ctx->pc = 0x1D18B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18B0u;
            // 0x1d18b4: 0x26a402bc  addiu       $a0, $s5, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1988E8u;
    if (runtime->hasFunction(0x1988E8u)) {
        auto targetFn = runtime->lookupFunction(0x1988E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18B8u; }
        if (ctx->pc != 0x1D18B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001988E8_0x1988e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18B8u; }
        if (ctx->pc != 0x1D18B8u) { return; }
    }
    ctx->pc = 0x1D18B8u;
label_1d18b8:
    // 0x1d18b8: 0xaea2019c  sw          $v0, 0x19C($s5)
    ctx->pc = 0x1d18b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 412), GPR_U32(ctx, 2));
    // 0x1d18bc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d18bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d18c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d18c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d18c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d18c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d18c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d18c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d18cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d18ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d18d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d18d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d18d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d18d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d18d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d18d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d18dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d18dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d18e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D18E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D18E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18E0u;
            // 0x1d18e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D18E8u;
    // 0x1d18e8: 0x0  nop
    ctx->pc = 0x1d18e8u;
    // NOP
    // 0x1d18ec: 0x0  nop
    ctx->pc = 0x1d18ecu;
    // NOP
}
