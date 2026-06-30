#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0210
// Address: 0x2e0210 - 0x2e0580
void sub_002E0210_0x2e0210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0210_0x2e0210");
#endif

    switch (ctx->pc) {
        case 0x2e02f8u: goto label_2e02f8;
        case 0x2e0308u: goto label_2e0308;
        case 0x2e0314u: goto label_2e0314;
        case 0x2e0374u: goto label_2e0374;
        case 0x2e0394u: goto label_2e0394;
        case 0x2e03a0u: goto label_2e03a0;
        case 0x2e03b4u: goto label_2e03b4;
        case 0x2e03ccu: goto label_2e03cc;
        case 0x2e0424u: goto label_2e0424;
        case 0x2e0470u: goto label_2e0470;
        case 0x2e047cu: goto label_2e047c;
        case 0x2e049cu: goto label_2e049c;
        case 0x2e04acu: goto label_2e04ac;
        case 0x2e04c8u: goto label_2e04c8;
        case 0x2e04d4u: goto label_2e04d4;
        case 0x2e04ecu: goto label_2e04ec;
        case 0x2e0504u: goto label_2e0504;
        case 0x2e0518u: goto label_2e0518;
        case 0x2e0528u: goto label_2e0528;
        case 0x2e0538u: goto label_2e0538;
        case 0x2e0544u: goto label_2e0544;
        default: break;
    }

    ctx->pc = 0x2e0210u;

    // 0x2e0210: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e0210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e0214: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e0214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0218: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e0218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e021c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e0220: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e0220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e0224: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e0224u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0228: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e0228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e022c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2e022cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0230: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e0230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e0234: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e0234u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0238: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e0238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e023c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e023cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e0240: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e0240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e0244: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e0244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e0248: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e024c: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x2e024cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2e0250: 0x94840050  lhu         $a0, 0x50($a0)
    ctx->pc = 0x2e0250u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2e0254: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0254u;
    {
        const bool branch_taken_0x2e0254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E0258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0254u;
            // 0x2e0258: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0254) {
            ctx->pc = 0x2E0264u;
            goto label_2e0264;
        }
    }
    ctx->pc = 0x2E025Cu;
    // 0x2e025c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E025Cu;
    {
        const bool branch_taken_0x2e025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E025Cu;
            // 0x2e0260: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e025c) {
            ctx->pc = 0x2E0268u;
            goto label_2e0268;
        }
    }
    ctx->pc = 0x2E0264u;
label_2e0264:
    // 0x2e0264: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2e0264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0268:
    // 0x2e0268: 0x6830007  bgezl       $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0268u;
    {
        const bool branch_taken_0x2e0268 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x2e0268) {
            ctx->pc = 0x2E026Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0268u;
            // 0x2e026c: 0x9603001c  lhu         $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0288u;
            goto label_2e0288;
        }
    }
    ctx->pc = 0x2E0270u;
    // 0x2e0270: 0x96a30052  lhu         $v1, 0x52($s5)
    ctx->pc = 0x2e0270u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 82)));
    // 0x2e0274: 0x5c60000d  bgtzl       $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0274u;
    {
        const bool branch_taken_0x2e0274 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e0274) {
            ctx->pc = 0x2E0278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0274u;
            // 0x2e0278: 0xc6a10048  lwc1        $f1, 0x48($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E02ACu;
            goto label_2e02ac;
        }
    }
    ctx->pc = 0x2E027Cu;
    // 0x2e027c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e027cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0280: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2E0280u;
    {
        const bool branch_taken_0x2e0280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0280u;
            // 0x2e0284: 0xa6a30050  sh          $v1, 0x50($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0280) {
            ctx->pc = 0x2E0544u;
            goto label_2e0544;
        }
    }
    ctx->pc = 0x2E0288u;
label_2e0288:
    // 0x2e0288: 0x96a40052  lhu         $a0, 0x52($s5)
    ctx->pc = 0x2e0288u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 82)));
    // 0x2e028c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e0290: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2e0290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e0294: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0294u;
    {
        const bool branch_taken_0x2e0294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0294) {
            ctx->pc = 0x2E02A8u;
            goto label_2e02a8;
        }
    }
    ctx->pc = 0x2E029Cu;
    // 0x2e029c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e02a0: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2E02A0u;
    {
        const bool branch_taken_0x2e02a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E02A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E02A0u;
            // 0x2e02a4: 0xa6a30050  sh          $v1, 0x50($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02a0) {
            ctx->pc = 0x2E0544u;
            goto label_2e0544;
        }
    }
    ctx->pc = 0x2E02A8u;
