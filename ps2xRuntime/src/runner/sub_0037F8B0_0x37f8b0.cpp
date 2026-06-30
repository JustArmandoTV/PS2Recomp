#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037F8B0
// Address: 0x37f8b0 - 0x37fab0
void sub_0037F8B0_0x37f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F8B0_0x37f8b0");
#endif

    switch (ctx->pc) {
        case 0x37f8b0u: goto label_37f8b0;
        case 0x37f8b4u: goto label_37f8b4;
        case 0x37f8b8u: goto label_37f8b8;
        case 0x37f8bcu: goto label_37f8bc;
        case 0x37f8c0u: goto label_37f8c0;
        case 0x37f8c4u: goto label_37f8c4;
        case 0x37f8c8u: goto label_37f8c8;
        case 0x37f8ccu: goto label_37f8cc;
        case 0x37f8d0u: goto label_37f8d0;
        case 0x37f8d4u: goto label_37f8d4;
        case 0x37f8d8u: goto label_37f8d8;
        case 0x37f8dcu: goto label_37f8dc;
        case 0x37f8e0u: goto label_37f8e0;
        case 0x37f8e4u: goto label_37f8e4;
        case 0x37f8e8u: goto label_37f8e8;
        case 0x37f8ecu: goto label_37f8ec;
        case 0x37f8f0u: goto label_37f8f0;
        case 0x37f8f4u: goto label_37f8f4;
        case 0x37f8f8u: goto label_37f8f8;
        case 0x37f8fcu: goto label_37f8fc;
        case 0x37f900u: goto label_37f900;
        case 0x37f904u: goto label_37f904;
        case 0x37f908u: goto label_37f908;
        case 0x37f90cu: goto label_37f90c;
        case 0x37f910u: goto label_37f910;
        case 0x37f914u: goto label_37f914;
        case 0x37f918u: goto label_37f918;
        case 0x37f91cu: goto label_37f91c;
        case 0x37f920u: goto label_37f920;
        case 0x37f924u: goto label_37f924;
        case 0x37f928u: goto label_37f928;
        case 0x37f92cu: goto label_37f92c;
        case 0x37f930u: goto label_37f930;
        case 0x37f934u: goto label_37f934;
        case 0x37f938u: goto label_37f938;
        case 0x37f93cu: goto label_37f93c;
        case 0x37f940u: goto label_37f940;
        case 0x37f944u: goto label_37f944;
        case 0x37f948u: goto label_37f948;
        case 0x37f94cu: goto label_37f94c;
        case 0x37f950u: goto label_37f950;
        case 0x37f954u: goto label_37f954;
        case 0x37f958u: goto label_37f958;
        case 0x37f95cu: goto label_37f95c;
        case 0x37f960u: goto label_37f960;
        case 0x37f964u: goto label_37f964;
        case 0x37f968u: goto label_37f968;
        case 0x37f96cu: goto label_37f96c;
        case 0x37f970u: goto label_37f970;
        case 0x37f974u: goto label_37f974;
        case 0x37f978u: goto label_37f978;
        case 0x37f97cu: goto label_37f97c;
        case 0x37f980u: goto label_37f980;
        case 0x37f984u: goto label_37f984;
        case 0x37f988u: goto label_37f988;
        case 0x37f98cu: goto label_37f98c;
        case 0x37f990u: goto label_37f990;
        case 0x37f994u: goto label_37f994;
        case 0x37f998u: goto label_37f998;
        case 0x37f99cu: goto label_37f99c;
        case 0x37f9a0u: goto label_37f9a0;
        case 0x37f9a4u: goto label_37f9a4;
        case 0x37f9a8u: goto label_37f9a8;
        case 0x37f9acu: goto label_37f9ac;
        case 0x37f9b0u: goto label_37f9b0;
        case 0x37f9b4u: goto label_37f9b4;
        case 0x37f9b8u: goto label_37f9b8;
        case 0x37f9bcu: goto label_37f9bc;
        case 0x37f9c0u: goto label_37f9c0;
        case 0x37f9c4u: goto label_37f9c4;
        case 0x37f9c8u: goto label_37f9c8;
        case 0x37f9ccu: goto label_37f9cc;
        case 0x37f9d0u: goto label_37f9d0;
        case 0x37f9d4u: goto label_37f9d4;
        case 0x37f9d8u: goto label_37f9d8;
        case 0x37f9dcu: goto label_37f9dc;
        case 0x37f9e0u: goto label_37f9e0;
        case 0x37f9e4u: goto label_37f9e4;
        case 0x37f9e8u: goto label_37f9e8;
        case 0x37f9ecu: goto label_37f9ec;
        case 0x37f9f0u: goto label_37f9f0;
        case 0x37f9f4u: goto label_37f9f4;
        case 0x37f9f8u: goto label_37f9f8;
        case 0x37f9fcu: goto label_37f9fc;
        case 0x37fa00u: goto label_37fa00;
        case 0x37fa04u: goto label_37fa04;
        case 0x37fa08u: goto label_37fa08;
        case 0x37fa0cu: goto label_37fa0c;
        case 0x37fa10u: goto label_37fa10;
        case 0x37fa14u: goto label_37fa14;
        case 0x37fa18u: goto label_37fa18;
        case 0x37fa1cu: goto label_37fa1c;
        case 0x37fa20u: goto label_37fa20;
        case 0x37fa24u: goto label_37fa24;
        case 0x37fa28u: goto label_37fa28;
        case 0x37fa2cu: goto label_37fa2c;
        case 0x37fa30u: goto label_37fa30;
        case 0x37fa34u: goto label_37fa34;
        case 0x37fa38u: goto label_37fa38;
        case 0x37fa3cu: goto label_37fa3c;
        case 0x37fa40u: goto label_37fa40;
        case 0x37fa44u: goto label_37fa44;
        case 0x37fa48u: goto label_37fa48;
        case 0x37fa4cu: goto label_37fa4c;
        case 0x37fa50u: goto label_37fa50;
        case 0x37fa54u: goto label_37fa54;
        case 0x37fa58u: goto label_37fa58;
        case 0x37fa5cu: goto label_37fa5c;
        case 0x37fa60u: goto label_37fa60;
        case 0x37fa64u: goto label_37fa64;
        case 0x37fa68u: goto label_37fa68;
        case 0x37fa6cu: goto label_37fa6c;
        case 0x37fa70u: goto label_37fa70;
        case 0x37fa74u: goto label_37fa74;
        case 0x37fa78u: goto label_37fa78;
        case 0x37fa7cu: goto label_37fa7c;
        case 0x37fa80u: goto label_37fa80;
        case 0x37fa84u: goto label_37fa84;
        case 0x37fa88u: goto label_37fa88;
        case 0x37fa8cu: goto label_37fa8c;
        case 0x37fa90u: goto label_37fa90;
        case 0x37fa94u: goto label_37fa94;
        case 0x37fa98u: goto label_37fa98;
        case 0x37fa9cu: goto label_37fa9c;
        case 0x37faa0u: goto label_37faa0;
        case 0x37faa4u: goto label_37faa4;
        case 0x37faa8u: goto label_37faa8;
        case 0x37faacu: goto label_37faac;
        default: break;
    }

    ctx->pc = 0x37f8b0u;

