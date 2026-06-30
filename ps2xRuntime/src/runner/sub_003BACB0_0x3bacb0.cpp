#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BACB0
// Address: 0x3bacb0 - 0x3bae50
void sub_003BACB0_0x3bacb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BACB0_0x3bacb0");
#endif

    switch (ctx->pc) {
        case 0x3bacb0u: goto label_3bacb0;
        case 0x3bacb4u: goto label_3bacb4;
        case 0x3bacb8u: goto label_3bacb8;
        case 0x3bacbcu: goto label_3bacbc;
        case 0x3bacc0u: goto label_3bacc0;
        case 0x3bacc4u: goto label_3bacc4;
        case 0x3bacc8u: goto label_3bacc8;
        case 0x3bacccu: goto label_3baccc;
        case 0x3bacd0u: goto label_3bacd0;
        case 0x3bacd4u: goto label_3bacd4;
        case 0x3bacd8u: goto label_3bacd8;
        case 0x3bacdcu: goto label_3bacdc;
        case 0x3bace0u: goto label_3bace0;
        case 0x3bace4u: goto label_3bace4;
        case 0x3bace8u: goto label_3bace8;
        case 0x3bacecu: goto label_3bacec;
        case 0x3bacf0u: goto label_3bacf0;
        case 0x3bacf4u: goto label_3bacf4;
        case 0x3bacf8u: goto label_3bacf8;
        case 0x3bacfcu: goto label_3bacfc;
        case 0x3bad00u: goto label_3bad00;
        case 0x3bad04u: goto label_3bad04;
        case 0x3bad08u: goto label_3bad08;
        case 0x3bad0cu: goto label_3bad0c;
        case 0x3bad10u: goto label_3bad10;
        case 0x3bad14u: goto label_3bad14;
        case 0x3bad18u: goto label_3bad18;
        case 0x3bad1cu: goto label_3bad1c;
        case 0x3bad20u: goto label_3bad20;
        case 0x3bad24u: goto label_3bad24;
        case 0x3bad28u: goto label_3bad28;
        case 0x3bad2cu: goto label_3bad2c;
        case 0x3bad30u: goto label_3bad30;
        case 0x3bad34u: goto label_3bad34;
        case 0x3bad38u: goto label_3bad38;
        case 0x3bad3cu: goto label_3bad3c;
        case 0x3bad40u: goto label_3bad40;
        case 0x3bad44u: goto label_3bad44;
        case 0x3bad48u: goto label_3bad48;
        case 0x3bad4cu: goto label_3bad4c;
        case 0x3bad50u: goto label_3bad50;
        case 0x3bad54u: goto label_3bad54;
        case 0x3bad58u: goto label_3bad58;
        case 0x3bad5cu: goto label_3bad5c;
        case 0x3bad60u: goto label_3bad60;
        case 0x3bad64u: goto label_3bad64;
        case 0x3bad68u: goto label_3bad68;
        case 0x3bad6cu: goto label_3bad6c;
        case 0x3bad70u: goto label_3bad70;
        case 0x3bad74u: goto label_3bad74;
        case 0x3bad78u: goto label_3bad78;
        case 0x3bad7cu: goto label_3bad7c;
        case 0x3bad80u: goto label_3bad80;
        case 0x3bad84u: goto label_3bad84;
        case 0x3bad88u: goto label_3bad88;
        case 0x3bad8cu: goto label_3bad8c;
        case 0x3bad90u: goto label_3bad90;
        case 0x3bad94u: goto label_3bad94;
        case 0x3bad98u: goto label_3bad98;
        case 0x3bad9cu: goto label_3bad9c;
        case 0x3bada0u: goto label_3bada0;
        case 0x3bada4u: goto label_3bada4;
        case 0x3bada8u: goto label_3bada8;
        case 0x3badacu: goto label_3badac;
        case 0x3badb0u: goto label_3badb0;
        case 0x3badb4u: goto label_3badb4;
        case 0x3badb8u: goto label_3badb8;
        case 0x3badbcu: goto label_3badbc;
        case 0x3badc0u: goto label_3badc0;
        case 0x3badc4u: goto label_3badc4;
        case 0x3badc8u: goto label_3badc8;
        case 0x3badccu: goto label_3badcc;
        case 0x3badd0u: goto label_3badd0;
        case 0x3badd4u: goto label_3badd4;
        case 0x3badd8u: goto label_3badd8;
        case 0x3baddcu: goto label_3baddc;
        case 0x3bade0u: goto label_3bade0;
        case 0x3bade4u: goto label_3bade4;
        case 0x3bade8u: goto label_3bade8;
        case 0x3badecu: goto label_3badec;
        case 0x3badf0u: goto label_3badf0;
        case 0x3badf4u: goto label_3badf4;
        case 0x3badf8u: goto label_3badf8;
        case 0x3badfcu: goto label_3badfc;
        case 0x3bae00u: goto label_3bae00;
        case 0x3bae04u: goto label_3bae04;
        case 0x3bae08u: goto label_3bae08;
        case 0x3bae0cu: goto label_3bae0c;
        case 0x3bae10u: goto label_3bae10;
        case 0x3bae14u: goto label_3bae14;
        case 0x3bae18u: goto label_3bae18;
        case 0x3bae1cu: goto label_3bae1c;
        case 0x3bae20u: goto label_3bae20;
        case 0x3bae24u: goto label_3bae24;
        case 0x3bae28u: goto label_3bae28;
        case 0x3bae2cu: goto label_3bae2c;
        case 0x3bae30u: goto label_3bae30;
        case 0x3bae34u: goto label_3bae34;
        case 0x3bae38u: goto label_3bae38;
        case 0x3bae3cu: goto label_3bae3c;
        case 0x3bae40u: goto label_3bae40;
        case 0x3bae44u: goto label_3bae44;
        case 0x3bae48u: goto label_3bae48;
        case 0x3bae4cu: goto label_3bae4c;
        default: break;
    }

    ctx->pc = 0x3bacb0u;

