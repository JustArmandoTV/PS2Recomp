#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048BC40
// Address: 0x48bc40 - 0x48bf90
void sub_0048BC40_0x48bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BC40_0x48bc40");
#endif

    switch (ctx->pc) {
        case 0x48bc90u: goto label_48bc90;
        case 0x48be6cu: goto label_48be6c;
        case 0x48be84u: goto label_48be84;
        case 0x48be9cu: goto label_48be9c;
        case 0x48beacu: goto label_48beac;
        case 0x48bee4u: goto label_48bee4;
        case 0x48bf08u: goto label_48bf08;
        case 0x48bf14u: goto label_48bf14;
        case 0x48bf28u: goto label_48bf28;
        default: break;
    }

    ctx->pc = 0x48bc40u;

    // 0x48bc40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x48bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x48bc44: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x48bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x48bc48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48bc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48bc4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x48bc50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48bc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x48bc54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x48bc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bc58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x48bc58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x48bc5c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x48bc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bc60: 0xc4420a60  lwc1        $f2, 0xA60($v0)
    ctx->pc = 0x48bc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48bc64: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x48bc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48bc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bc6c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x48bc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bc70: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x48bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x48bc74: 0xc4410a64  lwc1        $f1, 0xA64($v0)
    ctx->pc = 0x48bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48bc78: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x48bc78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x48bc7c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x48bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x48bc80: 0xc4400a68  lwc1        $f0, 0xA68($v0)
    ctx->pc = 0x48bc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bc84: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x48bc84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x48bc88: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x48BC88u;
    SET_GPR_U32(ctx, 31, 0x48BC90u);
    ctx->pc = 0x48BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BC88u;
            // 0x48bc8c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (runtime->hasFunction(0x13E730u)) {
        auto targetFn = runtime->lookupFunction(0x13E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BC90u; }
        if (ctx->pc != 0x48BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E730_0x13e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BC90u; }
        if (ctx->pc != 0x48BC90u) { return; }
    }
    ctx->pc = 0x48BC90u;
label_48bc90:
    // 0x48bc90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x48bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48bc94: 0x24030c3f  addiu       $v1, $zero, 0xC3F
    ctx->pc = 0x48bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3135));
    // 0x48bc98: 0x5083005d  beql        $a0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x48BC98u;
    {
        const bool branch_taken_0x48bc98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x48bc98) {
            ctx->pc = 0x48BC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48BC98u;
            // 0x48bc9c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48BE10u;
            goto label_48be10;
        }
    }
    ctx->pc = 0x48BCA0u;
    // 0x48bca0: 0x2403027f  addiu       $v1, $zero, 0x27F
    ctx->pc = 0x48bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x48bca4: 0x5083003f  beql        $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x48BCA4u;
    {
        const bool branch_taken_0x48bca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x48bca4) {
            ctx->pc = 0x48BCA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48BCA4u;
            // 0x48bca8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48BDA4u;
            goto label_48bda4;
        }
    }
    ctx->pc = 0x48BCACu;
    // 0x48bcac: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x48bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x48bcb0: 0x50830021  beql        $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x48BCB0u;
    {
        const bool branch_taken_0x48bcb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x48bcb0) {
            ctx->pc = 0x48BCB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48BCB0u;
            // 0x48bcb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48BD38u;
            goto label_48bd38;
        }
    }
    ctx->pc = 0x48BCB8u;
    // 0x48bcb8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x48bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x48bcbc: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48BCBCu;
    {
        const bool branch_taken_0x48bcbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x48bcbc) {
            ctx->pc = 0x48BCC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48BCBCu;
            // 0x48bcc0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48BCCCu;
            goto label_48bccc;
        }
    }
    ctx->pc = 0x48BCC4u;
    // 0x48bcc4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x48BCC4u;
    {
        const bool branch_taken_0x48bcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BCC4u;
            // 0x48bcc8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bcc4) {
            ctx->pc = 0x48BF74u;
            goto label_48bf74;
        }
    }
    ctx->pc = 0x48BCCCu;
