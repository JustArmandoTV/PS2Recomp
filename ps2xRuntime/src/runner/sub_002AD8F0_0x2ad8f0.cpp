#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD8F0
// Address: 0x2ad8f0 - 0x2ae020
void sub_002AD8F0_0x2ad8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD8F0_0x2ad8f0");
#endif

    switch (ctx->pc) {
        case 0x2ad930u: goto label_2ad930;
        case 0x2ad97cu: goto label_2ad97c;
        case 0x2ad990u: goto label_2ad990;
        case 0x2ad9dcu: goto label_2ad9dc;
        case 0x2ad9fcu: goto label_2ad9fc;
        case 0x2ada0cu: goto label_2ada0c;
        case 0x2ada9cu: goto label_2ada9c;
        case 0x2adae8u: goto label_2adae8;
        case 0x2adb44u: goto label_2adb44;
        case 0x2adb70u: goto label_2adb70;
        case 0x2adba0u: goto label_2adba0;
        case 0x2adbc0u: goto label_2adbc0;
        case 0x2adbd0u: goto label_2adbd0;
        case 0x2adc10u: goto label_2adc10;
        case 0x2adc24u: goto label_2adc24;
        case 0x2adc30u: goto label_2adc30;
        case 0x2adc38u: goto label_2adc38;
        case 0x2adc44u: goto label_2adc44;
        case 0x2adc58u: goto label_2adc58;
        case 0x2adc64u: goto label_2adc64;
        case 0x2adc74u: goto label_2adc74;
        case 0x2adc88u: goto label_2adc88;
        case 0x2adc94u: goto label_2adc94;
        case 0x2adca0u: goto label_2adca0;
        case 0x2adce4u: goto label_2adce4;
        case 0x2adcf0u: goto label_2adcf0;
        case 0x2add00u: goto label_2add00;
        case 0x2add14u: goto label_2add14;
        case 0x2add20u: goto label_2add20;
        case 0x2add38u: goto label_2add38;
        case 0x2add48u: goto label_2add48;
        case 0x2add54u: goto label_2add54;
        case 0x2add68u: goto label_2add68;
        case 0x2add74u: goto label_2add74;
        case 0x2add88u: goto label_2add88;
        case 0x2adda4u: goto label_2adda4;
        case 0x2addacu: goto label_2addac;
        case 0x2addbcu: goto label_2addbc;
        case 0x2addc8u: goto label_2addc8;
        case 0x2adddcu: goto label_2adddc;
        case 0x2addf8u: goto label_2addf8;
        case 0x2ade00u: goto label_2ade00;
        case 0x2ade10u: goto label_2ade10;
        case 0x2ade1cu: goto label_2ade1c;
        case 0x2ade30u: goto label_2ade30;
        case 0x2ade4cu: goto label_2ade4c;
        case 0x2ade54u: goto label_2ade54;
        case 0x2ade60u: goto label_2ade60;
        case 0x2ade88u: goto label_2ade88;
        case 0x2ade94u: goto label_2ade94;
        case 0x2adeb4u: goto label_2adeb4;
        case 0x2adec0u: goto label_2adec0;
        case 0x2aded4u: goto label_2aded4;
        case 0x2adee4u: goto label_2adee4;
        case 0x2adef8u: goto label_2adef8;
        case 0x2adf2cu: goto label_2adf2c;
        case 0x2adf38u: goto label_2adf38;
        case 0x2adf44u: goto label_2adf44;
        case 0x2adf58u: goto label_2adf58;
        case 0x2adf6cu: goto label_2adf6c;
        case 0x2adfb0u: goto label_2adfb0;
        case 0x2adfc0u: goto label_2adfc0;
        default: break;
    }

    ctx->pc = 0x2ad8f0u;

    // 0x2ad8f0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2ad8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x2ad8f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ad8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ad8f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ad8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ad8fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ad8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ad900: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ad900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ad904: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ad904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad908: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ad908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ad90c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ad90cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ad910: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ad910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ad914: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2ad914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2ad918: 0xc4800114  lwc1        $f0, 0x114($a0)
    ctx->pc = 0x2ad918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad91c: 0x8c910060  lw          $s1, 0x60($a0)
    ctx->pc = 0x2ad91cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2ad920: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2ad920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad924: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x2ad924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x2ad928: 0xc0c6278  jal         func_3189E0
    ctx->pc = 0x2AD928u;
    SET_GPR_U32(ctx, 31, 0x2AD930u);
    ctx->pc = 0x2AD92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD928u;
            // 0x2ad92c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD930u; }
        if (ctx->pc != 0x2AD930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD930u; }
        if (ctx->pc != 0x2AD930u) { return; }
    }
    ctx->pc = 0x2AD930u;
label_2ad930:
    // 0x2ad930: 0x8e43011c  lw          $v1, 0x11C($s2)
    ctx->pc = 0x2ad930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x2ad934: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ad934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ad938: 0x10620177  beq         $v1, $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x2AD938u;
    {
        const bool branch_taken_0x2ad938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ad938) {
            ctx->pc = 0x2ADF18u;
            goto label_2adf18;
        }
    }
    ctx->pc = 0x2AD940u;
    // 0x2ad940: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ad940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ad944: 0x50620033  beql        $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2AD944u;
    {
        const bool branch_taken_0x2ad944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ad944) {
            ctx->pc = 0x2AD948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD944u;
            // 0x2ad948: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADA14u;
            goto label_2ada14;
        }
    }
    ctx->pc = 0x2AD94Cu;
    // 0x2ad94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad950: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD950u;
    {
        const bool branch_taken_0x2ad950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ad950) {
            ctx->pc = 0x2AD954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD950u;
            // 0x2ad954: 0x92420108  lbu         $v0, 0x108($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD968u;
            goto label_2ad968;
        }
    }
    ctx->pc = 0x2AD958u;
    // 0x2ad958: 0x5060018c  beql        $v1, $zero, . + 4 + (0x18C << 2)
    ctx->pc = 0x2AD958u;
    {
        const bool branch_taken_0x2ad958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad958) {
            ctx->pc = 0x2AD95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD958u;
            // 0x2ad95c: 0x8e420118  lw          $v0, 0x118($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF8Cu;
            goto label_2adf8c;
        }
    }
    ctx->pc = 0x2AD960u;
    // 0x2ad960: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x2AD960u;
    {
        const bool branch_taken_0x2ad960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad960) {
            ctx->pc = 0x2ADF88u;
            goto label_2adf88;
        }
    }
    ctx->pc = 0x2AD968u;
label_2ad968:
    // 0x2ad968: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AD968u;
    {
        const bool branch_taken_0x2ad968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad968) {
            ctx->pc = 0x2AD96Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD968u;
            // 0x2ad96c: 0xc641010c  lwc1        $f1, 0x10C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD994u;
            goto label_2ad994;
        }
    }
    ctx->pc = 0x2AD970u;
    // 0x2ad970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad974: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2AD974u;
    SET_GPR_U32(ctx, 31, 0x2AD97Cu);
    ctx->pc = 0x2AD978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD974u;
            // 0x2ad978: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD97Cu; }
        if (ctx->pc != 0x2AD97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD97Cu; }
        if (ctx->pc != 0x2AD97Cu) { return; }
    }
    ctx->pc = 0x2AD97Cu;
