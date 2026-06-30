#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C2B10
// Address: 0x4c2b10 - 0x4c2ec0
void sub_004C2B10_0x4c2b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C2B10_0x4c2b10");
#endif

    switch (ctx->pc) {
        case 0x4c2bccu: goto label_4c2bcc;
        case 0x4c2bd8u: goto label_4c2bd8;
        case 0x4c2c40u: goto label_4c2c40;
        case 0x4c2c4cu: goto label_4c2c4c;
        case 0x4c2c64u: goto label_4c2c64;
        case 0x4c2cb4u: goto label_4c2cb4;
        case 0x4c2cccu: goto label_4c2ccc;
        case 0x4c2cfcu: goto label_4c2cfc;
        case 0x4c2d34u: goto label_4c2d34;
        case 0x4c2d74u: goto label_4c2d74;
        case 0x4c2d90u: goto label_4c2d90;
        case 0x4c2db4u: goto label_4c2db4;
        case 0x4c2dd8u: goto label_4c2dd8;
        case 0x4c2e4cu: goto label_4c2e4c;
        case 0x4c2e60u: goto label_4c2e60;
        case 0x4c2e88u: goto label_4c2e88;
        case 0x4c2ea8u: goto label_4c2ea8;
        default: break;
    }

    ctx->pc = 0x4c2b10u;

    // 0x4c2b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c2b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c2b14: 0x3c033ebd  lui         $v1, 0x3EBD
    ctx->pc = 0x4c2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16061 << 16));
    // 0x4c2b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c2b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c2b1c: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x4c2b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
    // 0x4c2b20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c2b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c2b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c2b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c2b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c2b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c2b2c: 0xc4a10de4  lwc1        $f1, 0xDE4($a1)
    ctx->pc = 0x4c2b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c2b30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4c2b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4c2b34: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x4C2B34u;
    {
        const bool branch_taken_0x4c2b34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C2B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2B34u;
            // 0x4c2b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2b34) {
            ctx->pc = 0x4C2BE8u;
            goto label_4c2be8;
        }
    }
    ctx->pc = 0x4C2B3Cu;
    // 0x4c2b3c: 0x8e050db0  lw          $a1, 0xDB0($s0)
    ctx->pc = 0x4c2b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
    // 0x4c2b40: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4c2b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c2b44: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C2B44u;
    {
        const bool branch_taken_0x4c2b44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c2b44) {
            ctx->pc = 0x4C2B54u;
            goto label_4c2b54;
        }
    }
    ctx->pc = 0x4C2B4Cu;
    // 0x4c2b4c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x4C2B4Cu;
    {
        const bool branch_taken_0x4c2b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2B4Cu;
            // 0x4c2b50: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2b4c) {
            ctx->pc = 0x4C2BECu;
            goto label_4c2bec;
        }
    }
    ctx->pc = 0x4C2B54u;
label_4c2b54:
    // 0x4c2b54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4c2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4c2b58: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4c2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x4c2b5c: 0xc48100c4  lwc1        $f1, 0xC4($a0)
    ctx->pc = 0x4c2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c2b60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c2b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c2b64: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4c2b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4c2b68: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4c2b68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4c2b6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4c2b6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4c2b70: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x4C2B70u;
    {
        const bool branch_taken_0x4c2b70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C2B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2B70u;
            // 0x4c2b74: 0xe48100c4  swc1        $f1, 0xC4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2b70) {
            ctx->pc = 0x4C2BE8u;
            goto label_4c2be8;
        }
    }
    ctx->pc = 0x4C2B78u;
    // 0x4c2b78: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4c2b7c: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x4c2b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x4c2b80: 0xc4417198  lwc1        $f1, 0x7198($v0)
    ctx->pc = 0x4c2b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c2b84: 0xc6020de4  lwc1        $f2, 0xDE4($s0)
    ctx->pc = 0x4c2b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4c2b88: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4c2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x4c2b8c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x4c2b8cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x4c2b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4c2b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c2b94: 0x0  nop
    ctx->pc = 0x4c2b94u;
    // NOP
    // 0x4c2b98: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4c2b98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x4c2b9c: 0xe48000c4  swc1        $f0, 0xC4($a0)
    ctx->pc = 0x4c2b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
    // 0x4c2ba0: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x4c2ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x4c2ba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4c2ba8: 0xac8200c8  sw          $v0, 0xC8($a0)
    ctx->pc = 0x4c2ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 2));
    // 0x4c2bac: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4c2bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4c2bb0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4c2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4c2bb4: 0xac8300c8  sw          $v1, 0xC8($a0)
    ctx->pc = 0x4c2bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
    // 0x4c2bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c2bbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4c2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4c2bc0: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x4c2bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c2bc4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4C2BC4u;
    SET_GPR_U32(ctx, 31, 0x4C2BCCu);
    ctx->pc = 0x4C2BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2BC4u;
            // 0x4c2bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2BCCu; }
        if (ctx->pc != 0x4C2BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2BCCu; }
        if (ctx->pc != 0x4C2BCCu) { return; }
    }
    ctx->pc = 0x4C2BCCu;
