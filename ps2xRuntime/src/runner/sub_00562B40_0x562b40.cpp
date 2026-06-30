#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00562B40
// Address: 0x562b40 - 0x562ea0
void sub_00562B40_0x562b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00562B40_0x562b40");
#endif

    switch (ctx->pc) {
        case 0x562ba4u: goto label_562ba4;
        case 0x562bdcu: goto label_562bdc;
        case 0x562be8u: goto label_562be8;
        case 0x562bf4u: goto label_562bf4;
        case 0x562c84u: goto label_562c84;
        case 0x562ca8u: goto label_562ca8;
        case 0x562cc8u: goto label_562cc8;
        case 0x562d18u: goto label_562d18;
        case 0x562d38u: goto label_562d38;
        case 0x562da0u: goto label_562da0;
        case 0x562e64u: goto label_562e64;
        default: break;
    }

    ctx->pc = 0x562b40u;

    // 0x562b40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x562b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x562b44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x562b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x562b48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x562b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x562b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x562b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562b50: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x562b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x562b54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x562b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562b58: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x562b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x562b5c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x562b5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562b60: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x562b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x562b64: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x562b64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562b68: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x562b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x562b6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x562b6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562b70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x562b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x562b74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x562b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x562b78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x562b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x562b7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x562b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x562b80: 0x26b10060  addiu       $s1, $s5, 0x60
    ctx->pc = 0x562b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x562b84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x562b84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x562b88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x562b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562b8c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x562b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x562b90: 0x8c900044  lw          $s0, 0x44($a0)
    ctx->pc = 0x562b90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x562b94: 0x24520130  addiu       $s2, $v0, 0x130
    ctx->pc = 0x562b94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x562b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x562b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562b9c: 0xc0c5ae8  jal         func_316BA0
    ctx->pc = 0x562B9Cu;
    SET_GPR_U32(ctx, 31, 0x562BA4u);
    ctx->pc = 0x562BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562B9Cu;
            // 0x562ba0: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316BA0u;
    if (runtime->hasFunction(0x316BA0u)) {
        auto targetFn = runtime->lookupFunction(0x316BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562BA4u; }
        if (ctx->pc != 0x562BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316BA0_0x316ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562BA4u; }
        if (ctx->pc != 0x562BA4u) { return; }
    }
    ctx->pc = 0x562BA4u;
label_562ba4:
    // 0x562ba4: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x562ba4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x562ba8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x562ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x562bac: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x562bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x562bb0: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x562bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x562bb4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x562bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x562bb8: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x562bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x562bbc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x562bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x562bc0: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x562bc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x562bc4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x562bc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x562bc8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x562bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x562bcc: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x562bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x562bd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x562bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x562bd4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x562BD4u;
    SET_GPR_U32(ctx, 31, 0x562BDCu);
    ctx->pc = 0x562BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562BD4u;
            // 0x562bd8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562BDCu; }
        if (ctx->pc != 0x562BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562BDCu; }
        if (ctx->pc != 0x562BDCu) { return; }
    }
    ctx->pc = 0x562BDCu;
label_562bdc:
    // 0x562bdc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x562bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x562be0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x562BE0u;
    SET_GPR_U32(ctx, 31, 0x562BE8u);
    ctx->pc = 0x562BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562BE0u;
            // 0x562be4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562BE8u; }
        if (ctx->pc != 0x562BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562BE8u; }
        if (ctx->pc != 0x562BE8u) { return; }
    }
    ctx->pc = 0x562BE8u;
label_562be8:
    // 0x562be8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x562be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x562bec: 0xc04cc08  jal         func_133020
    ctx->pc = 0x562BECu;
    SET_GPR_U32(ctx, 31, 0x562BF4u);
    ctx->pc = 0x562BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562BECu;
            // 0x562bf0: 0x26050820  addiu       $a1, $s0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562BF4u; }
        if (ctx->pc != 0x562BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562BF4u; }
        if (ctx->pc != 0x562BF4u) { return; }
    }
    ctx->pc = 0x562BF4u;
