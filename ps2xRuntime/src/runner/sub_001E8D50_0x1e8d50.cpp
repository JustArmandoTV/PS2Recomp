#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8D50
// Address: 0x1e8d50 - 0x1e9000
void sub_001E8D50_0x1e8d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8D50_0x1e8d50");
#endif

    switch (ctx->pc) {
        case 0x1e8d90u: goto label_1e8d90;
        case 0x1e8da4u: goto label_1e8da4;
        case 0x1e8dc4u: goto label_1e8dc4;
        case 0x1e8df0u: goto label_1e8df0;
        case 0x1e8f14u: goto label_1e8f14;
        case 0x1e8f3cu: goto label_1e8f3c;
        case 0x1e8f98u: goto label_1e8f98;
        case 0x1e8fe0u: goto label_1e8fe0;
        default: break;
    }

    ctx->pc = 0x1e8d50u;

    // 0x1e8d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e8d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e8d54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e8d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e8d58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e8d5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e8d60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8d64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e8d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8d6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e8d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d74: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8D74u;
    {
        const bool branch_taken_0x1e8d74 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E8D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D74u;
            // 0x1e8d78: 0x109843  sra         $s3, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d74) {
            ctx->pc = 0x1E8D84u;
            goto label_1e8d84;
        }
    }
    ctx->pc = 0x1E8D7Cu;
    // 0x1e8d7c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1e8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e8d80: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x1e8d80u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
label_1e8d84:
    // 0x1e8d84: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8D84u;
    {
        const bool branch_taken_0x1e8d84 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x1e8d84) {
            ctx->pc = 0x1E8DB0u;
            goto label_1e8db0;
        }
    }
    ctx->pc = 0x1E8D8Cu;
    // 0x1e8d8c: 0x123e3c  dsll32      $a3, $s2, 24
    ctx->pc = 0x1e8d8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 24));
label_1e8d90:
    // 0x1e8d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e8d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d9c: 0xc07a400  jal         func_1E9000
    ctx->pc = 0x1E8D9Cu;
    SET_GPR_U32(ctx, 31, 0x1E8DA4u);
    ctx->pc = 0x1E8DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D9Cu;
            // 0x1e8da0: 0x73e3f  dsra32      $a3, $a3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9000u;
    if (runtime->hasFunction(0x1E9000u)) {
        auto targetFn = runtime->lookupFunction(0x1E9000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DA4u; }
        if (ctx->pc != 0x1E8DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9000_0x1e9000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DA4u; }
        if (ctx->pc != 0x1E8DA4u) { return; }
    }
    ctx->pc = 0x1E8DA4u;
label_1e8da4:
    // 0x1e8da4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1e8da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1e8da8: 0x5e60fff9  bgtzl       $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8DA8u;
    {
        const bool branch_taken_0x1e8da8 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x1e8da8) {
            ctx->pc = 0x1E8DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DA8u;
            // 0x1e8dac: 0x123e3c  dsll32      $a3, $s2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e8d90;
        }
    }
    ctx->pc = 0x1E8DB0u;
label_1e8db0:
    // 0x1e8db0: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E8DB0u;
    {
        const bool branch_taken_0x1e8db0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1e8db0) {
            ctx->pc = 0x1E8DF8u;
            goto label_1e8df8;
        }
    }
    ctx->pc = 0x1E8DB8u;
    // 0x1e8db8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e8dbc: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x1e8dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e8dc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8dc4:
    // 0x1e8dc4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e8dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1e8dc8: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x1e8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x1e8dcc: 0x123e3c  dsll32      $a3, $s2, 24
    ctx->pc = 0x1e8dccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 24));
    // 0x1e8dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8dd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8dd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ddc: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x1e8ddcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x1e8de0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e8de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e8de4: 0xae63fffc  sw          $v1, -0x4($s3)
    ctx->pc = 0x1e8de4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967292), GPR_U32(ctx, 3));
    // 0x1e8de8: 0xc07a400  jal         func_1E9000
    ctx->pc = 0x1E8DE8u;
    SET_GPR_U32(ctx, 31, 0x1E8DF0u);
    ctx->pc = 0x1E8DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DE8u;
            // 0x1e8dec: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9000u;
    if (runtime->hasFunction(0x1E9000u)) {
        auto targetFn = runtime->lookupFunction(0x1E9000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DF0u; }
        if (ctx->pc != 0x1E8DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9000_0x1e9000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DF0u; }
        if (ctx->pc != 0x1E8DF0u) { return; }
    }
    ctx->pc = 0x1E8DF0u;
