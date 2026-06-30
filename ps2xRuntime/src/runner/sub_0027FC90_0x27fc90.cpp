#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027FC90
// Address: 0x27fc90 - 0x27fe80
void sub_0027FC90_0x27fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FC90_0x27fc90");
#endif

    switch (ctx->pc) {
        case 0x27fc90u: goto label_27fc90;
        case 0x27fc94u: goto label_27fc94;
        case 0x27fc98u: goto label_27fc98;
        case 0x27fc9cu: goto label_27fc9c;
        case 0x27fca0u: goto label_27fca0;
        case 0x27fca4u: goto label_27fca4;
        case 0x27fca8u: goto label_27fca8;
        case 0x27fcacu: goto label_27fcac;
        case 0x27fcb0u: goto label_27fcb0;
        case 0x27fcb4u: goto label_27fcb4;
        case 0x27fcb8u: goto label_27fcb8;
        case 0x27fcbcu: goto label_27fcbc;
        case 0x27fcc0u: goto label_27fcc0;
        case 0x27fcc4u: goto label_27fcc4;
        case 0x27fcc8u: goto label_27fcc8;
        case 0x27fcccu: goto label_27fccc;
        case 0x27fcd0u: goto label_27fcd0;
        case 0x27fcd4u: goto label_27fcd4;
        case 0x27fcd8u: goto label_27fcd8;
        case 0x27fcdcu: goto label_27fcdc;
        case 0x27fce0u: goto label_27fce0;
        case 0x27fce4u: goto label_27fce4;
        case 0x27fce8u: goto label_27fce8;
        case 0x27fcecu: goto label_27fcec;
        case 0x27fcf0u: goto label_27fcf0;
        case 0x27fcf4u: goto label_27fcf4;
        case 0x27fcf8u: goto label_27fcf8;
        case 0x27fcfcu: goto label_27fcfc;
        case 0x27fd00u: goto label_27fd00;
        case 0x27fd04u: goto label_27fd04;
        case 0x27fd08u: goto label_27fd08;
        case 0x27fd0cu: goto label_27fd0c;
        case 0x27fd10u: goto label_27fd10;
        case 0x27fd14u: goto label_27fd14;
        case 0x27fd18u: goto label_27fd18;
        case 0x27fd1cu: goto label_27fd1c;
        case 0x27fd20u: goto label_27fd20;
        case 0x27fd24u: goto label_27fd24;
        case 0x27fd28u: goto label_27fd28;
        case 0x27fd2cu: goto label_27fd2c;
        case 0x27fd30u: goto label_27fd30;
        case 0x27fd34u: goto label_27fd34;
        case 0x27fd38u: goto label_27fd38;
        case 0x27fd3cu: goto label_27fd3c;
        case 0x27fd40u: goto label_27fd40;
        case 0x27fd44u: goto label_27fd44;
        case 0x27fd48u: goto label_27fd48;
        case 0x27fd4cu: goto label_27fd4c;
        case 0x27fd50u: goto label_27fd50;
        case 0x27fd54u: goto label_27fd54;
        case 0x27fd58u: goto label_27fd58;
        case 0x27fd5cu: goto label_27fd5c;
        case 0x27fd60u: goto label_27fd60;
        case 0x27fd64u: goto label_27fd64;
        case 0x27fd68u: goto label_27fd68;
        case 0x27fd6cu: goto label_27fd6c;
        case 0x27fd70u: goto label_27fd70;
        case 0x27fd74u: goto label_27fd74;
        case 0x27fd78u: goto label_27fd78;
        case 0x27fd7cu: goto label_27fd7c;
        case 0x27fd80u: goto label_27fd80;
        case 0x27fd84u: goto label_27fd84;
        case 0x27fd88u: goto label_27fd88;
        case 0x27fd8cu: goto label_27fd8c;
        case 0x27fd90u: goto label_27fd90;
        case 0x27fd94u: goto label_27fd94;
        case 0x27fd98u: goto label_27fd98;
        case 0x27fd9cu: goto label_27fd9c;
        case 0x27fda0u: goto label_27fda0;
        case 0x27fda4u: goto label_27fda4;
        case 0x27fda8u: goto label_27fda8;
        case 0x27fdacu: goto label_27fdac;
        case 0x27fdb0u: goto label_27fdb0;
        case 0x27fdb4u: goto label_27fdb4;
        case 0x27fdb8u: goto label_27fdb8;
        case 0x27fdbcu: goto label_27fdbc;
        case 0x27fdc0u: goto label_27fdc0;
        case 0x27fdc4u: goto label_27fdc4;
        case 0x27fdc8u: goto label_27fdc8;
        case 0x27fdccu: goto label_27fdcc;
        case 0x27fdd0u: goto label_27fdd0;
        case 0x27fdd4u: goto label_27fdd4;
        case 0x27fdd8u: goto label_27fdd8;
        case 0x27fddcu: goto label_27fddc;
        case 0x27fde0u: goto label_27fde0;
        case 0x27fde4u: goto label_27fde4;
        case 0x27fde8u: goto label_27fde8;
        case 0x27fdecu: goto label_27fdec;
        case 0x27fdf0u: goto label_27fdf0;
        case 0x27fdf4u: goto label_27fdf4;
        case 0x27fdf8u: goto label_27fdf8;
        case 0x27fdfcu: goto label_27fdfc;
        case 0x27fe00u: goto label_27fe00;
        case 0x27fe04u: goto label_27fe04;
        case 0x27fe08u: goto label_27fe08;
        case 0x27fe0cu: goto label_27fe0c;
        case 0x27fe10u: goto label_27fe10;
        case 0x27fe14u: goto label_27fe14;
        case 0x27fe18u: goto label_27fe18;
        case 0x27fe1cu: goto label_27fe1c;
        case 0x27fe20u: goto label_27fe20;
        case 0x27fe24u: goto label_27fe24;
        case 0x27fe28u: goto label_27fe28;
        case 0x27fe2cu: goto label_27fe2c;
        case 0x27fe30u: goto label_27fe30;
        case 0x27fe34u: goto label_27fe34;
        case 0x27fe38u: goto label_27fe38;
        case 0x27fe3cu: goto label_27fe3c;
        case 0x27fe40u: goto label_27fe40;
        case 0x27fe44u: goto label_27fe44;
        case 0x27fe48u: goto label_27fe48;
        case 0x27fe4cu: goto label_27fe4c;
        case 0x27fe50u: goto label_27fe50;
        case 0x27fe54u: goto label_27fe54;
        case 0x27fe58u: goto label_27fe58;
        case 0x27fe5cu: goto label_27fe5c;
        case 0x27fe60u: goto label_27fe60;
        case 0x27fe64u: goto label_27fe64;
        case 0x27fe68u: goto label_27fe68;
        case 0x27fe6cu: goto label_27fe6c;
        case 0x27fe70u: goto label_27fe70;
        case 0x27fe74u: goto label_27fe74;
        case 0x27fe78u: goto label_27fe78;
        case 0x27fe7cu: goto label_27fe7c;
        default: break;
    }

    ctx->pc = 0x27fc90u;

