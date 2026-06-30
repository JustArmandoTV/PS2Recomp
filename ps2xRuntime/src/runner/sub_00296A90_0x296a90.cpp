#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296A90
// Address: 0x296a90 - 0x296ef0
void sub_00296A90_0x296a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296A90_0x296a90");
#endif

    switch (ctx->pc) {
        case 0x296b28u: goto label_296b28;
        case 0x296b48u: goto label_296b48;
        case 0x296d08u: goto label_296d08;
        case 0x296db0u: goto label_296db0;
        case 0x296dc0u: goto label_296dc0;
        case 0x296dfcu: goto label_296dfc;
        case 0x296e48u: goto label_296e48;
        case 0x296e80u: goto label_296e80;
        case 0x296eb8u: goto label_296eb8;
        default: break;
    }

    ctx->pc = 0x296a90u;

    // 0x296a90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x296a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x296a94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x296a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x296a98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x296a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296a9c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x296a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x296aa0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x296aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x296aa4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x296aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x296aa8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x296aa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296aac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x296aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x296ab0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x296ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ab4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x296ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x296ab8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x296ab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296abc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x296abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296ac0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x296ac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x296ac4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x296ac4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x296ac8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x296ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296acc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x296ACCu;
    {
        const bool branch_taken_0x296acc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x296AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296ACCu;
            // 0x296ad0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296acc) {
            ctx->pc = 0x296AE0u;
            goto label_296ae0;
        }
    }
    ctx->pc = 0x296AD4u;
    // 0x296ad4: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x296AD4u;
    {
        const bool branch_taken_0x296ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296AD4u;
            // 0x296ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ad4) {
            ctx->pc = 0x296EC0u;
            goto label_296ec0;
        }
    }
    ctx->pc = 0x296ADCu;
    // 0x296adc: 0x0  nop
    ctx->pc = 0x296adcu;
    // NOP
label_296ae0:
    // 0x296ae0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x296ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x296ae4: 0x27b500c4  addiu       $s5, $sp, 0xC4
    ctx->pc = 0x296ae4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x296ae8: 0x27b000c8  addiu       $s0, $sp, 0xC8
    ctx->pc = 0x296ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x296aec: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x296aecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x296af0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x296af4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x296af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x296af8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x296af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296afc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x296afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296b00: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x296b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x296b04: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x296b04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x296b08: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x296B08u;
    {
        const bool branch_taken_0x296b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296b08) {
            ctx->pc = 0x296B28u;
            goto label_296b28;
        }
    }
    ctx->pc = 0x296B10u;
    // 0x296b10: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x296b10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x296b14: 0x245082a  slt         $at, $s2, $a1
    ctx->pc = 0x296b14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x296b18: 0x241280a  movz        $a1, $s2, $at
    ctx->pc = 0x296b18u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x296b1c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x296b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x296b20: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x296B20u;
    SET_GPR_U32(ctx, 31, 0x296B28u);
    ctx->pc = 0x296B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296B20u;
            // 0x296b24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296B28u; }
        if (ctx->pc != 0x296B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296B28u; }
        if (ctx->pc != 0x296B28u) { return; }
    }
    ctx->pc = 0x296B28u;
