#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00264AA0
// Address: 0x264aa0 - 0x2651e0
void sub_00264AA0_0x264aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264AA0_0x264aa0");
#endif

    switch (ctx->pc) {
        case 0x264d58u: goto label_264d58;
        case 0x264de0u: goto label_264de0;
        case 0x265018u: goto label_265018;
        case 0x2650d0u: goto label_2650d0;
        case 0x265184u: goto label_265184;
        default: break;
    }

    ctx->pc = 0x264aa0u;

    // 0x264aa0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x264aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x264aa4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x264aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x264aa8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x264aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x264aac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x264aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x264ab0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x264ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x264ab4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x264ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x264ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x264abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264ac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x264ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ac8: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x264ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x264acc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x264accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x264ad0: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x264ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x264ad4: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x264AD4u;
    {
        const bool branch_taken_0x264ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264AD4u;
            // 0x264ad8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ad4) {
            ctx->pc = 0x264BD8u;
            goto label_264bd8;
        }
    }
    ctx->pc = 0x264ADCu;
    // 0x264adc: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x264adcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x264ae0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x264AE0u;
    {
        const bool branch_taken_0x264ae0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x264ae0) {
            ctx->pc = 0x264B10u;
            goto label_264b10;
        }
    }
    ctx->pc = 0x264AE8u;
    // 0x264ae8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x264ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264aec: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x264aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x264af0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x264af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264af4: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x264af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x264af8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x264af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264afc: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x264afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x264b00: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x264b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b04: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x264B04u;
    {
        const bool branch_taken_0x264b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264B04u;
            // 0x264b08: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b04) {
            ctx->pc = 0x264B90u;
            goto label_264b90;
        }
    }
    ctx->pc = 0x264B0Cu;
    // 0x264b0c: 0x0  nop
    ctx->pc = 0x264b0cu;
    // NOP
label_264b10:
    // 0x264b10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x264b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x264b14: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x264b14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x264b18: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x264B18u;
    {
        const bool branch_taken_0x264b18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x264b18) {
            ctx->pc = 0x264B88u;
            goto label_264b88;
        }
    }
    ctx->pc = 0x264B20u;
    // 0x264b20: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x264b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b24: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x264b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x264b28: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x264b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b2c: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x264b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x264b30: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x264b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b34: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x264b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x264b38: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x264b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b3c: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x264b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x264b40: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x264b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b44: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x264b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x264b48: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x264b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b4c: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x264b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x264b50: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x264b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b54: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x264b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x264b58: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x264b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b5c: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x264b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x264b60: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x264b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b64: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x264b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x264b68: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x264b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b6c: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x264b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x264b70: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x264b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b74: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x264b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x264b78: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x264b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264B7Cu;
    {
        const bool branch_taken_0x264b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264B7Cu;
            // 0x264b80: 0xe62000dc  swc1        $f0, 0xDC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b7c) {
            ctx->pc = 0x264B90u;
            goto label_264b90;
        }
    }
    ctx->pc = 0x264B84u;
    // 0x264b84: 0x0  nop
    ctx->pc = 0x264b84u;
    // NOP
label_264b88:
    // 0x264b88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x264b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x264b8c: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x264b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_264b90:
    // 0x264b90: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x264b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b94: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x264b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x264b98: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x264b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264b9c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x264b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x264ba0: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x264ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264ba4: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x264ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x264ba8: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x264ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264bac: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x264bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x264bb0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x264bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264bb4: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x264bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x264bb8: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x264bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264bbc: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x264bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x264bc0: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x264bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264bc4: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x264bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x264bc8: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x264bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264bcc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x264BCCu;
    {
        const bool branch_taken_0x264bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264BCCu;
            // 0x264bd0: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bcc) {
            ctx->pc = 0x264D40u;
            goto label_264d40;
        }
    }
    ctx->pc = 0x264BD4u;
    // 0x264bd4: 0x0  nop
    ctx->pc = 0x264bd4u;
    // NOP
