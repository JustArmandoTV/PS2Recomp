#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0850
// Address: 0x2e0850 - 0x2e0b10
void sub_002E0850_0x2e0850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0850_0x2e0850");
#endif

    switch (ctx->pc) {
        case 0x2e0930u: goto label_2e0930;
        case 0x2e0940u: goto label_2e0940;
        case 0x2e0960u: goto label_2e0960;
        case 0x2e096cu: goto label_2e096c;
        case 0x2e0980u: goto label_2e0980;
        case 0x2e0998u: goto label_2e0998;
        case 0x2e09ecu: goto label_2e09ec;
        case 0x2e0a38u: goto label_2e0a38;
        case 0x2e0a44u: goto label_2e0a44;
        case 0x2e0a64u: goto label_2e0a64;
        case 0x2e0a74u: goto label_2e0a74;
        case 0x2e0a90u: goto label_2e0a90;
        case 0x2e0a9cu: goto label_2e0a9c;
        case 0x2e0ab4u: goto label_2e0ab4;
        case 0x2e0accu: goto label_2e0acc;
        case 0x2e0ae0u: goto label_2e0ae0;
        default: break;
    }

    ctx->pc = 0x2e0850u;

    // 0x2e0850: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e0850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e0854: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e0854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0858: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e0858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e085c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e085cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0860: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e0860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e0864: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e0864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e0868: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e0868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e086c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e086cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e0870: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e0870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e0874: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e0874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e0878: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e0878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e087c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e087cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0880: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e0884: 0x8c930040  lw          $s3, 0x40($a0)
    ctx->pc = 0x2e0884u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2e0888: 0x94840050  lhu         $a0, 0x50($a0)
    ctx->pc = 0x2e0888u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2e088c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E088Cu;
    {
        const bool branch_taken_0x2e088c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E0890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E088Cu;
            // 0x2e0890: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e088c) {
            ctx->pc = 0x2E089Cu;
            goto label_2e089c;
        }
    }
    ctx->pc = 0x2E0894u;
    // 0x2e0894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0894u;
    {
        const bool branch_taken_0x2e0894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0894u;
            // 0x2e0898: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0894) {
            ctx->pc = 0x2E08A0u;
            goto label_2e08a0;
        }
    }
    ctx->pc = 0x2E089Cu;
label_2e089c:
    // 0x2e089c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e089cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e08a0:
    // 0x2e08a0: 0x6030007  bgezl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E08A0u;
    {
        const bool branch_taken_0x2e08a0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2e08a0) {
            ctx->pc = 0x2E08A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E08A0u;
            // 0x2e08a4: 0x9663001c  lhu         $v1, 0x1C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E08C0u;
            goto label_2e08c0;
        }
    }
    ctx->pc = 0x2E08A8u;
    // 0x2e08a8: 0x96230052  lhu         $v1, 0x52($s1)
    ctx->pc = 0x2e08a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2e08ac: 0x5c60000d  bgtzl       $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E08ACu;
    {
        const bool branch_taken_0x2e08ac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e08ac) {
            ctx->pc = 0x2E08B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E08ACu;
            // 0x2e08b0: 0xc6210048  lwc1        $f1, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E08E4u;
            goto label_2e08e4;
        }
    }
    ctx->pc = 0x2E08B4u;
    // 0x2e08b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e08b8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2E08B8u;
    {
        const bool branch_taken_0x2e08b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E08BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E08B8u;
            // 0x2e08bc: 0xa6230050  sh          $v1, 0x50($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08b8) {
            ctx->pc = 0x2E0AE0u;
            goto label_2e0ae0;
        }
    }
    ctx->pc = 0x2E08C0u;
label_2e08c0:
    // 0x2e08c0: 0x96240052  lhu         $a0, 0x52($s1)
    ctx->pc = 0x2e08c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2e08c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e08c8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2e08c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e08cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E08CCu;
    {
        const bool branch_taken_0x2e08cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e08cc) {
            ctx->pc = 0x2E08E0u;
            goto label_2e08e0;
        }
    }
    ctx->pc = 0x2E08D4u;
    // 0x2e08d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e08d8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2E08D8u;
    {
        const bool branch_taken_0x2e08d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E08DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E08D8u;
            // 0x2e08dc: 0xa6230050  sh          $v1, 0x50($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08d8) {
            ctx->pc = 0x2E0AE0u;
            goto label_2e0ae0;
        }
    }
    ctx->pc = 0x2E08E0u;