label_27fc90:
    // 0x27fc90: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x27fc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_27fc94:
    // 0x27fc94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27fc98:
    // 0x27fc98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_27fc9c:
    // 0x27fc9c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27fc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27fca0:
    // 0x27fca0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27fca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27fca4:
    // 0x27fca4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x27fca4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27fca8:
    // 0x27fca8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27fcac:
    // 0x27fcac: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x27fcacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27fcb0:
    // 0x27fcb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27fcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27fcb4:
    // 0x27fcb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27fcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27fcb8:
    // 0x27fcb8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x27fcb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27fcbc:
    // 0x27fcbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27fcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27fcc0:
    // 0x27fcc0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x27fcc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_27fcc4:
    // 0x27fcc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27fcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27fcc8:
    // 0x27fcc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27fcc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fccc:
    // 0x27fccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27fcd0:
    // 0x27fcd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27fcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27fcd4:
    // 0x27fcd4: 0xafa700bc  sw          $a3, 0xBC($sp)
    ctx->pc = 0x27fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
label_27fcd8:
    // 0x27fcd8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x27fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27fcdc:
    // 0x27fcdc: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x27fcdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_27fce0:
    // 0x27fce0: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
label_27fce4:
    if (ctx->pc == 0x27FCE4u) {
        ctx->pc = 0x27FCE4u;
            // 0x27fce4: 0xa3a300a0  sb          $v1, 0xA0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x27FCE8u;
        goto label_27fce8;
    }
    ctx->pc = 0x27FCE0u;
    {
        const bool branch_taken_0x27fce0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCE0u;
            // 0x27fce4: 0xa3a300a0  sb          $v1, 0xA0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fce0) {
            ctx->pc = 0x27FE40u;
            goto label_27fe40;
        }
    }
    ctx->pc = 0x27FCE8u;