label_264bd8:
    // 0x264bd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x264bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x264bdc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x264bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x264be0: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x264BE0u;
    {
        const bool branch_taken_0x264be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264BE0u;
            // 0x264be4: 0x28610004  slti        $at, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264be0) {
            ctx->pc = 0x264D38u;
            goto label_264d38;
        }
    }
    ctx->pc = 0x264BE8u;
    // 0x264be8: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x264BE8u;
    {
        const bool branch_taken_0x264be8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x264be8) {
            ctx->pc = 0x264C38u;
            goto label_264c38;
        }
    }
    ctx->pc = 0x264BF0u;
    // 0x264bf0: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x264bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264bf4: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x264bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x264bf8: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x264bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264bfc: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x264bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x264c00: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x264c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c04: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x264c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x264c08: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x264c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c0c: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x264c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x264c10: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x264c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c14: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x264c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x264c18: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x264c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c1c: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x264c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x264c20: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x264c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c24: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x264c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x264c28: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x264c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c2c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x264C2Cu;
    {
        const bool branch_taken_0x264c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264C2Cu;
            // 0x264c30: 0xe62000dc  swc1        $f0, 0xDC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c2c) {
            ctx->pc = 0x264CB0u;
            goto label_264cb0;
        }
    }
    ctx->pc = 0x264C34u;
    // 0x264c34: 0x0  nop
    ctx->pc = 0x264c34u;
    // NOP
label_264c38:
    // 0x264c38: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x264c38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x264c3c: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x264C3Cu;
    {
        const bool branch_taken_0x264c3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x264c3c) {
            ctx->pc = 0x264CA8u;
            goto label_264ca8;
        }
    }
    ctx->pc = 0x264C44u;
    // 0x264c44: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x264c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c48: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x264c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x264c4c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x264c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c50: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x264c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x264c54: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x264c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c58: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x264c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x264c5c: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x264c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c60: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x264c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x264c64: 0xc62000f0  lwc1        $f0, 0xF0($s1)
    ctx->pc = 0x264c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c68: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x264c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x264c6c: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x264c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c70: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x264c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x264c74: 0xc62000f8  lwc1        $f0, 0xF8($s1)
    ctx->pc = 0x264c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c78: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x264c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x264c7c: 0xc62000fc  lwc1        $f0, 0xFC($s1)
    ctx->pc = 0x264c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c80: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x264c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x264c84: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x264c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c88: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x264c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x264c8c: 0xc62000b4  lwc1        $f0, 0xB4($s1)
    ctx->pc = 0x264c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c90: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x264c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x264c94: 0xc62000b8  lwc1        $f0, 0xB8($s1)
    ctx->pc = 0x264c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264c98: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x264c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x264c9c: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x264c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264ca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264CA0u;
    {
        const bool branch_taken_0x264ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264CA0u;
            // 0x264ca4: 0xe62000dc  swc1        $f0, 0xDC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ca0) {
            ctx->pc = 0x264CB0u;
            goto label_264cb0;
        }
    }
    ctx->pc = 0x264CA8u;
label_264ca8:
    // 0x264ca8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x264ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x264cac: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x264cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_264cb0:
    // 0x264cb0: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x264cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264cb4: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x264cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
    // 0x264cb8: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x264cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264cbc: 0xe62000f4  swc1        $f0, 0xF4($s1)
    ctx->pc = 0x264cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
    // 0x264cc0: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x264cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264cc4: 0xe62000f8  swc1        $f0, 0xF8($s1)
    ctx->pc = 0x264cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
    // 0x264cc8: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x264cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264ccc: 0xe62000fc  swc1        $f0, 0xFC($s1)
    ctx->pc = 0x264cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
    // 0x264cd0: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x264cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264cd4: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x264cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x264cd8: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x264cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264cdc: 0xe62000b4  swc1        $f0, 0xB4($s1)
    ctx->pc = 0x264cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x264ce0: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x264ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264ce4: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x264ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x264ce8: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x264ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264cec: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x264cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    // 0x264cf0: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x264cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264cf4: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x264cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x264cf8: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x264cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264cfc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x264cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x264d00: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x264d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264d04: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x264d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x264d08: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x264d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264d0c: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x264d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x264d10: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x264d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264d14: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x264d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    // 0x264d18: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x264d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264d1c: 0xe62000c4  swc1        $f0, 0xC4($s1)
    ctx->pc = 0x264d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
    // 0x264d20: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x264d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264d24: 0xe62000c8  swc1        $f0, 0xC8($s1)
    ctx->pc = 0x264d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
    // 0x264d28: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x264d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264d2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264D2Cu;
    {
        const bool branch_taken_0x264d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264D2Cu;
            // 0x264d30: 0xe62000cc  swc1        $f0, 0xCC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d2c) {
            ctx->pc = 0x264D40u;
            goto label_264d40;
        }
    }
    ctx->pc = 0x264D34u;
    // 0x264d34: 0x0  nop
    ctx->pc = 0x264d34u;
    // NOP
