#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF7D0
// Address: 0x3bf7d0 - 0x3bf9f0
void sub_003BF7D0_0x3bf7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF7D0_0x3bf7d0");
#endif

    switch (ctx->pc) {
        case 0x3bf840u: goto label_3bf840;
        case 0x3bf84cu: goto label_3bf84c;
        case 0x3bf8a0u: goto label_3bf8a0;
        case 0x3bf8b0u: goto label_3bf8b0;
        case 0x3bf8bcu: goto label_3bf8bc;
        case 0x3bf8c8u: goto label_3bf8c8;
        case 0x3bf954u: goto label_3bf954;
        case 0x3bf984u: goto label_3bf984;
        case 0x3bf994u: goto label_3bf994;
        case 0x3bf9a4u: goto label_3bf9a4;
        case 0x3bf9c4u: goto label_3bf9c4;
        default: break;
    }

    ctx->pc = 0x3bf7d0u;

    // 0x3bf7d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3bf7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3bf7d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bf7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bf7d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bf7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3bf7dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bf7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bf7e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bf7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf7e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bf7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bf7e8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3bf7e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3bf7ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bf7ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bf7f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bf7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bf7f4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x3bf7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3bf7f8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3bf7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bf7fc: 0x10800071  beqz        $a0, . + 4 + (0x71 << 2)
    ctx->pc = 0x3BF7FCu;
    {
        const bool branch_taken_0x3bf7fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF7FCu;
            // 0x3bf800: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf7fc) {
            ctx->pc = 0x3BF9C4u;
            goto label_3bf9c4;
        }
    }
    ctx->pc = 0x3BF804u;
    // 0x3bf804: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x3bf804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3bf808: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bf808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bf80c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3bf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3bf810: 0x50430062  beql        $v0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x3BF810u;
    {
        const bool branch_taken_0x3bf810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bf810) {
            ctx->pc = 0x3BF814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF810u;
            // 0x3bf814: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF99Cu;
            goto label_3bf99c;
        }
    }
    ctx->pc = 0x3BF818u;
    // 0x3bf818: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BF818u;
    {
        const bool branch_taken_0x3bf818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf818) {
            ctx->pc = 0x3BF81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF818u;
            // 0x3bf81c: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF828u;
            goto label_3bf828;
        }
    }
    ctx->pc = 0x3BF820u;
    // 0x3bf820: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3BF820u;
    {
        const bool branch_taken_0x3bf820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF820u;
            // 0x3bf824: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf820) {
            ctx->pc = 0x3BF9C8u;
            goto label_3bf9c8;
        }
    }
    ctx->pc = 0x3BF828u;
label_3bf828:
    // 0x3bf828: 0x14430066  bne         $v0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x3BF828u;
    {
        const bool branch_taken_0x3bf828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bf828) {
            ctx->pc = 0x3BF9C4u;
            goto label_3bf9c4;
        }
    }
    ctx->pc = 0x3BF830u;
    // 0x3bf830: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x3bf830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3bf834: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3bf834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3bf838: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3BF838u;
    SET_GPR_U32(ctx, 31, 0x3BF840u);
    ctx->pc = 0x3BF83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF838u;
            // 0x3bf83c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF840u; }
        if (ctx->pc != 0x3BF840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF840u; }
        if (ctx->pc != 0x3BF840u) { return; }
    }
    ctx->pc = 0x3BF840u;
label_3bf840:
    // 0x3bf840: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3bf840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3bf844: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3BF844u;
    SET_GPR_U32(ctx, 31, 0x3BF84Cu);
    ctx->pc = 0x3BF848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF844u;
            // 0x3bf848: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF84Cu; }
        if (ctx->pc != 0x3BF84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF84Cu; }
        if (ctx->pc != 0x3BF84Cu) { return; }
    }
    ctx->pc = 0x3BF84Cu;
