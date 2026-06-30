#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151CD0
// Address: 0x151cd0 - 0x151df0
void sub_00151CD0_0x151cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151CD0_0x151cd0");
#endif

    switch (ctx->pc) {
        case 0x151d4cu: goto label_151d4c;
        case 0x151d5cu: goto label_151d5c;
        case 0x151d6cu: goto label_151d6c;
        case 0x151d7cu: goto label_151d7c;
        default: break;
    }

    ctx->pc = 0x151cd0u;

    // 0x151cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151cd4: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x151cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x151cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x151cdc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x151cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x151ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151ce4: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x151ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x151ce8: 0x8ca8001c  lw          $t0, 0x1C($a1)
    ctx->pc = 0x151ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x151cec: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x151cecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x151cf0: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x151cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x151cf4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x151cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x151cf8: 0xae060040  sw          $a2, 0x40($s0)
    ctx->pc = 0x151cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    // 0x151cfc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x151cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151d00: 0x30a50e77  andi        $a1, $a1, 0xE77
    ctx->pc = 0x151d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3703);
    // 0x151d04: 0x50a3001b  beql        $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x151D04u;
    {
        const bool branch_taken_0x151d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151d04) {
            ctx->pc = 0x151D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151D04u;
            // 0x151d08: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151D74u;
            goto label_151d74;
        }
    }
    ctx->pc = 0x151D0Cu;
    // 0x151d0c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x151d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x151d10: 0x50a30014  beql        $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x151D10u;
    {
        const bool branch_taken_0x151d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151d10) {
            ctx->pc = 0x151D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151D10u;
            // 0x151d14: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151D64u;
            goto label_151d64;
        }
    }
    ctx->pc = 0x151D18u;
    // 0x151d18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x151d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151d1c: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x151D1Cu;
    {
        const bool branch_taken_0x151d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151d1c) {
            ctx->pc = 0x151D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151D1Cu;
            // 0x151d20: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151D54u;
            goto label_151d54;
        }
    }
    ctx->pc = 0x151D24u;
    // 0x151d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x151d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151d28: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151D28u;
    {
        const bool branch_taken_0x151d28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151d28) {
            ctx->pc = 0x151D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151D28u;
            // 0x151d2c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151D44u;
            goto label_151d44;
        }
    }
    ctx->pc = 0x151D30u;
    // 0x151d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151d34: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x151D34u;
    {
        const bool branch_taken_0x151d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151d34) {
            ctx->pc = 0x151D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151D34u;
            // 0x151d38: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x151D80u;
            goto label_151d80;
        }
    }
    ctx->pc = 0x151D3Cu;
    // 0x151d3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x151D3Cu;
    {
        const bool branch_taken_0x151d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d3c) {
            ctx->pc = 0x151D7Cu;
            goto label_151d7c;
        }
    }
    ctx->pc = 0x151D44u;
label_151d44:
    // 0x151d44: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x151D44u;
    SET_GPR_U32(ctx, 31, 0x151D4Cu);
    ctx->pc = 0x151D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151D44u;
            // 0x151d48: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D4Cu; }
        if (ctx->pc != 0x151D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D4Cu; }
        if (ctx->pc != 0x151D4Cu) { return; }
    }
    ctx->pc = 0x151D4Cu;
label_151d4c:
    // 0x151d4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x151D4Cu;
    {
        const bool branch_taken_0x151d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d4c) {
            ctx->pc = 0x151D7Cu;
            goto label_151d7c;
        }
    }
    ctx->pc = 0x151D54u;
label_151d54:
    // 0x151d54: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x151D54u;
    SET_GPR_U32(ctx, 31, 0x151D5Cu);
    ctx->pc = 0x151D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151D54u;
            // 0x151d58: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D5Cu; }
        if (ctx->pc != 0x151D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D5Cu; }
        if (ctx->pc != 0x151D5Cu) { return; }
    }
    ctx->pc = 0x151D5Cu;
label_151d5c:
    // 0x151d5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151D5Cu;
    {
        const bool branch_taken_0x151d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d5c) {
            ctx->pc = 0x151D7Cu;
            goto label_151d7c;
        }
    }
    ctx->pc = 0x151D64u;
label_151d64:
    // 0x151d64: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x151D64u;
    SET_GPR_U32(ctx, 31, 0x151D6Cu);
    ctx->pc = 0x151D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151D64u;
            // 0x151d68: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D6Cu; }
        if (ctx->pc != 0x151D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D6Cu; }
        if (ctx->pc != 0x151D6Cu) { return; }
    }
    ctx->pc = 0x151D6Cu;
label_151d6c:
    // 0x151d6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151D6Cu;
    {
        const bool branch_taken_0x151d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d6c) {
            ctx->pc = 0x151D7Cu;
            goto label_151d7c;
        }
    }
    ctx->pc = 0x151D74u;
label_151d74:
    // 0x151d74: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x151D74u;
    SET_GPR_U32(ctx, 31, 0x151D7Cu);
    ctx->pc = 0x151D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151D74u;
            // 0x151d78: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D7Cu; }
        if (ctx->pc != 0x151D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D7Cu; }
        if (ctx->pc != 0x151D7Cu) { return; }
    }
    ctx->pc = 0x151D7Cu;
label_151d7c:
    // 0x151d7c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x151d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151d80:
    // 0x151d80: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x151d80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151d84: 0x0  nop
    ctx->pc = 0x151d84u;
    // NOP
    // 0x151d88: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x151d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151d8c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x151D8Cu;
    {
        const bool branch_taken_0x151d8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151d8c) {
            ctx->pc = 0x151D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151D8Cu;
            // 0x151d90: 0x3c034300  lui         $v1, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151D9Cu;
            goto label_151d9c;
        }
    }
    ctx->pc = 0x151D94u;
    // 0x151d94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151D94u;
    {
        const bool branch_taken_0x151d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151D94u;
            // 0x151d98: 0xc601001c  lwc1        $f1, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d94) {
            ctx->pc = 0x151DA4u;
            goto label_151da4;
        }
    }
    ctx->pc = 0x151D9Cu;
label_151d9c:
    // 0x151d9c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x151d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151da0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x151da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151da4:
    // 0x151da4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x151da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x151da8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151dac: 0x0  nop
    ctx->pc = 0x151dacu;
    // NOP
    // 0x151db0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x151db0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x151db4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x151db4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151db8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x151DB8u;
    {
        const bool branch_taken_0x151db8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x151DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151DB8u;
            // 0x151dbc: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151db8) {
            ctx->pc = 0x151DD0u;
            goto label_151dd0;
        }
    }
    ctx->pc = 0x151DC0u;
    // 0x151dc0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x151dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x151dc4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x151dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x151dc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x151DC8u;
    {
        const bool branch_taken_0x151dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151DC8u;
            // 0x151dcc: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151dc8) {
            ctx->pc = 0x151DE0u;
            goto label_151de0;
        }
    }
    ctx->pc = 0x151DD0u;
label_151dd0:
    // 0x151dd0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x151dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x151dd4: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x151dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x151dd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x151dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x151ddc: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x151ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_151de0:
    // 0x151de0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151de8: 0x3e00008  jr          $ra
    ctx->pc = 0x151DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151DE8u;
            // 0x151dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151DF0u;
}
