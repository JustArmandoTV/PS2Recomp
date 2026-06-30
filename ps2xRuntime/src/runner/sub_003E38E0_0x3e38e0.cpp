#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E38E0
// Address: 0x3e38e0 - 0x3e3ae0
void sub_003E38E0_0x3e38e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E38E0_0x3e38e0");
#endif

    switch (ctx->pc) {
        case 0x3e3928u: goto label_3e3928;
        case 0x3e3934u: goto label_3e3934;
        case 0x3e394cu: goto label_3e394c;
        case 0x3e398cu: goto label_3e398c;
        case 0x3e39b4u: goto label_3e39b4;
        case 0x3e39d4u: goto label_3e39d4;
        case 0x3e39e0u: goto label_3e39e0;
        case 0x3e3a80u: goto label_3e3a80;
        case 0x3e3a98u: goto label_3e3a98;
        case 0x3e3aa8u: goto label_3e3aa8;
        case 0x3e3ab4u: goto label_3e3ab4;
        default: break;
    }

    ctx->pc = 0x3e38e0u;

    // 0x3e38e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e38e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3e38e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e38e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e38ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e38ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e38f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e38f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e38f4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e38f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3e38f8: 0x94900192  lhu         $s0, 0x192($a0)
    ctx->pc = 0x3e38f8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 402)));
    // 0x3e38fc: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3e38fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
    // 0x3e3900: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x3e3900u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e3904: 0x14600071  bnez        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x3E3904u;
    {
        const bool branch_taken_0x3e3904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3904u;
            // 0x3e3908: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3904) {
            ctx->pc = 0x3E3ACCu;
            goto label_3e3acc;
        }
    }
    ctx->pc = 0x3E390Cu;
    // 0x3e390c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3e3910: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x3e3910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x3e3914: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3e3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3e3918: 0xc6200280  lwc1        $f0, 0x280($s1)
    ctx->pc = 0x3e3918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e391c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3e391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3920: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x3E3920u;
    SET_GPR_U32(ctx, 31, 0x3E3928u);
    ctx->pc = 0x3E3924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3920u;
            // 0x3e3924: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3928u; }
        if (ctx->pc != 0x3E3928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3928u; }
        if (ctx->pc != 0x3E3928u) { return; }
    }
    ctx->pc = 0x3E3928u;
label_3e3928:
    // 0x3e3928: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e3928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e392c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3E392Cu;
    SET_GPR_U32(ctx, 31, 0x3E3934u);
    ctx->pc = 0x3E3930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E392Cu;
            // 0x3e3930: 0x26250170  addiu       $a1, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3934u; }
        if (ctx->pc != 0x3E3934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3934u; }
        if (ctx->pc != 0x3E3934u) { return; }
    }
    ctx->pc = 0x3E3934u;
label_3e3934:
    // 0x3e3934: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x3e3934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x3e3938: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e3938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e393c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e393cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e3940: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e3940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3944: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x3E3944u;
    SET_GPR_U32(ctx, 31, 0x3E394Cu);
    ctx->pc = 0x3E3948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3944u;
            // 0x3e3948: 0x26260140  addiu       $a2, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E394Cu; }
        if (ctx->pc != 0x3E394Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E394Cu; }
        if (ctx->pc != 0x3E394Cu) { return; }
    }
    ctx->pc = 0x3E394Cu;
label_3e394c:
    // 0x3e394c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e3950: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3e3950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x3e3954: 0x8c443da0  lw          $a0, 0x3DA0($v0)
    ctx->pc = 0x3e3954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
    // 0x3e3958: 0xc48100b8  lwc1        $f1, 0xB8($a0)
    ctx->pc = 0x3e3958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e395c: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x3e395cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3e3960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e3960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e3964: 0x0  nop
    ctx->pc = 0x3e3964u;
    // NOP
    // 0x3e3968: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e3968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e396c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e396cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e3970: 0x0  nop
    ctx->pc = 0x3e3970u;
    // NOP
    // 0x3e3974: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e3974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e3978: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e3978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e397c: 0x0  nop
    ctx->pc = 0x3e397cu;
    // NOP
    // 0x3e3980: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3e3980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e3984: 0xc0477a8  jal         func_11DEA0
    ctx->pc = 0x3E3984u;
    SET_GPR_U32(ctx, 31, 0x3E398Cu);
    ctx->pc = 0x3E3988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3984u;
            // 0x3e3988: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E398Cu; }
        if (ctx->pc != 0x3E398Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E398Cu; }
        if (ctx->pc != 0x3E398Cu) { return; }
    }
    ctx->pc = 0x3E398Cu;
