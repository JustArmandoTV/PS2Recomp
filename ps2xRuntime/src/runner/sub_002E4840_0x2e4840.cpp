#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4840
// Address: 0x2e4840 - 0x2e4940
void sub_002E4840_0x2e4840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4840_0x2e4840");
#endif

    switch (ctx->pc) {
        case 0x2e4884u: goto label_2e4884;
        case 0x2e4894u: goto label_2e4894;
        case 0x2e48a0u: goto label_2e48a0;
        case 0x2e48b4u: goto label_2e48b4;
        case 0x2e4910u: goto label_2e4910;
        case 0x2e4928u: goto label_2e4928;
        default: break;
    }

    ctx->pc = 0x2e4840u;

    // 0x2e4840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e4844: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2e4844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x2e4848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e484c: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x2e484cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x2e4850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4854: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4858: 0xc48100a0  lwc1        $f1, 0xA0($a0)
    ctx->pc = 0x2e4858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e485c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e485cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4864: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e4864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4868: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e4868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e486c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e486cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e4870: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e4870u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e4874: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2e4874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2e4878: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e4878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e487c: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x2E487Cu;
    SET_GPR_U32(ctx, 31, 0x2E4884u);
    ctx->pc = 0x2E4880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E487Cu;
            // 0x2e4880: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4884u; }
        if (ctx->pc != 0x2E4884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4884u; }
        if (ctx->pc != 0x2E4884u) { return; }
    }
    ctx->pc = 0x2E4884u;
label_2e4884:
    // 0x2e4884: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2e4884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2e4888: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2e4888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e488c: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x2E488Cu;
    SET_GPR_U32(ctx, 31, 0x2E4894u);
    ctx->pc = 0x2E4890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E488Cu;
            // 0x2e4890: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4894u; }
        if (ctx->pc != 0x2E4894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4894u; }
        if (ctx->pc != 0x2E4894u) { return; }
    }
    ctx->pc = 0x2E4894u;
label_2e4894:
    // 0x2e4894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4898: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2E4898u;
    SET_GPR_U32(ctx, 31, 0x2E48A0u);
    ctx->pc = 0x2E489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4898u;
            // 0x2e489c: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E48A0u; }
        if (ctx->pc != 0x2E48A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E48A0u; }
        if (ctx->pc != 0x2E48A0u) { return; }
    }
    ctx->pc = 0x2E48A0u;
label_2e48a0:
    // 0x2e48a0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2e48a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2e48a4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2e48a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2e48a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e48a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e48ac: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E48ACu;
    SET_GPR_U32(ctx, 31, 0x2E48B4u);
    ctx->pc = 0x2E48B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48ACu;
            // 0x2e48b0: 0x24c61cb0  addiu       $a2, $a2, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E48B4u; }
        if (ctx->pc != 0x2E48B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E48B4u; }
        if (ctx->pc != 0x2E48B4u) { return; }
    }
    ctx->pc = 0x2E48B4u;
label_2e48b4:
    // 0x2e48b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e48b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e48b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e48b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e48bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E48BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E48C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48BCu;
            // 0x2e48c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E48C4u;
    // 0x2e48c4: 0x0  nop
    ctx->pc = 0x2e48c4u;
    // NOP
    // 0x2e48c8: 0x0  nop
    ctx->pc = 0x2e48c8u;
    // NOP
    // 0x2e48cc: 0x0  nop
    ctx->pc = 0x2e48ccu;
    // NOP
    // 0x2e48d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e48d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e48d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e48d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e48d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e48d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e48dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e48dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e48e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e48e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e48e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E48E4u;
    {
        const bool branch_taken_0x2e48e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48E4u;
            // 0x2e48e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48e4) {
            ctx->pc = 0x2E4928u;
            goto label_2e4928;
        }
    }
    ctx->pc = 0x2E48ECu;
    // 0x2e48ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2e48f0: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x2e48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
    // 0x2e48f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E48F4u;
    {
        const bool branch_taken_0x2e48f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48F4u;
            // 0x2e48f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48f4) {
            ctx->pc = 0x2E4910u;
            goto label_2e4910;
        }
    }
    ctx->pc = 0x2E48FCu;
    // 0x2e48fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2e4900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4904: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2e4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2e4908: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x2E4908u;
    SET_GPR_U32(ctx, 31, 0x2E4910u);
    ctx->pc = 0x2E490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4908u;
            // 0x2e490c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4910u; }
        if (ctx->pc != 0x2E4910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4910u; }
        if (ctx->pc != 0x2E4910u) { return; }
    }
    ctx->pc = 0x2E4910u;
label_2e4910:
    // 0x2e4910: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2e4910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2e4914: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e4914u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e4918: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4918u;
    {
        const bool branch_taken_0x2e4918 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e4918) {
            ctx->pc = 0x2E491Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4918u;
            // 0x2e491c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E492Cu;
            goto label_2e492c;
        }
    }
    ctx->pc = 0x2E4920u;
    // 0x2e4920: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2E4920u;
    SET_GPR_U32(ctx, 31, 0x2E4928u);
    ctx->pc = 0x2E4924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4920u;
            // 0x2e4924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4928u; }
        if (ctx->pc != 0x2E4928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4928u; }
        if (ctx->pc != 0x2E4928u) { return; }
    }
    ctx->pc = 0x2E4928u;
label_2e4928:
    // 0x2e4928: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e4928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e492c:
    // 0x2e492c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4938: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E493Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4938u;
            // 0x2e493c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4940u;
}