label_3bacb0:
    // 0x3bacb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3bacb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3bacb4:
    // 0x3bacb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bacb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3bacb8:
    // 0x3bacb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bacb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3bacbc:
    // 0x3bacbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bacbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3bacc0:
    // 0x3bacc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bacc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bacc4:
    // 0x3bacc4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3bacc4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3bacc8:
    // 0x3bacc8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3bacc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3baccc:
    // 0x3baccc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3bacccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3bacd0:
    // 0x3bacd0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bacd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3bacd4:
    // 0x3bacd4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3bacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3bacd8:
    // 0x3bacd8: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
label_3bacdc:
    if (ctx->pc == 0x3BACDCu) {
        ctx->pc = 0x3BACDCu;
            // 0x3bacdc: 0x460065c6  mov.s       $f23, $f12 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3BACE0u;
        goto label_3bace0;
    }
    ctx->pc = 0x3BACD8u;
    {
        const bool branch_taken_0x3bacd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BACDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BACD8u;
            // 0x3bacdc: 0x460065c6  mov.s       $f23, $f12 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bacd8) {
            ctx->pc = 0x3BAE20u;
            goto label_3bae20;
        }
    }
    ctx->pc = 0x3BACE0u;
label_3bace0:
    // 0x3bace0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3bace0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bace4:
    // 0x3bace4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3bace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3bace8:
    // 0x3bace8: 0x8ca40e34  lw          $a0, 0xE34($a1)
    ctx->pc = 0x3bace8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3636)));
label_3bacec:
    // 0x3bacec: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_3bacf0:
    if (ctx->pc == 0x3BACF0u) {
        ctx->pc = 0x3BACF4u;
        goto label_3bacf4;
    }
    ctx->pc = 0x3BACECu;
    {
        const bool branch_taken_0x3bacec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bacec) {
            ctx->pc = 0x3BAD0Cu;
            goto label_3bad0c;
        }
    }
    ctx->pc = 0x3BACF4u;
label_3bacf4:
    // 0x3bacf4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3bacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3bacf8:
    // 0x3bacf8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3bacf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3bacfc:
    // 0x3bacfc: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3bacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3bad00:
    // 0x3bad00: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3bad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3bad04:
    // 0x3bad04: 0x54640047  bnel        $v1, $a0, . + 4 + (0x47 << 2)