label_48bccc:
    // 0x48bccc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x48bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48bcd0: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x48bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x48bcd4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x48bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bcd8: 0xe6200198  swc1        $f0, 0x198($s1)
    ctx->pc = 0x48bcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
    // 0x48bcdc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x48bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bce0: 0xe620019c  swc1        $f0, 0x19C($s1)
    ctx->pc = 0x48bce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 412), bits); }
    // 0x48bce4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x48bce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bce8: 0xe62001a0  swc1        $f0, 0x1A0($s1)
    ctx->pc = 0x48bce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x48bcec: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x48bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bcf0: 0xe62001a4  swc1        $f0, 0x1A4($s1)
    ctx->pc = 0x48bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x48bcf4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x48bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bcf8: 0xe62001a8  swc1        $f0, 0x1A8($s1)
    ctx->pc = 0x48bcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x48bcfc: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x48bcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd00: 0xe62001ac  swc1        $f0, 0x1AC($s1)
    ctx->pc = 0x48bd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 428), bits); }
    // 0x48bd04: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x48bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd08: 0xe62001b0  swc1        $f0, 0x1B0($s1)
    ctx->pc = 0x48bd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 432), bits); }
    // 0x48bd0c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x48bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd10: 0xe62001b4  swc1        $f0, 0x1B4($s1)
    ctx->pc = 0x48bd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 436), bits); }
    // 0x48bd14: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x48bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd18: 0xe62001b8  swc1        $f0, 0x1B8($s1)
    ctx->pc = 0x48bd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 440), bits); }
    // 0x48bd1c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x48bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd20: 0xe62001bc  swc1        $f0, 0x1BC($s1)
    ctx->pc = 0x48bd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 444), bits); }
    // 0x48bd24: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x48bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd28: 0xe62001c0  swc1        $f0, 0x1C0($s1)
    ctx->pc = 0x48bd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 448), bits); }
    // 0x48bd2c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x48bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd30: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x48BD30u;
    {
        const bool branch_taken_0x48bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BD30u;
            // 0x48bd34: 0xe62001c4  swc1        $f0, 0x1C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bd30) {
            ctx->pc = 0x48BF70u;
            goto label_48bf70;
        }
    }
    ctx->pc = 0x48BD38u;
label_48bd38:
    // 0x48bd38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x48bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48bd3c: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x48bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x48bd40: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x48bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd44: 0xe6200198  swc1        $f0, 0x198($s1)
    ctx->pc = 0x48bd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
    // 0x48bd48: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x48bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd4c: 0xe620019c  swc1        $f0, 0x19C($s1)
    ctx->pc = 0x48bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 412), bits); }
    // 0x48bd50: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x48bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd54: 0xe62001a0  swc1        $f0, 0x1A0($s1)
    ctx->pc = 0x48bd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x48bd58: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x48bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd5c: 0xe62001a4  swc1        $f0, 0x1A4($s1)
    ctx->pc = 0x48bd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x48bd60: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x48bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd64: 0xe62001a8  swc1        $f0, 0x1A8($s1)
    ctx->pc = 0x48bd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x48bd68: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x48bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd6c: 0xe62001ac  swc1        $f0, 0x1AC($s1)
    ctx->pc = 0x48bd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 428), bits); }
    // 0x48bd70: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x48bd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd74: 0xe62001b0  swc1        $f0, 0x1B0($s1)
    ctx->pc = 0x48bd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 432), bits); }
    // 0x48bd78: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x48bd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd7c: 0xe62001b4  swc1        $f0, 0x1B4($s1)
    ctx->pc = 0x48bd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 436), bits); }
    // 0x48bd80: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x48bd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd84: 0xe62001b8  swc1        $f0, 0x1B8($s1)
    ctx->pc = 0x48bd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 440), bits); }
    // 0x48bd88: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x48bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd8c: 0xe62001bc  swc1        $f0, 0x1BC($s1)
    ctx->pc = 0x48bd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 444), bits); }
    // 0x48bd90: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x48bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd94: 0xe62001c0  swc1        $f0, 0x1C0($s1)
    ctx->pc = 0x48bd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 448), bits); }
    // 0x48bd98: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x48bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bd9c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x48BD9Cu;
    {
        const bool branch_taken_0x48bd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BD9Cu;
            // 0x48bda0: 0xe62001c4  swc1        $f0, 0x1C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bd9c) {
            ctx->pc = 0x48BF70u;
            goto label_48bf70;
        }
    }
    ctx->pc = 0x48BDA4u;