label_3e398c:
    // 0x3e398c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x3e398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e3990: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3e3990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3e3994: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e3994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e3998: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3e3998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3e399c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3e399cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e39a0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3e39a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e39a4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3e39a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3e39a8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x3e39a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x3e39ac: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3E39ACu;
    SET_GPR_U32(ctx, 31, 0x3E39B4u);
    ctx->pc = 0x3E39B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E39ACu;
            // 0x3e39b0: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E39B4u; }
        if (ctx->pc != 0x3E39B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E39B4u; }
        if (ctx->pc != 0x3E39B4u) { return; }
    }
    ctx->pc = 0x3E39B4u;
label_3e39b4:
    // 0x3e39b4: 0x96220192  lhu         $v0, 0x192($s1)
    ctx->pc = 0x3e39b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 402)));
    // 0x3e39b8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3e39b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3e39bc: 0x50620038  beql        $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3E39BCu;
    {
        const bool branch_taken_0x3e39bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e39bc) {
            ctx->pc = 0x3E39C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E39BCu;
            // 0x3e39c0: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3AA0u;
            goto label_3e3aa0;
        }
    }
    ctx->pc = 0x3E39C4u;
    // 0x3e39c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3e39c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e39c8: 0x26250140  addiu       $a1, $s1, 0x140
    ctx->pc = 0x3e39c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x3e39cc: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x3E39CCu;
    SET_GPR_U32(ctx, 31, 0x3E39D4u);
    ctx->pc = 0x3E39D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E39CCu;
            // 0x3e39d0: 0x26260150  addiu       $a2, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E39D4u; }
        if (ctx->pc != 0x3E39D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E39D4u; }
        if (ctx->pc != 0x3E39D4u) { return; }
    }
    ctx->pc = 0x3E39D4u;
label_3e39d4:
    // 0x3e39d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3e39d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e39d8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3E39D8u;
    SET_GPR_U32(ctx, 31, 0x3E39E0u);
    ctx->pc = 0x3E39DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E39D8u;
            // 0x3e39dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E39E0u; }
        if (ctx->pc != 0x3E39E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E39E0u; }
        if (ctx->pc != 0x3E39E0u) { return; }
    }
    ctx->pc = 0x3E39E0u;
