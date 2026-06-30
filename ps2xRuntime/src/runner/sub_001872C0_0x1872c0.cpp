#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001872C0
// Address: 0x1872c0 - 0x187438
void sub_001872C0_0x1872c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001872C0_0x1872c0");
#endif

    switch (ctx->pc) {
        case 0x187308u: goto label_187308;
        case 0x187318u: goto label_187318;
        case 0x187328u: goto label_187328;
        case 0x18734cu: goto label_18734c;
        case 0x187364u: goto label_187364;
        case 0x1873d0u: goto label_1873d0;
        case 0x187424u: goto label_187424;
        default: break;
    }

    ctx->pc = 0x1872c0u;

    // 0x1872c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1872c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1872c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1872c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1872c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1872c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1872ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1872d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1872d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1872d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1872d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1872d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1872dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1872dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1872e0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1872e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1872e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1872e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1872e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1872ec: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1872ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1872f0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1872f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1872f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1872f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1872f8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1872f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1872fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1872fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187300: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x187300u;
    {
        const bool branch_taken_0x187300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187300u;
            // 0x187304: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187300) {
            ctx->pc = 0x187330u;
            goto label_187330;
        }
    }
    ctx->pc = 0x187308u;
label_187308:
    // 0x187308: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x187308u;
    {
        const bool branch_taken_0x187308 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x187308) {
            ctx->pc = 0x187320u;
            goto label_187320;
        }
    }
    ctx->pc = 0x187310u;
    // 0x187310: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x187310u;
    SET_GPR_U32(ctx, 31, 0x187318u);
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187318u; }
        if (ctx->pc != 0x187318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187318u; }
        if (ctx->pc != 0x187318u) { return; }
    }
    ctx->pc = 0x187318u;
label_187318:
    // 0x187318: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x187318u;
    {
        const bool branch_taken_0x187318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187318) {
            ctx->pc = 0x18731Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187318u;
            // 0x18731c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187370u;
            goto label_187370;
        }
    }
    ctx->pc = 0x187320u;
label_187320:
    // 0x187320: 0xc061c5e  jal         func_187178
    ctx->pc = 0x187320u;
    SET_GPR_U32(ctx, 31, 0x187328u);
    ctx->pc = 0x187324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187320u;
            // 0x187324: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187178u;
    if (runtime->hasFunction(0x187178u)) {
        auto targetFn = runtime->lookupFunction(0x187178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187328u; }
        if (ctx->pc != 0x187328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187178_0x187178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187328u; }
        if (ctx->pc != 0x187328u) { return; }
    }
    ctx->pc = 0x187328u;
label_187328:
    // 0x187328: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18732c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x18732cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_187330:
    // 0x187330: 0x214882b  sltu        $s1, $s0, $s4
    ctx->pc = 0x187330u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x187334: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x187334u;
    {
        const bool branch_taken_0x187334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187334u;
            // 0x187338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187334) {
            ctx->pc = 0x187368u;
            goto label_187368;
        }
    }
    ctx->pc = 0x18733Cu;
    // 0x18733c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187340: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x187340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187344: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x187344u;
    SET_GPR_U32(ctx, 31, 0x18734Cu);
    ctx->pc = 0x187348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187344u;
            // 0x187348: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18734Cu; }
        if (ctx->pc != 0x18734Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18734Cu; }
        if (ctx->pc != 0x18734Cu) { return; }
    }
    ctx->pc = 0x18734Cu;
label_18734c:
    // 0x18734c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18734cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187350: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187354: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x187354u;
    {
        const bool branch_taken_0x187354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187354u;
            // 0x187358: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187354) {
            ctx->pc = 0x187308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_187308;
        }
    }
    ctx->pc = 0x18735Cu;
    // 0x18735c: 0xc061ca2  jal         func_187288
    ctx->pc = 0x18735Cu;
    SET_GPR_U32(ctx, 31, 0x187364u);
    ctx->pc = 0x187360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18735Cu;
            // 0x187360: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187288u;
    if (runtime->hasFunction(0x187288u)) {
        auto targetFn = runtime->lookupFunction(0x187288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187364u; }
        if (ctx->pc != 0x187364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187288_0x187288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187364u; }
        if (ctx->pc != 0x187364u) { return; }
    }
    ctx->pc = 0x187364u;
label_187364:
    // 0x187364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187368:
    // 0x187368: 0x211100b  movn        $v0, $s0, $s1
    ctx->pc = 0x187368u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x18736c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18736cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187370:
    // 0x187370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187374: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187378: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x187378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18737c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18737cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187380: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x187380u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x187384: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x187384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187388: 0x3e00008  jr          $ra
    ctx->pc = 0x187388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187388u;
            // 0x18738c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187390u;
    // 0x187390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187394: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x187394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x187398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18739c: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x18739cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x1873a0: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x1873a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
    // 0x1873a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1873a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1873a8: 0x2610fa80  addiu       $s0, $s0, -0x580
    ctx->pc = 0x1873a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965888));
    // 0x1873ac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1873acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1873b0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1873b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1873b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1873b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873b8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1873b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1873bc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1873bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1873c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1873c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873c4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1873c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1873c8: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x1873C8u;
    SET_GPR_U32(ctx, 31, 0x1873D0u);
    ctx->pc = 0x1873CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1873C8u;
            // 0x1873cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1873D0u; }
        if (ctx->pc != 0x1873D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1873D0u; }
        if (ctx->pc != 0x1873D0u) { return; }
    }
    ctx->pc = 0x1873D0u;
label_1873d0:
    // 0x1873d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1873d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1873d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1873d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1873d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1873d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1873dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1873DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1873DCu;
            // 0x1873e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1873E4u;
    // 0x1873e4: 0x0  nop
    ctx->pc = 0x1873e4u;
    // NOP
    // 0x1873e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1873e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1873ec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1873ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1873f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1873f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1873f4: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x1873f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x1873f8: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x1873f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
    // 0x1873fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1873fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x187400: 0x2610fa80  addiu       $s0, $s0, -0x580
    ctx->pc = 0x187400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965888));
    // 0x187404: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x187404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x187408: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x187408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x18740c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18740cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187410: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x187410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187414: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x187414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x187418: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x187418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18741c: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x18741Cu;
    SET_GPR_U32(ctx, 31, 0x187424u);
    ctx->pc = 0x187420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18741Cu;
            // 0x187420: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187424u; }
        if (ctx->pc != 0x187424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187424u; }
        if (ctx->pc != 0x187424u) { return; }
    }
    ctx->pc = 0x187424u;
label_187424:
    // 0x187424: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x187424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187428: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18742c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18742cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187430: 0x3e00008  jr          $ra
    ctx->pc = 0x187430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187430u;
            // 0x187434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187438u;
}
