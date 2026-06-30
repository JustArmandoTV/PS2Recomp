#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137640
// Address: 0x137640 - 0x137960
void sub_00137640_0x137640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137640_0x137640");
#endif

    switch (ctx->pc) {
        case 0x137698u: goto label_137698;
        case 0x137720u: goto label_137720;
        case 0x137730u: goto label_137730;
        case 0x137740u: goto label_137740;
        case 0x137778u: goto label_137778;
        case 0x1377e4u: goto label_1377e4;
        case 0x1377f4u: goto label_1377f4;
        case 0x137804u: goto label_137804;
        case 0x137834u: goto label_137834;
        case 0x137844u: goto label_137844;
        case 0x137854u: goto label_137854;
        case 0x137884u: goto label_137884;
        case 0x137894u: goto label_137894;
        case 0x1378a4u: goto label_1378a4;
        case 0x1378d4u: goto label_1378d4;
        case 0x1378e4u: goto label_1378e4;
        case 0x1378f4u: goto label_1378f4;
        case 0x137908u: goto label_137908;
        case 0x13791cu: goto label_13791c;
        case 0x137938u: goto label_137938;
        default: break;
    }

    ctx->pc = 0x137640u;

    // 0x137640: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x137640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x137644: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x137644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137648: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x137648u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13764c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x137650: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x137650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x137654: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x137654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x137658: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x137658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13765c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x137660: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x137660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137664: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x137664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x137668: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x137668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13766c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137670: 0x2ce10002  sltiu       $at, $a3, 0x2
    ctx->pc = 0x137670u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137674: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x137674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x137678: 0x0  nop
    ctx->pc = 0x137678u;
    // NOP
    // 0x13767c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x13767cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x137680: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x137680u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x137684: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x137684u;
    {
        const bool branch_taken_0x137684 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x137688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137684u;
            // 0x137688: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137684) {
            ctx->pc = 0x1376D8u;
            goto label_1376d8;
        }
    }
    ctx->pc = 0x13768Cu;
    // 0x13768c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x13768cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x137690: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x137690u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x137694: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x137694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_137698:
    // 0x137698: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x137698u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x13769c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x13769cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1376a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1376a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1376a4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1376a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1376a8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1376a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1376ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1376ACu;
    {
        const bool branch_taken_0x1376ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1376ac) {
            ctx->pc = 0x1376C0u;
            goto label_1376c0;
        }
    }
    ctx->pc = 0x1376B4u;
    // 0x1376b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1376B4u;
    {
        const bool branch_taken_0x1376b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1376B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1376B4u;
            // 0x1376b8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376b4) {
            ctx->pc = 0x1376C8u;
            goto label_1376c8;
        }
    }
    ctx->pc = 0x1376BCu;
    // 0x1376bc: 0x0  nop
    ctx->pc = 0x1376bcu;
    // NOP
label_1376c0:
    // 0x1376c0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1376c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1376c4: 0x0  nop
    ctx->pc = 0x1376c4u;
    // NOP
label_1376c8:
    // 0x1376c8: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x1376c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1376cc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1376ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1376d0: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1376D0u;
    {
        const bool branch_taken_0x1376d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1376d0) {
            ctx->pc = 0x1376D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1376D0u;
            // 0x1376d4: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137698;
        }
    }
    ctx->pc = 0x1376D8u;
label_1376d8:
    // 0x1376d8: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1376d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1376dc: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1376dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1376e0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1376e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1376e4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x1376e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1376e8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1376E8u;
    {
        const bool branch_taken_0x1376e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1376e8) {
            ctx->pc = 0x1376ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1376E8u;
            // 0x1376ec: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137748u;
            goto label_137748;
        }
    }
    ctx->pc = 0x1376F0u;
    // 0x1376f0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1376f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1376f4: 0x86460004  lh          $a2, 0x4($s2)
    ctx->pc = 0x1376f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1376f8: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x1376f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1376fc: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1376FCu;
    {
        const bool branch_taken_0x1376fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x137700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1376FCu;
            // 0x137700: 0x86470006  lh          $a3, 0x6($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376fc) {
            ctx->pc = 0x137728u;
            goto label_137728;
        }
    }
    ctx->pc = 0x137704u;
    // 0x137704: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x137708: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137708u;
    {
        const bool branch_taken_0x137708 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x137708) {
            ctx->pc = 0x13770Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137708u;
            // 0x13770c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137718u;
            goto label_137718;
        }
    }
    ctx->pc = 0x137710u;
    // 0x137710: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137710u;
    {
        const bool branch_taken_0x137710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137710u;
            // 0x137714: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137710) {
            ctx->pc = 0x137738u;
            goto label_137738;
        }
    }
    ctx->pc = 0x137718u;
