#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F17E0
// Address: 0x1f17e0 - 0x1f1900
void sub_001F17E0_0x1f17e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F17E0_0x1f17e0");
#endif

    switch (ctx->pc) {
        case 0x1f17e0u: goto label_1f17e0;
        case 0x1f17e4u: goto label_1f17e4;
        case 0x1f17e8u: goto label_1f17e8;
        case 0x1f17ecu: goto label_1f17ec;
        case 0x1f17f0u: goto label_1f17f0;
        case 0x1f17f4u: goto label_1f17f4;
        case 0x1f17f8u: goto label_1f17f8;
        case 0x1f17fcu: goto label_1f17fc;
        case 0x1f1800u: goto label_1f1800;
        case 0x1f1804u: goto label_1f1804;
        case 0x1f1808u: goto label_1f1808;
        case 0x1f180cu: goto label_1f180c;
        case 0x1f1810u: goto label_1f1810;
        case 0x1f1814u: goto label_1f1814;
        case 0x1f1818u: goto label_1f1818;
        case 0x1f181cu: goto label_1f181c;
        case 0x1f1820u: goto label_1f1820;
        case 0x1f1824u: goto label_1f1824;
        case 0x1f1828u: goto label_1f1828;
        case 0x1f182cu: goto label_1f182c;
        case 0x1f1830u: goto label_1f1830;
        case 0x1f1834u: goto label_1f1834;
        case 0x1f1838u: goto label_1f1838;
        case 0x1f183cu: goto label_1f183c;
        case 0x1f1840u: goto label_1f1840;
        case 0x1f1844u: goto label_1f1844;
        case 0x1f1848u: goto label_1f1848;
        case 0x1f184cu: goto label_1f184c;
        case 0x1f1850u: goto label_1f1850;
        case 0x1f1854u: goto label_1f1854;
        case 0x1f1858u: goto label_1f1858;
        case 0x1f185cu: goto label_1f185c;
        case 0x1f1860u: goto label_1f1860;
        case 0x1f1864u: goto label_1f1864;
        case 0x1f1868u: goto label_1f1868;
        case 0x1f186cu: goto label_1f186c;
        case 0x1f1870u: goto label_1f1870;
        case 0x1f1874u: goto label_1f1874;
        case 0x1f1878u: goto label_1f1878;
        case 0x1f187cu: goto label_1f187c;
        case 0x1f1880u: goto label_1f1880;
        case 0x1f1884u: goto label_1f1884;
        case 0x1f1888u: goto label_1f1888;
        case 0x1f188cu: goto label_1f188c;
        case 0x1f1890u: goto label_1f1890;
        case 0x1f1894u: goto label_1f1894;
        case 0x1f1898u: goto label_1f1898;
        case 0x1f189cu: goto label_1f189c;
        case 0x1f18a0u: goto label_1f18a0;
        case 0x1f18a4u: goto label_1f18a4;
        case 0x1f18a8u: goto label_1f18a8;
        case 0x1f18acu: goto label_1f18ac;
        case 0x1f18b0u: goto label_1f18b0;
        case 0x1f18b4u: goto label_1f18b4;
        case 0x1f18b8u: goto label_1f18b8;
        case 0x1f18bcu: goto label_1f18bc;
        case 0x1f18c0u: goto label_1f18c0;
        case 0x1f18c4u: goto label_1f18c4;
        case 0x1f18c8u: goto label_1f18c8;
        case 0x1f18ccu: goto label_1f18cc;
        case 0x1f18d0u: goto label_1f18d0;
        case 0x1f18d4u: goto label_1f18d4;
        case 0x1f18d8u: goto label_1f18d8;
        case 0x1f18dcu: goto label_1f18dc;
        case 0x1f18e0u: goto label_1f18e0;
        case 0x1f18e4u: goto label_1f18e4;
        case 0x1f18e8u: goto label_1f18e8;
        case 0x1f18ecu: goto label_1f18ec;
        case 0x1f18f0u: goto label_1f18f0;
        case 0x1f18f4u: goto label_1f18f4;
        case 0x1f18f8u: goto label_1f18f8;
        case 0x1f18fcu: goto label_1f18fc;
        default: break;
    }

    ctx->pc = 0x1f17e0u;

