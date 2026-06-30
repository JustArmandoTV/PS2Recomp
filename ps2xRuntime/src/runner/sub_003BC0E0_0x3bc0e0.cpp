#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BC0E0
// Address: 0x3bc0e0 - 0x3bc280
void sub_003BC0E0_0x3bc0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC0E0_0x3bc0e0");
#endif

    switch (ctx->pc) {
        case 0x3bc0e0u: goto label_3bc0e0;
        case 0x3bc0e4u: goto label_3bc0e4;
        case 0x3bc0e8u: goto label_3bc0e8;
        case 0x3bc0ecu: goto label_3bc0ec;
        case 0x3bc0f0u: goto label_3bc0f0;
        case 0x3bc0f4u: goto label_3bc0f4;
        case 0x3bc0f8u: goto label_3bc0f8;
        case 0x3bc0fcu: goto label_3bc0fc;
        case 0x3bc100u: goto label_3bc100;
        case 0x3bc104u: goto label_3bc104;
        case 0x3bc108u: goto label_3bc108;
        case 0x3bc10cu: goto label_3bc10c;
        case 0x3bc110u: goto label_3bc110;
        case 0x3bc114u: goto label_3bc114;
        case 0x3bc118u: goto label_3bc118;
        case 0x3bc11cu: goto label_3bc11c;
        case 0x3bc120u: goto label_3bc120;
        case 0x3bc124u: goto label_3bc124;
        case 0x3bc128u: goto label_3bc128;
        case 0x3bc12cu: goto label_3bc12c;
        case 0x3bc130u: goto label_3bc130;
        case 0x3bc134u: goto label_3bc134;
        case 0x3bc138u: goto label_3bc138;
        case 0x3bc13cu: goto label_3bc13c;
        case 0x3bc140u: goto label_3bc140;
        case 0x3bc144u: goto label_3bc144;
        case 0x3bc148u: goto label_3bc148;
        case 0x3bc14cu: goto label_3bc14c;
        case 0x3bc150u: goto label_3bc150;
        case 0x3bc154u: goto label_3bc154;
        case 0x3bc158u: goto label_3bc158;
        case 0x3bc15cu: goto label_3bc15c;
        case 0x3bc160u: goto label_3bc160;
        case 0x3bc164u: goto label_3bc164;
        case 0x3bc168u: goto label_3bc168;
        case 0x3bc16cu: goto label_3bc16c;
        case 0x3bc170u: goto label_3bc170;
        case 0x3bc174u: goto label_3bc174;
        case 0x3bc178u: goto label_3bc178;
        case 0x3bc17cu: goto label_3bc17c;
        case 0x3bc180u: goto label_3bc180;
        case 0x3bc184u: goto label_3bc184;
        case 0x3bc188u: goto label_3bc188;
        case 0x3bc18cu: goto label_3bc18c;
        case 0x3bc190u: goto label_3bc190;
        case 0x3bc194u: goto label_3bc194;
        case 0x3bc198u: goto label_3bc198;
        case 0x3bc19cu: goto label_3bc19c;
        case 0x3bc1a0u: goto label_3bc1a0;
        case 0x3bc1a4u: goto label_3bc1a4;
        case 0x3bc1a8u: goto label_3bc1a8;
        case 0x3bc1acu: goto label_3bc1ac;
        case 0x3bc1b0u: goto label_3bc1b0;
        case 0x3bc1b4u: goto label_3bc1b4;
        case 0x3bc1b8u: goto label_3bc1b8;
        case 0x3bc1bcu: goto label_3bc1bc;
        case 0x3bc1c0u: goto label_3bc1c0;
        case 0x3bc1c4u: goto label_3bc1c4;
        case 0x3bc1c8u: goto label_3bc1c8;
        case 0x3bc1ccu: goto label_3bc1cc;
        case 0x3bc1d0u: goto label_3bc1d0;
        case 0x3bc1d4u: goto label_3bc1d4;
        case 0x3bc1d8u: goto label_3bc1d8;
        case 0x3bc1dcu: goto label_3bc1dc;
        case 0x3bc1e0u: goto label_3bc1e0;
        case 0x3bc1e4u: goto label_3bc1e4;
        case 0x3bc1e8u: goto label_3bc1e8;
        case 0x3bc1ecu: goto label_3bc1ec;
        case 0x3bc1f0u: goto label_3bc1f0;
        case 0x3bc1f4u: goto label_3bc1f4;
        case 0x3bc1f8u: goto label_3bc1f8;
        case 0x3bc1fcu: goto label_3bc1fc;
        case 0x3bc200u: goto label_3bc200;
        case 0x3bc204u: goto label_3bc204;
        case 0x3bc208u: goto label_3bc208;
        case 0x3bc20cu: goto label_3bc20c;
        case 0x3bc210u: goto label_3bc210;
        case 0x3bc214u: goto label_3bc214;
        case 0x3bc218u: goto label_3bc218;
        case 0x3bc21cu: goto label_3bc21c;
        case 0x3bc220u: goto label_3bc220;
        case 0x3bc224u: goto label_3bc224;
        case 0x3bc228u: goto label_3bc228;
        case 0x3bc22cu: goto label_3bc22c;
        case 0x3bc230u: goto label_3bc230;
        case 0x3bc234u: goto label_3bc234;
        case 0x3bc238u: goto label_3bc238;
        case 0x3bc23cu: goto label_3bc23c;
        case 0x3bc240u: goto label_3bc240;
        case 0x3bc244u: goto label_3bc244;
        case 0x3bc248u: goto label_3bc248;
        case 0x3bc24cu: goto label_3bc24c;
        case 0x3bc250u: goto label_3bc250;
        case 0x3bc254u: goto label_3bc254;
        case 0x3bc258u: goto label_3bc258;
        case 0x3bc25cu: goto label_3bc25c;
        case 0x3bc260u: goto label_3bc260;
        case 0x3bc264u: goto label_3bc264;
        case 0x3bc268u: goto label_3bc268;
        case 0x3bc26cu: goto label_3bc26c;
        case 0x3bc270u: goto label_3bc270;
        case 0x3bc274u: goto label_3bc274;
        case 0x3bc278u: goto label_3bc278;
        case 0x3bc27cu: goto label_3bc27c;
        default: break;
    }

    ctx->pc = 0x3bc0e0u;