label_137718:
    // 0x137718: 0xc04ca64  jal         func_132990
    ctx->pc = 0x137718u;
    SET_GPR_U32(ctx, 31, 0x137720u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137720u; }
        if (ctx->pc != 0x137720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137720u; }
        if (ctx->pc != 0x137720u) { return; }
    }
    ctx->pc = 0x137720u;
label_137720:
    // 0x137720: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x137720u;
    {
        const bool branch_taken_0x137720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137720) {
            ctx->pc = 0x137740u;
            goto label_137740;
        }
    }
    ctx->pc = 0x137728u;
label_137728:
    // 0x137728: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x137728u;
    SET_GPR_U32(ctx, 31, 0x137730u);
    ctx->pc = 0x13772Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137728u;
            // 0x13772c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137730u; }
        if (ctx->pc != 0x137730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137730u; }
        if (ctx->pc != 0x137730u) { return; }
    }
    ctx->pc = 0x137730u;
label_137730:
    // 0x137730: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137730u;
    {
        const bool branch_taken_0x137730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137730) {
            ctx->pc = 0x137740u;
            goto label_137740;
        }
    }
    ctx->pc = 0x137738u;
label_137738:
    // 0x137738: 0xc04ca18  jal         func_132860
    ctx->pc = 0x137738u;
    SET_GPR_U32(ctx, 31, 0x137740u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137740u; }
        if (ctx->pc != 0x137740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137740u; }
        if (ctx->pc != 0x137740u) { return; }
    }
    ctx->pc = 0x137740u;
label_137740:
    // 0x137740: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x137740u;
    {
        const bool branch_taken_0x137740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137740u;
            // 0x137744: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137740) {
            ctx->pc = 0x13793Cu;
            goto label_13793c;
        }
    }
    ctx->pc = 0x137748u;
label_137748:
    // 0x137748: 0x51000009  beql        $t0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x137748u;
    {
        const bool branch_taken_0x137748 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x137748) {
            ctx->pc = 0x13774Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137748u;
            // 0x13774c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137770u;
            goto label_137770;
        }
    }
    ctx->pc = 0x137750u;
    // 0x137750: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x137750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x137754: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x137754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137758: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x137758u;
    {
        const bool branch_taken_0x137758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137758) {
            ctx->pc = 0x13776Cu;
            goto label_13776c;
        }
    }
    ctx->pc = 0x137760u;
    // 0x137760: 0x2645fff8  addiu       $a1, $s2, -0x8
    ctx->pc = 0x137760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x137764: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x137764u;
    {
        const bool branch_taken_0x137764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137764u;
            // 0x137768: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137764) {
            ctx->pc = 0x137780u;
            goto label_137780;
        }
    }
    ctx->pc = 0x13776Cu;
label_13776c:
    // 0x13776c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13776cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_137770:
    // 0x137770: 0xc04dc54  jal         func_137150
    ctx->pc = 0x137770u;
    SET_GPR_U32(ctx, 31, 0x137778u);
    ctx->pc = 0x137774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137770u;
            // 0x137774: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137150u;
    if (runtime->hasFunction(0x137150u)) {
        auto targetFn = runtime->lookupFunction(0x137150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137778u; }
        if (ctx->pc != 0x137778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137150_0x137150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137778u; }
        if (ctx->pc != 0x137778u) { return; }
    }
    ctx->pc = 0x137778u;
label_137778:
    // 0x137778: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x137778u;
    {
        const bool branch_taken_0x137778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137778) {
            ctx->pc = 0x137938u;
            goto label_137938;
        }
    }
    ctx->pc = 0x137780u;
