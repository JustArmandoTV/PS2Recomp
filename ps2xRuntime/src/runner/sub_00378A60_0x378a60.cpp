#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00378A60
// Address: 0x378a60 - 0x378dc0
void sub_00378A60_0x378a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378A60_0x378a60");
#endif

    switch (ctx->pc) {
        case 0x378af0u: goto label_378af0;
        case 0x378afcu: goto label_378afc;
        case 0x378b5cu: goto label_378b5c;
        case 0x378b68u: goto label_378b68;
        case 0x378bccu: goto label_378bcc;
        case 0x378bd8u: goto label_378bd8;
        case 0x378c60u: goto label_378c60;
        case 0x378c6cu: goto label_378c6c;
        default: break;
    }

    ctx->pc = 0x378a60u;

    // 0x378a60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x378a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x378a64: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x378a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x378a68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x378a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x378a6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x378a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378a70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x378a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x378a74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x378a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x378a78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x378a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x378a7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x378a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x378a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x378a84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x378a84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x378a88: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x378a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x378a8c: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x378a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x378a90: 0x10a4004c  beq         $a1, $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x378A90u;
    {
        const bool branch_taken_0x378a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x378A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378A90u;
            // 0x378a94: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a90) {
            ctx->pc = 0x378BC4u;
            goto label_378bc4;
        }
    }
    ctx->pc = 0x378A98u;
    // 0x378a98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378a9c: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x378A9Cu;
    {
        const bool branch_taken_0x378a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x378a9c) {
            ctx->pc = 0x378AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378A9Cu;
            // 0x378aa0: 0xc6340004  lwc1        $f20, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x378AE8u;
            goto label_378ae8;
        }
    }
    ctx->pc = 0x378AA4u;
    // 0x378aa4: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x378AA4u;
    {
        const bool branch_taken_0x378aa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x378aa4) {
            ctx->pc = 0x378AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378AA4u;
            // 0x378aa8: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x378AB4u;
            goto label_378ab4;
        }
    }
    ctx->pc = 0x378AACu;
    // 0x378aac: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x378AACu;
    {
        const bool branch_taken_0x378aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378AACu;
            // 0x378ab0: 0xc6420000  lwc1        $f2, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378aac) {
            ctx->pc = 0x378CF0u;
            goto label_378cf0;
        }
    }
    ctx->pc = 0x378AB4u;
label_378ab4:
    // 0x378ab4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x378ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378ab8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x378ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x378abc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x378abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378ac0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x378ac0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x378ac4: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x378ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x378ac8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x378ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x378acc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x378accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378ad0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x378ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378ad4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x378ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378ad8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x378ad8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x378adc: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x378adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x378ae0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x378AE0u;
    {
        const bool branch_taken_0x378ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378AE0u;
            // 0x378ae4: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ae0) {
            ctx->pc = 0x378CECu;
            goto label_378cec;
        }
    }
    ctx->pc = 0x378AE8u;
label_378ae8:
    // 0x378ae8: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x378AE8u;
    SET_GPR_U32(ctx, 31, 0x378AF0u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378AF0u; }
        if (ctx->pc != 0x378AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378AF0u; }
        if (ctx->pc != 0x378AF0u) { return; }
    }
    ctx->pc = 0x378AF0u;
label_378af0:
    // 0x378af0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x378af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x378af4: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x378AF4u;
    SET_GPR_U32(ctx, 31, 0x378AFCu);
    ctx->pc = 0x378AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378AF4u;
            // 0x378af8: 0x29f40  sll         $s3, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378AFCu; }
        if (ctx->pc != 0x378AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378AFCu; }
        if (ctx->pc != 0x378AFCu) { return; }
    }
    ctx->pc = 0x378AFCu;
