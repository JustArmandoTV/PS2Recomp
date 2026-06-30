#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039FC70
// Address: 0x39fc70 - 0x39fea0
void sub_0039FC70_0x39fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FC70_0x39fc70");
#endif

    switch (ctx->pc) {
        case 0x39fc70u: goto label_39fc70;
        case 0x39fc74u: goto label_39fc74;
        case 0x39fc78u: goto label_39fc78;
        case 0x39fc7cu: goto label_39fc7c;
        case 0x39fc80u: goto label_39fc80;
        case 0x39fc84u: goto label_39fc84;
        case 0x39fc88u: goto label_39fc88;
        case 0x39fc8cu: goto label_39fc8c;
        case 0x39fc90u: goto label_39fc90;
        case 0x39fc94u: goto label_39fc94;
        case 0x39fc98u: goto label_39fc98;
        case 0x39fc9cu: goto label_39fc9c;
        case 0x39fca0u: goto label_39fca0;
        case 0x39fca4u: goto label_39fca4;
        case 0x39fca8u: goto label_39fca8;
        case 0x39fcacu: goto label_39fcac;
        case 0x39fcb0u: goto label_39fcb0;
        case 0x39fcb4u: goto label_39fcb4;
        case 0x39fcb8u: goto label_39fcb8;
        case 0x39fcbcu: goto label_39fcbc;
        case 0x39fcc0u: goto label_39fcc0;
        case 0x39fcc4u: goto label_39fcc4;
        case 0x39fcc8u: goto label_39fcc8;
        case 0x39fcccu: goto label_39fccc;
        case 0x39fcd0u: goto label_39fcd0;
        case 0x39fcd4u: goto label_39fcd4;
        case 0x39fcd8u: goto label_39fcd8;
        case 0x39fcdcu: goto label_39fcdc;
        case 0x39fce0u: goto label_39fce0;
        case 0x39fce4u: goto label_39fce4;
        case 0x39fce8u: goto label_39fce8;
        case 0x39fcecu: goto label_39fcec;
        case 0x39fcf0u: goto label_39fcf0;
        case 0x39fcf4u: goto label_39fcf4;
        case 0x39fcf8u: goto label_39fcf8;
        case 0x39fcfcu: goto label_39fcfc;
        case 0x39fd00u: goto label_39fd00;
        case 0x39fd04u: goto label_39fd04;
        case 0x39fd08u: goto label_39fd08;
        case 0x39fd0cu: goto label_39fd0c;
        case 0x39fd10u: goto label_39fd10;
        case 0x39fd14u: goto label_39fd14;
        case 0x39fd18u: goto label_39fd18;
        case 0x39fd1cu: goto label_39fd1c;
        case 0x39fd20u: goto label_39fd20;
        case 0x39fd24u: goto label_39fd24;
        case 0x39fd28u: goto label_39fd28;
        case 0x39fd2cu: goto label_39fd2c;
        case 0x39fd30u: goto label_39fd30;
        case 0x39fd34u: goto label_39fd34;
        case 0x39fd38u: goto label_39fd38;
        case 0x39fd3cu: goto label_39fd3c;
        case 0x39fd40u: goto label_39fd40;
        case 0x39fd44u: goto label_39fd44;
        case 0x39fd48u: goto label_39fd48;
        case 0x39fd4cu: goto label_39fd4c;
        case 0x39fd50u: goto label_39fd50;
        case 0x39fd54u: goto label_39fd54;
        case 0x39fd58u: goto label_39fd58;
        case 0x39fd5cu: goto label_39fd5c;
        case 0x39fd60u: goto label_39fd60;
        case 0x39fd64u: goto label_39fd64;
        case 0x39fd68u: goto label_39fd68;
        case 0x39fd6cu: goto label_39fd6c;
        case 0x39fd70u: goto label_39fd70;
        case 0x39fd74u: goto label_39fd74;
        case 0x39fd78u: goto label_39fd78;
        case 0x39fd7cu: goto label_39fd7c;
        case 0x39fd80u: goto label_39fd80;
        case 0x39fd84u: goto label_39fd84;
        case 0x39fd88u: goto label_39fd88;
        case 0x39fd8cu: goto label_39fd8c;
        case 0x39fd90u: goto label_39fd90;
        case 0x39fd94u: goto label_39fd94;
        case 0x39fd98u: goto label_39fd98;
        case 0x39fd9cu: goto label_39fd9c;
        case 0x39fda0u: goto label_39fda0;
        case 0x39fda4u: goto label_39fda4;
        case 0x39fda8u: goto label_39fda8;
        case 0x39fdacu: goto label_39fdac;
        case 0x39fdb0u: goto label_39fdb0;
        case 0x39fdb4u: goto label_39fdb4;
        case 0x39fdb8u: goto label_39fdb8;
        case 0x39fdbcu: goto label_39fdbc;
        case 0x39fdc0u: goto label_39fdc0;
        case 0x39fdc4u: goto label_39fdc4;
        case 0x39fdc8u: goto label_39fdc8;
        case 0x39fdccu: goto label_39fdcc;
        case 0x39fdd0u: goto label_39fdd0;
        case 0x39fdd4u: goto label_39fdd4;
        case 0x39fdd8u: goto label_39fdd8;
        case 0x39fddcu: goto label_39fddc;
        case 0x39fde0u: goto label_39fde0;
        case 0x39fde4u: goto label_39fde4;
        case 0x39fde8u: goto label_39fde8;
        case 0x39fdecu: goto label_39fdec;
        case 0x39fdf0u: goto label_39fdf0;
        case 0x39fdf4u: goto label_39fdf4;
        case 0x39fdf8u: goto label_39fdf8;
        case 0x39fdfcu: goto label_39fdfc;
        case 0x39fe00u: goto label_39fe00;
        case 0x39fe04u: goto label_39fe04;
        case 0x39fe08u: goto label_39fe08;
        case 0x39fe0cu: goto label_39fe0c;
        case 0x39fe10u: goto label_39fe10;
        case 0x39fe14u: goto label_39fe14;
        case 0x39fe18u: goto label_39fe18;
        case 0x39fe1cu: goto label_39fe1c;
        case 0x39fe20u: goto label_39fe20;
        case 0x39fe24u: goto label_39fe24;
        case 0x39fe28u: goto label_39fe28;
        case 0x39fe2cu: goto label_39fe2c;
        case 0x39fe30u: goto label_39fe30;
        case 0x39fe34u: goto label_39fe34;
        case 0x39fe38u: goto label_39fe38;
        case 0x39fe3cu: goto label_39fe3c;
        case 0x39fe40u: goto label_39fe40;
        case 0x39fe44u: goto label_39fe44;
        case 0x39fe48u: goto label_39fe48;
        case 0x39fe4cu: goto label_39fe4c;
        case 0x39fe50u: goto label_39fe50;
        case 0x39fe54u: goto label_39fe54;
        case 0x39fe58u: goto label_39fe58;
        case 0x39fe5cu: goto label_39fe5c;
        case 0x39fe60u: goto label_39fe60;
        case 0x39fe64u: goto label_39fe64;
        case 0x39fe68u: goto label_39fe68;
        case 0x39fe6cu: goto label_39fe6c;
        case 0x39fe70u: goto label_39fe70;
        case 0x39fe74u: goto label_39fe74;
        case 0x39fe78u: goto label_39fe78;
        case 0x39fe7cu: goto label_39fe7c;
        case 0x39fe80u: goto label_39fe80;
        case 0x39fe84u: goto label_39fe84;
        case 0x39fe88u: goto label_39fe88;
        case 0x39fe8cu: goto label_39fe8c;
        case 0x39fe90u: goto label_39fe90;
        case 0x39fe94u: goto label_39fe94;
        case 0x39fe98u: goto label_39fe98;
        case 0x39fe9cu: goto label_39fe9c;
        default: break;
    }

    ctx->pc = 0x39fc70u;