label_264d38:
    // 0x264d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264d3c: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x264d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_264d40:
    // 0x264d40: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x264d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x264d44: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x264d44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x264d48: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x264D48u;
    {
        const bool branch_taken_0x264d48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x264D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264D48u;
            // 0x264d4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d48) {
            ctx->pc = 0x264DB0u;
            goto label_264db0;
        }
    }
    ctx->pc = 0x264D50u;
    // 0x264d50: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x264d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d54: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x264d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_264d58:
    // 0x264d58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x264d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x264d5c: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x264d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264d60: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x264d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x264d64: 0xc4e000a0  lwc1        $f0, 0xA0($a3)
    ctx->pc = 0x264d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264d68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x264d68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x264d6c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x264d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x264d70: 0xc4e10024  lwc1        $f1, 0x24($a3)
    ctx->pc = 0x264d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264d74: 0xc4e000a4  lwc1        $f0, 0xA4($a3)
    ctx->pc = 0x264d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264d78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x264d78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x264d7c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x264d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x264d80: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x264d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264d84: 0xc4e000a8  lwc1        $f0, 0xA8($a3)
    ctx->pc = 0x264d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264d88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x264d88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x264d8c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x264d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x264d90: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x264d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264d94: 0xc4e000ac  lwc1        $f0, 0xAC($a3)
    ctx->pc = 0x264d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264d98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x264d98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x264d9c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x264d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x264da0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x264da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x264da4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x264DA4u;
    {
        const bool branch_taken_0x264da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264DA4u;
            // 0x264da8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264da4) {
            ctx->pc = 0x264D58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264d58;
        }
    }
    ctx->pc = 0x264DACu;
    // 0x264dac: 0x0  nop
    ctx->pc = 0x264dacu;
    // NOP
label_264db0:
    // 0x264db0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x264db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x264db4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x264db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x264db8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x264db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264dbc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x264dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264dc0: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x264dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x264dc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x264dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x264dc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x264dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264dcc: 0x262800e0  addiu       $t0, $s1, 0xE0
    ctx->pc = 0x264dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x264dd0: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x264dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x264dd4: 0x27aa018c  addiu       $t2, $sp, 0x18C
    ctx->pc = 0x264dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x264dd8: 0xc099fcc  jal         func_267F30
    ctx->pc = 0x264DD8u;
    SET_GPR_U32(ctx, 31, 0x264DE0u);
    ctx->pc = 0x264DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264DD8u;
            // 0x264ddc: 0x27ab0110  addiu       $t3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267F30u;
    if (runtime->hasFunction(0x267F30u)) {
        auto targetFn = runtime->lookupFunction(0x267F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DE0u; }
        if (ctx->pc != 0x264DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267F30_0x267f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DE0u; }
        if (ctx->pc != 0x264DE0u) { return; }
    }
    ctx->pc = 0x264DE0u;
label_264de0:
    // 0x264de0: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x264de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x264de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x264de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264de8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x264DE8u;
    {
        const bool branch_taken_0x264de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x264de8) {
            ctx->pc = 0x264E00u;
            goto label_264e00;
        }
    }
    ctx->pc = 0x264DF0u;
    // 0x264df0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x264df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x264df4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x264DF4u;
    {
        const bool branch_taken_0x264df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264DF4u;
            // 0x264df8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264df4) {
            ctx->pc = 0x265188u;
            goto label_265188;
        }
    }
    ctx->pc = 0x264DFCu;
    // 0x264dfc: 0x0  nop
    ctx->pc = 0x264dfcu;
    // NOP
label_264e00:
    // 0x264e00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x264e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x264e04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x264e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x264e08: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x264e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x264e0c: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x264e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x264e10: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x264e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x264e14: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x264E14u;
    {
        const bool branch_taken_0x264e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x264E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264E14u;
            // 0x264e18: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e14) {
            ctx->pc = 0x264E30u;
            goto label_264e30;
        }
    }
    ctx->pc = 0x264E1Cu;
    // 0x264e1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x264e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x264e20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x264e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x264e24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x264E24u;
    {
        const bool branch_taken_0x264e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264E24u;
            // 0x264e28: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e24) {
            ctx->pc = 0x264E48u;
            goto label_264e48;
        }
    }
    ctx->pc = 0x264E2Cu;
    // 0x264e2c: 0x0  nop
    ctx->pc = 0x264e2cu;
    // NOP
