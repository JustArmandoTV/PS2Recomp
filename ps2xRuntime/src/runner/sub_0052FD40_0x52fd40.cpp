#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052FD40
// Address: 0x52fd40 - 0x52fe20
void sub_0052FD40_0x52fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052FD40_0x52fd40");
#endif

    switch (ctx->pc) {
        case 0x52fd40u: goto label_52fd40;
        case 0x52fd44u: goto label_52fd44;
        case 0x52fd48u: goto label_52fd48;
        case 0x52fd4cu: goto label_52fd4c;
        case 0x52fd50u: goto label_52fd50;
        case 0x52fd54u: goto label_52fd54;
        case 0x52fd58u: goto label_52fd58;
        case 0x52fd5cu: goto label_52fd5c;
        case 0x52fd60u: goto label_52fd60;
        case 0x52fd64u: goto label_52fd64;
        case 0x52fd68u: goto label_52fd68;
        case 0x52fd6cu: goto label_52fd6c;
        case 0x52fd70u: goto label_52fd70;
        case 0x52fd74u: goto label_52fd74;
        case 0x52fd78u: goto label_52fd78;
        case 0x52fd7cu: goto label_52fd7c;
        case 0x52fd80u: goto label_52fd80;
        case 0x52fd84u: goto label_52fd84;
        case 0x52fd88u: goto label_52fd88;
        case 0x52fd8cu: goto label_52fd8c;
        case 0x52fd90u: goto label_52fd90;
        case 0x52fd94u: goto label_52fd94;
        case 0x52fd98u: goto label_52fd98;
        case 0x52fd9cu: goto label_52fd9c;
        case 0x52fda0u: goto label_52fda0;
        case 0x52fda4u: goto label_52fda4;
        case 0x52fda8u: goto label_52fda8;
        case 0x52fdacu: goto label_52fdac;
        case 0x52fdb0u: goto label_52fdb0;
        case 0x52fdb4u: goto label_52fdb4;
        case 0x52fdb8u: goto label_52fdb8;
        case 0x52fdbcu: goto label_52fdbc;
        case 0x52fdc0u: goto label_52fdc0;
        case 0x52fdc4u: goto label_52fdc4;
        case 0x52fdc8u: goto label_52fdc8;
        case 0x52fdccu: goto label_52fdcc;
        case 0x52fdd0u: goto label_52fdd0;
        case 0x52fdd4u: goto label_52fdd4;
        case 0x52fdd8u: goto label_52fdd8;
        case 0x52fddcu: goto label_52fddc;
        case 0x52fde0u: goto label_52fde0;
        case 0x52fde4u: goto label_52fde4;
        case 0x52fde8u: goto label_52fde8;
        case 0x52fdecu: goto label_52fdec;
        case 0x52fdf0u: goto label_52fdf0;
        case 0x52fdf4u: goto label_52fdf4;
        case 0x52fdf8u: goto label_52fdf8;
        case 0x52fdfcu: goto label_52fdfc;
        case 0x52fe00u: goto label_52fe00;
        case 0x52fe04u: goto label_52fe04;
        case 0x52fe08u: goto label_52fe08;
        case 0x52fe0cu: goto label_52fe0c;
        case 0x52fe10u: goto label_52fe10;
        case 0x52fe14u: goto label_52fe14;
        case 0x52fe18u: goto label_52fe18;
        case 0x52fe1cu: goto label_52fe1c;
        default: break;
    }

    ctx->pc = 0x52fd40u;

label_52fd40:
    // 0x52fd40: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x52fd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fd44:
    // 0x52fd44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x52fd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52fd48:
    // 0x52fd48: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x52fd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_52fd4c:
    // 0x52fd4c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x52fd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fd50:
    // 0x52fd50: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x52fd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_52fd54:
    // 0x52fd54: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x52fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fd58:
    // 0x52fd58: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x52fd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_52fd5c:
    // 0x52fd5c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x52fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fd60:
    // 0x52fd60: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x52fd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_52fd64:
    // 0x52fd64: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x52fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fd68:
    // 0x52fd68: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x52fd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_52fd6c:
    // 0x52fd6c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x52fd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fd70:
    // 0x52fd70: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x52fd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_52fd74:
    // 0x52fd74: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x52fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fd78:
    // 0x52fd78: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x52fd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_52fd7c:
    // 0x52fd7c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x52fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52fd80:
    // 0x52fd80: 0x3e00008  jr          $ra