label_562bf4:
    // 0x562bf4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x562bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x562bf8: 0x0  nop
    ctx->pc = 0x562bf8u;
    // NOP
    // 0x562bfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x562bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x562c00: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x562C00u;
    {
        const bool branch_taken_0x562c00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x562c00) {
            ctx->pc = 0x562C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562C00u;
            // 0x562c04: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562C34u;
            goto label_562c34;
        }
    }
    ctx->pc = 0x562C08u;
    // 0x562c08: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x562c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x562c0c: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x562c0cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x562c10: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x562c10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x562c14: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x562c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x562c18: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x562c18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x562c1c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x562c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x562c20: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x562c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x562c24: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x562c24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x562c28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x562c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x562c2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x562C2Cu;
    {
        const bool branch_taken_0x562c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562C2Cu;
            // 0x562c30: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562c2c) {
            ctx->pc = 0x562C54u;
            goto label_562c54;
        }
    }
    ctx->pc = 0x562C34u;
label_562c34:
    // 0x562c34: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x562c34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x562c38: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x562c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x562c3c: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x562c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x562c40: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x562c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x562c44: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x562c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x562c48: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x562c48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x562c4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x562c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x562c50: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x562c50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_562c54:
    // 0x562c54: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x562c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x562c58: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x562c58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x562c5c: 0xc6020dec  lwc1        $f2, 0xDEC($s0)
    ctx->pc = 0x562c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x562c60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x562c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562c64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x562c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x562c68: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x562c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x562c6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x562c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x562c70: 0x0  nop
    ctx->pc = 0x562c70u;
    // NOP
    // 0x562c74: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x562c74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x562c78: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x562c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x562c7c: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x562C7Cu;
    SET_GPR_U32(ctx, 31, 0x562C84u);
    ctx->pc = 0x562C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562C7Cu;
            // 0x562c80: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562C84u; }
        if (ctx->pc != 0x562C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562C84u; }
        if (ctx->pc != 0x562C84u) { return; }
    }
    ctx->pc = 0x562C84u;
label_562c84:
    // 0x562c84: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x562c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x562c88: 0x4502003c  bc1fl       . + 4 + (0x3C << 2)
    ctx->pc = 0x562C88u;
    {
        const bool branch_taken_0x562c88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x562c88) {
            ctx->pc = 0x562C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562C88u;
            // 0x562c8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x562D7Cu;
            goto label_562d7c;
        }
    }
    ctx->pc = 0x562C90u;
    // 0x562c90: 0x52c0001e  beql        $s6, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x562C90u;
    {
        const bool branch_taken_0x562c90 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x562c90) {
            ctx->pc = 0x562C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562C90u;
            // 0x562c94: 0x96860002  lhu         $a2, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562D0Cu;
            goto label_562d0c;
        }
    }
    ctx->pc = 0x562C98u;
    // 0x562c98: 0x96860000  lhu         $a2, 0x0($s4)
    ctx->pc = 0x562c98u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x562c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x562c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562ca0: 0xc0c6104  jal         func_318410
    ctx->pc = 0x562CA0u;
    SET_GPR_U32(ctx, 31, 0x562CA8u);
    ctx->pc = 0x562CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562CA0u;
            // 0x562ca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318410u;
    if (runtime->hasFunction(0x318410u)) {
        auto targetFn = runtime->lookupFunction(0x318410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562CA8u; }
        if (ctx->pc != 0x562CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318410_0x318410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562CA8u; }
        if (ctx->pc != 0x562CA8u) { return; }
    }
    ctx->pc = 0x562CA8u;
label_562ca8:
    // 0x562ca8: 0x96a30098  lhu         $v1, 0x98($s5)
    ctx->pc = 0x562ca8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x562cac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x562cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x562cb0: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x562CB0u;
    {
        const bool branch_taken_0x562cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x562cb0) {
            ctx->pc = 0x562CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562CB0u;
            // 0x562cb4: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562CE8u;
            goto label_562ce8;
        }
    }
    ctx->pc = 0x562CB8u;
    // 0x562cb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x562cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x562cbc: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x562cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
    // 0x562cc0: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x562CC0u;
    SET_GPR_U32(ctx, 31, 0x562CC8u);
    ctx->pc = 0x562CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562CC0u;
            // 0x562cc4: 0x96300010  lhu         $s0, 0x10($s1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562CC8u; }
        if (ctx->pc != 0x562CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562CC8u; }
        if (ctx->pc != 0x562CC8u) { return; }
    }
    ctx->pc = 0x562CC8u;
