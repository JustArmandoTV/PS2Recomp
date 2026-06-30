#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005661A0
// Address: 0x5661a0 - 0x5664f0
void sub_005661A0_0x5661a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005661A0_0x5661a0");
#endif

    switch (ctx->pc) {
        case 0x5664c0u: goto label_5664c0;
        default: break;
    }

    ctx->pc = 0x5661a0u;

    // 0x5661a0: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x5661a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x5661a4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5661a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x5661a8: 0xc4e1a588  lwc1        $f1, -0x5A78($a3)
    ctx->pc = 0x5661a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5661ac: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x5661acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x5661b0: 0xc4c0a58c  lwc1        $f0, -0x5A74($a2)
    ctx->pc = 0x5661b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294944140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5661b4: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x5661b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x5661b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5661b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5661bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x5661bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5661c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5661c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x5661c4: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x5661c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x5661c8: 0x24e79d90  addiu       $a3, $a3, -0x6270
    ctx->pc = 0x5661c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942096));
    // 0x5661cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x5661ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x5661d0: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x5661d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x5661d4: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x5661d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5661d8: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x5661d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x5661dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5661dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5661e0: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x5661e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x5661e4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x5661e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5661e8: 0xac8a000c  sw          $t2, 0xC($a0)
    ctx->pc = 0x5661e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 10));
    // 0x5661ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5661ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x5661f0: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x5661f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x5661f4: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x5661f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x5661f8: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x5661f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x5661fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5661fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566200: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x566200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x566204: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x566204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x566208: 0x0  nop
    ctx->pc = 0x566208u;
    // NOP
    // 0x56620c: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x56620cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x566210: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x566210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x566214: 0x8ce70110  lw          $a3, 0x110($a3)
    ctx->pc = 0x566214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 272)));
    // 0x566218: 0x10e60073  beq         $a3, $a2, . + 4 + (0x73 << 2)
    ctx->pc = 0x566218u;
    {
        const bool branch_taken_0x566218 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x56621Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566218u;
            // 0x56621c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566218) {
            ctx->pc = 0x5663E8u;
            goto label_5663e8;
        }
    }
    ctx->pc = 0x566220u;
    // 0x566220: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x566220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x566224: 0x50e60071  beql        $a3, $a2, . + 4 + (0x71 << 2)
    ctx->pc = 0x566224u;
    {
        const bool branch_taken_0x566224 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x566224) {
            ctx->pc = 0x566228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566224u;
            // 0x566228: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5663ECu;
            goto label_5663ec;
        }
    }
    ctx->pc = 0x56622Cu;
    // 0x56622c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x56622cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x566230: 0x50e60039  beql        $a3, $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x566230u;
    {
        const bool branch_taken_0x566230 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x566230) {
            ctx->pc = 0x566234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566230u;
            // 0x566234: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x566318u;
            goto label_566318;
        }
    }
    ctx->pc = 0x566238u;
    // 0x566238: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x566238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x56623c: 0x50e60003  beql        $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x56623Cu;
    {
        const bool branch_taken_0x56623c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x56623c) {
            ctx->pc = 0x566240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56623Cu;
            // 0x566240: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x56624Cu;
            goto label_56624c;
        }
    }
    ctx->pc = 0x566244u;
    // 0x566244: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x566244u;
    {
        const bool branch_taken_0x566244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566244u;
            // 0x566248: 0xa080003c  sb          $zero, 0x3C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566244) {
            ctx->pc = 0x5664B0u;
            goto label_5664b0;
        }
    }
    ctx->pc = 0x56624Cu;