label_4c2bcc:
    // 0x4c2bcc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4c2bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4c2bd0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4C2BD0u;
    SET_GPR_U32(ctx, 31, 0x4C2BD8u);
    ctx->pc = 0x4C2BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2BD0u;
            // 0x4c2bd4: 0x260503d0  addiu       $a1, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2BD8u; }
        if (ctx->pc != 0x4C2BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2BD8u; }
        if (ctx->pc != 0x4C2BD8u) { return; }
    }
    ctx->pc = 0x4C2BD8u;
label_4c2bd8:
    // 0x4c2bd8: 0xc6000de4  lwc1        $f0, 0xDE4($s0)
    ctx->pc = 0x4c2bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4c2bdc: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x4c2bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x4c2be0: 0xc6000de8  lwc1        $f0, 0xDE8($s0)
    ctx->pc = 0x4c2be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4c2be4: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x4c2be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_4c2be8:
    // 0x4c2be8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c2be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c2bec:
    // 0x4c2bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c2becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c2bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2BF4u;
            // 0x4c2bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2BFCu;
    // 0x4c2bfc: 0x0  nop
    ctx->pc = 0x4c2bfcu;
    // NOP
    // 0x4c2c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c2c04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c2c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c2c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c2c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c2c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c2c10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c2c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2c14: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4C2C14u;
    {
        const bool branch_taken_0x4c2c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2C14u;
            // 0x4c2c18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2c14) {
            ctx->pc = 0x4C2C64u;
            goto label_4c2c64;
        }
    }
    ctx->pc = 0x4C2C1Cu;
    // 0x4c2c1c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c2c20: 0x24421440  addiu       $v0, $v0, 0x1440
    ctx->pc = 0x4c2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
    // 0x4c2c24: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C2C24u;
    {
        const bool branch_taken_0x4c2c24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2C24u;
            // 0x4c2c28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2c24) {
            ctx->pc = 0x4C2C4Cu;
            goto label_4c2c4c;
        }
    }
    ctx->pc = 0x4C2C2Cu;
    // 0x4c2c2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4c2c30: 0x24425470  addiu       $v0, $v0, 0x5470
    ctx->pc = 0x4c2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21616));
    // 0x4c2c34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4c2c38: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C2C38u;
    SET_GPR_U32(ctx, 31, 0x4C2C40u);
    ctx->pc = 0x4C2C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2C38u;
            // 0x4c2c3c: 0x8e240d28  lw          $a0, 0xD28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2C40u; }
        if (ctx->pc != 0x4C2C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2C40u; }
        if (ctx->pc != 0x4C2C40u) { return; }
    }
    ctx->pc = 0x4C2C40u;
label_4c2c40:
    // 0x4c2c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c2c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2c44: 0xc0ccf5c  jal         func_333D70
    ctx->pc = 0x4C2C44u;
    SET_GPR_U32(ctx, 31, 0x4C2C4Cu);
    ctx->pc = 0x4C2C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2C44u;
            // 0x4c2c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333D70u;
    if (runtime->hasFunction(0x333D70u)) {
        auto targetFn = runtime->lookupFunction(0x333D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2C4Cu; }
        if (ctx->pc != 0x4C2C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333D70_0x333d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2C4Cu; }
        if (ctx->pc != 0x4C2C4Cu) { return; }
    }
    ctx->pc = 0x4C2C4Cu;
