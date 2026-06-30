#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00400E80
// Address: 0x400e80 - 0x401410
void sub_00400E80_0x400e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400E80_0x400e80");
#endif

    switch (ctx->pc) {
        case 0x400ef8u: goto label_400ef8;
        case 0x400f00u: goto label_400f00;
        case 0x400f50u: goto label_400f50;
        case 0x400fc4u: goto label_400fc4;
        case 0x401044u: goto label_401044;
        case 0x4010e8u: goto label_4010e8;
        case 0x401140u: goto label_401140;
        case 0x4011c0u: goto label_4011c0;
        case 0x4011f8u: goto label_4011f8;
        case 0x40121cu: goto label_40121c;
        case 0x401224u: goto label_401224;
        case 0x401244u: goto label_401244;
        case 0x4012b8u: goto label_4012b8;
        case 0x401324u: goto label_401324;
        case 0x4013d8u: goto label_4013d8;
        case 0x4013ecu: goto label_4013ec;
        default: break;
    }

    ctx->pc = 0x400e80u;

    // 0x400e80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x400e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x400e84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x400e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x400e88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x400e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x400e8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x400e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x400e90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x400e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x400e94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x400e94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x400e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x400e9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x400e9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x400ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x400ea4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x400ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x400ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x400eac: 0x1240014f  beqz        $s2, . + 4 + (0x14F << 2)
    ctx->pc = 0x400EACu;
    {
        const bool branch_taken_0x400eac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x400EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400EACu;
            // 0x400eb0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400eac) {
            ctx->pc = 0x4013ECu;
            goto label_4013ec;
        }
    }
    ctx->pc = 0x400EB4u;
    // 0x400eb4: 0x3c010800  lui         $at, 0x800
    ctx->pc = 0x400eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2048 << 16));
    // 0x400eb8: 0x241082b  sltu        $at, $s2, $at
    ctx->pc = 0x400eb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x400ebc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x400EBCu;
    {
        const bool branch_taken_0x400ebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x400ebc) {
            ctx->pc = 0x400EE0u;
            goto label_400ee0;
        }
    }
    ctx->pc = 0x400EC4u;
    // 0x400ec4: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x400ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x400ec8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x400ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x400ecc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x400eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x400ed0: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x400ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x400ed4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x400ed4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x400ed8: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x400ED8u;
    {
        const bool branch_taken_0x400ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x400ed8) {
            ctx->pc = 0x400EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400ED8u;
            // 0x400edc: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x400F04u;
            goto label_400f04;
        }
    }
    ctx->pc = 0x400EE0u;
label_400ee0:
    // 0x400ee0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x400ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x400ee4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x400ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x400ee8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x400ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x400eec: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x400eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x400ef0: 0xc049e92  jal         func_127A48
    ctx->pc = 0x400EF0u;
    SET_GPR_U32(ctx, 31, 0x400EF8u);
    ctx->pc = 0x400EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400EF0u;
            // 0x400ef4: 0x24a5b880  addiu       $a1, $a1, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400EF8u; }
        if (ctx->pc != 0x400EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400EF8u; }
        if (ctx->pc != 0x400EF8u) { return; }
    }
    ctx->pc = 0x400EF8u;
label_400ef8:
    // 0x400ef8: 0xc04981a  jal         func_126068
    ctx->pc = 0x400EF8u;
    SET_GPR_U32(ctx, 31, 0x400F00u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400F00u; }
        if (ctx->pc != 0x400F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400F00u; }
        if (ctx->pc != 0x400F00u) { return; }
    }
    ctx->pc = 0x400F00u;
