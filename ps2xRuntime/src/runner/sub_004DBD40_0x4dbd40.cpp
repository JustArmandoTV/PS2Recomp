#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DBD40
// Address: 0x4dbd40 - 0x4dbe20
void sub_004DBD40_0x4dbd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DBD40_0x4dbd40");
#endif

    switch (ctx->pc) {
        case 0x4dbd40u: goto label_4dbd40;
        case 0x4dbd44u: goto label_4dbd44;
        case 0x4dbd48u: goto label_4dbd48;
        case 0x4dbd4cu: goto label_4dbd4c;
        case 0x4dbd50u: goto label_4dbd50;
        case 0x4dbd54u: goto label_4dbd54;
        case 0x4dbd58u: goto label_4dbd58;
        case 0x4dbd5cu: goto label_4dbd5c;
        case 0x4dbd60u: goto label_4dbd60;
        case 0x4dbd64u: goto label_4dbd64;
        case 0x4dbd68u: goto label_4dbd68;
        case 0x4dbd6cu: goto label_4dbd6c;
        case 0x4dbd70u: goto label_4dbd70;
        case 0x4dbd74u: goto label_4dbd74;
        case 0x4dbd78u: goto label_4dbd78;
        case 0x4dbd7cu: goto label_4dbd7c;
        case 0x4dbd80u: goto label_4dbd80;
        case 0x4dbd84u: goto label_4dbd84;
        case 0x4dbd88u: goto label_4dbd88;
        case 0x4dbd8cu: goto label_4dbd8c;
        case 0x4dbd90u: goto label_4dbd90;
        case 0x4dbd94u: goto label_4dbd94;
        case 0x4dbd98u: goto label_4dbd98;
        case 0x4dbd9cu: goto label_4dbd9c;
        case 0x4dbda0u: goto label_4dbda0;
        case 0x4dbda4u: goto label_4dbda4;
        case 0x4dbda8u: goto label_4dbda8;
        case 0x4dbdacu: goto label_4dbdac;
        case 0x4dbdb0u: goto label_4dbdb0;
        case 0x4dbdb4u: goto label_4dbdb4;
        case 0x4dbdb8u: goto label_4dbdb8;
        case 0x4dbdbcu: goto label_4dbdbc;
        case 0x4dbdc0u: goto label_4dbdc0;
        case 0x4dbdc4u: goto label_4dbdc4;
        case 0x4dbdc8u: goto label_4dbdc8;
        case 0x4dbdccu: goto label_4dbdcc;
        case 0x4dbdd0u: goto label_4dbdd0;
        case 0x4dbdd4u: goto label_4dbdd4;
        case 0x4dbdd8u: goto label_4dbdd8;
        case 0x4dbddcu: goto label_4dbddc;
        case 0x4dbde0u: goto label_4dbde0;
        case 0x4dbde4u: goto label_4dbde4;
        case 0x4dbde8u: goto label_4dbde8;
        case 0x4dbdecu: goto label_4dbdec;
        case 0x4dbdf0u: goto label_4dbdf0;
        case 0x4dbdf4u: goto label_4dbdf4;
        case 0x4dbdf8u: goto label_4dbdf8;
        case 0x4dbdfcu: goto label_4dbdfc;
        case 0x4dbe00u: goto label_4dbe00;
        case 0x4dbe04u: goto label_4dbe04;
        case 0x4dbe08u: goto label_4dbe08;
        case 0x4dbe0cu: goto label_4dbe0c;
        case 0x4dbe10u: goto label_4dbe10;
        case 0x4dbe14u: goto label_4dbe14;
        case 0x4dbe18u: goto label_4dbe18;
        case 0x4dbe1cu: goto label_4dbe1c;
        default: break;
    }

    ctx->pc = 0x4dbd40u;

