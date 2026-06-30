#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00531B30
// Address: 0x531b30 - 0x532880
void sub_00531B30_0x531b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00531B30_0x531b30");
#endif

    switch (ctx->pc) {
        case 0x531ba4u: goto label_531ba4;
        case 0x531bb0u: goto label_531bb0;
        case 0x531bc8u: goto label_531bc8;
        case 0x531c48u: goto label_531c48;
        case 0x531c70u: goto label_531c70;
        case 0x5324c8u: goto label_5324c8;
        case 0x5324e4u: goto label_5324e4;
        case 0x5324e8u: goto label_5324e8;
        case 0x532564u: goto label_532564;
        case 0x532588u: goto label_532588;
        case 0x5325bcu: goto label_5325bc;
        case 0x5325d0u: goto label_5325d0;
        case 0x5326f8u: goto label_5326f8;
        case 0x532730u: goto label_532730;
        case 0x53273cu: goto label_53273c;
        case 0x532770u: goto label_532770;
        case 0x53277cu: goto label_53277c;
        case 0x5327a8u: goto label_5327a8;
        case 0x5327b4u: goto label_5327b4;
        case 0x532810u: goto label_532810;
        case 0x53281cu: goto label_53281c;
        default: break;
    }

    ctx->pc = 0x531b30u;

    // 0x531b30: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x531b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x531b34: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x531b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x531b38: 0xa0850006  sb          $a1, 0x6($a0)
    ctx->pc = 0x531b38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x531b3c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x531b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x531b40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x531b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x531b44: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x531b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x531b48: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x531b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x531b4c: 0x804a508  j           func_129420
    ctx->pc = 0x531B4Cu;
    ctx->pc = 0x531B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531B4Cu;
            // 0x531b50: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x531B54u;
    // 0x531b54: 0x0  nop
    ctx->pc = 0x531b54u;
    // NOP
    // 0x531b58: 0x0  nop
    ctx->pc = 0x531b58u;
    // NOP
    // 0x531b5c: 0x0  nop
    ctx->pc = 0x531b5cu;
    // NOP
    // 0x531b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x531b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x531b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x531b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x531b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x531b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x531b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x531b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x531b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x531b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x531b74: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x531B74u;
    {
        const bool branch_taken_0x531b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x531B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531B74u;
            // 0x531b78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531b74) {
            ctx->pc = 0x531BC8u;
            goto label_531bc8;
        }
    }
    ctx->pc = 0x531B7Cu;
    // 0x531b7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x531b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x531b80: 0x24426d60  addiu       $v0, $v0, 0x6D60
    ctx->pc = 0x531b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28000));
    // 0x531b84: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x531B84u;
    {
        const bool branch_taken_0x531b84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x531B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531B84u;
            // 0x531b88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531b84) {
            ctx->pc = 0x531BB0u;
            goto label_531bb0;
        }
    }
    ctx->pc = 0x531B8Cu;
    // 0x531b8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x531b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x531b90: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x531b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x531b94: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x531b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x531b98: 0x2484d060  addiu       $a0, $a0, -0x2FA0
    ctx->pc = 0x531b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955104));
    // 0x531b9c: 0xc0ad6c4  jal         func_2B5B10
    ctx->pc = 0x531B9Cu;
    SET_GPR_U32(ctx, 31, 0x531BA4u);
    ctx->pc = 0x531BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531B9Cu;
            // 0x531ba0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531BA4u; }
        if (ctx->pc != 0x531BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531BA4u; }
        if (ctx->pc != 0x531BA4u) { return; }
    }
    ctx->pc = 0x531BA4u;
label_531ba4:
    // 0x531ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x531ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x531ba8: 0xc075bf8  jal         func_1D6FE0
    ctx->pc = 0x531BA8u;
    SET_GPR_U32(ctx, 31, 0x531BB0u);
    ctx->pc = 0x531BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531BA8u;
            // 0x531bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531BB0u; }
        if (ctx->pc != 0x531BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531BB0u; }
        if (ctx->pc != 0x531BB0u) { return; }
    }
    ctx->pc = 0x531BB0u;
label_531bb0:
    // 0x531bb0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x531bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x531bb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x531bb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x531bb8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x531BB8u;
    {
        const bool branch_taken_0x531bb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x531bb8) {
            ctx->pc = 0x531BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531BB8u;
            // 0x531bbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531BCCu;
            goto label_531bcc;
        }
    }
    ctx->pc = 0x531BC0u;
    // 0x531bc0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x531BC0u;
    SET_GPR_U32(ctx, 31, 0x531BC8u);
    ctx->pc = 0x531BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531BC0u;
            // 0x531bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531BC8u; }
        if (ctx->pc != 0x531BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531BC8u; }
        if (ctx->pc != 0x531BC8u) { return; }
    }
    ctx->pc = 0x531BC8u;
label_531bc8:
    // 0x531bc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x531bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_531bcc:
    // 0x531bcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x531bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x531bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x531bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x531bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x531bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x531bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x531BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x531BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531BD8u;
            // 0x531bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x531BE0u;
    // 0x531be0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x531be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x531be4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x531be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x531be8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x531be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x531bec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x531becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x531bf0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x531bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x531bf4: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x531bf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x531bf8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x531bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x531bfc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x531bfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x531c00: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x531c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x531c04: 0x24160040  addiu       $s6, $zero, 0x40
    ctx->pc = 0x531c04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x531c08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x531c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x531c0c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x531c0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x531c10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x531c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x531c14: 0x26b402e4  addiu       $s4, $s5, 0x2E4
    ctx->pc = 0x531c14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 740));
    // 0x531c18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x531c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x531c1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x531c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x531c20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x531c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x531c24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x531c24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x531c28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x531c28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x531c2c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x531c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x531c30: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x531c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x531c34: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x531c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x531c38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x531c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531c3c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x531c3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x531c40: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x531c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x531c44: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x531c44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_531c48:
    // 0x531c48: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x531c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x531c4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x531c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531c50: 0x0  nop
    ctx->pc = 0x531c50u;
    // NOP
    // 0x531c54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x531c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x531c58: 0x4501025d  bc1t        . + 4 + (0x25D << 2)
    ctx->pc = 0x531C58u;
    {
        const bool branch_taken_0x531c58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x531c58) {
            ctx->pc = 0x5325D0u;
            goto label_5325d0;
        }
    }
    ctx->pc = 0x531C60u;
    // 0x531c60: 0x16e00011  bnez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x531C60u;
    {
        const bool branch_taken_0x531c60 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x531c60) {
            ctx->pc = 0x531CA8u;
            goto label_531ca8;
        }
    }
    ctx->pc = 0x531C68u;
    // 0x531c68: 0xc0fb994  jal         func_3EE650
    ctx->pc = 0x531C68u;
    SET_GPR_U32(ctx, 31, 0x531C70u);
    ctx->pc = 0x531C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531C68u;
            // 0x531c6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EE650u;
    if (runtime->hasFunction(0x3EE650u)) {
        auto targetFn = runtime->lookupFunction(0x3EE650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531C70u; }
        if (ctx->pc != 0x531C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EE650_0x3ee650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531C70u; }
        if (ctx->pc != 0x531C70u) { return; }
    }
    ctx->pc = 0x531C70u;
label_531c70:
    // 0x531c70: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x531c70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x531c74: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x531c74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x531c78: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x531C78u;
    {
        const bool branch_taken_0x531c78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x531C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531C78u;
            // 0x531c7c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531c78) {
            ctx->pc = 0x531C8Cu;
            goto label_531c8c;
        }
    }
    ctx->pc = 0x531C80u;
    // 0x531c80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x531c80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531c84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x531C84u;
    {
        const bool branch_taken_0x531c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531C84u;
            // 0x531c88: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x531c84) {
            ctx->pc = 0x531CA8u;
            goto label_531ca8;
        }
    }
    ctx->pc = 0x531C8Cu;