label_3e39e0:
    // 0x3e39e0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x3e39e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e39e4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e39e8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3e39e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e39ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3e39ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e39f0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3e39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e39f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3e39f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e39f8: 0xc7a4003c  lwc1        $f4, 0x3C($sp)
    ctx->pc = 0x3e39f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e39fc: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x3e39fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3e3a00: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3e3a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3e3a04: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3e3a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3e3a08: 0xe7a4004c  swc1        $f4, 0x4C($sp)
    ctx->pc = 0x3e3a08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3e3a0c: 0xc6240140  lwc1        $f4, 0x140($s1)
    ctx->pc = 0x3e3a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3a10: 0xc443a080  lwc1        $f3, -0x5F80($v0)
    ctx->pc = 0x3e3a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e3a14: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x3e3a14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3e3a18: 0xc6240144  lwc1        $f4, 0x144($s1)
    ctx->pc = 0x3e3a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3a1c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e3a20: 0xc442a084  lwc1        $f2, -0x5F7C($v0)
    ctx->pc = 0x3e3a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e3a24: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x3e3a24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3e3a28: 0xc6240148  lwc1        $f4, 0x148($s1)
    ctx->pc = 0x3e3a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3a2c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e3a30: 0xc441a088  lwc1        $f1, -0x5F78($v0)
    ctx->pc = 0x3e3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3a34: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x3e3a34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3e3a38: 0xc624014c  lwc1        $f4, 0x14C($s1)
    ctx->pc = 0x3e3a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3a3c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e3a40: 0xc440a08c  lwc1        $f0, -0x5F74($v0)
    ctx->pc = 0x3e3a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3a44: 0xe7a4005c  swc1        $f4, 0x5C($sp)
    ctx->pc = 0x3e3a44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3e3a48: 0xc6240150  lwc1        $f4, 0x150($s1)
    ctx->pc = 0x3e3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3a4c: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x3e3a4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3e3a50: 0xc6240154  lwc1        $f4, 0x154($s1)
    ctx->pc = 0x3e3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3a54: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x3e3a54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3e3a58: 0xc6240158  lwc1        $f4, 0x158($s1)
    ctx->pc = 0x3e3a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3a5c: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x3e3a5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3e3a60: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3e3a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x3e3a64: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x3e3a64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3e3a68: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3e3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x3e3a6c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x3e3a6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3e3a70: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3e3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x3e3a74: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x3e3a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3e3a78: 0xc04c994  jal         func_132650
    ctx->pc = 0x3E3A78u;
    SET_GPR_U32(ctx, 31, 0x3E3A80u);
    ctx->pc = 0x3E3A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3A78u;
            // 0x3e3a7c: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3A80u; }
        if (ctx->pc != 0x3E3A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3A80u; }
        if (ctx->pc != 0x3E3A80u) { return; }
    }
    ctx->pc = 0x3E3A80u;
label_3e3a80:
    // 0x3e3a80: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3e3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3e3a84: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x3e3a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x3e3a88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e3a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e3a8c: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x3e3a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x3e3a90: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3E3A90u;
    SET_GPR_U32(ctx, 31, 0x3E3A98u);
    ctx->pc = 0x3E3A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3A90u;
            // 0x3e3a94: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3A98u; }
        if (ctx->pc != 0x3E3A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3A98u; }
        if (ctx->pc != 0x3E3A98u) { return; }
    }
    ctx->pc = 0x3E3A98u;
label_3e3a98:
    // 0x3e3a98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3A98u;
    {
        const bool branch_taken_0x3e3a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3A98u;
            // 0x3e3a9c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a98) {
            ctx->pc = 0x3E3AACu;
            goto label_3e3aac;
        }
    }
    ctx->pc = 0x3E3AA0u;
label_3e3aa0:
    // 0x3e3aa0: 0xc0c6278  jal         func_3189E0
    ctx->pc = 0x3E3AA0u;
    SET_GPR_U32(ctx, 31, 0x3E3AA8u);
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3AA8u; }
        if (ctx->pc != 0x3E3AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3AA8u; }
        if (ctx->pc != 0x3E3AA8u) { return; }
    }
    ctx->pc = 0x3E3AA8u;
label_3e3aa8:
    // 0x3e3aa8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3e3aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3e3aac:
    // 0x3e3aac: 0xc04c720  jal         func_131C80
    ctx->pc = 0x3E3AACu;
    SET_GPR_U32(ctx, 31, 0x3E3AB4u);
    ctx->pc = 0x3E3AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3AACu;
            // 0x3e3ab0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3AB4u; }
        if (ctx->pc != 0x3E3AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3AB4u; }
        if (ctx->pc != 0x3E3AB4u) { return; }
    }
    ctx->pc = 0x3E3AB4u;
label_3e3ab4:
    // 0x3e3ab4: 0x96240190  lhu         $a0, 0x190($s1)
    ctx->pc = 0x3e3ab4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x3e3ab8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e3ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e3abc: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3ABCu;
    {
        const bool branch_taken_0x3e3abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e3abc) {
            ctx->pc = 0x3E3AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3ABCu;
            // 0x3e3ac0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3AD0u;
            goto label_3e3ad0;
        }
    }
    ctx->pc = 0x3E3AC4u;
    // 0x3e3ac4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e3ac8: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x3e3ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_3e3acc:
    // 0x3e3acc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e3accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e3ad0:
    // 0x3e3ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e3ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e3ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e3ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3AD8u;
            // 0x3e3adc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E3AE0u;
}