label_37f8b0:
    // 0x37f8b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37f8b4:
    // 0x37f8b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_37f8b8:
    // 0x37f8b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37f8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37f8bc:
    // 0x37f8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37f8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f8c0:
    // 0x37f8c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37f8c4:
    // 0x37f8c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37f8c8:
    // 0x37f8c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37f8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37f8cc:
    // 0x37f8cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37f8d0:
    // 0x37f8d0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37f8d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37f8d4:
    // 0x37f8d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37f8d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37f8d8:
    // 0x37f8d8: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x37f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37f8dc:
    // 0x37f8dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37f8dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37f8e0:
    // 0x37f8e0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_37f8e4:
    if (ctx->pc == 0x37F8E4u) {
        ctx->pc = 0x37F8E4u;
            // 0x37f8e4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37F8E8u;
        goto label_37f8e8;
    }
    ctx->pc = 0x37F8E0u;
    {
        const bool branch_taken_0x37f8e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37F8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F8E0u;
            // 0x37f8e4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f8e0) {
            ctx->pc = 0x37F8F8u;
            goto label_37f8f8;
        }
    }
    ctx->pc = 0x37F8E8u;
label_37f8e8:
    // 0x37f8e8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f8e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37f8ec:
    // 0x37f8ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x37f8ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_37f8f0:
    // 0x37f8f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_37f8f4:
    if (ctx->pc == 0x37F8F4u) {
        ctx->pc = 0x37F8F4u;
            // 0x37f8f4: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x37F8F8u;
        goto label_37f8f8;
    }
    ctx->pc = 0x37F8F0u;
    {
        const bool branch_taken_0x37f8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F8F0u;
            // 0x37f8f4: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f8f0) {
            ctx->pc = 0x37F914u;
            goto label_37f914;
        }
    }
    ctx->pc = 0x37F8F8u;