label_531c8c:
    // 0x531c8c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x531c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x531c90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x531c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x531c94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x531c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x531c98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x531c98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531c9c: 0x0  nop
    ctx->pc = 0x531c9cu;
    // NOP
    // 0x531ca0: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x531ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x531ca4: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x531ca4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_531ca8:
    // 0x531ca8: 0x9283000b  lbu         $v1, 0xB($s4)
    ctx->pc = 0x531ca8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
    // 0x531cac: 0x13c30002  beq         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x531CACu;
    {
        const bool branch_taken_0x531cac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        if (branch_taken_0x531cac) {
            ctx->pc = 0x531CB8u;
            goto label_531cb8;
        }
    }
    ctx->pc = 0x531CB4u;
    // 0x531cb4: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x531cb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_531cb8:
    // 0x531cb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x531cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x531cbc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x531cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x531cc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x531cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x531cc4: 0x0  nop
    ctx->pc = 0x531cc4u;
    // NOP
    // 0x531cc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x531cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x531ccc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x531CCCu;
    {
        const bool branch_taken_0x531ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x531ccc) {
            ctx->pc = 0x531CE0u;
            goto label_531ce0;
        }
    }
    ctx->pc = 0x531CD4u;
    // 0x531cd4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x531cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x531cd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x531CD8u;
    {
        const bool branch_taken_0x531cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531CD8u;
            // 0x531cdc: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x531cd8) {
            ctx->pc = 0x531D18u;
            goto label_531d18;
        }
    }
    ctx->pc = 0x531CE0u;
label_531ce0:
    // 0x531ce0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x531ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x531ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x531ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531ce8: 0x0  nop
    ctx->pc = 0x531ce8u;
    // NOP
    // 0x531cec: 0x46140043  div.s       $f1, $f0, $f20
    ctx->pc = 0x531cecu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[20];
    // 0x531cf0: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x531cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x531cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x531cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531cf8: 0x0  nop
    ctx->pc = 0x531cf8u;
    // NOP
    // 0x531cfc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x531cfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x531d00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x531d00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x531d04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x531D04u;
    {
        const bool branch_taken_0x531d04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x531D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531D04u;
            // 0x531d08: 0xe681000c  swc1        $f1, 0xC($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x531d04) {
            ctx->pc = 0x531D18u;
            goto label_531d18;
        }
    }
    ctx->pc = 0x531D0Cu;
    // 0x531d0c: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x531D0Cu;
    {
        const bool branch_taken_0x531d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531D0Cu;
            // 0x531d10: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x531d0c) {
            ctx->pc = 0x5325D0u;
            goto label_5325d0;
        }
    }
    ctx->pc = 0x531D14u;
    // 0x531d14: 0x0  nop
    ctx->pc = 0x531d14u;
    // NOP
label_531d18:
    // 0x531d18: 0x96870004  lhu         $a3, 0x4($s4)
    ctx->pc = 0x531d18u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x531d1c: 0x96860006  lhu         $a2, 0x6($s4)
    ctx->pc = 0x531d1cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x531d20: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x531d20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
    // 0x531d24: 0x92850008  lbu         $a1, 0x8($s4)
    ctx->pc = 0x531d24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x531d28: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x531d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x531d2c: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x531d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x531d30: 0x8288000a  lb          $t0, 0xA($s4)
    ctx->pc = 0x531d30u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x531d34: 0x248b6bf8  addiu       $t3, $a0, 0x6BF8
    ctx->pc = 0x531d34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 27640));
    // 0x531d38: 0x65100  sll         $t2, $a2, 4
    ctx->pc = 0x531d38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x531d3c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x531d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x531d40: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x531d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x531d44: 0xa46bcf30  sh          $t3, -0x30D0($v1)
    ctx->pc = 0x531d44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954800), (uint16_t)GPR_U32(ctx, 11));
    // 0x531d48: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x531d48u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x531d4c: 0x8ea302dc  lw          $v1, 0x2DC($s5)
    ctx->pc = 0x531d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 732)));
    // 0x531d50: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x531d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x531d54: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x531D54u;
    {
        const bool branch_taken_0x531d54 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x531D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531D54u;
            // 0x531d58: 0xa443cf32  sh          $v1, -0x30CE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294954802), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531d54) {
            ctx->pc = 0x531D68u;
            goto label_531d68;
        }
    }
    ctx->pc = 0x531D5Cu;
    // 0x531d5c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x531d5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531d60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x531D60u;
    {
        const bool branch_taken_0x531d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531D60u;
            // 0x531d64: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x531d60) {
            ctx->pc = 0x531D84u;
            goto label_531d84;
        }
    }
    ctx->pc = 0x531D68u;
label_531d68:
    // 0x531d68: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x531d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x531d6c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x531d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x531d70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x531d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x531d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x531d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531d78: 0x0  nop
    ctx->pc = 0x531d78u;
    // NOP
    // 0x531d7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x531d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x531d80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x531d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_531d84:
    // 0x531d84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x531d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x531d88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x531d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x531d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x531d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531d90: 0x0  nop
    ctx->pc = 0x531d90u;
    // NOP
    // 0x531d94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x531d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x531d98: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x531D98u;
    {
        const bool branch_taken_0x531d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x531d98) {
            ctx->pc = 0x531D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531D98u;
            // 0x531d9c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x531DB0u;
            goto label_531db0;
        }
    }
    ctx->pc = 0x531DA0u;
    // 0x531da0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x531da0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x531da4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x531da4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x531da8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x531DA8u;
    {
        const bool branch_taken_0x531da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531DA8u;
            // 0x531dac: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531da8) {
            ctx->pc = 0x531DC8u;
            goto label_531dc8;
        }
    }
    ctx->pc = 0x531DB0u;
label_531db0:
    // 0x531db0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x531db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x531db4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x531db4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x531db8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x531db8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x531dbc: 0x0  nop
    ctx->pc = 0x531dbcu;
    // NOP
    // 0x531dc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x531dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x531dc4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x531dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_531dc8:
    // 0x531dc8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x531dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x531dcc: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x531DCCu;
    {
        const bool branch_taken_0x531dcc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x531DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531DCCu;
            // 0x531dd0: 0xa443cf34  sh          $v1, -0x30CC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294954804), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531dcc) {
            ctx->pc = 0x531DE0u;
            goto label_531de0;
        }
    }
    ctx->pc = 0x531DD4u;
    // 0x531dd4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x531dd4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531dd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x531DD8u;
    {
        const bool branch_taken_0x531dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531DD8u;
            // 0x531ddc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x531dd8) {
            ctx->pc = 0x531DFCu;
            goto label_531dfc;
        }
    }
    ctx->pc = 0x531DE0u;
label_531de0:
    // 0x531de0: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x531de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x531de4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x531de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x531de8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x531de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x531dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x531decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531df0: 0x0  nop
    ctx->pc = 0x531df0u;
    // NOP
    // 0x531df4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x531df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x531df8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x531df8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_531dfc:
    // 0x531dfc: 0xc6a102e0  lwc1        $f1, 0x2E0($s5)
    ctx->pc = 0x531dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x531e00: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x531e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x531e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x531e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531e08: 0x0  nop
    ctx->pc = 0x531e08u;
    // NOP
    // 0x531e0c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x531e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x531e10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x531e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x531e14: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x531E14u;
    {
        const bool branch_taken_0x531e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x531e14) {
            ctx->pc = 0x531E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531E14u;
            // 0x531e18: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x531E2Cu;
            goto label_531e2c;
        }
    }
    ctx->pc = 0x531E1Cu;
    // 0x531e1c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x531e1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x531e20: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x531e20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x531e24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x531E24u;
    {
        const bool branch_taken_0x531e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531E24u;
            // 0x531e28: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531e24) {
            ctx->pc = 0x531E44u;
            goto label_531e44;
        }
    }
    ctx->pc = 0x531E2Cu;
label_531e2c:
    // 0x531e2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x531e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x531e30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x531e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x531e34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x531e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x531e38: 0x0  nop
    ctx->pc = 0x531e38u;
    // NOP
    // 0x531e3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x531e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x531e40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x531e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_531e44:
    // 0x531e44: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x531e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x531e48: 0xa443cf36  sh          $v1, -0x30CA($v0)
    ctx->pc = 0x531e48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954806), (uint16_t)GPR_U32(ctx, 3));
    // 0x531e4c: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x531e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x531e50: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x531e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x531e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x531e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531e58: 0x0  nop
    ctx->pc = 0x531e58u;
    // NOP
    // 0x531e5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x531e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x531e60: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x531E60u;
    {
        const bool branch_taken_0x531e60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x531e60) {
            ctx->pc = 0x531E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531E60u;
            // 0x531e64: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x531E78u;
            goto label_531e78;
        }
    }
    ctx->pc = 0x531E68u;
    // 0x531e68: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x531e68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x531e6c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x531e6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x531e70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x531E70u;
    {
        const bool branch_taken_0x531e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531E70u;
            // 0x531e74: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x531e70) {
            ctx->pc = 0x531E90u;
            goto label_531e90;
        }
    }
    ctx->pc = 0x531E78u;