label_3bc0e0:
    // 0x3bc0e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bc0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3bc0e4:
    // 0x3bc0e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3bc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3bc0e8:
    // 0x3bc0e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bc0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3bc0ec:
    // 0x3bc0ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bc0f0:
    // 0x3bc0f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bc0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3bc0f4:
    // 0x3bc0f4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3bc0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3bc0f8:
    // 0x3bc0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bc0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3bc0fc:
    // 0x3bc0fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bc0fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bc100:
    // 0x3bc100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bc100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3bc104:
    // 0x3bc104: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3bc104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bc108:
    // 0x3bc108: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x3bc108u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bc10c:
    // 0x3bc10c: 0x8e220d9c  lw          $v0, 0xD9C($s1)
    ctx->pc = 0x3bc10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_3bc110:
    // 0x3bc110: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x3bc110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_3bc114:
    // 0x3bc114: 0x26300580  addiu       $s0, $s1, 0x580
    ctx->pc = 0x3bc114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_3bc118:
    // 0x3bc118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bc118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3bc11c:
    // 0x3bc11c: 0xae220d9c  sw          $v0, 0xD9C($s1)
    ctx->pc = 0x3bc11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 2));
label_3bc120:
    // 0x3bc120: 0xc6210b00  lwc1        $f1, 0xB00($s1)
    ctx->pc = 0x3bc120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bc124:
    // 0x3bc124: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3bc124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3bc128:
    // 0x3bc128: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3bc128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3bc12c:
    // 0x3bc12c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc12cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3bc130:
    // 0x3bc130: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bc130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3bc134:
    // 0x3bc134: 0xc04f26c  jal         func_13C9B0
label_3bc138:
    if (ctx->pc == 0x3BC138u) {
        ctx->pc = 0x3BC138u;
            // 0x3bc138: 0xae220b00  sw          $v0, 0xB00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2816), GPR_U32(ctx, 2));
        ctx->pc = 0x3BC13Cu;
        goto label_3bc13c;
    }
    ctx->pc = 0x3BC134u;
    SET_GPR_U32(ctx, 31, 0x3BC13Cu);
    ctx->pc = 0x3BC138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC134u;
            // 0x3bc138: 0xae220b00  sw          $v0, 0xB00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2816), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC13Cu; }
        if (ctx->pc != 0x3BC13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC13Cu; }
        if (ctx->pc != 0x3BC13Cu) { return; }
    }
    ctx->pc = 0x3BC13Cu;
