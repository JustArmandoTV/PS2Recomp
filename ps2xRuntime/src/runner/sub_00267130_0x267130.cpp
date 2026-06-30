#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267130
// Address: 0x267130 - 0x267460
void sub_00267130_0x267130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267130_0x267130");
#endif

    switch (ctx->pc) {
        case 0x267170u: goto label_267170;
        case 0x267204u: goto label_267204;
        case 0x26724cu: goto label_26724c;
        default: break;
    }

    ctx->pc = 0x267130u;

    // 0x267130: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x267130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x267134: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x267134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x267138: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x267138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26713c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x267140: 0x27b60088  addiu       $s6, $sp, 0x88
    ctx->pc = 0x267140u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x267144: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x267144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x267148: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x267148u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26714c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26714cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x267150: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x267150u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267154: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267158: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x267158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26715c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267160: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x267160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267168: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x267168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26716c: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x26716cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_267170:
    // 0x267170: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x267170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x267174: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x267174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x267178: 0x8ea30068  lw          $v1, 0x68($s5)
    ctx->pc = 0x267178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x26717c: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x26717cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x267180: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x267180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x267184: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x267184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267188: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x267188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26718c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267190: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x267190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x267194: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x267194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267198: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x267198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26719c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x26719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671a0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2671a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2671a4: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2671a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2671a8: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x2671a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x2671ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2671acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671b0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2671b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2671b4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2671b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671b8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2671b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2671bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2671bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671c0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2671c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2671c4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2671c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671c8: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2671c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2671cc: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x2671ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2671d0: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x2671d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x2671d4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2671d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671d8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2671d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2671dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2671dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671e0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2671e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2671e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2671e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671e8: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2671e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2671ec: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2671ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671f0: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2671f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x2671f4: 0x8ea50068  lw          $a1, 0x68($s5)
    ctx->pc = 0x2671f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x2671f8: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x2671f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2671fc: 0xc09e844  jal         func_27A110
    ctx->pc = 0x2671FCu;
    SET_GPR_U32(ctx, 31, 0x267204u);
    ctx->pc = 0x267200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2671FCu;
            // 0x267200: 0x24a70020  addiu       $a3, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A110u;
    if (runtime->hasFunction(0x27A110u)) {
        auto targetFn = runtime->lookupFunction(0x27A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267204u; }
        if (ctx->pc != 0x267204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A110_0x27a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267204u; }
        if (ctx->pc != 0x267204u) { return; }
    }
    ctx->pc = 0x267204u;
label_267204:
    // 0x267204: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x267204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267208: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x267208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26720c: 0x0  nop
    ctx->pc = 0x26720cu;
    // NOP
    // 0x267210: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x267210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267214: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x267214u;
    {
        const bool branch_taken_0x267214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267214) {
            ctx->pc = 0x267240u;
            goto label_267240;
        }
    }
    ctx->pc = 0x26721Cu;
    // 0x26721c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x26721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267220: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x267220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267224: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x267224u;
    {
        const bool branch_taken_0x267224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267224) {
            ctx->pc = 0x267240u;
            goto label_267240;
        }
    }
    ctx->pc = 0x26722Cu;
    // 0x26722c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x26722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267230: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x267230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267234: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x267234u;
    {
        const bool branch_taken_0x267234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x267234) {
            ctx->pc = 0x267260u;
            goto label_267260;
        }
    }
    ctx->pc = 0x26723Cu;
    // 0x26723c: 0x0  nop
    ctx->pc = 0x26723cu;
    // NOP
label_267240:
    // 0x267240: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x267240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267244: 0xc09a714  jal         func_269C50
    ctx->pc = 0x267244u;
    SET_GPR_U32(ctx, 31, 0x26724Cu);
    ctx->pc = 0x267248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267244u;
            // 0x267248: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x269C50u;
    if (runtime->hasFunction(0x269C50u)) {
        auto targetFn = runtime->lookupFunction(0x269C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26724Cu; }
        if (ctx->pc != 0x26724Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00269C50_0x269c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26724Cu; }
        if (ctx->pc != 0x26724Cu) { return; }
    }
    ctx->pc = 0x26724Cu;
label_26724c:
    // 0x26724c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26724cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x267250: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x267250u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x267254: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x267254u;
    {
        const bool branch_taken_0x267254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x267258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267254u;
            // 0x267258: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267254) {
            ctx->pc = 0x267170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267170;
        }
    }
    ctx->pc = 0x26725Cu;
    // 0x26725c: 0x0  nop
    ctx->pc = 0x26725cu;
    // NOP
