#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C070
// Address: 0x13c070 - 0x13c810
void sub_0013C070_0x13c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C070_0x13c070");
#endif

    switch (ctx->pc) {
        case 0x13c0a0u: goto label_13c0a0;
        case 0x13c12cu: goto label_13c12c;
        case 0x13c17cu: goto label_13c17c;
        case 0x13c19cu: goto label_13c19c;
        case 0x13c1bcu: goto label_13c1bc;
        case 0x13c1e0u: goto label_13c1e0;
        case 0x13c1ecu: goto label_13c1ec;
        case 0x13c244u: goto label_13c244;
        case 0x13c300u: goto label_13c300;
        case 0x13c350u: goto label_13c350;
        case 0x13c398u: goto label_13c398;
        case 0x13c3d8u: goto label_13c3d8;
        case 0x13c430u: goto label_13c430;
        case 0x13c478u: goto label_13c478;
        case 0x13c4b8u: goto label_13c4b8;
        case 0x13c570u: goto label_13c570;
        case 0x13c5b8u: goto label_13c5b8;
        case 0x13c6b0u: goto label_13c6b0;
        case 0x13c6ccu: goto label_13c6cc;
        case 0x13c6e0u: goto label_13c6e0;
        case 0x13c70cu: goto label_13c70c;
        case 0x13c724u: goto label_13c724;
        case 0x13c798u: goto label_13c798;
        case 0x13c7b0u: goto label_13c7b0;
        case 0x13c7ecu: goto label_13c7ec;
        default: break;
    }

    ctx->pc = 0x13c070u;

    // 0x13c070: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13c074: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13c078: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13c07c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13c080: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13c084: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13c084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c08c: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x13c08cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x13c090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c094: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13c094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c098: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13c098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c09c: 0x26524fd0  addiu       $s2, $s2, 0x4FD0
    ctx->pc = 0x13c09cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20432));
label_13c0a0:
    // 0x13c0a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13c0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c0a8: 0x14620051  bne         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x13C0A8u;
    {
        const bool branch_taken_0x13c0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13c0a8) {
            ctx->pc = 0x13C1F0u;
            goto label_13c1f0;
        }
    }
    ctx->pc = 0x13C0B0u;
    // 0x13c0b0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13c0b4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x13c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13c0b8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x13C0B8u;
    {
        const bool branch_taken_0x13c0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c0b8) {
            ctx->pc = 0x13C138u;
            goto label_13c138;
        }
    }
    ctx->pc = 0x13C0C0u;
    // 0x13c0c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x13c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13c0c4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13C0C4u;
    {
        const bool branch_taken_0x13c0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c0c4) {
            ctx->pc = 0x13C138u;
            goto label_13c138;
        }
    }
    ctx->pc = 0x13C0CCu;
    // 0x13c0cc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13c0d0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C0D0u;
    {
        const bool branch_taken_0x13c0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c0d0) {
            ctx->pc = 0x13C0F0u;
            goto label_13c0f0;
        }
    }
    ctx->pc = 0x13C0D8u;
    // 0x13c0d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13c0dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C0DCu;
    {
        const bool branch_taken_0x13c0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c0dc) {
            ctx->pc = 0x13C0F0u;
            goto label_13c0f0;
        }
    }
    ctx->pc = 0x13C0E4u;
    // 0x13c0e4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x13C0E4u;
    {
        const bool branch_taken_0x13c0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c0e4) {
            ctx->pc = 0x13C1F0u;
            goto label_13c1f0;
        }
    }
    ctx->pc = 0x13C0ECu;
    // 0x13c0ec: 0x0  nop
    ctx->pc = 0x13c0ecu;
    // NOP
label_13c0f0:
    // 0x13c0f0: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x13c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x13c0f4: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x13c0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c0f8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x13c0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13c0fc: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x13c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c100: 0xc6430048  lwc1        $f3, 0x48($s2)
    ctx->pc = 0x13c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13c104: 0xc642003c  lwc1        $f2, 0x3C($s2)
    ctx->pc = 0x13c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13c108: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13c108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13c10c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x13c10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x13c110: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x13c110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c114: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x13c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c118: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x13c118u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x13c11c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13c11cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13c120: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x13c120u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x13c124: 0xc04cb44  jal         func_132D10
    ctx->pc = 0x13C124u;
    SET_GPR_U32(ctx, 31, 0x13C12Cu);
    ctx->pc = 0x13C128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C124u;
            // 0x13c128: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C12Cu; }
        if (ctx->pc != 0x13C12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C12Cu; }
        if (ctx->pc != 0x13C12Cu) { return; }
    }
    ctx->pc = 0x13C12Cu;
label_13c12c:
    // 0x13c12c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x13C12Cu;
    {
        const bool branch_taken_0x13c12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c12c) {
            ctx->pc = 0x13C1F0u;
            goto label_13c1f0;
        }
    }
    ctx->pc = 0x13C134u;
    // 0x13c134: 0x0  nop
    ctx->pc = 0x13c134u;
    // NOP
label_13c138:
    // 0x13c138: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x13c138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x13c13c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13c140: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13C140u;
    {
        const bool branch_taken_0x13c140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c140) {
            ctx->pc = 0x13C1A8u;
            goto label_13c1a8;
        }
    }
    ctx->pc = 0x13C148u;
    // 0x13c148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c14c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13C14Cu;
    {
        const bool branch_taken_0x13c14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c14c) {
            ctx->pc = 0x13C188u;
            goto label_13c188;
        }
    }
    ctx->pc = 0x13C154u;
    // 0x13c154: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C154u;
    {
        const bool branch_taken_0x13c154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c154) {
            ctx->pc = 0x13C168u;
            goto label_13c168;
        }
    }
    ctx->pc = 0x13C15Cu;
    // 0x13c15c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13C15Cu;
    {
        const bool branch_taken_0x13c15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c15c) {
            ctx->pc = 0x13C1C0u;
            goto label_13c1c0;
        }
    }
    ctx->pc = 0x13C164u;
    // 0x13c164: 0x0  nop
    ctx->pc = 0x13c164u;
    // NOP
