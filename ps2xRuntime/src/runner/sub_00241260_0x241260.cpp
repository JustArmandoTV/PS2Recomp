#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241260
// Address: 0x241260 - 0x241400
void sub_00241260_0x241260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241260_0x241260");
#endif

    switch (ctx->pc) {
        case 0x2412acu: goto label_2412ac;
        case 0x2412e0u: goto label_2412e0;
        case 0x241304u: goto label_241304;
        case 0x241348u: goto label_241348;
        case 0x241380u: goto label_241380;
        case 0x2413a4u: goto label_2413a4;
        default: break;
    }

    ctx->pc = 0x241260u;

    // 0x241260: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x241260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x241264: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x241264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x241268: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x241268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x24126c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x241270: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x241270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x241274: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x241274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x241278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24127c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24127cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x241280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x241284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x241284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x241288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x241288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24128c: 0x94830074  lhu         $v1, 0x74($a0)
    ctx->pc = 0x24128cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x241290: 0x8c930008  lw          $s3, 0x8($a0)
    ctx->pc = 0x241290u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x241294: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x241294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x241298: 0x6400025  bltz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x241298u;
    {
        const bool branch_taken_0x241298 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x24129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241298u;
            // 0x24129c: 0x26b60070  addiu       $s6, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241298) {
            ctx->pc = 0x241330u;
            goto label_241330;
        }
    }
    ctx->pc = 0x2412A0u;
    // 0x2412a0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2412a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2412a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2412a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2412a8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2412a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2412ac:
    // 0x2412ac: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2412acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2412b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2412b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2412b4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2412b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2412b8: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x2412b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2412bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2412BCu;
    {
        const bool branch_taken_0x2412bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412bc) {
            ctx->pc = 0x2412D0u;
            goto label_2412d0;
        }
    }
    ctx->pc = 0x2412C4u;
    // 0x2412c4: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x2412c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2412c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2412c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2412cc: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x2412ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_2412d0:
    // 0x2412d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2412d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2412d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2412d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2412d8: 0xc08fb34  jal         func_23ECD0
    ctx->pc = 0x2412D8u;
    SET_GPR_U32(ctx, 31, 0x2412E0u);
    ctx->pc = 0x2412DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2412D8u;
            // 0x2412dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23ECD0u;
    if (runtime->hasFunction(0x23ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x23ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2412E0u; }
        if (ctx->pc != 0x2412E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023ECD0_0x23ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2412E0u; }
        if (ctx->pc != 0x2412E0u) { return; }
    }
    ctx->pc = 0x2412E0u;
label_2412e0:
    // 0x2412e0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2412e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2412e4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2412e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2412e8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2412e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2412ec: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2412ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2412f0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2412F0u;
    {
        const bool branch_taken_0x2412f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2412f0) {
            ctx->pc = 0x241308u;
            goto label_241308;
        }
    }
    ctx->pc = 0x2412F8u;
    // 0x2412f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2412f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2412fc: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2412FCu;
    SET_GPR_U32(ctx, 31, 0x241304u);
    ctx->pc = 0x241300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2412FCu;
            // 0x241300: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241304u; }
        if (ctx->pc != 0x241304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241304u; }
        if (ctx->pc != 0x241304u) { return; }
    }
    ctx->pc = 0x241304u;
label_241304:
    // 0x241304: 0x0  nop
    ctx->pc = 0x241304u;
    // NOP
label_241308:
    // 0x241308: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x241308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x24130c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x24130cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x241310: 0x2610ffdc  addiu       $s0, $s0, -0x24
    ctx->pc = 0x241310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967260));
    // 0x241314: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x241314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x241318: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x241318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x24131c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24131cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x241320: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x241320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x241324: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x241328: 0x641ffe0  bgez        $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x241328u;
    {
        const bool branch_taken_0x241328 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x24132Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241328u;
            // 0x24132c: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241328) {
            ctx->pc = 0x2412ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2412ac;
        }
    }
    ctx->pc = 0x241330u;
label_241330:
    // 0x241330: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x241330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x241334: 0x26b00078  addiu       $s0, $s5, 0x78
    ctx->pc = 0x241334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 120));
    // 0x241338: 0x2475ffff  addiu       $s5, $v1, -0x1
    ctx->pc = 0x241338u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24133c: 0x6a00024  bltz        $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x24133Cu;
    {
        const bool branch_taken_0x24133c = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x24133c) {
            ctx->pc = 0x2413D0u;
            goto label_2413d0;
        }
    }
    ctx->pc = 0x241344u;
    // 0x241344: 0x158880  sll         $s1, $s5, 2
    ctx->pc = 0x241344u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_241348:
    // 0x241348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x241348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24134c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x241350: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x241350u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241354: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x241354u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x241358: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241358u;
    {
        const bool branch_taken_0x241358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241358) {
            ctx->pc = 0x241370u;
            goto label_241370;
        }
    }
    ctx->pc = 0x241360u;
    // 0x241360: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x241360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x241364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x241364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x241368: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x241368u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x24136c: 0x0  nop
    ctx->pc = 0x24136cu;
    // NOP
label_241370:
    // 0x241370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241374: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x241374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241378: 0xc08fb34  jal         func_23ECD0
    ctx->pc = 0x241378u;
    SET_GPR_U32(ctx, 31, 0x241380u);
    ctx->pc = 0x24137Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241378u;
            // 0x24137c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23ECD0u;
    if (runtime->hasFunction(0x23ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x23ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241380u; }
        if (ctx->pc != 0x241380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023ECD0_0x23ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241380u; }
        if (ctx->pc != 0x241380u) { return; }
    }
    ctx->pc = 0x241380u;
label_241380:
    // 0x241380: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x241380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x241384: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x241384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x241388: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x241388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x24138c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x24138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x241390: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x241390u;
    {
        const bool branch_taken_0x241390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x241390) {
            ctx->pc = 0x2413A8u;
            goto label_2413a8;
        }
    }
    ctx->pc = 0x241398u;
    // 0x241398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x241398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24139c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x24139Cu;
    SET_GPR_U32(ctx, 31, 0x2413A4u);
    ctx->pc = 0x2413A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24139Cu;
            // 0x2413a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2413A4u; }
        if (ctx->pc != 0x2413A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2413A4u; }
        if (ctx->pc != 0x2413A4u) { return; }
    }
    ctx->pc = 0x2413A4u;
label_2413a4:
    // 0x2413a4: 0x0  nop
    ctx->pc = 0x2413a4u;
    // NOP
label_2413a8:
    // 0x2413a8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2413a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2413ac: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2413acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2413b0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x2413b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2413b4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2413b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2413b8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2413b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x2413bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2413bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2413c0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2413c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2413c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2413c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2413c8: 0x6a1ffdf  bgez        $s5, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2413C8u;
    {
        const bool branch_taken_0x2413c8 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x2413CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2413C8u;
            // 0x2413cc: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413c8) {
            ctx->pc = 0x241348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241348;
        }
    }
    ctx->pc = 0x2413D0u;
label_2413d0:
    // 0x2413d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2413d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2413d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2413d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2413d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2413d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2413dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2413dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2413e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2413e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2413e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2413e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2413e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2413e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2413ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2413ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2413f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2413F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2413F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2413F0u;
            // 0x2413f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2413F8u;
    // 0x2413f8: 0x0  nop
    ctx->pc = 0x2413f8u;
    // NOP
    // 0x2413fc: 0x0  nop
    ctx->pc = 0x2413fcu;
    // NOP
}