label_4c2c4c:
    // 0x4c2c4c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c2c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x4c2c50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c2c50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c2c54: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C2C54u;
    {
        const bool branch_taken_0x4c2c54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c2c54) {
            ctx->pc = 0x4C2C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2C54u;
            // 0x4c2c58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2C68u;
            goto label_4c2c68;
        }
    }
    ctx->pc = 0x4C2C5Cu;
    // 0x4c2c5c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C2C5Cu;
    SET_GPR_U32(ctx, 31, 0x4C2C64u);
    ctx->pc = 0x4C2C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2C5Cu;
            // 0x4c2c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2C64u; }
        if (ctx->pc != 0x4C2C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2C64u; }
        if (ctx->pc != 0x4C2C64u) { return; }
    }
    ctx->pc = 0x4C2C64u;
label_4c2c64:
    // 0x4c2c64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c2c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c2c68:
    // 0x4c2c68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c2c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c2c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c2c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c2c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2c74: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2C74u;
            // 0x4c2c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2C7Cu;
    // 0x4c2c7c: 0x0  nop
    ctx->pc = 0x4c2c7cu;
    // NOP
    // 0x4c2c80: 0x80820cc1  lb          $v0, 0xCC1($a0)
    ctx->pc = 0x4c2c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3265)));
    // 0x4c2c84: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x4c2c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x4c2c88: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2C88u;
            // 0x4c2c8c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2C90u;
    // 0x4c2c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c2c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c2c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c2c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c2c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c2c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c2c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c2c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2ca0: 0x8c840d64  lw          $a0, 0xD64($a0)
    ctx->pc = 0x4c2ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3428)));
    // 0x4c2ca4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C2CA4u;
    {
        const bool branch_taken_0x4c2ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2ca4) {
            ctx->pc = 0x4C2CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2CA4u;
            // 0x4c2ca8: 0xae000d60  sw          $zero, 0xD60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2CB8u;
            goto label_4c2cb8;
        }
    }
    ctx->pc = 0x4C2CACu;
    // 0x4c2cac: 0xc0dd02c  jal         func_3740B0
    ctx->pc = 0x4C2CACu;
    SET_GPR_U32(ctx, 31, 0x4C2CB4u);
    ctx->pc = 0x3740B0u;
    if (runtime->hasFunction(0x3740B0u)) {
        auto targetFn = runtime->lookupFunction(0x3740B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2CB4u; }
        if (ctx->pc != 0x4C2CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003740B0_0x3740b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2CB4u; }
        if (ctx->pc != 0x4C2CB4u) { return; }
    }
    ctx->pc = 0x4C2CB4u;
label_4c2cb4:
    // 0x4c2cb4: 0xae000d60  sw          $zero, 0xD60($s0)
    ctx->pc = 0x4c2cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3424), GPR_U32(ctx, 0));
label_4c2cb8:
    // 0x4c2cb8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4c2cbc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4c2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x4c2cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2cc4: 0xc0d01dc  jal         func_340770
    ctx->pc = 0x4C2CC4u;
    SET_GPR_U32(ctx, 31, 0x4C2CCCu);
    ctx->pc = 0x4C2CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2CC4u;
            // 0x4c2cc8: 0xa0400080  sb          $zero, 0x80($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340770u;
    if (runtime->hasFunction(0x340770u)) {
        auto targetFn = runtime->lookupFunction(0x340770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2CCCu; }
        if (ctx->pc != 0x4C2CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340770_0x340770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2CCCu; }
        if (ctx->pc != 0x4C2CCCu) { return; }
    }
    ctx->pc = 0x4C2CCCu;
label_4c2ccc:
    // 0x4c2ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c2cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c2cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2CD4u;
            // 0x4c2cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2CDCu;
    // 0x4c2cdc: 0x0  nop
    ctx->pc = 0x4c2cdcu;
    // NOP
    // 0x4c2ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c2ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c2ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c2ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c2ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c2ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c2cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c2cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c2cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c2cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2cf4: 0xc0cce84  jal         func_333A10
    ctx->pc = 0x4C2CF4u;
    SET_GPR_U32(ctx, 31, 0x4C2CFCu);
    ctx->pc = 0x4C2CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2CF4u;
            // 0x4c2cf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333A10u;
    if (runtime->hasFunction(0x333A10u)) {
        auto targetFn = runtime->lookupFunction(0x333A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2CFCu; }
        if (ctx->pc != 0x4C2CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333A10_0x333a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2CFCu; }
        if (ctx->pc != 0x4C2CFCu) { return; }
    }
    ctx->pc = 0x4C2CFCu;