label_296b28:
    // 0x296b28: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x296b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x296b2c: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x296b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x296b30: 0x10200087  beqz        $at, . + 4 + (0x87 << 2)
    ctx->pc = 0x296B30u;
    {
        const bool branch_taken_0x296b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296B30u;
            // 0x296b34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b30) {
            ctx->pc = 0x296D50u;
            goto label_296d50;
        }
    }
    ctx->pc = 0x296B38u;
    // 0x296b38: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x296b38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x296b3c: 0x1420006e  bnez        $at, . + 4 + (0x6E << 2)
    ctx->pc = 0x296B3Cu;
    {
        const bool branch_taken_0x296b3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x296B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296B3Cu;
            // 0x296b40: 0x2649fff8  addiu       $t1, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b3c) {
            ctx->pc = 0x296CF8u;
            goto label_296cf8;
        }
    }
    ctx->pc = 0x296B44u;
    // 0x296b44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x296b44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296b48:
    // 0x296b48: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x296b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296b4c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x296b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296b50: 0x2935821  addu        $t3, $s4, $s3
    ctx->pc = 0x296b50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x296b54: 0x1731021  addu        $v0, $t3, $s3
    ctx->pc = 0x296b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 19)));
    // 0x296b58: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x296b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x296b5c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x296b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x296b60: 0x149602a  slt         $t4, $t2, $t1
    ctx->pc = 0x296b60u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x296b64: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x296b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x296b68: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x296b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x296b6c: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x296b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x296b70: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x296b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x296b74: 0xb33021  addu        $a2, $a1, $s3
    ctx->pc = 0x296b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x296b78: 0x8fad00c0  lw          $t5, 0xC0($sp)
    ctx->pc = 0x296b78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296b7c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x296b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296b80: 0xd33821  addu        $a3, $a2, $s3
    ctx->pc = 0x296b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x296b84: 0x1a86821  addu        $t5, $t5, $t0
    ctx->pc = 0x296b84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x296b88: 0xe5a00004  swc1        $f0, 0x4($t5)
    ctx->pc = 0x296b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x296b8c: 0x8fad00c0  lw          $t5, 0xC0($sp)
    ctx->pc = 0x296b8cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296b90: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x296b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296b94: 0x1a86821  addu        $t5, $t5, $t0
    ctx->pc = 0x296b94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x296b98: 0xf3a021  addu        $s4, $a3, $s3
    ctx->pc = 0x296b98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x296b9c: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x296b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x296ba0: 0x8fad00c0  lw          $t5, 0xC0($sp)
    ctx->pc = 0x296ba0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296ba4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x296ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296ba8: 0x1a86821  addu        $t5, $t5, $t0
    ctx->pc = 0x296ba8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x296bac: 0xe5a00010  swc1        $f0, 0x10($t5)
    ctx->pc = 0x296bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
    // 0x296bb0: 0x8fad00c0  lw          $t5, 0xC0($sp)
    ctx->pc = 0x296bb0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296bb4: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x296bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296bb8: 0x1a86821  addu        $t5, $t5, $t0
    ctx->pc = 0x296bb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x296bbc: 0xe5a00014  swc1        $f0, 0x14($t5)
    ctx->pc = 0x296bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
    // 0x296bc0: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x296bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296bc4: 0x8fab00c0  lw          $t3, 0xC0($sp)
    ctx->pc = 0x296bc4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296bc8: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x296bc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x296bcc: 0xe5600018  swc1        $f0, 0x18($t3)
    ctx->pc = 0x296bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 24), bits); }
    // 0x296bd0: 0x8fab00c0  lw          $t3, 0xC0($sp)
    ctx->pc = 0x296bd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296bd4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x296bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296bd8: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x296bd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x296bdc: 0xe5600020  swc1        $f0, 0x20($t3)
    ctx->pc = 0x296bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 32), bits); }
    // 0x296be0: 0x8fab00c0  lw          $t3, 0xC0($sp)
    ctx->pc = 0x296be0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296be4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x296be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296be8: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x296be8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x296bec: 0xe5600024  swc1        $f0, 0x24($t3)
    ctx->pc = 0x296becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 36), bits); }
    // 0x296bf0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x296bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296bf4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296bf8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296bfc: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x296bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x296c00: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296c04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x296c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296c08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296c0c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x296c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x296c10: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296c14: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x296c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296c18: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296c1c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x296c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x296c20: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296c24: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x296c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296c28: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296c2c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x296c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x296c30: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296c34: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x296c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296c38: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296c3c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x296c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x296c40: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296c44: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x296c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296c48: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296c4c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x296c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x296c50: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296c54: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x296c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296c58: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296c5c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x296c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x296c60: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296c64: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x296c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296c68: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296c6c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x296c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x296c70: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296c74: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x296c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296c78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296c7c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x296c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x296c80: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296c84: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x296c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296c88: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296c8c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x296c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x296c90: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296c94: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x296c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296c98: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296c9c: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x296c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x296ca0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296ca4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x296ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296ca8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296cac: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x296cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x296cb0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296cb4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x296cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296cb8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296cbc: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x296cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x296cc0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296cc4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x296cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296cc8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296ccc: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x296cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x296cd0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296cd4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x296cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296cd8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296cdc: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x296cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x296ce0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x296ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296ce4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x296ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296ce8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x296ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x296cec: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x296cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x296cf0: 0x1580ff95  bnez        $t4, . + 4 + (-0x6B << 2)
    ctx->pc = 0x296CF0u;
    {
        const bool branch_taken_0x296cf0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x296CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296CF0u;
            // 0x296cf4: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cf0) {
            ctx->pc = 0x296B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296b48;
        }
    }
    ctx->pc = 0x296CF8u;