label_13c168:
    // 0x13c168: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x13c168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x13c16c: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x13c16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x13c170: 0x8e470068  lw          $a3, 0x68($s2)
    ctx->pc = 0x13c170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x13c174: 0xc04f308  jal         func_13CC20
    ctx->pc = 0x13C174u;
    SET_GPR_U32(ctx, 31, 0x13C17Cu);
    ctx->pc = 0x13C178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C174u;
            // 0x13c178: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C17Cu; }
        if (ctx->pc != 0x13C17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C17Cu; }
        if (ctx->pc != 0x13C17Cu) { return; }
    }
    ctx->pc = 0x13C17Cu;
label_13c17c:
    // 0x13c17c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13C17Cu;
    {
        const bool branch_taken_0x13c17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c17c) {
            ctx->pc = 0x13C1C0u;
            goto label_13c1c0;
        }
    }
    ctx->pc = 0x13C184u;
    // 0x13c184: 0x0  nop
    ctx->pc = 0x13c184u;
    // NOP
label_13c188:
    // 0x13c188: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x13c188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x13c18c: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x13c18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x13c190: 0x8e470068  lw          $a3, 0x68($s2)
    ctx->pc = 0x13c190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x13c194: 0xc04f344  jal         func_13CD10
    ctx->pc = 0x13C194u;
    SET_GPR_U32(ctx, 31, 0x13C19Cu);
    ctx->pc = 0x13C198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C194u;
            // 0x13c198: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CD10u;
    if (runtime->hasFunction(0x13CD10u)) {
        auto targetFn = runtime->lookupFunction(0x13CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C19Cu; }
        if (ctx->pc != 0x13C19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD10_0x13cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C19Cu; }
        if (ctx->pc != 0x13C19Cu) { return; }
    }
    ctx->pc = 0x13C19Cu;
label_13c19c:
    // 0x13c19c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13C19Cu;
    {
        const bool branch_taken_0x13c19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c19c) {
            ctx->pc = 0x13C1C0u;
            goto label_13c1c0;
        }
    }
    ctx->pc = 0x13C1A4u;
    // 0x13c1a4: 0x0  nop
    ctx->pc = 0x13c1a4u;
    // NOP
label_13c1a8:
    // 0x13c1a8: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x13c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x13c1ac: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x13c1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x13c1b0: 0x8e470068  lw          $a3, 0x68($s2)
    ctx->pc = 0x13c1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x13c1b4: 0xc04f380  jal         func_13CE00
    ctx->pc = 0x13C1B4u;
    SET_GPR_U32(ctx, 31, 0x13C1BCu);
    ctx->pc = 0x13C1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C1B4u;
            // 0x13c1b8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C1BCu; }
        if (ctx->pc != 0x13C1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C1BCu; }
        if (ctx->pc != 0x13C1BCu) { return; }
    }
    ctx->pc = 0x13C1BCu;
label_13c1bc:
    // 0x13c1bc: 0x0  nop
    ctx->pc = 0x13c1bcu;
    // NOP
label_13c1c0:
    // 0x13c1c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13c1c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13c1c8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13c1cc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x13c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13c1d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13c1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c1d4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x13c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x13c1d8: 0xc04cbbc  jal         func_132EF0
    ctx->pc = 0x13C1D8u;
    SET_GPR_U32(ctx, 31, 0x13C1E0u);
    ctx->pc = 0x13C1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C1D8u;
            // 0x13c1dc: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C1E0u; }
        if (ctx->pc != 0x13C1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C1E0u; }
        if (ctx->pc != 0x13C1E0u) { return; }
    }
    ctx->pc = 0x13C1E0u;
label_13c1e0:
    // 0x13c1e0: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x13c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x13c1e4: 0xc04cb44  jal         func_132D10
    ctx->pc = 0x13C1E4u;
    SET_GPR_U32(ctx, 31, 0x13C1ECu);
    ctx->pc = 0x13C1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C1E4u;
            // 0x13c1e8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C1ECu; }
        if (ctx->pc != 0x13C1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C1ECu; }
        if (ctx->pc != 0x13C1ECu) { return; }
    }
    ctx->pc = 0x13C1ECu;
label_13c1ec:
    // 0x13c1ec: 0x0  nop
    ctx->pc = 0x13c1ecu;
    // NOP
