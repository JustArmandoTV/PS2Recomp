#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0580
// Address: 0x2e0580 - 0x2e0850
void sub_002E0580_0x2e0580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0580_0x2e0580");
#endif

    switch (ctx->pc) {
        case 0x2e0654u: goto label_2e0654;
        case 0x2e0678u: goto label_2e0678;
        case 0x2e0684u: goto label_2e0684;
        case 0x2e0698u: goto label_2e0698;
        case 0x2e06b4u: goto label_2e06b4;
        case 0x2e070cu: goto label_2e070c;
        case 0x2e0760u: goto label_2e0760;
        case 0x2e076cu: goto label_2e076c;
        case 0x2e0790u: goto label_2e0790;
        case 0x2e07a4u: goto label_2e07a4;
        case 0x2e07c0u: goto label_2e07c0;
        case 0x2e07ccu: goto label_2e07cc;
        case 0x2e07e8u: goto label_2e07e8;
        case 0x2e0804u: goto label_2e0804;
        case 0x2e081cu: goto label_2e081c;
        default: break;
    }

    ctx->pc = 0x2e0580u;

    // 0x2e0580: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e0580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e0584: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e0584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0588: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e0588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e058c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e0590: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e0590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e0594: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e0594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e0598: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e0598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e059c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e05a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e05a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e05a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e05a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e05a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e05ac: 0x94840050  lhu         $a0, 0x50($a0)
    ctx->pc = 0x2e05acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2e05b0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E05B0u;
    {
        const bool branch_taken_0x2e05b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E05B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05B0u;
            // 0x2e05b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e05b0) {
            ctx->pc = 0x2E05C0u;
            goto label_2e05c0;
        }
    }
    ctx->pc = 0x2E05B8u;
    // 0x2e05b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E05B8u;
    {
        const bool branch_taken_0x2e05b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E05BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05B8u;
            // 0x2e05bc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e05b8) {
            ctx->pc = 0x2E05C4u;
            goto label_2e05c4;
        }
    }
    ctx->pc = 0x2E05C0u;
label_2e05c0:
    // 0x2e05c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e05c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e05c4:
    // 0x2e05c4: 0x6030007  bgezl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E05C4u;
    {
        const bool branch_taken_0x2e05c4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2e05c4) {
            ctx->pc = 0x2E05C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05C4u;
            // 0x2e05c8: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E05E4u;
            goto label_2e05e4;
        }
    }
    ctx->pc = 0x2E05CCu;
    // 0x2e05cc: 0x96230052  lhu         $v1, 0x52($s1)
    ctx->pc = 0x2e05ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2e05d0: 0x5c60000e  bgtzl       $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E05D0u;
    {
        const bool branch_taken_0x2e05d0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e05d0) {
            ctx->pc = 0x2E05D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05D0u;
            // 0x2e05d4: 0xc6210048  lwc1        $f1, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E060Cu;
            goto label_2e060c;
        }
    }
    ctx->pc = 0x2E05D8u;
    // 0x2e05d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e05dc: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2E05DCu;
    {
        const bool branch_taken_0x2e05dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E05E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05DCu;
            // 0x2e05e0: 0xa6230050  sh          $v1, 0x50($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e05dc) {
            ctx->pc = 0x2E081Cu;
            goto label_2e081c;
        }
    }
    ctx->pc = 0x2E05E4u;
label_2e05e4:
    // 0x2e05e4: 0x96240052  lhu         $a0, 0x52($s1)
    ctx->pc = 0x2e05e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2e05e8: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x2e05e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2e05ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e05f0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2e05f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e05f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E05F4u;
    {
        const bool branch_taken_0x2e05f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e05f4) {
            ctx->pc = 0x2E0608u;
            goto label_2e0608;
        }
    }
    ctx->pc = 0x2E05FCu;
    // 0x2e05fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e05fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0600: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2E0600u;
    {
        const bool branch_taken_0x2e0600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0600u;
            // 0x2e0604: 0xa6230050  sh          $v1, 0x50($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0600) {
            ctx->pc = 0x2E081Cu;
            goto label_2e081c;
        }
    }
    ctx->pc = 0x2E0608u;