label_3bc13c:
    // 0x3bc13c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3bc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3bc140:
    // 0x3bc140: 0xc4401360  lwc1        $f0, 0x1360($v0)
    ctx->pc = 0x3bc140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc144:
    // 0x3bc144: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x3bc144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_3bc148:
    // 0x3bc148: 0xc0eeb1c  jal         func_3BAC70
label_3bc14c:
    if (ctx->pc == 0x3BC14Cu) {
        ctx->pc = 0x3BC14Cu;
            // 0x3bc14c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3BC150u;
        goto label_3bc150;
    }
    ctx->pc = 0x3BC148u;
    SET_GPR_U32(ctx, 31, 0x3BC150u);
    ctx->pc = 0x3BC14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC148u;
            // 0x3bc14c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC70u;
    if (runtime->hasFunction(0x3BAC70u)) {
        auto targetFn = runtime->lookupFunction(0x3BAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC150u; }
        if (ctx->pc != 0x3BC150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BAC70_0x3bac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC150u; }
        if (ctx->pc != 0x3BC150u) { return; }
    }
    ctx->pc = 0x3BC150u;
label_3bc150:
    // 0x3bc150: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3bc150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bc154:
    // 0x3bc154: 0xc0eec24  jal         func_3BB090
label_3bc158:
    if (ctx->pc == 0x3BC158u) {
        ctx->pc = 0x3BC158u;
            // 0x3bc158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC15Cu;
        goto label_3bc15c;
    }
    ctx->pc = 0x3BC154u;
    SET_GPR_U32(ctx, 31, 0x3BC15Cu);
    ctx->pc = 0x3BC158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC154u;
            // 0x3bc158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB090u;
    if (runtime->hasFunction(0x3BB090u)) {
        auto targetFn = runtime->lookupFunction(0x3BB090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC15Cu; }
        if (ctx->pc != 0x3BC15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB090_0x3bb090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC15Cu; }
        if (ctx->pc != 0x3BC15Cu) { return; }
    }
    ctx->pc = 0x3BC15Cu;
label_3bc15c:
    // 0x3bc15c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3bc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bc160:
    // 0x3bc160: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x3bc160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_3bc164:
    // 0x3bc164: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x3bc164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3bc168:
    // 0x3bc168: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3bc168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3bc16c:
    // 0x3bc16c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3bc170:
    if (ctx->pc == 0x3BC170u) {
        ctx->pc = 0x3BC170u;
            // 0x3bc170: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x3BC174u;
        goto label_3bc174;
    }
    ctx->pc = 0x3BC16Cu;
    {
        const bool branch_taken_0x3bc16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc16c) {
            ctx->pc = 0x3BC170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC16Cu;
            // 0x3bc170: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC180u;
            goto label_3bc180;
        }
    }
    ctx->pc = 0x3BC174u;
label_3bc174:
    // 0x3bc174: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3bc174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bc178:
    // 0x3bc178: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x3bc178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_3bc17c:
    // 0x3bc17c: 0x8e240d74  lw          $a0, 0xD74($s1)
    ctx->pc = 0x3bc17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_3bc180:
    // 0x3bc180: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bc180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc184:
    // 0x3bc184: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3bc184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3bc188:
    // 0x3bc188: 0xac8502b0  sw          $a1, 0x2B0($a0)
    ctx->pc = 0x3bc188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 5));
label_3bc18c:
    // 0x3bc18c: 0xae230dbc  sw          $v1, 0xDBC($s1)
    ctx->pc = 0x3bc18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3516), GPR_U32(ctx, 3));
label_3bc190:
    // 0x3bc190: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x3bc190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
label_3bc194:
    // 0x3bc194: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x3bc194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3bc198:
    // 0x3bc198: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3bc19c:
    if (ctx->pc == 0x3BC19Cu) {
        ctx->pc = 0x3BC19Cu;
            // 0x3bc19c: 0x8e450044  lw          $a1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->pc = 0x3BC1A0u;
        goto label_3bc1a0;
    }
    ctx->pc = 0x3BC198u;
    {
        const bool branch_taken_0x3bc198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc198) {
            ctx->pc = 0x3BC19Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC198u;
            // 0x3bc19c: 0x8e450044  lw          $a1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC1B8u;
            goto label_3bc1b8;
        }
    }
    ctx->pc = 0x3BC1A0u;
label_3bc1a0:
    // 0x3bc1a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3bc1a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bc1a4:
    // 0x3bc1a4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3bc1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3bc1a8:
    // 0x3bc1a8: 0x320f809  jalr        $t9