label_400f00:
    // 0x400f00: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x400f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_400f04:
    // 0x400f04: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x400f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x400f08: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x400f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x400f0c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x400f0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x400f10: 0x542000a0  bnel        $at, $zero, . + 4 + (0xA0 << 2)
    ctx->pc = 0x400F10u;
    {
        const bool branch_taken_0x400f10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x400f10) {
            ctx->pc = 0x400F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400F10u;
            // 0x400f14: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401194u;
            goto label_401194;
        }
    }
    ctx->pc = 0x400F18u;
    // 0x400f18: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x400f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x400f1c: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x400f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x400f20: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x400f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x400f24: 0x932823  subu        $a1, $a0, $s3
    ctx->pc = 0x400f24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x400f28: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x400F28u;
    {
        const bool branch_taken_0x400f28 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x400F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400F28u;
            // 0x400f2c: 0x51943  sra         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400f28) {
            ctx->pc = 0x400F38u;
            goto label_400f38;
        }
    }
    ctx->pc = 0x400F30u;
    // 0x400f30: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x400f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x400f34: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x400f34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_400f38:
    // 0x400f38: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x400f38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x400f3c: 0x5020003d  beql        $at, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x400F3Cu;
    {
        const bool branch_taken_0x400f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x400f3c) {
            ctx->pc = 0x400F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x400F3Cu;
            // 0x400f40: 0x123940  sll         $a3, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401034u;
            goto label_401034;
        }
    }
    ctx->pc = 0x400F44u;
    // 0x400f44: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x400f44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x400f48: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x400F48u;
    {
        const bool branch_taken_0x400f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x400F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400F48u;
            // 0x400f4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400f48) {
            ctx->pc = 0x400FB8u;
            goto label_400fb8;
        }
    }
    ctx->pc = 0x400F50u;
label_400f50:
    // 0x400f50: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x400F50u;
    {
        const bool branch_taken_0x400f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x400f50) {
            ctx->pc = 0x400F98u;
            goto label_400f98;
        }
    }
    ctx->pc = 0x400F58u;
    // 0x400f58: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x400f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x400f5c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x400f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x400f60: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x400f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x400f64: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x400f64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x400f68: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x400f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x400f6c: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x400f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x400f70: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x400f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400f74: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x400f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x400f78: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x400f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x400f7c: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x400f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x400f80: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x400f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x400f84: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x400f84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
    // 0x400f88: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x400f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x400f8c: 0xaca60018  sw          $a2, 0x18($a1)
    ctx->pc = 0x400f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 6));
    // 0x400f90: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x400f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400f94: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x400f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_400f98:
    // 0x400f98: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x400f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x400f9c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x400f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x400fa0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x400fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x400fa4: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x400fa4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x400fa8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x400fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x400fac: 0x1420ffe8  bnez        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x400FACu;
    {
        const bool branch_taken_0x400fac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x400FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400FACu;
            // 0x400fb0: 0xae860004  sw          $a2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400fac) {
            ctx->pc = 0x400F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400f50;
        }
    }
    ctx->pc = 0x400FB4u;
    // 0x400fb4: 0x0  nop
    ctx->pc = 0x400fb4u;
    // NOP
label_400fb8:
    // 0x400fb8: 0x264082b  sltu        $at, $s3, $a0
    ctx->pc = 0x400fb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x400fbc: 0x1020005e  beqz        $at, . + 4 + (0x5E << 2)
    ctx->pc = 0x400FBCu;
    {
        const bool branch_taken_0x400fbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x400FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400FBCu;
            // 0x400fc0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400fbc) {
            ctx->pc = 0x401138u;
            goto label_401138;
        }
    }
    ctx->pc = 0x400FC4u;
label_400fc4:
    // 0x400fc4: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x400FC4u;
    {
        const bool branch_taken_0x400fc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x400fc4) {
            ctx->pc = 0x401010u;
            goto label_401010;
        }
    }
    ctx->pc = 0x400FCCu;
    // 0x400fcc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x400fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x400fd0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x400fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x400fd4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x400fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x400fd8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x400fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x400fdc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x400fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x400fe0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x400fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x400fe4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x400fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400fe8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x400fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x400fec: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x400fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x400ff0: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x400ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x400ff4: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x400ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x400ff8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x400ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x400ffc: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x400ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x401000: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x401000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x401004: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x401004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401008: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x401008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x40100c: 0x0  nop
    ctx->pc = 0x40100cu;
    // NOP
label_401010:
    // 0x401010: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x401010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x401014: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x401014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x401018: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x401018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x40101c: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x40101cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x401020: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x401020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x401024: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x401024u;
    {
        const bool branch_taken_0x401024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x401028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401024u;
            // 0x401028: 0xae860004  sw          $a2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401024) {
            ctx->pc = 0x400FC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400fc4;
        }
    }
    ctx->pc = 0x40102Cu;
    // 0x40102c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x40102Cu;
    {
        const bool branch_taken_0x40102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40102c) {
            ctx->pc = 0x401138u;
            goto label_401138;
        }
    }
    ctx->pc = 0x401034u;
