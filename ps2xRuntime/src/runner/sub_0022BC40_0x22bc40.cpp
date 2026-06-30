#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BC40
// Address: 0x22bc40 - 0x22bd20
void sub_0022BC40_0x22bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BC40_0x22bc40");
#endif

    switch (ctx->pc) {
        case 0x22bc40u: goto label_22bc40;
        case 0x22bc44u: goto label_22bc44;
        case 0x22bc48u: goto label_22bc48;
        case 0x22bc4cu: goto label_22bc4c;
        case 0x22bc50u: goto label_22bc50;
        case 0x22bc54u: goto label_22bc54;
        case 0x22bc58u: goto label_22bc58;
        case 0x22bc5cu: goto label_22bc5c;
        case 0x22bc60u: goto label_22bc60;
        case 0x22bc64u: goto label_22bc64;
        case 0x22bc68u: goto label_22bc68;
        case 0x22bc6cu: goto label_22bc6c;
        case 0x22bc70u: goto label_22bc70;
        case 0x22bc74u: goto label_22bc74;
        case 0x22bc78u: goto label_22bc78;
        case 0x22bc7cu: goto label_22bc7c;
        case 0x22bc80u: goto label_22bc80;
        case 0x22bc84u: goto label_22bc84;
        case 0x22bc88u: goto label_22bc88;
        case 0x22bc8cu: goto label_22bc8c;
        case 0x22bc90u: goto label_22bc90;
        case 0x22bc94u: goto label_22bc94;
        case 0x22bc98u: goto label_22bc98;
        case 0x22bc9cu: goto label_22bc9c;
        case 0x22bca0u: goto label_22bca0;
        case 0x22bca4u: goto label_22bca4;
        case 0x22bca8u: goto label_22bca8;
        case 0x22bcacu: goto label_22bcac;
        case 0x22bcb0u: goto label_22bcb0;
        case 0x22bcb4u: goto label_22bcb4;
        case 0x22bcb8u: goto label_22bcb8;
        case 0x22bcbcu: goto label_22bcbc;
        case 0x22bcc0u: goto label_22bcc0;
        case 0x22bcc4u: goto label_22bcc4;
        case 0x22bcc8u: goto label_22bcc8;
        case 0x22bcccu: goto label_22bccc;
        case 0x22bcd0u: goto label_22bcd0;
        case 0x22bcd4u: goto label_22bcd4;
        case 0x22bcd8u: goto label_22bcd8;
        case 0x22bcdcu: goto label_22bcdc;
        case 0x22bce0u: goto label_22bce0;
        case 0x22bce4u: goto label_22bce4;
        case 0x22bce8u: goto label_22bce8;
        case 0x22bcecu: goto label_22bcec;
        case 0x22bcf0u: goto label_22bcf0;
        case 0x22bcf4u: goto label_22bcf4;
        case 0x22bcf8u: goto label_22bcf8;
        case 0x22bcfcu: goto label_22bcfc;
        case 0x22bd00u: goto label_22bd00;
        case 0x22bd04u: goto label_22bd04;
        case 0x22bd08u: goto label_22bd08;
        case 0x22bd0cu: goto label_22bd0c;
        case 0x22bd10u: goto label_22bd10;
        case 0x22bd14u: goto label_22bd14;
        case 0x22bd18u: goto label_22bd18;
        case 0x22bd1cu: goto label_22bd1c;
        default: break;
    }

    ctx->pc = 0x22bc40u;

label_22bc40:
    // 0x22bc40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22bc44:
    // 0x22bc44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22bc48:
    // 0x22bc48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22bc4c:
    // 0x22bc4c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x22bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc50:
    // 0x22bc50: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x22bc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_22bc54:
    // 0x22bc54: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x22bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc58:
    // 0x22bc58: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x22bc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_22bc5c:
    // 0x22bc5c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x22bc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc60:
    // 0x22bc60: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x22bc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_22bc64:
    // 0x22bc64: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x22bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc68:
    // 0x22bc68: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x22bc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
