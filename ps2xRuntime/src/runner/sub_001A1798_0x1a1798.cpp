#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1798
// Address: 0x1a1798 - 0x1a1880
void sub_001A1798_0x1a1798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1798_0x1a1798");
#endif

    switch (ctx->pc) {
        case 0x1a17a8u: goto label_1a17a8;
        case 0x1a17d8u: goto label_1a17d8;
        case 0x1a1814u: goto label_1a1814;
        case 0x1a186cu: goto label_1a186c;
        default: break;
    }

    ctx->pc = 0x1a1798u;

    // 0x1a1798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a179c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a17a0: 0xc062274  jal         func_1889D0
    ctx->pc = 0x1A17A0u;
    SET_GPR_U32(ctx, 31, 0x1A17A8u);
    ctx->pc = 0x1889D0u;
    if (runtime->hasFunction(0x1889D0u)) {
        auto targetFn = runtime->lookupFunction(0x1889D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17A8u; }
        if (ctx->pc != 0x1A17A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001889D0_0x1889d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17A8u; }
        if (ctx->pc != 0x1A17A8u) { return; }
    }
    ctx->pc = 0x1A17A8u;
label_1a17a8:
    // 0x1a17a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a17a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a17ac: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1a17acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1a17b0: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1a17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1a17b4: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1a17b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1a17b8: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1a17b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1a17bc: 0xac40be80  sw          $zero, -0x4180($v0)
    ctx->pc = 0x1a17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 0));
    // 0x1a17c0: 0xac60be84  sw          $zero, -0x417C($v1)
    ctx->pc = 0x1a17c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950532), GPR_U32(ctx, 0));
    // 0x1a17c4: 0xac80be88  sw          $zero, -0x4178($a0)
    ctx->pc = 0x1a17c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950536), GPR_U32(ctx, 0));
    // 0x1a17c8: 0xaca0be8c  sw          $zero, -0x4174($a1)
    ctx->pc = 0x1a17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950540), GPR_U32(ctx, 0));
    // 0x1a17cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A17CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A17D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17CCu;
            // 0x1a17d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A17D4u;
    // 0x1a17d4: 0x0  nop
    ctx->pc = 0x1a17d4u;
    // NOP
label_1a17d8:
    // 0x1a17d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a17d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a17dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a17dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a17e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a17e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a17e4: 0x8062284  j           func_188A10
    ctx->pc = 0x1A17E4u;
    ctx->pc = 0x1A17E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17E4u;
            // 0x1a17e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188A10u;
    if (runtime->hasFunction(0x188A10u)) {
        auto targetFn = runtime->lookupFunction(0x188A10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188A10_0x188a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A17ECu;
    // 0x1a17ec: 0x0  nop
    ctx->pc = 0x1a17ecu;
    // NOP
    // 0x1a17f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a17f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a17f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a17f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a17fc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1a17fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1800: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1804: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a180c: 0xc062094  jal         func_188250
    ctx->pc = 0x1A180Cu;
    SET_GPR_U32(ctx, 31, 0x1A1814u);
    ctx->pc = 0x1A1810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A180Cu;
            // 0x1a1810: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188250u;
    if (runtime->hasFunction(0x188250u)) {
        auto targetFn = runtime->lookupFunction(0x188250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1814u; }
        if (ctx->pc != 0x1A1814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188250_0x188250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1814u; }
        if (ctx->pc != 0x1A1814u) { return; }
    }
    ctx->pc = 0x1A1814u;
label_1a1814:
    // 0x1a1814: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1a1814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1a1818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a181c: 0xac62be80  sw          $v0, -0x4180($v1)
    ctx->pc = 0x1a181cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950528), GPR_U32(ctx, 2));
    // 0x1a1820: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1820u;
            // 0x1a1824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1828u;
    // 0x1a1828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a182c: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1a182cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1a1830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1834: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1838: 0x8c45be80  lw          $a1, -0x4180($v0)
    ctx->pc = 0x1a1838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    // 0x1a183c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a183cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1840: 0x80620de  j           func_188378
    ctx->pc = 0x1A1840u;
    ctx->pc = 0x1A1844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1840u;
            // 0x1a1844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188378u;
    if (runtime->hasFunction(0x188378u)) {
        auto targetFn = runtime->lookupFunction(0x188378u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188378_0x188378(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A1848u;
    // 0x1a1848: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a1848u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a184c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a184cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1854: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1a1854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1858: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a1858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a185c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a185cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1864: 0xc062094  jal         func_188250
    ctx->pc = 0x1A1864u;
    SET_GPR_U32(ctx, 31, 0x1A186Cu);
    ctx->pc = 0x1A1868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1864u;
            // 0x1a1868: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188250u;
    if (runtime->hasFunction(0x188250u)) {
        auto targetFn = runtime->lookupFunction(0x188250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A186Cu; }
        if (ctx->pc != 0x1A186Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188250_0x188250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A186Cu; }
        if (ctx->pc != 0x1A186Cu) { return; }
    }
    ctx->pc = 0x1A186Cu;
label_1a186c:
    // 0x1a186c: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1a186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1a1870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1874: 0xac62be84  sw          $v0, -0x417C($v1)
    ctx->pc = 0x1a1874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950532), GPR_U32(ctx, 2));
    // 0x1a1878: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A187Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1878u;
            // 0x1a187c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1880u;
}