label_3bc1ac:
    if (ctx->pc == 0x3BC1ACu) {
        ctx->pc = 0x3BC1ACu;
            // 0x3bc1ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC1B0u;
        goto label_3bc1b0;
    }
    ctx->pc = 0x3BC1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC1B0u);
        ctx->pc = 0x3BC1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC1A8u;
            // 0x3bc1ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC1B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC1B0u; }
            if (ctx->pc != 0x3BC1B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3BC1B0u;
label_3bc1b0:
    // 0x3bc1b0: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x3bc1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_3bc1b4:
    // 0x3bc1b4: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x3bc1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_3bc1b8:
    // 0x3bc1b8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_3bc1bc:
    if (ctx->pc == 0x3BC1BCu) {
        ctx->pc = 0x3BC1BCu;
            // 0x3bc1bc: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->pc = 0x3BC1C0u;
        goto label_3bc1c0;
    }
    ctx->pc = 0x3BC1B8u;
    {
        const bool branch_taken_0x3bc1b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc1b8) {
            ctx->pc = 0x3BC1BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC1B8u;
            // 0x3bc1bc: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC1D8u;
            goto label_3bc1d8;
        }
    }
    ctx->pc = 0x3BC1C0u;
label_3bc1c0:
    // 0x3bc1c0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3bc1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3bc1c4:
    // 0x3bc1c4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3bc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3bc1c8:
    // 0x3bc1c8: 0xc057b7c  jal         func_15EDF0
label_3bc1cc:
    if (ctx->pc == 0x3BC1CCu) {
        ctx->pc = 0x3BC1CCu;
            // 0x3bc1cc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3BC1D0u;
        goto label_3bc1d0;
    }
    ctx->pc = 0x3BC1C8u;
    SET_GPR_U32(ctx, 31, 0x3BC1D0u);
    ctx->pc = 0x3BC1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC1C8u;
            // 0x3bc1cc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC1D0u; }
        if (ctx->pc != 0x3BC1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC1D0u; }
        if (ctx->pc != 0x3BC1D0u) { return; }
    }
    ctx->pc = 0x3BC1D0u;
label_3bc1d0:
    // 0x3bc1d0: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x3bc1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_3bc1d4:
    // 0x3bc1d4: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x3bc1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3bc1d8:
    // 0x3bc1d8: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_3bc1dc:
    if (ctx->pc == 0x3BC1DCu) {
        ctx->pc = 0x3BC1DCu;
            // 0x3bc1dc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3BC1E0u;
        goto label_3bc1e0;
    }
    ctx->pc = 0x3BC1D8u;
    {
        const bool branch_taken_0x3bc1d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc1d8) {
            ctx->pc = 0x3BC1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC1D8u;
            // 0x3bc1dc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC208u;
            goto label_3bc208;
        }
    }
    ctx->pc = 0x3BC1E0u;
label_3bc1e0:
    // 0x3bc1e0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3bc1e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3bc1e4:
    // 0x3bc1e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3bc1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3bc1e8:
    // 0x3bc1e8: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x3bc1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
label_3bc1ec:
    // 0x3bc1ec: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3bc1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3bc1f0:
    // 0x3bc1f0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3bc1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3bc1f4:
    // 0x3bc1f4: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x3bc1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3bc1f8:
    // 0x3bc1f8: 0xc057b7c  jal         func_15EDF0
label_3bc1fc:
    if (ctx->pc == 0x3BC1FCu) {
        ctx->pc = 0x3BC1FCu;
            // 0x3bc1fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3BC200u;
        goto label_3bc200;
    }
    ctx->pc = 0x3BC1F8u;
    SET_GPR_U32(ctx, 31, 0x3BC200u);
    ctx->pc = 0x3BC1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC1F8u;
            // 0x3bc1fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC200u; }
        if (ctx->pc != 0x3BC200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC200u; }
        if (ctx->pc != 0x3BC200u) { return; }
    }
    ctx->pc = 0x3BC200u;
label_3bc200:
    // 0x3bc200: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x3bc200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_3bc204:
    // 0x3bc204: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3bc204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bc208:
    // 0x3bc208: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3bc208u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3bc20c:
    // 0x3bc20c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3bc20cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bc210:
    // 0x3bc210: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x3bc210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_3bc214:
    // 0x3bc214: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3bc218:
    if (ctx->pc == 0x3BC218u) {
        ctx->pc = 0x3BC218u;
            // 0x3bc218: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC21Cu;
        goto label_3bc21c;
    }
    ctx->pc = 0x3BC214u;
    {
        const bool branch_taken_0x3bc214 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3BC218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC214u;
            // 0x3bc218: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc214) {
            ctx->pc = 0x3BC22Cu;
            goto label_3bc22c;
        }
    }
    ctx->pc = 0x3BC21Cu;