label_137780:
    // 0x137780: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x137780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x137784: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x137784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x137788: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x137788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13778c: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x13778cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x137790: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x137790u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137794: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x137794u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x137798: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x137798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13779c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13779cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1377a0: 0x84a50002  lh          $a1, 0x2($a1)
    ctx->pc = 0x1377a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1377a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1377a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1377a8: 0x0  nop
    ctx->pc = 0x1377a8u;
    // NOP
    // 0x1377ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1377acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1377b0: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1377b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1377b4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1377b4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x1377b8: 0x0  nop
    ctx->pc = 0x1377b8u;
    // NOP
    // 0x1377bc: 0x0  nop
    ctx->pc = 0x1377bcu;
    // NOP
    // 0x1377c0: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1377C0u;
    {
        const bool branch_taken_0x1377c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1377c0) {
            ctx->pc = 0x1377ECu;
            goto label_1377ec;
        }
    }
    ctx->pc = 0x1377C8u;
    // 0x1377c8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1377c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1377cc: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1377CCu;
    {
        const bool branch_taken_0x1377cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1377cc) {
            ctx->pc = 0x1377D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1377CCu;
            // 0x1377d0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1377DCu;
            goto label_1377dc;
        }
    }
    ctx->pc = 0x1377D4u;
    // 0x1377d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1377D4u;
    {
        const bool branch_taken_0x1377d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1377D4u;
            // 0x1377d8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377d4) {
            ctx->pc = 0x1377FCu;
            goto label_1377fc;
        }
    }
    ctx->pc = 0x1377DCu;
label_1377dc:
    // 0x1377dc: 0xc04ca64  jal         func_132990
    ctx->pc = 0x1377DCu;
    SET_GPR_U32(ctx, 31, 0x1377E4u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1377E4u; }
        if (ctx->pc != 0x1377E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1377E4u; }
        if (ctx->pc != 0x1377E4u) { return; }
    }
    ctx->pc = 0x1377E4u;
label_1377e4:
    // 0x1377e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1377E4u;
    {
        const bool branch_taken_0x1377e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1377E4u;
            // 0x1377e8: 0x86470006  lh          $a3, 0x6($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377e4) {
            ctx->pc = 0x137808u;
            goto label_137808;
        }
    }
    ctx->pc = 0x1377ECu;
label_1377ec:
    // 0x1377ec: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x1377ECu;
    SET_GPR_U32(ctx, 31, 0x1377F4u);
    ctx->pc = 0x1377F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1377ECu;
            // 0x1377f0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1377F4u; }
        if (ctx->pc != 0x1377F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1377F4u; }
        if (ctx->pc != 0x1377F4u) { return; }
    }
    ctx->pc = 0x1377F4u;
label_1377f4:
    // 0x1377f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1377F4u;
    {
        const bool branch_taken_0x1377f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1377f4) {
            ctx->pc = 0x137804u;
            goto label_137804;
        }
    }
    ctx->pc = 0x1377FCu;
label_1377fc:
    // 0x1377fc: 0xc04ca18  jal         func_132860
    ctx->pc = 0x1377FCu;
    SET_GPR_U32(ctx, 31, 0x137804u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137804u; }
        if (ctx->pc != 0x137804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137804u; }
        if (ctx->pc != 0x137804u) { return; }
    }
    ctx->pc = 0x137804u;
label_137804:
    // 0x137804: 0x86470006  lh          $a3, 0x6($s2)
    ctx->pc = 0x137804u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_137808:
    // 0x137808: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x137808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x13780c: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x13780cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x137810: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137810u;
    {
        const bool branch_taken_0x137810 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x137814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137810u;
            // 0x137814: 0x86460004  lh          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137810) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x137818u;
    // 0x137818: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13781c: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13781Cu;
    {
        const bool branch_taken_0x13781c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x13781c) {
            ctx->pc = 0x137820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13781Cu;
            // 0x137820: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13782Cu;
            goto label_13782c;
        }
    }
    ctx->pc = 0x137824u;
    // 0x137824: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137824u;
    {
        const bool branch_taken_0x137824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137824u;
            // 0x137828: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137824) {
            ctx->pc = 0x13784Cu;
            goto label_13784c;
        }
    }
    ctx->pc = 0x13782Cu;
label_13782c:
    // 0x13782c: 0xc04ca64  jal         func_132990
    ctx->pc = 0x13782Cu;
    SET_GPR_U32(ctx, 31, 0x137834u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137834u; }
        if (ctx->pc != 0x137834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137834u; }
        if (ctx->pc != 0x137834u) { return; }
    }
    ctx->pc = 0x137834u;
label_137834:
    // 0x137834: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x137834u;
    {
        const bool branch_taken_0x137834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137834u;
            // 0x137838: 0x86270006  lh          $a3, 0x6($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137834) {
            ctx->pc = 0x137858u;
            goto label_137858;
        }
    }
    ctx->pc = 0x13783Cu;
