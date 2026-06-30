#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00361E70
// Address: 0x361e70 - 0x361f80
void sub_00361E70_0x361e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361E70_0x361e70");
#endif

    switch (ctx->pc) {
        case 0x361e70u: goto label_361e70;
        case 0x361e74u: goto label_361e74;
        case 0x361e78u: goto label_361e78;
        case 0x361e7cu: goto label_361e7c;
        case 0x361e80u: goto label_361e80;
        case 0x361e84u: goto label_361e84;
        case 0x361e88u: goto label_361e88;
        case 0x361e8cu: goto label_361e8c;
        case 0x361e90u: goto label_361e90;
        case 0x361e94u: goto label_361e94;
        case 0x361e98u: goto label_361e98;
        case 0x361e9cu: goto label_361e9c;
        case 0x361ea0u: goto label_361ea0;
        case 0x361ea4u: goto label_361ea4;
        case 0x361ea8u: goto label_361ea8;
        case 0x361eacu: goto label_361eac;
        case 0x361eb0u: goto label_361eb0;
        case 0x361eb4u: goto label_361eb4;
        case 0x361eb8u: goto label_361eb8;
        case 0x361ebcu: goto label_361ebc;
        case 0x361ec0u: goto label_361ec0;
        case 0x361ec4u: goto label_361ec4;
        case 0x361ec8u: goto label_361ec8;
        case 0x361eccu: goto label_361ecc;
        case 0x361ed0u: goto label_361ed0;
        case 0x361ed4u: goto label_361ed4;
        case 0x361ed8u: goto label_361ed8;
        case 0x361edcu: goto label_361edc;
        case 0x361ee0u: goto label_361ee0;
        case 0x361ee4u: goto label_361ee4;
        case 0x361ee8u: goto label_361ee8;
        case 0x361eecu: goto label_361eec;
        case 0x361ef0u: goto label_361ef0;
        case 0x361ef4u: goto label_361ef4;
        case 0x361ef8u: goto label_361ef8;
        case 0x361efcu: goto label_361efc;
        case 0x361f00u: goto label_361f00;
        case 0x361f04u: goto label_361f04;
        case 0x361f08u: goto label_361f08;
        case 0x361f0cu: goto label_361f0c;
        case 0x361f10u: goto label_361f10;
        case 0x361f14u: goto label_361f14;
        case 0x361f18u: goto label_361f18;
        case 0x361f1cu: goto label_361f1c;
        case 0x361f20u: goto label_361f20;
        case 0x361f24u: goto label_361f24;
        case 0x361f28u: goto label_361f28;
        case 0x361f2cu: goto label_361f2c;
        case 0x361f30u: goto label_361f30;
        case 0x361f34u: goto label_361f34;
        case 0x361f38u: goto label_361f38;
        case 0x361f3cu: goto label_361f3c;
        case 0x361f40u: goto label_361f40;
        case 0x361f44u: goto label_361f44;
        case 0x361f48u: goto label_361f48;
        case 0x361f4cu: goto label_361f4c;
        case 0x361f50u: goto label_361f50;
        case 0x361f54u: goto label_361f54;
        case 0x361f58u: goto label_361f58;
        case 0x361f5cu: goto label_361f5c;
        case 0x361f60u: goto label_361f60;
        case 0x361f64u: goto label_361f64;
        case 0x361f68u: goto label_361f68;
        case 0x361f6cu: goto label_361f6c;
        case 0x361f70u: goto label_361f70;
        case 0x361f74u: goto label_361f74;
        case 0x361f78u: goto label_361f78;
        case 0x361f7cu: goto label_361f7c;
        default: break;
    }

    ctx->pc = 0x361e70u;

label_361e70:
    // 0x361e70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x361e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_361e74:
    // 0x361e74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x361e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_361e78:
    // 0x361e78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x361e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_361e7c:
    // 0x361e7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x361e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_361e80:
    // 0x361e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_361e84:
    // 0x361e84: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x361e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