label_27fce8:
    // 0x27fce8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x27fce8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fcec:
    // 0x27fcec: 0x0  nop
    ctx->pc = 0x27fcecu;
    // NOP
label_27fcf0:
    // 0x27fcf0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x27fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_27fcf4:
    // 0x27fcf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27fcf8:
    // 0x27fcf8: 0x968021  addu        $s0, $a0, $s6
    ctx->pc = 0x27fcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_27fcfc:
    // 0x27fcfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27fd00:
    // 0x27fd00: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x27fd00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_27fd04:
    // 0x27fd04: 0x14830048  bne         $a0, $v1, . + 4 + (0x48 << 2)
label_27fd08:
    if (ctx->pc == 0x27FD08u) {
        ctx->pc = 0x27FD0Cu;
        goto label_27fd0c;
    }
    ctx->pc = 0x27FD04u;
    {
        const bool branch_taken_0x27fd04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fd04) {
            ctx->pc = 0x27FE28u;
            goto label_27fe28;
        }
    }
    ctx->pc = 0x27FD0Cu;
label_27fd0c:
    // 0x27fd0c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x27fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_27fd10:
    // 0x27fd10: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x27fd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_27fd14:
    // 0x27fd14: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x27fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27fd18:
    // 0x27fd18: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x27fd18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_27fd1c:
    // 0x27fd1c: 0xc086850  jal         func_21A140
label_27fd20:
    if (ctx->pc == 0x27FD20u) {
        ctx->pc = 0x27FD20u;
            // 0x27fd20: 0x27a800c0  addiu       $t0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x27FD24u;
        goto label_27fd24;
    }
    ctx->pc = 0x27FD1Cu;
    SET_GPR_U32(ctx, 31, 0x27FD24u);
    ctx->pc = 0x27FD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD1Cu;
            // 0x27fd20: 0x27a800c0  addiu       $t0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A140u;
    if (runtime->hasFunction(0x21A140u)) {
        auto targetFn = runtime->lookupFunction(0x21A140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD24u; }
        if (ctx->pc != 0x27FD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A140_0x21a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD24u; }
        if (ctx->pc != 0x27FD24u) { return; }
    }
    ctx->pc = 0x27FD24u;
label_27fd24:
    // 0x27fd24: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x27fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27fd28:
    // 0x27fd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fd2c:
    // 0x27fd2c: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x27fd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_27fd30:
    // 0x27fd30: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x27fd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fd34:
    // 0x27fd34: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x27fd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27fd38:
    // 0x27fd38: 0xc09fabc  jal         func_27EAF0
label_27fd3c:
    if (ctx->pc == 0x27FD3Cu) {
        ctx->pc = 0x27FD3Cu;
            // 0x27fd3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27FD40u;
        goto label_27fd40;
    }
    ctx->pc = 0x27FD38u;
    SET_GPR_U32(ctx, 31, 0x27FD40u);
    ctx->pc = 0x27FD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD38u;
            // 0x27fd3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EAF0u;
    if (runtime->hasFunction(0x27EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x27EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD40u; }
        if (ctx->pc != 0x27FD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027EAF0_0x27eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD40u; }
        if (ctx->pc != 0x27FD40u) { return; }
    }
    ctx->pc = 0x27FD40u;
label_27fd40:
    // 0x27fd40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27fd40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fd44:
    // 0x27fd44: 0x6400038  bltz        $s2, . + 4 + (0x38 << 2)
label_27fd48:
    if (ctx->pc == 0x27FD48u) {
        ctx->pc = 0x27FD4Cu;
        goto label_27fd4c;
    }
    ctx->pc = 0x27FD44u;
    {
        const bool branch_taken_0x27fd44 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x27fd44) {
            ctx->pc = 0x27FE28u;
            goto label_27fe28;
        }
    }
    ctx->pc = 0x27FD4Cu;
