#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E1600
// Address: 0x2e1600 - 0x2e17a0
void sub_002E1600_0x2e1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1600_0x2e1600");
#endif

    switch (ctx->pc) {
        case 0x2e164cu: goto label_2e164c;
        case 0x2e1690u: goto label_2e1690;
        case 0x2e16a4u: goto label_2e16a4;
        case 0x2e16d8u: goto label_2e16d8;
        case 0x2e1720u: goto label_2e1720;
        case 0x2e1768u: goto label_2e1768;
        case 0x2e1774u: goto label_2e1774;
        default: break;
    }

    ctx->pc = 0x2e1600u;

    // 0x2e1600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e1604: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e1604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e1608: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e1608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e160c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e160cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1610: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e1610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e1614: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e1614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1618: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e1618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e161c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e161cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1620: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e1620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e1624: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e1624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1628: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e162c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e162cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1630: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e1630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e1634: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e1634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1638: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x2e1638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x2e163c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2e163cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1640: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x2e1640u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2e1644: 0xc0b85e8  jal         func_2E17A0
    ctx->pc = 0x2E1644u;
    SET_GPR_U32(ctx, 31, 0x2E164Cu);
    ctx->pc = 0x2E1648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1644u;
            // 0x2e1648: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E17A0u;
    if (runtime->hasFunction(0x2E17A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E17A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E164Cu; }
        if (ctx->pc != 0x2E164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E17A0_0x2e17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E164Cu; }
        if (ctx->pc != 0x2E164Cu) { return; }
    }
    ctx->pc = 0x2E164Cu;
label_2e164c:
    // 0x2e164c: 0x96630056  lhu         $v1, 0x56($s3)
    ctx->pc = 0x2e164cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 86)));
    // 0x2e1650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1654: 0x50620023  beql        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E1654u;
    {
        const bool branch_taken_0x2e1654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1654) {
            ctx->pc = 0x2E1658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1654u;
            // 0x2e1658: 0x96620052  lhu         $v0, 0x52($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E16E4u;
            goto label_2e16e4;
        }
    }
    ctx->pc = 0x2E165Cu;
    // 0x2e165c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1660: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E1660u;
    {
        const bool branch_taken_0x2e1660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1660) {
            ctx->pc = 0x2E16E0u;
            goto label_2e16e0;
        }
    }
    ctx->pc = 0x2E1668u;
    // 0x2e1668: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2e1668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e166c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e166cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1670: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2e1670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2e1674: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x2e1674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1678: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x2e1678u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e167c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e1680: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1684: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e1684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e1688: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2E1688u;
    SET_GPR_U32(ctx, 31, 0x2E1690u);
    ctx->pc = 0x2E168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1688u;
            // 0x2e168c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1690u; }
        if (ctx->pc != 0x2E1690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1690u; }
        if (ctx->pc != 0x2E1690u) { return; }
    }
    ctx->pc = 0x2E1690u;
label_2e1690:
    // 0x2e1690: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e1690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e1694: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e1694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1698: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e1698u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e169c: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2E169Cu;
    SET_GPR_U32(ctx, 31, 0x2E16A4u);
    ctx->pc = 0x2E16A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E169Cu;
            // 0x2e16a0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16A4u; }
        if (ctx->pc != 0x2E16A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16A4u; }
        if (ctx->pc != 0x2E16A4u) { return; }
    }
    ctx->pc = 0x2E16A4u;
label_2e16a4:
    // 0x2e16a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e16a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e16a8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2E16A8u;
    {
        const bool branch_taken_0x2e16a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e16a8) {
            ctx->pc = 0x2E16ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16A8u;
            // 0x2e16ac: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E16B8u;
            goto label_2e16b8;
        }
    }
    ctx->pc = 0x2E16B0u;
    // 0x2e16b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E16B0u;
    {
        const bool branch_taken_0x2e16b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E16B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16B0u;
            // 0x2e16b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16b0) {
            ctx->pc = 0x2E16C0u;
            goto label_2e16c0;
        }
    }
    ctx->pc = 0x2E16B8u;
label_2e16b8:
    // 0x2e16b8: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x2e16b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e16bc: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x2e16bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e16c0:
    // 0x2e16c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e16c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e16c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16c8: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x2e16c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x2e16cc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x2e16ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2e16d0: 0xc0b8984  jal         func_2E2610
    ctx->pc = 0x2E16D0u;
    SET_GPR_U32(ctx, 31, 0x2E16D8u);
    ctx->pc = 0x2E16D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16D0u;
            // 0x2e16d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2610u;
    if (runtime->hasFunction(0x2E2610u)) {
        auto targetFn = runtime->lookupFunction(0x2E2610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16D8u; }
        if (ctx->pc != 0x2E16D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2610_0x2e2610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16D8u; }
        if (ctx->pc != 0x2E16D8u) { return; }
    }
    ctx->pc = 0x2E16D8u;