label_2ad97c:
    // 0x2ad97c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ad97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ad980: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x2ad980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2ad984: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ad984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad988: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2AD988u;
    SET_GPR_U32(ctx, 31, 0x2AD990u);
    ctx->pc = 0x2AD98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD988u;
            // 0x2ad98c: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD990u; }
        if (ctx->pc != 0x2AD990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD990u; }
        if (ctx->pc != 0x2AD990u) { return; }
    }
    ctx->pc = 0x2AD990u;
label_2ad990:
    // 0x2ad990: 0xc641010c  lwc1        $f1, 0x10C($s2)
    ctx->pc = 0x2ad990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ad994:
    // 0x2ad994: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x2ad994u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2ad998: 0xc6420110  lwc1        $f2, 0x110($s2)
    ctx->pc = 0x2ad998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad99c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ad99cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9a0: 0x0  nop
    ctx->pc = 0x2ad9a0u;
    // NOP
    // 0x2ad9a4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2ad9a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad9a8: 0x4614101d  msub.s      $f0, $f2, $f20
    ctx->pc = 0x2ad9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x2ad9ac: 0xe640010c  swc1        $f0, 0x10C($s2)
    ctx->pc = 0x2ad9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 268), bits); }
    // 0x2ad9b0: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x2ad9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
    // 0x2ad9b4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD9B4u;
    {
        const bool branch_taken_0x2ad9b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AD9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD9B4u;
            // 0x2ad9b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad9b4) {
            ctx->pc = 0x2AD9CCu;
            goto label_2ad9cc;
        }
    }
    ctx->pc = 0x2AD9BCu;
    // 0x2ad9bc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2ad9bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ad9c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD9C0u;
    {
        const bool branch_taken_0x2ad9c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad9c0) {
            ctx->pc = 0x2AD9CCu;
            goto label_2ad9cc;
        }
    }
    ctx->pc = 0x2AD9C8u;
    // 0x2ad9c8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2ad9c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ad9cc:
    // 0x2ad9cc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD9CCu;
    {
        const bool branch_taken_0x2ad9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad9cc) {
            ctx->pc = 0x2AD9E8u;
            goto label_2ad9e8;
        }
    }
    ctx->pc = 0x2AD9D4u;
    // 0x2ad9d4: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2AD9D4u;
    SET_GPR_U32(ctx, 31, 0x2AD9DCu);
    ctx->pc = 0x2AD9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD9D4u;
            // 0x2ad9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD9DCu; }
        if (ctx->pc != 0x2AD9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD9DCu; }
        if (ctx->pc != 0x2AD9DCu) { return; }
    }
    ctx->pc = 0x2AD9DCu;
label_2ad9dc:
    // 0x2ad9dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD9DCu;
    {
        const bool branch_taken_0x2ad9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad9dc) {
            ctx->pc = 0x2AD9E8u;
            goto label_2ad9e8;
        }
    }
    ctx->pc = 0x2AD9E4u;
    // 0x2ad9e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ad9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad9e8:
    // 0x2ad9e8: 0x12000167  beqz        $s0, . + 4 + (0x167 << 2)
    ctx->pc = 0x2AD9E8u;
    {
        const bool branch_taken_0x2ad9e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad9e8) {
            ctx->pc = 0x2ADF88u;
            goto label_2adf88;
        }
    }
    ctx->pc = 0x2AD9F0u;
    // 0x2ad9f0: 0x8e300090  lw          $s0, 0x90($s1)
    ctx->pc = 0x2ad9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2ad9f4: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x2AD9F4u;
    SET_GPR_U32(ctx, 31, 0x2AD9FCu);
    ctx->pc = 0x2AD9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD9F4u;
            // 0x2ad9f8: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD9FCu; }
        if (ctx->pc != 0x2AD9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD9FCu; }
        if (ctx->pc != 0x2AD9FCu) { return; }
    }
    ctx->pc = 0x2AD9FCu;
label_2ad9fc:
    // 0x2ad9fc: 0x18400162  blez        $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x2AD9FCu;
    {
        const bool branch_taken_0x2ad9fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ad9fc) {
            ctx->pc = 0x2ADF88u;
            goto label_2adf88;
        }
    }
    ctx->pc = 0x2ADA04u;
    // 0x2ada04: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x2ADA04u;
    SET_GPR_U32(ctx, 31, 0x2ADA0Cu);
    ctx->pc = 0x2ADA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA04u;
            // 0x2ada08: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA0Cu; }
        if (ctx->pc != 0x2ADA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA0Cu; }
        if (ctx->pc != 0x2ADA0Cu) { return; }
    }
    ctx->pc = 0x2ADA0Cu;
label_2ada0c:
    // 0x2ada0c: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x2ADA0Cu;
    {
        const bool branch_taken_0x2ada0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ada0c) {
            ctx->pc = 0x2ADF88u;
            goto label_2adf88;
        }
    }
    ctx->pc = 0x2ADA14u;
label_2ada14:
    // 0x2ada14: 0x8e230db0  lw          $v1, 0xDB0($s1)
    ctx->pc = 0x2ada14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
    // 0x2ada18: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2ada18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ada1c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2ada1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2ada20: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ADA20u;
    {
        const bool branch_taken_0x2ada20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA20u;
            // 0x2ada24: 0x965000c2  lhu         $s0, 0xC2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada20) {
            ctx->pc = 0x2ADA70u;
            goto label_2ada70;
        }
    }
    ctx->pc = 0x2ADA28u;
    // 0x2ada28: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2ada28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ada2c: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2ADA2Cu;
    {
        const bool branch_taken_0x2ada2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ada2c) {
            ctx->pc = 0x2ADA30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA2Cu;
            // 0x2ada30: 0x8e230a74  lw          $v1, 0xA74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2676)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADA74u;
            goto label_2ada74;
        }
    }
    ctx->pc = 0x2ADA34u;
    // 0x2ada34: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2ada34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2ada38: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ADA38u;
    {
        const bool branch_taken_0x2ada38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ada38) {
            ctx->pc = 0x2ADA70u;
            goto label_2ada70;
        }
    }
    ctx->pc = 0x2ADA40u;
    // 0x2ada40: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2ada40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ada44: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ADA44u;
    {
        const bool branch_taken_0x2ada44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ada44) {
            ctx->pc = 0x2ADA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA44u;
            // 0x2ada48: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADA64u;
            goto label_2ada64;
        }
    }
    ctx->pc = 0x2ADA4Cu;
    // 0x2ada4c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2ada4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ada50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADA50u;
    {
        const bool branch_taken_0x2ada50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ada50) {
            ctx->pc = 0x2ADA60u;
            goto label_2ada60;
        }
    }
    ctx->pc = 0x2ADA58u;
    // 0x2ada58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2ADA58u;
    {
        const bool branch_taken_0x2ada58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA58u;
            // 0x2ada5c: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada58) {
            ctx->pc = 0x2ADA8Cu;
            goto label_2ada8c;
        }
    }
    ctx->pc = 0x2ADA60u;