label_1e8df0:
    // 0x1e8df0: 0x5e00fff4  bgtzl       $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E8DF0u;
    {
        const bool branch_taken_0x1e8df0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e8df0) {
            ctx->pc = 0x1E8DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DF0u;
            // 0x1e8df4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e8dc4;
        }
    }
    ctx->pc = 0x1E8DF8u;
label_1e8df8:
    // 0x1e8df8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e8df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8dfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8e00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E0Cu;
            // 0x1e8e10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8E14u;
    // 0x1e8e14: 0x0  nop
    ctx->pc = 0x1e8e14u;
    // NOP
    // 0x1e8e18: 0x0  nop
    ctx->pc = 0x1e8e18u;
    // NOP
    // 0x1e8e1c: 0x0  nop
    ctx->pc = 0x1e8e1cu;
    // NOP
    // 0x1e8e20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e8e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e8e24: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1e8e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8e2c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1e8e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e30: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1e8e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e8e34: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e8e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1e8e38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e8e3c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1e8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
    // 0x1e8e40: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1e8e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1e8e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8e48: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1e8e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8e4c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1e8e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1e8e50: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1e8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e8e54: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1e8e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x1e8e58: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1e8e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e8e5c: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x1e8e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
    // 0x1e8e60: 0x80c40010  lb          $a0, 0x10($a2)
    ctx->pc = 0x1e8e60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e8e64: 0xa3a40080  sb          $a0, 0x80($sp)
    ctx->pc = 0x1e8e64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e8e68: 0xc4c90020  lwc1        $f9, 0x20($a2)
    ctx->pc = 0x1e8e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1e8e6c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1e8e6cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e8e70: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x1e8e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e8e74: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1e8e74u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
    // 0x1e8e78: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1e8e78u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1e8e7c: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x1e8e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e8e80: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1e8e80u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
    // 0x1e8e84: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1e8e84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1e8e88: 0xc4c6002c  lwc1        $f6, 0x2C($a2)
    ctx->pc = 0x1e8e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e8e8c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1e8e8cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
    // 0x1e8e90: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1e8e90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1e8e94: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1e8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e8e98: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1e8e98u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x1e8e9c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1e8e9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e8ea0: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x1e8ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e8ea4: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1e8ea4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e8ea8: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1e8ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1e8eac: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1e8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1e8eb0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1e8eb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e8eb4: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1e8eb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1e8eb8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1e8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1e8ebc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1e8ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1e8ec0: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1e8ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1e8ec4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1e8ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1e8ec8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e8ecc: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1e8eccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e8ed0: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1e8ed0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e8ed4: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1e8ed4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e8ed8: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E8ED8u;
    {
        const bool branch_taken_0x1e8ed8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8ED8u;
            // 0x1e8edc: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ed8) {
            ctx->pc = 0x1E8F24u;
            goto label_1e8f24;
        }
    }
    ctx->pc = 0x1E8EE0u;
    // 0x1e8ee0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e8ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ee4: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1e8ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1e8ee8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1e8ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e8eec: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8ef0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e8ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ef4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e8ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e8ef8: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1e8ef8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e8efc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e8efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8f00: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1e8f00u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e8f04: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1e8f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e8f08: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1e8f08u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e8f0c: 0xc07a07c  jal         func_1E81F0
    ctx->pc = 0x1E8F0Cu;
    SET_GPR_U32(ctx, 31, 0x1E8F14u);
    ctx->pc = 0x1E8F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F0Cu;
            // 0x1e8f10: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E81F0u;
    if (runtime->hasFunction(0x1E81F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E81F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F14u; }
        if (ctx->pc != 0x1E8F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E81F0_0x1e81f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F14u; }
        if (ctx->pc != 0x1E8F14u) { return; }
    }
    ctx->pc = 0x1E8F14u;