label_2e0608:
    // 0x2e0608: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x2e0608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e060c:
    // 0x2e060c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2e060cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e0610: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2e0610u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0614: 0x0  nop
    ctx->pc = 0x2e0614u;
    // NOP
    // 0x2e0618: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2e0618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e061c: 0x4601a0c3  div.s       $f3, $f20, $f1
    ctx->pc = 0x2e061cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[3] = ctx->f[20] / ctx->f[1];
    // 0x2e0620: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x2e0620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0624: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e0624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0628: 0x0  nop
    ctx->pc = 0x2e0628u;
    // NOP
    // 0x2e062c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2e062cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e0630: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2e0630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e0634: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2e0634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2e0638: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e0638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e063c: 0x96350052  lhu         $s5, 0x52($s1)
    ctx->pc = 0x2e063cu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2e0640: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e0640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e0644: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x2e0644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2e0648: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x2e0648u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e064c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E064Cu;
    SET_GPR_U32(ctx, 31, 0x2E0654u);
    ctx->pc = 0x2E0650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E064Cu;
            // 0x2e0650: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0654u; }
        if (ctx->pc != 0x2E0654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0654u; }
        if (ctx->pc != 0x2E0654u) { return; }
    }
    ctx->pc = 0x2E0654u;
label_2e0654:
    // 0x2e0654: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e0654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0658: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0658u;
    {
        const bool branch_taken_0x2e0658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0658) {
            ctx->pc = 0x2E06A0u;
            goto label_2e06a0;
        }
    }
    ctx->pc = 0x2E0660u;
    // 0x2e0660: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e0660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e0664: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e0664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0668: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x2e0668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e066c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e0670: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0670u;
    SET_GPR_U32(ctx, 31, 0x2E0678u);
    ctx->pc = 0x2E0674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0670u;
            // 0x2e0674: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0678u; }
        if (ctx->pc != 0x2E0678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0678u; }
        if (ctx->pc != 0x2E0678u) { return; }
    }
    ctx->pc = 0x2E0678u;
label_2e0678:
    // 0x2e0678: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e0678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e067c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E067Cu;
    SET_GPR_U32(ctx, 31, 0x2E0684u);
    ctx->pc = 0x2E0680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E067Cu;
            // 0x2e0680: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0684u; }
        if (ctx->pc != 0x2E0684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0684u; }
        if (ctx->pc != 0x2E0684u) { return; }
    }
    ctx->pc = 0x2E0684u;
label_2e0684:
    // 0x2e0684: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e0684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e0688: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2e0688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e068c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e068cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e0690: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E0690u;
    SET_GPR_U32(ctx, 31, 0x2E0698u);
    ctx->pc = 0x2E0694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0690u;
            // 0x2e0694: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0698u; }
        if (ctx->pc != 0x2E0698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0698u; }
        if (ctx->pc != 0x2E0698u) { return; }
    }
    ctx->pc = 0x2E0698u;
label_2e0698:
    // 0x2e0698: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2E0698u;
    {
        const bool branch_taken_0x2e0698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E069Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0698u;
            // 0x2e069c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0698) {
            ctx->pc = 0x2E0820u;
            goto label_2e0820;
        }
    }
    ctx->pc = 0x2E06A0u;
label_2e06a0:
    // 0x2e06a0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2e06a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e06a4: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2E06A4u;
    {
        const bool branch_taken_0x2e06a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e06a4) {
            ctx->pc = 0x2E0718u;
            goto label_2e0718;
        }
    }
    ctx->pc = 0x2E06ACu;
    // 0x2e06ac: 0x15a100  sll         $s4, $s5, 4
    ctx->pc = 0x2e06acu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e06b0: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x2e06b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2e06b4:
    // 0x2e06b4: 0x1ea00004  bgtz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E06B4u;
    {
        const bool branch_taken_0x2e06b4 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x2e06b4) {
            ctx->pc = 0x2E06C8u;
            goto label_2e06c8;
        }
    }
    ctx->pc = 0x2E06BCu;
    // 0x2e06bc: 0x6000016  bltz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E06BCu;
    {
        const bool branch_taken_0x2e06bc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2e06bc) {
            ctx->pc = 0x2E0718u;
            goto label_2e0718;
        }
    }
    ctx->pc = 0x2E06C4u;
    // 0x2e06c4: 0x0  nop
    ctx->pc = 0x2e06c4u;
    // NOP