label_264e30:
    // 0x264e30: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x264e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x264e34: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264E34u;
    {
        const bool branch_taken_0x264e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x264e34) {
            ctx->pc = 0x264E48u;
            goto label_264e48;
        }
    }
    ctx->pc = 0x264E3Cu;
    // 0x264e3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x264e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x264e40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x264e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x264e44: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x264e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_264e48:
    // 0x264e48: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x264e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x264e4c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x264e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x264e50: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x264E50u;
    {
        const bool branch_taken_0x264e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264e50) {
            ctx->pc = 0x264E98u;
            goto label_264e98;
        }
    }
    ctx->pc = 0x264E58u;
    // 0x264e58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x264e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264e5c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x264e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x264e60: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x264E60u;
    {
        const bool branch_taken_0x264e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x264E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264E60u;
            // 0x264e64: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e60) {
            ctx->pc = 0x264E98u;
            goto label_264e98;
        }
    }
    ctx->pc = 0x264E68u;
    // 0x264e68: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x264e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x264e6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x264e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x264e70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x264e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x264e74: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x264e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x264e78: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x264e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264e7c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x264e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x264e80: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x264e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264e84: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x264e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x264e88: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x264e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264e8c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x264e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x264e90: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x264e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264e94: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x264e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_264e98:
    // 0x264e98: 0x8e25010c  lw          $a1, 0x10C($s1)
    ctx->pc = 0x264e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x264e9c: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x264e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x264ea0: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x264EA0u;
    {
        const bool branch_taken_0x264ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x264EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264EA0u;
            // 0x264ea4: 0x262400fc  addiu       $a0, $s1, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ea0) {
            ctx->pc = 0x264EB8u;
            goto label_264eb8;
        }
    }
    ctx->pc = 0x264EA8u;
    // 0x264ea8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x264ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x264eac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x264eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x264eb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264EB0u;
    {
        const bool branch_taken_0x264eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264EB0u;
            // 0x264eb4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264eb0) {
            ctx->pc = 0x264ED0u;
            goto label_264ed0;
        }
    }
    ctx->pc = 0x264EB8u;