label_39fc70:
    // 0x39fc70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39fc74:
    // 0x39fc74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39fc78:
    // 0x39fc78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39fc7c:
    // 0x39fc7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39fc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39fc80:
    // 0x39fc80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39fc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39fc84:
    // 0x39fc84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39fc84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39fc88:
    // 0x39fc88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39fc8c:
    // 0x39fc8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39fc8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39fc90:
    // 0x39fc90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39fc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39fc94:
    // 0x39fc94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39fc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39fc98:
    // 0x39fc98: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x39fc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_39fc9c:
    // 0x39fc9c: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x39fc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_39fca0:
    // 0x39fca0: 0xc0a7a88  jal         func_29EA20
label_39fca4:
    if (ctx->pc == 0x39FCA4u) {
        ctx->pc = 0x39FCA4u;
            // 0x39fca4: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x39FCA8u;
        goto label_39fca8;
    }
    ctx->pc = 0x39FCA0u;
    SET_GPR_U32(ctx, 31, 0x39FCA8u);
    ctx->pc = 0x39FCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FCA0u;
            // 0x39fca4: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FCA8u; }
        if (ctx->pc != 0x39FCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FCA8u; }
        if (ctx->pc != 0x39FCA8u) { return; }
    }
    ctx->pc = 0x39FCA8u;