label_2e06c8:
    // 0x2e06c8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2e06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e06cc: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x2e06ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2e06d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e06d4: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2e06d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e06d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E06D8u;
    {
        const bool branch_taken_0x2e06d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e06d8) {
            ctx->pc = 0x2E06E8u;
            goto label_2e06e8;
        }
    }
    ctx->pc = 0x2E06E0u;
    // 0x2e06e0: 0x1e00000d  bgtz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E06E0u;
    {
        const bool branch_taken_0x2e06e0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2e06e0) {
            ctx->pc = 0x2E0718u;
            goto label_2e0718;
        }
    }
    ctx->pc = 0x2E06E8u;
label_2e06e8:
    // 0x2e06e8: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x2e06e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2e06ec: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x2e06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2e06f0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e06f4: 0x292a021  addu        $s4, $s4, $s2
    ctx->pc = 0x2e06f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2e06f8: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x2e06f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e06fc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2e06fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2e0700: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x2e0700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2e0704: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E0704u;
    SET_GPR_U32(ctx, 31, 0x2E070Cu);
    ctx->pc = 0x2E0708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0704u;
            // 0x2e0708: 0x732021  addu        $a0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E070Cu; }
        if (ctx->pc != 0x2E070Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E070Cu; }
        if (ctx->pc != 0x2E070Cu) { return; }
    }
    ctx->pc = 0x2E070Cu;
label_2e070c:
    // 0x2e070c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2e070cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0710: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E0710u;
    {
        const bool branch_taken_0x2e0710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0710) {
            ctx->pc = 0x2E06B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e06b4;
        }
    }
    ctx->pc = 0x2E0718u;
label_2e0718:
    // 0x2e0718: 0x1aa00007  blez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0718u;
    {
        const bool branch_taken_0x2e0718 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2E071Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0718u;
            // 0x2e071c: 0xa6350052  sh          $s5, 0x52($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0718) {
            ctx->pc = 0x2E0738u;
            goto label_2e0738;
        }
    }
    ctx->pc = 0x2E0720u;
    // 0x2e0720: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2e0720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e0724: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x2e0724u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2e0728: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e0728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e072c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2e072cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e0730: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E0730u;
    {
        const bool branch_taken_0x2e0730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0730) {
            ctx->pc = 0x2E0734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0730u;
            // 0x2e0734: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E07ACu;
            goto label_2e07ac;
        }
    }
    ctx->pc = 0x2E0738u;
label_2e0738:
    // 0x2e0738: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2e0738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e073c: 0x2b09023  subu        $s2, $s5, $s0
    ctx->pc = 0x2e073cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2e0740: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x2e0740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2e0744: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2e0744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2e0748: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e0748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e074c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0750: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2e0750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e0754: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2e0754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e0758: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0758u;
    SET_GPR_U32(ctx, 31, 0x2E0760u);
    ctx->pc = 0x2E075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0758u;
            // 0x2e075c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0760u; }
        if (ctx->pc != 0x2E0760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0760u; }
        if (ctx->pc != 0x2E0760u) { return; }
    }
    ctx->pc = 0x2E0760u;
label_2e0760:
    // 0x2e0760: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e0760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0764: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E0764u;
    SET_GPR_U32(ctx, 31, 0x2E076Cu);
    ctx->pc = 0x2E0768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0764u;
            // 0x2e0768: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E076Cu; }
        if (ctx->pc != 0x2E076Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E076Cu; }
        if (ctx->pc != 0x2E076Cu) { return; }
    }
    ctx->pc = 0x2E076Cu;
label_2e076c:
    // 0x2e076c: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2e076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2e0770: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e0770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e0774: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x2e0774u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e0778: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2e0778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e077c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e0780: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e0780u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e0784: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e0784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e0788: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E0788u;
    SET_GPR_U32(ctx, 31, 0x2E0790u);
    ctx->pc = 0x2E078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0788u;
            // 0x2e078c: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0790u; }
        if (ctx->pc != 0x2E0790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0790u; }
        if (ctx->pc != 0x2E0790u) { return; }
    }
    ctx->pc = 0x2E0790u;