label_48bda4:
    // 0x48bda4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x48bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48bda8: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x48bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x48bdac: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x48bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bdb0: 0xe6200198  swc1        $f0, 0x198($s1)
    ctx->pc = 0x48bdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
    // 0x48bdb4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x48bdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bdb8: 0xe620019c  swc1        $f0, 0x19C($s1)
    ctx->pc = 0x48bdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 412), bits); }
    // 0x48bdbc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x48bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bdc0: 0xe62001a0  swc1        $f0, 0x1A0($s1)
    ctx->pc = 0x48bdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x48bdc4: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x48bdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bdc8: 0xe62001a4  swc1        $f0, 0x1A4($s1)
    ctx->pc = 0x48bdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x48bdcc: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x48bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bdd0: 0xe62001a8  swc1        $f0, 0x1A8($s1)
    ctx->pc = 0x48bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x48bdd4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x48bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bdd8: 0xe62001ac  swc1        $f0, 0x1AC($s1)
    ctx->pc = 0x48bdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 428), bits); }
    // 0x48bddc: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x48bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bde0: 0xe62001b0  swc1        $f0, 0x1B0($s1)
    ctx->pc = 0x48bde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 432), bits); }
    // 0x48bde4: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x48bde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bde8: 0xe62001b4  swc1        $f0, 0x1B4($s1)
    ctx->pc = 0x48bde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 436), bits); }
    // 0x48bdec: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x48bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bdf0: 0xe62001b8  swc1        $f0, 0x1B8($s1)
    ctx->pc = 0x48bdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 440), bits); }
    // 0x48bdf4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x48bdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bdf8: 0xe62001bc  swc1        $f0, 0x1BC($s1)
    ctx->pc = 0x48bdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 444), bits); }
    // 0x48bdfc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x48bdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48be00: 0xe62001c0  swc1        $f0, 0x1C0($s1)
    ctx->pc = 0x48be00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 448), bits); }
    // 0x48be04: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x48be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48be08: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x48BE08u;
    {
        const bool branch_taken_0x48be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BE08u;
            // 0x48be0c: 0xe62001c4  swc1        $f0, 0x1C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be08) {
            ctx->pc = 0x48BF70u;
            goto label_48bf70;
        }
    }
    ctx->pc = 0x48BE10u;
label_48be10:
    // 0x48be10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x48be10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48be14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x48be14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x48be18: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x48be18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x48be1c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x48be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48be20: 0xe6200198  swc1        $f0, 0x198($s1)
    ctx->pc = 0x48be20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
    // 0x48be24: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x48be24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48be28: 0xe620019c  swc1        $f0, 0x19C($s1)
    ctx->pc = 0x48be28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 412), bits); }
    // 0x48be2c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x48be2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48be30: 0xe62001a0  swc1        $f0, 0x1A0($s1)
    ctx->pc = 0x48be30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x48be34: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x48be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x48be38: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x48BE38u;
    {
        const bool branch_taken_0x48be38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48be38) {
            ctx->pc = 0x48BE3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48BE38u;
            // 0x48be3c: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48BE8Cu;
            goto label_48be8c;
        }
    }
    ctx->pc = 0x48BE40u;
    // 0x48be40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48be40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48be44: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x48BE44u;
    {
        const bool branch_taken_0x48be44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48be44) {
            ctx->pc = 0x48BE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48BE44u;
            // 0x48be48: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48BE74u;
            goto label_48be74;
        }
    }
    ctx->pc = 0x48BE4Cu;
    // 0x48be4c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x48BE4Cu;
    {
        const bool branch_taken_0x48be4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48be4c) {
            ctx->pc = 0x48BE50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48BE4Cu;
            // 0x48be50: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48BE5Cu;
            goto label_48be5c;
        }
    }
    ctx->pc = 0x48BE54u;
    // 0x48be54: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x48BE54u;
    {
        const bool branch_taken_0x48be54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BE54u;
            // 0x48be58: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be54) {
            ctx->pc = 0x48BEA0u;
            goto label_48bea0;
        }
    }
    ctx->pc = 0x48BE5Cu;