label_39fca8:
    // 0x39fca8: 0x24030210  addiu       $v1, $zero, 0x210
    ctx->pc = 0x39fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_39fcac:
    // 0x39fcac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39fcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39fcb0:
    // 0x39fcb0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_39fcb4:
    if (ctx->pc == 0x39FCB4u) {
        ctx->pc = 0x39FCB4u;
            // 0x39fcb4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x39FCB8u;
        goto label_39fcb8;
    }
    ctx->pc = 0x39FCB0u;
    {
        const bool branch_taken_0x39fcb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FCB0u;
            // 0x39fcb4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fcb0) {
            ctx->pc = 0x39FCD4u;
            goto label_39fcd4;
        }
    }
    ctx->pc = 0x39FCB8u;
label_39fcb8:
    // 0x39fcb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39fcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39fcbc:
    // 0x39fcbc: 0xc088ef4  jal         func_223BD0
label_39fcc0:
    if (ctx->pc == 0x39FCC0u) {
        ctx->pc = 0x39FCC0u;
            // 0x39fcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FCC4u;
        goto label_39fcc4;
    }
    ctx->pc = 0x39FCBCu;
    SET_GPR_U32(ctx, 31, 0x39FCC4u);
    ctx->pc = 0x39FCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FCBCu;
            // 0x39fcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FCC4u; }
        if (ctx->pc != 0x39FCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FCC4u; }
        if (ctx->pc != 0x39FCC4u) { return; }
    }
    ctx->pc = 0x39FCC4u;
label_39fcc4:
    // 0x39fcc4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39fcc8:
    // 0x39fcc8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x39fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_39fccc:
    // 0x39fccc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_39fcd0:
    // 0x39fcd0: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x39fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_39fcd4:
    // 0x39fcd4: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x39fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_39fcd8:
    // 0x39fcd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39fcdc:
    // 0x39fcdc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39fce0:
    // 0x39fce0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39fce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39fce4:
    // 0x39fce4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39fce8:
    // 0x39fce8: 0xc08c164  jal         func_230590
label_39fcec:
    if (ctx->pc == 0x39FCECu) {
        ctx->pc = 0x39FCECu;
            // 0x39fcec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39FCF0u;
        goto label_39fcf0;
    }
    ctx->pc = 0x39FCE8u;
    SET_GPR_U32(ctx, 31, 0x39FCF0u);
    ctx->pc = 0x39FCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FCE8u;
            // 0x39fcec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FCF0u; }
        if (ctx->pc != 0x39FCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FCF0u; }
        if (ctx->pc != 0x39FCF0u) { return; }
    }
    ctx->pc = 0x39FCF0u;