label_378afc:
    // 0x378afc: 0x532025  or          $a0, $v0, $s3
    ctx->pc = 0x378afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x378b00: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x378b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x378b04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x378b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378b08: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x378B08u;
    {
        const bool branch_taken_0x378b08 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x378b08) {
            ctx->pc = 0x378B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378B08u;
            // 0x378b0c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378B1Cu;
            goto label_378b1c;
        }
    }
    ctx->pc = 0x378B10u;
    // 0x378b10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x378b10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378b14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x378B14u;
    {
        const bool branch_taken_0x378b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378B14u;
            // 0x378b18: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b14) {
            ctx->pc = 0x378B34u;
            goto label_378b34;
        }
    }
    ctx->pc = 0x378B1Cu;
label_378b1c:
    // 0x378b1c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x378b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x378b20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x378b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378b28: 0x0  nop
    ctx->pc = 0x378b28u;
    // NOP
    // 0x378b2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x378b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x378b30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x378b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_378b34:
    // 0x378b34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x378b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x378b38: 0x4600a0c2  mul.s       $f3, $f20, $f0
    ctx->pc = 0x378b38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x378b3c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x378b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378b44: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x378b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378b48: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x378b48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x378b4c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x378b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x378b50: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x378b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x378b54: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x378B54u;
    SET_GPR_U32(ctx, 31, 0x378B5Cu);
    ctx->pc = 0x378B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378B54u;
            // 0x378b58: 0xc6340008  lwc1        $f20, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378B5Cu; }
        if (ctx->pc != 0x378B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378B5Cu; }
        if (ctx->pc != 0x378B5Cu) { return; }
    }
    ctx->pc = 0x378B5Cu;
label_378b5c:
    // 0x378b5c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x378b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x378b60: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x378B60u;
    SET_GPR_U32(ctx, 31, 0x378B68u);
    ctx->pc = 0x378B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378B60u;
            // 0x378b64: 0x29f40  sll         $s3, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378B68u; }
        if (ctx->pc != 0x378B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378B68u; }
        if (ctx->pc != 0x378B68u) { return; }
    }
    ctx->pc = 0x378B68u;
label_378b68:
    // 0x378b68: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x378b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
    // 0x378b6c: 0x532825  or          $a1, $v0, $s3
    ctx->pc = 0x378b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x378b70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x378b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378b74: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x378B74u;
    {
        const bool branch_taken_0x378b74 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x378b74) {
            ctx->pc = 0x378B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378B74u;
            // 0x378b78: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378B88u;
            goto label_378b88;
        }
    }
    ctx->pc = 0x378B7Cu;
    // 0x378b7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x378b7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378b80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x378B80u;
    {
        const bool branch_taken_0x378b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378B80u;
            // 0x378b84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b80) {
            ctx->pc = 0x378BA0u;
            goto label_378ba0;
        }
    }
    ctx->pc = 0x378B88u;
label_378b88:
    // 0x378b88: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x378b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x378b8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x378b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x378b90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x378b90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378b94: 0x0  nop
    ctx->pc = 0x378b94u;
    // NOP
    // 0x378b98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x378b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x378b9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x378b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_378ba0:
    // 0x378ba0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x378ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x378ba4: 0x4600a0c2  mul.s       $f3, $f20, $f0
    ctx->pc = 0x378ba4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x378ba8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x378ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378bac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378bb0: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x378bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378bb4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x378bb4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x378bb8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x378bb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x378bbc: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x378BBCu;
    {
        const bool branch_taken_0x378bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378BBCu;
            // 0x378bc0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378bbc) {
            ctx->pc = 0x378CECu;
            goto label_378cec;
        }
    }
    ctx->pc = 0x378BC4u;
label_378bc4:
    // 0x378bc4: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x378BC4u;
    SET_GPR_U32(ctx, 31, 0x378BCCu);
    ctx->pc = 0x378BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378BC4u;
            // 0x378bc8: 0xc6340004  lwc1        $f20, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378BCCu; }
        if (ctx->pc != 0x378BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378BCCu; }
        if (ctx->pc != 0x378BCCu) { return; }
    }
    ctx->pc = 0x378BCCu;