label_562cc8:
    // 0x562cc8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x562cc8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x562ccc: 0x1010  mfhi        $v0
    ctx->pc = 0x562cccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x562cd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x562cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x562cd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x562cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x562cd8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x562cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x562cdc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x562cdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x562ce0: 0xa6a20098  sh          $v0, 0x98($s5)
    ctx->pc = 0x562ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x562ce4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x562ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_562ce8:
    // 0x562ce8: 0x96a20098  lhu         $v0, 0x98($s5)
    ctx->pc = 0x562ce8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x562cec: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x562cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x562cf0: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x562cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x562cf4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x562cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x562cf8: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x562cf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x562cfc: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x562cfcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x562d00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x562d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x562d04: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x562D04u;
    {
        const bool branch_taken_0x562d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562D04u;
            // 0x562d08: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562d04) {
            ctx->pc = 0x562D80u;
            goto label_562d80;
        }
    }
    ctx->pc = 0x562D0Cu;
label_562d0c:
    // 0x562d0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x562d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562d10: 0xc0c6128  jal         func_3184A0
    ctx->pc = 0x562D10u;
    SET_GPR_U32(ctx, 31, 0x562D18u);
    ctx->pc = 0x562D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562D10u;
            // 0x562d14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3184A0u;
    if (runtime->hasFunction(0x3184A0u)) {
        auto targetFn = runtime->lookupFunction(0x3184A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562D18u; }
        if (ctx->pc != 0x562D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003184A0_0x3184a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562D18u; }
        if (ctx->pc != 0x562D18u) { return; }
    }
    ctx->pc = 0x562D18u;
label_562d18:
    // 0x562d18: 0x96a30098  lhu         $v1, 0x98($s5)
    ctx->pc = 0x562d18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x562d1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x562d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x562d20: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x562D20u;
    {
        const bool branch_taken_0x562d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x562d20) {
            ctx->pc = 0x562D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562D20u;
            // 0x562d24: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562D58u;
            goto label_562d58;
        }
    }
    ctx->pc = 0x562D28u;
    // 0x562d28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x562d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x562d2c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x562d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
    // 0x562d30: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x562D30u;
    SET_GPR_U32(ctx, 31, 0x562D38u);
    ctx->pc = 0x562D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562D30u;
            // 0x562d34: 0x96300010  lhu         $s0, 0x10($s1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562D38u; }
        if (ctx->pc != 0x562D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562D38u; }
        if (ctx->pc != 0x562D38u) { return; }
    }
    ctx->pc = 0x562D38u;
label_562d38:
    // 0x562d38: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x562d38u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x562d3c: 0x1010  mfhi        $v0
    ctx->pc = 0x562d3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x562d40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x562d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x562d44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x562d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x562d48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x562d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x562d4c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x562d4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x562d50: 0xa6a20098  sh          $v0, 0x98($s5)
    ctx->pc = 0x562d50u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x562d54: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x562d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_562d58:
    // 0x562d58: 0x96a20098  lhu         $v0, 0x98($s5)
    ctx->pc = 0x562d58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x562d5c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x562d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x562d60: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x562d60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x562d64: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x562d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x562d68: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x562d68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x562d6c: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x562d6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x562d70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x562d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x562d74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x562D74u;
    {
        const bool branch_taken_0x562d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562D74u;
            // 0x562d78: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562d74) {
            ctx->pc = 0x562D80u;
            goto label_562d80;
        }
    }
    ctx->pc = 0x562D7Cu;
label_562d7c:
    // 0x562d7c: 0xa6a20098  sh          $v0, 0x98($s5)
    ctx->pc = 0x562d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 152), (uint16_t)GPR_U32(ctx, 2));
label_562d80:
    // 0x562d80: 0xa2a00188  sb          $zero, 0x188($s5)
    ctx->pc = 0x562d80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 392), (uint8_t)GPR_U32(ctx, 0));
    // 0x562d84: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x562d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x562d88: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x562d88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x562d8c: 0x54620033  bnel        $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x562D8Cu;
    {
        const bool branch_taken_0x562d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x562d8c) {
            ctx->pc = 0x562D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562D8Cu;
            // 0x562d90: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562E5Cu;
            goto label_562e5c;
        }
    }
    ctx->pc = 0x562D94u;
    // 0x562d94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x562d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562d98: 0xc0c5ad0  jal         func_316B40
    ctx->pc = 0x562D98u;
    SET_GPR_U32(ctx, 31, 0x562DA0u);
    ctx->pc = 0x562D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562D98u;
            // 0x562d9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562DA0u; }
        if (ctx->pc != 0x562DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316B40_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562DA0u; }
        if (ctx->pc != 0x562DA0u) { return; }
    }
    ctx->pc = 0x562DA0u;