label_4c2cfc:
    // 0x4c2cfc: 0x8e230d64  lw          $v1, 0xD64($s1)
    ctx->pc = 0x4c2cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3428)));
    // 0x4c2d00: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4C2D00u;
    {
        const bool branch_taken_0x4c2d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2d00) {
            ctx->pc = 0x4C2D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2D00u;
            // 0x4c2d04: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2D38u;
            goto label_4c2d38;
        }
    }
    ctx->pc = 0x4C2D08u;
    // 0x4c2d08: 0x8e230d68  lw          $v1, 0xD68($s1)
    ctx->pc = 0x4c2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3432)));
    // 0x4c2d0c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C2D0Cu;
    {
        const bool branch_taken_0x4c2d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2d0c) {
            ctx->pc = 0x4C2D34u;
            goto label_4c2d34;
        }
    }
    ctx->pc = 0x4C2D14u;
    // 0x4c2d14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4c2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4c2d18: 0x26270d68  addiu       $a3, $s1, 0xD68
    ctx->pc = 0x4c2d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 3432));
    // 0x4c2d1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4c2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4c2d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2d24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c2d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c2d28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c2d2c: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4C2D2Cu;
    SET_GPR_U32(ctx, 31, 0x4C2D34u);
    ctx->pc = 0x4C2D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2D2Cu;
            // 0x4c2d30: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2D34u; }
        if (ctx->pc != 0x4C2D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2D34u; }
        if (ctx->pc != 0x4C2D34u) { return; }
    }
    ctx->pc = 0x4C2D34u;
label_4c2d34:
    // 0x4c2d34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c2d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c2d38:
    // 0x4c2d38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c2d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c2d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2d40: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2D40u;
            // 0x4c2d44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2D48u;
    // 0x4c2d48: 0x0  nop
    ctx->pc = 0x4c2d48u;
    // NOP
    // 0x4c2d4c: 0x0  nop
    ctx->pc = 0x4c2d4cu;
    // NOP
    // 0x4c2d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c2d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4c2d54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c2d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4c2d58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c2d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4c2d5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c2d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c2d60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4c2d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2d64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c2d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c2d68: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4c2d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2d6c: 0xc0cce88  jal         func_333A20
    ctx->pc = 0x4C2D6Cu;
    SET_GPR_U32(ctx, 31, 0x4C2D74u);
    ctx->pc = 0x4C2D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2D6Cu;
            // 0x4c2d70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333A20u;
    if (runtime->hasFunction(0x333A20u)) {
        auto targetFn = runtime->lookupFunction(0x333A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2D74u; }
        if (ctx->pc != 0x4C2D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333A20_0x333a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2D74u; }
        if (ctx->pc != 0x4C2D74u) { return; }
    }
    ctx->pc = 0x4C2D74u;
label_4c2d74:
    // 0x4c2d74: 0x8e030d68  lw          $v1, 0xD68($s0)
    ctx->pc = 0x4c2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3432)));
    // 0x4c2d78: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x4C2D78u;
    {
        const bool branch_taken_0x4c2d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2d78) {
            ctx->pc = 0x4C2D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2D78u;
            // 0x4c2d7c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2E10u;
            goto label_4c2e10;
        }
    }
    ctx->pc = 0x4C2D80u;
    // 0x4c2d80: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4c2d80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c2d84: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x4c2d84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x4c2d88: 0xc078d40  jal         func_1E3500
    ctx->pc = 0x4C2D88u;
    SET_GPR_U32(ctx, 31, 0x4C2D90u);
    ctx->pc = 0x4C2D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2D88u;
            // 0x4c2d8c: 0x3045001f  andi        $a1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3500u;
    if (runtime->hasFunction(0x1E3500u)) {
        auto targetFn = runtime->lookupFunction(0x1E3500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2D90u; }
        if (ctx->pc != 0x4C2D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3500_0x1e3500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2D90u; }
        if (ctx->pc != 0x4C2D90u) { return; }
    }
    ctx->pc = 0x4C2D90u;