label_39fcf0:
    // 0x39fcf0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x39fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_39fcf4:
    // 0x39fcf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39fcf8:
    // 0x39fcf8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39fcfc:
    // 0x39fcfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39fcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39fd00:
    // 0x39fd00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39fd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fd04:
    // 0x39fd04: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39fd08:
    // 0x39fd08: 0xc08bff0  jal         func_22FFC0
label_39fd0c:
    if (ctx->pc == 0x39FD0Cu) {
        ctx->pc = 0x39FD0Cu;
            // 0x39fd0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FD10u;
        goto label_39fd10;
    }
    ctx->pc = 0x39FD08u;
    SET_GPR_U32(ctx, 31, 0x39FD10u);
    ctx->pc = 0x39FD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FD08u;
            // 0x39fd0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FD10u; }
        if (ctx->pc != 0x39FD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FD10u; }
        if (ctx->pc != 0x39FD10u) { return; }
    }
    ctx->pc = 0x39FD10u;
label_39fd10:
    // 0x39fd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39fd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39fd14:
    // 0x39fd14: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x39fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39fd18:
    // 0x39fd18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39fd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fd1c:
    // 0x39fd1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39fd1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fd20:
    // 0x39fd20: 0xc08914c  jal         func_224530
label_39fd24:
    if (ctx->pc == 0x39FD24u) {
        ctx->pc = 0x39FD24u;
            // 0x39fd24: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x39FD28u;
        goto label_39fd28;
    }
    ctx->pc = 0x39FD20u;
    SET_GPR_U32(ctx, 31, 0x39FD28u);
    ctx->pc = 0x39FD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FD20u;
            // 0x39fd24: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FD28u; }
        if (ctx->pc != 0x39FD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FD28u; }
        if (ctx->pc != 0x39FD28u) { return; }
    }
    ctx->pc = 0x39FD28u;
label_39fd28:
    // 0x39fd28: 0xae300040  sw          $s0, 0x40($s1)
    ctx->pc = 0x39fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
label_39fd2c:
    // 0x39fd2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39fd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39fd30:
    // 0x39fd30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39fd30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39fd34:
    // 0x39fd34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39fd34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39fd38:
    // 0x39fd38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39fd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39fd3c:
    // 0x39fd3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39fd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39fd40:
    // 0x39fd40: 0x3e00008  jr          $ra
label_39fd44:
    if (ctx->pc == 0x39FD44u) {
        ctx->pc = 0x39FD44u;
            // 0x39fd44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39FD48u;
        goto label_39fd48;
    }
    ctx->pc = 0x39FD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FD40u;
            // 0x39fd44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39FD48u;
label_39fd48:
    // 0x39fd48: 0x0  nop
    ctx->pc = 0x39fd48u;
    // NOP
label_39fd4c:
    // 0x39fd4c: 0x0  nop
    ctx->pc = 0x39fd4cu;
    // NOP
label_39fd50:
    // 0x39fd50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39fd54:
    // 0x39fd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39fd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39fd58:
    // 0x39fd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39fd5c:
    // 0x39fd5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39fd5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39fd60:
    // 0x39fd60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39fd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39fd64:
    // 0x39fd64: 0xc04c968  jal         func_1325A0
label_39fd68:
    if (ctx->pc == 0x39FD68u) {
        ctx->pc = 0x39FD68u;
            // 0x39fd68: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x39FD6Cu;
        goto label_39fd6c;
    }
    ctx->pc = 0x39FD64u;
    SET_GPR_U32(ctx, 31, 0x39FD6Cu);
    ctx->pc = 0x39FD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FD64u;
            // 0x39fd68: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FD6Cu; }
        if (ctx->pc != 0x39FD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FD6Cu; }
        if (ctx->pc != 0x39FD6Cu) { return; }
    }
    ctx->pc = 0x39FD6Cu;