label_3bf84c:
    // 0x3bf84c: 0xc6010820  lwc1        $f1, 0x820($s0)
    ctx->pc = 0x3bf84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf850: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x3bf850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf854: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3bf854u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bf858: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x3BF858u;
    {
        const bool branch_taken_0x3bf858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bf858) {
            ctx->pc = 0x3BF85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF858u;
            // 0x3bf85c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF894u;
            goto label_3bf894;
        }
    }
    ctx->pc = 0x3BF860u;
    // 0x3bf860: 0xc6010824  lwc1        $f1, 0x824($s0)
    ctx->pc = 0x3bf860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf864: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x3bf864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf868: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3bf868u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bf86c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3BF86Cu;
    {
        const bool branch_taken_0x3bf86c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bf86c) {
            ctx->pc = 0x3BF890u;
            goto label_3bf890;
        }
    }
    ctx->pc = 0x3BF874u;
    // 0x3bf874: 0xc6010828  lwc1        $f1, 0x828($s0)
    ctx->pc = 0x3bf874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf878: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x3bf878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf87c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3bf87cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bf880: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3BF880u;
    {
        const bool branch_taken_0x3bf880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bf880) {
            ctx->pc = 0x3BF890u;
            goto label_3bf890;
        }
    }
    ctx->pc = 0x3BF888u;
    // 0x3bf888: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3BF888u;
    {
        const bool branch_taken_0x3bf888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf888) {
            ctx->pc = 0x3BF9C4u;
            goto label_3bf9c4;
        }
    }
    ctx->pc = 0x3BF890u;
label_3bf890:
    // 0x3bf890: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bf890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3bf894:
    // 0x3bf894: 0x26050820  addiu       $a1, $s0, 0x820
    ctx->pc = 0x3bf894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x3bf898: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x3BF898u;
    SET_GPR_U32(ctx, 31, 0x3BF8A0u);
    ctx->pc = 0x3BF89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF898u;
            // 0x3bf89c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF8A0u; }
        if (ctx->pc != 0x3BF8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF8A0u; }
        if (ctx->pc != 0x3BF8A0u) { return; }
    }
    ctx->pc = 0x3BF8A0u;
label_3bf8a0:
    // 0x3bf8a0: 0x26110820  addiu       $s1, $s0, 0x820
    ctx->pc = 0x3bf8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x3bf8a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3bf8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3bf8a8: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3BF8A8u;
    SET_GPR_U32(ctx, 31, 0x3BF8B0u);
    ctx->pc = 0x3BF8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF8A8u;
            // 0x3bf8ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF8B0u; }
        if (ctx->pc != 0x3BF8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF8B0u; }
        if (ctx->pc != 0x3BF8B0u) { return; }
    }
    ctx->pc = 0x3BF8B0u;
label_3bf8b0:
    // 0x3bf8b0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3bf8b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3bf8b4: 0xc04cc14  jal         func_133050
    ctx->pc = 0x3BF8B4u;
    SET_GPR_U32(ctx, 31, 0x3BF8BCu);
    ctx->pc = 0x3BF8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF8B4u;
            // 0x3bf8b8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF8BCu; }
        if (ctx->pc != 0x3BF8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF8BCu; }
        if (ctx->pc != 0x3BF8BCu) { return; }
    }
    ctx->pc = 0x3BF8BCu;
label_3bf8bc:
    // 0x3bf8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bf8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf8c0: 0xc04cc14  jal         func_133050
    ctx->pc = 0x3BF8C0u;
    SET_GPR_U32(ctx, 31, 0x3BF8C8u);
    ctx->pc = 0x3BF8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF8C0u;
            // 0x3bf8c4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF8C8u; }
        if (ctx->pc != 0x3BF8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF8C8u; }
        if (ctx->pc != 0x3BF8C8u) { return; }
    }
    ctx->pc = 0x3BF8C8u;