label_3bad08:
    if (ctx->pc == 0x3BAD08u) {
        ctx->pc = 0x3BAD08u;
            // 0x3bad08: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3BAD0Cu;
        goto label_3bad0c;
    }
    ctx->pc = 0x3BAD04u;
    {
        const bool branch_taken_0x3bad04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3bad04) {
            ctx->pc = 0x3BAD08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAD04u;
            // 0x3bad08: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BAE24u;
            goto label_3bae24;
        }
    }
    ctx->pc = 0x3BAD0Cu;
label_3bad0c:
    // 0x3bad0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3bad0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bad10:
    // 0x3bad10: 0x0  nop
    ctx->pc = 0x3bad10u;
    // NOP
label_3bad14:
    // 0x3bad14: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x3bad14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bad18:
    // 0x3bad18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3bad1c:
    if (ctx->pc == 0x3BAD1Cu) {
        ctx->pc = 0x3BAD20u;
        goto label_3bad20;
    }
    ctx->pc = 0x3BAD18u;
    {
        const bool branch_taken_0x3bad18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bad18) {
            ctx->pc = 0x3BAD28u;
            goto label_3bad28;
        }
    }
    ctx->pc = 0x3BAD20u;
label_3bad20:
    // 0x3bad20: 0x1000003f  b           . + 4 + (0x3F << 2)
label_3bad24:
    if (ctx->pc == 0x3BAD24u) {
        ctx->pc = 0x3BAD28u;
        goto label_3bad28;
    }
    ctx->pc = 0x3BAD20u;
    {
        const bool branch_taken_0x3bad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bad20) {
            ctx->pc = 0x3BAE20u;
            goto label_3bae20;
        }
    }
    ctx->pc = 0x3BAD28u;
label_3bad28:
    // 0x3bad28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3bad28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3bad2c:
    // 0x3bad2c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3bad2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3bad30:
    // 0x3bad30: 0xc4b402c8  lwc1        $f20, 0x2C8($a1)
    ctx->pc = 0x3bad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bad34:
    // 0x3bad34: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3bad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3bad38:
    // 0x3bad38: 0xc4b502c4  lwc1        $f21, 0x2C4($a1)
    ctx->pc = 0x3bad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3bad3c:
    // 0x3bad3c: 0xc4b602c0  lwc1        $f22, 0x2C0($a1)
    ctx->pc = 0x3bad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3bad40:
    // 0x3bad40: 0xc0a7a88  jal         func_29EA20
label_3bad44:
    if (ctx->pc == 0x3BAD44u) {
        ctx->pc = 0x3BAD44u;
            // 0x3bad44: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3BAD48u;
        goto label_3bad48;
    }
    ctx->pc = 0x3BAD40u;
    SET_GPR_U32(ctx, 31, 0x3BAD48u);
    ctx->pc = 0x3BAD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAD40u;
            // 0x3bad44: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAD48u; }
        if (ctx->pc != 0x3BAD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAD48u; }
        if (ctx->pc != 0x3BAD48u) { return; }
    }
    ctx->pc = 0x3BAD48u;
label_3bad48:
    // 0x3bad48: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3bad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3bad4c:
    // 0x3bad4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bad4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bad50:
    // 0x3bad50: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_3bad54:
    if (ctx->pc == 0x3BAD54u) {
        ctx->pc = 0x3BAD54u;
            // 0x3bad54: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3BAD58u;
        goto label_3bad58;
    }
    ctx->pc = 0x3BAD50u;
    {
        const bool branch_taken_0x3bad50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAD50u;
            // 0x3bad54: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bad50) {
            ctx->pc = 0x3BAD74u;
            goto label_3bad74;
        }
    }
    ctx->pc = 0x3BAD58u;
label_3bad58:
    // 0x3bad58: 0x3c023fb4  lui         $v0, 0x3FB4
    ctx->pc = 0x3bad58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16308 << 16));
label_3bad5c:
    // 0x3bad5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bad5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bad60:
    // 0x3bad60: 0x3442fdf4  ori         $v0, $v0, 0xFDF4
    ctx->pc = 0x3bad60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65012);
label_3bad64:
    // 0x3bad64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bad64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bad68:
    // 0x3bad68: 0xc0827ac  jal         func_209EB0