label_401034:
    // 0x401034: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x401034u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x401038: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x401038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x40103c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x40103Cu;
    {
        const bool branch_taken_0x40103c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x401040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40103Cu;
            // 0x401040: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40103c) {
            ctx->pc = 0x4010B0u;
            goto label_4010b0;
        }
    }
    ctx->pc = 0x401044u;
label_401044:
    // 0x401044: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x401044u;
    {
        const bool branch_taken_0x401044 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x401044) {
            ctx->pc = 0x401090u;
            goto label_401090;
        }
    }
    ctx->pc = 0x40104Cu;
    // 0x40104c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x40104cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x401050: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x401050u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x401054: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x401054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x401058: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x401058u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x40105c: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x40105cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x401060: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x401060u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x401064: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x401064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401068: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x401068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x40106c: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x40106cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x401070: 0xad050010  sw          $a1, 0x10($t0)
    ctx->pc = 0x401070u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
    // 0x401074: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x401074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x401078: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x401078u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
    // 0x40107c: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x40107cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x401080: 0xad050018  sw          $a1, 0x18($t0)
    ctx->pc = 0x401080u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 5));
    // 0x401084: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x401084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401088: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x401088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x40108c: 0x0  nop
    ctx->pc = 0x40108cu;
    // NOP
label_401090:
    // 0x401090: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x401090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x401094: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x401094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x401098: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x401098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x40109c: 0x124282b  sltu        $a1, $t1, $a0
    ctx->pc = 0x40109cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4010a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4010a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4010a4: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4010A4u;
    {
        const bool branch_taken_0x4010a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4010A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4010A4u;
            // 0x4010a8: 0xae860004  sw          $a2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4010a4) {
            ctx->pc = 0x401044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401044;
        }
    }
    ctx->pc = 0x4010ACu;
    // 0x4010ac: 0x0  nop
    ctx->pc = 0x4010acu;
    // NOP
label_4010b0:
    // 0x4010b0: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x4010b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4010b4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x4010b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x4010b8: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x4010b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4010bc: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x4010bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4010c0: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4010C0u;
    {
        const bool branch_taken_0x4010c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4010c0) {
            ctx->pc = 0x4010C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4010C0u;
            // 0x4010c4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4010DCu;
            goto label_4010dc;
        }
    }
    ctx->pc = 0x4010C8u;
    // 0x4010c8: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x4010c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4010cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x4010CCu;
    {
        const bool branch_taken_0x4010cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4010cc) {
            ctx->pc = 0x4010D8u;
            goto label_4010d8;
        }
    }
    ctx->pc = 0x4010D4u;
    // 0x4010d4: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x4010d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_4010d8:
    // 0x4010d8: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4010d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4010dc:
    // 0x4010dc: 0x265082b  sltu        $at, $s3, $a1
    ctx->pc = 0x4010dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4010e0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x4010E0u;
    {
        const bool branch_taken_0x4010e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4010e0) {
            ctx->pc = 0x401138u;
            goto label_401138;
        }
    }
    ctx->pc = 0x4010E8u;
label_4010e8:
    // 0x4010e8: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x4010e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x4010ec: 0x2484ffe0  addiu       $a0, $a0, -0x20
    ctx->pc = 0x4010ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x4010f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4010f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4010f4: 0x265082b  sltu        $at, $s3, $a1
    ctx->pc = 0x4010f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4010f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4010f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4010fc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4010fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x401100: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x401100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x401104: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x401104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x401108: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x401108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x40110c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x40110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401110: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x401110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x401114: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x401114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x401118: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x401118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x40111c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x40111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x401120: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x401120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x401124: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x401124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x401128: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x401128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x40112c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x40112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401130: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x401130u;
    {
        const bool branch_taken_0x401130 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x401134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401130u;
            // 0x401134: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x401130) {
            ctx->pc = 0x4010E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4010e8;
        }
    }
    ctx->pc = 0x401138u;