label_37f8f8:
    // 0x37f8f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f8f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37f8fc:
    // 0x37f8fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_37f900:
    // 0x37f900: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37f904:
    // 0x37f904: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x37f904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_37f908:
    // 0x37f908: 0x0  nop
    ctx->pc = 0x37f908u;
    // NOP
label_37f90c:
    // 0x37f90c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37f90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37f910:
    // 0x37f910: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x37f910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_37f914:
    // 0x37f914: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f918:
    // 0x37f918: 0x34432300  ori         $v1, $v0, 0x2300
    ctx->pc = 0x37f918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
label_37f91c:
    // 0x37f91c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f920:
    // 0x37f920: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37f924:
    // 0x37f924: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x37f924u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_37f928:
    // 0x37f928: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x37f928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37f92c:
    // 0x37f92c: 0xc66100c0  lwc1        $f1, 0xC0($s3)
    ctx->pc = 0x37f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37f930:
    // 0x37f930: 0xc66000a8  lwc1        $f0, 0xA8($s3)
    ctx->pc = 0x37f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f934:
    // 0x37f934: 0xc67500c4  lwc1        $f21, 0xC4($s3)
    ctx->pc = 0x37f934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37f938:
    // 0x37f938: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37f938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37f93c:
    // 0x37f93c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37f940:
    // 0x37f940: 0xc0506ac  jal         func_141AB0
label_37f944:
    if (ctx->pc == 0x37F944u) {
        ctx->pc = 0x37F944u;
            // 0x37f944: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x37F948u;
        goto label_37f948;
    }
    ctx->pc = 0x37F940u;
    SET_GPR_U32(ctx, 31, 0x37F948u);
    ctx->pc = 0x37F944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F940u;
            // 0x37f944: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F948u; }
        if (ctx->pc != 0x37F948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F948u; }
        if (ctx->pc != 0x37F948u) { return; }
    }
    ctx->pc = 0x37F948u;
label_37f948:
    // 0x37f948: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37f948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37f94c:
    // 0x37f94c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37f94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37f950:
    // 0x37f950: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37f950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37f954:
    // 0x37f954: 0x320f809  jalr        $t9
label_37f958:
    if (ctx->pc == 0x37F958u) {
        ctx->pc = 0x37F958u;
            // 0x37f958: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37F95Cu;
        goto label_37f95c;
    }
    ctx->pc = 0x37F954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F95Cu);
        ctx->pc = 0x37F958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F954u;
            // 0x37f958: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F95Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F95Cu; }
            if (ctx->pc != 0x37F95Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37F95Cu;
label_37f95c:
    // 0x37f95c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37f960:
    // 0x37f960: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x37f960u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_37f964:
    // 0x37f964: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x37f964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_37f968:
    // 0x37f968: 0x2610a1c0  addiu       $s0, $s0, -0x5E40
    ctx->pc = 0x37f968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943168));
label_37f96c:
    // 0x37f96c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x37f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37f970:
    // 0x37f970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37f970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f974:
    // 0x37f974: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x37f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f978:
    // 0x37f978: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37f978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37f97c:
    // 0x37f97c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37f97cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37f980:
    // 0x37f980: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37f980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37f984:
    // 0x37f984: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37f984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37f988:
    // 0x37f988: 0x84432102  lh          $v1, 0x2102($v0)
    ctx->pc = 0x37f988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_37f98c:
    // 0x37f98c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37f990:
    // 0x37f990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f994:
    // 0x37f994: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37f994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37f998:
    // 0x37f998: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x37f998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37f99c:
    // 0x37f99c: 0x0  nop
    ctx->pc = 0x37f99cu;
    // NOP