label_531e78:
    // 0x531e78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x531e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x531e7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x531e7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x531e80: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x531e80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x531e84: 0x0  nop
    ctx->pc = 0x531e84u;
    // NOP
    // 0x531e88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x531e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x531e8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x531e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_531e90:
    // 0x531e90: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x531e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x531e94: 0xe45823  subu        $t3, $a3, $a0
    ctx->pc = 0x531e94u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x531e98: 0xa043cf38  sb          $v1, -0x30C8($v0)
    ctx->pc = 0x531e98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954808), (uint8_t)GPR_U32(ctx, 3));
    // 0x531e9c: 0x3c090063  lui         $t1, 0x63
    ctx->pc = 0x531e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
    // 0x531ea0: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x531ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x531ea4: 0x24436bf8  addiu       $v1, $v0, 0x6BF8
    ctx->pc = 0x531ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
    // 0x531ea8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x531ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x531eac: 0xa443cf3a  sh          $v1, -0x30C6($v0)
    ctx->pc = 0x531eacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954810), (uint16_t)GPR_U32(ctx, 3));
    // 0x531eb0: 0x8eaa02dc  lw          $t2, 0x2DC($s5)
    ctx->pc = 0x531eb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 732)));
    // 0x531eb4: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x531eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x531eb8: 0x26100  sll         $t4, $v0, 4
    ctx->pc = 0x531eb8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x531ebc: 0x81823  negu        $v1, $t0
    ctx->pc = 0x531ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x531ec0: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x531ec0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x531ec4: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x531ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x531ec8: 0x5600004  bltz        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x531EC8u;
    {
        const bool branch_taken_0x531ec8 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x531ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531EC8u;
            // 0x531ecc: 0xa52acf3c  sh          $t2, -0x30C4($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 4294954812), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531ec8) {
            ctx->pc = 0x531EDCu;
            goto label_531edc;
        }
    }
    ctx->pc = 0x531ED0u;
    // 0x531ed0: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x531ed0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531ed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x531ED4u;
    {
        const bool branch_taken_0x531ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531ED4u;
            // 0x531ed8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x531ed4) {
            ctx->pc = 0x531EF8u;
            goto label_531ef8;
        }
    }
    ctx->pc = 0x531EDCu;
label_531edc:
    // 0x531edc: 0xb5042  srl         $t2, $t3, 1
    ctx->pc = 0x531edcu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x531ee0: 0x31690001  andi        $t1, $t3, 0x1
    ctx->pc = 0x531ee0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x531ee4: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x531ee4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x531ee8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x531ee8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531eec: 0x0  nop
    ctx->pc = 0x531eecu;
    // NOP
    // 0x531ef0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x531ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x531ef4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x531ef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_531ef8:
    // 0x531ef8: 0x3c0a3f00  lui         $t2, 0x3F00
    ctx->pc = 0x531ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16128 << 16));
    // 0x531efc: 0x3c094f00  lui         $t1, 0x4F00
    ctx->pc = 0x531efcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20224 << 16));
    // 0x531f00: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x531f00u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531f04: 0x0  nop
    ctx->pc = 0x531f04u;
    // NOP
    // 0x531f08: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x531f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x531f0c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x531f0cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531f10: 0x0  nop
    ctx->pc = 0x531f10u;
    // NOP
    // 0x531f14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x531f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x531f18: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x531F18u;
    {
        const bool branch_taken_0x531f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x531f18) {
            ctx->pc = 0x531F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531F18u;
            // 0x531f1c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x531F30u;
            goto label_531f30;
        }
    }
    ctx->pc = 0x531F20u;
    // 0x531f20: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x531f20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x531f24: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x531f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x531f28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x531F28u;
    {
        const bool branch_taken_0x531f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531F28u;
            // 0x531f2c: 0xa4900  sll         $t1, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531f28) {
            ctx->pc = 0x531F48u;
            goto label_531f48;
        }
    }
    ctx->pc = 0x531F30u;
label_531f30:
    // 0x531f30: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x531f30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x531f34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x531f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x531f38: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x531f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x531f3c: 0x0  nop
    ctx->pc = 0x531f3cu;
    // NOP
    // 0x531f40: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x531f40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x531f44: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x531f44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_531f48:
    // 0x531f48: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x531f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x531f4c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x531f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x531f50: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x531F50u;
    {
        const bool branch_taken_0x531f50 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x531F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531F50u;
            // 0x531f54: 0xa449cf3e  sh          $t1, -0x30C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294954814), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531f50) {
            ctx->pc = 0x531F64u;
            goto label_531f64;
        }
    }
    ctx->pc = 0x531F58u;
    // 0x531f58: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x531f58u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531f5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x531F5Cu;
    {
        const bool branch_taken_0x531f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531F5Cu;
            // 0x531f60: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x531f5c) {
            ctx->pc = 0x531F80u;
            goto label_531f80;
        }
    }
    ctx->pc = 0x531F64u;
label_531f64:
    // 0x531f64: 0xa4842  srl         $t1, $t2, 1
    ctx->pc = 0x531f64u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x531f68: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x531f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x531f6c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x531f6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x531f70: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x531f70u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531f74: 0x0  nop
    ctx->pc = 0x531f74u;
    // NOP
    // 0x531f78: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x531f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x531f7c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x531f7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_531f80:
    // 0x531f80: 0xc6a102e0  lwc1        $f1, 0x2E0($s5)
    ctx->pc = 0x531f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x531f84: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x531f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x531f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x531f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x531f8c: 0x0  nop
    ctx->pc = 0x531f8cu;
    // NOP
    // 0x531f90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x531f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x531f94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x531f94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x531f98: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x531F98u;
    {
        const bool branch_taken_0x531f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x531f98) {
            ctx->pc = 0x531F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531F98u;
            // 0x531f9c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x531FB0u;
            goto label_531fb0;
        }
    }
    ctx->pc = 0x531FA0u;
    // 0x531fa0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x531fa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x531fa4: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x531fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x531fa8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x531FA8u;
    {
        const bool branch_taken_0x531fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531FA8u;
            // 0x531fac: 0x94900  sll         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531fa8) {
            ctx->pc = 0x531FC8u;
            goto label_531fc8;
        }
    }
    ctx->pc = 0x531FB0u;
label_531fb0:
    // 0x531fb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x531fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x531fb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x531fb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x531fb8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x531fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x531fbc: 0x0  nop
    ctx->pc = 0x531fbcu;
    // NOP
    // 0x531fc0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x531fc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x531fc4: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x531fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_531fc8:
    // 0x531fc8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x531fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x531fcc: 0xa449cf40  sh          $t1, -0x30C0($v0)
    ctx->pc = 0x531fccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954816), (uint16_t)GPR_U32(ctx, 9));
    // 0x531fd0: 0xe44821  addu        $t1, $a3, $a0
    ctx->pc = 0x531fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x531fd4: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x531fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x531fd8: 0x1095021  addu        $t2, $t0, $t1
    ctx->pc = 0x531fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x531fdc: 0x24496bf8  addiu       $t1, $v0, 0x6BF8
    ctx->pc = 0x531fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
    // 0x531fe0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x531fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x531fe4: 0xa449cf44  sh          $t1, -0x30BC($v0)
    ctx->pc = 0x531fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954820), (uint16_t)GPR_U32(ctx, 9));
    // 0x531fe8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x531fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x531fec: 0x9449cf3c  lhu         $t1, -0x30C4($v0)
    ctx->pc = 0x531fecu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954812)));
    // 0x531ff0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x531ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x531ff4: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x531FF4u;
    {
        const bool branch_taken_0x531ff4 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x531FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531FF4u;
            // 0x531ff8: 0xa449cf46  sh          $t1, -0x30BA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294954822), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531ff4) {
            ctx->pc = 0x532008u;
            goto label_532008;
        }
    }
    ctx->pc = 0x531FFCu;
    // 0x531ffc: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x531ffcu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x532000: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x532000u;
    {
        const bool branch_taken_0x532000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532000u;
            // 0x532004: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x532000) {
            ctx->pc = 0x532024u;
            goto label_532024;
        }
    }
    ctx->pc = 0x532008u;