label_2ada60:
    // 0x2ada60: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ada60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2ada64:
    // 0x2ada64: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2ada64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ada68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2ADA68u;
    {
        const bool branch_taken_0x2ada68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ada68) {
            ctx->pc = 0x2ADA88u;
            goto label_2ada88;
        }
    }
    ctx->pc = 0x2ADA70u;
label_2ada70:
    // 0x2ada70: 0x8e230a74  lw          $v1, 0xA74($s1)
    ctx->pc = 0x2ada70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2676)));
label_2ada74:
    // 0x2ada74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ada74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ada78: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADA78u;
    {
        const bool branch_taken_0x2ada78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ada78) {
            ctx->pc = 0x2ADA88u;
            goto label_2ada88;
        }
    }
    ctx->pc = 0x2ADA80u;
    // 0x2ada80: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ada80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ada84: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2ada84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2ada88:
    // 0x2ada88: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2ada88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_2ada8c:
    // 0x2ada8c: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x2ada8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x2ada90: 0x26260820  addiu       $a2, $s1, 0x820
    ctx->pc = 0x2ada90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    // 0x2ada94: 0xc0b82c4  jal         func_2E0B10
    ctx->pc = 0x2ADA94u;
    SET_GPR_U32(ctx, 31, 0x2ADA9Cu);
    ctx->pc = 0x2ADA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA94u;
            // 0x2ada98: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA9Cu; }
        if (ctx->pc != 0x2ADA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA9Cu; }
        if (ctx->pc != 0x2ADA9Cu) { return; }
    }
    ctx->pc = 0x2ADA9Cu;
label_2ada9c:
    // 0x2ada9c: 0x964300c6  lhu         $v1, 0xC6($s2)
    ctx->pc = 0x2ada9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 198)));
    // 0x2adaa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2adaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adaa4: 0x506200f1  beql        $v1, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x2ADAA4u;
    {
        const bool branch_taken_0x2adaa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2adaa4) {
            ctx->pc = 0x2ADAA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADAA4u;
            // 0x2adaa8: 0x964200c2  lhu         $v0, 0xC2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADE6Cu;
            goto label_2ade6c;
        }
    }
    ctx->pc = 0x2ADAACu;
    // 0x2adaac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2adaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2adab0: 0x106200ed  beq         $v1, $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x2ADAB0u;
    {
        const bool branch_taken_0x2adab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2adab0) {
            ctx->pc = 0x2ADE68u;
            goto label_2ade68;
        }
    }
    ctx->pc = 0x2ADAB8u;
    // 0x2adab8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2adab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2adabc: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2adabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2adac0: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x2adac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2adac4: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x2adac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x2adac8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2adac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2adacc: 0x26270820  addiu       $a3, $s1, 0x820
    ctx->pc = 0x2adaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    // 0x2adad0: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x2adad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x2adad4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2adad4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2adad8: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x2adad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2adadc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x2adadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2adae0: 0xc0b838c  jal         func_2E0E30
    ctx->pc = 0x2ADAE0u;
    SET_GPR_U32(ctx, 31, 0x2ADAE8u);
    ctx->pc = 0x2ADAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADAE0u;
            // 0x2adae4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E30u;
    if (runtime->hasFunction(0x2E0E30u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADAE8u; }
        if (ctx->pc != 0x2ADAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E30_0x2e0e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADAE8u; }
        if (ctx->pc != 0x2ADAE8u) { return; }
    }
    ctx->pc = 0x2ADAE8u;
label_2adae8:
    // 0x2adae8: 0x964300c6  lhu         $v1, 0xC6($s2)
    ctx->pc = 0x2adae8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 198)));
    // 0x2adaec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2adaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adaf0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADAF0u;
    {
        const bool branch_taken_0x2adaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADAF0u;
            // 0x2adaf4: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adaf0) {
            ctx->pc = 0x2ADB08u;
            goto label_2adb08;
        }
    }
    ctx->pc = 0x2ADAF8u;
    // 0x2adaf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2adaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2adafc: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADAFCu;
    {
        const bool branch_taken_0x2adafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2adafc) {
            ctx->pc = 0x2ADB08u;
            goto label_2adb08;
        }
    }
    ctx->pc = 0x2ADB04u;
    // 0x2adb04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2adb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2adb08:
    // 0x2adb08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2adb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2adb0c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2adb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2adb10: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2adb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2adb14: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x2adb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x2adb18: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADB18u;
    {
        const bool branch_taken_0x2adb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2adb18) {
            ctx->pc = 0x2ADB1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB18u;
            // 0x2adb1c: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADB20u;
    // 0x2adb20: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2adb20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2adb24: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2adb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2adb28:
    // 0x2adb28: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2ADB28u;
    {
        const bool branch_taken_0x2adb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adb28) {
            ctx->pc = 0x2ADB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB28u;
            // 0x2adb2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADB68u;
            goto label_2adb68;
        }
    }
    ctx->pc = 0x2ADB30u;
    // 0x2adb30: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADB30u;
    {
        const bool branch_taken_0x2adb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adb30) {
            ctx->pc = 0x2ADB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB30u;
            // 0x2adb34: 0x8e4300b0  lw          $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADB54u;
            goto label_2adb54;
        }
    }
    ctx->pc = 0x2ADB38u;
    // 0x2adb38: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2adb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2adb3c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2ADB3Cu;
    SET_GPR_U32(ctx, 31, 0x2ADB44u);
    ctx->pc = 0x2ADB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB3Cu;
            // 0x2adb40: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADB44u; }
        if (ctx->pc != 0x2ADB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADB44u; }
        if (ctx->pc != 0x2ADB44u) { return; }
    }
    ctx->pc = 0x2ADB44u;
label_2adb44:
    // 0x2adb44: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2adb44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adb48: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADB48u;
    {
        const bool branch_taken_0x2adb48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2adb48) {
            ctx->pc = 0x2ADB64u;
            goto label_2adb64;
        }
    }
    ctx->pc = 0x2ADB50u;
    // 0x2adb50: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x2adb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2adb54:
    // 0x2adb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2adb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adb58: 0x84630028  lh          $v1, 0x28($v1)
    ctx->pc = 0x2adb58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2adb5c: 0x546200e7  bnel        $v1, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2ADB5Cu;
    {
        const bool branch_taken_0x2adb5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2adb5c) {
            ctx->pc = 0x2ADB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB5Cu;
            // 0x2adb60: 0xc641010c  lwc1        $f1, 0x10C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADEFCu;
            goto label_2adefc;
        }
    }
    ctx->pc = 0x2ADB64u;
label_2adb64:
    // 0x2adb64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2adb68:
    // 0x2adb68: 0xc0ab808  jal         func_2AE020
    ctx->pc = 0x2ADB68u;
    SET_GPR_U32(ctx, 31, 0x2ADB70u);
    ctx->pc = 0x2ADB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB68u;
            // 0x2adb6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADB70u; }
        if (ctx->pc != 0x2ADB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADB70u; }
        if (ctx->pc != 0x2ADB70u) { return; }
    }
    ctx->pc = 0x2ADB70u;