label_13783c:
    // 0x13783c: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x13783Cu;
    SET_GPR_U32(ctx, 31, 0x137844u);
    ctx->pc = 0x137840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13783Cu;
            // 0x137840: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137844u; }
        if (ctx->pc != 0x137844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137844u; }
        if (ctx->pc != 0x137844u) { return; }
    }
    ctx->pc = 0x137844u;
label_137844:
    // 0x137844: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137844u;
    {
        const bool branch_taken_0x137844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137844) {
            ctx->pc = 0x137854u;
            goto label_137854;
        }
    }
    ctx->pc = 0x13784Cu;
label_13784c:
    // 0x13784c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x13784Cu;
    SET_GPR_U32(ctx, 31, 0x137854u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137854u; }
        if (ctx->pc != 0x137854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137854u; }
        if (ctx->pc != 0x137854u) { return; }
    }
    ctx->pc = 0x137854u;
label_137854:
    // 0x137854: 0x86270006  lh          $a3, 0x6($s1)
    ctx->pc = 0x137854u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_137858:
    // 0x137858: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x137858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x13785c: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x13785cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x137860: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137860u;
    {
        const bool branch_taken_0x137860 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x137864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137860u;
            // 0x137864: 0x86260004  lh          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137860) {
            ctx->pc = 0x13788Cu;
            goto label_13788c;
        }
    }
    ctx->pc = 0x137868u;
    // 0x137868: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x137868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13786c: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13786Cu;
    {
        const bool branch_taken_0x13786c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x13786c) {
            ctx->pc = 0x137870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13786Cu;
            // 0x137870: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13787Cu;
            goto label_13787c;
        }
    }
    ctx->pc = 0x137874u;
    // 0x137874: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137874u;
    {
        const bool branch_taken_0x137874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137874u;
            // 0x137878: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137874) {
            ctx->pc = 0x13789Cu;
            goto label_13789c;
        }
    }
    ctx->pc = 0x13787Cu;
label_13787c:
    // 0x13787c: 0xc04ca64  jal         func_132990
    ctx->pc = 0x13787Cu;
    SET_GPR_U32(ctx, 31, 0x137884u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137884u; }
        if (ctx->pc != 0x137884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137884u; }
        if (ctx->pc != 0x137884u) { return; }
    }
    ctx->pc = 0x137884u;
label_137884:
    // 0x137884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x137884u;
    {
        const bool branch_taken_0x137884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137884u;
            // 0x137888: 0x86070006  lh          $a3, 0x6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137884) {
            ctx->pc = 0x1378A8u;
            goto label_1378a8;
        }
    }
    ctx->pc = 0x13788Cu;
label_13788c:
    // 0x13788c: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x13788Cu;
    SET_GPR_U32(ctx, 31, 0x137894u);
    ctx->pc = 0x137890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13788Cu;
            // 0x137890: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137894u; }
        if (ctx->pc != 0x137894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137894u; }
        if (ctx->pc != 0x137894u) { return; }
    }
    ctx->pc = 0x137894u;
label_137894:
    // 0x137894: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137894u;
    {
        const bool branch_taken_0x137894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137894) {
            ctx->pc = 0x1378A4u;
            goto label_1378a4;
        }
    }
    ctx->pc = 0x13789Cu;
label_13789c:
    // 0x13789c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x13789Cu;
    SET_GPR_U32(ctx, 31, 0x1378A4u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378A4u; }
        if (ctx->pc != 0x1378A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378A4u; }
        if (ctx->pc != 0x1378A4u) { return; }
    }
    ctx->pc = 0x1378A4u;
label_1378a4:
    // 0x1378a4: 0x86070006  lh          $a3, 0x6($s0)
    ctx->pc = 0x1378a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_1378a8:
    // 0x1378a8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1378a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1378ac: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x1378acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1378b0: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1378B0u;
    {
        const bool branch_taken_0x1378b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1378B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1378B0u;
            // 0x1378b4: 0x86060004  lh          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378b0) {
            ctx->pc = 0x1378DCu;
            goto label_1378dc;
        }
    }
    ctx->pc = 0x1378B8u;
    // 0x1378b8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1378b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1378bc: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1378BCu;
    {
        const bool branch_taken_0x1378bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1378bc) {
            ctx->pc = 0x1378C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1378BCu;
            // 0x1378c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1378CCu;
            goto label_1378cc;
        }
    }
    ctx->pc = 0x1378C4u;
    // 0x1378c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1378C4u;
    {
        const bool branch_taken_0x1378c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1378C4u;
            // 0x1378c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378c4) {
            ctx->pc = 0x1378ECu;
            goto label_1378ec;
        }
    }
    ctx->pc = 0x1378CCu;