label_27fd4c:
    // 0x27fd4c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_27fd50:
    if (ctx->pc == 0x27FD50u) {
        ctx->pc = 0x27FD54u;
        goto label_27fd54;
    }
    ctx->pc = 0x27FD4Cu;
    {
        const bool branch_taken_0x27fd4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fd4c) {
            ctx->pc = 0x27FD60u;
            goto label_27fd60;
        }
    }
    ctx->pc = 0x27FD54u;
label_27fd54:
    // 0x27fd54: 0x1000003c  b           . + 4 + (0x3C << 2)
label_27fd58:
    if (ctx->pc == 0x27FD58u) {
        ctx->pc = 0x27FD58u;
            // 0x27fd58: 0xa2e00000  sb          $zero, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x27FD5Cu;
        goto label_27fd5c;
    }
    ctx->pc = 0x27FD54u;
    {
        const bool branch_taken_0x27fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD54u;
            // 0x27fd58: 0xa2e00000  sb          $zero, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd54) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FD5Cu;
label_27fd5c:
    // 0x27fd5c: 0x0  nop
    ctx->pc = 0x27fd5cu;
    // NOP
label_27fd60:
    // 0x27fd60: 0xa3a000a0  sb          $zero, 0xA0($sp)
    ctx->pc = 0x27fd60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
label_27fd64:
    // 0x27fd64: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x27fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_27fd68:
    // 0x27fd68: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_27fd6c:
    // 0x27fd6c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27fd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_27fd70:
    // 0x27fd70: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27fd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_27fd74:
    // 0x27fd74: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_27fd78:
    if (ctx->pc == 0x27FD78u) {
        ctx->pc = 0x27FD78u;
            // 0x27fd78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27FD7Cu;
        goto label_27fd7c;
    }
    ctx->pc = 0x27FD74u;
    {
        const bool branch_taken_0x27fd74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD74u;
            // 0x27fd78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd74) {
            ctx->pc = 0x27FD88u;
            goto label_27fd88;
        }
    }
    ctx->pc = 0x27FD7Cu;
label_27fd7c:
    // 0x27fd7c: 0xc0a728c  jal         func_29CA30
label_27fd80:
    if (ctx->pc == 0x27FD80u) {
        ctx->pc = 0x27FD80u;
            // 0x27fd80: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x27FD84u;
        goto label_27fd84;
    }
    ctx->pc = 0x27FD7Cu;
    SET_GPR_U32(ctx, 31, 0x27FD84u);
    ctx->pc = 0x27FD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD7Cu;
            // 0x27fd80: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD84u; }
        if (ctx->pc != 0x27FD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD84u; }
        if (ctx->pc != 0x27FD84u) { return; }
    }
    ctx->pc = 0x27FD84u;
label_27fd84:
    // 0x27fd84: 0x0  nop
    ctx->pc = 0x27fd84u;
    // NOP
label_27fd88:
    // 0x27fd88: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x27fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_27fd8c:
    // 0x27fd8c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_27fd90:
    // 0x27fd90: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x27fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_27fd94:
    // 0x27fd94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_27fd98:
    // 0x27fd98: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x27fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_27fd9c:
    // 0x27fd9c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x27fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27fda0:
    // 0x27fda0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x27fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27fda4:
    // 0x27fda4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27fda8:
    // 0x27fda8: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x27fda8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27fdac:
    // 0x27fdac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x27fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_27fdb0:
    // 0x27fdb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27fdb4:
    // 0x27fdb4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x27fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_27fdb8:
    // 0x27fdb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27fdb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27fdbc:
    // 0x27fdbc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x27fdbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_27fdc0:
    // 0x27fdc0: 0x320f809  jalr        $t9
label_27fdc4:
    if (ctx->pc == 0x27FDC4u) {
        ctx->pc = 0x27FDC8u;
        goto label_27fdc8;
    }
    ctx->pc = 0x27FDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27FDC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27FDC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27FDC8u; }
            if (ctx->pc != 0x27FDC8u) { return; }
        }
        }
    }
    ctx->pc = 0x27FDC8u;