label_2adb70:
    // 0x2adb70: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x2adb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
    // 0x2adb74: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x2adb74u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2adb78: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADB78u;
    {
        const bool branch_taken_0x2adb78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2ADB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB78u;
            // 0x2adb7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb78) {
            ctx->pc = 0x2ADB90u;
            goto label_2adb90;
        }
    }
    ctx->pc = 0x2ADB80u;
    // 0x2adb80: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2adb80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2adb84: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADB84u;
    {
        const bool branch_taken_0x2adb84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adb84) {
            ctx->pc = 0x2ADB90u;
            goto label_2adb90;
        }
    }
    ctx->pc = 0x2ADB8Cu;
    // 0x2adb8c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2adb8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2adb90:
    // 0x2adb90: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADB90u;
    {
        const bool branch_taken_0x2adb90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adb90) {
            ctx->pc = 0x2ADBACu;
            goto label_2adbac;
        }
    }
    ctx->pc = 0x2ADB98u;
    // 0x2adb98: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x2ADB98u;
    SET_GPR_U32(ctx, 31, 0x2ADBA0u);
    ctx->pc = 0x2ADB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB98u;
            // 0x2adb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBA0u; }
        if (ctx->pc != 0x2ADBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBA0u; }
        if (ctx->pc != 0x2ADBA0u) { return; }
    }
    ctx->pc = 0x2ADBA0u;
label_2adba0:
    // 0x2adba0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADBA0u;
    {
        const bool branch_taken_0x2adba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adba0) {
            ctx->pc = 0x2ADBACu;
            goto label_2adbac;
        }
    }
    ctx->pc = 0x2ADBA8u;
    // 0x2adba8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2adba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2adbac:
    // 0x2adbac: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ADBACu;
    {
        const bool branch_taken_0x2adbac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adbac) {
            ctx->pc = 0x2ADBB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADBACu;
            // 0x2adbb0: 0x8e240da0  lw          $a0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADBD4u;
            goto label_2adbd4;
        }
    }
    ctx->pc = 0x2ADBB4u;
    // 0x2adbb4: 0x8e300090  lw          $s0, 0x90($s1)
    ctx->pc = 0x2adbb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2adbb8: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x2ADBB8u;
    SET_GPR_U32(ctx, 31, 0x2ADBC0u);
    ctx->pc = 0x2ADBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADBB8u;
            // 0x2adbbc: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBC0u; }
        if (ctx->pc != 0x2ADBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBC0u; }
        if (ctx->pc != 0x2ADBC0u) { return; }
    }
    ctx->pc = 0x2ADBC0u;
label_2adbc0:
    // 0x2adbc0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADBC0u;
    {
        const bool branch_taken_0x2adbc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2adbc0) {
            ctx->pc = 0x2ADBD0u;
            goto label_2adbd0;
        }
    }
    ctx->pc = 0x2ADBC8u;
    // 0x2adbc8: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x2ADBC8u;
    SET_GPR_U32(ctx, 31, 0x2ADBD0u);
    ctx->pc = 0x2ADBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADBC8u;
            // 0x2adbcc: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBD0u; }
        if (ctx->pc != 0x2ADBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBD0u; }
        if (ctx->pc != 0x2ADBD0u) { return; }
    }
    ctx->pc = 0x2ADBD0u;
label_2adbd0:
    // 0x2adbd0: 0x8e240da0  lw          $a0, 0xDA0($s1)
    ctx->pc = 0x2adbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_2adbd4:
    // 0x2adbd4: 0x8e220db0  lw          $v0, 0xDB0($s1)
    ctx->pc = 0x2adbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
    // 0x2adbd8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2adbd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2adbdc: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x2adbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x2adbe0: 0x802026  xor         $a0, $a0, $zero
    ctx->pc = 0x2adbe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
    // 0x2adbe4: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x2adbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x2adbe8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2adbe8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2adbec: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2adbecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2adbf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2adbf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2adbf4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2adbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2adbf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2adbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2adbfc: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2ADBFCu;
    {
        const bool branch_taken_0x2adbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adbfc) {
            ctx->pc = 0x2ADEF8u;
            goto label_2adef8;
        }
    }
    ctx->pc = 0x2ADC04u;
    // 0x2adc04: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2adc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2adc08: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2ADC08u;
    SET_GPR_U32(ctx, 31, 0x2ADC10u);
    ctx->pc = 0x2ADC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC08u;
            // 0x2adc0c: 0x264500e0  addiu       $a1, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC10u; }
        if (ctx->pc != 0x2ADC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC10u; }
        if (ctx->pc != 0x2ADC10u) { return; }
    }
    ctx->pc = 0x2ADC10u;
label_2adc10:
    // 0x2adc10: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2adc10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2adc14: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2adc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2adc18: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x2adc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2adc1c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2ADC1Cu;
    SET_GPR_U32(ctx, 31, 0x2ADC24u);
    ctx->pc = 0x2ADC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC1Cu;
            // 0x2adc20: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC24u; }
        if (ctx->pc != 0x2ADC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC24u; }
        if (ctx->pc != 0x2ADC24u) { return; }
    }
    ctx->pc = 0x2ADC24u;
label_2adc24:
    // 0x2adc24: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2adc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2adc28: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2ADC28u;
    SET_GPR_U32(ctx, 31, 0x2ADC30u);
    ctx->pc = 0x2ADC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC28u;
            // 0x2adc2c: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC30u; }
        if (ctx->pc != 0x2ADC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC30u; }
        if (ctx->pc != 0x2ADC30u) { return; }
    }
    ctx->pc = 0x2ADC30u;
label_2adc30:
    // 0x2adc30: 0xc049514  jal         func_125450
    ctx->pc = 0x2ADC30u;
    SET_GPR_U32(ctx, 31, 0x2ADC38u);
    ctx->pc = 0x2ADC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC30u;
            // 0x2adc34: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC38u; }
        if (ctx->pc != 0x2ADC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC38u; }
        if (ctx->pc != 0x2ADC38u) { return; }
    }
    ctx->pc = 0x2ADC38u;
label_2adc38:
    // 0x2adc38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2adc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc3c: 0xc040220  jal         func_100880
    ctx->pc = 0x2ADC3Cu;
    SET_GPR_U32(ctx, 31, 0x2ADC44u);
    ctx->pc = 0x2ADC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC3Cu;
            // 0x2adc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100880u;
    if (runtime->hasFunction(0x100880u)) {
        auto targetFn = runtime->lookupFunction(0x100880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC44u; }
        if (ctx->pc != 0x2ADC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100880_0x100880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC44u; }
        if (ctx->pc != 0x2ADC44u) { return; }
    }
    ctx->pc = 0x2ADC44u;
label_2adc44:
    // 0x2adc44: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x2ADC44u;
    {
        const bool branch_taken_0x2adc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc44) {
            ctx->pc = 0x2ADC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC44u;
            // 0x2adc48: 0x262402e0  addiu       $a0, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADE08u;
            goto label_2ade08;
        }
    }
    ctx->pc = 0x2ADC4Cu;
    // 0x2adc4c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2adc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2adc50: 0xc04c774  jal         func_131DD0
    ctx->pc = 0x2ADC50u;
    SET_GPR_U32(ctx, 31, 0x2ADC58u);
    ctx->pc = 0x2ADC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC50u;
            // 0x2adc54: 0x26250830  addiu       $a1, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131DD0u;
    if (runtime->hasFunction(0x131DD0u)) {
        auto targetFn = runtime->lookupFunction(0x131DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC58u; }
        if (ctx->pc != 0x2ADC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131DD0_0x131dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC58u; }
        if (ctx->pc != 0x2ADC58u) { return; }
    }
    ctx->pc = 0x2ADC58u;
