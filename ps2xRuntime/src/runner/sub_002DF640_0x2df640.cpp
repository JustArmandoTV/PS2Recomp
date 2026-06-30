#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DF640
// Address: 0x2df640 - 0x2df850
void sub_002DF640_0x2df640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF640_0x2df640");
#endif

    switch (ctx->pc) {
        case 0x2df6a4u: goto label_2df6a4;
        case 0x2df6b8u: goto label_2df6b8;
        case 0x2df6e4u: goto label_2df6e4;
        case 0x2df6f0u: goto label_2df6f0;
        case 0x2df704u: goto label_2df704;
        case 0x2df72cu: goto label_2df72c;
        case 0x2df780u: goto label_2df780;
        case 0x2df78cu: goto label_2df78c;
        case 0x2df7dcu: goto label_2df7dc;
        case 0x2df808u: goto label_2df808;
        case 0x2df814u: goto label_2df814;
        default: break;
    }

    ctx->pc = 0x2df640u;

    // 0x2df640: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2df640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2df644: 0x3c0347c3  lui         $v1, 0x47C3
    ctx->pc = 0x2df644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18371 << 16));
    // 0x2df648: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2df648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2df64c: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x2df64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x2df650: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2df650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2df654: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2df654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2df658: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2df658u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df65c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2df65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2df660: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2df660u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df664: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2df664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2df668: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2df668u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df66c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2df66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2df670: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2df670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df674: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2df674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2df678: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2df678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2df67c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2df67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df680: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2df680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2df684: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2df684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df688: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2df688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2df68c: 0x94a2001c  lhu         $v0, 0x1C($a1)
    ctx->pc = 0x2df68cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2df690: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2df690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2df694: 0x8cb30004  lw          $s3, 0x4($a1)
    ctx->pc = 0x2df694u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2df698: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2df698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2df69c: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2DF69Cu;
    {
        const bool branch_taken_0x2df69c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DF6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF69Cu;
            // 0x2df6a0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df69c) {
            ctx->pc = 0x2DF760u;
            goto label_2df760;
        }
    }
    ctx->pc = 0x2DF6A4u;
label_2df6a4:
    // 0x2df6a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2df6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2df6a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2df6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6ac: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x2df6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2df6b0: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2DF6B0u;
    SET_GPR_U32(ctx, 31, 0x2DF6B8u);
    ctx->pc = 0x2DF6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF6B0u;
            // 0x2df6b4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6B8u; }
        if (ctx->pc != 0x2DF6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6B8u; }
        if (ctx->pc != 0x2DF6B8u) { return; }
    }
    ctx->pc = 0x2DF6B8u;
label_2df6b8:
    // 0x2df6b8: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x2df6b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2df6bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2df6bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df6c0: 0x0  nop
    ctx->pc = 0x2df6c0u;
    // NOP
    // 0x2df6c4: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2df6c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df6c8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2DF6C8u;
    {
        const bool branch_taken_0x2df6c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df6c8) {
            ctx->pc = 0x2DF720u;
            goto label_2df720;
        }
    }
    ctx->pc = 0x2DF6D0u;
    // 0x2df6d0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x2df6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2df6d4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2DF6D4u;
    {
        const bool branch_taken_0x2df6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df6d4) {
            ctx->pc = 0x2DF748u;
            goto label_2df748;
        }
    }
    ctx->pc = 0x2DF6DCu;
    // 0x2df6dc: 0xc049514  jal         func_125450
    ctx->pc = 0x2DF6DCu;
    SET_GPR_U32(ctx, 31, 0x2DF6E4u);
    ctx->pc = 0x2DF6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF6DCu;
            // 0x2df6e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6E4u; }
        if (ctx->pc != 0x2DF6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6E4u; }
        if (ctx->pc != 0x2DF6E4u) { return; }
    }
    ctx->pc = 0x2DF6E4u;