label_4dbd40:
    // 0x4dbd40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dbd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4dbd44:
    // 0x4dbd44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dbd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dbd48:
    // 0x4dbd48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dbd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dbd4c:
    // 0x4dbd4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dbd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dbd50:
    // 0x4dbd50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dbd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dbd54:
    // 0x4dbd54: 0x8c8400fc  lw          $a0, 0xFC($a0)
    ctx->pc = 0x4dbd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_4dbd58:
    // 0x4dbd58: 0x50800026  beql        $a0, $zero, . + 4 + (0x26 << 2)
label_4dbd5c:
    if (ctx->pc == 0x4DBD5Cu) {
        ctx->pc = 0x4DBD5Cu;
            // 0x4dbd5c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4DBD60u;
        goto label_4dbd60;
    }
    ctx->pc = 0x4DBD58u;
    {
        const bool branch_taken_0x4dbd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dbd58) {
            ctx->pc = 0x4DBD5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBD58u;
            // 0x4dbd5c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DBDF4u;
            goto label_4dbdf4;
        }
    }
    ctx->pc = 0x4DBD60u;
label_4dbd60:
    // 0x4dbd60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4dbd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4dbd64:
    // 0x4dbd64: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
label_4dbd68:
    if (ctx->pc == 0x4DBD68u) {
        ctx->pc = 0x4DBD6Cu;
        goto label_4dbd6c;
    }
    ctx->pc = 0x4DBD64u;
    {
        const bool branch_taken_0x4dbd64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4dbd64) {
            ctx->pc = 0x4DBDF0u;
            goto label_4dbdf0;
        }
    }
    ctx->pc = 0x4DBD6Cu;
label_4dbd6c:
    // 0x4dbd6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4dbd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4dbd70:
    // 0x4dbd70: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4dbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4dbd74:
    // 0x4dbd74: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x4dbd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbd78:
    // 0x4dbd78: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x4dbd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dbd7c:
    // 0x4dbd7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4dbd7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4dbd80:
    // 0x4dbd80: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x4dbd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_4dbd84:
    // 0x4dbd84: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x4dbd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dbd88:
    // 0x4dbd88: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x4dbd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dbd8c:
    // 0x4dbd8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4dbd8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dbd90:
    // 0x4dbd90: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_4dbd94:
    if (ctx->pc == 0x4DBD94u) {
        ctx->pc = 0x4DBD94u;
            // 0x4dbd94: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4DBD98u;
        goto label_4dbd98;
    }
    ctx->pc = 0x4DBD90u;
    {
        const bool branch_taken_0x4dbd90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4dbd90) {
            ctx->pc = 0x4DBD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBD90u;
            // 0x4dbd94: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DBDE8u;
            goto label_4dbde8;
        }
    }
    ctx->pc = 0x4DBD98u;
label_4dbd98:
    // 0x4dbd98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4dbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4dbd9c:
    // 0x4dbd9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4dbd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dbda0:
    // 0x4dbda0: 0x0  nop
    ctx->pc = 0x4dbda0u;
    // NOP
label_4dbda4:
    // 0x4dbda4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4dbda4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4dbda8:
    // 0x4dbda8: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x4dbda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_4dbdac:
    // 0x4dbdac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x4dbdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_4dbdb0:
    // 0x4dbdb0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x4dbdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_4dbdb4:
    // 0x4dbdb4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x4dbdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_4dbdb8:
    // 0x4dbdb8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4dbdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_4dbdbc:
    // 0x4dbdbc: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4dbdbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4dbdc0:
    // 0x4dbdc0: 0xc088b74  jal         func_222DD0
label_4dbdc4:
    if (ctx->pc == 0x4DBDC4u) {
        ctx->pc = 0x4DBDC4u;
            // 0x4dbdc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBDC8u;
        goto label_4dbdc8;
    }
    ctx->pc = 0x4DBDC0u;
    SET_GPR_U32(ctx, 31, 0x4DBDC8u);
    ctx->pc = 0x4DBDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBDC0u;
            // 0x4dbdc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBDC8u; }
        if (ctx->pc != 0x4DBDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBDC8u; }
        if (ctx->pc != 0x4DBDC8u) { return; }
    }
    ctx->pc = 0x4DBDC8u;
