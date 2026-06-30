#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BD20
// Address: 0x22bd20 - 0x22be00
void sub_0022BD20_0x22bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BD20_0x22bd20");
#endif

    switch (ctx->pc) {
        case 0x22bd20u: goto label_22bd20;
        case 0x22bd24u: goto label_22bd24;
        case 0x22bd28u: goto label_22bd28;
        case 0x22bd2cu: goto label_22bd2c;
        case 0x22bd30u: goto label_22bd30;
        case 0x22bd34u: goto label_22bd34;
        case 0x22bd38u: goto label_22bd38;
        case 0x22bd3cu: goto label_22bd3c;
        case 0x22bd40u: goto label_22bd40;
        case 0x22bd44u: goto label_22bd44;
        case 0x22bd48u: goto label_22bd48;
        case 0x22bd4cu: goto label_22bd4c;
        case 0x22bd50u: goto label_22bd50;
        case 0x22bd54u: goto label_22bd54;
        case 0x22bd58u: goto label_22bd58;
        case 0x22bd5cu: goto label_22bd5c;
        case 0x22bd60u: goto label_22bd60;
        case 0x22bd64u: goto label_22bd64;
        case 0x22bd68u: goto label_22bd68;
        case 0x22bd6cu: goto label_22bd6c;
        case 0x22bd70u: goto label_22bd70;
        case 0x22bd74u: goto label_22bd74;
        case 0x22bd78u: goto label_22bd78;
        case 0x22bd7cu: goto label_22bd7c;
        case 0x22bd80u: goto label_22bd80;
        case 0x22bd84u: goto label_22bd84;
        case 0x22bd88u: goto label_22bd88;
        case 0x22bd8cu: goto label_22bd8c;
        case 0x22bd90u: goto label_22bd90;
        case 0x22bd94u: goto label_22bd94;
        case 0x22bd98u: goto label_22bd98;
        case 0x22bd9cu: goto label_22bd9c;
        case 0x22bda0u: goto label_22bda0;
        case 0x22bda4u: goto label_22bda4;
        case 0x22bda8u: goto label_22bda8;
        case 0x22bdacu: goto label_22bdac;
        case 0x22bdb0u: goto label_22bdb0;
        case 0x22bdb4u: goto label_22bdb4;
        case 0x22bdb8u: goto label_22bdb8;
        case 0x22bdbcu: goto label_22bdbc;
        case 0x22bdc0u: goto label_22bdc0;
        case 0x22bdc4u: goto label_22bdc4;
        case 0x22bdc8u: goto label_22bdc8;
        case 0x22bdccu: goto label_22bdcc;
        case 0x22bdd0u: goto label_22bdd0;
        case 0x22bdd4u: goto label_22bdd4;
        case 0x22bdd8u: goto label_22bdd8;
        case 0x22bddcu: goto label_22bddc;
        case 0x22bde0u: goto label_22bde0;
        case 0x22bde4u: goto label_22bde4;
        case 0x22bde8u: goto label_22bde8;
        case 0x22bdecu: goto label_22bdec;
        case 0x22bdf0u: goto label_22bdf0;
        case 0x22bdf4u: goto label_22bdf4;
        case 0x22bdf8u: goto label_22bdf8;
        case 0x22bdfcu: goto label_22bdfc;
        default: break;
    }

    ctx->pc = 0x22bd20u;

label_22bd20:
    // 0x22bd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22bd24:
    // 0x22bd24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22bd28:
    // 0x22bd28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22bd2c:
    // 0x22bd2c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x22bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bd30:
    // 0x22bd30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22bd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22bd34:
    // 0x22bd34: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x22bd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
label_22bd38:
    // 0x22bd38: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x22bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bd3c:
    // 0x22bd3c: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x22bd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
label_22bd40:
    // 0x22bd40: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x22bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bd44:
    // 0x22bd44: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x22bd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
label_22bd48:
    // 0x22bd48: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x22bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bd4c:
    // 0x22bd4c: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x22bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
label_22bd50:
    // 0x22bd50: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_22bd54:
    // 0x22bd54: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_22bd58:
    if (ctx->pc == 0x22BD58u) {
        ctx->pc = 0x22BD58u;
            // 0x22bd58: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x22BD5Cu;
        goto label_22bd5c;
    }
    ctx->pc = 0x22BD54u;
    {
        const bool branch_taken_0x22bd54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD54u;
            // 0x22bd58: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd54) {
            ctx->pc = 0x22BD9Cu;
            goto label_22bd9c;
        }
    }
    ctx->pc = 0x22BD5Cu;