label_2e02a8:
    // 0x2e02a8: 0xc6a10048  lwc1        $f1, 0x48($s5)
    ctx->pc = 0x2e02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e02ac:
    // 0x2e02ac: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2e02acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2e02b0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2e02b0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e02b4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2e02b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02b8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2e02b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e02bc: 0x4601a0c3  div.s       $f3, $f20, $f1
    ctx->pc = 0x2e02bcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[3] = ctx->f[20] / ctx->f[1];
    // 0x2e02c0: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x2e02c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e02c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e02c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e02c8: 0x0  nop
    ctx->pc = 0x2e02c8u;
    // NOP
    // 0x2e02cc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2e02ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e02d0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2e02d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e02d4: 0xe6a00044  swc1        $f0, 0x44($s5)
    ctx->pc = 0x2e02d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x2e02d8: 0x96b30052  lhu         $s3, 0x52($s5)
    ctx->pc = 0x2e02d8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 82)));
    // 0x2e02dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e02e0: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x2e02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2e02e4: 0x139100  sll         $s2, $s3, 4
    ctx->pc = 0x2e02e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e02e8: 0x38900  sll         $s1, $v1, 4
    ctx->pc = 0x2e02e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e02ec: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x2e02ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e02f0: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2E02F0u;
    SET_GPR_U32(ctx, 31, 0x2E02F8u);
    ctx->pc = 0x2E02F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E02F0u;
            // 0x2e02f4: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E02F8u; }
        if (ctx->pc != 0x2E02F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E02F8u; }
        if (ctx->pc != 0x2E02F8u) { return; }
    }
    ctx->pc = 0x2E02F8u;
label_2e02f8:
    // 0x2e02f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e02f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e02fc: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x2e02fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2e0300: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0300u;
    SET_GPR_U32(ctx, 31, 0x2E0308u);
    ctx->pc = 0x2E0304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0300u;
            // 0x2e0304: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0308u; }
        if (ctx->pc != 0x2E0308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0308u; }
        if (ctx->pc != 0x2E0308u) { return; }
    }
    ctx->pc = 0x2E0308u;
label_2e0308:
    // 0x2e0308: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e0308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e030c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2E030Cu;
    SET_GPR_U32(ctx, 31, 0x2E0314u);
    ctx->pc = 0x2E0310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E030Cu;
            // 0x2e0310: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0314u; }
        if (ctx->pc != 0x2E0314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0314u; }
        if (ctx->pc != 0x2E0314u) { return; }
    }
    ctx->pc = 0x2E0314u;
label_2e0314:
    // 0x2e0314: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2e0314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e0318: 0x0  nop
    ctx->pc = 0x2e0318u;
    // NOP
    // 0x2e031c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2e031cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0320: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0320u;
    {
        const bool branch_taken_0x2e0320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0320) {
            ctx->pc = 0x2E0324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0320u;
            // 0x2e0324: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0368u;
            goto label_2e0368;
        }
    }
    ctx->pc = 0x2E0328u;
    // 0x2e0328: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x2e0328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e032c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x2e032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0330: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e0330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0334: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x2e0334u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2e0338: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x2e0338u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2e033c: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x2e033cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e0340: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x2e0340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0344: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x2e0344u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2e0348: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e0348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e034c: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x2e034cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x2e0350: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e0350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e0354: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x2e0354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0358: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x2e0358u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2e035c: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x2e035cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x2e0360: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e0360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e0364: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e0364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e0368:
    // 0x2e0368: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x2e0368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2e036c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E036Cu;
    SET_GPR_U32(ctx, 31, 0x2E0374u);
    ctx->pc = 0x2E0370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E036Cu;
            // 0x2e0370: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0374u; }
        if (ctx->pc != 0x2E0374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0374u; }
        if (ctx->pc != 0x2E0374u) { return; }
    }
    ctx->pc = 0x2E0374u;