label_4c2d90:
    // 0x4c2d90: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x4c2d90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4c2d94: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x4c2d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4c2d98: 0x12030011  beq         $s0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4C2D98u;
    {
        const bool branch_taken_0x4c2d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c2d98) {
            ctx->pc = 0x4C2DE0u;
            goto label_4c2de0;
        }
    }
    ctx->pc = 0x4C2DA0u;
    // 0x4c2da0: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4c2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4c2da4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c2da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2da8: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x4c2da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4c2dac: 0xc0cd2e8  jal         func_334BA0
    ctx->pc = 0x4C2DACu;
    SET_GPR_U32(ctx, 31, 0x4C2DB4u);
    ctx->pc = 0x4C2DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2DACu;
            // 0x4c2db0: 0xafb0005c  sw          $s0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334BA0u;
    if (runtime->hasFunction(0x334BA0u)) {
        auto targetFn = runtime->lookupFunction(0x334BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2DB4u; }
        if (ctx->pc != 0x4C2DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334BA0_0x334ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2DB4u; }
        if (ctx->pc != 0x4C2DB4u) { return; }
    }
    ctx->pc = 0x4C2DB4u;
label_4c2db4:
    // 0x4c2db4: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x4c2db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4c2db8: 0x2643000c  addiu       $v1, $s2, 0xC
    ctx->pc = 0x4c2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x4c2dbc: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4C2DBCu;
    {
        const bool branch_taken_0x4c2dbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c2dbc) {
            ctx->pc = 0x4C2E0Cu;
            goto label_4c2e0c;
        }
    }
    ctx->pc = 0x4C2DC4u;
    // 0x4c2dc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c2dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2dc8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x4c2dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x4c2dcc: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x4c2dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4c2dd0: 0xc0cd48c  jal         func_335230
    ctx->pc = 0x4C2DD0u;
    SET_GPR_U32(ctx, 31, 0x4C2DD8u);
    ctx->pc = 0x4C2DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2DD0u;
            // 0x4c2dd4: 0xafb00058  sw          $s0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335230u;
    if (runtime->hasFunction(0x335230u)) {
        auto targetFn = runtime->lookupFunction(0x335230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2DD8u; }
        if (ctx->pc != 0x4C2DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335230_0x335230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2DD8u; }
        if (ctx->pc != 0x4C2DD8u) { return; }
    }
    ctx->pc = 0x4C2DD8u;
label_4c2dd8:
    // 0x4c2dd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C2DD8u;
    {
        const bool branch_taken_0x4c2dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2dd8) {
            ctx->pc = 0x4C2E0Cu;
            goto label_4c2e0c;
        }
    }
    ctx->pc = 0x4C2DE0u;
label_4c2de0:
    // 0x4c2de0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4c2de4: 0x8c63f550  lw          $v1, -0xAB0($v1)
    ctx->pc = 0x4c2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964560)));
    // 0x4c2de8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C2DE8u;
    {
        const bool branch_taken_0x4c2de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2de8) {
            ctx->pc = 0x4C2E0Cu;
            goto label_4c2e0c;
        }
    }
    ctx->pc = 0x4C2DF0u;
    // 0x4c2df0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4c2df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4c2df4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4c2df8: 0xa470f31c  sh          $s0, -0xCE4($v1)
    ctx->pc = 0x4c2df8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963996), (uint16_t)GPR_U32(ctx, 16));
    // 0x4c2dfc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4c2e00: 0xac64f550  sw          $a0, -0xAB0($v1)
    ctx->pc = 0x4c2e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964560), GPR_U32(ctx, 4));
    // 0x4c2e04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c2e08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c2e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4c2e0c:
    // 0x4c2e0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c2e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c2e10:
    // 0x4c2e10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c2e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c2e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c2e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c2e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2E1Cu;
            // 0x4c2e20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2E24u;
    // 0x4c2e24: 0x0  nop
    ctx->pc = 0x4c2e24u;
    // NOP
    // 0x4c2e28: 0x0  nop
    ctx->pc = 0x4c2e28u;
    // NOP
    // 0x4c2e2c: 0x0  nop
    ctx->pc = 0x4c2e2cu;
    // NOP
    // 0x4c2e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4c2e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4c2e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c2e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c2e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c2e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c2e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c2e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c2e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c2e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2e44: 0xc0cce8c  jal         func_333A30
    ctx->pc = 0x4C2E44u;
    SET_GPR_U32(ctx, 31, 0x4C2E4Cu);
    ctx->pc = 0x4C2E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2E44u;
            // 0x4c2e48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333A30u;
    if (runtime->hasFunction(0x333A30u)) {
        auto targetFn = runtime->lookupFunction(0x333A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2E4Cu; }
        if (ctx->pc != 0x4C2E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333A30_0x333a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2E4Cu; }
        if (ctx->pc != 0x4C2E4Cu) { return; }
    }
    ctx->pc = 0x4C2E4Cu;