label_2adc58:
    // 0x2adc58: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2adc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2adc5c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2ADC5Cu;
    SET_GPR_U32(ctx, 31, 0x2ADC64u);
    ctx->pc = 0x2ADC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC5Cu;
            // 0x2adc60: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC64u; }
        if (ctx->pc != 0x2ADC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC64u; }
        if (ctx->pc != 0x2ADC64u) { return; }
    }
    ctx->pc = 0x2ADC64u;
label_2adc64:
    // 0x2adc64: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2adc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2adc68: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2adc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2adc6c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2ADC6Cu;
    SET_GPR_U32(ctx, 31, 0x2ADC74u);
    ctx->pc = 0x2ADC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC6Cu;
            // 0x2adc70: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC74u; }
        if (ctx->pc != 0x2ADC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC74u; }
        if (ctx->pc != 0x2ADC74u) { return; }
    }
    ctx->pc = 0x2ADC74u;
label_2adc74:
    // 0x2adc74: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2adc74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2adc78: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2adc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2adc7c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2adc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2adc80: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2ADC80u;
    SET_GPR_U32(ctx, 31, 0x2ADC88u);
    ctx->pc = 0x2ADC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC80u;
            // 0x2adc84: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC88u; }
        if (ctx->pc != 0x2ADC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC88u; }
        if (ctx->pc != 0x2ADC88u) { return; }
    }
    ctx->pc = 0x2ADC88u;
label_2adc88:
    // 0x2adc88: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2adc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2adc8c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2ADC8Cu;
    SET_GPR_U32(ctx, 31, 0x2ADC94u);
    ctx->pc = 0x2ADC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC8Cu;
            // 0x2adc90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC94u; }
        if (ctx->pc != 0x2ADC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC94u; }
        if (ctx->pc != 0x2ADC94u) { return; }
    }
    ctx->pc = 0x2ADC94u;
label_2adc94:
    // 0x2adc94: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2adc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2adc98: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2ADC98u;
    SET_GPR_U32(ctx, 31, 0x2ADCA0u);
    ctx->pc = 0x2ADC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC98u;
            // 0x2adc9c: 0x26250820  addiu       $a1, $s1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADCA0u; }
        if (ctx->pc != 0x2ADCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADCA0u; }
        if (ctx->pc != 0x2ADCA0u) { return; }
    }
    ctx->pc = 0x2ADCA0u;
label_2adca0:
    // 0x2adca0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2adca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2adca4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2adca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2adca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2adca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2adcac: 0x0  nop
    ctx->pc = 0x2adcacu;
    // NOP
    // 0x2adcb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2adcb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adcb4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2ADCB4u;
    {
        const bool branch_taken_0x2adcb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2adcb4) {
            ctx->pc = 0x2ADCB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCB4u;
            // 0x2adcb8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADCDCu;
            goto label_2adcdc;
        }
    }
    ctx->pc = 0x2ADCBCu;
    // 0x2adcbc: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x2adcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x2adcc0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2adcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2adcc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2adcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2adcc8: 0x0  nop
    ctx->pc = 0x2adcc8u;
    // NOP
    // 0x2adccc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2adcccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adcd0: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x2ADCD0u;
    {
        const bool branch_taken_0x2adcd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2adcd0) {
            ctx->pc = 0x2ADCD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCD0u;
            // 0x2adcd4: 0x262402e0  addiu       $a0, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADDB4u;
            goto label_2addb4;
        }
    }
    ctx->pc = 0x2ADCD8u;
    // 0x2adcd8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2adcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2adcdc:
    // 0x2adcdc: 0xc04c774  jal         func_131DD0
    ctx->pc = 0x2ADCDCu;
    SET_GPR_U32(ctx, 31, 0x2ADCE4u);
    ctx->pc = 0x2ADCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCDCu;
            // 0x2adce0: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131DD0u;
    if (runtime->hasFunction(0x131DD0u)) {
        auto targetFn = runtime->lookupFunction(0x131DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADCE4u; }
        if (ctx->pc != 0x2ADCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131DD0_0x131dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADCE4u; }
        if (ctx->pc != 0x2ADCE4u) { return; }
    }
    ctx->pc = 0x2ADCE4u;
label_2adce4:
    // 0x2adce4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2adce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2adce8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2ADCE8u;
    SET_GPR_U32(ctx, 31, 0x2ADCF0u);
    ctx->pc = 0x2ADCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCE8u;
            // 0x2adcec: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADCF0u; }
        if (ctx->pc != 0x2ADCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADCF0u; }
        if (ctx->pc != 0x2ADCF0u) { return; }
    }
    ctx->pc = 0x2ADCF0u;
label_2adcf0:
    // 0x2adcf0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2adcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2adcf4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2adcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2adcf8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2ADCF8u;
    SET_GPR_U32(ctx, 31, 0x2ADD00u);
    ctx->pc = 0x2ADCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCF8u;
            // 0x2adcfc: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD00u; }
        if (ctx->pc != 0x2ADD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD00u; }
        if (ctx->pc != 0x2ADD00u) { return; }
    }
    ctx->pc = 0x2ADD00u;
label_2add00:
    // 0x2add00: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2add00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2add04: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2add04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2add08: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2add08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2add0c: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2ADD0Cu;
    SET_GPR_U32(ctx, 31, 0x2ADD14u);
    ctx->pc = 0x2ADD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD0Cu;
            // 0x2add10: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD14u; }
        if (ctx->pc != 0x2ADD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD14u; }
        if (ctx->pc != 0x2ADD14u) { return; }
    }
    ctx->pc = 0x2ADD14u;
label_2add14:
    // 0x2add14: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2add14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2add18: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2ADD18u;
    SET_GPR_U32(ctx, 31, 0x2ADD20u);
    ctx->pc = 0x2ADD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD18u;
            // 0x2add1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD20u; }
        if (ctx->pc != 0x2ADD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD20u; }
        if (ctx->pc != 0x2ADD20u) { return; }
    }
    ctx->pc = 0x2ADD20u;
label_2add20:
    // 0x2add20: 0xc7ac0120  lwc1        $f12, 0x120($sp)
    ctx->pc = 0x2add20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2add24: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2add24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2add28: 0xc7ad0124  lwc1        $f13, 0x124($sp)
    ctx->pc = 0x2add28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2add2c: 0xc7ae0128  lwc1        $f14, 0x128($sp)
    ctx->pc = 0x2add2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2add30: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x2ADD30u;
    SET_GPR_U32(ctx, 31, 0x2ADD38u);
    ctx->pc = 0x2ADD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD30u;
            // 0x2add34: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD38u; }
        if (ctx->pc != 0x2ADD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD38u; }
        if (ctx->pc != 0x2ADD38u) { return; }
    }
    ctx->pc = 0x2ADD38u;