label_296cf8:
    // 0x296cf8: 0x152082a  slt         $at, $t2, $s2
    ctx->pc = 0x296cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x296cfc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x296CFCu;
    {
        const bool branch_taken_0x296cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296cfc) {
            ctx->pc = 0x296D50u;
            goto label_296d50;
        }
    }
    ctx->pc = 0x296D04u;
    // 0x296d04: 0xa2100  sll         $a0, $t2, 4
    ctx->pc = 0x296d04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_296d08:
    // 0x296d08: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x296d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296d0c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x296d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296d10: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x296d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x296d14: 0x152102a  slt         $v0, $t2, $s2
    ctx->pc = 0x296d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x296d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x296d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x296d1c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x296d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x296d20: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x296d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296d24: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x296d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296d28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x296d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x296d2c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x296d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x296d30: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x296d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296d34: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x296d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296d38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x296d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x296d3c: 0x293a021  addu        $s4, $s4, $s3
    ctx->pc = 0x296d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x296d40: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x296d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x296d44: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x296D44u;
    {
        const bool branch_taken_0x296d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296D44u;
            // 0x296d48: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d44) {
            ctx->pc = 0x296D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296d08;
        }
    }
    ctx->pc = 0x296D4Cu;
    // 0x296d4c: 0x0  nop
    ctx->pc = 0x296d4cu;
    // NOP
label_296d50:
    // 0x296d50: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x296d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296d54: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x296d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x296d58: 0xafb200b4  sw          $s2, 0xB4($sp)
    ctx->pc = 0x296d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 18));
    // 0x296d5c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x296d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x296d60: 0x27b20088  addiu       $s2, $sp, 0x88
    ctx->pc = 0x296d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x296d64: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x296d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x296d68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x296d6c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x296d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x296d70: 0x27b4008c  addiu       $s4, $sp, 0x8C
    ctx->pc = 0x296d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x296d74: 0x27b30094  addiu       $s3, $sp, 0x94
    ctx->pc = 0x296d74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x296d78: 0x27b500a8  addiu       $s5, $sp, 0xA8
    ctx->pc = 0x296d78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x296d7c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x296d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x296d80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x296d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x296d84: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x296d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x296d88: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x296d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x296d8c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x296d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x296d90: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x296d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x296d94: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x296d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x296d98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x296d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296d9c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x296d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x296da0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x296da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x296da4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x296da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x296da8: 0xc0a3138  jal         func_28C4E0
    ctx->pc = 0x296DA8u;
    SET_GPR_U32(ctx, 31, 0x296DB0u);
    ctx->pc = 0x296DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296DA8u;
            // 0x296dac: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C4E0u;
    if (runtime->hasFunction(0x28C4E0u)) {
        auto targetFn = runtime->lookupFunction(0x28C4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DB0u; }
        if (ctx->pc != 0x296DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C4E0_0x28c4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DB0u; }
        if (ctx->pc != 0x296DB0u) { return; }
    }
    ctx->pc = 0x296DB0u;
label_296db0:
    // 0x296db0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x296db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x296db4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x296db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296db8: 0xc0a6acc  jal         func_29AB30
    ctx->pc = 0x296DB8u;
    SET_GPR_U32(ctx, 31, 0x296DC0u);
    ctx->pc = 0x296DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296DB8u;
            // 0x296dbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AB30u;
    if (runtime->hasFunction(0x29AB30u)) {
        auto targetFn = runtime->lookupFunction(0x29AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DC0u; }
        if (ctx->pc != 0x296DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AB30_0x29ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DC0u; }
        if (ctx->pc != 0x296DC0u) { return; }
    }
    ctx->pc = 0x296DC0u;