label_22bc6c:
    // 0x22bc6c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x22bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc70:
    // 0x22bc70: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x22bc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_22bc74:
    // 0x22bc74: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x22bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc78:
    // 0x22bc78: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x22bc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_22bc7c:
    // 0x22bc7c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x22bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc80:
    // 0x22bc80: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x22bc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_22bc84:
    // 0x22bc84: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x22bc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc88:
    // 0x22bc88: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x22bc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_22bc8c:
    // 0x22bc8c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x22bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc90:
    // 0x22bc90: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x22bc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
label_22bc94:
    // 0x22bc94: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x22bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bc98:
    // 0x22bc98: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x22bc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
label_22bc9c:
    // 0x22bc9c: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x22bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bca0:
    // 0x22bca0: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
label_22bca4:
    // 0x22bca4: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x22bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bca8:
    // 0x22bca8: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x22bca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
label_22bcac:
    // 0x22bcac: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x22bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bcb0:
    // 0x22bcb0: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x22bcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
label_22bcb4:
    // 0x22bcb4: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x22bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bcb8:
    // 0x22bcb8: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x22bcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
label_22bcbc:
    // 0x22bcbc: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x22bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bcc0:
    // 0x22bcc0: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x22bcc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
label_22bcc4:
    // 0x22bcc4: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x22bcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bcc8:
    // 0x22bcc8: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x22bcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
label_22bccc:
    // 0x22bccc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_22bcd0:
    // 0x22bcd0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_22bcd4:
    if (ctx->pc == 0x22BCD4u) {
        ctx->pc = 0x22BCD4u;
            // 0x22bcd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22BCD8u;
        goto label_22bcd8;
    }
    ctx->pc = 0x22BCD0u;
    {
        const bool branch_taken_0x22bcd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BCD0u;
            // 0x22bcd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bcd0) {
            ctx->pc = 0x22BD0Cu;
            goto label_22bd0c;
        }
    }
    ctx->pc = 0x22BCD8u;
label_22bcd8:
    // 0x22bcd8: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x22bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_22bcdc:
    // 0x22bcdc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_22bce0:
    // 0x22bce0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x22bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_22bce4:
    // 0x22bce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bce8:
    // 0x22bce8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x22bce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22bcec:
    // 0x22bcec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x22bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bcf0:
    // 0x22bcf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22bcf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22bcf4:
    // 0x22bcf4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22bcf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22bcf8:
    // 0x22bcf8: 0x320f809  jalr        $t9
label_22bcfc:
    if (ctx->pc == 0x22BCFCu) {
        ctx->pc = 0x22BCFCu;
            // 0x22bcfc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x22BD00u;
        goto label_22bd00;
    }
    ctx->pc = 0x22BCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22BD00u);
        ctx->pc = 0x22BCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BCF8u;
            // 0x22bcfc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22BD00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22BD00u; }
            if (ctx->pc != 0x22BD00u) { return; }
        }
        }
    }
    ctx->pc = 0x22BD00u;
label_22bd00:
    // 0x22bd00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22bd04:
    // 0x22bd04: 0xc08abf0  jal         func_22AFC0
label_22bd08:
    if (ctx->pc == 0x22BD08u) {
        ctx->pc = 0x22BD08u;
            // 0x22bd08: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22BD0Cu;
        goto label_22bd0c;
    }
    ctx->pc = 0x22BD04u;
    SET_GPR_U32(ctx, 31, 0x22BD0Cu);
    ctx->pc = 0x22BD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD04u;
            // 0x22bd08: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AFC0u;
    if (runtime->hasFunction(0x22AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD0Cu; }
        if (ctx->pc != 0x22BD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AFC0_0x22afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD0Cu; }
        if (ctx->pc != 0x22BD0Cu) { return; }
    }
    ctx->pc = 0x22BD0Cu;
label_22bd0c:
    // 0x22bd0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22bd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22bd10:
    // 0x22bd10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22bd14:
    // 0x22bd14: 0x3e00008  jr          $ra
label_22bd18:
    if (ctx->pc == 0x22BD18u) {
        ctx->pc = 0x22BD18u;
            // 0x22bd18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22BD1Cu;
        goto label_22bd1c;
    }
    ctx->pc = 0x22BD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD14u;
            // 0x22bd18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BD1Cu;
label_22bd1c:
    // 0x22bd1c: 0x0  nop
    ctx->pc = 0x22bd1cu;
    // NOP
}