label_532008:
    // 0x532008: 0xa4842  srl         $t1, $t2, 1
    ctx->pc = 0x532008u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x53200c: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x53200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x532010: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x532010u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x532014: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x532014u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x532018: 0x0  nop
    ctx->pc = 0x532018u;
    // NOP
    // 0x53201c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x53201cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x532020: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x532020u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_532024:
    // 0x532024: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x532024u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
    // 0x532028: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x532028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x53202c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x53202cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x532030: 0x0  nop
    ctx->pc = 0x532030u;
    // NOP
    // 0x532034: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x532034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x532038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x532038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x53203c: 0x0  nop
    ctx->pc = 0x53203cu;
    // NOP
    // 0x532040: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x532040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x532044: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x532044u;
    {
        const bool branch_taken_0x532044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x532044) {
            ctx->pc = 0x532048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532044u;
            // 0x532048: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x53205Cu;
            goto label_53205c;
        }
    }
    ctx->pc = 0x53204Cu;
    // 0x53204c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x53204cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x532050: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x532050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x532054: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x532054u;
    {
        const bool branch_taken_0x532054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532054u;
            // 0x532058: 0x94900  sll         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532054) {
            ctx->pc = 0x532074u;
            goto label_532074;
        }
    }
    ctx->pc = 0x53205Cu;
label_53205c:
    // 0x53205c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x53205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x532060: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x532060u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x532064: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x532064u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x532068: 0x0  nop
    ctx->pc = 0x532068u;
    // NOP
    // 0x53206c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x53206cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x532070: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x532070u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_532074:
    // 0x532074: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532078: 0xa449cf48  sh          $t1, -0x30B8($v0)
    ctx->pc = 0x532078u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954824), (uint16_t)GPR_U32(ctx, 9));
    // 0x53207c: 0xe55821  addu        $t3, $a3, $a1
    ctx->pc = 0x53207cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x532080: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532084: 0xb5100  sll         $t2, $t3, 4
    ctx->pc = 0x532084u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x532088: 0x944ccf40  lhu         $t4, -0x30C0($v0)
    ctx->pc = 0x532088u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954816)));
    // 0x53208c: 0x3c090063  lui         $t1, 0x63
    ctx->pc = 0x53208cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
    // 0x532090: 0x10b5821  addu        $t3, $t0, $t3
    ctx->pc = 0x532090u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x532094: 0xa52ccf4a  sh          $t4, -0x30B6($t1)
    ctx->pc = 0x532094u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294954826), (uint16_t)GPR_U32(ctx, 12));
    // 0x532098: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x53209c: 0x25496bf8  addiu       $t1, $t2, 0x6BF8
    ctx->pc = 0x53209cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 27640));
    // 0x5320a0: 0xa449cf4e  sh          $t1, -0x30B2($v0)
    ctx->pc = 0x5320a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954830), (uint16_t)GPR_U32(ctx, 9));
    // 0x5320a4: 0x8eaa02dc  lw          $t2, 0x2DC($s5)
    ctx->pc = 0x5320a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 732)));
    // 0x5320a8: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x5320a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x5320ac: 0x26100  sll         $t4, $v0, 4
    ctx->pc = 0x5320acu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x5320b0: 0x3c090063  lui         $t1, 0x63
    ctx->pc = 0x5320b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
    // 0x5320b4: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x5320b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x5320b8: 0x5600004  bltz        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x5320B8u;
    {
        const bool branch_taken_0x5320b8 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x5320BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5320B8u;
            // 0x5320bc: 0xa52acf50  sh          $t2, -0x30B0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 4294954832), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5320b8) {
            ctx->pc = 0x5320CCu;
            goto label_5320cc;
        }
    }
    ctx->pc = 0x5320C0u;
    // 0x5320c0: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x5320c0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5320c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5320C4u;
    {
        const bool branch_taken_0x5320c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5320C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5320C4u;
            // 0x5320c8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5320c4) {
            ctx->pc = 0x5320E8u;
            goto label_5320e8;
        }
    }
    ctx->pc = 0x5320CCu;
label_5320cc:
    // 0x5320cc: 0xb5042  srl         $t2, $t3, 1
    ctx->pc = 0x5320ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x5320d0: 0x31690001  andi        $t1, $t3, 0x1
    ctx->pc = 0x5320d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x5320d4: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x5320d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x5320d8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x5320d8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5320dc: 0x0  nop
    ctx->pc = 0x5320dcu;
    // NOP
    // 0x5320e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5320e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x5320e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x5320e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_5320e8:
    // 0x5320e8: 0x3c0a3f00  lui         $t2, 0x3F00
    ctx->pc = 0x5320e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16128 << 16));
    // 0x5320ec: 0x3c094f00  lui         $t1, 0x4F00
    ctx->pc = 0x5320ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20224 << 16));
    // 0x5320f0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x5320f0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5320f4: 0x0  nop
    ctx->pc = 0x5320f4u;
    // NOP
    // 0x5320f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x5320f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5320fc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x5320fcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x532100: 0x0  nop
    ctx->pc = 0x532100u;
    // NOP
    // 0x532104: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x532104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x532108: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x532108u;
    {
        const bool branch_taken_0x532108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x532108) {
            ctx->pc = 0x53210Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532108u;
            // 0x53210c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x532120u;
            goto label_532120;
        }
    }
    ctx->pc = 0x532110u;
    // 0x532110: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x532110u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x532114: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x532114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x532118: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x532118u;
    {
        const bool branch_taken_0x532118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53211Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532118u;
            // 0x53211c: 0xa4900  sll         $t1, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532118) {
            ctx->pc = 0x532138u;
            goto label_532138;
        }
    }
    ctx->pc = 0x532120u;
label_532120:
    // 0x532120: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x532120u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x532124: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x532124u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x532128: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x532128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x53212c: 0x0  nop
    ctx->pc = 0x53212cu;
    // NOP
    // 0x532130: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x532130u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x532134: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x532134u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_532138:
    // 0x532138: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x532138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x53213c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532140: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x532140u;
    {
        const bool branch_taken_0x532140 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x532144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532140u;
            // 0x532144: 0xa449cf52  sh          $t1, -0x30AE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294954834), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532140) {
            ctx->pc = 0x532154u;
            goto label_532154;
        }
    }
    ctx->pc = 0x532148u;
    // 0x532148: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x532148u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x53214c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x53214Cu;
    {
        const bool branch_taken_0x53214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53214Cu;
            // 0x532150: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53214c) {
            ctx->pc = 0x532170u;
            goto label_532170;
        }
    }
    ctx->pc = 0x532154u;
label_532154:
    // 0x532154: 0xa4842  srl         $t1, $t2, 1
    ctx->pc = 0x532154u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x532158: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x532158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x53215c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x53215cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x532160: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x532160u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x532164: 0x0  nop
    ctx->pc = 0x532164u;
    // NOP
    // 0x532168: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x532168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x53216c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x53216cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_532170:
    // 0x532170: 0xc6a102e0  lwc1        $f1, 0x2E0($s5)
    ctx->pc = 0x532170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x532174: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x532174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x532178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x532178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x53217c: 0x0  nop
    ctx->pc = 0x53217cu;
    // NOP
    // 0x532180: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x532180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x532184: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x532184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x532188: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x532188u;
    {
        const bool branch_taken_0x532188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x532188) {
            ctx->pc = 0x53218Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532188u;
            // 0x53218c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5321A0u;
            goto label_5321a0;
        }
    }
    ctx->pc = 0x532190u;
    // 0x532190: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x532190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x532194: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x532194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x532198: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x532198u;
    {
        const bool branch_taken_0x532198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532198u;
            // 0x53219c: 0x95100  sll         $t2, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532198) {
            ctx->pc = 0x5321B8u;
            goto label_5321b8;
        }
    }
    ctx->pc = 0x5321A0u;