label_1f17e0:
    // 0x1f17e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f17e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f17e4:
    // 0x1f17e4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f17e8:
    // 0x1f17e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f17e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f17ec:
    // 0x1f17ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f17ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f17f0:
    // 0x1f17f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f17f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f17f4:
    // 0x1f17f4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f17f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f17f8:
    // 0x1f17f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f17f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f17fc:
    // 0x1f17fc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f1800:
    // 0x1f1800: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f1800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f1804:
    // 0x1f1804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1808:
    // 0x1f1808: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f1808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f180c:
    // 0x1f180c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f180cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1f1810:
    // 0x1f1810: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f1810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f1814:
    // 0x1f1814: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x1f1814u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_1f1818:
    // 0x1f1818: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f1818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f181c:
    // 0x1f181c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f181cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1820:
    // 0x1f1820: 0x24a5da60  addiu       $a1, $a1, -0x25A0
    ctx->pc = 0x1f1820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957664));
label_1f1824:
    // 0x1f1824: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1f1824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
label_1f1828:
    // 0x1f1828: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f1828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1f182c:
    // 0x1f182c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f182cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1f1830:
    // 0x1f1830: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f1830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1f1834:
    // 0x1f1834: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1f1834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1f1838:
    // 0x1f1838: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1f1838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_1f183c:
    // 0x1f183c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1f183cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1f1840:
    // 0x1f1840: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f1840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f1844:
    // 0x1f1844: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1f1844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1f1848:
    // 0x1f1848: 0xc0917e8  jal         func_245FA0
label_1f184c:
    if (ctx->pc == 0x1F184Cu) {
        ctx->pc = 0x1F184Cu;
            // 0x1f184c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1850u;
        goto label_1f1850;
    }
    ctx->pc = 0x1F1848u;
    SET_GPR_U32(ctx, 31, 0x1F1850u);
    ctx->pc = 0x1F184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1848u;
            // 0x1f184c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245FA0u;
    if (runtime->hasFunction(0x245FA0u)) {
        auto targetFn = runtime->lookupFunction(0x245FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1850u; }
        if (ctx->pc != 0x1F1850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245FA0_0x245fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1850u; }
        if (ctx->pc != 0x1F1850u) { return; }
    }
    ctx->pc = 0x1F1850u;
label_1f1850:
    // 0x1f1850: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f1850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1854:
    // 0x1f1854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1858:
    // 0x1f1858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f185c:
    // 0x1f185c: 0x3e00008  jr          $ra
label_1f1860:
    if (ctx->pc == 0x1F1860u) {
        ctx->pc = 0x1F1860u;
            // 0x1f1860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F1864u;
        goto label_1f1864;
    }
    ctx->pc = 0x1F185Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F185Cu;
            // 0x1f1860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1864u;
label_1f1864:
    // 0x1f1864: 0x0  nop
    ctx->pc = 0x1f1864u;
    // NOP
label_1f1868:
    // 0x1f1868: 0x0  nop
    ctx->pc = 0x1f1868u;
    // NOP
label_1f186c:
    // 0x1f186c: 0x0  nop
    ctx->pc = 0x1f186cu;
    // NOP
label_1f1870:
    // 0x1f1870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f1874:
    // 0x1f1874: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f1874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f1878:
    // 0x1f1878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f187c:
    // 0x1f187c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f1880:
    // 0x1f1880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1884:
    // 0x1f1884: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1f1884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1888:
    // 0x1f1888: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1f1888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f188c:
    // 0x1f188c: 0xc091680  jal         func_245A00
label_1f1890:
    if (ctx->pc == 0x1F1890u) {
        ctx->pc = 0x1F1890u;
            // 0x1f1890: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1F1894u;
        goto label_1f1894;
    }
    ctx->pc = 0x1F188Cu;
    SET_GPR_U32(ctx, 31, 0x1F1894u);
    ctx->pc = 0x1F1890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F188Cu;
            // 0x1f1890: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245A00u;
    if (runtime->hasFunction(0x245A00u)) {
        auto targetFn = runtime->lookupFunction(0x245A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1894u; }
        if (ctx->pc != 0x1F1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245A00_0x245a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1894u; }
        if (ctx->pc != 0x1F1894u) { return; }
    }
    ctx->pc = 0x1F1894u;
label_1f1894:
    // 0x1f1894: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1f1898:
    if (ctx->pc == 0x1F1898u) {
        ctx->pc = 0x1F1898u;
            // 0x1f1898: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1F189Cu;
        goto label_1f189c;
    }
    ctx->pc = 0x1F1894u;
    {
        const bool branch_taken_0x1f1894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1894) {
            ctx->pc = 0x1F1898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1894u;
            // 0x1f1898: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F18B4u;
            goto label_1f18b4;
        }
    }
    ctx->pc = 0x1F189Cu;