label_2add38:
    // 0x2add38: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2add38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2add3c: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x2add3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x2add40: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x2ADD40u;
    SET_GPR_U32(ctx, 31, 0x2ADD48u);
    ctx->pc = 0x2ADD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD40u;
            // 0x2add44: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD48u; }
        if (ctx->pc != 0x2ADD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD48u; }
        if (ctx->pc != 0x2ADD48u) { return; }
    }
    ctx->pc = 0x2ADD48u;
label_2add48:
    // 0x2add48: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2add48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2add4c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2ADD4Cu;
    SET_GPR_U32(ctx, 31, 0x2ADD54u);
    ctx->pc = 0x2ADD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD4Cu;
            // 0x2add50: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD54u; }
        if (ctx->pc != 0x2ADD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD54u; }
        if (ctx->pc != 0x2ADD54u) { return; }
    }
    ctx->pc = 0x2ADD54u;
label_2add54:
    // 0x2add54: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2add54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2add58: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x2add58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x2add5c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2add5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2add60: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2ADD60u;
    SET_GPR_U32(ctx, 31, 0x2ADD68u);
    ctx->pc = 0x2ADD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD60u;
            // 0x2add64: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD68u; }
        if (ctx->pc != 0x2ADD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD68u; }
        if (ctx->pc != 0x2ADD68u) { return; }
    }
    ctx->pc = 0x2ADD68u;
label_2add68:
    // 0x2add68: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x2add68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x2add6c: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x2ADD6Cu;
    SET_GPR_U32(ctx, 31, 0x2ADD74u);
    ctx->pc = 0x2ADD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD6Cu;
            // 0x2add70: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD74u; }
        if (ctx->pc != 0x2ADD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD74u; }
        if (ctx->pc != 0x2ADD74u) { return; }
    }
    ctx->pc = 0x2ADD74u;
label_2add74:
    // 0x2add74: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2add74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2add78: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x2add78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x2add7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2add7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2add80: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2ADD80u;
    SET_GPR_U32(ctx, 31, 0x2ADD88u);
    ctx->pc = 0x2ADD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD80u;
            // 0x2add84: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD88u; }
        if (ctx->pc != 0x2ADD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADD88u; }
        if (ctx->pc != 0x2ADD88u) { return; }
    }
    ctx->pc = 0x2ADD88u;
label_2add88:
    // 0x2add88: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x2add88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2add8c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2add8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2add90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2add90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2add94: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x2add94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2add98: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x2add98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2add9c: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2ADD9Cu;
    SET_GPR_U32(ctx, 31, 0x2ADDA4u);
    ctx->pc = 0x2ADDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADD9Cu;
            // 0x2adda0: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDA4u; }
        if (ctx->pc != 0x2ADDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDA4u; }
        if (ctx->pc != 0x2ADDA4u) { return; }
    }
    ctx->pc = 0x2ADDA4u;
label_2adda4:
    // 0x2adda4: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x2ADDA4u;
    SET_GPR_U32(ctx, 31, 0x2ADDACu);
    ctx->pc = 0x2ADDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDA4u;
            // 0x2adda8: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDACu; }
        if (ctx->pc != 0x2ADDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDACu; }
        if (ctx->pc != 0x2ADDACu) { return; }
    }
    ctx->pc = 0x2ADDACu;
label_2addac:
    // 0x2addac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2ADDACu;
    {
        const bool branch_taken_0x2addac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDACu;
            // 0x2addb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addac) {
            ctx->pc = 0x2ADE58u;
            goto label_2ade58;
        }
    }
    ctx->pc = 0x2ADDB4u;
label_2addb4:
    // 0x2addb4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2ADDB4u;
    SET_GPR_U32(ctx, 31, 0x2ADDBCu);
    ctx->pc = 0x2ADDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDB4u;
            // 0x2addb8: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDBCu; }
        if (ctx->pc != 0x2ADDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDBCu; }
        if (ctx->pc != 0x2ADDBCu) { return; }
    }
    ctx->pc = 0x2ADDBCu;
label_2addbc:
    // 0x2addbc: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x2addbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x2addc0: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x2ADDC0u;
    SET_GPR_U32(ctx, 31, 0x2ADDC8u);
    ctx->pc = 0x2ADDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDC0u;
            // 0x2addc4: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDC8u; }
        if (ctx->pc != 0x2ADDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDC8u; }
        if (ctx->pc != 0x2ADDC8u) { return; }
    }
    ctx->pc = 0x2ADDC8u;
label_2addc8:
    // 0x2addc8: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x2addc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x2addcc: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x2addccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x2addd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2addd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2addd4: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2ADDD4u;
    SET_GPR_U32(ctx, 31, 0x2ADDDCu);
    ctx->pc = 0x2ADDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDD4u;
            // 0x2addd8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDDCu; }
        if (ctx->pc != 0x2ADDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDDCu; }
        if (ctx->pc != 0x2ADDDCu) { return; }
    }
    ctx->pc = 0x2ADDDCu;
label_2adddc:
    // 0x2adddc: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x2adddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2adde0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2adde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2adde4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2adde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2adde8: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x2adde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2addec: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x2addecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2addf0: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2ADDF0u;
    SET_GPR_U32(ctx, 31, 0x2ADDF8u);
    ctx->pc = 0x2ADDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDF0u;
            // 0x2addf4: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDF8u; }
        if (ctx->pc != 0x2ADDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDF8u; }
        if (ctx->pc != 0x2ADDF8u) { return; }
    }
    ctx->pc = 0x2ADDF8u;
label_2addf8:
    // 0x2addf8: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x2ADDF8u;
    SET_GPR_U32(ctx, 31, 0x2ADE00u);
    ctx->pc = 0x2ADDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDF8u;
            // 0x2addfc: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE00u; }
        if (ctx->pc != 0x2ADE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE00u; }
        if (ctx->pc != 0x2ADE00u) { return; }
    }
    ctx->pc = 0x2ADE00u;
label_2ade00:
    // 0x2ade00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2ADE00u;
    {
        const bool branch_taken_0x2ade00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ade00) {
            ctx->pc = 0x2ADE54u;
            goto label_2ade54;
        }
    }
    ctx->pc = 0x2ADE08u;
label_2ade08:
    // 0x2ade08: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2ADE08u;
    SET_GPR_U32(ctx, 31, 0x2ADE10u);
    ctx->pc = 0x2ADE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE08u;
            // 0x2ade0c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE10u; }
        if (ctx->pc != 0x2ADE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE10u; }
        if (ctx->pc != 0x2ADE10u) { return; }
    }
    ctx->pc = 0x2ADE10u;
label_2ade10:
    // 0x2ade10: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x2ade10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x2ade14: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x2ADE14u;
    SET_GPR_U32(ctx, 31, 0x2ADE1Cu);
    ctx->pc = 0x2ADE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE14u;
            // 0x2ade18: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE1Cu; }
        if (ctx->pc != 0x2ADE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE1Cu; }
        if (ctx->pc != 0x2ADE1Cu) { return; }
    }
    ctx->pc = 0x2ADE1Cu;
