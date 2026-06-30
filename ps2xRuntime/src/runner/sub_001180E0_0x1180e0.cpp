#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001180E0
// Address: 0x1180e0 - 0x1181e0
void sub_001180E0_0x1180e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001180E0_0x1180e0");
#endif

    switch (ctx->pc) {
        case 0x11813cu: goto label_11813c;
        case 0x118164u: goto label_118164;
        case 0x11817cu: goto label_11817c;
        case 0x1181d0u: goto label_1181d0;
        default: break;
    }

    ctx->pc = 0x1180e0u;

    // 0x1180e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1180e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1180e4: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x1180e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x1180e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1180e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1180ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1180ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1180f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1180f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1180f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180f8: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x1180f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1180fc: 0x820019  multu       $a0, $v0
    ctx->pc = 0x1180fcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x118100: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x118100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x118104: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x118104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x118108: 0x70008010  mfhi1       $s0
    ctx->pc = 0x118108u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x11810c: 0x3012  mflo        $a2
    ctx->pc = 0x11810cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x118110: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x118110u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x118114: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x118114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x118118: 0x2010  mfhi        $a0
    ctx->pc = 0x118118u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x11811c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11811cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x118120: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x118120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x118124: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x118124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x118128: 0x70003012  mflo1       $a2
    ctx->pc = 0x118128u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x11812c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11812cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x118130: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x118130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x118134: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x118134u;
    SET_GPR_U32(ctx, 31, 0x11813Cu);
    ctx->pc = 0x118138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118134u;
            // 0x118138: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11813Cu; }
        if (ctx->pc != 0x11813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11813Cu; }
        if (ctx->pc != 0x11813Cu) { return; }
    }
    ctx->pc = 0x11813Cu;
label_11813c:
    // 0x11813c: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x11813cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x118140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118148: 0x3e00008  jr          $ra
    ctx->pc = 0x118148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118148u;
            // 0x11814c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118150u;
    // 0x118150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118154: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118154u;
    {
        const bool branch_taken_0x118154 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x118158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118154u;
            // 0x118158: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118154) {
            ctx->pc = 0x11816Cu;
            goto label_11816c;
        }
    }
    ctx->pc = 0x11815Cu;
    // 0x11815c: 0xc048d1e  jal         func_123478
    ctx->pc = 0x11815Cu;
    SET_GPR_U32(ctx, 31, 0x118164u);
    ctx->pc = 0x123478u;
    if (runtime->hasFunction(0x123478u)) {
        auto targetFn = runtime->lookupFunction(0x123478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118164u; }
        if (ctx->pc != 0x118164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123478_0x123478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118164u; }
        if (ctx->pc != 0x118164u) { return; }
    }
    ctx->pc = 0x118164u;
label_118164:
    // 0x118164: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x118164u;
    {
        const bool branch_taken_0x118164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118164u;
            // 0x118168: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118164) {
            ctx->pc = 0x118180u;
            goto label_118180;
        }
    }
    ctx->pc = 0x11816Cu;
label_11816c:
    // 0x11816c: 0x4107a  dsrl        $v0, $a0, 1
    ctx->pc = 0x11816cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x118170: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x118170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x118174: 0xc048d1e  jal         func_123478
    ctx->pc = 0x118174u;
    SET_GPR_U32(ctx, 31, 0x11817Cu);
    ctx->pc = 0x118178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118174u;
            // 0x118178: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123478u;
    if (runtime->hasFunction(0x123478u)) {
        auto targetFn = runtime->lookupFunction(0x123478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11817Cu; }
        if (ctx->pc != 0x11817Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123478_0x123478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11817Cu; }
        if (ctx->pc != 0x11817Cu) { return; }
    }
    ctx->pc = 0x11817Cu;
label_11817c:
    // 0x11817c: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x11817cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_118180:
    // 0x118180: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x118180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x118184: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x118184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x118188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11818c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11818cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118190: 0x0  nop
    ctx->pc = 0x118190u;
    // NOP
    // 0x118194: 0x0  nop
    ctx->pc = 0x118194u;
    // NOP
    // 0x118198: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x118198u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x11819c: 0x3e00008  jr          $ra
    ctx->pc = 0x11819Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1181A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11819Cu;
            // 0x1181a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1181A4u;
    // 0x1181a4: 0x0  nop
    ctx->pc = 0x1181a4u;
    // NOP
    // 0x1181a8: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x1181a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x1181ac: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x1181acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x1181b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1181b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1181b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1181b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1181b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1181b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1181bc: 0x0  nop
    ctx->pc = 0x1181bcu;
    // NOP
    // 0x1181c0: 0x0  nop
    ctx->pc = 0x1181c0u;
    // NOP
    // 0x1181c4: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1181c4u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x1181c8: 0xc048dac  jal         func_1236B0
    ctx->pc = 0x1181C8u;
    SET_GPR_U32(ctx, 31, 0x1181D0u);
    ctx->pc = 0x1236B0u;
    if (runtime->hasFunction(0x1236B0u)) {
        auto targetFn = runtime->lookupFunction(0x1236B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181D0u; }
        if (ctx->pc != 0x1181D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001236B0_0x1236b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181D0u; }
        if (ctx->pc != 0x1181D0u) { return; }
    }
    ctx->pc = 0x1181D0u;
label_1181d0:
    // 0x1181d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1181d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1181d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1181D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1181D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1181D4u;
            // 0x1181d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1181DCu;
    // 0x1181dc: 0x0  nop
    ctx->pc = 0x1181dcu;
    // NOP
}