label_2e08e0:
    // 0x2e08e0: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x2e08e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e08e4:
    // 0x2e08e4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2e08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e08e8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2e08e8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e08ec: 0x0  nop
    ctx->pc = 0x2e08ecu;
    // NOP
    // 0x2e08f0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2e08f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e08f4: 0x4601a0c3  div.s       $f3, $f20, $f1
    ctx->pc = 0x2e08f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[3] = ctx->f[20] / ctx->f[1];
    // 0x2e08f8: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x2e08f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e08fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e08fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0900: 0x0  nop
    ctx->pc = 0x2e0900u;
    // NOP
    // 0x2e0904: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2e0904u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e0908: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2e0908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e090c: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2e090cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2e0910: 0x96360052  lhu         $s6, 0x52($s1)
    ctx->pc = 0x2e0910u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2e0914: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e0914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e0918: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x2e0918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2e091c: 0x16a900  sll         $s5, $s6, 4
    ctx->pc = 0x2e091cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2e0920: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x2e0920u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e0924: 0x552821  addu        $a1, $v0, $s5
    ctx->pc = 0x2e0924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2e0928: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2E0928u;
    SET_GPR_U32(ctx, 31, 0x2E0930u);
    ctx->pc = 0x2E092Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0928u;
            // 0x2e092c: 0x543021  addu        $a2, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0930u; }
        if (ctx->pc != 0x2E0930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0930u; }
        if (ctx->pc != 0x2E0930u) { return; }
    }
    ctx->pc = 0x2E0930u;
label_2e0930:
    // 0x2e0930: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e0930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e0934: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2e0934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e0938: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E0938u;
    SET_GPR_U32(ctx, 31, 0x2E0940u);
    ctx->pc = 0x2E093Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0938u;
            // 0x2e093c: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0940u; }
        if (ctx->pc != 0x2E0940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0940u; }
        if (ctx->pc != 0x2E0940u) { return; }
    }
    ctx->pc = 0x2E0940u;
label_2e0940:
    // 0x2e0940: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e0940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0944: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2E0944u;
    {
        const bool branch_taken_0x2e0944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0944) {
            ctx->pc = 0x2E0988u;
            goto label_2e0988;
        }
    }
    ctx->pc = 0x2E094Cu;
    // 0x2e094c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e0950: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e0950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0954: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x2e0954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e0958: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0958u;
    SET_GPR_U32(ctx, 31, 0x2E0960u);
    ctx->pc = 0x2E095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0958u;
            // 0x2e095c: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0960u; }
        if (ctx->pc != 0x2E0960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0960u; }
        if (ctx->pc != 0x2E0960u) { return; }
    }
    ctx->pc = 0x2E0960u;
label_2e0960:
    // 0x2e0960: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e0960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0964: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E0964u;
    SET_GPR_U32(ctx, 31, 0x2E096Cu);
    ctx->pc = 0x2E0968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0964u;
            // 0x2e0968: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E096Cu; }
        if (ctx->pc != 0x2E096Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E096Cu; }
        if (ctx->pc != 0x2E096Cu) { return; }
    }
    ctx->pc = 0x2E096Cu;
label_2e096c:
    // 0x2e096c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e096cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e0970: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e0970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e0974: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2e0974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e0978: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E0978u;
    SET_GPR_U32(ctx, 31, 0x2E0980u);
    ctx->pc = 0x2E097Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0978u;
            // 0x2e097c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0980u; }
        if (ctx->pc != 0x2E0980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0980u; }
        if (ctx->pc != 0x2E0980u) { return; }
    }
    ctx->pc = 0x2E0980u;
label_2e0980:
    // 0x2e0980: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2E0980u;
    {
        const bool branch_taken_0x2e0980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0980u;
            // 0x2e0984: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0980) {
            ctx->pc = 0x2E0AE4u;
            goto label_2e0ae4;
        }
    }
    ctx->pc = 0x2E0988u;
label_2e0988:
    // 0x2e0988: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2e0988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e098c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x2E098Cu;
    {
        const bool branch_taken_0x2e098c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e098c) {
            ctx->pc = 0x2E09F8u;
            goto label_2e09f8;
        }
    }
    ctx->pc = 0x2E0994u;
    // 0x2e0994: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x2e0994u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2e0998:
    // 0x2e0998: 0x1ec00003  bgtz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0998u;
    {
        const bool branch_taken_0x2e0998 = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x2e0998) {
            ctx->pc = 0x2E09A8u;
            goto label_2e09a8;
        }
    }
    ctx->pc = 0x2E09A0u;
    // 0x2e09a0: 0x6000015  bltz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E09A0u;
    {
        const bool branch_taken_0x2e09a0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2e09a0) {
            ctx->pc = 0x2E09F8u;
            goto label_2e09f8;
        }
    }
    ctx->pc = 0x2E09A8u;