label_4dbdc8:
    // 0x4dbdc8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4dbdc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4dbdcc:
    // 0x4dbdcc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4dbdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4dbdd0:
    // 0x4dbdd0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4dbdd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4dbdd4:
    // 0x4dbdd4: 0x320f809  jalr        $t9
label_4dbdd8:
    if (ctx->pc == 0x4DBDD8u) {
        ctx->pc = 0x4DBDD8u;
            // 0x4dbdd8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DBDDCu;
        goto label_4dbddc;
    }
    ctx->pc = 0x4DBDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DBDDCu);
        ctx->pc = 0x4DBDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBDD4u;
            // 0x4dbdd8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DBDDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DBDDCu; }
            if (ctx->pc != 0x4DBDDCu) { return; }
        }
        }
    }
    ctx->pc = 0x4DBDDCu;
label_4dbddc:
    // 0x4dbddc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4dbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4dbde0:
    // 0x4dbde0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4dbde4:
    if (ctx->pc == 0x4DBDE4u) {
        ctx->pc = 0x4DBDE4u;
            // 0x4dbde4: 0xae0300fc  sw          $v1, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
        ctx->pc = 0x4DBDE8u;
        goto label_4dbde8;
    }
    ctx->pc = 0x4DBDE0u;
    {
        const bool branch_taken_0x4dbde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DBDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBDE0u;
            // 0x4dbde4: 0xae0300fc  sw          $v1, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbde0) {
            ctx->pc = 0x4DBDF0u;
            goto label_4dbdf0;
        }
    }
    ctx->pc = 0x4DBDE8u;
label_4dbde8:
    // 0x4dbde8: 0xc088b74  jal         func_222DD0
label_4dbdec:
    if (ctx->pc == 0x4DBDECu) {
        ctx->pc = 0x4DBDF0u;
        goto label_4dbdf0;
    }
    ctx->pc = 0x4DBDE8u;
    SET_GPR_U32(ctx, 31, 0x4DBDF0u);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBDF0u; }
        if (ctx->pc != 0x4DBDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DBDF0u; }
        if (ctx->pc != 0x4DBDF0u) { return; }
    }
    ctx->pc = 0x4DBDF0u;
label_4dbdf0:
    // 0x4dbdf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dbdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dbdf4:
    // 0x4dbdf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dbdf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dbdf8:
    // 0x4dbdf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dbdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dbdfc:
    // 0x4dbdfc: 0x3e00008  jr          $ra
label_4dbe00:
    if (ctx->pc == 0x4DBE00u) {
        ctx->pc = 0x4DBE00u;
            // 0x4dbe00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4DBE04u;
        goto label_4dbe04;
    }
    ctx->pc = 0x4DBDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DBE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBDFCu;
            // 0x4dbe00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DBE04u;
label_4dbe04:
    // 0x4dbe04: 0x0  nop
    ctx->pc = 0x4dbe04u;
    // NOP
label_4dbe08:
    // 0x4dbe08: 0x0  nop
    ctx->pc = 0x4dbe08u;
    // NOP
label_4dbe0c:
    // 0x4dbe0c: 0x0  nop
    ctx->pc = 0x4dbe0cu;
    // NOP
label_4dbe10:
    // 0x4dbe10: 0x3e00008  jr          $ra
label_4dbe14:
    if (ctx->pc == 0x4DBE14u) {
        ctx->pc = 0x4DBE18u;
        goto label_4dbe18;
    }
    ctx->pc = 0x4DBE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DBE18u;
label_4dbe18:
    // 0x4dbe18: 0x0  nop
    ctx->pc = 0x4dbe18u;
    // NOP
label_4dbe1c:
    // 0x4dbe1c: 0x0  nop
    ctx->pc = 0x4dbe1cu;
    // NOP
}