label_13c1f0:
    // 0x13c1f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13c1f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13c1f4: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x13c1f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13c1f8: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x13C1F8u;
    {
        const bool branch_taken_0x13c1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C1F8u;
            // 0x13c1fc: 0x26520084  addiu       $s2, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1f8) {
            ctx->pc = 0x13C0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c0a0;
        }
    }
    ctx->pc = 0x13C200u;
    // 0x13c200: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c204: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c208: 0xac4054b8  sw          $zero, 0x54B8($v0)
    ctx->pc = 0x13c208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21688), GPR_U32(ctx, 0));
    // 0x13c20c: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x13c20cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x13c210: 0xac6054b4  sw          $zero, 0x54B4($v1)
    ctx->pc = 0x13c210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21684), GPR_U32(ctx, 0));
    // 0x13c214: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c218: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c21c: 0xac4054c0  sw          $zero, 0x54C0($v0)
    ctx->pc = 0x13c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21696), GPR_U32(ctx, 0));
    // 0x13c220: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13c220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13c224: 0xac6054bc  sw          $zero, 0x54BC($v1)
    ctx->pc = 0x13c224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21692), GPR_U32(ctx, 0));
    // 0x13c228: 0x24e74fd0  addiu       $a3, $a3, 0x4FD0
    ctx->pc = 0x13c228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20432));
    // 0x13c22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c230: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x13c230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13c234: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x13c234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13c238: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x13c238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c23c: 0x24422020  addiu       $v0, $v0, 0x2020
    ctx->pc = 0x13c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8224));
    // 0x13c240: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13c240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c244:
    // 0x13c244: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x13c244u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13c248: 0x1544001f  bne         $t2, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x13C248u;
    {
        const bool branch_taken_0x13c248 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        ctx->pc = 0x13C24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C248u;
            // 0x13c24c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c248) {
            ctx->pc = 0x13C2C8u;
            goto label_13c2c8;
        }
    }
    ctx->pc = 0x13C250u;
    // 0x13c250: 0x8cec0008  lw          $t4, 0x8($a3)
    ctx->pc = 0x13c250u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13c254: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x13c254u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x13c258: 0x6a5821  addu        $t3, $v1, $t2
    ctx->pc = 0x13c258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x13c25c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x13c25cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x13c260: 0x8d6b04e4  lw          $t3, 0x4E4($t3)
    ctx->pc = 0x13c260u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1252)));
    // 0x13c264: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x13c264u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x13c268: 0x16a082a  slt         $at, $t3, $t2
    ctx->pc = 0x13c268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x13c26c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13C26Cu;
    {
        const bool branch_taken_0x13c26c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c26c) {
            ctx->pc = 0x13C2B0u;
            goto label_13c2b0;
        }
    }
    ctx->pc = 0x13C274u;
    // 0x13c274: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x13c274u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x13c278: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x13c278u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x13c27c: 0x685821  addu        $t3, $v1, $t0
    ctx->pc = 0x13c27cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x13c280: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x13c280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x13c284: 0xad4704a4  sw          $a3, 0x4A4($t2)
    ctx->pc = 0x13c284u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1188), GPR_U32(ctx, 7));
    // 0x13c288: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x13c288u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13c28c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x13c28cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x13c290: 0x6a5821  addu        $t3, $v1, $t2
    ctx->pc = 0x13c290u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x13c294: 0x8d6a04e4  lw          $t2, 0x4E4($t3)
    ctx->pc = 0x13c294u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1252)));
    // 0x13c298: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x13c298u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x13c29c: 0xad6a04e4  sw          $t2, 0x4E4($t3)
    ctx->pc = 0x13c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1252), GPR_U32(ctx, 10));
    // 0x13c2a0: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x13c2a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13c2a4: 0x15490002  bne         $t2, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C2A4u;
    {
        const bool branch_taken_0x13c2a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x13C2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C2A4u;
            // 0x13c2a8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2a4) {
            ctx->pc = 0x13C2B0u;
            goto label_13c2b0;
        }
    }
    ctx->pc = 0x13C2ACu;
    // 0x13c2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c2b0:
    // 0x13c2b0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C2B0u;
    {
        const bool branch_taken_0x13c2b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c2b0) {
            ctx->pc = 0x13C2C8u;
            goto label_13c2c8;
        }
    }
    ctx->pc = 0x13C2B8u;
    // 0x13c2b8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x13c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x13c2bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13c2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13c2c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13c2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13c2c4: 0x0  nop
    ctx->pc = 0x13c2c4u;
    // NOP
label_13c2c8:
    // 0x13c2c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13c2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13c2cc: 0x28a80008  slti        $t0, $a1, 0x8
    ctx->pc = 0x13c2ccu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13c2d0: 0x1500ffdc  bnez        $t0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x13C2D0u;
    {
        const bool branch_taken_0x13c2d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C2D0u;
            // 0x13c2d4: 0x24e70084  addiu       $a3, $a3, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2d0) {
            ctx->pc = 0x13C244u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c244;
        }
    }
    ctx->pc = 0x13C2D8u;
    // 0x13c2d8: 0x60000cd  bltz        $s0, . + 4 + (0xCD << 2)
    ctx->pc = 0x13C2D8u;
    {
        const bool branch_taken_0x13c2d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x13C2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C2D8u;
            // 0x13c2dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2d8) {
            ctx->pc = 0x13C610u;
            goto label_13c610;
        }
    }
    ctx->pc = 0x13C2E0u;
    // 0x13c2e0: 0x3c0f006c  lui         $t7, 0x6C
    ctx->pc = 0x13c2e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)108 << 16));
    // 0x13c2e4: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x13c2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x13c2e8: 0x25ef54e0  addiu       $t7, $t7, 0x54E0
    ctx->pc = 0x13c2e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 21728));
    // 0x13c2ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x13c2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c2f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13c2f4: 0x24e71fe0  addiu       $a3, $a3, 0x1FE0
    ctx->pc = 0x13c2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8160));
    // 0x13c2f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x13c2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13c2fc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x13c2fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13c300:
    // 0x13c300: 0x8f838020  lw          $v1, -0x7FE0($gp)
    ctx->pc = 0x13c300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x13c304: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x13c304u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c308: 0x1860002b  blez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x13C308u;
    {
        const bool branch_taken_0x13c308 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13C30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C308u;
            // 0x13c30c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c308) {
            ctx->pc = 0x13C3B8u;
            goto label_13c3b8;
        }
    }
    ctx->pc = 0x13C310u;
    // 0x13c310: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x13c310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x13c314: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x13C314u;
    {
        const bool branch_taken_0x13c314 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C314u;
            // 0x13c318: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c314) {
            ctx->pc = 0x13C380u;
            goto label_13c380;
        }
    }
    ctx->pc = 0x13C31Cu;
    // 0x13c31c: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C31Cu;
    {
        const bool branch_taken_0x13c31c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x13C320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C31Cu;
            // 0x13c320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c31c) {
            ctx->pc = 0x13C340u;
            goto label_13c340;
        }
    }
    ctx->pc = 0x13C324u;
    // 0x13c324: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x13c324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x13c328: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x13c328u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x13c32c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x13c32cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13c330: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C330u;
    {
        const bool branch_taken_0x13c330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c330) {
            ctx->pc = 0x13C340u;
            goto label_13c340;
        }
    }
    ctx->pc = 0x13C338u;
    // 0x13c338: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x13c338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c33c: 0x0  nop
    ctx->pc = 0x13c33cu;
    // NOP
label_13c340:
    // 0x13c340: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x13C340u;
    {
        const bool branch_taken_0x13c340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c340) {
            ctx->pc = 0x13C380u;
            goto label_13c380;
        }
    }
    ctx->pc = 0x13C348u;
    // 0x13c348: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x13c348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c34c: 0x0  nop
    ctx->pc = 0x13c34cu;
    // NOP