label_401138:
    // 0x401138: 0x524000ad  beql        $s2, $zero, . + 4 + (0xAD << 2)
    ctx->pc = 0x401138u;
    {
        const bool branch_taken_0x401138 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x401138) {
            ctx->pc = 0x40113Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401138u;
            // 0x40113c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4013F0u;
            goto label_4013f0;
        }
    }
    ctx->pc = 0x401140u;
label_401140:
    // 0x401140: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x401140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x401144: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x401144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x401148: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x401148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x40114c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x40114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x401150: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x401150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x401154: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x401154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x401158: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x401158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x40115c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x40115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401160: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x401160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x401164: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x401164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x401168: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x401168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
    // 0x40116c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x40116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x401170: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x401170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
    // 0x401174: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x401174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x401178: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x401178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x40117c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x40117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401180: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x401180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x401184: 0x1640ffee  bnez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x401184u;
    {
        const bool branch_taken_0x401184 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x401188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401184u;
            // 0x401188: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401184) {
            ctx->pc = 0x401140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401140;
        }
    }
    ctx->pc = 0x40118Cu;
    // 0x40118c: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x40118Cu;
    {
        const bool branch_taken_0x40118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40118c) {
            ctx->pc = 0x4013ECu;
            goto label_4013ec;
        }
    }
    ctx->pc = 0x401194u;
label_401194:
    // 0x401194: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x401194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x401198: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x401198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x40119c: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x40119cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4011a0: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4011A0u;
    {
        const bool branch_taken_0x4011a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4011a0) {
            ctx->pc = 0x4011A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4011A0u;
            // 0x4011a4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4011A8u;
            goto label_4011a8;
        }
    }
    ctx->pc = 0x4011A8u;
label_4011a8:
    // 0x4011a8: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x4011a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4011ac: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x4011ACu;
    {
        const bool branch_taken_0x4011ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4011ac) {
            ctx->pc = 0x4011F0u;
            goto label_4011f0;
        }
    }
    ctx->pc = 0x4011B4u;
    // 0x4011b4: 0x3c0207ff  lui         $v0, 0x7FF
    ctx->pc = 0x4011b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2047 << 16));
    // 0x4011b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4011b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4011bc: 0x3c0103ff  lui         $at, 0x3FF
    ctx->pc = 0x4011bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1023 << 16));
label_4011c0:
    // 0x4011c0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x4011c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x4011c4: 0x2a1082b  sltu        $at, $s5, $at
    ctx->pc = 0x4011c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4011c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4011C8u;
    {
        const bool branch_taken_0x4011c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4011c8) {
            ctx->pc = 0x4011D8u;
            goto label_4011d8;
        }
    }
    ctx->pc = 0x4011D0u;
    // 0x4011d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4011D0u;
    {
        const bool branch_taken_0x4011d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4011D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4011D0u;
            // 0x4011d4: 0x15a840  sll         $s5, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4011d0) {
            ctx->pc = 0x4011E0u;
            goto label_4011e0;
        }
    }
    ctx->pc = 0x4011D8u;
label_4011d8:
    // 0x4011d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4011d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4011dc: 0x0  nop
    ctx->pc = 0x4011dcu;
    // NOP
label_4011e0:
    // 0x4011e0: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x4011e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4011e4: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x4011E4u;
    {
        const bool branch_taken_0x4011e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4011e4) {
            ctx->pc = 0x4011E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4011E4u;
            // 0x4011e8: 0x3c0103ff  lui         $at, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1023 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4011C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4011c0;
        }
    }
    ctx->pc = 0x4011ECu;
    // 0x4011ec: 0x0  nop
    ctx->pc = 0x4011ecu;
    // NOP
label_4011f0:
    // 0x4011f0: 0xc040180  jal         func_100600
    ctx->pc = 0x4011F0u;
    SET_GPR_U32(ctx, 31, 0x4011F8u);
    ctx->pc = 0x4011F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4011F0u;
            // 0x4011f4: 0x152140  sll         $a0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4011F8u; }
        if (ctx->pc != 0x4011F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4011F8u; }
        if (ctx->pc != 0x4011F8u) { return; }
    }
    ctx->pc = 0x4011F8u;