label_39fd6c:
    // 0x39fd6c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x39fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_39fd70:
    // 0x39fd70: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x39fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_39fd74:
    // 0x39fd74: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x39fd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_39fd78:
    // 0x39fd78: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x39fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_39fd7c:
    // 0x39fd7c: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x39fd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_39fd80:
    // 0x39fd80: 0xc088b74  jal         func_222DD0
label_39fd84:
    if (ctx->pc == 0x39FD84u) {
        ctx->pc = 0x39FD84u;
            // 0x39fd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FD88u;
        goto label_39fd88;
    }
    ctx->pc = 0x39FD80u;
    SET_GPR_U32(ctx, 31, 0x39FD88u);
    ctx->pc = 0x39FD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FD80u;
            // 0x39fd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FD88u; }
        if (ctx->pc != 0x39FD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FD88u; }
        if (ctx->pc != 0x39FD88u) { return; }
    }
    ctx->pc = 0x39FD88u;
label_39fd88:
    // 0x39fd88: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x39fd88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39fd8c:
    // 0x39fd8c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x39fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_39fd90:
    // 0x39fd90: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39fd90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39fd94:
    // 0x39fd94: 0x320f809  jalr        $t9
label_39fd98:
    if (ctx->pc == 0x39FD98u) {
        ctx->pc = 0x39FD98u;
            // 0x39fd98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39FD9Cu;
        goto label_39fd9c;
    }
    ctx->pc = 0x39FD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39FD9Cu);
        ctx->pc = 0x39FD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FD94u;
            // 0x39fd98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39FD9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39FD9Cu; }
            if (ctx->pc != 0x39FD9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39FD9Cu;
label_39fd9c:
    // 0x39fd9c: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x39fd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_39fda0:
    // 0x39fda0: 0xc088b74  jal         func_222DD0
label_39fda4:
    if (ctx->pc == 0x39FDA4u) {
        ctx->pc = 0x39FDA4u;
            // 0x39fda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FDA8u;
        goto label_39fda8;
    }
    ctx->pc = 0x39FDA0u;
    SET_GPR_U32(ctx, 31, 0x39FDA8u);
    ctx->pc = 0x39FDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FDA0u;
            // 0x39fda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FDA8u; }
        if (ctx->pc != 0x39FDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FDA8u; }
        if (ctx->pc != 0x39FDA8u) { return; }
    }
    ctx->pc = 0x39FDA8u;
label_39fda8:
    // 0x39fda8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x39fda8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39fdac:
    // 0x39fdac: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x39fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_39fdb0:
    // 0x39fdb0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39fdb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39fdb4:
    // 0x39fdb4: 0x320f809  jalr        $t9
label_39fdb8:
    if (ctx->pc == 0x39FDB8u) {
        ctx->pc = 0x39FDB8u;
            // 0x39fdb8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39FDBCu;
        goto label_39fdbc;
    }
    ctx->pc = 0x39FDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39FDBCu);
        ctx->pc = 0x39FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FDB4u;
            // 0x39fdb8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39FDBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39FDBCu; }
            if (ctx->pc != 0x39FDBCu) { return; }
        }
        }
    }
    ctx->pc = 0x39FDBCu;
label_39fdbc:
    // 0x39fdbc: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x39fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_39fdc0:
    // 0x39fdc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39fdc4:
    // 0x39fdc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39fdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fdc8:
    // 0x39fdc8: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x39fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_39fdcc:
    // 0x39fdcc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39fdd0:
    // 0x39fdd0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39fdd4:
    // 0x39fdd4: 0xc08bff0  jal         func_22FFC0