label_5321a0:
    // 0x5321a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x5321a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x5321a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5321a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5321a8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x5321a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x5321ac: 0x0  nop
    ctx->pc = 0x5321acu;
    // NOP
    // 0x5321b0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x5321b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x5321b4: 0x95100  sll         $t2, $t1, 4
    ctx->pc = 0x5321b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_5321b8:
    // 0x5321b8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5321b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5321bc: 0xc44821  addu        $t1, $a2, $a0
    ctx->pc = 0x5321bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x5321c0: 0x944dcf4e  lhu         $t5, -0x30B2($v0)
    ctx->pc = 0x5321c0u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954830)));
    // 0x5321c4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x5321c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x5321c8: 0x96100  sll         $t4, $t1, 4
    ctx->pc = 0x5321c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x5321cc: 0xa48acf54  sh          $t2, -0x30AC($a0)
    ctx->pc = 0x5321ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294954836), (uint16_t)GPR_U32(ctx, 10));
    // 0x5321d0: 0x1095821  addu        $t3, $t0, $t1
    ctx->pc = 0x5321d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x5321d4: 0x3c0a0063  lui         $t2, 0x63
    ctx->pc = 0x5321d4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)99 << 16));
    // 0x5321d8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x5321d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x5321dc: 0xa54dcf58  sh          $t5, -0x30A8($t2)
    ctx->pc = 0x5321dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4294954840), (uint16_t)GPR_U32(ctx, 13));
    // 0x5321e0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5321e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5321e4: 0x9484cf52  lhu         $a0, -0x30AE($a0)
    ctx->pc = 0x5321e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294954834)));
    // 0x5321e8: 0x3c090063  lui         $t1, 0x63
    ctx->pc = 0x5321e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
    // 0x5321ec: 0x8eaa02dc  lw          $t2, 0x2DC($s5)
    ctx->pc = 0x5321ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 732)));
    // 0x5321f0: 0xa444cf5c  sh          $a0, -0x30A4($v0)
    ctx->pc = 0x5321f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954844), (uint16_t)GPR_U32(ctx, 4));
    // 0x5321f4: 0x14c1021  addu        $v0, $t2, $t4
    ctx->pc = 0x5321f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x5321f8: 0x5600004  bltz        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x5321F8u;
    {
        const bool branch_taken_0x5321f8 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x5321FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5321F8u;
            // 0x5321fc: 0xa522cf5a  sh          $v0, -0x30A6($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 4294954842), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5321f8) {
            ctx->pc = 0x53220Cu;
            goto label_53220c;
        }
    }
    ctx->pc = 0x532200u;
    // 0x532200: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x532200u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x532204: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x532204u;
    {
        const bool branch_taken_0x532204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532204u;
            // 0x532208: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x532204) {
            ctx->pc = 0x532228u;
            goto label_532228;
        }
    }
    ctx->pc = 0x53220Cu;
label_53220c:
    // 0x53220c: 0xb2042  srl         $a0, $t3, 1
    ctx->pc = 0x53220cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x532210: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x532210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x532214: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x532214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x532218: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x532218u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x53221c: 0x0  nop
    ctx->pc = 0x53221cu;
    // NOP
    // 0x532220: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x532220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x532224: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x532224u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_532228:
    // 0x532228: 0xc6a102e0  lwc1        $f1, 0x2E0($s5)
    ctx->pc = 0x532228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x53222c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x53222cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x532230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x532230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x532234: 0x0  nop
    ctx->pc = 0x532234u;
    // NOP
    // 0x532238: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x532238u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x53223c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x53223cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x532240: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x532240u;
    {
        const bool branch_taken_0x532240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x532240) {
            ctx->pc = 0x532244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532240u;
            // 0x532244: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x532258u;
            goto label_532258;
        }
    }
    ctx->pc = 0x532248u;
    // 0x532248: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x532248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x53224c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x53224cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x532250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x532250u;
    {
        const bool branch_taken_0x532250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532250u;
            // 0x532254: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532250) {
            ctx->pc = 0x532270u;
            goto label_532270;
        }
    }
    ctx->pc = 0x532258u;
label_532258:
    // 0x532258: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x532258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x53225c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x53225cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x532260: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x532260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x532264: 0x0  nop
    ctx->pc = 0x532264u;
    // NOP
    // 0x532268: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x532268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x53226c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x53226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_532270:
    // 0x532270: 0x45900  sll         $t3, $a0, 4
    ctx->pc = 0x532270u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x532274: 0x1024821  addu        $t1, $t0, $v0
    ctx->pc = 0x532274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x532278: 0x25100  sll         $t2, $v0, 4
    ctx->pc = 0x532278u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x53227c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x53227cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x532280: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532284: 0xa48bcf5e  sh          $t3, -0x30A2($a0)
    ctx->pc = 0x532284u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294954846), (uint16_t)GPR_U32(ctx, 11));
    // 0x532288: 0x3c080063  lui         $t0, 0x63
    ctx->pc = 0x532288u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)99 << 16));
    // 0x53228c: 0x944bcf44  lhu         $t3, -0x30BC($v0)
    ctx->pc = 0x53228cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954820)));
    // 0x532290: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x532290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x532294: 0x9484cf48  lhu         $a0, -0x30B8($a0)
    ctx->pc = 0x532294u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294954824)));
    // 0x532298: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x532298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x53229c: 0xa50bcf62  sh          $t3, -0x309E($t0)
    ctx->pc = 0x53229cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294954850), (uint16_t)GPR_U32(ctx, 11));
    // 0x5322a0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5322a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5322a4: 0x8ea802dc  lw          $t0, 0x2DC($s5)
    ctx->pc = 0x5322a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 732)));
    // 0x5322a8: 0xa444cf66  sh          $a0, -0x309A($v0)
    ctx->pc = 0x5322a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954854), (uint16_t)GPR_U32(ctx, 4));
    // 0x5322ac: 0x10a1021  addu        $v0, $t0, $t2
    ctx->pc = 0x5322acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x5322b0: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5322B0u;
    {
        const bool branch_taken_0x5322b0 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x5322B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5322B0u;
            // 0x5322b4: 0xa4c2cf64  sh          $v0, -0x309C($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4294954852), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5322b0) {
            ctx->pc = 0x5322C4u;
            goto label_5322c4;
        }
    }
    ctx->pc = 0x5322B8u;
    // 0x5322b8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x5322b8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5322bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5322BCu;
    {
        const bool branch_taken_0x5322bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5322C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5322BCu;
            // 0x5322c0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5322bc) {
            ctx->pc = 0x5322E0u;
            goto label_5322e0;
        }
    }
    ctx->pc = 0x5322C4u;
label_5322c4:
    // 0x5322c4: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x5322c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x5322c8: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x5322c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x5322cc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x5322ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x5322d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5322d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5322d4: 0x0  nop
    ctx->pc = 0x5322d4u;
    // NOP
    // 0x5322d8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x5322d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x5322dc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x5322dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_5322e0:
    // 0x5322e0: 0xc6a102e0  lwc1        $f1, 0x2E0($s5)
    ctx->pc = 0x5322e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5322e4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x5322e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x5322e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5322e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5322ec: 0x0  nop
    ctx->pc = 0x5322ecu;
    // NOP
    // 0x5322f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x5322f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x5322f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5322f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5322f8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x5322F8u;
    {
        const bool branch_taken_0x5322f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5322f8) {
            ctx->pc = 0x5322FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5322F8u;
            // 0x5322fc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x532310u;
            goto label_532310;
        }
    }
    ctx->pc = 0x532300u;
    // 0x532300: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x532300u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x532304: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x532304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x532308: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x532308u;
    {
        const bool branch_taken_0x532308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532308u;
            // 0x53230c: 0xe51023  subu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532308) {
            ctx->pc = 0x532328u;
            goto label_532328;
        }
    }
    ctx->pc = 0x532310u;