label_2e0790:
    // 0x2e0790: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e0794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0798: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e079c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E079Cu;
    SET_GPR_U32(ctx, 31, 0x2E07A4u);
    ctx->pc = 0x2E07A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E079Cu;
            // 0x2e07a0: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E07A4u; }
        if (ctx->pc != 0x2E07A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E07A4u; }
        if (ctx->pc != 0x2E07A4u) { return; }
    }
    ctx->pc = 0x2E07A4u;
label_2e07a4:
    // 0x2e07a4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E07A4u;
    {
        const bool branch_taken_0x2e07a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e07a4) {
            ctx->pc = 0x2E081Cu;
            goto label_2e081c;
        }
    }
    ctx->pc = 0x2E07ACu;
label_2e07ac:
    // 0x2e07ac: 0x159100  sll         $s2, $s5, 4
    ctx->pc = 0x2e07acu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e07b0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e07b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e07b4: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x2e07b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e07b8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E07B8u;
    SET_GPR_U32(ctx, 31, 0x2E07C0u);
    ctx->pc = 0x2E07BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E07B8u;
            // 0x2e07bc: 0x523021  addu        $a2, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E07C0u; }
        if (ctx->pc != 0x2E07C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E07C0u; }
        if (ctx->pc != 0x2E07C0u) { return; }
    }
    ctx->pc = 0x2E07C0u;
label_2e07c0:
    // 0x2e07c0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e07c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e07c4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E07C4u;
    SET_GPR_U32(ctx, 31, 0x2E07CCu);
    ctx->pc = 0x2E07C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E07C4u;
            // 0x2e07c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E07CCu; }
        if (ctx->pc != 0x2E07CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E07CCu; }
        if (ctx->pc != 0x2E07CCu) { return; }
    }
    ctx->pc = 0x2E07CCu;
label_2e07cc:
    // 0x2e07cc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e07d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e07d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e07d4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e07d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e07d8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2e07d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e07dc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e07e0: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E07E0u;
    SET_GPR_U32(ctx, 31, 0x2E07E8u);
    ctx->pc = 0x2E07E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E07E0u;
            // 0x2e07e4: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E07E8u; }
        if (ctx->pc != 0x2E07E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E07E8u; }
        if (ctx->pc != 0x2E07E8u) { return; }
    }
    ctx->pc = 0x2E07E8u;
label_2e07e8:
    // 0x2e07e8: 0x6030008  bgezl       $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E07E8u;
    {
        const bool branch_taken_0x2e07e8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2e07e8) {
            ctx->pc = 0x2E07ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E07E8u;
            // 0x2e07ec: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E080Cu;
            goto label_2e080c;
        }
    }
    ctx->pc = 0x2E07F0u;
    // 0x2e07f0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e07f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e07f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07f8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e07fc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E07FCu;
    SET_GPR_U32(ctx, 31, 0x2E0804u);
    ctx->pc = 0x2E0800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E07FCu;
            // 0x2e0800: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0804u; }
        if (ctx->pc != 0x2E0804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0804u; }
        if (ctx->pc != 0x2E0804u) { return; }
    }
    ctx->pc = 0x2E0804u;
label_2e0804:
    // 0x2e0804: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0804u;
    {
        const bool branch_taken_0x2e0804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0804) {
            ctx->pc = 0x2E081Cu;
            goto label_2e081c;
        }
    }
    ctx->pc = 0x2E080Cu;
label_2e080c:
    // 0x2e080c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0810: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e0810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e0814: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E0814u;
    SET_GPR_U32(ctx, 31, 0x2E081Cu);
    ctx->pc = 0x2E0818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0814u;
            // 0x2e0818: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E081Cu; }
        if (ctx->pc != 0x2E081Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E081Cu; }
        if (ctx->pc != 0x2E081Cu) { return; }
    }
    ctx->pc = 0x2E081Cu;
label_2e081c:
    // 0x2e081c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e081cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e0820:
    // 0x2e0820: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0824: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e0824u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0828: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e0828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e082c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e082cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0830: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e0830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0834: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e0834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0838: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e0838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e083c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E083Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E083Cu;
            // 0x2e0840: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0844u;
    // 0x2e0844: 0x0  nop
    ctx->pc = 0x2e0844u;
    // NOP
    // 0x2e0848: 0x0  nop
    ctx->pc = 0x2e0848u;
    // NOP
    // 0x2e084c: 0x0  nop
    ctx->pc = 0x2e084cu;
    // NOP
}