label_4c2e4c:
    // 0x4c2e4c: 0x8e230d68  lw          $v1, 0xD68($s1)
    ctx->pc = 0x4c2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3432)));
    // 0x4c2e50: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x4C2E50u;
    {
        const bool branch_taken_0x4c2e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2e50) {
            ctx->pc = 0x4C2E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2E50u;
            // 0x4c2e54: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2EACu;
            goto label_4c2eac;
        }
    }
    ctx->pc = 0x4C2E58u;
    // 0x4c2e58: 0xc078cdc  jal         func_1E3370
    ctx->pc = 0x4C2E58u;
    SET_GPR_U32(ctx, 31, 0x4C2E60u);
    ctx->pc = 0x4C2E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2E58u;
            // 0x4c2e5c: 0x90640001  lbu         $a0, 0x1($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3370u;
    if (runtime->hasFunction(0x1E3370u)) {
        auto targetFn = runtime->lookupFunction(0x1E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2E60u; }
        if (ctx->pc != 0x4C2E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3370_0x1e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2E60u; }
        if (ctx->pc != 0x4C2E60u) { return; }
    }
    ctx->pc = 0x4C2E60u;
label_4c2e60:
    // 0x4c2e60: 0x8e230d68  lw          $v1, 0xD68($s1)
    ctx->pc = 0x4c2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3432)));
    // 0x4c2e64: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x4c2e64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c2e68: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x4c2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x4c2e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c2e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2e70: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x4c2e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x4c2e74: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4c2e74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c2e78: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4c2e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4c2e7c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c2e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c2e80: 0xc0cd2e8  jal         func_334BA0
    ctx->pc = 0x4C2E80u;
    SET_GPR_U32(ctx, 31, 0x4C2E88u);
    ctx->pc = 0x4C2E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2E80u;
            // 0x4c2e84: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334BA0u;
    if (runtime->hasFunction(0x334BA0u)) {
        auto targetFn = runtime->lookupFunction(0x334BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2E88u; }
        if (ctx->pc != 0x4C2E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334BA0_0x334ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2E88u; }
        if (ctx->pc != 0x4C2E88u) { return; }
    }
    ctx->pc = 0x4C2E88u;
label_4c2e88:
    // 0x4c2e88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x4c2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c2e8c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x4c2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x4c2e90: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C2E90u;
    {
        const bool branch_taken_0x4c2e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c2e90) {
            ctx->pc = 0x4C2EA8u;
            goto label_4c2ea8;
        }
    }
    ctx->pc = 0x4C2E98u;
    // 0x4c2e98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c2e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2e9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4c2e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4c2ea0: 0xc0cd48c  jal         func_335230
    ctx->pc = 0x4C2EA0u;
    SET_GPR_U32(ctx, 31, 0x4C2EA8u);
    ctx->pc = 0x4C2EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2EA0u;
            // 0x4c2ea4: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335230u;
    if (runtime->hasFunction(0x335230u)) {
        auto targetFn = runtime->lookupFunction(0x335230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2EA8u; }
        if (ctx->pc != 0x4C2EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335230_0x335230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2EA8u; }
        if (ctx->pc != 0x4C2EA8u) { return; }
    }
    ctx->pc = 0x4C2EA8u;
label_4c2ea8:
    // 0x4c2ea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c2ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c2eac:
    // 0x4c2eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c2eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c2eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2EB4u;
            // 0x4c2eb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2EBCu;
    // 0x4c2ebc: 0x0  nop
    ctx->pc = 0x4c2ebcu;
    // NOP
}