label_361e88:
    // 0x361e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x361e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_361e8c:
    // 0x361e8c: 0xc4ac000c  lwc1        $f12, 0xC($a1)
    ctx->pc = 0x361e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_361e90:
    // 0x361e90: 0xc4ad0010  lwc1        $f13, 0x10($a1)
    ctx->pc = 0x361e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_361e94:
    // 0x361e94: 0xc4ae0014  lwc1        $f14, 0x14($a1)
    ctx->pc = 0x361e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_361e98:
    // 0x361e98: 0xc04cbd8  jal         func_132F60
label_361e9c:
    if (ctx->pc == 0x361E9Cu) {
        ctx->pc = 0x361E9Cu;
            // 0x361e9c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x361EA0u;
        goto label_361ea0;
    }
    ctx->pc = 0x361E98u;
    SET_GPR_U32(ctx, 31, 0x361EA0u);
    ctx->pc = 0x361E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361E98u;
            // 0x361e9c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361EA0u; }
        if (ctx->pc != 0x361EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361EA0u; }
        if (ctx->pc != 0x361EA0u) { return; }
    }
    ctx->pc = 0x361EA0u;
label_361ea0:
    // 0x361ea0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x361ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_361ea4:
    // 0x361ea4: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x361ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_361ea8:
    // 0x361ea8: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x361ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_361eac:
    // 0x361eac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x361eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_361eb0:
    // 0x361eb0: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x361eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_361eb4:
    // 0x361eb4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x361eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_361eb8:
    // 0x361eb8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x361eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_361ebc:
    // 0x361ebc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x361ebcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_361ec0:
    // 0x361ec0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x361ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_361ec4:
    // 0x361ec4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x361ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_361ec8:
    // 0x361ec8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x361ec8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_361ecc:
    // 0x361ecc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x361eccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_361ed0:
    // 0x361ed0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x361ed0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_361ed4:
    // 0x361ed4: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x361ed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_361ed8:
    // 0x361ed8: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x361ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_361edc:
    // 0x361edc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x361edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_361ee0:
    // 0x361ee0: 0xc04f29c  jal         func_13CA70
label_361ee4:
    if (ctx->pc == 0x361EE4u) {
        ctx->pc = 0x361EE4u;
            // 0x361ee4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x361EE8u;
        goto label_361ee8;
    }
    ctx->pc = 0x361EE0u;
    SET_GPR_U32(ctx, 31, 0x361EE8u);
    ctx->pc = 0x361EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361EE0u;
            // 0x361ee4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361EE8u; }
        if (ctx->pc != 0x361EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361EE8u; }
        if (ctx->pc != 0x361EE8u) { return; }
    }
    ctx->pc = 0x361EE8u;
label_361ee8:
    // 0x361ee8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_361eec:
    // 0x361eec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x361eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_361ef0:
    // 0x361ef0: 0xc04cdf0  jal         func_1337C0
label_361ef4:
    if (ctx->pc == 0x361EF4u) {
        ctx->pc = 0x361EF4u;
            // 0x361ef4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x361EF8u;
        goto label_361ef8;
    }
    ctx->pc = 0x361EF0u;
    SET_GPR_U32(ctx, 31, 0x361EF8u);
    ctx->pc = 0x361EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361EF0u;
            // 0x361ef4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361EF8u; }
        if (ctx->pc != 0x361EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361EF8u; }
        if (ctx->pc != 0x361EF8u) { return; }
    }
    ctx->pc = 0x361EF8u;
label_361ef8:
    // 0x361ef8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x361ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_361efc:
    // 0x361efc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x361efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_361f00:
    // 0x361f00: 0xc04cdd0  jal         func_133740
label_361f04:
    if (ctx->pc == 0x361F04u) {
        ctx->pc = 0x361F04u;
            // 0x361f04: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x361F08u;
        goto label_361f08;
    }
    ctx->pc = 0x361F00u;
    SET_GPR_U32(ctx, 31, 0x361F08u);
    ctx->pc = 0x361F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361F00u;
            // 0x361f04: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361F08u; }
        if (ctx->pc != 0x361F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361F08u; }
        if (ctx->pc != 0x361F08u) { return; }
    }
    ctx->pc = 0x361F08u;