label_13c350:
    // 0x13c350: 0xaca80018  sw          $t0, 0x18($a1)
    ctx->pc = 0x13c350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
    // 0x13c354: 0xaca80038  sw          $t0, 0x38($a1)
    ctx->pc = 0x13c354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 8));
    // 0x13c358: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x13c358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x13c35c: 0xaca80058  sw          $t0, 0x58($a1)
    ctx->pc = 0x13c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 8));
    // 0x13c360: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x13c360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13c364: 0xaca80078  sw          $t0, 0x78($a1)
    ctx->pc = 0x13c364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 8));
    // 0x13c368: 0xaca80098  sw          $t0, 0x98($a1)
    ctx->pc = 0x13c368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 8));
    // 0x13c36c: 0xaca800b8  sw          $t0, 0xB8($a1)
    ctx->pc = 0x13c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 8));
    // 0x13c370: 0xaca800d8  sw          $t0, 0xD8($a1)
    ctx->pc = 0x13c370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 216), GPR_U32(ctx, 8));
    // 0x13c374: 0xaca800f8  sw          $t0, 0xF8($a1)
    ctx->pc = 0x13c374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 8));
    // 0x13c378: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x13C378u;
    {
        const bool branch_taken_0x13c378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C378u;
            // 0x13c37c: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c378) {
            ctx->pc = 0x13C350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c350;
        }
    }
    ctx->pc = 0x13C380u;
label_13c380:
    // 0x13c380: 0x8f848020  lw          $a0, -0x7FE0($gp)
    ctx->pc = 0x13c380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x13c384: 0x124082a  slt         $at, $t1, $a0
    ctx->pc = 0x13c384u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13c388: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x13C388u;
    {
        const bool branch_taken_0x13c388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c388) {
            ctx->pc = 0x13C3B8u;
            goto label_13c3b8;
        }
    }
    ctx->pc = 0x13C390u;
    // 0x13c390: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x13c390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x13c394: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x13c394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_13c398:
    // 0x13c398: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x13c398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13c39c: 0xaca80018  sw          $t0, 0x18($a1)
    ctx->pc = 0x13c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
    // 0x13c3a0: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x13c3a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13c3a4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x13c3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x13c3a8: 0x0  nop
    ctx->pc = 0x13c3a8u;
    // NOP
    // 0x13c3ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13C3ACu;
    {
        const bool branch_taken_0x13c3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c3ac) {
            ctx->pc = 0x13C398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c398;
        }
    }
    ctx->pc = 0x13C3B4u;
    // 0x13c3b4: 0x0  nop
    ctx->pc = 0x13c3b4u;
    // NOP
label_13c3b8:
    // 0x13c3b8: 0xade00004  sw          $zero, 0x4($t7)
    ctx->pc = 0x13c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 0));
    // 0x13c3bc: 0xade00008  sw          $zero, 0x8($t7)
    ctx->pc = 0x13c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 0));
    // 0x13c3c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13c3c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3c4: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x13c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x13c3c8: 0xade00010  sw          $zero, 0x10($t7)
    ctx->pc = 0x13c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 0));
    // 0x13c3cc: 0x1a200074  blez        $s1, . + 4 + (0x74 << 2)
    ctx->pc = 0x13C3CCu;
    {
        const bool branch_taken_0x13c3cc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x13C3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C3CCu;
            // 0x13c3d0: 0xade00014  sw          $zero, 0x14($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3cc) {
            ctx->pc = 0x13C5A0u;
            goto label_13c5a0;
        }
    }
    ctx->pc = 0x13C3D4u;
    // 0x13c3d4: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x13c3d4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13c3d8:
    // 0x13c3d8: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x13c3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x13c3dc: 0x8f848020  lw          $a0, -0x7FE0($gp)
    ctx->pc = 0x13c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x13c3e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13c3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3e4: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x13c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13c3e8: 0x1880002b  blez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x13C3E8u;
    {
        const bool branch_taken_0x13c3e8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13C3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C3E8u;
            // 0x13c3ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3e8) {
            ctx->pc = 0x13C498u;
            goto label_13c498;
        }
    }
    ctx->pc = 0x13C3F0u;
    // 0x13c3f0: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x13c3f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x13c3f4: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x13C3F4u;
    {
        const bool branch_taken_0x13c3f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C3F4u;
            // 0x13c3f8: 0x2489fff8  addiu       $t1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3f4) {
            ctx->pc = 0x13C460u;
            goto label_13c460;
        }
    }
    ctx->pc = 0x13C3FCu;
    // 0x13c3fc: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C3FCu;
    {
        const bool branch_taken_0x13c3fc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x13C400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C3FCu;
            // 0x13c400: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3fc) {
            ctx->pc = 0x13C420u;
            goto label_13c420;
        }
    }
    ctx->pc = 0x13C404u;
    // 0x13c404: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x13c404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x13c408: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x13c408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x13c40c: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x13c40cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x13c410: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C410u;
    {
        const bool branch_taken_0x13c410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c410) {
            ctx->pc = 0x13C420u;
            goto label_13c420;
        }
    }
    ctx->pc = 0x13C418u;
    // 0x13c418: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x13c418u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c41c: 0x0  nop
    ctx->pc = 0x13c41cu;
    // NOP
label_13c420:
    // 0x13c420: 0x1180000f  beqz        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x13C420u;
    {
        const bool branch_taken_0x13c420 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c420) {
            ctx->pc = 0x13C460u;
            goto label_13c460;
        }
    }
    ctx->pc = 0x13C428u;
    // 0x13c428: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x13c428u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c42c: 0x0  nop
    ctx->pc = 0x13c42cu;
    // NOP
label_13c430:
    // 0x13c430: 0xad88001c  sw          $t0, 0x1C($t4)
    ctx->pc = 0x13c430u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 8));
    // 0x13c434: 0xad88003c  sw          $t0, 0x3C($t4)
    ctx->pc = 0x13c434u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 60), GPR_U32(ctx, 8));
    // 0x13c438: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x13c438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x13c43c: 0xad88005c  sw          $t0, 0x5C($t4)
    ctx->pc = 0x13c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 92), GPR_U32(ctx, 8));
    // 0x13c440: 0x69202a  slt         $a0, $v1, $t1
    ctx->pc = 0x13c440u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x13c444: 0xad88007c  sw          $t0, 0x7C($t4)
    ctx->pc = 0x13c444u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 124), GPR_U32(ctx, 8));
    // 0x13c448: 0xad88009c  sw          $t0, 0x9C($t4)
    ctx->pc = 0x13c448u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 156), GPR_U32(ctx, 8));
    // 0x13c44c: 0xad8800bc  sw          $t0, 0xBC($t4)
    ctx->pc = 0x13c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 188), GPR_U32(ctx, 8));
    // 0x13c450: 0xad8800dc  sw          $t0, 0xDC($t4)
    ctx->pc = 0x13c450u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 220), GPR_U32(ctx, 8));
    // 0x13c454: 0xad8800fc  sw          $t0, 0xFC($t4)
    ctx->pc = 0x13c454u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 252), GPR_U32(ctx, 8));
    // 0x13c458: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13C458u;
    {
        const bool branch_taken_0x13c458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C458u;
            // 0x13c45c: 0x258c0100  addiu       $t4, $t4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c458) {
            ctx->pc = 0x13C430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c430;
        }
    }
    ctx->pc = 0x13C460u;