label_264eb8:
    // 0x264eb8: 0x8e2300ec  lw          $v1, 0xEC($s1)
    ctx->pc = 0x264eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x264ebc: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264EBCu;
    {
        const bool branch_taken_0x264ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x264ebc) {
            ctx->pc = 0x264ED0u;
            goto label_264ed0;
        }
    }
    ctx->pc = 0x264EC4u;
    // 0x264ec4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x264ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x264ec8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x264ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x264ecc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x264eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_264ed0:
    // 0x264ed0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x264ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x264ed4: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x264ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x264ed8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x264ED8u;
    {
        const bool branch_taken_0x264ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264ed8) {
            ctx->pc = 0x264F20u;
            goto label_264f20;
        }
    }
    ctx->pc = 0x264EE0u;
    // 0x264ee0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x264ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264ee4: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x264ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x264ee8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x264EE8u;
    {
        const bool branch_taken_0x264ee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x264EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264EE8u;
            // 0x264eec: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ee8) {
            ctx->pc = 0x264F20u;
            goto label_264f20;
        }
    }
    ctx->pc = 0x264EF0u;
    // 0x264ef0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x264ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x264ef4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x264ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x264ef8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x264ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x264efc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x264efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x264f00: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x264f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264f04: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x264f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x264f08: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x264f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264f0c: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x264f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x264f10: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x264f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264f14: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x264f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
    // 0x264f18: 0xc46000ec  lwc1        $f0, 0xEC($v1)
    ctx->pc = 0x264f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264f1c: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x264f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_264f20:
    // 0x264f20: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x264f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x264f24: 0x7a090000  lq          $t1, 0x0($s0)
    ctx->pc = 0x264f24u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x264f28: 0x27ab00a0  addiu       $t3, $sp, 0xA0
    ctx->pc = 0x264f28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x264f2c: 0x27af0090  addiu       $t7, $sp, 0x90
    ctx->pc = 0x264f2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x264f30: 0x27ad0080  addiu       $t5, $sp, 0x80
    ctx->pc = 0x264f30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x264f34: 0x27ac0070  addiu       $t4, $sp, 0x70
    ctx->pc = 0x264f34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x264f38: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x264f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x264f3c: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x264f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x264f40: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x264f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x264f44: 0x27a500c4  addiu       $a1, $sp, 0xC4
    ctx->pc = 0x264f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x264f48: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x264f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x264f4c: 0x246affff  addiu       $t2, $v1, -0x1
    ctx->pc = 0x264f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x264f50: 0x27b400e4  addiu       $s4, $sp, 0xE4
    ctx->pc = 0x264f50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x264f54: 0x7d690000  sq          $t1, 0x0($t3)
    ctx->pc = 0x264f54u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 9));
    // 0x264f58: 0x27a300d4  addiu       $v1, $sp, 0xD4
    ctx->pc = 0x264f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x264f5c: 0x7a0e0010  lq          $t6, 0x10($s0)
    ctx->pc = 0x264f5cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x264f60: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x264f60u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x264f64: 0x1315821  addu        $t3, $t1, $s1
    ctx->pc = 0x264f64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x264f68: 0x27b300c8  addiu       $s3, $sp, 0xC8
    ctx->pc = 0x264f68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x264f6c: 0x256900e0  addiu       $t1, $t3, 0xE0
    ctx->pc = 0x264f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 224));
    // 0x264f70: 0x257500a0  addiu       $s5, $t3, 0xA0
    ctx->pc = 0x264f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 160));
    // 0x264f74: 0x27b200b8  addiu       $s2, $sp, 0xB8
    ctx->pc = 0x264f74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x264f78: 0x27b900d8  addiu       $t9, $sp, 0xD8
    ctx->pc = 0x264f78u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x264f7c: 0x27b800e8  addiu       $t8, $sp, 0xE8
    ctx->pc = 0x264f7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x264f80: 0x7dee0000  sq          $t6, 0x0($t7)
    ctx->pc = 0x264f80u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 14));
    // 0x264f84: 0x7a0b0020  lq          $t3, 0x20($s0)
    ctx->pc = 0x264f84u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x264f88: 0x7dab0000  sq          $t3, 0x0($t5)
    ctx->pc = 0x264f88u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 11));
    // 0x264f8c: 0x7a0b0030  lq          $t3, 0x30($s0)
    ctx->pc = 0x264f8cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x264f90: 0x7d8b0000  sq          $t3, 0x0($t4)
    ctx->pc = 0x264f90u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 11));
    // 0x264f94: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x264f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x264f98: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x264f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x264f9c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x264f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x264fa0: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x264fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264fa4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x264fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264fa8: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x264fa8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x264fac: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x264facu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x264fb0: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x264fb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x264fb4: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x264fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x264fb8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x264fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x264fbc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x264fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264fc0: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x264fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x264fc4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x264fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264fc8: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x264fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x264fcc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x264fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264fd0: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x264fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x264fd4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x264fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264fd8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x264fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x264fdc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x264fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264fe0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x264fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x264fe4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x264fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264fe8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x264fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x264fec: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x264fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264ff0: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x264ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x264ff4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x264ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264ff8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x264ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x264ffc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x264ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265000: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x265000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x265004: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x265004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265008: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x265008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x26500c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x26500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265010: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x265010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x265014: 0x0  nop
    ctx->pc = 0x265014u;
    // NOP
label_265018:
    // 0x265018: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x265018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x26501c: 0xc5260000  lwc1        $f6, 0x0($t1)
    ctx->pc = 0x26501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x265020: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x265020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265024: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x265024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x265028: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x265028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26502c: 0xc5240008  lwc1        $f4, 0x8($t1)
    ctx->pc = 0x26502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x265030: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x265030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265034: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x265034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265038: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x265038u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x26503c: 0x2529fff0  addiu       $t1, $t1, -0x10
    ctx->pc = 0x26503cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x265040: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x265040u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x265044: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x265044u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x265048: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x265048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x26504c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26504cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x265050: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x265050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x265054: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x265054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265058: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x265058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26505c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x26505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265060: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x265060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265064: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x265064u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x265068: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x265068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x26506c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x26506cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x265070: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x265070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x265074: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x265074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x265078: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x265078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x26507c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x26507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265080: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x265080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265084: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x265084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265088: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x265088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26508c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x26508cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x265090: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x265090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x265094: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x265094u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x265098: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x265098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x26509c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26509cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2650a0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x2650a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x2650a4: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x2650a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x2650a8: 0x541ffdb  bgez        $t2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2650A8u;
    {
        const bool branch_taken_0x2650a8 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x2650ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2650A8u;
            // 0x2650ac: 0x26b5fff0  addiu       $s5, $s5, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650a8) {
            ctx->pc = 0x265018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265018;
        }
    }
    ctx->pc = 0x2650B0u;
    // 0x2650b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2650b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2650b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2650b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2650b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2650b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2650bc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2650bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2650c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2650C0u;
    {
        const bool branch_taken_0x2650c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2650C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2650C0u;
            // 0x2650c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650c0) {
            ctx->pc = 0x2650D0u;
            goto label_2650d0;
        }
    }
    ctx->pc = 0x2650C8u;
    // 0x2650c8: 0xc099478  jal         func_2651E0
    ctx->pc = 0x2650C8u;
    SET_GPR_U32(ctx, 31, 0x2650D0u);
    ctx->pc = 0x2651E0u;
    if (runtime->hasFunction(0x2651E0u)) {
        auto targetFn = runtime->lookupFunction(0x2651E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650D0u; }
        if (ctx->pc != 0x2650D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002651E0_0x2651e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650D0u; }
        if (ctx->pc != 0x2650D0u) { return; }
    }
    ctx->pc = 0x2650D0u;