label_532310:
    // 0x532310: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x532310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x532314: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x532314u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x532318: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x532318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x53231c: 0x0  nop
    ctx->pc = 0x53231cu;
    // NOP
    // 0x532320: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x532320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x532324: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x532324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_532328:
    // 0x532328: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x532328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x53232c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x53232cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x532330: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x532330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x532334: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x532338: 0x24466bf8  addiu       $a2, $v0, 0x6BF8
    ctx->pc = 0x532338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
    // 0x53233c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532340: 0xa444cf68  sh          $a0, -0x3098($v0)
    ctx->pc = 0x532340u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954856), (uint16_t)GPR_U32(ctx, 4));
    // 0x532344: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532348: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x532348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x53234c: 0x9448cf3a  lhu         $t0, -0x30C6($v0)
    ctx->pc = 0x53234cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954810)));
    // 0x532350: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532354: 0xa468cf6c  sh          $t0, -0x3094($v1)
    ctx->pc = 0x532354u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954860), (uint16_t)GPR_U32(ctx, 8));
    // 0x532358: 0x9447cf64  lhu         $a3, -0x309C($v0)
    ctx->pc = 0x532358u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954852)));
    // 0x53235c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53235cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x532360: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532364: 0xa487cf6e  sh          $a3, -0x3092($a0)
    ctx->pc = 0x532364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294954862), (uint16_t)GPR_U32(ctx, 7));
    // 0x532368: 0x9448cf3e  lhu         $t0, -0x30C2($v0)
    ctx->pc = 0x532368u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954814)));
    // 0x53236c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x53236cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x532370: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532374: 0xa468cf70  sh          $t0, -0x3090($v1)
    ctx->pc = 0x532374u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954864), (uint16_t)GPR_U32(ctx, 8));
    // 0x532378: 0x9447cf68  lhu         $a3, -0x3098($v0)
    ctx->pc = 0x532378u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954856)));
    // 0x53237c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53237cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x532380: 0x9463cf5a  lhu         $v1, -0x30A6($v1)
    ctx->pc = 0x532380u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294954842)));
    // 0x532384: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532388: 0xa487cf72  sh          $a3, -0x308E($a0)
    ctx->pc = 0x532388u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294954866), (uint16_t)GPR_U32(ctx, 7));
    // 0x53238c: 0xa446cf76  sh          $a2, -0x308A($v0)
    ctx->pc = 0x53238cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954870), (uint16_t)GPR_U32(ctx, 6));
    // 0x532390: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532394: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x532394u;
    {
        const bool branch_taken_0x532394 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x532398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532394u;
            // 0x532398: 0xa443cf78  sh          $v1, -0x3088($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294954872), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532394) {
            ctx->pc = 0x5323A8u;
            goto label_5323a8;
        }
    }
    ctx->pc = 0x53239Cu;
    // 0x53239c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x53239cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5323a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5323A0u;
    {
        const bool branch_taken_0x5323a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5323A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5323A0u;
            // 0x5323a4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5323a0) {
            ctx->pc = 0x5323C4u;
            goto label_5323c4;
        }
    }
    ctx->pc = 0x5323A8u;
label_5323a8:
    // 0x5323a8: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x5323a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x5323ac: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x5323acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x5323b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5323b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5323b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5323b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5323b8: 0x0  nop
    ctx->pc = 0x5323b8u;
    // NOP
    // 0x5323bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5323bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x5323c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x5323c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_5323c4:
    // 0x5323c4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x5323c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x5323c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x5323c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x5323cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5323ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5323d0: 0x0  nop
    ctx->pc = 0x5323d0u;
    // NOP
    // 0x5323d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x5323d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5323d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5323d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5323dc: 0x0  nop
    ctx->pc = 0x5323dcu;
    // NOP
    // 0x5323e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5323e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5323e4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x5323E4u;
    {
        const bool branch_taken_0x5323e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5323e4) {
            ctx->pc = 0x5323E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5323E4u;
            // 0x5323e8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5323FCu;
            goto label_5323fc;
        }
    }
    ctx->pc = 0x5323ECu;
    // 0x5323ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5323ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5323f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x5323f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x5323f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5323F4u;
    {
        const bool branch_taken_0x5323f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5323F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5323F4u;
            // 0x5323f8: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5323f4) {
            ctx->pc = 0x532414u;
            goto label_532414;
        }
    }
    ctx->pc = 0x5323FCu;
label_5323fc:
    // 0x5323fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x5323fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x532400: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x532400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x532404: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x532404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x532408: 0x0  nop
    ctx->pc = 0x532408u;
    // NOP
    // 0x53240c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x53240cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x532410: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x532410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_532414:
    // 0x532414: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532418: 0xa443cf7a  sh          $v1, -0x3086($v0)
    ctx->pc = 0x532418u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954874), (uint16_t)GPR_U32(ctx, 3));
    // 0x53241c: 0x3c130063  lui         $s3, 0x63
    ctx->pc = 0x53241cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)99 << 16));
    // 0x532420: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532424: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x532424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x532428: 0x9445cf5e  lhu         $a1, -0x30A2($v0)
    ctx->pc = 0x532428u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954846)));
    // 0x53242c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53242cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x532430: 0x2673cf30  addiu       $s3, $s3, -0x30D0
    ctx->pc = 0x532430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954800));
    // 0x532434: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x532434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x532438: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x53243c: 0xa485cf7c  sh          $a1, -0x3084($a0)
    ctx->pc = 0x53243cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294954876), (uint16_t)GPR_U32(ctx, 5));
    // 0x532440: 0x9446cf76  lhu         $a2, -0x308A($v0)
    ctx->pc = 0x532440u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954870)));
    // 0x532444: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x532444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x532448: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x53244c: 0xa466cf80  sh          $a2, -0x3080($v1)
    ctx->pc = 0x53244cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954880), (uint16_t)GPR_U32(ctx, 6));
    // 0x532450: 0x9445cf50  lhu         $a1, -0x30B0($v0)
    ctx->pc = 0x532450u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954832)));
    // 0x532454: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x532458: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x53245c: 0xa485cf82  sh          $a1, -0x307E($a0)
    ctx->pc = 0x53245cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294954882), (uint16_t)GPR_U32(ctx, 5));
    // 0x532460: 0x9446cf7a  lhu         $a2, -0x3086($v0)
    ctx->pc = 0x532460u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954874)));
    // 0x532464: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x532464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x532468: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x53246c: 0xa466cf84  sh          $a2, -0x307C($v1)
    ctx->pc = 0x53246cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954884), (uint16_t)GPR_U32(ctx, 6));
    // 0x532470: 0x9445cf54  lhu         $a1, -0x30AC($v0)
    ctx->pc = 0x532470u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954836)));
    // 0x532474: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x532478: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x53247c: 0xa485cf86  sh          $a1, -0x307A($a0)
    ctx->pc = 0x53247cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294954886), (uint16_t)GPR_U32(ctx, 5));
    // 0x532480: 0x9446cf3a  lhu         $a2, -0x30C6($v0)
    ctx->pc = 0x532480u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954810)));
    // 0x532484: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x532484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x532488: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x532488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x53248c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53248cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x532490: 0xa466cf8a  sh          $a2, -0x3076($v1)
    ctx->pc = 0x532490u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954890), (uint16_t)GPR_U32(ctx, 6));
    // 0x532494: 0x9447cf3c  lhu         $a3, -0x30C4($v0)
    ctx->pc = 0x532494u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954812)));
    // 0x532498: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x53249c: 0x9463cf40  lhu         $v1, -0x30C0($v1)
    ctx->pc = 0x53249cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294954816)));
    // 0x5324a0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5324a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5324a4: 0xa4a7cf8c  sh          $a3, -0x3074($a1)
    ctx->pc = 0x5324a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294954892), (uint16_t)GPR_U32(ctx, 7));
    // 0x5324a8: 0x9446cf3e  lhu         $a2, -0x30C2($v0)
    ctx->pc = 0x5324a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954814)));
    // 0x5324ac: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x5324acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x5324b0: 0xa486cf8e  sh          $a2, -0x3072($a0)
    ctx->pc = 0x5324b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294954894), (uint16_t)GPR_U32(ctx, 6));
    // 0x5324b4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5324b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5324b8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x5324b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x5324bc: 0xa443cf90  sh          $v1, -0x3070($v0)
    ctx->pc = 0x5324bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954896), (uint16_t)GPR_U32(ctx, 3));
    // 0x5324c0: 0xc05750c  jal         func_15D430
    ctx->pc = 0x5324C0u;
    SET_GPR_U32(ctx, 31, 0x5324C8u);
    ctx->pc = 0x5324C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5324C0u;
            // 0x5324c4: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5324C8u; }
        if (ctx->pc != 0x5324C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5324C8u; }
        if (ctx->pc != 0x5324C8u) { return; }
    }
    ctx->pc = 0x5324C8u;