label_56624c:
    // 0x56624c: 0x3c053fa6  lui         $a1, 0x3FA6
    ctx->pc = 0x56624cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16294 << 16));
    // 0x566250: 0x34a56666  ori         $a1, $a1, 0x6666
    ctx->pc = 0x566250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
    // 0x566254: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x566254u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x566258: 0x0  nop
    ctx->pc = 0x566258u;
    // NOP
    // 0x56625c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x56625cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x566260: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x566260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x566264: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566268: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x56626c: 0x0  nop
    ctx->pc = 0x56626cu;
    // NOP
    // 0x566270: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x566270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x566274: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x566274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x566278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x566278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x56627c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x56627cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x566280: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566280u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566284: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566284u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x566288: 0x0  nop
    ctx->pc = 0x566288u;
    // NOP
    // 0x56628c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x56628cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x566290: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x566290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x566294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x566294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x566298: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x566298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x56629c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x56629cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5662a0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x5662a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x5662a4: 0x0  nop
    ctx->pc = 0x5662a4u;
    // NOP
    // 0x5662a8: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x5662a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x5662ac: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x5662acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5662b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5662b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5662b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5662b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5662b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5662b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5662bc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x5662bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x5662c0: 0x0  nop
    ctx->pc = 0x5662c0u;
    // NOP
    // 0x5662c4: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x5662c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x5662c8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x5662c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5662cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5662ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5662d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5662d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5662d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5662d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5662d8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x5662d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x5662dc: 0x0  nop
    ctx->pc = 0x5662dcu;
    // NOP
    // 0x5662e0: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x5662e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x5662e4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x5662e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5662e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5662e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5662ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5662ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5662f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5662f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5662f4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x5662f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x5662f8: 0x0  nop
    ctx->pc = 0x5662f8u;
    // NOP
    // 0x5662fc: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x5662fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x566300: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x566300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x566304: 0x8cc50078  lw          $a1, 0x78($a2)
    ctx->pc = 0x566304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x566308: 0x8cc6007c  lw          $a2, 0x7C($a2)
    ctx->pc = 0x566308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x56630c: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x56630cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x566310: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x566310u;
    {
        const bool branch_taken_0x566310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566310u;
            // 0x566314: 0x24cb0030  addiu       $t3, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566310) {
            ctx->pc = 0x5664B0u;
            goto label_5664b0;
        }
    }
    ctx->pc = 0x566318u;
label_566318:
    // 0x566318: 0x3c053f99  lui         $a1, 0x3F99
    ctx->pc = 0x566318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16281 << 16));
    // 0x56631c: 0x34a5999a  ori         $a1, $a1, 0x999A
    ctx->pc = 0x56631cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x566320: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x566320u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x566324: 0x0  nop
    ctx->pc = 0x566324u;
    // NOP
    // 0x566328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x566328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x56632c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x56632cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x566330: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566334: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x566338: 0x0  nop
    ctx->pc = 0x566338u;
    // NOP
    // 0x56633c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x56633cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x566340: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x566340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x566344: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x566344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x566348: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x566348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x56634c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x56634cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566350: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x566354: 0x0  nop
    ctx->pc = 0x566354u;
    // NOP
    // 0x566358: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x566358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x56635c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x56635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x566360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x566360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x566364: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x566364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x566368: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x56636c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x56636cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x566370: 0x0  nop
    ctx->pc = 0x566370u;
    // NOP
    // 0x566374: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x566374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x566378: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x566378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x56637c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x56637cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x566380: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x566380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x566384: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566388: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x56638c: 0x0  nop
    ctx->pc = 0x56638cu;
    // NOP
    // 0x566390: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x566390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x566394: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x566394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x566398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x566398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x56639c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x56639cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5663a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5663a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5663a4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x5663a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x5663a8: 0x0  nop
    ctx->pc = 0x5663a8u;
    // NOP
    // 0x5663ac: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x5663acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x5663b0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x5663b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5663b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5663b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5663b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5663b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5663bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5663bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5663c0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x5663c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x5663c4: 0x0  nop
    ctx->pc = 0x5663c4u;
    // NOP
    // 0x5663c8: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x5663c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x5663cc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x5663ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x5663d0: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x5663d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x5663d4: 0x8ce50088  lw          $a1, 0x88($a3)
    ctx->pc = 0x5663d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x5663d8: 0x8ce7008c  lw          $a3, 0x8C($a3)
    ctx->pc = 0x5663d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x5663dc: 0x24a5ffd0  addiu       $a1, $a1, -0x30
    ctx->pc = 0x5663dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
    // 0x5663e0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x5663E0u;
    {
        const bool branch_taken_0x5663e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5663E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5663E0u;
            // 0x5663e4: 0xe65823  subu        $t3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5663e0) {
            ctx->pc = 0x5664B0u;
            goto label_5664b0;
        }
    }
    ctx->pc = 0x5663E8u;