label_13c460:
    // 0x13c460: 0x8f898020  lw          $t1, -0x7FE0($gp)
    ctx->pc = 0x13c460u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x13c464: 0x69082a  slt         $at, $v1, $t1
    ctx->pc = 0x13c464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x13c468: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x13C468u;
    {
        const bool branch_taken_0x13c468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c468) {
            ctx->pc = 0x13C498u;
            goto label_13c498;
        }
    }
    ctx->pc = 0x13C470u;
    // 0x13c470: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x13c470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13c474: 0xe46021  addu        $t4, $a3, $a0
    ctx->pc = 0x13c474u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_13c478:
    // 0x13c478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13c478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13c47c: 0xad88001c  sw          $t0, 0x1C($t4)
    ctx->pc = 0x13c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 8));
    // 0x13c480: 0x69202a  slt         $a0, $v1, $t1
    ctx->pc = 0x13c480u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x13c484: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x13c484u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x13c488: 0x0  nop
    ctx->pc = 0x13c488u;
    // NOP
    // 0x13c48c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13C48Cu;
    {
        const bool branch_taken_0x13c48c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c48c) {
            ctx->pc = 0x13C478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c478;
        }
    }
    ctx->pc = 0x13C494u;
    // 0x13c494: 0x0  nop
    ctx->pc = 0x13c494u;
    // NOP
label_13c498:
    // 0x13c498: 0x8f848020  lw          $a0, -0x7FE0($gp)
    ctx->pc = 0x13c498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x13c49c: 0x18800024  blez        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13C49Cu;
    {
        const bool branch_taken_0x13c49c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13C4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C49Cu;
            // 0x13c4a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c49c) {
            ctx->pc = 0x13C530u;
            goto label_13c530;
        }
    }
    ctx->pc = 0x13C4A4u;
    // 0x13c4a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13c4a8: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x13c4a8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4ac: 0x1e36021  addu        $t4, $t7, $v1
    ctx->pc = 0x13c4acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x13c4b0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x13c4b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x13c4b4: 0x0  nop
    ctx->pc = 0x13c4b4u;
    // NOP
label_13c4b8:
    // 0x13c4b8: 0x8db40018  lw          $s4, 0x18($t5)
    ctx->pc = 0x13c4b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x13c4bc: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x13C4BCu;
    {
        const bool branch_taken_0x13c4bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c4bc) {
            ctx->pc = 0x13C520u;
            goto label_13c520;
        }
    }
    ctx->pc = 0x13C4C4u;
    // 0x13c4c4: 0x15600004  bnez        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C4C4u;
    {
        const bool branch_taken_0x13c4c4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c4c4) {
            ctx->pc = 0x13C4D8u;
            goto label_13c4d8;
        }
    }
    ctx->pc = 0x13C4CCu;
    // 0x13c4cc: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13C4CCu;
    {
        const bool branch_taken_0x13c4cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c4cc) {
            ctx->pc = 0x13C520u;
            goto label_13c520;
        }
    }
    ctx->pc = 0x13C4D4u;
    // 0x13c4d4: 0x0  nop
    ctx->pc = 0x13c4d4u;
    // NOP
label_13c4d8:
    // 0x13c4d8: 0x6da021  addu        $s4, $v1, $t5
    ctx->pc = 0x13c4d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x13c4dc: 0x8d990000  lw          $t9, 0x0($t4)
    ctx->pc = 0x13c4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x13c4e0: 0x8e940004  lw          $s4, 0x4($s4)
    ctx->pc = 0x13c4e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13c4e4: 0x334082b  sltu        $at, $t9, $s4
    ctx->pc = 0x13c4e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x13c4e8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x13C4E8u;
    {
        const bool branch_taken_0x13c4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c4e8) {
            ctx->pc = 0x13C518u;
            goto label_13c518;
        }
    }
    ctx->pc = 0x13C4F0u;
    // 0x13c4f0: 0x8df90014  lw          $t9, 0x14($t7)
    ctx->pc = 0x13c4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x13c4f4: 0x8db40014  lw          $s4, 0x14($t5)
    ctx->pc = 0x13c4f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x13c4f8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x13c4f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x13c4fc: 0x16990008  bne         $s4, $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C4FCu;
    {
        const bool branch_taken_0x13c4fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 25));
        ctx->pc = 0x13C500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4FCu;
            // 0x13c500: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c4fc) {
            ctx->pc = 0x13C520u;
            goto label_13c520;
        }
    }
    ctx->pc = 0x13C504u;
    // 0x13c504: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x13c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x13c508: 0x100c02d  daddu       $t8, $t0, $zero
    ctx->pc = 0x13c508u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c50c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13C50Cu;
    {
        const bool branch_taken_0x13c50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C50Cu;
            // 0x13c510: 0xade30000  sw          $v1, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c50c) {
            ctx->pc = 0x13C530u;
            goto label_13c530;
        }
    }
    ctx->pc = 0x13C514u;
    // 0x13c514: 0x0  nop
    ctx->pc = 0x13c514u;
    // NOP
label_13c518:
    // 0x13c518: 0xada0001c  sw          $zero, 0x1C($t5)
    ctx->pc = 0x13c518u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 0));
    // 0x13c51c: 0x0  nop
    ctx->pc = 0x13c51cu;
    // NOP
label_13c520:
    // 0x13c520: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x13c520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13c524: 0x124c82a  slt         $t9, $t1, $a0
    ctx->pc = 0x13c524u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13c528: 0x1720ffe3  bnez        $t9, . + 4 + (-0x1D << 2)
    ctx->pc = 0x13C528u;
    {
        const bool branch_taken_0x13c528 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C528u;
            // 0x13c52c: 0x25ad0020  addiu       $t5, $t5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c528) {
            ctx->pc = 0x13C4B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c4b8;
        }
    }
    ctx->pc = 0x13C530u;