label_52fd84:
    if (ctx->pc == 0x52FD84u) {
        ctx->pc = 0x52FD84u;
            // 0x52fd84: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->pc = 0x52FD88u;
        goto label_52fd88;
    }
    ctx->pc = 0x52FD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52FD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FD80u;
            // 0x52fd84: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52FD88u;
label_52fd88:
    // 0x52fd88: 0x0  nop
    ctx->pc = 0x52fd88u;
    // NOP
label_52fd8c:
    // 0x52fd8c: 0x0  nop
    ctx->pc = 0x52fd8cu;
    // NOP
label_52fd90:
    // 0x52fd90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x52fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_52fd94:
    // 0x52fd94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x52fd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_52fd98:
    // 0x52fd98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52fd9c:
    // 0x52fd9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52fd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52fda0:
    // 0x52fda0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x52fda0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52fda4:
    // 0x52fda4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52fda8:
    // 0x52fda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52fdac:
    // 0x52fdac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52fdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52fdb0:
    // 0x52fdb0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x52fdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52fdb4:
    // 0x52fdb4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_52fdb8:
    if (ctx->pc == 0x52FDB8u) {
        ctx->pc = 0x52FDB8u;
            // 0x52fdb8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FDBCu;
        goto label_52fdbc;
    }
    ctx->pc = 0x52FDB4u;
    {
        const bool branch_taken_0x52fdb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FDB4u;
            // 0x52fdb8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52fdb4) {
            ctx->pc = 0x52FDF8u;
            goto label_52fdf8;
        }
    }
    ctx->pc = 0x52FDBCu;
label_52fdbc:
    // 0x52fdbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52fdbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52fdc0:
    // 0x52fdc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52fdc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52fdc4:
    // 0x52fdc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x52fdc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52fdc8:
    // 0x52fdc8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x52fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_52fdcc:
    // 0x52fdcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x52fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_52fdd0:
    // 0x52fdd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x52fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52fdd4:
    // 0x52fdd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52fdd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52fdd8:
    // 0x52fdd8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x52fdd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_52fddc:
    // 0x52fddc: 0x320f809  jalr        $t9
label_52fde0:
    if (ctx->pc == 0x52FDE0u) {
        ctx->pc = 0x52FDE4u;
        goto label_52fde4;
    }
    ctx->pc = 0x52FDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52FDE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52FDE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52FDE4u; }
            if (ctx->pc != 0x52FDE4u) { return; }
        }
        }
    }
    ctx->pc = 0x52FDE4u;
label_52fde4:
    // 0x52fde4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x52fde4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_52fde8:
    // 0x52fde8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52fde8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52fdec:
    // 0x52fdec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x52fdecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_52fdf0:
    // 0x52fdf0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_52fdf4:
    if (ctx->pc == 0x52FDF4u) {
        ctx->pc = 0x52FDF4u;
            // 0x52fdf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x52FDF8u;
        goto label_52fdf8;
    }
    ctx->pc = 0x52FDF0u;
    {
        const bool branch_taken_0x52fdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x52FDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FDF0u;
            // 0x52fdf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52fdf0) {
            ctx->pc = 0x52FDC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52fdc8;
        }
    }
    ctx->pc = 0x52FDF8u;
label_52fdf8:
    // 0x52fdf8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x52fdf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_52fdfc:
    // 0x52fdfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x52fdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_52fe00:
    // 0x52fe00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52fe00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52fe04:
    // 0x52fe04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52fe04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52fe08:
    // 0x52fe08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52fe08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52fe0c:
    // 0x52fe0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52fe0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52fe10:
    // 0x52fe10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52fe10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52fe14:
    // 0x52fe14: 0x3e00008  jr          $ra
label_52fe18:
    if (ctx->pc == 0x52FE18u) {
        ctx->pc = 0x52FE18u;
            // 0x52fe18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x52FE1Cu;
        goto label_52fe1c;
    }
    ctx->pc = 0x52FE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52FE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FE14u;
            // 0x52fe18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52FE1Cu;
label_52fe1c:
    // 0x52fe1c: 0x0  nop
    ctx->pc = 0x52fe1cu;
    // NOP
}