label_37f9a0:
    // 0x37f9a0: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x37f9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37f9a4:
    // 0x37f9a4: 0x4601a380  add.s       $f14, $f20, $f1
    ctx->pc = 0x37f9a4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_37f9a8:
    // 0x37f9a8: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x37f9a8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_37f9ac:
    // 0x37f9ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37f9acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_37f9b0:
    // 0x37f9b0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37f9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37f9b4:
    // 0x37f9b4: 0xc0bc284  jal         func_2F0A10
label_37f9b8:
    if (ctx->pc == 0x37F9B8u) {
        ctx->pc = 0x37F9B8u;
            // 0x37f9b8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x37F9BCu;
        goto label_37f9bc;
    }
    ctx->pc = 0x37F9B4u;
    SET_GPR_U32(ctx, 31, 0x37F9BCu);
    ctx->pc = 0x37F9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F9B4u;
            // 0x37f9b8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F9BCu; }
        if (ctx->pc != 0x37F9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F9BCu; }
        if (ctx->pc != 0x37F9BCu) { return; }
    }
    ctx->pc = 0x37F9BCu;
label_37f9bc:
    // 0x37f9bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x37f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f9c0:
    // 0x37f9c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37f9c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37f9c4:
    // 0x37f9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37f9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37f9c8:
    // 0x37f9c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37f9c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37f9cc:
    // 0x37f9cc: 0x320f809  jalr        $t9
label_37f9d0:
    if (ctx->pc == 0x37F9D0u) {
        ctx->pc = 0x37F9D0u;
            // 0x37f9d0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x37F9D4u;
        goto label_37f9d4;
    }
    ctx->pc = 0x37F9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F9D4u);
        ctx->pc = 0x37F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F9CCu;
            // 0x37f9d0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F9D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F9D4u; }
            if (ctx->pc != 0x37F9D4u) { return; }
        }
        }
    }
    ctx->pc = 0x37F9D4u;
label_37f9d4:
    // 0x37f9d4: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x37f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_37f9d8:
    // 0x37f9d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_37f9dc:
    // 0x37f9dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37f9e0:
    // 0x37f9e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37f9e4:
    // 0x37f9e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37f9e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_37f9e8:
    // 0x37f9e8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x37f9e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37f9ec:
    // 0x37f9ec: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x37f9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37f9f0:
    // 0x37f9f0: 0xc156b0c  jal         func_55AC30
label_37f9f4:
    if (ctx->pc == 0x37F9F4u) {
        ctx->pc = 0x37F9F4u;
            // 0x37f9f4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x37F9F8u;
        goto label_37f9f8;
    }
    ctx->pc = 0x37F9F0u;
    SET_GPR_U32(ctx, 31, 0x37F9F8u);
    ctx->pc = 0x37F9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F9F0u;
            // 0x37f9f4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55AC30u;
    if (runtime->hasFunction(0x55AC30u)) {
        auto targetFn = runtime->lookupFunction(0x55AC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F9F8u; }
        if (ctx->pc != 0x37F9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055AC30_0x55ac30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F9F8u; }
        if (ctx->pc != 0x37F9F8u) { return; }
    }
    ctx->pc = 0x37F9F8u;
label_37f9f8:
    // 0x37f9f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37f9fc:
    // 0x37f9fc: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x37f9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
label_37fa00:
    // 0x37fa00: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37fa04:
    // 0x37fa04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37fa04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_37fa08:
    // 0x37fa08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37fa0c:
    // 0x37fa0c: 0xc0506ac  jal         func_141AB0
label_37fa10:
    if (ctx->pc == 0x37FA10u) {
        ctx->pc = 0x37FA10u;
            // 0x37fa10: 0x261057b0  addiu       $s0, $s0, 0x57B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22448));
        ctx->pc = 0x37FA14u;
        goto label_37fa14;
    }
    ctx->pc = 0x37FA0Cu;
    SET_GPR_U32(ctx, 31, 0x37FA14u);
    ctx->pc = 0x37FA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FA0Cu;
            // 0x37fa10: 0x261057b0  addiu       $s0, $s0, 0x57B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FA14u; }
        if (ctx->pc != 0x37FA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FA14u; }
        if (ctx->pc != 0x37FA14u) { return; }
    }
    ctx->pc = 0x37FA14u;