label_13c530:
    // 0x13c530: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x13C530u;
    {
        const bool branch_taken_0x13c530 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c530) {
            ctx->pc = 0x13C590u;
            goto label_13c590;
        }
    }
    ctx->pc = 0x13C538u;
    // 0x13c538: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13c538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13c53c: 0x1e32021  addu        $a0, $t7, $v1
    ctx->pc = 0x13c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x13c540: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13c540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13c544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13c548: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x13c548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x13c54c: 0x8de30014  lw          $v1, 0x14($t7)
    ctx->pc = 0x13c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x13c550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13c554: 0x17000012  bnez        $t8, . + 4 + (0x12 << 2)
    ctx->pc = 0x13C554u;
    {
        const bool branch_taken_0x13c554 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C554u;
            // 0x13c558: 0xade30014  sw          $v1, 0x14($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c554) {
            ctx->pc = 0x13C5A0u;
            goto label_13c5a0;
        }
    }
    ctx->pc = 0x13C55Cu;
    // 0x13c55c: 0x8f848020  lw          $a0, -0x7FE0($gp)
    ctx->pc = 0x13c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x13c560: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x13C560u;
    {
        const bool branch_taken_0x13c560 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13C564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C560u;
            // 0x13c564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c560) {
            ctx->pc = 0x13C590u;
            goto label_13c590;
        }
    }
    ctx->pc = 0x13C568u;
    // 0x13c568: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x13c568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c56c: 0x0  nop
    ctx->pc = 0x13c56cu;
    // NOP
label_13c570:
    // 0x13c570: 0x8d23001c  lw          $v1, 0x1C($t1)
    ctx->pc = 0x13c570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x13c574: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C574u;
    {
        const bool branch_taken_0x13c574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c574) {
            ctx->pc = 0x13C580u;
            goto label_13c580;
        }
    }
    ctx->pc = 0x13C57Cu;
    // 0x13c57c: 0xad200018  sw          $zero, 0x18($t1)
    ctx->pc = 0x13c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 0));
label_13c580:
    // 0x13c580: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13c580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13c584: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x13c584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13c588: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13C588u;
    {
        const bool branch_taken_0x13c588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C588u;
            // 0x13c58c: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c588) {
            ctx->pc = 0x13C570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c570;
        }
    }
    ctx->pc = 0x13C590u;
label_13c590:
    // 0x13c590: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x13c590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x13c594: 0x151182a  slt         $v1, $t2, $s1
    ctx->pc = 0x13c594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x13c598: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x13C598u;
    {
        const bool branch_taken_0x13c598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C598u;
            // 0x13c59c: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c598) {
            ctx->pc = 0x13C3D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c3d8;
        }
    }
    ctx->pc = 0x13C5A0u;
label_13c5a0:
    // 0x13c5a0: 0x17000017  bnez        $t8, . + 4 + (0x17 << 2)
    ctx->pc = 0x13C5A0u;
    {
        const bool branch_taken_0x13c5a0 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c5a0) {
            ctx->pc = 0x13C600u;
            goto label_13c600;
        }
    }
    ctx->pc = 0x13C5A8u;
    // 0x13c5a8: 0x8f848020  lw          $a0, -0x7FE0($gp)
    ctx->pc = 0x13c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x13c5ac: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13C5ACu;
    {
        const bool branch_taken_0x13c5ac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13C5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5ACu;
            // 0x13c5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5ac) {
            ctx->pc = 0x13C5F0u;
            goto label_13c5f0;
        }
    }
    ctx->pc = 0x13C5B4u;
    // 0x13c5b4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x13c5b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13c5b8:
    // 0x13c5b8: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x13c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x13c5bc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x13c5bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13c5c0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x13c5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x13c5c4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C5C4u;
    {
        const bool branch_taken_0x13c5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c5c4) {
            ctx->pc = 0x13C5E0u;
            goto label_13c5e0;
        }
    }
    ctx->pc = 0x13C5CCu;
    // 0x13c5cc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x13c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13c5d0: 0x100c02d  daddu       $t8, $t0, $zero
    ctx->pc = 0x13c5d0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c5d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13C5D4u;
    {
        const bool branch_taken_0x13c5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5D4u;
            // 0x13c5d8: 0xade30000  sw          $v1, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5d4) {
            ctx->pc = 0x13C5F0u;
            goto label_13c5f0;
        }
    }
    ctx->pc = 0x13C5DCu;
    // 0x13c5dc: 0x0  nop
    ctx->pc = 0x13c5dcu;
    // NOP
label_13c5e0:
    // 0x13c5e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13c5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13c5e4: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x13c5e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13c5e8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x13C5E8u;
    {
        const bool branch_taken_0x13c5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5E8u;
            // 0x13c5ec: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5e8) {
            ctx->pc = 0x13C5B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c5b8;
        }
    }
    ctx->pc = 0x13C5F0u;
label_13c5f0:
    // 0x13c5f0: 0x17000003  bnez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C5F0u;
    {
        const bool branch_taken_0x13c5f0 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c5f0) {
            ctx->pc = 0x13C600u;
            goto label_13c600;
        }
    }
    ctx->pc = 0x13C5F8u;
    // 0x13c5f8: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x13c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x13c5fc: 0x0  nop
    ctx->pc = 0x13c5fcu;
    // NOP
label_13c600:
    // 0x13c600: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x13c600u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x13c604: 0x20b082a  slt         $at, $s0, $t3
    ctx->pc = 0x13c604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x13c608: 0x1020ff3d  beqz        $at, . + 4 + (-0xC3 << 2)
    ctx->pc = 0x13C608u;
    {
        const bool branch_taken_0x13c608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C608u;
            // 0x13c60c: 0x25ef0020  addiu       $t7, $t7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c608) {
            ctx->pc = 0x13C300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c300;
        }
    }
    ctx->pc = 0x13C610u;