label_5663e8:
    // 0x5663e8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x5663e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5663ec:
    // 0x5663ec: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x5663ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
    // 0x5663f0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x5663f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5663f4: 0x0  nop
    ctx->pc = 0x5663f4u;
    // NOP
    // 0x5663f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5663f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5663fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5663fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x566400: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566404: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x566408: 0x0  nop
    ctx->pc = 0x566408u;
    // NOP
    // 0x56640c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x56640cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x566410: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x566410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x566414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x566414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x566418: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x566418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x56641c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x56641cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566420: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x566424: 0x0  nop
    ctx->pc = 0x566424u;
    // NOP
    // 0x566428: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x566428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x56642c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x56642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x566430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x566430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x566434: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x566434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x566438: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566438u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x56643c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x56643cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x566440: 0x0  nop
    ctx->pc = 0x566440u;
    // NOP
    // 0x566444: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x566444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x566448: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x566448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x56644c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x56644cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x566450: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x566450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x566454: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566454u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566458: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x56645c: 0x0  nop
    ctx->pc = 0x56645cu;
    // NOP
    // 0x566460: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x566460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x566464: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x566464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x566468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x566468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x56646c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x56646cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x566470: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566470u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566474: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x566478: 0x0  nop
    ctx->pc = 0x566478u;
    // NOP
    // 0x56647c: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x56647cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x566480: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x566480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x566484: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x566484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x566488: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x566488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x56648c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x56648cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x566490: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x566494: 0x0  nop
    ctx->pc = 0x566494u;
    // NOP
    // 0x566498: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x566498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x56649c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x56649cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x5664a0: 0x8cc50088  lw          $a1, 0x88($a2)
    ctx->pc = 0x5664a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x5664a4: 0x8cc6008c  lw          $a2, 0x8C($a2)
    ctx->pc = 0x5664a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x5664a8: 0x24a50032  addiu       $a1, $a1, 0x32
    ctx->pc = 0x5664a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
    // 0x5664ac: 0x24cb0030  addiu       $t3, $a2, 0x30
    ctx->pc = 0x5664acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_5664b0:
    // 0x5664b0: 0x9086003c  lbu         $a2, 0x3C($a0)
    ctx->pc = 0x5664b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x5664b4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x5664B4u;
    {
        const bool branch_taken_0x5664b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x5664b4) {
            ctx->pc = 0x5664E0u;
            goto label_5664e0;
        }
    }
    ctx->pc = 0x5664BCu;
    // 0x5664bc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x5664bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5664c0:
    // 0x5664c0: 0xa5050020  sh          $a1, 0x20($t0)
    ctx->pc = 0x5664c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x5664c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x5664c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5664c8: 0xa50b0022  sh          $t3, 0x22($t0)
    ctx->pc = 0x5664c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 34), (uint16_t)GPR_U32(ctx, 11));
    // 0x5664cc: 0x28660007  slti        $a2, $v1, 0x7
    ctx->pc = 0x5664ccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x5664d0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x5664d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x5664d4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x5664d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x5664d8: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x5664D8u;
    {
        const bool branch_taken_0x5664d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x5664DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5664D8u;
            // 0x5664dc: 0x1675821  addu        $t3, $t3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5664d8) {
            ctx->pc = 0x5664C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5664c0;
        }
    }
    ctx->pc = 0x5664E0u;
label_5664e0:
    // 0x5664e0: 0x3e00008  jr          $ra
    ctx->pc = 0x5664E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5664E8u;
    // 0x5664e8: 0x0  nop
    ctx->pc = 0x5664e8u;
    // NOP
    // 0x5664ec: 0x0  nop
    ctx->pc = 0x5664ecu;
    // NOP
}