label_27fdc8:
    // 0x27fdc8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x27fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_27fdcc:
    // 0x27fdcc: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_27fdd0:
    if (ctx->pc == 0x27FDD0u) {
        ctx->pc = 0x27FDD4u;
        goto label_27fdd4;
    }
    ctx->pc = 0x27FDCCu;
    {
        const bool branch_taken_0x27fdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fdcc) {
            ctx->pc = 0x27FE20u;
            goto label_27fe20;
        }
    }
    ctx->pc = 0x27FDD4u;
label_27fdd4:
    // 0x27fdd4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27fdd8:
    // 0x27fdd8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x27fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_27fddc:
    // 0x27fddc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x27fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_27fde0:
    // 0x27fde0: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x27fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_27fde4:
    // 0x27fde4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27fde8:
    // 0x27fde8: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x27fde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27fdec:
    // 0x27fdec: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x27fdecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_27fdf0:
    // 0x27fdf0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27fdf4:
    // 0x27fdf4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x27fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_27fdf8:
    // 0x27fdf8: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x27fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_27fdfc:
    // 0x27fdfc: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x27fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_27fe00:
    // 0x27fe00: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x27fe00u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_27fe04:
    // 0x27fe04: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x27fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_27fe08:
    // 0x27fe08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27fe0c:
    // 0x27fe0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27fe10:
    // 0x27fe10: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x27fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_27fe14:
    // 0x27fe14: 0x10000004  b           . + 4 + (0x4 << 2)
label_27fe18:
    if (ctx->pc == 0x27FE18u) {
        ctx->pc = 0x27FE18u;
            // 0x27fe18: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x27FE1Cu;
        goto label_27fe1c;
    }
    ctx->pc = 0x27FE14u;
    {
        const bool branch_taken_0x27fe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE14u;
            // 0x27fe18: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe14) {
            ctx->pc = 0x27FE28u;
            goto label_27fe28;
        }
    }
    ctx->pc = 0x27FE1Cu;
label_27fe1c:
    // 0x27fe1c: 0x0  nop
    ctx->pc = 0x27fe1cu;
    // NOP
label_27fe20:
    // 0x27fe20: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x27fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_27fe24:
    // 0x27fe24: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x27fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_27fe28:
    // 0x27fe28: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x27fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_27fe2c:
    // 0x27fe2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27fe2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_27fe30:
    // 0x27fe30: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x27fe30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27fe34:
    // 0x27fe34: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
label_27fe38:
    if (ctx->pc == 0x27FE38u) {
        ctx->pc = 0x27FE38u;
            // 0x27fe38: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->pc = 0x27FE3Cu;
        goto label_27fe3c;
    }
    ctx->pc = 0x27FE34u;
    {
        const bool branch_taken_0x27fe34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE34u;
            // 0x27fe38: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe34) {
            ctx->pc = 0x27FCF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fcf0;
        }
    }
    ctx->pc = 0x27FE3Cu;
label_27fe3c:
    // 0x27fe3c: 0x0  nop
    ctx->pc = 0x27fe3cu;
    // NOP
label_27fe40:
    // 0x27fe40: 0x83a300a0  lb          $v1, 0xA0($sp)
    ctx->pc = 0x27fe40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_27fe44:
    // 0x27fe44: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x27fe44u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
label_27fe48:
    // 0x27fe48: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27fe48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27fe4c:
    // 0x27fe4c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27fe4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27fe50:
    // 0x27fe50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27fe50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27fe54:
    // 0x27fe54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27fe54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27fe58:
    // 0x27fe58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27fe58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27fe5c:
    // 0x27fe5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27fe5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27fe60:
    // 0x27fe60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27fe60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27fe64:
    // 0x27fe64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27fe64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27fe68:
    // 0x27fe68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27fe68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27fe6c:
    // 0x27fe6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fe6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27fe70:
    // 0x27fe70: 0x3e00008  jr          $ra
label_27fe74:
    if (ctx->pc == 0x27FE74u) {
        ctx->pc = 0x27FE74u;
            // 0x27fe74: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->pc = 0x27FE78u;
        goto label_27fe78;
    }
    ctx->pc = 0x27FE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE70u;
            // 0x27fe74: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27FE78u;
label_27fe78:
    // 0x27fe78: 0x0  nop
    ctx->pc = 0x27fe78u;
    // NOP
label_27fe7c:
    // 0x27fe7c: 0x0  nop
    ctx->pc = 0x27fe7cu;
    // NOP
}