label_13c610:
    // 0x13c610: 0x16000021  bnez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13C610u;
    {
        const bool branch_taken_0x13c610 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c610) {
            ctx->pc = 0x13C698u;
            goto label_13c698;
        }
    }
    ctx->pc = 0x13C618u;
    // 0x13c618: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c61c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c620: 0x8c4454e0  lw          $a0, 0x54E0($v0)
    ctx->pc = 0x13c620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21728)));
    // 0x13c624: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13c624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13c628: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c62c: 0xac645500  sw          $a0, 0x5500($v1)
    ctx->pc = 0x13c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21760), GPR_U32(ctx, 4));
    // 0x13c630: 0xc44254e4  lwc1        $f2, 0x54E4($v0)
    ctx->pc = 0x13c630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13c634: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c638: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13c638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13c63c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c640: 0xc44154e8  lwc1        $f1, 0x54E8($v0)
    ctx->pc = 0x13c640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c644: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c648: 0xc44054ec  lwc1        $f0, 0x54EC($v0)
    ctx->pc = 0x13c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c64c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c650: 0xe4425504  swc1        $f2, 0x5504($v0)
    ctx->pc = 0x13c650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21764), bits); }
    // 0x13c654: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c658: 0xe4415508  swc1        $f1, 0x5508($v0)
    ctx->pc = 0x13c658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21768), bits); }
    // 0x13c65c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c660: 0xe440550c  swc1        $f0, 0x550C($v0)
    ctx->pc = 0x13c660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21772), bits); }
    // 0x13c664: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c668: 0xc46054f0  lwc1        $f0, 0x54F0($v1)
    ctx->pc = 0x13c668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c66c: 0x8c4654f4  lw          $a2, 0x54F4($v0)
    ctx->pc = 0x13c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21748)));
    // 0x13c670: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c674: 0xac865514  sw          $a2, 0x5514($a0)
    ctx->pc = 0x13c674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 21780), GPR_U32(ctx, 6));
    // 0x13c678: 0xe4a05510  swc1        $f0, 0x5510($a1)
    ctx->pc = 0x13c678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 21776), bits); }
    // 0x13c67c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13c680: 0x8c4554f8  lw          $a1, 0x54F8($v0)
    ctx->pc = 0x13c680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21752)));
    // 0x13c684: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c688: 0xac655518  sw          $a1, 0x5518($v1)
    ctx->pc = 0x13c688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21784), GPR_U32(ctx, 5));
    // 0x13c68c: 0x8c4454fc  lw          $a0, 0x54FC($v0)
    ctx->pc = 0x13c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21756)));
    // 0x13c690: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c694: 0xac44551c  sw          $a0, 0x551C($v0)
    ctx->pc = 0x13c694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21788), GPR_U32(ctx, 4));
label_13c698:
    // 0x13c698: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c69c: 0x8c4254b4  lw          $v0, 0x54B4($v0)
    ctx->pc = 0x13c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21684)));
    // 0x13c6a0: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13C6A0u;
    {
        const bool branch_taken_0x13c6a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13C6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C6A0u;
            // 0x13c6a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6a0) {
            ctx->pc = 0x13C6F8u;
            goto label_13c6f8;
        }
    }
    ctx->pc = 0x13C6A8u;
    // 0x13c6a8: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x13c6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x13c6ac: 0x26314fd0  addiu       $s1, $s1, 0x4FD0
    ctx->pc = 0x13c6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20432));
label_13c6b0:
    // 0x13c6b0: 0x8e3204a4  lw          $s2, 0x4A4($s1)
    ctx->pc = 0x13c6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1188)));
    // 0x13c6b4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x13c6b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x13c6b8: 0xc64c001c  lwc1        $f12, 0x1C($s2)
    ctx->pc = 0x13c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13c6bc: 0xc64d0020  lwc1        $f13, 0x20($s2)
    ctx->pc = 0x13c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13c6c0: 0xc64e0024  lwc1        $f14, 0x24($s2)
    ctx->pc = 0x13c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13c6c4: 0xc057208  jal         func_15C820
    ctx->pc = 0x13C6C4u;
    SET_GPR_U32(ctx, 31, 0x13C6CCu);
    ctx->pc = 0x13C6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C6C4u;
            // 0x13c6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C6CCu; }
        if (ctx->pc != 0x13C6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C6CCu; }
        if (ctx->pc != 0x13C6CCu) { return; }
    }
    ctx->pc = 0x13C6CCu;
label_13c6cc:
    // 0x13c6cc: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x13c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13c6d0: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x13c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13c6d4: 0xc64e0038  lwc1        $f14, 0x38($s2)
    ctx->pc = 0x13c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13c6d8: 0xc057214  jal         func_15C850
    ctx->pc = 0x13C6D8u;
    SET_GPR_U32(ctx, 31, 0x13C6E0u);
    ctx->pc = 0x13C6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C6D8u;
            // 0x13c6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C850u;
    if (runtime->hasFunction(0x15C850u)) {
        auto targetFn = runtime->lookupFunction(0x15C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C6E0u; }
        if (ctx->pc != 0x13C6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C850_0x15c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C6E0u; }
        if (ctx->pc != 0x13C6E0u) { return; }
    }
    ctx->pc = 0x13C6E0u;
label_13c6e0:
    // 0x13c6e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c6e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13c6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13c6e8: 0x8c4254b4  lw          $v0, 0x54B4($v0)
    ctx->pc = 0x13c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21684)));
    // 0x13c6ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13c6ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c6f0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x13C6F0u;
    {
        const bool branch_taken_0x13c6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C6F0u;
            // 0x13c6f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6f0) {
            ctx->pc = 0x13C6B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c6b0;
        }
    }
    ctx->pc = 0x13C6F8u;
label_13c6f8:
    // 0x13c6f8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13c6fc: 0x8c432020  lw          $v1, 0x2020($v0)
    ctx->pc = 0x13c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8224)));
    // 0x13c700: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x13c700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13c704: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x13C704u;
    {
        const bool branch_taken_0x13c704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c704) {
            ctx->pc = 0x13C740u;
            goto label_13c740;
        }
    }
    ctx->pc = 0x13C70Cu;
label_13c70c:
    // 0x13c70c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13c70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c714: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x13c714u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x13c718: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x13c718u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x13c71c: 0xc057208  jal         func_15C820
    ctx->pc = 0x13C71Cu;
    SET_GPR_U32(ctx, 31, 0x13C724u);
    ctx->pc = 0x13C720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C71Cu;
            // 0x13c720: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C724u; }
        if (ctx->pc != 0x13C724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C724u; }
        if (ctx->pc != 0x13C724u) { return; }
    }
    ctx->pc = 0x13C724u;