label_48be5c:
    // 0x48be5c: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x48be5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x48be60: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x48be60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x48be64: 0xc04f308  jal         func_13CC20
    ctx->pc = 0x48BE64u;
    SET_GPR_U32(ctx, 31, 0x48BE6Cu);
    ctx->pc = 0x48BE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BE64u;
            // 0x48be68: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BE6Cu; }
        if (ctx->pc != 0x48BE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BE6Cu; }
        if (ctx->pc != 0x48BE6Cu) { return; }
    }
    ctx->pc = 0x48BE6Cu;
label_48be6c:
    // 0x48be6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48BE6Cu;
    {
        const bool branch_taken_0x48be6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48be6c) {
            ctx->pc = 0x48BE9Cu;
            goto label_48be9c;
        }
    }
    ctx->pc = 0x48BE74u;
label_48be74:
    // 0x48be74: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x48be74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x48be78: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x48be78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x48be7c: 0xc04f344  jal         func_13CD10
    ctx->pc = 0x48BE7Cu;
    SET_GPR_U32(ctx, 31, 0x48BE84u);
    ctx->pc = 0x48BE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BE7Cu;
            // 0x48be80: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CD10u;
    if (runtime->hasFunction(0x13CD10u)) {
        auto targetFn = runtime->lookupFunction(0x13CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BE84u; }
        if (ctx->pc != 0x48BE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD10_0x13cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BE84u; }
        if (ctx->pc != 0x48BE84u) { return; }
    }
    ctx->pc = 0x48BE84u;
label_48be84:
    // 0x48be84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48BE84u;
    {
        const bool branch_taken_0x48be84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48be84) {
            ctx->pc = 0x48BE9Cu;
            goto label_48be9c;
        }
    }
    ctx->pc = 0x48BE8Cu;
label_48be8c:
    // 0x48be8c: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x48be8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x48be90: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x48be90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x48be94: 0xc04f380  jal         func_13CE00
    ctx->pc = 0x48BE94u;
    SET_GPR_U32(ctx, 31, 0x48BE9Cu);
    ctx->pc = 0x48BE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BE94u;
            // 0x48be98: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BE9Cu; }
        if (ctx->pc != 0x48BE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BE9Cu; }
        if (ctx->pc != 0x48BE9Cu) { return; }
    }
    ctx->pc = 0x48BE9Cu;
label_48be9c:
    // 0x48be9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x48be9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_48bea0:
    // 0x48bea0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x48bea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48bea4: 0xc04cbbc  jal         func_132EF0
    ctx->pc = 0x48BEA4u;
    SET_GPR_U32(ctx, 31, 0x48BEACu);
    ctx->pc = 0x48BEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BEA4u;
            // 0x48bea8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BEACu; }
        if (ctx->pc != 0x48BEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BEACu; }
        if (ctx->pc != 0x48BEACu) { return; }
    }
    ctx->pc = 0x48BEACu;
label_48beac:
    // 0x48beac: 0xc62101b0  lwc1        $f1, 0x1B0($s1)
    ctx->pc = 0x48beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48beb0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48beb4: 0xc62001a4  lwc1        $f0, 0x1A4($s1)
    ctx->pc = 0x48beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48beb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48beb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x48bebc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x48bebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x48bec0: 0xc62101b4  lwc1        $f1, 0x1B4($s1)
    ctx->pc = 0x48bec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48bec4: 0xc62001a8  lwc1        $f0, 0x1A8($s1)
    ctx->pc = 0x48bec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bec8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48bec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x48becc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x48beccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x48bed0: 0xc62101b8  lwc1        $f1, 0x1B8($s1)
    ctx->pc = 0x48bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48bed4: 0xc62001ac  lwc1        $f0, 0x1AC($s1)
    ctx->pc = 0x48bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bed8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48bed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x48bedc: 0xc04cb2c  jal         func_132CB0
    ctx->pc = 0x48BEDCu;
    SET_GPR_U32(ctx, 31, 0x48BEE4u);
    ctx->pc = 0x48BEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BEDCu;
            // 0x48bee0: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132CB0u;
    if (runtime->hasFunction(0x132CB0u)) {
        auto targetFn = runtime->lookupFunction(0x132CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BEE4u; }
        if (ctx->pc != 0x48BEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CB0_0x132cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BEE4u; }
        if (ctx->pc != 0x48BEE4u) { return; }
    }
    ctx->pc = 0x48BEE4u;