label_5324c8:
    // 0x5324c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x5324c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5324cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5324ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5324d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5324d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5324d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5324d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5324d8: 0x2407035d  addiu       $a3, $zero, 0x35D
    ctx->pc = 0x5324d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 861));
    // 0x5324dc: 0xc057540  jal         func_15D500
    ctx->pc = 0x5324DCu;
    SET_GPR_U32(ctx, 31, 0x5324E4u);
    ctx->pc = 0x5324E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5324DCu;
            // 0x5324e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5324E4u; }
        if (ctx->pc != 0x5324E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5324E4u; }
        if (ctx->pc != 0x5324E4u) { return; }
    }
    ctx->pc = 0x5324E4u;
label_5324e4:
    // 0x5324e4: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x5324e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5324e8:
    // 0x5324e8: 0x92820009  lbu         $v0, 0x9($s4)
    ctx->pc = 0x5324e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
    // 0x5324ec: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x5324ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x5324f0: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x5324F0u;
    {
        const bool branch_taken_0x5324f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5324f0) {
            ctx->pc = 0x5324F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5324F0u;
            // 0x5324f4: 0x3c029547  lui         $v0, 0x9547 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38215 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532510u;
            goto label_532510;
        }
    }
    ctx->pc = 0x5324F8u;
    // 0x5324f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x5324f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x5324fc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5324fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x532500: 0x2442d030  addiu       $v0, $v0, -0x2FD0
    ctx->pc = 0x532500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955056));
    // 0x532504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x532504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x532508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x532508u;
    {
        const bool branch_taken_0x532508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532508u;
            // 0x53250c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532508) {
            ctx->pc = 0x532514u;
            goto label_532514;
        }
    }
    ctx->pc = 0x532510u;
label_532510:
    // 0x532510: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x532510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_532514:
    // 0x532514: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x532514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x532518: 0x61602  srl         $v0, $a2, 24
    ctx->pc = 0x532518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x53251c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x53251cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x532520: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x532520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x532524: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x532524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x532528: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x532528u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x53252c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x53252cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x532530: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x532530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x532534: 0x92630008  lbu         $v1, 0x8($s3)
    ctx->pc = 0x532534u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x532538: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x532538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x53253c: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x53253cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x532540: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x532540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x532544: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x532544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x532548: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x532548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x53254c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x53254cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x532550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x532550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x532554: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x532554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x532558: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x532558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x53255c: 0xc057540  jal         func_15D500
    ctx->pc = 0x53255Cu;
    SET_GPR_U32(ctx, 31, 0x532564u);
    ctx->pc = 0x532560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53255Cu;
            // 0x532560: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532564u; }
        if (ctx->pc != 0x532564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532564u; }
        if (ctx->pc != 0x532564u) { return; }
    }
    ctx->pc = 0x532564u;
label_532564:
    // 0x532564: 0x96620006  lhu         $v0, 0x6($s3)
    ctx->pc = 0x532564u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x532568: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x532568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53256c: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x53256cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x532570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x532570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x532574: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x532574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x532578: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x532578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x53257c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x53257cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x532580: 0xc057540  jal         func_15D500
    ctx->pc = 0x532580u;
    SET_GPR_U32(ctx, 31, 0x532588u);
    ctx->pc = 0x532584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x532580u;
            // 0x532584: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532588u; }
        if (ctx->pc != 0x532588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532588u; }
        if (ctx->pc != 0x532588u) { return; }
    }
    ctx->pc = 0x532588u;
label_532588:
    // 0x532588: 0x96670002  lhu         $a3, 0x2($s3)
    ctx->pc = 0x532588u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x53258c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x53258cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x532590: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x532590u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x532594: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x532594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x532598: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x532598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53259c: 0x92660009  lbu         $a2, 0x9($s3)
    ctx->pc = 0x53259cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x5325a0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x5325a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x5325a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x5325a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x5325a8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x5325a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x5325ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5325acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5325b0: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x5325b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5325b4: 0xc057540  jal         func_15D500
    ctx->pc = 0x5325B4u;
    SET_GPR_U32(ctx, 31, 0x5325BCu);
    ctx->pc = 0x5325B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5325B4u;
            // 0x5325b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5325BCu; }
        if (ctx->pc != 0x5325BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5325BCu; }
        if (ctx->pc != 0x5325BCu) { return; }
    }
    ctx->pc = 0x5325BCu;
label_5325bc:
    // 0x5325bc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x5325bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x5325c0: 0x1600ffc9  bnez        $s0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x5325C0u;
    {
        const bool branch_taken_0x5325c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x5325C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5325C0u;
            // 0x5325c4: 0x2673000a  addiu       $s3, $s3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5325c0) {
            ctx->pc = 0x5324E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5324e8;
        }
    }
    ctx->pc = 0x5325C8u;
    // 0x5325c8: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x5325C8u;
    SET_GPR_U32(ctx, 31, 0x5325D0u);
    ctx->pc = 0x5325CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5325C8u;
            // 0x5325cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5325D0u; }
        if (ctx->pc != 0x5325D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5325D0u; }
        if (ctx->pc != 0x5325D0u) { return; }
    }
    ctx->pc = 0x5325D0u;
label_5325d0:
    // 0x5325d0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x5325d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x5325d4: 0x16c0fd9c  bnez        $s6, . + 4 + (-0x264 << 2)
    ctx->pc = 0x5325D4u;
    {
        const bool branch_taken_0x5325d4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x5325D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5325D4u;
            // 0x5325d8: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5325d4) {
            ctx->pc = 0x531C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_531c48;
        }
    }
    ctx->pc = 0x5325DCu;
    // 0x5325dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x5325dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x5325e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5325e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x5325e4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x5325e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x5325e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5325e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5325ec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x5325ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x5325f0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x5325f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x5325f4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x5325f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x5325f8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5325f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5325fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5325fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x532600: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x532600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x532604: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x532604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x532608: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x532608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53260c: 0x3e00008  jr          $ra
    ctx->pc = 0x53260Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x532610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53260Cu;
            // 0x532610: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x532614u;
    // 0x532614: 0x0  nop
    ctx->pc = 0x532614u;
    // NOP
    // 0x532618: 0x0  nop
    ctx->pc = 0x532618u;
    // NOP
    // 0x53261c: 0x0  nop
    ctx->pc = 0x53261cu;
    // NOP
    // 0x532620: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x532620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x532624: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x532624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x532628: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x532628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x53262c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x53262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x532630: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x532630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x532634: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x532634u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x532638: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x532638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x53263c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x53263cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x532640: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x532640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x532644: 0x172880  sll         $a1, $s7, 2
    ctx->pc = 0x532644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x532648: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x532648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x53264c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x53264cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x532650: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x532650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x532654: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x532654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x532658: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x532658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x53265c: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x53265cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x532660: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x532660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x532664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x532664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x532668: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x532668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x53266c: 0xafa7011c  sw          $a3, 0x11C($sp)
    ctx->pc = 0x53266cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 7));
    // 0x532670: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x532670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x532674: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x532674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x532678: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x532678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x53267c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x53267cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x532680: 0x8ca50050  lw          $a1, 0x50($a1)
    ctx->pc = 0x532680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x532684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x532684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x532688: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x532688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x53268c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x53268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x532690: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x532690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x532694: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x532694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x532698: 0x80c4007a  lb          $a0, 0x7A($a2)
    ctx->pc = 0x532698u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
    // 0x53269c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x53269cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5326a0: 0x0  nop
    ctx->pc = 0x5326a0u;
    // NOP
    // 0x5326a4: 0x4601601a  mula.s      $f12, $f1
    ctx->pc = 0x5326a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x5326a8: 0x2c830003  sltiu       $v1, $a0, 0x3
    ctx->pc = 0x5326a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x5326ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x5326acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x5326b0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x5326b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x5326b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5326b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x5326b8: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x5326b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x5326bc: 0x4601051d  msub.s      $f20, $f0, $f1
    ctx->pc = 0x5326bcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x5326c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x5326c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5326c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x5326c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x5326c8: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x5326c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x5326cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x5326ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x5326d0: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x5326d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x5326d4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x5326d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x5326d8: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x5326d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5326dc: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x5326dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x5326e0: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x5326e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x5326e4: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x5326e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x5326e8: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x5326e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x5326ec: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x5326ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5326f0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x5326f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x5326f4: 0x92a302d4  lbu         $v1, 0x2D4($s5)
    ctx->pc = 0x5326f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 724)));