label_13c724:
    // 0x13c724: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13c724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13c728: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13c728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13c72c: 0x8c432020  lw          $v1, 0x2020($v0)
    ctx->pc = 0x13c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8224)));
    // 0x13c730: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x13c730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13c734: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13C734u;
    {
        const bool branch_taken_0x13c734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c734) {
            ctx->pc = 0x13C70Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c70c;
        }
    }
    ctx->pc = 0x13C73Cu;
    // 0x13c73c: 0x0  nop
    ctx->pc = 0x13c73cu;
    // NOP
label_13c740:
    // 0x13c740: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c744: 0x8c425510  lw          $v0, 0x5510($v0)
    ctx->pc = 0x13c744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21776)));
    // 0x13c748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C748u;
    {
        const bool branch_taken_0x13c748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c748) {
            ctx->pc = 0x13C760u;
            goto label_13c760;
        }
    }
    ctx->pc = 0x13C750u;
    // 0x13c750: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c754: 0x8c4254f0  lw          $v0, 0x54F0($v0)
    ctx->pc = 0x13c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21744)));
    // 0x13c758: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13C758u;
    {
        const bool branch_taken_0x13c758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c758) {
            ctx->pc = 0x13C7DCu;
            goto label_13c7dc;
        }
    }
    ctx->pc = 0x13C760u;
label_13c760:
    // 0x13c760: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c764: 0x8c4254b4  lw          $v0, 0x54B4($v0)
    ctx->pc = 0x13c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21684)));
    // 0x13c768: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13c768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13c76c: 0x50200018  beql        $at, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x13C76Cu;
    {
        const bool branch_taken_0x13c76c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c76c) {
            ctx->pc = 0x13C770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C76Cu;
            // 0x13c770: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C7D0u;
            goto label_13c7d0;
        }
    }
    ctx->pc = 0x13C774u;
    // 0x13c774: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13c774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c778: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c77c: 0xac4354c4  sw          $v1, 0x54C4($v0)
    ctx->pc = 0x13c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21700), GPR_U32(ctx, 3));
    // 0x13c780: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c784: 0x8c4254c0  lw          $v0, 0x54C0($v0)
    ctx->pc = 0x13c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21696)));
    // 0x13c788: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13C788u;
    {
        const bool branch_taken_0x13c788 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13C78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C788u;
            // 0x13c78c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c788) {
            ctx->pc = 0x13C7E4u;
            goto label_13c7e4;
        }
    }
    ctx->pc = 0x13C790u;
    // 0x13c790: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x13c790u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x13c794: 0x26314fd0  addiu       $s1, $s1, 0x4FD0
    ctx->pc = 0x13c794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20432));
label_13c798:
    // 0x13c798: 0x8e2204d4  lw          $v0, 0x4D4($s1)
    ctx->pc = 0x13c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
    // 0x13c79c: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x13c79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13c7a0: 0xc44d0034  lwc1        $f13, 0x34($v0)
    ctx->pc = 0x13c7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13c7a4: 0xc44e0038  lwc1        $f14, 0x38($v0)
    ctx->pc = 0x13c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x13c7a8: 0xc057214  jal         func_15C850
    ctx->pc = 0x13C7A8u;
    SET_GPR_U32(ctx, 31, 0x13C7B0u);
    ctx->pc = 0x13C7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C7A8u;
            // 0x13c7ac: 0x26040002  addiu       $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C850u;
    if (runtime->hasFunction(0x15C850u)) {
        auto targetFn = runtime->lookupFunction(0x15C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C7B0u; }
        if (ctx->pc != 0x13C7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C850_0x15c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C7B0u; }
        if (ctx->pc != 0x13C7B0u) { return; }
    }
    ctx->pc = 0x13C7B0u;
label_13c7b0:
    // 0x13c7b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c7b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13c7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13c7b8: 0x8c4254c0  lw          $v0, 0x54C0($v0)
    ctx->pc = 0x13c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21696)));
    // 0x13c7bc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13c7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c7c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13C7C0u;
    {
        const bool branch_taken_0x13c7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C7C0u;
            // 0x13c7c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7c0) {
            ctx->pc = 0x13C798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13c798;
        }
    }
    ctx->pc = 0x13C7C8u;
    // 0x13c7c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13C7C8u;
    {
        const bool branch_taken_0x13c7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c7c8) {
            ctx->pc = 0x13C7E4u;
            goto label_13c7e4;
        }
    }
    ctx->pc = 0x13C7D0u;
label_13c7d0:
    // 0x13c7d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c7d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13C7D4u;
    {
        const bool branch_taken_0x13c7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C7D4u;
            // 0x13c7d8: 0xac4354c4  sw          $v1, 0x54C4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 21700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7d4) {
            ctx->pc = 0x13C7E4u;
            goto label_13c7e4;
        }
    }
    ctx->pc = 0x13C7DCu;
label_13c7dc:
    // 0x13c7dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13c7e0: 0xac4054c4  sw          $zero, 0x54C4($v0)
    ctx->pc = 0x13c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21700), GPR_U32(ctx, 0));
label_13c7e4:
    // 0x13c7e4: 0xc057398  jal         func_15CE60
    ctx->pc = 0x13C7E4u;
    SET_GPR_U32(ctx, 31, 0x13C7ECu);
    ctx->pc = 0x15CE60u;
    if (runtime->hasFunction(0x15CE60u)) {
        auto targetFn = runtime->lookupFunction(0x15CE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C7ECu; }
        if (ctx->pc != 0x13C7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CE60_0x15ce60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C7ECu; }
        if (ctx->pc != 0x13C7ECu) { return; }
    }
    ctx->pc = 0x13C7ECu;
label_13c7ec:
    // 0x13c7ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13c7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c7f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13c7f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c7f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13c7f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c7f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c7f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c7fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c804: 0x3e00008  jr          $ra
    ctx->pc = 0x13C804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C804u;
            // 0x13c808: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C80Cu;
    // 0x13c80c: 0x0  nop
    ctx->pc = 0x13c80cu;
    // NOP
}