label_3bf8c8:
    // 0x3bf8c8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3bf8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3bf8cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3bf8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3bf8d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bf8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bf8d4: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x3bf8d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x3bf8d8: 0x0  nop
    ctx->pc = 0x3bf8d8u;
    // NOP
    // 0x3bf8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bf8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bf8e0: 0x0  nop
    ctx->pc = 0x3bf8e0u;
    // NOP
    // 0x3bf8e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bf8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bf8e8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3BF8E8u;
    {
        const bool branch_taken_0x3bf8e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bf8e8) {
            ctx->pc = 0x3BF8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF8E8u;
            // 0x3bf8ec: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF8F8u;
            goto label_3bf8f8;
        }
    }
    ctx->pc = 0x3BF8F0u;
    // 0x3bf8f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3bf8f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf8f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3bf8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3bf8f8:
    // 0x3bf8f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3bf8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3bf8fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bf8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bf900: 0x0  nop
    ctx->pc = 0x3bf900u;
    // NOP
    // 0x3bf904: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3bf904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bf908: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BF908u;
    {
        const bool branch_taken_0x3bf908 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BF90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF908u;
            // 0x3bf90c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf908) {
            ctx->pc = 0x3BF914u;
            goto label_3bf914;
        }
    }
    ctx->pc = 0x3BF910u;
    // 0x3bf910: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bf910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf914:
    // 0x3bf914: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3bf914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3bf918: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x3bf918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3bf91c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3bf91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3bf920: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3bf920u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bf924: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3bf924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3bf928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3bf928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3bf92c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3bf92cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bf930: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bf930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bf934: 0x0  nop
    ctx->pc = 0x3bf934u;
    // NOP
    // 0x3bf938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3bf938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3bf93c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bf93cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bf940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bf940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bf944: 0x0  nop
    ctx->pc = 0x3bf944u;
    // NOP
    // 0x3bf948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3bf948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3bf94c: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x3BF94Cu;
    SET_GPR_U32(ctx, 31, 0x3BF954u);
    ctx->pc = 0x3BF950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF94Cu;
            // 0x3bf950: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF954u; }
        if (ctx->pc != 0x3BF954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF954u; }
        if (ctx->pc != 0x3BF954u) { return; }
    }
    ctx->pc = 0x3BF954u;
label_3bf954:
    // 0x3bf954: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3bf954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x3bf958: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3bf958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x3bf95c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bf95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bf960: 0x0  nop
    ctx->pc = 0x3bf960u;
    // NOP
    // 0x3bf964: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3bf964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bf968: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bf968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bf96c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x3bf96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3bf970: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x3bf970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3bf974: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x3bf974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3bf978: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3bf978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bf97c: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x3BF97Cu;
    SET_GPR_U32(ctx, 31, 0x3BF984u);
    ctx->pc = 0x3BF980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF97Cu;
            // 0x3bf980: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF984u; }
        if (ctx->pc != 0x3BF984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF984u; }
        if (ctx->pc != 0x3BF984u) { return; }
    }
    ctx->pc = 0x3BF984u;
label_3bf984:
    // 0x3bf984: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x3bf984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3bf988: 0x26050830  addiu       $a1, $s0, 0x830
    ctx->pc = 0x3bf988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
    // 0x3bf98c: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x3BF98Cu;
    SET_GPR_U32(ctx, 31, 0x3BF994u);
    ctx->pc = 0x3BF990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF98Cu;
            // 0x3bf990: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF994u; }
        if (ctx->pc != 0x3BF994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF994u; }
        if (ctx->pc != 0x3BF994u) { return; }
    }
    ctx->pc = 0x3BF994u;
label_3bf994:
    // 0x3bf994: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3BF994u;
    {
        const bool branch_taken_0x3bf994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF994u;
            // 0x3bf998: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf994) {
            ctx->pc = 0x3BF9C4u;
            goto label_3bf9c4;
        }
    }
    ctx->pc = 0x3BF99Cu;
label_3bf99c:
    // 0x3bf99c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3BF99Cu;
    SET_GPR_U32(ctx, 31, 0x3BF9A4u);
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF9A4u; }
        if (ctx->pc != 0x3BF9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF9A4u; }
        if (ctx->pc != 0x3BF9A4u) { return; }
    }
    ctx->pc = 0x3BF9A4u;
label_3bf9a4:
    // 0x3bf9a4: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3bf9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x3bf9a8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3bf9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3bf9ac: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x3bf9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3bf9b0: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3bf9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3bf9b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bf9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf9b8: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3bf9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x3bf9bc: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3BF9BCu;
    SET_GPR_U32(ctx, 31, 0x3BF9C4u);
    ctx->pc = 0x3BF9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF9BCu;
            // 0x3bf9c0: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF9C4u; }
        if (ctx->pc != 0x3BF9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF9C4u; }
        if (ctx->pc != 0x3BF9C4u) { return; }
    }
    ctx->pc = 0x3BF9C4u;
label_3bf9c4:
    // 0x3bf9c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3bf9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf9c8:
    // 0x3bf9c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bf9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bf9cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3bf9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bf9d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3bf9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3bf9d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bf9d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bf9d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3bf9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3bf9dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bf9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bf9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF9E0u;
            // 0x3bf9e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF9E8u;
    // 0x3bf9e8: 0x0  nop
    ctx->pc = 0x3bf9e8u;
    // NOP
    // 0x3bf9ec: 0x0  nop
    ctx->pc = 0x3bf9ecu;
    // NOP
}