label_3bc21c:
    // 0x3bc21c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3bc21cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3bc220:
    // 0x3bc220: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3bc224:
    if (ctx->pc == 0x3BC224u) {
        ctx->pc = 0x3BC228u;
        goto label_3bc228;
    }
    ctx->pc = 0x3BC220u;
    {
        const bool branch_taken_0x3bc220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc220) {
            ctx->pc = 0x3BC22Cu;
            goto label_3bc22c;
        }
    }
    ctx->pc = 0x3BC228u;
label_3bc228:
    // 0x3bc228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc22c:
    // 0x3bc22c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3bc230:
    if (ctx->pc == 0x3BC230u) {
        ctx->pc = 0x3BC234u;
        goto label_3bc234;
    }
    ctx->pc = 0x3BC22Cu;
    {
        const bool branch_taken_0x3bc22c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc22c) {
            ctx->pc = 0x3BC248u;
            goto label_3bc248;
        }
    }
    ctx->pc = 0x3BC234u;
label_3bc234:
    // 0x3bc234: 0xc075eb4  jal         func_1D7AD0
label_3bc238:
    if (ctx->pc == 0x3BC238u) {
        ctx->pc = 0x3BC238u;
            // 0x3bc238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC23Cu;
        goto label_3bc23c;
    }
    ctx->pc = 0x3BC234u;
    SET_GPR_U32(ctx, 31, 0x3BC23Cu);
    ctx->pc = 0x3BC238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC234u;
            // 0x3bc238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC23Cu; }
        if (ctx->pc != 0x3BC23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC23Cu; }
        if (ctx->pc != 0x3BC23Cu) { return; }
    }
    ctx->pc = 0x3BC23Cu;
label_3bc23c:
    // 0x3bc23c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3bc240:
    if (ctx->pc == 0x3BC240u) {
        ctx->pc = 0x3BC244u;
        goto label_3bc244;
    }
    ctx->pc = 0x3BC23Cu;
    {
        const bool branch_taken_0x3bc23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc23c) {
            ctx->pc = 0x3BC248u;
            goto label_3bc248;
        }
    }
    ctx->pc = 0x3BC244u;
label_3bc244:
    // 0x3bc244: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bc244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc248:
    // 0x3bc248: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_3bc24c:
    if (ctx->pc == 0x3BC24Cu) {
        ctx->pc = 0x3BC24Cu;
            // 0x3bc24c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3BC250u;
        goto label_3bc250;
    }
    ctx->pc = 0x3BC248u;
    {
        const bool branch_taken_0x3bc248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc248) {
            ctx->pc = 0x3BC24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC248u;
            // 0x3bc24c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC268u;
            goto label_3bc268;
        }
    }
    ctx->pc = 0x3BC250u;
label_3bc250:
    // 0x3bc250: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bc250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3bc254:
    // 0x3bc254: 0x8e240d98  lw          $a0, 0xD98($s1)
    ctx->pc = 0x3bc254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_3bc258:
    // 0x3bc258: 0x8c633e58  lw          $v1, 0x3E58($v1)
    ctx->pc = 0x3bc258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15960)));
label_3bc25c:
    // 0x3bc25c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3bc25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3bc260:
    // 0x3bc260: 0xa06000c0  sb          $zero, 0xC0($v1)
    ctx->pc = 0x3bc260u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 192), (uint8_t)GPR_U32(ctx, 0));
label_3bc264:
    // 0x3bc264: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bc264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3bc268:
    // 0x3bc268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bc268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bc26c:
    // 0x3bc26c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bc26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bc270:
    // 0x3bc270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bc270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bc274:
    // 0x3bc274: 0x3e00008  jr          $ra
label_3bc278:
    if (ctx->pc == 0x3BC278u) {
        ctx->pc = 0x3BC278u;
            // 0x3bc278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3BC27Cu;
        goto label_3bc27c;
    }
    ctx->pc = 0x3BC274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC274u;
            // 0x3bc278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BC27Cu;
label_3bc27c:
    // 0x3bc27c: 0x0  nop
    ctx->pc = 0x3bc27cu;
    // NOP
}