label_2e0374:
    // 0x2e0374: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e0374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0378: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2E0378u;
    {
        const bool branch_taken_0x2e0378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0378) {
            ctx->pc = 0x2E03BCu;
            goto label_2e03bc;
        }
    }
    ctx->pc = 0x2E0380u;
    // 0x2e0380: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e0380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0384: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2e0384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e0388: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x2e0388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2e038c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E038Cu;
    SET_GPR_U32(ctx, 31, 0x2E0394u);
    ctx->pc = 0x2E0390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E038Cu;
            // 0x2e0390: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0394u; }
        if (ctx->pc != 0x2E0394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0394u; }
        if (ctx->pc != 0x2E0394u) { return; }
    }
    ctx->pc = 0x2E0394u;
label_2e0394:
    // 0x2e0394: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2e0394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e0398: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E0398u;
    SET_GPR_U32(ctx, 31, 0x2E03A0u);
    ctx->pc = 0x2E039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0398u;
            // 0x2e039c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E03A0u; }
        if (ctx->pc != 0x2E03A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E03A0u; }
        if (ctx->pc != 0x2E03A0u) { return; }
    }
    ctx->pc = 0x2E03A0u;
label_2e03a0:
    // 0x2e03a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e03a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e03a4: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x2e03a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2e03a8: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x2e03a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2e03ac: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E03ACu;
    SET_GPR_U32(ctx, 31, 0x2E03B4u);
    ctx->pc = 0x2E03B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E03ACu;
            // 0x2e03b0: 0x26a60010  addiu       $a2, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E03B4u; }
        if (ctx->pc != 0x2E03B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E03B4u; }
        if (ctx->pc != 0x2E03B4u) { return; }
    }
    ctx->pc = 0x2E03B4u;
label_2e03b4:
    // 0x2e03b4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2E03B4u;
    {
        const bool branch_taken_0x2e03b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E03B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E03B4u;
            // 0x2e03b8: 0x26a40030  addiu       $a0, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03b4) {
            ctx->pc = 0x2E051Cu;
            goto label_2e051c;
        }
    }
    ctx->pc = 0x2E03BCu;
label_2e03bc:
    // 0x2e03bc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2e03bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e03c0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2E03C0u;
    {
        const bool branch_taken_0x2e03c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e03c0) {
            ctx->pc = 0x2E0430u;
            goto label_2e0430;
        }
    }
    ctx->pc = 0x2E03C8u;
    // 0x2e03c8: 0x14b100  sll         $s6, $s4, 4
    ctx->pc = 0x2e03c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_2e03cc:
    // 0x2e03cc: 0x1e600004  bgtz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E03CCu;
    {
        const bool branch_taken_0x2e03cc = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x2e03cc) {
            ctx->pc = 0x2E03E0u;
            goto label_2e03e0;
        }
    }
    ctx->pc = 0x2E03D4u;
    // 0x2e03d4: 0x6800016  bltz        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E03D4u;
    {
        const bool branch_taken_0x2e03d4 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x2e03d4) {
            ctx->pc = 0x2E0430u;
            goto label_2e0430;
        }
    }
    ctx->pc = 0x2E03DCu;
    // 0x2e03dc: 0x0  nop
    ctx->pc = 0x2e03dcu;
    // NOP
label_2e03e0:
    // 0x2e03e0: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x2e03e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e03e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e03e8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2e03e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e03ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E03ECu;
    {
        const bool branch_taken_0x2e03ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e03ec) {
            ctx->pc = 0x2E0400u;
            goto label_2e0400;
        }
    }
    ctx->pc = 0x2E03F4u;
    // 0x2e03f4: 0x1e80000e  bgtz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2E03F4u;
    {
        const bool branch_taken_0x2e03f4 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x2e03f4) {
            ctx->pc = 0x2E0430u;
            goto label_2e0430;
        }
    }
    ctx->pc = 0x2E03FCu;
    // 0x2e03fc: 0x0  nop
    ctx->pc = 0x2e03fcu;
    // NOP
label_2e0400:
    // 0x2e0400: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x2e0400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2e0404: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x2e0404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2e0408: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2e0408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e040c: 0x2569021  addu        $s2, $s2, $s6
    ctx->pc = 0x2e040cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2e0410: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x2e0410u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e0414: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2e0414u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2e0418: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2e0418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2e041c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E041Cu;
    SET_GPR_U32(ctx, 31, 0x2E0424u);
    ctx->pc = 0x2E0420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E041Cu;
            // 0x2e0420: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0424u; }
        if (ctx->pc != 0x2E0424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0424u; }
        if (ctx->pc != 0x2E0424u) { return; }
    }
    ctx->pc = 0x2E0424u;