label_1378cc:
    // 0x1378cc: 0xc04ca64  jal         func_132990
    ctx->pc = 0x1378CCu;
    SET_GPR_U32(ctx, 31, 0x1378D4u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378D4u; }
        if (ctx->pc != 0x1378D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378D4u; }
        if (ctx->pc != 0x1378D4u) { return; }
    }
    ctx->pc = 0x1378D4u;
label_1378d4:
    // 0x1378d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1378D4u;
    {
        const bool branch_taken_0x1378d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1378D4u;
            // 0x1378d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378d4) {
            ctx->pc = 0x1378F8u;
            goto label_1378f8;
        }
    }
    ctx->pc = 0x1378DCu;
label_1378dc:
    // 0x1378dc: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x1378DCu;
    SET_GPR_U32(ctx, 31, 0x1378E4u);
    ctx->pc = 0x1378E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1378DCu;
            // 0x1378e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378E4u; }
        if (ctx->pc != 0x1378E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378E4u; }
        if (ctx->pc != 0x1378E4u) { return; }
    }
    ctx->pc = 0x1378E4u;
label_1378e4:
    // 0x1378e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1378E4u;
    {
        const bool branch_taken_0x1378e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1378e4) {
            ctx->pc = 0x1378F4u;
            goto label_1378f4;
        }
    }
    ctx->pc = 0x1378ECu;
label_1378ec:
    // 0x1378ec: 0xc04ca18  jal         func_132860
    ctx->pc = 0x1378ECu;
    SET_GPR_U32(ctx, 31, 0x1378F4u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378F4u; }
        if (ctx->pc != 0x1378F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378F4u; }
        if (ctx->pc != 0x1378F4u) { return; }
    }
    ctx->pc = 0x1378F4u;
label_1378f4:
    // 0x1378f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1378f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1378f8:
    // 0x1378f8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1378f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1378fc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1378fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137900: 0xc04c7dc  jal         func_131F70
    ctx->pc = 0x137900u;
    SET_GPR_U32(ctx, 31, 0x137908u);
    ctx->pc = 0x137904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137900u;
            // 0x137904: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131F70u;
    if (runtime->hasFunction(0x131F70u)) {
        auto targetFn = runtime->lookupFunction(0x131F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137908u; }
        if (ctx->pc != 0x137908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131F70_0x131f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137908u; }
        if (ctx->pc != 0x137908u) { return; }
    }
    ctx->pc = 0x137908u;
label_137908:
    // 0x137908: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13790c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x13790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137910: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x137910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x137914: 0xc04c7dc  jal         func_131F70
    ctx->pc = 0x137914u;
    SET_GPR_U32(ctx, 31, 0x13791Cu);
    ctx->pc = 0x137918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137914u;
            // 0x137918: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131F70u;
    if (runtime->hasFunction(0x131F70u)) {
        auto targetFn = runtime->lookupFunction(0x131F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13791Cu; }
        if (ctx->pc != 0x13791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131F70_0x131f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13791Cu; }
        if (ctx->pc != 0x13791Cu) { return; }
    }
    ctx->pc = 0x13791Cu;
label_13791c:
    // 0x13791c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137920: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x137920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137924: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x137924u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x137928: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x137928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13792c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x13792cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137930: 0xc04c940  jal         func_132500
    ctx->pc = 0x137930u;
    SET_GPR_U32(ctx, 31, 0x137938u);
    ctx->pc = 0x137934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137930u;
            // 0x137934: 0x27a800a0  addiu       $t0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132500u;
    if (runtime->hasFunction(0x132500u)) {
        auto targetFn = runtime->lookupFunction(0x132500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137938u; }
        if (ctx->pc != 0x137938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132500_0x132500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137938u; }
        if (ctx->pc != 0x137938u) { return; }
    }
    ctx->pc = 0x137938u;
label_137938:
    // 0x137938: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x137938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_13793c:
    // 0x13793c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137940: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x137940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137944: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x137944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137948: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x137948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13794c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13794cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137950: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137954: 0x3e00008  jr          $ra
    ctx->pc = 0x137954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137954u;
            // 0x137958: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13795Cu;
    // 0x13795c: 0x0  nop
    ctx->pc = 0x13795cu;
    // NOP
}