label_4011f8:
    // 0x4011f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4011f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4011fc: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4011FCu;
    {
        const bool branch_taken_0x4011fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4011fc) {
            ctx->pc = 0x401200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4011FCu;
            // 0x401200: 0xafb50070  sw          $s5, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401228u;
            goto label_401228;
        }
    }
    ctx->pc = 0x401204u;
    // 0x401204: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x401204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x401208: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x401208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x40120c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x40120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x401210: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x401210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x401214: 0xc049e92  jal         func_127A48
    ctx->pc = 0x401214u;
    SET_GPR_U32(ctx, 31, 0x40121Cu);
    ctx->pc = 0x401218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401214u;
            // 0x401218: 0x24a5b920  addiu       $a1, $a1, -0x46E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40121Cu; }
        if (ctx->pc != 0x40121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40121Cu; }
        if (ctx->pc != 0x40121Cu) { return; }
    }
    ctx->pc = 0x40121Cu;
label_40121c:
    // 0x40121c: 0xc04981a  jal         func_126068
    ctx->pc = 0x40121Cu;
    SET_GPR_U32(ctx, 31, 0x401224u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401224u; }
        if (ctx->pc != 0x401224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401224u; }
        if (ctx->pc != 0x401224u) { return; }
    }
    ctx->pc = 0x401224u;
label_401224:
    // 0x401224: 0xafb50070  sw          $s5, 0x70($sp)
    ctx->pc = 0x401224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 21));
label_401228:
    // 0x401228: 0xafb00078  sw          $s0, 0x78($sp)
    ctx->pc = 0x401228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
    // 0x40122c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x40122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x401230: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x401230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x401234: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x401234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x401238: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x401238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x40123c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x40123Cu;
    {
        const bool branch_taken_0x40123c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x401240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40123Cu;
            // 0x401240: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40123c) {
            ctx->pc = 0x4012B0u;
            goto label_4012b0;
        }
    }
    ctx->pc = 0x401244u;
label_401244:
    // 0x401244: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x401244u;
    {
        const bool branch_taken_0x401244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x401244) {
            ctx->pc = 0x401290u;
            goto label_401290;
        }
    }
    ctx->pc = 0x40124Cu;
    // 0x40124c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x401250: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x401250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x401254: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x401254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x401258: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x401258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x40125c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x40125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x401260: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x401260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x401264: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x401264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401268: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x401268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x40126c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x40126cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x401270: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x401270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x401274: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x401274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x401278: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x401278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x40127c: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x40127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x401280: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x401280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x401284: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x401284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401288: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x401288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x40128c: 0x0  nop
    ctx->pc = 0x40128cu;
    // NOP
label_401290:
    // 0x401290: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x401290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x401294: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x401294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x401298: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x401298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x40129c: 0x73202b  sltu        $a0, $v1, $s3
    ctx->pc = 0x40129cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4012a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4012a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4012a4: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4012A4u;
    {
        const bool branch_taken_0x4012a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4012A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4012A4u;
            // 0x4012a8: 0xafa50074  sw          $a1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4012a4) {
            ctx->pc = 0x401244u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401244;
        }
    }
    ctx->pc = 0x4012ACu;
    // 0x4012ac: 0x0  nop
    ctx->pc = 0x4012acu;
    // NOP
label_4012b0:
    // 0x4012b0: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x4012B0u;
    {
        const bool branch_taken_0x4012b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4012b0) {
            ctx->pc = 0x401318u;
            goto label_401318;
        }
    }
    ctx->pc = 0x4012B8u;
label_4012b8:
    // 0x4012b8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4012B8u;
    {
        const bool branch_taken_0x4012b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4012b8) {
            ctx->pc = 0x401300u;
            goto label_401300;
        }
    }
    ctx->pc = 0x4012C0u;
    // 0x4012c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4012c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4012c4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4012c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4012c8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4012c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4012cc: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x4012ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x4012d0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4012d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4012d4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x4012d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x4012d8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x4012d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4012dc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x4012dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x4012e0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4012e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4012e4: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4012e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x4012e8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x4012e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4012ec: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x4012ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x4012f0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x4012f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4012f4: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x4012f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x4012f8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4012f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4012fc: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x4012fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_401300:
    // 0x401300: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x401300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x401304: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x401304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x401308: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x401308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x40130c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x40130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x401310: 0x1640ffe9  bnez        $s2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x401310u;
    {
        const bool branch_taken_0x401310 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x401314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401310u;
            // 0x401314: 0xafa40074  sw          $a0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401310) {
            ctx->pc = 0x4012B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4012b8;
        }
    }
    ctx->pc = 0x401318u;