label_2650d0:
    // 0x2650d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2650d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2650d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2650d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2650d8: 0x1464002b  bne         $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2650D8u;
    {
        const bool branch_taken_0x2650d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2650d8) {
            ctx->pc = 0x265188u;
            goto label_265188;
        }
    }
    ctx->pc = 0x2650E0u;
    // 0x2650e0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2650e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2650e4: 0x14640028  bne         $v1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2650E4u;
    {
        const bool branch_taken_0x2650e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2650e4) {
            ctx->pc = 0x265188u;
            goto label_265188;
        }
    }
    ctx->pc = 0x2650ECu;
    // 0x2650ec: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2650ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2650f0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2650f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2650f4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2650f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2650f8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2650f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2650fc: 0x262600a0  addiu       $a2, $s1, 0xA0
    ctx->pc = 0x2650fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x265100: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x265100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x265104: 0x26280130  addiu       $t0, $s1, 0x130
    ctx->pc = 0x265104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x265108: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26510c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x26510cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x265110: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x265110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265114: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x265114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265118: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265118u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26511c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x26511cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x265120: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x265120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265124: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x265124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265128: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265128u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26512c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x26512cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x265130: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x265130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265134: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x265134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265138: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26513c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x26513cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x265140: 0xc62100b0  lwc1        $f1, 0xB0($s1)
    ctx->pc = 0x265140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265144: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x265144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265148: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26514c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x26514cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x265150: 0xc62100b4  lwc1        $f1, 0xB4($s1)
    ctx->pc = 0x265150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265154: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x265154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265158: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26515c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x26515cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x265160: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x265160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265164: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x265164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265168: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26516c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x26516cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x265170: 0xc62100bc  lwc1        $f1, 0xBC($s1)
    ctx->pc = 0x265170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265174: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x265174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265178: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26517c: 0xc09e8e8  jal         func_27A3A0
    ctx->pc = 0x26517Cu;
    SET_GPR_U32(ctx, 31, 0x265184u);
    ctx->pc = 0x265180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26517Cu;
            // 0x265180: 0xe7a000fc  swc1        $f0, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A3A0u;
    if (runtime->hasFunction(0x27A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x27A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265184u; }
        if (ctx->pc != 0x265184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A3A0_0x27a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265184u; }
        if (ctx->pc != 0x265184u) { return; }
    }
    ctx->pc = 0x265184u;
label_265184:
    // 0x265184: 0x0  nop
    ctx->pc = 0x265184u;
    // NOP
label_265188:
    // 0x265188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x265188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26518c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x26518cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265190: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x265190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x265194: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x265194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265198: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x265198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x26519c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x26519cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2651a0: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2651a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2651a4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2651a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2651a8: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2651a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2651ac: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2651acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2651b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2651b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2651b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2651b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2651b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2651b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2651bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2651bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2651c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2651c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2651c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2651c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2651c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2651c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2651cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2651CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2651D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2651CCu;
            // 0x2651d0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2651D4u;
    // 0x2651d4: 0x0  nop
    ctx->pc = 0x2651d4u;
    // NOP
    // 0x2651d8: 0x0  nop
    ctx->pc = 0x2651d8u;
    // NOP
    // 0x2651dc: 0x0  nop
    ctx->pc = 0x2651dcu;
    // NOP
}