label_2df6e4:
    // 0x2df6e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2df6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6e8: 0xc04020c  jal         func_100830
    ctx->pc = 0x2DF6E8u;
    SET_GPR_U32(ctx, 31, 0x2DF6F0u);
    ctx->pc = 0x2DF6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF6E8u;
            // 0x2df6ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6F0u; }
        if (ctx->pc != 0x2DF6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6F0u; }
        if (ctx->pc != 0x2DF6F0u) { return; }
    }
    ctx->pc = 0x2DF6F0u;
label_2df6f0:
    // 0x2df6f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2df6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2df6f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2df6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2df6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2df6fc: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2DF6FCu;
    SET_GPR_U32(ctx, 31, 0x2DF704u);
    ctx->pc = 0x2DF700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF6FCu;
            // 0x2df700: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF704u; }
        if (ctx->pc != 0x2DF704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF704u; }
        if (ctx->pc != 0x2DF704u) { return; }
    }
    ctx->pc = 0x2DF704u;
label_2df704:
    // 0x2df704: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2df704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df708: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2DF708u;
    {
        const bool branch_taken_0x2df708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df708) {
            ctx->pc = 0x2DF748u;
            goto label_2df748;
        }
    }
    ctx->pc = 0x2DF710u;
    // 0x2df710: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2df710u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2df714: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DF714u;
    {
        const bool branch_taken_0x2df714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF714u;
            // 0x2df718: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df714) {
            ctx->pc = 0x2DF748u;
            goto label_2df748;
        }
    }
    ctx->pc = 0x2DF71Cu;
    // 0x2df71c: 0x0  nop
    ctx->pc = 0x2df71cu;
    // NOP
label_2df720:
    // 0x2df720: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2df720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df724: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2DF724u;
    SET_GPR_U32(ctx, 31, 0x2DF72Cu);
    ctx->pc = 0x2DF728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF724u;
            // 0x2df728: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF72Cu; }
        if (ctx->pc != 0x2DF72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF72Cu; }
        if (ctx->pc != 0x2DF72Cu) { return; }
    }
    ctx->pc = 0x2DF72Cu;
label_2df72c:
    // 0x2df72c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2df72cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df730: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF730u;
    {
        const bool branch_taken_0x2df730 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df730) {
            ctx->pc = 0x2DF748u;
            goto label_2df748;
        }
    }
    ctx->pc = 0x2DF738u;
    // 0x2df738: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2df738u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2df73c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2df73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df740: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x2df740u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2df744: 0x0  nop
    ctx->pc = 0x2df744u;
    // NOP
label_2df748:
    // 0x2df748: 0x96a2001c  lhu         $v0, 0x1C($s5)
    ctx->pc = 0x2df748u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x2df74c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2df74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2df750: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2df750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2df754: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2df754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2df758: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2DF758u;
    {
        const bool branch_taken_0x2df758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF758u;
            // 0x2df75c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df758) {
            ctx->pc = 0x2DF6A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df6a4;
        }
    }
    ctx->pc = 0x2DF760u;
label_2df760:
    // 0x2df760: 0x6030003  bgezl       $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF760u;
    {
        const bool branch_taken_0x2df760 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2df760) {
            ctx->pc = 0x2DF764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF760u;
            // 0x2df764: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DF770u;
            goto label_2df770;
        }
    }
    ctx->pc = 0x2DF768u;
    // 0x2df768: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2DF768u;
    {
        const bool branch_taken_0x2df768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF768u;
            // 0x2df76c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df768) {
            ctx->pc = 0x2DF818u;
            goto label_2df818;
        }
    }
    ctx->pc = 0x2DF770u;
label_2df770:
    // 0x2df770: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2df770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2df774: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2df774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df778: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2DF778u;
    SET_GPR_U32(ctx, 31, 0x2DF780u);
    ctx->pc = 0x2DF77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF778u;
            // 0x2df77c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF780u; }
        if (ctx->pc != 0x2DF780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF780u; }
        if (ctx->pc != 0x2DF780u) { return; }
    }
    ctx->pc = 0x2DF780u;