label_2e16d8:
    // 0x2e16d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2E16D8u;
    {
        const bool branch_taken_0x2e16d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E16DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16D8u;
            // 0x2e16dc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16d8) {
            ctx->pc = 0x2E1778u;
            goto label_2e1778;
        }
    }
    ctx->pc = 0x2E16E0u;
label_2e16e0:
    // 0x2e16e0: 0x96620052  lhu         $v0, 0x52($s3)
    ctx->pc = 0x2e16e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_2e16e4:
    // 0x2e16e4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E16E4u;
    {
        const bool branch_taken_0x2e16e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e16e4) {
            ctx->pc = 0x2E16E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16E4u;
            // 0x2e16e8: 0x8e650040  lw          $a1, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E172Cu;
            goto label_2e172c;
        }
    }
    ctx->pc = 0x2E16ECu;
    // 0x2e16ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e16f0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2e16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e16f4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2e16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2e16f8: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x2e16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x2e16fc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E16FCu;
    {
        const bool branch_taken_0x2e16fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e16fc) {
            ctx->pc = 0x2E1728u;
            goto label_2e1728;
        }
    }
    ctx->pc = 0x2E1704u;
    // 0x2e1704: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e1704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e1708: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e1708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e170c: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x2e170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x2e1710: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e1710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1714: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x2e1714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2e1718: 0xc0b8984  jal         func_2E2610
    ctx->pc = 0x2E1718u;
    SET_GPR_U32(ctx, 31, 0x2E1720u);
    ctx->pc = 0x2E171Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1718u;
            // 0x2e171c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2610u;
    if (runtime->hasFunction(0x2E2610u)) {
        auto targetFn = runtime->lookupFunction(0x2E2610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1720u; }
        if (ctx->pc != 0x2E1720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2610_0x2e2610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1720u; }
        if (ctx->pc != 0x2E1720u) { return; }
    }
    ctx->pc = 0x2E1720u;
label_2e1720:
    // 0x2e1720: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E1720u;
    {
        const bool branch_taken_0x2e1720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1720) {
            ctx->pc = 0x2E1774u;
            goto label_2e1774;
        }
    }
    ctx->pc = 0x2E1728u;
label_2e1728:
    // 0x2e1728: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x2e1728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2e172c:
    // 0x2e172c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e1730: 0x96660052  lhu         $a2, 0x52($s3)
    ctx->pc = 0x2e1730u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
    // 0x2e1734: 0x96630050  lhu         $v1, 0x50($s3)
    ctx->pc = 0x2e1734u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2e1738: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x2e1738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e173c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2e173cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2e1740: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x2e1740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2e1744: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x2e1744u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1748: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x2e1748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2e174c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2e174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e1750: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2e1750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1754: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x2e1754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2e1758: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x2e1758u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e175c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e175cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1760: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E1760u;
    SET_GPR_U32(ctx, 31, 0x2E1768u);
    ctx->pc = 0x2E1764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1760u;
            // 0x2e1764: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1768u; }
        if (ctx->pc != 0x2E1768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1768u; }
        if (ctx->pc != 0x2E1768u) { return; }
    }
    ctx->pc = 0x2E1768u;
label_2e1768:
    // 0x2e1768: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e1768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e176c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E176Cu;
    SET_GPR_U32(ctx, 31, 0x2E1774u);
    ctx->pc = 0x2E1770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E176Cu;
            // 0x2e1770: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1774u; }
        if (ctx->pc != 0x2E1774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1774u; }
        if (ctx->pc != 0x2E1774u) { return; }
    }
    ctx->pc = 0x2E1774u;
label_2e1774:
    // 0x2e1774: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e1774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e1778:
    // 0x2e1778: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e1778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e177c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e177cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1780: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e1780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1784: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e1784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e178c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E178Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E178Cu;
            // 0x2e1790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E1794u;
    // 0x2e1794: 0x0  nop
    ctx->pc = 0x2e1794u;
    // NOP
    // 0x2e1798: 0x0  nop
    ctx->pc = 0x2e1798u;
    // NOP
    // 0x2e179c: 0x0  nop
    ctx->pc = 0x2e179cu;
    // NOP
}