label_2e0424:
    // 0x2e0424: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2e0424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0428: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E0428u;
    {
        const bool branch_taken_0x2e0428 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0428) {
            ctx->pc = 0x2E03CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e03cc;
        }
    }
    ctx->pc = 0x2E0430u;
label_2e0430:
    // 0x2e0430: 0x1a600006  blez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0430u;
    {
        const bool branch_taken_0x2e0430 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2E0434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0430u;
            // 0x2e0434: 0xa6b30052  sh          $s3, 0x52($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 82), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0430) {
            ctx->pc = 0x2E044Cu;
            goto label_2e044c;
        }
    }
    ctx->pc = 0x2E0438u;
    // 0x2e0438: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x2e0438u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e043c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e0440: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2e0440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e0444: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E0444u;
    {
        const bool branch_taken_0x2e0444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0444) {
            ctx->pc = 0x2E0448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0444u;
            // 0x2e0448: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E04B4u;
            goto label_2e04b4;
        }
    }
    ctx->pc = 0x2E044Cu;
label_2e044c:
    // 0x2e044c: 0x2748823  subu        $s1, $s3, $s4
    ctx->pc = 0x2e044cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2e0450: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2e0450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0454: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x2e0454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2e0458: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2e0458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2e045c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e045cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e0460: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2e0460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e0464: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2e0464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e0468: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0468u;
    SET_GPR_U32(ctx, 31, 0x2E0470u);
    ctx->pc = 0x2E046Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0468u;
            // 0x2e046c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0470u; }
        if (ctx->pc != 0x2E0470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0470u; }
        if (ctx->pc != 0x2E0470u) { return; }
    }
    ctx->pc = 0x2E0470u;
label_2e0470:
    // 0x2e0470: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2e0470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e0474: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E0474u;
    SET_GPR_U32(ctx, 31, 0x2E047Cu);
    ctx->pc = 0x2E0478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0474u;
            // 0x2e0478: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E047Cu; }
        if (ctx->pc != 0x2E047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E047Cu; }
        if (ctx->pc != 0x2E047Cu) { return; }
    }
    ctx->pc = 0x2E047Cu;
label_2e047c:
    // 0x2e047c: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x2e047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2e0480: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x2e0480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2e0484: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x2e0484u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e0488: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x2e0488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e048c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0490: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e0490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e0494: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E0494u;
    SET_GPR_U32(ctx, 31, 0x2E049Cu);
    ctx->pc = 0x2E0498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0494u;
            // 0x2e0498: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E049Cu; }
        if (ctx->pc != 0x2E049Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E049Cu; }
        if (ctx->pc != 0x2E049Cu) { return; }
    }
    ctx->pc = 0x2E049Cu;
label_2e049c:
    // 0x2e049c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2e049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e04a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e04a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04a4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E04A4u;
    SET_GPR_U32(ctx, 31, 0x2E04ACu);
    ctx->pc = 0x2E04A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04A4u;
            // 0x2e04a8: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04ACu; }
        if (ctx->pc != 0x2E04ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04ACu; }
        if (ctx->pc != 0x2E04ACu) { return; }
    }
    ctx->pc = 0x2E04ACu;
label_2e04ac:
    // 0x2e04ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E04ACu;
    {
        const bool branch_taken_0x2e04ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e04ac) {
            ctx->pc = 0x2E0518u;
            goto label_2e0518;
        }
    }
    ctx->pc = 0x2E04B4u;
label_2e04b4:
    // 0x2e04b4: 0x139100  sll         $s2, $s3, 4
    ctx->pc = 0x2e04b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e04b8: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2e04b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e04bc: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x2e04bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e04c0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E04C0u;
    SET_GPR_U32(ctx, 31, 0x2E04C8u);
    ctx->pc = 0x2E04C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04C0u;
            // 0x2e04c4: 0x523021  addu        $a2, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04C8u; }
        if (ctx->pc != 0x2E04C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04C8u; }
        if (ctx->pc != 0x2E04C8u) { return; }
    }
    ctx->pc = 0x2E04C8u;