label_1e8f14:
    // 0x1e8f14: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e8f18: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1e8f1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8F1Cu;
    {
        const bool branch_taken_0x1e8f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F1Cu;
            // 0x1e8f20: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f1c) {
            ctx->pc = 0x1E8F3Cu;
            goto label_1e8f3c;
        }
    }
    ctx->pc = 0x1E8F24u;
label_1e8f24:
    // 0x1e8f24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e8f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f28: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e8f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e8f2c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e8f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f30: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e8f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8f34: 0xc07a07c  jal         func_1E81F0
    ctx->pc = 0x1E8F34u;
    SET_GPR_U32(ctx, 31, 0x1E8F3Cu);
    ctx->pc = 0x1E8F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F34u;
            // 0x1e8f38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E81F0u;
    if (runtime->hasFunction(0x1E81F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E81F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F3Cu; }
        if (ctx->pc != 0x1E8F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E81F0_0x1e81f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F3Cu; }
        if (ctx->pc != 0x1E8F3Cu) { return; }
    }
    ctx->pc = 0x1E8F3Cu;
label_1e8f3c:
    // 0x1e8f3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e8f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e8f40: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1e8f44: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1e8f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1e8f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F4Cu;
            // 0x1e8f50: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8F54u;
    // 0x1e8f54: 0x0  nop
    ctx->pc = 0x1e8f54u;
    // NOP
    // 0x1e8f58: 0x0  nop
    ctx->pc = 0x1e8f58u;
    // NOP
    // 0x1e8f5c: 0x0  nop
    ctx->pc = 0x1e8f5cu;
    // NOP
    // 0x1e8f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8f64: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1e8f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8f6c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e8f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1e8f70: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1e8f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1e8f74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e8f78: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e8f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f7c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1e8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x1e8f80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e8f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f84: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1e8f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1e8f88: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1e8f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f8c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8f90: 0xc07a18c  jal         func_1E8630
    ctx->pc = 0x1E8F90u;
    SET_GPR_U32(ctx, 31, 0x1E8F98u);
    ctx->pc = 0x1E8F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F90u;
            // 0x1e8f94: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8630u;
    if (runtime->hasFunction(0x1E8630u)) {
        auto targetFn = runtime->lookupFunction(0x1E8630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F98u; }
        if (ctx->pc != 0x1E8F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8630_0x1e8630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F98u; }
        if (ctx->pc != 0x1E8F98u) { return; }
    }
    ctx->pc = 0x1E8F98u;
label_1e8f98:
    // 0x1e8f98: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e8f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e8f9c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1e8fa0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e8fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1e8fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FA8u;
            // 0x1e8fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8FB0u;
    // 0x1e8fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8fb4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e8fb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8fbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e8fc0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1e8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1e8fc4: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1e8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x1e8fc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e8fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fcc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8fd0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1e8fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fd4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1e8fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e8fd8: 0xc07a24c  jal         func_1E8930
    ctx->pc = 0x1E8FD8u;
    SET_GPR_U32(ctx, 31, 0x1E8FE0u);
    ctx->pc = 0x1E8FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FD8u;
            // 0x1e8fdc: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8930u;
    if (runtime->hasFunction(0x1E8930u)) {
        auto targetFn = runtime->lookupFunction(0x1E8930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FE0u; }
        if (ctx->pc != 0x1E8FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8930_0x1e8930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FE0u; }
        if (ctx->pc != 0x1E8FE0u) { return; }
    }
    ctx->pc = 0x1E8FE0u;
label_1e8fe0:
    // 0x1e8fe0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e8fe4: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1e8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
    // 0x1e8fe8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1e8fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FF0u;
            // 0x1e8ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8FF8u;
    // 0x1e8ff8: 0x0  nop
    ctx->pc = 0x1e8ff8u;
    // NOP
    // 0x1e8ffc: 0x0  nop
    ctx->pc = 0x1e8ffcu;
    // NOP
}