label_37fa14:
    // 0x37fa14: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37fa14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37fa18:
    // 0x37fa18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37fa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37fa1c:
    // 0x37fa1c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37fa1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37fa20:
    // 0x37fa20: 0x320f809  jalr        $t9
label_37fa24:
    if (ctx->pc == 0x37FA24u) {
        ctx->pc = 0x37FA24u;
            // 0x37fa24: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37FA28u;
        goto label_37fa28;
    }
    ctx->pc = 0x37FA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37FA28u);
        ctx->pc = 0x37FA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FA20u;
            // 0x37fa24: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37FA28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37FA28u; }
            if (ctx->pc != 0x37FA28u) { return; }
        }
        }
    }
    ctx->pc = 0x37FA28u;
label_37fa28:
    // 0x37fa28: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37fa2c:
    // 0x37fa2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37fa2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37fa30:
    // 0x37fa30: 0x84445730  lh          $a0, 0x5730($v0)
    ctx->pc = 0x37fa30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22320)));
label_37fa34:
    // 0x37fa34: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x37fa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37fa38:
    // 0x37fa38: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x37fa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37fa3c:
    // 0x37fa3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37fa40:
    // 0x37fa40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37fa40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_37fa44:
    // 0x37fa44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37fa44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37fa48:
    // 0x37fa48: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37fa4c:
    // 0x37fa4c: 0x84435732  lh          $v1, 0x5732($v0)
    ctx->pc = 0x37fa4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22322)));
label_37fa50:
    // 0x37fa50: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x37fa50u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_37fa54:
    // 0x37fa54: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37fa58:
    // 0x37fa58: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37fa58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37fa5c:
    // 0x37fa5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37fa5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37fa60:
    // 0x37fa60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37fa64:
    // 0x37fa64: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37fa64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37fa68:
    // 0x37fa68: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37fa68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37fa6c:
    // 0x37fa6c: 0x4601a380  add.s       $f14, $f20, $f1
    ctx->pc = 0x37fa6cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_37fa70:
    // 0x37fa70: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37fa70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37fa74:
    // 0x37fa74: 0xc0bc284  jal         func_2F0A10
label_37fa78:
    if (ctx->pc == 0x37FA78u) {
        ctx->pc = 0x37FA78u;
            // 0x37fa78: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x37FA7Cu;
        goto label_37fa7c;
    }
    ctx->pc = 0x37FA74u;
    SET_GPR_U32(ctx, 31, 0x37FA7Cu);
    ctx->pc = 0x37FA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FA74u;
            // 0x37fa78: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FA7Cu; }
        if (ctx->pc != 0x37FA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FA7Cu; }
        if (ctx->pc != 0x37FA7Cu) { return; }
    }
    ctx->pc = 0x37FA7Cu;
label_37fa7c:
    // 0x37fa7c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37fa7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37fa80:
    // 0x37fa80: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37fa80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37fa84:
    // 0x37fa84: 0x320f809  jalr        $t9
label_37fa88:
    if (ctx->pc == 0x37FA88u) {
        ctx->pc = 0x37FA88u;
            // 0x37fa88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FA8Cu;
        goto label_37fa8c;
    }
    ctx->pc = 0x37FA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37FA8Cu);
        ctx->pc = 0x37FA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FA84u;
            // 0x37fa88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37FA8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37FA8Cu; }
            if (ctx->pc != 0x37FA8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37FA8Cu;
label_37fa8c:
    // 0x37fa8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37fa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37fa90:
    // 0x37fa90: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37fa94:
    // 0x37fa94: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37fa94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37fa98:
    // 0x37fa98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37fa9c:
    // 0x37fa9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37fa9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37faa0:
    // 0x37faa0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37faa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37faa4:
    // 0x37faa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37faa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37faa8:
    // 0x37faa8: 0x3e00008  jr          $ra
label_37faac:
    if (ctx->pc == 0x37FAACu) {
        ctx->pc = 0x37FAACu;
            // 0x37faac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37FAB0u;
        goto label_fallthrough_0x37faa8;
    }
    ctx->pc = 0x37FAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FAA8u;
            // 0x37faac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x37faa8:
    ctx->pc = 0x37FAB0u;
}