label_296dc0:
    // 0x296dc0: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x296dc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x296dc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x296dc8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x296dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x296dcc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x296dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x296dd0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x296DD0u;
    {
        const bool branch_taken_0x296dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296dd0) {
            ctx->pc = 0x296E00u;
            goto label_296e00;
        }
    }
    ctx->pc = 0x296DD8u;
    // 0x296dd8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x296dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x296ddc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x296ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x296de0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x296de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x296de4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x296de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x296de8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x296de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x296dec: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x296decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296df0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x296df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x296df4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x296DF4u;
    SET_GPR_U32(ctx, 31, 0x296DFCu);
    ctx->pc = 0x296DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296DF4u;
            // 0x296df8: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DFCu; }
        if (ctx->pc != 0x296DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DFCu; }
        if (ctx->pc != 0x296DFCu) { return; }
    }
    ctx->pc = 0x296DFCu;
label_296dfc:
    // 0x296dfc: 0x0  nop
    ctx->pc = 0x296dfcu;
    // NOP
label_296e00:
    // 0x296e00: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x296E00u;
    {
        const bool branch_taken_0x296e00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e00) {
            ctx->pc = 0x296E48u;
            goto label_296e48;
        }
    }
    ctx->pc = 0x296E08u;
    // 0x296e08: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x296e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x296e0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x296e10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x296e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x296e14: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x296E14u;
    {
        const bool branch_taken_0x296e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296e14) {
            ctx->pc = 0x296E48u;
            goto label_296e48;
        }
    }
    ctx->pc = 0x296E1Cu;
    // 0x296e1c: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x296e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x296e20: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x296e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x296e24: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x296e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x296e28: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x296e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x296e2c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x296e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x296e30: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x296e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296e34: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x296e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x296e38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x296e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x296e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296e40: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x296E40u;
    SET_GPR_U32(ctx, 31, 0x296E48u);
    ctx->pc = 0x296E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296E40u;
            // 0x296e44: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E48u; }
        if (ctx->pc != 0x296E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E48u; }
        if (ctx->pc != 0x296E48u) { return; }
    }
    ctx->pc = 0x296E48u;
label_296e48:
    // 0x296e48: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x296e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x296e4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x296e50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x296e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x296e54: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x296E54u;
    {
        const bool branch_taken_0x296e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296e54) {
            ctx->pc = 0x296E80u;
            goto label_296e80;
        }
    }
    ctx->pc = 0x296E5Cu;
    // 0x296e5c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x296e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x296e60: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x296e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x296e64: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x296e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x296e68: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x296e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x296e6c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x296e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296e70: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x296e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296e74: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x296e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x296e78: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x296E78u;
    SET_GPR_U32(ctx, 31, 0x296E80u);
    ctx->pc = 0x296E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296E78u;
            // 0x296e7c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E80u; }
        if (ctx->pc != 0x296E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E80u; }
        if (ctx->pc != 0x296E80u) { return; }
    }
    ctx->pc = 0x296E80u;
label_296e80:
    // 0x296e80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x296e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296e84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x296e88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x296e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x296e8c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x296E8Cu;
    {
        const bool branch_taken_0x296e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296e8c) {
            ctx->pc = 0x296EB8u;
            goto label_296eb8;
        }
    }
    ctx->pc = 0x296E94u;
    // 0x296e94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x296e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296e98: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x296e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x296e9c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x296e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x296ea0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x296ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x296ea4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x296ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296ea8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x296ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296eac: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x296eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x296eb0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x296EB0u;
    SET_GPR_U32(ctx, 31, 0x296EB8u);
    ctx->pc = 0x296EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296EB0u;
            // 0x296eb4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EB8u; }
        if (ctx->pc != 0x296EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EB8u; }
        if (ctx->pc != 0x296EB8u) { return; }
    }
    ctx->pc = 0x296EB8u;
label_296eb8:
    // 0x296eb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ebc: 0x0  nop
    ctx->pc = 0x296ebcu;
    // NOP
label_296ec0:
    // 0x296ec0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x296ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296ec4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x296ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296ec8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x296ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296ecc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x296eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296ed0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x296ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296ed4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x296ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296ed8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x296ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296edc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x296EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296EE0u;
            // 0x296ee4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296EE8u;
    // 0x296ee8: 0x0  nop
    ctx->pc = 0x296ee8u;
    // NOP
    // 0x296eec: 0x0  nop
    ctx->pc = 0x296eecu;
    // NOP
}