label_3bad6c:
    if (ctx->pc == 0x3BAD6Cu) {
        ctx->pc = 0x3BAD6Cu;
            // 0x3bad6c: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->pc = 0x3BAD70u;
        goto label_3bad70;
    }
    ctx->pc = 0x3BAD68u;
    SET_GPR_U32(ctx, 31, 0x3BAD70u);
    ctx->pc = 0x3BAD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAD68u;
            // 0x3bad6c: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAD70u; }
        if (ctx->pc != 0x3BAD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAD70u; }
        if (ctx->pc != 0x3BAD70u) { return; }
    }
    ctx->pc = 0x3BAD70u;
label_3bad70:
    // 0x3bad70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bad70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bad74:
    // 0x3bad74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3bad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3bad78:
    // 0x3bad78: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x3bad78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_3bad7c:
    // 0x3bad7c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3bad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3bad80:
    // 0x3bad80: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x3bad80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_3bad84:
    // 0x3bad84: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3bad84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3bad88:
    // 0x3bad88: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3bad88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3bad8c:
    // 0x3bad8c: 0xe7b50074  swc1        $f21, 0x74($sp)
    ctx->pc = 0x3bad8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3bad90:
    // 0x3bad90: 0xc0a7a88  jal         func_29EA20
label_3bad94:
    if (ctx->pc == 0x3BAD94u) {
        ctx->pc = 0x3BAD94u;
            // 0x3bad94: 0xe7b40078  swc1        $f20, 0x78($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x3BAD98u;
        goto label_3bad98;
    }
    ctx->pc = 0x3BAD90u;
    SET_GPR_U32(ctx, 31, 0x3BAD98u);
    ctx->pc = 0x3BAD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAD90u;
            // 0x3bad94: 0xe7b40078  swc1        $f20, 0x78($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAD98u; }
        if (ctx->pc != 0x3BAD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAD98u; }
        if (ctx->pc != 0x3BAD98u) { return; }
    }
    ctx->pc = 0x3BAD98u;
label_3bad98:
    // 0x3bad98: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x3bad98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_3bad9c:
    // 0x3bad9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bada0:
    // 0x3bada0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3bada4:
    if (ctx->pc == 0x3BADA4u) {
        ctx->pc = 0x3BADA4u;
            // 0x3bada4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3BADA8u;
        goto label_3bada8;
    }
    ctx->pc = 0x3BADA0u;
    {
        const bool branch_taken_0x3bada0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BADA0u;
            // 0x3bada4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bada0) {
            ctx->pc = 0x3BADBCu;
            goto label_3badbc;
        }
    }
    ctx->pc = 0x3BADA8u;
label_3bada8:
    // 0x3bada8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bada8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3badac:
    // 0x3badac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3badacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3badb0:
    // 0x3badb0: 0xc08afe0  jal         func_22BF80
label_3badb4:
    if (ctx->pc == 0x3BADB4u) {
        ctx->pc = 0x3BADB4u;
            // 0x3badb4: 0x3c070300  lui         $a3, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)768 << 16));
        ctx->pc = 0x3BADB8u;
        goto label_3badb8;
    }
    ctx->pc = 0x3BADB0u;
    SET_GPR_U32(ctx, 31, 0x3BADB8u);
    ctx->pc = 0x3BADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BADB0u;
            // 0x3badb4: 0x3c070300  lui         $a3, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BADB8u; }
        if (ctx->pc != 0x3BADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BADB8u; }
        if (ctx->pc != 0x3BADB8u) { return; }
    }
    ctx->pc = 0x3BADB8u;
label_3badb8:
    // 0x3badb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3badb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3badbc:
    // 0x3badbc: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x3badbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_3badc0:
    // 0x3badc0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3badc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3badc4:
    // 0x3badc4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3badc8:
    if (ctx->pc == 0x3BADC8u) {
        ctx->pc = 0x3BADCCu;
        goto label_3badcc;
    }
    ctx->pc = 0x3BADC4u;
    {
        const bool branch_taken_0x3badc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3badc4) {
            ctx->pc = 0x3BAE04u;
            goto label_3bae04;
        }
    }
    ctx->pc = 0x3BADCCu;