label_2ade1c:
    // 0x2ade1c: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x2ade1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x2ade20: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x2ade20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x2ade24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ade24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ade28: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2ADE28u;
    SET_GPR_U32(ctx, 31, 0x2ADE30u);
    ctx->pc = 0x2ADE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE28u;
            // 0x2ade2c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE30u; }
        if (ctx->pc != 0x2ADE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE30u; }
        if (ctx->pc != 0x2ADE30u) { return; }
    }
    ctx->pc = 0x2ADE30u;
label_2ade30:
    // 0x2ade30: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x2ade30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2ade34: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ade34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ade38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ade38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ade3c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x2ade3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ade40: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x2ade40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2ade44: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2ADE44u;
    SET_GPR_U32(ctx, 31, 0x2ADE4Cu);
    ctx->pc = 0x2ADE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE44u;
            // 0x2ade48: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE4Cu; }
        if (ctx->pc != 0x2ADE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE4Cu; }
        if (ctx->pc != 0x2ADE4Cu) { return; }
    }
    ctx->pc = 0x2ADE4Cu;
label_2ade4c:
    // 0x2ade4c: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x2ADE4Cu;
    SET_GPR_U32(ctx, 31, 0x2ADE54u);
    ctx->pc = 0x2ADE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE4Cu;
            // 0x2ade50: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE54u; }
        if (ctx->pc != 0x2ADE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE54u; }
        if (ctx->pc != 0x2ADE54u) { return; }
    }
    ctx->pc = 0x2ADE54u;
label_2ade54:
    // 0x2ade54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ade54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ade58:
    // 0x2ade58: 0xc0767c8  jal         func_1D9F20
    ctx->pc = 0x2ADE58u;
    SET_GPR_U32(ctx, 31, 0x2ADE60u);
    ctx->pc = 0x2ADE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE58u;
            // 0x2ade5c: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F20u;
    if (runtime->hasFunction(0x1D9F20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE60u; }
        if (ctx->pc != 0x2ADE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F20_0x1d9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE60u; }
        if (ctx->pc != 0x2ADE60u) { return; }
    }
    ctx->pc = 0x2ADE60u;
label_2ade60:
    // 0x2ade60: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2ADE60u;
    {
        const bool branch_taken_0x2ade60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ade60) {
            ctx->pc = 0x2ADEF8u;
            goto label_2adef8;
        }
    }
    ctx->pc = 0x2ADE68u;
label_2ade68:
    // 0x2ade68: 0x964200c2  lhu         $v0, 0xC2($s2)
    ctx->pc = 0x2ade68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
label_2ade6c:
    // 0x2ade6c: 0x5202001b  beql        $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2ADE6Cu;
    {
        const bool branch_taken_0x2ade6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ade6c) {
            ctx->pc = 0x2ADE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE6Cu;
            // 0x2ade70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADEDCu;
            goto label_2adedc;
        }
    }
    ctx->pc = 0x2ADE74u;
    // 0x2ade74: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ade74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ade78: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2ade78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2ade7c: 0x24a51390  addiu       $a1, $a1, 0x1390
    ctx->pc = 0x2ade7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5008));
    // 0x2ade80: 0xc0bc684  jal         func_2F1A10
    ctx->pc = 0x2ADE80u;
    SET_GPR_U32(ctx, 31, 0x2ADE88u);
    ctx->pc = 0x2ADE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE80u;
            // 0x2ade84: 0x26460070  addiu       $a2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A10u;
    if (runtime->hasFunction(0x2F1A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE88u; }
        if (ctx->pc != 0x2ADE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1A10_0x2f1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE88u; }
        if (ctx->pc != 0x2ADE88u) { return; }
    }
    ctx->pc = 0x2ADE88u;
label_2ade88:
    // 0x2ade88: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2ade88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2ade8c: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x2ADE8Cu;
    SET_GPR_U32(ctx, 31, 0x2ADE94u);
    ctx->pc = 0x2ADE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE8Cu;
            // 0x2ade90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE94u; }
        if (ctx->pc != 0x2ADE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE94u; }
        if (ctx->pc != 0x2ADE94u) { return; }
    }
    ctx->pc = 0x2ADE94u;
label_2ade94:
    // 0x2ade94: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2ade94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x2ade98: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x2ade98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x2ade9c: 0x264500f0  addiu       $a1, $s2, 0xF0
    ctx->pc = 0x2ade9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x2adea0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2adea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2adea4: 0x84420026  lh          $v0, 0x26($v0)
    ctx->pc = 0x2adea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x2adea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adeac: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2ADEACu;
    SET_GPR_U32(ctx, 31, 0x2ADEB4u);
    ctx->pc = 0x2ADEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADEACu;
            // 0x2adeb0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEB4u; }
        if (ctx->pc != 0x2ADEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEB4u; }
        if (ctx->pc != 0x2ADEB4u) { return; }
    }
    ctx->pc = 0x2ADEB4u;
label_2adeb4:
    // 0x2adeb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adeb8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2ADEB8u;
    SET_GPR_U32(ctx, 31, 0x2ADEC0u);
    ctx->pc = 0x2ADEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADEB8u;
            // 0x2adebc: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEC0u; }
        if (ctx->pc != 0x2ADEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEC0u; }
        if (ctx->pc != 0x2ADEC0u) { return; }
    }
    ctx->pc = 0x2ADEC0u;
label_2adec0:
    // 0x2adec0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2adec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2adec4: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x2adec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2adec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2adec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adecc: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2ADECCu;
    SET_GPR_U32(ctx, 31, 0x2ADED4u);
    ctx->pc = 0x2ADED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADECCu;
            // 0x2aded0: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADED4u; }
        if (ctx->pc != 0x2ADED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADED4u; }
        if (ctx->pc != 0x2ADED4u) { return; }
    }
    ctx->pc = 0x2ADED4u;
label_2aded4:
    // 0x2aded4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADED4u;
    {
        const bool branch_taken_0x2aded4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aded4) {
            ctx->pc = 0x2ADEF8u;
            goto label_2adef8;
        }
    }
    ctx->pc = 0x2ADEDCu;
label_2adedc:
    // 0x2adedc: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2ADEDCu;
    SET_GPR_U32(ctx, 31, 0x2ADEE4u);
    ctx->pc = 0x2ADEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADEDCu;
            // 0x2adee0: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEE4u; }
        if (ctx->pc != 0x2ADEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEE4u; }
        if (ctx->pc != 0x2ADEE4u) { return; }
    }
    ctx->pc = 0x2ADEE4u;
label_2adee4:
    // 0x2adee4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2adee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2adee8: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x2adee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2adeec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2adeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adef0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2ADEF0u;
    SET_GPR_U32(ctx, 31, 0x2ADEF8u);
    ctx->pc = 0x2ADEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADEF0u;
            // 0x2adef4: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEF8u; }
        if (ctx->pc != 0x2ADEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEF8u; }
        if (ctx->pc != 0x2ADEF8u) { return; }
    }
    ctx->pc = 0x2ADEF8u;