label_2e09a8:
    // 0x2e09a8: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x2e09a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2e09ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e09acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e09b0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2e09b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e09b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E09B4u;
    {
        const bool branch_taken_0x2e09b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e09b4) {
            ctx->pc = 0x2E09C8u;
            goto label_2e09c8;
        }
    }
    ctx->pc = 0x2E09BCu;
    // 0x2e09bc: 0x1e00000e  bgtz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E09BCu;
    {
        const bool branch_taken_0x2e09bc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2e09bc) {
            ctx->pc = 0x2E09F8u;
            goto label_2e09f8;
        }
    }
    ctx->pc = 0x2E09C4u;
    // 0x2e09c4: 0x0  nop
    ctx->pc = 0x2e09c4u;
    // NOP
label_2e09c8:
    // 0x2e09c8: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x2e09c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2e09cc: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x2e09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2e09d0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2e09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e09d4: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x2e09d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2e09d8: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x2e09d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e09dc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2e09dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2e09e0: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x2e09e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2e09e4: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E09E4u;
    SET_GPR_U32(ctx, 31, 0x2E09ECu);
    ctx->pc = 0x2E09E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E09E4u;
            // 0x2e09e8: 0x752821  addu        $a1, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E09ECu; }
        if (ctx->pc != 0x2E09ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E09ECu; }
        if (ctx->pc != 0x2E09ECu) { return; }
    }
    ctx->pc = 0x2E09ECu;
label_2e09ec:
    // 0x2e09ec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2e09ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e09f0: 0x4500ffe9  bc1f        . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E09F0u;
    {
        const bool branch_taken_0x2e09f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e09f0) {
            ctx->pc = 0x2E0998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0998;
        }
    }
    ctx->pc = 0x2E09F8u;
label_2e09f8:
    // 0x2e09f8: 0x1ac00006  blez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E09F8u;
    {
        const bool branch_taken_0x2e09f8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2E09FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E09F8u;
            // 0x2e09fc: 0xa6360052  sh          $s6, 0x52($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09f8) {
            ctx->pc = 0x2E0A14u;
            goto label_2e0a14;
        }
    }
    ctx->pc = 0x2E0A00u;
    // 0x2e0a00: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x2e0a00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2e0a04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e0a08: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2e0a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e0a0c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E0A0Cu;
    {
        const bool branch_taken_0x2e0a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a0c) {
            ctx->pc = 0x2E0A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0A0Cu;
            // 0x2e0a10: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0A7Cu;
            goto label_2e0a7c;
        }
    }
    ctx->pc = 0x2E0A14u;
label_2e0a14:
    // 0x2e0a14: 0x2d02023  subu        $a0, $s6, $s0
    ctx->pc = 0x2e0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2e0a18: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2e0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e0a1c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2e0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2e0a20: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x2e0a20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e0a24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e0a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e0a28: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e0a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0a2c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e0a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0a30: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0A30u;
    SET_GPR_U32(ctx, 31, 0x2E0A38u);
    ctx->pc = 0x2E0A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0A30u;
            // 0x2e0a34: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A38u; }
        if (ctx->pc != 0x2E0A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A38u; }
        if (ctx->pc != 0x2E0A38u) { return; }
    }
    ctx->pc = 0x2E0A38u;
label_2e0a38:
    // 0x2e0a38: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e0a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0a3c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E0A3Cu;
    SET_GPR_U32(ctx, 31, 0x2E0A44u);
    ctx->pc = 0x2E0A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0A3Cu;
            // 0x2e0a40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A44u; }
        if (ctx->pc != 0x2E0A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A44u; }
        if (ctx->pc != 0x2E0A44u) { return; }
    }
    ctx->pc = 0x2E0A44u;
label_2e0a44:
    // 0x2e0a44: 0x96230052  lhu         $v1, 0x52($s1)
    ctx->pc = 0x2e0a44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2e0a48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e0a48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e0a4c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e0a50: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e0a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e0a54: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2e0a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0a58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e0a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e0a5c: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E0A5Cu;
    SET_GPR_U32(ctx, 31, 0x2E0A64u);
    ctx->pc = 0x2E0A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0A5Cu;
            // 0x2e0a60: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A64u; }
        if (ctx->pc != 0x2E0A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A64u; }
        if (ctx->pc != 0x2E0A64u) { return; }
    }
    ctx->pc = 0x2E0A64u;