label_1f189c:
    // 0x1f189c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1f189cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f18a0:
    // 0x1f18a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f18a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f18a4:
    // 0x1f18a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f18a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f18a8:
    // 0x1f18a8: 0x320f809  jalr        $t9
label_1f18ac:
    if (ctx->pc == 0x1F18ACu) {
        ctx->pc = 0x1F18ACu;
            // 0x1f18ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F18B0u;
        goto label_1f18b0;
    }
    ctx->pc = 0x1F18A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F18B0u);
        ctx->pc = 0x1F18ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18A8u;
            // 0x1f18ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F18B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F18B0u; }
            if (ctx->pc != 0x1F18B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F18B0u;
label_1f18b0:
    // 0x1f18b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f18b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f18b4:
    // 0x1f18b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f18b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f18b8:
    // 0x1f18b8: 0x3e00008  jr          $ra
label_1f18bc:
    if (ctx->pc == 0x1F18BCu) {
        ctx->pc = 0x1F18BCu;
            // 0x1f18bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F18C0u;
        goto label_1f18c0;
    }
    ctx->pc = 0x1F18B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F18BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18B8u;
            // 0x1f18bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F18C0u;
label_1f18c0:
    // 0x1f18c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f18c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f18c4:
    // 0x1f18c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f18c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f18c8:
    // 0x1f18c8: 0xc091720  jal         func_245C80
label_1f18cc:
    if (ctx->pc == 0x1F18CCu) {
        ctx->pc = 0x1F18CCu;
            // 0x1f18cc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x1F18D0u;
        goto label_1f18d0;
    }
    ctx->pc = 0x1F18C8u;
    SET_GPR_U32(ctx, 31, 0x1F18D0u);
    ctx->pc = 0x1F18CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18C8u;
            // 0x1f18cc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245C80u;
    if (runtime->hasFunction(0x245C80u)) {
        auto targetFn = runtime->lookupFunction(0x245C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18D0u; }
        if (ctx->pc != 0x1F18D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245C80_0x245c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18D0u; }
        if (ctx->pc != 0x1F18D0u) { return; }
    }
    ctx->pc = 0x1F18D0u;
label_1f18d0:
    // 0x1f18d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f18d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f18d4:
    // 0x1f18d4: 0x3e00008  jr          $ra
label_1f18d8:
    if (ctx->pc == 0x1F18D8u) {
        ctx->pc = 0x1F18D8u;
            // 0x1f18d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F18DCu;
        goto label_1f18dc;
    }
    ctx->pc = 0x1F18D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F18D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18D4u;
            // 0x1f18d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F18DCu;
label_1f18dc:
    // 0x1f18dc: 0x0  nop
    ctx->pc = 0x1f18dcu;
    // NOP
label_1f18e0:
    // 0x1f18e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f18e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f18e4:
    // 0x1f18e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f18e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f18e8:
    // 0x1f18e8: 0xc091780  jal         func_245E00
label_1f18ec:
    if (ctx->pc == 0x1F18ECu) {
        ctx->pc = 0x1F18ECu;
            // 0x1f18ec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x1F18F0u;
        goto label_1f18f0;
    }
    ctx->pc = 0x1F18E8u;
    SET_GPR_U32(ctx, 31, 0x1F18F0u);
    ctx->pc = 0x1F18ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18E8u;
            // 0x1f18ec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245E00u;
    if (runtime->hasFunction(0x245E00u)) {
        auto targetFn = runtime->lookupFunction(0x245E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18F0u; }
        if (ctx->pc != 0x1F18F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245E00_0x245e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18F0u; }
        if (ctx->pc != 0x1F18F0u) { return; }
    }
    ctx->pc = 0x1F18F0u;
label_1f18f0:
    // 0x1f18f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f18f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f18f4:
    // 0x1f18f4: 0x3e00008  jr          $ra
label_1f18f8:
    if (ctx->pc == 0x1F18F8u) {
        ctx->pc = 0x1F18F8u;
            // 0x1f18f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F18FCu;
        goto label_1f18fc;
    }
    ctx->pc = 0x1F18F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F18F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18F4u;
            // 0x1f18f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F18FCu;
label_1f18fc:
    // 0x1f18fc: 0x0  nop
    ctx->pc = 0x1f18fcu;
    // NOP
}