label_267260:
    // 0x267260: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x267260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x267264: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x267264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x267268: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x267268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26726c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x26726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267270: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x267270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x267274: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x267274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267278: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x267278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26727c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x26727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267280: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x267280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x267284: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x267284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267288: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x267288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x26728c: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x26728cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x267290: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x267290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267294: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x267294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x267298: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x267298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26729c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x26729cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2672a0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2672a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672a4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2672a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2672a8: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2672a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672ac: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2672acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2672b0: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x2672b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2672b4: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x2672b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x2672b8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2672b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672bc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2672bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2672c0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2672c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672c4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2672c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2672c8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2672c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672cc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2672ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2672d0: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2672d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672d4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2672d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2672d8: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x2672d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x2672dc: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2672dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672e0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2672e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2672e4: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2672e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672e8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2672e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2672ec: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2672ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672f0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2672f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2672f4: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2672f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2672f8: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2672f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2672fc: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x2672fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x267300: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x267300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x267304: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x267304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267308: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x267308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x26730c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x26730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267310: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x267310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x267314: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x267314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267318: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x267318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x26731c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x26731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267320: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x267320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x267324: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x267324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x267328: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x267328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26732c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x26732cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x267330: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x267330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267334: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x267334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x267338: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x267338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26733c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x26733cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x267340: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x267340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267344: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x267344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x267348: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x267348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x26734c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26734cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x267350: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x267350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x267354: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x267354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x267358: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x267358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26735c: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x26735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x267360: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x267360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267364: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x267364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267368: 0xc4670010  lwc1        $f7, 0x10($v1)
    ctx->pc = 0x267368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x26736c: 0xc4660014  lwc1        $f6, 0x14($v1)
    ctx->pc = 0x26736cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x267370: 0xc4690008  lwc1        $f9, 0x8($v1)
    ctx->pc = 0x267370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x267374: 0xc4650018  lwc1        $f5, 0x18($v1)
    ctx->pc = 0x267374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x267378: 0x460172c2  mul.s       $f11, $f14, $f1
    ctx->pc = 0x267378u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x26737c: 0x46007282  mul.s       $f10, $f14, $f0
    ctx->pc = 0x26737cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x267380: 0xc468000c  lwc1        $f8, 0xC($v1)
    ctx->pc = 0x267380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x267384: 0xc464001c  lwc1        $f4, 0x1C($v1)
    ctx->pc = 0x267384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x267388: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x267388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26738c: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x26738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267390: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x267390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267394: 0x460769c2  mul.s       $f7, $f13, $f7
    ctx->pc = 0x267394u;
    ctx->f[7] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
    // 0x267398: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x267398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26739c: 0x46066982  mul.s       $f6, $f13, $f6
    ctx->pc = 0x26739cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
    // 0x2673a0: 0x46097242  mul.s       $f9, $f14, $f9
    ctx->pc = 0x2673a0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
    // 0x2673a4: 0x46056942  mul.s       $f5, $f13, $f5
    ctx->pc = 0x2673a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[13], ctx->f[5]);
    // 0x2673a8: 0x46087202  mul.s       $f8, $f14, $f8
    ctx->pc = 0x2673a8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x2673ac: 0x46046902  mul.s       $f4, $f13, $f4
    ctx->pc = 0x2673acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x2673b0: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x2673b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2673b4: 0x46075ac0  add.s       $f11, $f11, $f7
    ctx->pc = 0x2673b4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x2673b8: 0x46035ac0  add.s       $f11, $f11, $f3
    ctx->pc = 0x2673b8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[3]);
    // 0x2673bc: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2673bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2673c0: 0x46065280  add.s       $f10, $f10, $f6
    ctx->pc = 0x2673c0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x2673c4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2673c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2673c8: 0x46054a40  add.s       $f9, $f9, $f5
    ctx->pc = 0x2673c8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x2673cc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2673ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2673d0: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x2673d0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x2673d4: 0x46025280  add.s       $f10, $f10, $f2
    ctx->pc = 0x2673d4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[2]);
    // 0x2673d8: 0xe64b0010  swc1        $f11, 0x10($s2)
    ctx->pc = 0x2673d8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2673dc: 0x46014a40  add.s       $f9, $f9, $f1
    ctx->pc = 0x2673dcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2673e0: 0xe64a0014  swc1        $f10, 0x14($s2)
    ctx->pc = 0x2673e0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2673e4: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x2673e4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2673e8: 0xe6490018  swc1        $f9, 0x18($s2)
    ctx->pc = 0x2673e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2673ec: 0xe648001c  swc1        $f8, 0x1C($s2)
    ctx->pc = 0x2673ecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2673f0: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x2673f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2673f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2673f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2673f8: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x2673f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2673fc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2673fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267400: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x267400u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x267404: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x267404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x267408: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x267408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26740c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26740cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x267410: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x267410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x267414: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x267414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267418: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x267418u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26741c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x26741cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x267420: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x267420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267424: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x267424u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x267428: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x267428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x26742c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26742cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267430: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x267430u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267434: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x267434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267438: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x267438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26743c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26743cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26744c: 0x3e00008  jr          $ra
    ctx->pc = 0x26744Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26744Cu;
            // 0x267450: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267454u;
    // 0x267454: 0x0  nop
    ctx->pc = 0x267454u;
    // NOP
    // 0x267458: 0x0  nop
    ctx->pc = 0x267458u;
    // NOP
    // 0x26745c: 0x0  nop
    ctx->pc = 0x26745cu;
    // NOP
}