label_5326f8:
    // 0x5326f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5326f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5326fc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x5326fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x532700: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x532700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x532704: 0xa2a402d4  sb          $a0, 0x2D4($s5)
    ctx->pc = 0x532704u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 724), (uint8_t)GPR_U32(ctx, 4));
    // 0x532708: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x532708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x53270c: 0x92a302d4  lbu         $v1, 0x2D4($s5)
    ctx->pc = 0x53270cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 724)));
    // 0x532710: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x532710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x532714: 0xa2a302d4  sb          $v1, 0x2D4($s5)
    ctx->pc = 0x532714u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 724), (uint8_t)GPR_U32(ctx, 3));
    // 0x532718: 0xc48102e4  lwc1        $f1, 0x2E4($a0)
    ctx->pc = 0x532718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x53271c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x53271cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x532720: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x532720u;
    {
        const bool branch_taken_0x532720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x532724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532720u;
            // 0x532724: 0x249202e4  addiu       $s2, $a0, 0x2E4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532720) {
            ctx->pc = 0x532840u;
            goto label_532840;
        }
    }
    ctx->pc = 0x532728u;
    // 0x532728: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x532728u;
    SET_GPR_U32(ctx, 31, 0x532730u);
    ctx->pc = 0x53272Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x532728u;
            // 0x53272c: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532730u; }
        if (ctx->pc != 0x532730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532730u; }
        if (ctx->pc != 0x532730u) { return; }
    }
    ctx->pc = 0x532730u;
label_532730:
    // 0x532730: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x532730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x532734: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x532734u;
    SET_GPR_U32(ctx, 31, 0x53273Cu);
    ctx->pc = 0x532738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x532734u;
            // 0x532738: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53273Cu; }
        if (ctx->pc != 0x53273Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53273Cu; }
        if (ctx->pc != 0x53273Cu) { return; }
    }
    ctx->pc = 0x53273Cu;
label_53273c:
    // 0x53273c: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x53273cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x532740: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x532740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x532744: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x532744u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x532748: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x532748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x53274c: 0x0  nop
    ctx->pc = 0x53274cu;
    // NOP
    // 0x532750: 0x1810  mfhi        $v1
    ctx->pc = 0x532750u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x532754: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x532754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x532758: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x532758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x53275c: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x53275cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x532760: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x532760u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x532764: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x532764u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x532768: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x532768u;
    SET_GPR_U32(ctx, 31, 0x532770u);
    ctx->pc = 0x53276Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x532768u;
            // 0x53276c: 0x118040  sll         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532770u; }
        if (ctx->pc != 0x532770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532770u; }
        if (ctx->pc != 0x532770u) { return; }
    }
    ctx->pc = 0x532770u;
label_532770:
    // 0x532770: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x532770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x532774: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x532774u;
    SET_GPR_U32(ctx, 31, 0x53277Cu);
    ctx->pc = 0x532778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x532774u;
            // 0x532778: 0x2b740  sll         $s6, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53277Cu; }
        if (ctx->pc != 0x53277Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53277Cu; }
        if (ctx->pc != 0x53277Cu) { return; }
    }
    ctx->pc = 0x53277Cu;
label_53277c:
    // 0x53277c: 0x561825  or          $v1, $v0, $s6
    ctx->pc = 0x53277cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x532780: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x532780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x532784: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x532784u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x532788: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x532788u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x53278c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x53278cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x532790: 0x0  nop
    ctx->pc = 0x532790u;
    // NOP
    // 0x532794: 0x1810  mfhi        $v1
    ctx->pc = 0x532794u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x532798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x532798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x53279c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x53279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x5327a0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x5327A0u;
    SET_GPR_U32(ctx, 31, 0x5327A8u);
    ctx->pc = 0x5327A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5327A0u;
            // 0x5327a4: 0xa6420004  sh          $v0, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5327A8u; }
        if (ctx->pc != 0x5327A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5327A8u; }
        if (ctx->pc != 0x5327A8u) { return; }
    }
    ctx->pc = 0x5327A8u;
label_5327a8:
    // 0x5327a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x5327a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x5327ac: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x5327ACu;
    SET_GPR_U32(ctx, 31, 0x5327B4u);
    ctx->pc = 0x5327B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5327ACu;
            // 0x5327b0: 0x2b740  sll         $s6, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5327B4u; }
        if (ctx->pc != 0x5327B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5327B4u; }
        if (ctx->pc != 0x5327B4u) { return; }
    }
    ctx->pc = 0x5327B4u;
label_5327b4:
    // 0x5327b4: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x5327b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x5327b8: 0x562025  or          $a0, $v0, $s6
    ctx->pc = 0x5327b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x5327bc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x5327bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x5327c0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x5327c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x5327c4: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x5327c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x5327c8: 0x0  nop
    ctx->pc = 0x5327c8u;
    // NOP
    // 0x5327cc: 0x2810  mfhi        $a1
    ctx->pc = 0x5327ccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x5327d0: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x5327d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x5327d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x5327d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x5327d8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x5327d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x5327dc: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x5327dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x5327e0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x5327e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x5327e4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x5327e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x5327e8: 0xa243000a  sb          $v1, 0xA($s2)
    ctx->pc = 0x5327e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x5327ec: 0xa257000b  sb          $s7, 0xB($s2)
    ctx->pc = 0x5327ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11), (uint8_t)GPR_U32(ctx, 23));
    // 0x5327f0: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x5327F0u;
    {
        const bool branch_taken_0x5327f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x5327F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5327F0u;
            // 0x5327f4: 0xae44000c  sw          $a0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5327f0) {
            ctx->pc = 0x532808u;
            goto label_532808;
        }
    }
    ctx->pc = 0x5327F8u;
    // 0x5327f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5327f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x5327fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x5327FCu;
    {
        const bool branch_taken_0x5327fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5327FCu;
            // 0x532800: 0xa2430009  sb          $v1, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5327fc) {
            ctx->pc = 0x532830u;
            goto label_532830;
        }
    }
    ctx->pc = 0x532804u;
    // 0x532804: 0x0  nop
    ctx->pc = 0x532804u;
    // NOP
label_532808:
    // 0x532808: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x532808u;
    SET_GPR_U32(ctx, 31, 0x532810u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532810u; }
        if (ctx->pc != 0x532810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532810u; }
        if (ctx->pc != 0x532810u) { return; }
    }
    ctx->pc = 0x532810u;
label_532810:
    // 0x532810: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x532810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x532814: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x532814u;
    SET_GPR_U32(ctx, 31, 0x53281Cu);
    ctx->pc = 0x532818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x532814u;
            // 0x532818: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53281Cu; }
        if (ctx->pc != 0x53281Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53281Cu; }
        if (ctx->pc != 0x53281Cu) { return; }
    }
    ctx->pc = 0x53281Cu;
label_53281c:
    // 0x53281c: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x53281cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x532820: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x532820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x532824: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x532824u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x532828: 0x1810  mfhi        $v1
    ctx->pc = 0x532828u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x53282c: 0xa2430009  sb          $v1, 0x9($s2)
    ctx->pc = 0x53282cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
label_532830:
    // 0x532830: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x532830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x532834: 0x52800006  beql        $s4, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x532834u;
    {
        const bool branch_taken_0x532834 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x532834) {
            ctx->pc = 0x532838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532834u;
            // 0x532838: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532850u;
            goto label_532850;
        }
    }
    ctx->pc = 0x53283Cu;
    // 0x53283c: 0x0  nop
    ctx->pc = 0x53283cu;
    // NOP
label_532840:
    // 0x532840: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x532840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x532844: 0x5660ffac  bnel        $s3, $zero, . + 4 + (-0x54 << 2)
    ctx->pc = 0x532844u;
    {
        const bool branch_taken_0x532844 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x532844) {
            ctx->pc = 0x532848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532844u;
            // 0x532848: 0x92a302d4  lbu         $v1, 0x2D4($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 724)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5326F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5326f8;
        }
    }
    ctx->pc = 0x53284Cu;
    // 0x53284c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x53284cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_532850:
    // 0x532850: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x532850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x532854: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x532854u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x532858: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x532858u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x53285c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x53285cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x532860: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x532860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x532864: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x532864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x532868: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x532868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x53286c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x53286cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x532870: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x532870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x532874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x532874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x532878: 0x3e00008  jr          $ra
    ctx->pc = 0x532878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53287Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532878u;
            // 0x53287c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x532880u;
}
