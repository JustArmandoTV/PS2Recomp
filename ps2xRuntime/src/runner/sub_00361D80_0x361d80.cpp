#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00361D80
// Address: 0x361d80 - 0x361e70
void sub_00361D80_0x361d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361D80_0x361d80");
#endif

    switch (ctx->pc) {
        case 0x361db0u: goto label_361db0;
        case 0x361df8u: goto label_361df8;
        case 0x361e08u: goto label_361e08;
        case 0x361e18u: goto label_361e18;
        case 0x361e24u: goto label_361e24;
        case 0x361e34u: goto label_361e34;
        default: break;
    }

    ctx->pc = 0x361d80u;

    // 0x361d80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x361d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x361d84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x361d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x361d88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x361d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x361d8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x361d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361d90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361d94: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x361d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x361d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x361d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d9c: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x361d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x361da0: 0xc44d0010  lwc1        $f13, 0x10($v0)
    ctx->pc = 0x361da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x361da4: 0xc44e0014  lwc1        $f14, 0x14($v0)
    ctx->pc = 0x361da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x361da8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x361DA8u;
    SET_GPR_U32(ctx, 31, 0x361DB0u);
    ctx->pc = 0x361DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361DA8u;
            // 0x361dac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361DB0u; }
        if (ctx->pc != 0x361DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361DB0u; }
        if (ctx->pc != 0x361DB0u) { return; }
    }
    ctx->pc = 0x361DB0u;
label_361db0:
    // 0x361db0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x361db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x361db4: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x361db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x361db8: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x361db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x361dbc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x361dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x361dc0: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x361dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361dc4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x361dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361dc8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x361dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361dcc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x361dccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x361dd0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x361dd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x361dd4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x361dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x361dd8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x361dd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x361ddc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x361ddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x361de0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x361de0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x361de4: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x361de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x361de8: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x361de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x361dec: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x361decu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x361df0: 0xc04f29c  jal         func_13CA70
    ctx->pc = 0x361DF0u;
    SET_GPR_U32(ctx, 31, 0x361DF8u);
    ctx->pc = 0x361DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361DF0u;
            // 0x361df4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361DF8u; }
        if (ctx->pc != 0x361DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361DF8u; }
        if (ctx->pc != 0x361DF8u) { return; }
    }
    ctx->pc = 0x361DF8u;
label_361df8:
    // 0x361df8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361dfc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x361dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x361e00: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x361E00u;
    SET_GPR_U32(ctx, 31, 0x361E08u);
    ctx->pc = 0x361E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361E00u;
            // 0x361e04: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361E08u; }
        if (ctx->pc != 0x361E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361E08u; }
        if (ctx->pc != 0x361E08u) { return; }
    }
    ctx->pc = 0x361E08u;
label_361e08:
    // 0x361e08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x361e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e0c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x361e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x361e10: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x361E10u;
    SET_GPR_U32(ctx, 31, 0x361E18u);
    ctx->pc = 0x361E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361E10u;
            // 0x361e14: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361E18u; }
        if (ctx->pc != 0x361E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361E18u; }
        if (ctx->pc != 0x361E18u) { return; }
    }
    ctx->pc = 0x361E18u;
label_361e18:
    // 0x361e18: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x361e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x361e1c: 0xc04c994  jal         func_132650
    ctx->pc = 0x361E1Cu;
    SET_GPR_U32(ctx, 31, 0x361E24u);
    ctx->pc = 0x361E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361E1Cu;
            // 0x361e20: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361E24u; }
        if (ctx->pc != 0x361E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361E24u; }
        if (ctx->pc != 0x361E24u) { return; }
    }
    ctx->pc = 0x361E24u;
label_361e24:
    // 0x361e24: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x361e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x361e28: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x361e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x361e2c: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x361E2Cu;
    SET_GPR_U32(ctx, 31, 0x361E34u);
    ctx->pc = 0x361E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361E2Cu;
            // 0x361e30: 0x24450024  addiu       $a1, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361E34u; }
        if (ctx->pc != 0x361E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361E34u; }
        if (ctx->pc != 0x361E34u) { return; }
    }
    ctx->pc = 0x361E34u;
label_361e34:
    // 0x361e34: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x361e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x361e38: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x361e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x361e3c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x361e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x361e40: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x361e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x361e44: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x361e44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x361e48: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x361e48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x361e4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x361e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361e50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x361E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361E5Cu;
            // 0x361e60: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x361E64u;
    // 0x361e64: 0x0  nop
    ctx->pc = 0x361e64u;
    // NOP
    // 0x361e68: 0x0  nop
    ctx->pc = 0x361e68u;
    // NOP
    // 0x361e6c: 0x0  nop
    ctx->pc = 0x361e6cu;
    // NOP
}