label_2e0a64:
    // 0x2e0a64: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2e0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2e0a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a6c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E0A6Cu;
    SET_GPR_U32(ctx, 31, 0x2E0A74u);
    ctx->pc = 0x2E0A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0A6Cu;
            // 0x2e0a70: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A74u; }
        if (ctx->pc != 0x2E0A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A74u; }
        if (ctx->pc != 0x2E0A74u) { return; }
    }
    ctx->pc = 0x2E0A74u;
label_2e0a74:
    // 0x2e0a74: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E0A74u;
    {
        const bool branch_taken_0x2e0a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a74) {
            ctx->pc = 0x2E0AE0u;
            goto label_2e0ae0;
        }
    }
    ctx->pc = 0x2E0A7Cu;
label_2e0a7c:
    // 0x2e0a7c: 0x169100  sll         $s2, $s6, 4
    ctx->pc = 0x2e0a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2e0a80: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e0a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0a84: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x2e0a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e0a88: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0A88u;
    SET_GPR_U32(ctx, 31, 0x2E0A90u);
    ctx->pc = 0x2E0A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0A88u;
            // 0x2e0a8c: 0x523021  addu        $a2, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A90u; }
        if (ctx->pc != 0x2E0A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A90u; }
        if (ctx->pc != 0x2E0A90u) { return; }
    }
    ctx->pc = 0x2E0A90u;
label_2e0a90:
    // 0x2e0a90: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e0a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0a94: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E0A94u;
    SET_GPR_U32(ctx, 31, 0x2E0A9Cu);
    ctx->pc = 0x2E0A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0A94u;
            // 0x2e0a98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A9Cu; }
        if (ctx->pc != 0x2E0A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A9Cu; }
        if (ctx->pc != 0x2E0A9Cu) { return; }
    }
    ctx->pc = 0x2E0A9Cu;
label_2e0a9c:
    // 0x2e0a9c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e0aa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e0aa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e0aa4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e0aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e0aa8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2e0aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0aac: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E0AACu;
    SET_GPR_U32(ctx, 31, 0x2E0AB4u);
    ctx->pc = 0x2E0AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0AACu;
            // 0x2e0ab0: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0AB4u; }
        if (ctx->pc != 0x2E0AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0AB4u; }
        if (ctx->pc != 0x2E0AB4u) { return; }
    }
    ctx->pc = 0x2E0AB4u;
label_2e0ab4:
    // 0x2e0ab4: 0x6030007  bgezl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0AB4u;
    {
        const bool branch_taken_0x2e0ab4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2e0ab4) {
            ctx->pc = 0x2E0AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0AB4u;
            // 0x2e0ab8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0AD4u;
            goto label_2e0ad4;
        }
    }
    ctx->pc = 0x2E0ABCu;
    // 0x2e0abc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2e0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2e0ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ac4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E0AC4u;
    SET_GPR_U32(ctx, 31, 0x2E0ACCu);
    ctx->pc = 0x2E0AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0AC4u;
            // 0x2e0ac8: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0ACCu; }
        if (ctx->pc != 0x2E0ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0ACCu; }
        if (ctx->pc != 0x2E0ACCu) { return; }
    }
    ctx->pc = 0x2E0ACCu;
label_2e0acc:
    // 0x2e0acc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0ACCu;
    {
        const bool branch_taken_0x2e0acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0acc) {
            ctx->pc = 0x2E0AE0u;
            goto label_2e0ae0;
        }
    }
    ctx->pc = 0x2E0AD4u;
label_2e0ad4:
    // 0x2e0ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ad8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E0AD8u;
    SET_GPR_U32(ctx, 31, 0x2E0AE0u);
    ctx->pc = 0x2E0ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0AD8u;
            // 0x2e0adc: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0AE0u; }
        if (ctx->pc != 0x2E0AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0AE0u; }
        if (ctx->pc != 0x2E0AE0u) { return; }
    }
    ctx->pc = 0x2E0AE0u;
label_2e0ae0:
    // 0x2e0ae0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e0ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2e0ae4:
    // 0x2e0ae4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0ae8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e0ae8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e0aec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e0aecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0af0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e0af0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0af4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e0af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0af8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e0af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0afc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e0afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0b00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e0b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0b04: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B04u;
            // 0x2e0b08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0B0Cu;
    // 0x2e0b0c: 0x0  nop
    ctx->pc = 0x2e0b0cu;
    // NOP
}