label_401318:
    // 0x401318: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x401318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x40131c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x40131Cu;
    {
        const bool branch_taken_0x40131c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40131c) {
            ctx->pc = 0x401390u;
            goto label_401390;
        }
    }
    ctx->pc = 0x401324u;
label_401324:
    // 0x401324: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x401324u;
    {
        const bool branch_taken_0x401324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x401324) {
            ctx->pc = 0x401370u;
            goto label_401370;
        }
    }
    ctx->pc = 0x40132Cu;
    // 0x40132c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40132cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x401330: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x401330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x401334: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x401334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x401338: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x401338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x40133c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x40133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x401340: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x401340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x401344: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x401344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401348: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x401348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x40134c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x40134cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x401350: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x401350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x401354: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x401354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x401358: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x401358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x40135c: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x40135cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x401360: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x401360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x401364: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x401364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x401368: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x401368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x40136c: 0x0  nop
    ctx->pc = 0x40136cu;
    // NOP
label_401370:
    // 0x401370: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x401370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x401374: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x401374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x401378: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x401378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x40137c: 0x62202b  sltu        $a0, $v1, $v0
    ctx->pc = 0x40137cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x401380: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x401380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x401384: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x401384u;
    {
        const bool branch_taken_0x401384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x401388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401384u;
            // 0x401388: 0xafa50074  sw          $a1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401384) {
            ctx->pc = 0x401324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401324;
        }
    }
    ctx->pc = 0x40138Cu;
    // 0x40138c: 0x0  nop
    ctx->pc = 0x40138cu;
    // NOP
label_401390:
    // 0x401390: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x401390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x401394: 0x5054000e  beql        $v0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x401394u;
    {
        const bool branch_taken_0x401394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x401394) {
            ctx->pc = 0x401398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401394u;
            // 0x401398: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4013D0u;
            goto label_4013d0;
        }
    }
    ctx->pc = 0x40139Cu;
    // 0x40139c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x40139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4013a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4013a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4013a4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x4013a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x4013a8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4013a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4013ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x4013acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4013b0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x4013b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4013b4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x4013b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x4013b8: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x4013b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x4013bc: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x4013bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x4013c0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4013c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4013c4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x4013c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x4013c8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x4013c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x4013cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4013ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4013d0:
    // 0x4013d0: 0xc0b648c  jal         func_2D9230
    ctx->pc = 0x4013D0u;
    SET_GPR_U32(ctx, 31, 0x4013D8u);
    ctx->pc = 0x2D9230u;
    if (runtime->hasFunction(0x2D9230u)) {
        auto targetFn = runtime->lookupFunction(0x2D9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4013D8u; }
        if (ctx->pc != 0x4013D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9230_0x2d9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4013D8u; }
        if (ctx->pc != 0x4013D8u) { return; }
    }
    ctx->pc = 0x4013D8u;
label_4013d8:
    // 0x4013d8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x4013d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4013dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4013DCu;
    {
        const bool branch_taken_0x4013dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4013dc) {
            ctx->pc = 0x4013ECu;
            goto label_4013ec;
        }
    }
    ctx->pc = 0x4013E4u;
    // 0x4013e4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4013E4u;
    SET_GPR_U32(ctx, 31, 0x4013ECu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4013ECu; }
        if (ctx->pc != 0x4013ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4013ECu; }
        if (ctx->pc != 0x4013ECu) { return; }
    }
    ctx->pc = 0x4013ECu;
label_4013ec:
    // 0x4013ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4013ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4013f0:
    // 0x4013f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4013f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4013f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4013f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4013f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4013f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4013fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4013fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x401400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x401400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x401404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x401404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x401408: 0x3e00008  jr          $ra
    ctx->pc = 0x401408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40140Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401408u;
            // 0x40140c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x401410u;
}