label_39fdd8:
    if (ctx->pc == 0x39FDD8u) {
        ctx->pc = 0x39FDD8u;
            // 0x39fdd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FDDCu;
        goto label_39fddc;
    }
    ctx->pc = 0x39FDD4u;
    SET_GPR_U32(ctx, 31, 0x39FDDCu);
    ctx->pc = 0x39FDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FDD4u;
            // 0x39fdd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FDDCu; }
        if (ctx->pc != 0x39FDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FDDCu; }
        if (ctx->pc != 0x39FDDCu) { return; }
    }
    ctx->pc = 0x39FDDCu;
label_39fddc:
    // 0x39fddc: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x39fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_39fde0:
    // 0x39fde0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x39fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39fde4:
    // 0x39fde4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39fde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fde8:
    // 0x39fde8: 0xc08914c  jal         func_224530
label_39fdec:
    if (ctx->pc == 0x39FDECu) {
        ctx->pc = 0x39FDECu;
            // 0x39fdec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FDF0u;
        goto label_39fdf0;
    }
    ctx->pc = 0x39FDE8u;
    SET_GPR_U32(ctx, 31, 0x39FDF0u);
    ctx->pc = 0x39FDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FDE8u;
            // 0x39fdec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FDF0u; }
        if (ctx->pc != 0x39FDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FDF0u; }
        if (ctx->pc != 0x39FDF0u) { return; }
    }
    ctx->pc = 0x39FDF0u;
label_39fdf0:
    // 0x39fdf0: 0xc0e7d30  jal         func_39F4C0
label_39fdf4:
    if (ctx->pc == 0x39FDF4u) {
        ctx->pc = 0x39FDF4u;
            // 0x39fdf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FDF8u;
        goto label_39fdf8;
    }
    ctx->pc = 0x39FDF0u;
    SET_GPR_U32(ctx, 31, 0x39FDF8u);
    ctx->pc = 0x39FDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FDF0u;
            // 0x39fdf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4C0u;
    if (runtime->hasFunction(0x39F4C0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FDF8u; }
        if (ctx->pc != 0x39FDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4C0_0x39f4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FDF8u; }
        if (ctx->pc != 0x39FDF8u) { return; }
    }
    ctx->pc = 0x39FDF8u;
label_39fdf8:
    // 0x39fdf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39fdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39fdfc:
    // 0x39fdfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39fdfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39fe00:
    // 0x39fe00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39fe00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39fe04:
    // 0x39fe04: 0x3e00008  jr          $ra
label_39fe08:
    if (ctx->pc == 0x39FE08u) {
        ctx->pc = 0x39FE08u;
            // 0x39fe08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x39FE0Cu;
        goto label_39fe0c;
    }
    ctx->pc = 0x39FE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FE04u;
            // 0x39fe08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39FE0Cu;
label_39fe0c:
    // 0x39fe0c: 0x0  nop
    ctx->pc = 0x39fe0cu;
    // NOP
label_39fe10:
    // 0x39fe10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39fe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39fe14:
    // 0x39fe14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39fe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39fe18:
    // 0x39fe18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39fe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39fe1c:
    // 0x39fe1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39fe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39fe20:
    // 0x39fe20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39fe20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39fe24:
    // 0x39fe24: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_39fe28:
    if (ctx->pc == 0x39FE28u) {
        ctx->pc = 0x39FE28u;
            // 0x39fe28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FE2Cu;
        goto label_39fe2c;
    }
    ctx->pc = 0x39FE24u;
    {
        const bool branch_taken_0x39fe24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FE24u;
            // 0x39fe28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe24) {
            ctx->pc = 0x39FE80u;
            goto label_39fe80;
        }
    }
    ctx->pc = 0x39FE2Cu;
label_39fe2c:
    // 0x39fe2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39fe30:
    // 0x39fe30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39fe34:
    // 0x39fe34: 0x24638690  addiu       $v1, $v1, -0x7970
    ctx->pc = 0x39fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936208));
label_39fe38:
    // 0x39fe38: 0x244286c8  addiu       $v0, $v0, -0x7938
    ctx->pc = 0x39fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936264));