label_22bd5c:
    // 0x22bd5c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x22bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_22bd60:
    // 0x22bd60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_22bd64:
    // 0x22bd64: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x22bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_22bd68:
    // 0x22bd68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bd68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bd6c:
    // 0x22bd6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22bd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22bd70:
    // 0x22bd70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22bd70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22bd74:
    // 0x22bd74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bd78:
    // 0x22bd78: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x22bd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22bd7c:
    // 0x22bd7c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x22bd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22bd80:
    // 0x22bd80: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x22bd80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_22bd84:
    // 0x22bd84: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22bd84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22bd88:
    // 0x22bd88: 0x320f809  jalr        $t9
label_22bd8c:
    if (ctx->pc == 0x22BD8Cu) {
        ctx->pc = 0x22BD8Cu;
            // 0x22bd8c: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x22BD90u;
        goto label_22bd90;
    }
    ctx->pc = 0x22BD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22BD90u);
        ctx->pc = 0x22BD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD88u;
            // 0x22bd8c: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22BD90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22BD90u; }
            if (ctx->pc != 0x22BD90u) { return; }
        }
        }
    }
    ctx->pc = 0x22BD90u;
label_22bd90:
    // 0x22bd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22bd94:
    // 0x22bd94: 0xc08abf0  jal         func_22AFC0
label_22bd98:
    if (ctx->pc == 0x22BD98u) {
        ctx->pc = 0x22BD98u;
            // 0x22bd98: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22BD9Cu;
        goto label_22bd9c;
    }
    ctx->pc = 0x22BD94u;
    SET_GPR_U32(ctx, 31, 0x22BD9Cu);
    ctx->pc = 0x22BD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD94u;
            // 0x22bd98: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AFC0u;
    if (runtime->hasFunction(0x22AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD9Cu; }
        if (ctx->pc != 0x22BD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AFC0_0x22afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD9Cu; }
        if (ctx->pc != 0x22BD9Cu) { return; }
    }
    ctx->pc = 0x22BD9Cu;
label_22bd9c:
    // 0x22bd9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22bd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22bda0:
    // 0x22bda0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22bda4:
    // 0x22bda4: 0x3e00008  jr          $ra
label_22bda8:
    if (ctx->pc == 0x22BDA8u) {
        ctx->pc = 0x22BDA8u;
            // 0x22bda8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22BDACu;
        goto label_22bdac;
    }
    ctx->pc = 0x22BDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDA4u;
            // 0x22bda8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BDACu;
label_22bdac:
    // 0x22bdac: 0x0  nop
    ctx->pc = 0x22bdacu;
    // NOP
label_22bdb0:
    // 0x22bdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22bdb4:
    // 0x22bdb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_22bdb8:
    // 0x22bdb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22bdbc:
    // 0x22bdbc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22bdbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22bdc0:
    // 0x22bdc0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_22bdc4:
    // 0x22bdc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bdc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bdc8:
    // 0x22bdc8: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x22bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_22bdcc:
    // 0x22bdcc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x22bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_22bdd0:
    // 0x22bdd0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x22bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_22bdd4:
    // 0x22bdd4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bdd8:
    // 0x22bdd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22bdd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22bddc:
    // 0x22bddc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22bddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22bde0:
    // 0x22bde0: 0x320f809  jalr        $t9
label_22bde4:
    if (ctx->pc == 0x22BDE4u) {
        ctx->pc = 0x22BDE4u;
            // 0x22bde4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x22BDE8u;
        goto label_22bde8;
    }
    ctx->pc = 0x22BDE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22BDE8u);
        ctx->pc = 0x22BDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDE0u;
            // 0x22bde4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22BDE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22BDE8u; }
            if (ctx->pc != 0x22BDE8u) { return; }
        }
        }
    }
    ctx->pc = 0x22BDE8u;
label_22bde8:
    // 0x22bde8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22bdec:
    // 0x22bdec: 0x3e00008  jr          $ra
label_22bdf0:
    if (ctx->pc == 0x22BDF0u) {
        ctx->pc = 0x22BDF0u;
            // 0x22bdf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x22BDF4u;
        goto label_22bdf4;
    }
    ctx->pc = 0x22BDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDECu;
            // 0x22bdf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BDF4u;
label_22bdf4:
    // 0x22bdf4: 0x0  nop
    ctx->pc = 0x22bdf4u;
    // NOP
label_22bdf8:
    // 0x22bdf8: 0x0  nop
    ctx->pc = 0x22bdf8u;
    // NOP
label_22bdfc:
    // 0x22bdfc: 0x0  nop
    ctx->pc = 0x22bdfcu;
    // NOP
}