label_2e04c8:
    // 0x2e04c8: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2e04c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e04cc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E04CCu;
    SET_GPR_U32(ctx, 31, 0x2E04D4u);
    ctx->pc = 0x2E04D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04CCu;
            // 0x2e04d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04D4u; }
        if (ctx->pc != 0x2E04D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04D4u; }
        if (ctx->pc != 0x2E04D4u) { return; }
    }
    ctx->pc = 0x2E04D4u;
label_2e04d4:
    // 0x2e04d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e04d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e04d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e04dc: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x2e04dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2e04e0: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x2e04e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e04e4: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E04E4u;
    SET_GPR_U32(ctx, 31, 0x2E04ECu);
    ctx->pc = 0x2E04E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04E4u;
            // 0x2e04e8: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04ECu; }
        if (ctx->pc != 0x2E04ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04ECu; }
        if (ctx->pc != 0x2E04ECu) { return; }
    }
    ctx->pc = 0x2E04ECu;
label_2e04ec:
    // 0x2e04ec: 0x6830007  bgezl       $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E04ECu;
    {
        const bool branch_taken_0x2e04ec = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x2e04ec) {
            ctx->pc = 0x2E04F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04ECu;
            // 0x2e04f0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E050Cu;
            goto label_2e050c;
        }
    }
    ctx->pc = 0x2E04F4u;
    // 0x2e04f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2e04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e04f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e04f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04fc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E04FCu;
    SET_GPR_U32(ctx, 31, 0x2E0504u);
    ctx->pc = 0x2E0500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04FCu;
            // 0x2e0500: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0504u; }
        if (ctx->pc != 0x2E0504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0504u; }
        if (ctx->pc != 0x2E0504u) { return; }
    }
    ctx->pc = 0x2E0504u;
label_2e0504:
    // 0x2e0504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0504u;
    {
        const bool branch_taken_0x2e0504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0504) {
            ctx->pc = 0x2E0518u;
            goto label_2e0518;
        }
    }
    ctx->pc = 0x2E050Cu;
label_2e050c:
    // 0x2e050c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0510: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E0510u;
    SET_GPR_U32(ctx, 31, 0x2E0518u);
    ctx->pc = 0x2E0514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0510u;
            // 0x2e0514: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0518u; }
        if (ctx->pc != 0x2E0518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0518u; }
        if (ctx->pc != 0x2E0518u) { return; }
    }
    ctx->pc = 0x2E0518u;
label_2e0518:
    // 0x2e0518: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x2e0518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_2e051c:
    // 0x2e051c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e051cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e0520: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0520u;
    SET_GPR_U32(ctx, 31, 0x2E0528u);
    ctx->pc = 0x2E0524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0520u;
            // 0x2e0524: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0528u; }
        if (ctx->pc != 0x2E0528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0528u; }
        if (ctx->pc != 0x2E0528u) { return; }
    }
    ctx->pc = 0x2E0528u;
label_2e0528:
    // 0x2e0528: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e0528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e052c: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2e052cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e0530: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0530u;
    SET_GPR_U32(ctx, 31, 0x2E0538u);
    ctx->pc = 0x2E0534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0530u;
            // 0x2e0534: 0x26a50030  addiu       $a1, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0538u; }
        if (ctx->pc != 0x2E0538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0538u; }
        if (ctx->pc != 0x2E0538u) { return; }
    }
    ctx->pc = 0x2E0538u;
label_2e0538:
    // 0x2e0538: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2e0538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2e053c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E053Cu;
    SET_GPR_U32(ctx, 31, 0x2E0544u);
    ctx->pc = 0x2E0540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E053Cu;
            // 0x2e0540: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0544u; }
        if (ctx->pc != 0x2E0544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0544u; }
        if (ctx->pc != 0x2E0544u) { return; }
    }
    ctx->pc = 0x2E0544u;
label_2e0544:
    // 0x2e0544: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e0544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0548: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e054c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e054cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e0550: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e0550u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e0554: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e0554u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0558: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e0558u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e055c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e055cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0560: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e0560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0564: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e0564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0568: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e0568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e056c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E056Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E056Cu;
            // 0x2e0570: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0574u;
    // 0x2e0574: 0x0  nop
    ctx->pc = 0x2e0574u;
    // NOP
    // 0x2e0578: 0x0  nop
    ctx->pc = 0x2e0578u;
    // NOP
    // 0x2e057c: 0x0  nop
    ctx->pc = 0x2e057cu;
    // NOP
}