label_3badcc:
    // 0x3badcc: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x3badccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3badd0:
    // 0x3badd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3badd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3badd4:
    // 0x3badd4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x3badd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_3badd8:
    // 0x3badd8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3badd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3baddc:
    // 0x3baddc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3baddcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3bade0:
    // 0x3bade0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3bade4:
    if (ctx->pc == 0x3BADE4u) {
        ctx->pc = 0x3BADE8u;
        goto label_3bade8;
    }
    ctx->pc = 0x3BADE0u;
    {
        const bool branch_taken_0x3bade0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bade0) {
            ctx->pc = 0x3BAE04u;
            goto label_3bae04;
        }
    }
    ctx->pc = 0x3BADE8u;
label_3bade8:
    // 0x3bade8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3badec:
    if (ctx->pc == 0x3BADECu) {
        ctx->pc = 0x3BADF0u;
        goto label_3badf0;
    }
    ctx->pc = 0x3BADE8u;
    {
        const bool branch_taken_0x3bade8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bade8) {
            ctx->pc = 0x3BAE04u;
            goto label_3bae04;
        }
    }
    ctx->pc = 0x3BADF0u;
label_3badf0:
    // 0x3badf0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3badf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3badf4:
    // 0x3badf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3badf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3badf8:
    // 0x3badf8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3badf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3badfc:
    // 0x3badfc: 0x320f809  jalr        $t9
label_3bae00:
    if (ctx->pc == 0x3BAE00u) {
        ctx->pc = 0x3BAE00u;
            // 0x3bae00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3BAE04u;
        goto label_3bae04;
    }
    ctx->pc = 0x3BADFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BAE04u);
        ctx->pc = 0x3BAE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BADFCu;
            // 0x3bae00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BAE04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BAE04u; }
            if (ctx->pc != 0x3BAE04u) { return; }
        }
        }
    }
    ctx->pc = 0x3BAE04u;
label_3bae04:
    // 0x3bae04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3bae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3bae08:
    // 0x3bae08: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3bae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3bae0c:
    // 0x3bae0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3bae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3bae10:
    // 0x3bae10: 0xc08c798  jal         func_231E60
label_3bae14:
    if (ctx->pc == 0x3BAE14u) {
        ctx->pc = 0x3BAE14u;
            // 0x3bae14: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3BAE18u;
        goto label_3bae18;
    }
    ctx->pc = 0x3BAE10u;
    SET_GPR_U32(ctx, 31, 0x3BAE18u);
    ctx->pc = 0x3BAE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAE10u;
            // 0x3bae14: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAE18u; }
        if (ctx->pc != 0x3BAE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAE18u; }
        if (ctx->pc != 0x3BAE18u) { return; }
    }
    ctx->pc = 0x3BAE18u;
label_3bae18:
    // 0x3bae18: 0xc08d414  jal         func_235050
label_3bae1c:
    if (ctx->pc == 0x3BAE1Cu) {
        ctx->pc = 0x3BAE1Cu;
            // 0x3bae1c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3BAE20u;
        goto label_3bae20;
    }
    ctx->pc = 0x3BAE18u;
    SET_GPR_U32(ctx, 31, 0x3BAE20u);
    ctx->pc = 0x3BAE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAE18u;
            // 0x3bae1c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAE20u; }
        if (ctx->pc != 0x3BAE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAE20u; }
        if (ctx->pc != 0x3BAE20u) { return; }
    }
    ctx->pc = 0x3BAE20u;
label_3bae20:
    // 0x3bae20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bae20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3bae24:
    // 0x3bae24: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3bae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3bae28:
    // 0x3bae28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bae28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bae2c:
    // 0x3bae2c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3bae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3bae30:
    // 0x3bae30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bae30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bae34:
    // 0x3bae34: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3bae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3bae38:
    // 0x3bae38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3bae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bae3c:
    // 0x3bae3c: 0x3e00008  jr          $ra
label_3bae40:
    if (ctx->pc == 0x3BAE40u) {
        ctx->pc = 0x3BAE40u;
            // 0x3bae40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3BAE44u;
        goto label_3bae44;
    }
    ctx->pc = 0x3BAE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAE3Cu;
            // 0x3bae40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BAE44u;
label_3bae44:
    // 0x3bae44: 0x0  nop
    ctx->pc = 0x3bae44u;
    // NOP
label_3bae48:
    // 0x3bae48: 0x0  nop
    ctx->pc = 0x3bae48u;
    // NOP
label_3bae4c:
    // 0x3bae4c: 0x0  nop
    ctx->pc = 0x3bae4cu;
    // NOP
}