label_361f08:
    // 0x361f08: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x361f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_361f0c:
    // 0x361f0c: 0xc04c994  jal         func_132650
label_361f10:
    if (ctx->pc == 0x361F10u) {
        ctx->pc = 0x361F10u;
            // 0x361f10: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x361F14u;
        goto label_361f14;
    }
    ctx->pc = 0x361F0Cu;
    SET_GPR_U32(ctx, 31, 0x361F14u);
    ctx->pc = 0x361F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361F0Cu;
            // 0x361f10: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361F14u; }
        if (ctx->pc != 0x361F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361F14u; }
        if (ctx->pc != 0x361F14u) { return; }
    }
    ctx->pc = 0x361F14u;
label_361f14:
    // 0x361f14: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x361f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_361f18:
    // 0x361f18: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x361f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_361f1c:
    // 0x361f1c: 0xc04cb1c  jal         func_132C70
label_361f20:
    if (ctx->pc == 0x361F20u) {
        ctx->pc = 0x361F20u;
            // 0x361f20: 0x24450024  addiu       $a1, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->pc = 0x361F24u;
        goto label_361f24;
    }
    ctx->pc = 0x361F1Cu;
    SET_GPR_U32(ctx, 31, 0x361F24u);
    ctx->pc = 0x361F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361F1Cu;
            // 0x361f20: 0x24450024  addiu       $a1, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361F24u; }
        if (ctx->pc != 0x361F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361F24u; }
        if (ctx->pc != 0x361F24u) { return; }
    }
    ctx->pc = 0x361F24u;
label_361f24:
    // 0x361f24: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x361f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_361f28:
    // 0x361f28: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x361f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_361f2c:
    // 0x361f2c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x361f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_361f30:
    // 0x361f30: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x361f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_361f34:
    // 0x361f34: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x361f34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_361f38:
    // 0x361f38: 0xa202004c  sb          $v0, 0x4C($s0)
    ctx->pc = 0x361f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
label_361f3c:
    // 0x361f3c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x361f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361f40:
    // 0x361f40: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x361f40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_361f44:
    // 0x361f44: 0x320f809  jalr        $t9
label_361f48:
    if (ctx->pc == 0x361F48u) {
        ctx->pc = 0x361F48u;
            // 0x361f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x361F4Cu;
        goto label_361f4c;
    }
    ctx->pc = 0x361F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x361F4Cu);
        ctx->pc = 0x361F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361F44u;
            // 0x361f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x361F4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x361F4Cu; }
            if (ctx->pc != 0x361F4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x361F4Cu;
label_361f4c:
    // 0x361f4c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x361f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361f50:
    // 0x361f50: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x361f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_361f54:
    // 0x361f54: 0x320f809  jalr        $t9
label_361f58:
    if (ctx->pc == 0x361F58u) {
        ctx->pc = 0x361F58u;
            // 0x361f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x361F5Cu;
        goto label_361f5c;
    }
    ctx->pc = 0x361F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x361F5Cu);
        ctx->pc = 0x361F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361F54u;
            // 0x361f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x361F5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x361F5Cu; }
            if (ctx->pc != 0x361F5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x361F5Cu;
label_361f5c:
    // 0x361f5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x361f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_361f60:
    // 0x361f60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361f60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_361f64:
    // 0x361f64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_361f68:
    // 0x361f68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_361f6c:
    // 0x361f6c: 0x3e00008  jr          $ra
label_361f70:
    if (ctx->pc == 0x361F70u) {
        ctx->pc = 0x361F70u;
            // 0x361f70: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x361F74u;
        goto label_361f74;
    }
    ctx->pc = 0x361F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361F6Cu;
            // 0x361f70: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x361F74u;
label_361f74:
    // 0x361f74: 0x0  nop
    ctx->pc = 0x361f74u;
    // NOP
label_361f78:
    // 0x361f78: 0x0  nop
    ctx->pc = 0x361f78u;
    // NOP
label_361f7c:
    // 0x361f7c: 0x0  nop
    ctx->pc = 0x361f7cu;
    // NOP
}