label_48bee4:
    // 0x48bee4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x48bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x48bee8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48beec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x48beecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x48bef0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x48bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x48bef4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x48bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48bef8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x48bef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48befc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x48befcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x48bf00: 0xc04cbbc  jal         func_132EF0
    ctx->pc = 0x48BF00u;
    SET_GPR_U32(ctx, 31, 0x48BF08u);
    ctx->pc = 0x48BF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BF00u;
            // 0x48bf04: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BF08u; }
        if (ctx->pc != 0x48BF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BF08u; }
        if (ctx->pc != 0x48BF08u) { return; }
    }
    ctx->pc = 0x48BF08u;
label_48bf08:
    // 0x48bf08: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48bf0c: 0xc04cb44  jal         func_132D10
    ctx->pc = 0x48BF0Cu;
    SET_GPR_U32(ctx, 31, 0x48BF14u);
    ctx->pc = 0x48BF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BF0Cu;
            // 0x48bf10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BF14u; }
        if (ctx->pc != 0x48BF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BF14u; }
        if (ctx->pc != 0x48BF14u) { return; }
    }
    ctx->pc = 0x48BF14u;
label_48bf14:
    // 0x48bf14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48bf18: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x48bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x48bf1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x48bf1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x48bf20: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x48BF20u;
    SET_GPR_U32(ctx, 31, 0x48BF28u);
    ctx->pc = 0x48BF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BF20u;
            // 0x48bf24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BF28u; }
        if (ctx->pc != 0x48BF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BF28u; }
        if (ctx->pc != 0x48BF28u) { return; }
    }
    ctx->pc = 0x48BF28u;
label_48bf28:
    // 0x48bf28: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x48bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bf2c: 0xe62001a4  swc1        $f0, 0x1A4($s1)
    ctx->pc = 0x48bf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x48bf30: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x48bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bf34: 0xe62001a8  swc1        $f0, 0x1A8($s1)
    ctx->pc = 0x48bf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x48bf38: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x48bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bf3c: 0xe62001ac  swc1        $f0, 0x1AC($s1)
    ctx->pc = 0x48bf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 428), bits); }
    // 0x48bf40: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x48bf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bf44: 0xe62001b0  swc1        $f0, 0x1B0($s1)
    ctx->pc = 0x48bf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 432), bits); }
    // 0x48bf48: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x48bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bf4c: 0xe62001b4  swc1        $f0, 0x1B4($s1)
    ctx->pc = 0x48bf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 436), bits); }
    // 0x48bf50: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x48bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bf54: 0xe62001b8  swc1        $f0, 0x1B8($s1)
    ctx->pc = 0x48bf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 440), bits); }
    // 0x48bf58: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x48bf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bf5c: 0xe62001bc  swc1        $f0, 0x1BC($s1)
    ctx->pc = 0x48bf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 444), bits); }
    // 0x48bf60: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x48bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bf64: 0xe62001c0  swc1        $f0, 0x1C0($s1)
    ctx->pc = 0x48bf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 448), bits); }
    // 0x48bf68: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x48bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48bf6c: 0xe62001c4  swc1        $f0, 0x1C4($s1)
    ctx->pc = 0x48bf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
label_48bf70:
    // 0x48bf70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48bf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48bf74:
    // 0x48bf74: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x48bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x48bf78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48bf78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bf7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48bf7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bf80: 0x3e00008  jr          $ra
    ctx->pc = 0x48BF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48BF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BF80u;
            // 0x48bf84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48BF88u;
    // 0x48bf88: 0x0  nop
    ctx->pc = 0x48bf88u;
    // NOP
    // 0x48bf8c: 0x0  nop
    ctx->pc = 0x48bf8cu;
    // NOP
}