label_39fe3c:
    // 0x39fe3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39fe40:
    // 0x39fe40: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_39fe44:
    if (ctx->pc == 0x39FE44u) {
        ctx->pc = 0x39FE44u;
            // 0x39fe44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x39FE48u;
        goto label_39fe48;
    }
    ctx->pc = 0x39FE40u;
    {
        const bool branch_taken_0x39fe40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FE40u;
            // 0x39fe44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe40) {
            ctx->pc = 0x39FE68u;
            goto label_39fe68;
        }
    }
    ctx->pc = 0x39FE48u;
label_39fe48:
    // 0x39fe48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39fe4c:
    // 0x39fe4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39fe50:
    // 0x39fe50: 0x24638740  addiu       $v1, $v1, -0x78C0
    ctx->pc = 0x39fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936384));
label_39fe54:
    // 0x39fe54: 0x24428778  addiu       $v0, $v0, -0x7888
    ctx->pc = 0x39fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936440));
label_39fe58:
    // 0x39fe58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39fe5c:
    // 0x39fe5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39fe5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fe60:
    // 0x39fe60: 0xc0e7fa8  jal         func_39FEA0
label_39fe64:
    if (ctx->pc == 0x39FE64u) {
        ctx->pc = 0x39FE64u;
            // 0x39fe64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x39FE68u;
        goto label_39fe68;
    }
    ctx->pc = 0x39FE60u;
    SET_GPR_U32(ctx, 31, 0x39FE68u);
    ctx->pc = 0x39FE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FE60u;
            // 0x39fe64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39FEA0u;
    if (runtime->hasFunction(0x39FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x39FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FE68u; }
        if (ctx->pc != 0x39FE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039FEA0_0x39fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FE68u; }
        if (ctx->pc != 0x39FE68u) { return; }
    }
    ctx->pc = 0x39FE68u;
label_39fe68:
    // 0x39fe68: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x39fe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_39fe6c:
    // 0x39fe6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39fe6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39fe70:
    // 0x39fe70: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39fe74:
    if (ctx->pc == 0x39FE74u) {
        ctx->pc = 0x39FE74u;
            // 0x39fe74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FE78u;
        goto label_39fe78;
    }
    ctx->pc = 0x39FE70u;
    {
        const bool branch_taken_0x39fe70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39fe70) {
            ctx->pc = 0x39FE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39FE70u;
            // 0x39fe74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FE84u;
            goto label_39fe84;
        }
    }
    ctx->pc = 0x39FE78u;
label_39fe78:
    // 0x39fe78: 0xc0400a8  jal         func_1002A0
label_39fe7c:
    if (ctx->pc == 0x39FE7Cu) {
        ctx->pc = 0x39FE7Cu;
            // 0x39fe7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FE80u;
        goto label_39fe80;
    }
    ctx->pc = 0x39FE78u;
    SET_GPR_U32(ctx, 31, 0x39FE80u);
    ctx->pc = 0x39FE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FE78u;
            // 0x39fe7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FE80u; }
        if (ctx->pc != 0x39FE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FE80u; }
        if (ctx->pc != 0x39FE80u) { return; }
    }
    ctx->pc = 0x39FE80u;
label_39fe80:
    // 0x39fe80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39fe80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39fe84:
    // 0x39fe84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39fe84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39fe88:
    // 0x39fe88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39fe88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39fe8c:
    // 0x39fe8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39fe8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39fe90:
    // 0x39fe90: 0x3e00008  jr          $ra
label_39fe94:
    if (ctx->pc == 0x39FE94u) {
        ctx->pc = 0x39FE94u;
            // 0x39fe94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39FE98u;
        goto label_39fe98;
    }
    ctx->pc = 0x39FE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FE90u;
            // 0x39fe94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39FE98u;
label_39fe98:
    // 0x39fe98: 0x0  nop
    ctx->pc = 0x39fe98u;
    // NOP
label_39fe9c:
    // 0x39fe9c: 0x0  nop
    ctx->pc = 0x39fe9cu;
    // NOP
}