label_2df780:
    // 0x2df780: 0x26c40020  addiu       $a0, $s6, 0x20
    ctx->pc = 0x2df780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x2df784: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2DF784u;
    SET_GPR_U32(ctx, 31, 0x2DF78Cu);
    ctx->pc = 0x2DF788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF784u;
            // 0x2df788: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF78Cu; }
        if (ctx->pc != 0x2DF78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF78Cu; }
        if (ctx->pc != 0x2DF78Cu) { return; }
    }
    ctx->pc = 0x2DF78Cu;
label_2df78c:
    // 0x2df78c: 0xaed50040  sw          $s5, 0x40($s6)
    ctx->pc = 0x2df78cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 64), GPR_U32(ctx, 21));
    // 0x2df790: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2df790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2df794: 0xa6c20054  sh          $v0, 0x54($s6)
    ctx->pc = 0x2df794u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x2df798: 0x3ae20002  xori        $v0, $s7, 0x2
    ctx->pc = 0x2df798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)2);
    // 0x2df79c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2df79cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2df7a0: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2df7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2df7a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df7a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2df7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2df7ac: 0xa6c40052  sh          $a0, 0x52($s6)
    ctx->pc = 0x2df7acu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x2df7b0: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DF7B0u;
    {
        const bool branch_taken_0x2df7b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DF7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF7B0u;
            // 0x2df7b4: 0xa6c30050  sh          $v1, 0x50($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df7b0) {
            ctx->pc = 0x2DF7E4u;
            goto label_2df7e4;
        }
    }
    ctx->pc = 0x2DF7B8u;
    // 0x2df7b8: 0x96c20052  lhu         $v0, 0x52($s6)
    ctx->pc = 0x2df7b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 82)));
    // 0x2df7bc: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x2df7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x2df7c0: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2df7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2df7c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2df7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df7c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2df7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2df7cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df7d0: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2df7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2df7d4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2DF7D4u;
    SET_GPR_U32(ctx, 31, 0x2DF7DCu);
    ctx->pc = 0x2DF7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF7D4u;
            // 0x2df7d8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7DCu; }
        if (ctx->pc != 0x2DF7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7DCu; }
        if (ctx->pc != 0x2DF7DCu) { return; }
    }
    ctx->pc = 0x2DF7DCu;
label_2df7dc:
    // 0x2df7dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DF7DCu;
    {
        const bool branch_taken_0x2df7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF7DCu;
            // 0x2df7e0: 0x26c40010  addiu       $a0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df7dc) {
            ctx->pc = 0x2DF80Cu;
            goto label_2df80c;
        }
    }
    ctx->pc = 0x2DF7E4u;
label_2df7e4:
    // 0x2df7e4: 0x96c20052  lhu         $v0, 0x52($s6)
    ctx->pc = 0x2df7e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 82)));
    // 0x2df7e8: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x2df7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x2df7ec: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2df7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2df7f0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2df7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2df7f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2df7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2df7f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df7fc: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2df7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2df800: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2DF800u;
    SET_GPR_U32(ctx, 31, 0x2DF808u);
    ctx->pc = 0x2DF804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF800u;
            // 0x2df804: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF808u; }
        if (ctx->pc != 0x2DF808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF808u; }
        if (ctx->pc != 0x2DF808u) { return; }
    }
    ctx->pc = 0x2DF808u;
label_2df808:
    // 0x2df808: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x2df808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_2df80c:
    // 0x2df80c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2DF80Cu;
    SET_GPR_U32(ctx, 31, 0x2DF814u);
    ctx->pc = 0x2DF810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF80Cu;
            // 0x2df810: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF814u; }
        if (ctx->pc != 0x2DF814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF814u; }
        if (ctx->pc != 0x2DF814u) { return; }
    }
    ctx->pc = 0x2DF814u;
label_2df814:
    // 0x2df814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df818:
    // 0x2df818: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2df818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2df81c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2df81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2df820: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2df820u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2df824: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2df824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2df828: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2df828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2df82c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2df82cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2df830: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2df830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df834: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2df834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df838: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2df838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df83c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2df83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df840: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF840u;
            // 0x2df844: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF848u;
    // 0x2df848: 0x0  nop
    ctx->pc = 0x2df848u;
    // NOP
    // 0x2df84c: 0x0  nop
    ctx->pc = 0x2df84cu;
    // NOP
}