label_378bcc:
    // 0x378bcc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x378bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x378bd0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x378BD0u;
    SET_GPR_U32(ctx, 31, 0x378BD8u);
    ctx->pc = 0x378BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378BD0u;
            // 0x378bd4: 0x29f40  sll         $s3, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378BD8u; }
        if (ctx->pc != 0x378BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378BD8u; }
        if (ctx->pc != 0x378BD8u) { return; }
    }
    ctx->pc = 0x378BD8u;
label_378bd8:
    // 0x378bd8: 0x532025  or          $a0, $v0, $s3
    ctx->pc = 0x378bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x378bdc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x378bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x378be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378be4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x378be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x378be8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x378be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378bec: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x378BECu;
    {
        const bool branch_taken_0x378bec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x378BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378BECu;
            // 0x378bf0: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378bec) {
            ctx->pc = 0x378C00u;
            goto label_378c00;
        }
    }
    ctx->pc = 0x378BF4u;
    // 0x378bf4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x378bf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378bf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x378BF8u;
    {
        const bool branch_taken_0x378bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378BF8u;
            // 0x378bfc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378bf8) {
            ctx->pc = 0x378C1Cu;
            goto label_378c1c;
        }
    }
    ctx->pc = 0x378C00u;
label_378c00:
    // 0x378c00: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x378c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x378c04: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x378c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x378c08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x378c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378c10: 0x0  nop
    ctx->pc = 0x378c10u;
    // NOP
    // 0x378c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x378c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x378c18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x378c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_378c1c:
    // 0x378c1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x378c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x378c20: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x378c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x378c24: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x378c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x378c28: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x378c28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x378c2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378c30: 0x0  nop
    ctx->pc = 0x378c30u;
    // NOP
    // 0x378c34: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x378c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x378c38: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x378c38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x378c3c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x378c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378c40: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x378c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378c44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378c48: 0x0  nop
    ctx->pc = 0x378c48u;
    // NOP
    // 0x378c4c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x378c4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x378c50: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x378c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x378c54: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x378c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x378c58: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x378C58u;
    SET_GPR_U32(ctx, 31, 0x378C60u);
    ctx->pc = 0x378C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378C58u;
            // 0x378c5c: 0xc6340008  lwc1        $f20, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378C60u; }
        if (ctx->pc != 0x378C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378C60u; }
        if (ctx->pc != 0x378C60u) { return; }
    }
    ctx->pc = 0x378C60u;
label_378c60:
    // 0x378c60: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x378c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x378c64: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x378C64u;
    SET_GPR_U32(ctx, 31, 0x378C6Cu);
    ctx->pc = 0x378C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378C64u;
            // 0x378c68: 0x29f40  sll         $s3, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378C6Cu; }
        if (ctx->pc != 0x378C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378C6Cu; }
        if (ctx->pc != 0x378C6Cu) { return; }
    }
    ctx->pc = 0x378C6Cu;
label_378c6c:
    // 0x378c6c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x378c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x378c70: 0x532825  or          $a1, $v0, $s3
    ctx->pc = 0x378c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x378c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378c78: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x378c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
    // 0x378c7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x378c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378c80: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x378C80u;
    {
        const bool branch_taken_0x378c80 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x378C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378C80u;
            // 0x378c84: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c80) {
            ctx->pc = 0x378C94u;
            goto label_378c94;
        }
    }
    ctx->pc = 0x378C88u;
    // 0x378c88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x378c88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378c8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x378C8Cu;
    {
        const bool branch_taken_0x378c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378C8Cu;
            // 0x378c90: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c8c) {
            ctx->pc = 0x378CB0u;
            goto label_378cb0;
        }
    }
    ctx->pc = 0x378C94u;