label_562da0:
    // 0x562da0: 0xaea2018c  sw          $v0, 0x18C($s5)
    ctx->pc = 0x562da0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 396), GPR_U32(ctx, 2));
    // 0x562da4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x562da4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562da8: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x562da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x562dac: 0x3c023f4f  lui         $v0, 0x3F4F
    ctx->pc = 0x562dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16207 << 16));
    // 0x562db0: 0x3442684c  ori         $v0, $v0, 0x684C
    ctx->pc = 0x562db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26700);
    // 0x562db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x562db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x562db8: 0xc4610de4  lwc1        $f1, 0xDE4($v1)
    ctx->pc = 0x562db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x562dbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x562dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x562dc0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x562DC0u;
    {
        const bool branch_taken_0x562dc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x562dc0) {
            ctx->pc = 0x562E04u;
            goto label_562e04;
        }
    }
    ctx->pc = 0x562DC8u;
    // 0x562dc8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x562dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x562dcc: 0x8c428b18  lw          $v0, -0x74E8($v0)
    ctx->pc = 0x562dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937368)));
    // 0x562dd0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x562DD0u;
    {
        const bool branch_taken_0x562dd0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x562dd0) {
            ctx->pc = 0x562DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562DD0u;
            // 0x562dd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562DE4u;
            goto label_562de4;
        }
    }
    ctx->pc = 0x562DD8u;
    // 0x562dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x562dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x562ddc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x562DDCu;
    {
        const bool branch_taken_0x562ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562DDCu;
            // 0x562de0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x562ddc) {
            ctx->pc = 0x562DFCu;
            goto label_562dfc;
        }
    }
    ctx->pc = 0x562DE4u;
label_562de4:
    // 0x562de4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x562de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x562de8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x562de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x562dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x562decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x562df0: 0x0  nop
    ctx->pc = 0x562df0u;
    // NOP
    // 0x562df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x562df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x562df8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x562df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_562dfc:
    // 0x562dfc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x562DFCu;
    {
        const bool branch_taken_0x562dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562DFCu;
            // 0x562e00: 0xe6a00190  swc1        $f0, 0x190($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x562dfc) {
            ctx->pc = 0x562E3Cu;
            goto label_562e3c;
        }
    }
    ctx->pc = 0x562E04u;
label_562e04:
    // 0x562e04: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x562e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x562e08: 0x8c428b20  lw          $v0, -0x74E0($v0)
    ctx->pc = 0x562e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937376)));
    // 0x562e0c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x562E0Cu;
    {
        const bool branch_taken_0x562e0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x562e0c) {
            ctx->pc = 0x562E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562E0Cu;
            // 0x562e10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562E20u;
            goto label_562e20;
        }
    }
    ctx->pc = 0x562E14u;
    // 0x562e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x562e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x562e18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x562E18u;
    {
        const bool branch_taken_0x562e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562E18u;
            // 0x562e1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x562e18) {
            ctx->pc = 0x562E38u;
            goto label_562e38;
        }
    }
    ctx->pc = 0x562E20u;
label_562e20:
    // 0x562e20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x562e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x562e24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x562e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x562e28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x562e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x562e2c: 0x0  nop
    ctx->pc = 0x562e2cu;
    // NOP
    // 0x562e30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x562e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x562e34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x562e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_562e38:
    // 0x562e38: 0xe6a00190  swc1        $f0, 0x190($s5)
    ctx->pc = 0x562e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
label_562e3c:
    // 0x562e3c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x562e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x562e40: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x562e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x562e44: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x562e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x562e48: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x562e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x562e4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x562e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x562e50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x562e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x562e54: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x562e54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x562e58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x562e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_562e5c:
    // 0x562e5c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x562E5Cu;
    SET_GPR_U32(ctx, 31, 0x562E64u);
    ctx->pc = 0x562E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562E5Cu;
            // 0x562e60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562E64u; }
        if (ctx->pc != 0x562E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562E64u; }
        if (ctx->pc != 0x562E64u) { return; }
    }
    ctx->pc = 0x562E64u;
label_562e64:
    // 0x562e64: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x562e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x562e68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x562e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x562e6c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x562e6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x562e70: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x562e70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x562e74: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x562e74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x562e78: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x562e78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x562e7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x562e7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x562e80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x562e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x562e84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x562e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x562e88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x562e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x562e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x562E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562E8Cu;
            // 0x562e90: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562E94u;
    // 0x562e94: 0x0  nop
    ctx->pc = 0x562e94u;
    // NOP
    // 0x562e98: 0x0  nop
    ctx->pc = 0x562e98u;
    // NOP
    // 0x562e9c: 0x0  nop
    ctx->pc = 0x562e9cu;
    // NOP
}