label_2adef8:
    // 0x2adef8: 0xc641010c  lwc1        $f1, 0x10C($s2)
    ctx->pc = 0x2adef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2adefc:
    // 0x2adefc: 0xc6420110  lwc1        $f2, 0x110($s2)
    ctx->pc = 0x2adefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2adf00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adf00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adf04: 0x0  nop
    ctx->pc = 0x2adf04u;
    // NOP
    // 0x2adf08: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2adf08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2adf0c: 0x4614101d  msub.s      $f0, $f2, $f20
    ctx->pc = 0x2adf0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x2adf10: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2ADF10u;
    {
        const bool branch_taken_0x2adf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF10u;
            // 0x2adf14: 0xe640010c  swc1        $f0, 0x10C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf10) {
            ctx->pc = 0x2ADF88u;
            goto label_2adf88;
        }
    }
    ctx->pc = 0x2ADF18u;
label_2adf18:
    // 0x2adf18: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2adf18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2adf1c: 0x262602e0  addiu       $a2, $s1, 0x2E0
    ctx->pc = 0x2adf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x2adf20: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2adf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2adf24: 0xc0bc684  jal         func_2F1A10
    ctx->pc = 0x2ADF24u;
    SET_GPR_U32(ctx, 31, 0x2ADF2Cu);
    ctx->pc = 0x2ADF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF24u;
            // 0x2adf28: 0x24a51390  addiu       $a1, $a1, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A10u;
    if (runtime->hasFunction(0x2F1A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF2Cu; }
        if (ctx->pc != 0x2ADF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1A10_0x2f1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF2Cu; }
        if (ctx->pc != 0x2ADF2Cu) { return; }
    }
    ctx->pc = 0x2ADF2Cu;
label_2adf2c:
    // 0x2adf2c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2adf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2adf30: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x2ADF30u;
    SET_GPR_U32(ctx, 31, 0x2ADF38u);
    ctx->pc = 0x2ADF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF30u;
            // 0x2adf34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF38u; }
        if (ctx->pc != 0x2ADF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF38u; }
        if (ctx->pc != 0x2ADF38u) { return; }
    }
    ctx->pc = 0x2ADF38u;
label_2adf38:
    // 0x2adf38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf3c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2ADF3Cu;
    SET_GPR_U32(ctx, 31, 0x2ADF44u);
    ctx->pc = 0x2ADF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF3Cu;
            // 0x2adf40: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF44u; }
        if (ctx->pc != 0x2ADF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF44u; }
        if (ctx->pc != 0x2ADF44u) { return; }
    }
    ctx->pc = 0x2ADF44u;
label_2adf44:
    // 0x2adf44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2adf44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2adf48: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x2adf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x2adf4c: 0x264500f0  addiu       $a1, $s2, 0xF0
    ctx->pc = 0x2adf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x2adf50: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2ADF50u;
    SET_GPR_U32(ctx, 31, 0x2ADF58u);
    ctx->pc = 0x2ADF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF50u;
            // 0x2adf54: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF58u; }
        if (ctx->pc != 0x2ADF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF58u; }
        if (ctx->pc != 0x2ADF58u) { return; }
    }
    ctx->pc = 0x2ADF58u;
label_2adf58:
    // 0x2adf58: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2adf58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2adf5c: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x2adf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2adf60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2adf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf64: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2ADF64u;
    SET_GPR_U32(ctx, 31, 0x2ADF6Cu);
    ctx->pc = 0x2ADF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF64u;
            // 0x2adf68: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF6Cu; }
        if (ctx->pc != 0x2ADF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF6Cu; }
        if (ctx->pc != 0x2ADF6Cu) { return; }
    }
    ctx->pc = 0x2ADF6Cu;
label_2adf6c:
    // 0x2adf6c: 0xc641010c  lwc1        $f1, 0x10C($s2)
    ctx->pc = 0x2adf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adf70: 0xc6420110  lwc1        $f2, 0x110($s2)
    ctx->pc = 0x2adf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2adf74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adf74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adf78: 0x0  nop
    ctx->pc = 0x2adf78u;
    // NOP
    // 0x2adf7c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2adf7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2adf80: 0x4614101d  msub.s      $f0, $f2, $f20
    ctx->pc = 0x2adf80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x2adf84: 0xe640010c  swc1        $f0, 0x10C($s2)
    ctx->pc = 0x2adf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 268), bits); }
label_2adf88:
    // 0x2adf88: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x2adf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_2adf8c:
    // 0x2adf8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2adf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2adf90: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADF90u;
    {
        const bool branch_taken_0x2adf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf90) {
            ctx->pc = 0x2ADF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF90u;
            // 0x2adf94: 0xc64d010c  lwc1        $f13, 0x10C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADFA0u;
            goto label_2adfa0;
        }
    }
    ctx->pc = 0x2ADF98u;
    // 0x2adf98: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x2adf98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
    // 0x2adf9c: 0xc64d010c  lwc1        $f13, 0x10C($s2)
    ctx->pc = 0x2adf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2adfa0:
    // 0x2adfa0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2adfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2adfa4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2adfa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2adfa8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2ADFA8u;
    SET_GPR_U32(ctx, 31, 0x2ADFB0u);
    ctx->pc = 0x2ADFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADFA8u;
            // 0x2adfac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFB0u; }
        if (ctx->pc != 0x2ADFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFB0u; }
        if (ctx->pc != 0x2ADFB0u) { return; }
    }
    ctx->pc = 0x2ADFB0u;
label_2adfb0:
    // 0x2adfb0: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x2adfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2adfb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2adfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfb8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2ADFB8u;
    SET_GPR_U32(ctx, 31, 0x2ADFC0u);
    ctx->pc = 0x2ADFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADFB8u;
            // 0x2adfbc: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFC0u; }
        if (ctx->pc != 0x2ADFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFC0u; }
        if (ctx->pc != 0x2ADFC0u) { return; }
    }
    ctx->pc = 0x2ADFC0u;
label_2adfc0:
    // 0x2adfc0: 0xc6420120  lwc1        $f2, 0x120($s2)
    ctx->pc = 0x2adfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2adfc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2adfc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2adfc8: 0x0  nop
    ctx->pc = 0x2adfc8u;
    // NOP
    // 0x2adfcc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2adfccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adfd0: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x2ADFD0u;
    {
        const bool branch_taken_0x2adfd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2adfd0) {
            ctx->pc = 0x2ADFD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADFD0u;
            // 0x2adfd4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADFFCu;
            goto label_2adffc;
        }
    }
    ctx->pc = 0x2ADFD8u;
    // 0x2adfd8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2adfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2adfdc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2adfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x2adfe0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2adfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adfe4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2adfe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2adfe8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2adfe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adfec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADFECu;
    {
        const bool branch_taken_0x2adfec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ADFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADFECu;
            // 0x2adff0: 0xe6400120  swc1        $f0, 0x120($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfec) {
            ctx->pc = 0x2ADFF8u;
            goto label_2adff8;
        }
    }
    ctx->pc = 0x2ADFF4u;
    // 0x2adff4: 0xe6410120  swc1        $f1, 0x120($s2)
    ctx->pc = 0x2adff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
label_2adff8:
    // 0x2adff8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2adff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2adffc:
    // 0x2adffc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2adffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ae000: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ae000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae004: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ae004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ae008: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ae008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae00c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ae00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae010: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE010u;
            // 0x2ae014: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE018u;
    // 0x2ae018: 0x0  nop
    ctx->pc = 0x2ae018u;
    // NOP
    // 0x2ae01c: 0x0  nop
    ctx->pc = 0x2ae01cu;
    // NOP
}