label_378c94:
    // 0x378c94: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x378c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x378c98: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x378c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x378c9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x378c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x378ca0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x378ca0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378ca4: 0x0  nop
    ctx->pc = 0x378ca4u;
    // NOP
    // 0x378ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x378ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x378cac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x378cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_378cb0:
    // 0x378cb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x378cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x378cb4: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x378cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
    // 0x378cb8: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x378cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x378cbc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x378cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x378cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378cc4: 0x0  nop
    ctx->pc = 0x378cc4u;
    // NOP
    // 0x378cc8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x378cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x378ccc: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x378cccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x378cd0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x378cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378cd4: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x378cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378cd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378cdc: 0x0  nop
    ctx->pc = 0x378cdcu;
    // NOP
    // 0x378ce0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x378ce0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x378ce4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x378ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x378ce8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x378ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_378cec:
    // 0x378cec: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x378cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_378cf0:
    // 0x378cf0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x378cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x378cf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x378cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378cf8: 0x0  nop
    ctx->pc = 0x378cf8u;
    // NOP
    // 0x378cfc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x378cfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378d00: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x378D00u;
    {
        const bool branch_taken_0x378d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x378d00) {
            ctx->pc = 0x378D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378D00u;
            // 0x378d04: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378D14u;
            goto label_378d14;
        }
    }
    ctx->pc = 0x378D08u;
    // 0x378d08: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x378d08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x378d0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x378D0Cu;
    {
        const bool branch_taken_0x378d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378D0Cu;
            // 0x378d10: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d0c) {
            ctx->pc = 0x378D30u;
            goto label_378d30;
        }
    }
    ctx->pc = 0x378D14u;
label_378d14:
    // 0x378d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378d18: 0x0  nop
    ctx->pc = 0x378d18u;
    // NOP
    // 0x378d1c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x378d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378d20: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x378D20u;
    {
        const bool branch_taken_0x378d20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x378d20) {
            ctx->pc = 0x378D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378D20u;
            // 0x378d24: 0xc6420004  lwc1        $f2, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x378D34u;
            goto label_378d34;
        }
    }
    ctx->pc = 0x378D28u;
    // 0x378d28: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x378d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x378d2c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x378d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_378d30:
    // 0x378d30: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x378d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_378d34:
    // 0x378d34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x378d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x378d38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x378d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378d3c: 0x0  nop
    ctx->pc = 0x378d3cu;
    // NOP
    // 0x378d40: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x378d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378d44: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x378D44u;
    {
        const bool branch_taken_0x378d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x378d44) {
            ctx->pc = 0x378D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378D44u;
            // 0x378d48: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378D58u;
            goto label_378d58;
        }
    }
    ctx->pc = 0x378D4Cu;
    // 0x378d4c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x378d4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x378d50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x378D50u;
    {
        const bool branch_taken_0x378d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378D50u;
            // 0x378d54: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d50) {
            ctx->pc = 0x378D74u;
            goto label_378d74;
        }
    }
    ctx->pc = 0x378D58u;
label_378d58:
    // 0x378d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378d5c: 0x0  nop
    ctx->pc = 0x378d5cu;
    // NOP
    // 0x378d60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x378d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378d64: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x378D64u;
    {
        const bool branch_taken_0x378d64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x378d64) {
            ctx->pc = 0x378D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378D64u;
            // 0x378d68: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x378D78u;
            goto label_378d78;
        }
    }
    ctx->pc = 0x378D6Cu;
    // 0x378d6c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x378d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x378d70: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x378d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_378d74:
    // 0x378d74: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x378d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_378d78:
    // 0x378d78: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x378d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378d7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x378d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x378d80: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x378d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x378d84: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x378d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378d88: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x378d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378d8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x378d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x378d90: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x378d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x378d94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x378d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x378d98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x378d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x378d9c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x378d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x378da0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x378da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378da4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x378da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378da8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x378da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378dac: 0x3e00008  jr          $ra
    ctx->pc = 0x378DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378DACu;
            // 0x378db0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x378DB4u;
    // 0x378db4: 0x0  nop
    ctx->pc = 0x378db4u;
    // NOP
    // 0x378db8: 0x0  nop
    ctx->pc = 0x378db8u;
    // NOP
    // 0x378dbc: 0x0  nop
    ctx->pc = 0x378dbcu;
    // NOP
}
