#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035A050
// Address: 0x35a050 - 0x35a2d0
void sub_0035A050_0x35a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A050_0x35a050");
#endif

    switch (ctx->pc) {
        case 0x35a0acu: goto label_35a0ac;
        case 0x35a0d4u: goto label_35a0d4;
        case 0x35a0ecu: goto label_35a0ec;
        case 0x35a0f8u: goto label_35a0f8;
        case 0x35a180u: goto label_35a180;
        case 0x35a18cu: goto label_35a18c;
        case 0x35a1e0u: goto label_35a1e0;
        case 0x35a1ecu: goto label_35a1ec;
        case 0x35a26cu: goto label_35a26c;
        default: break;
    }

    ctx->pc = 0x35a050u;

    // 0x35a050: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x35a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x35a054: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x35a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x35a058: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x35a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x35a05c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x35a05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x35a060: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x35a060u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a064: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x35a068: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x35a068u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a06c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x35a070: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35a070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x35a074: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x35a074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a078: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x35a07c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35a07cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a080: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35a080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35a084: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x35a084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a088: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35a08c: 0x249138a0  addiu       $s1, $a0, 0x38A0
    ctx->pc = 0x35a08cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 14496));
    // 0x35a090: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x35a090u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x35a094: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a098: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x35a098u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x35a09c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35a09cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35a0a0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x35a0a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x35a0a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x35a0a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x35a0a8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x35a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_35a0ac:
    // 0x35a0ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35a0b0: 0x14830071  bne         $a0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x35A0B0u;
    {
        const bool branch_taken_0x35a0b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35a0b0) {
            ctx->pc = 0x35A278u;
            goto label_35a278;
        }
    }
    ctx->pc = 0x35A0B8u;
    // 0x35a0b8: 0xae320060  sw          $s2, 0x60($s1)
    ctx->pc = 0x35a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 18));
    // 0x35a0bc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x35a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x35a0c0: 0xae340064  sw          $s4, 0x64($s1)
    ctx->pc = 0x35a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 20));
    // 0x35a0c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x35a0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0c8: 0xe6340054  swc1        $f20, 0x54($s1)
    ctx->pc = 0x35a0c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x35a0cc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x35A0CCu;
    SET_GPR_U32(ctx, 31, 0x35A0D4u);
    ctx->pc = 0x35A0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A0CCu;
            // 0x35a0d0: 0xae370068  sw          $s7, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A0D4u; }
        if (ctx->pc != 0x35A0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A0D4u; }
        if (ctx->pc != 0x35A0D4u) { return; }
    }
    ctx->pc = 0x35A0D4u;
label_35a0d4:
    // 0x35a0d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a0d8: 0x16420059  bne         $s2, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x35A0D8u;
    {
        const bool branch_taken_0x35a0d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x35a0d8) {
            ctx->pc = 0x35A240u;
            goto label_35a240;
        }
    }
    ctx->pc = 0x35A0E0u;
    // 0x35a0e0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x35a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x35a0e4: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x35A0E4u;
    SET_GPR_U32(ctx, 31, 0x35A0ECu);
    ctx->pc = 0x35A0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A0E4u;
            // 0x35a0e8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A0ECu; }
        if (ctx->pc != 0x35A0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A0ECu; }
        if (ctx->pc != 0x35A0ECu) { return; }
    }
    ctx->pc = 0x35A0ECu;
label_35a0ec:
    // 0x35a0ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35a0f0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x35A0F0u;
    SET_GPR_U32(ctx, 31, 0x35A0F8u);
    ctx->pc = 0x35A0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A0F0u;
            // 0x35a0f4: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A0F8u; }
        if (ctx->pc != 0x35A0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A0F8u; }
        if (ctx->pc != 0x35A0F8u) { return; }
    }
    ctx->pc = 0x35A0F8u;
label_35a0f8:
    // 0x35a0f8: 0x552025  or          $a0, $v0, $s5
    ctx->pc = 0x35a0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x35a0fc: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x35a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x35a100: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35a100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35a104: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A104u;
    {
        const bool branch_taken_0x35a104 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x35a104) {
            ctx->pc = 0x35A108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A104u;
            // 0x35a108: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A118u;
            goto label_35a118;
        }
    }
    ctx->pc = 0x35A10Cu;
    // 0x35a10c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x35a10cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a110: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35A110u;
    {
        const bool branch_taken_0x35a110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A110u;
            // 0x35a114: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a110) {
            ctx->pc = 0x35A130u;
            goto label_35a130;
        }
    }
    ctx->pc = 0x35A118u;
label_35a118:
    // 0x35a118: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x35a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x35a11c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35a11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35a120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a124: 0x0  nop
    ctx->pc = 0x35a124u;
    // NOP
    // 0x35a128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35a128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35a12c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x35a12cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_35a130:
    // 0x35a130: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x35a130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35a134: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x35a134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
    // 0x35a138: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x35a138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x35a13c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x35a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x35a140: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35a140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x35a144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a148: 0x0  nop
    ctx->pc = 0x35a148u;
    // NOP
    // 0x35a14c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x35a14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x35a150: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35a150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35a154: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x35a154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35a158: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35a158u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35a15c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35a15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a160: 0x0  nop
    ctx->pc = 0x35a160u;
    // NOP
    // 0x35a164: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x35a164u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35a168: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x35a168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x35a16c: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x35a16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x35a170: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x35a170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
    // 0x35a174: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x35a178: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x35A178u;
    SET_GPR_U32(ctx, 31, 0x35A180u);
    ctx->pc = 0x35A17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A178u;
            // 0x35a17c: 0xc4560018  lwc1        $f22, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A180u; }
        if (ctx->pc != 0x35A180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A180u; }
        if (ctx->pc != 0x35A180u) { return; }
    }
    ctx->pc = 0x35A180u;
label_35a180:
    // 0x35a180: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35a180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35a184: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x35A184u;
    SET_GPR_U32(ctx, 31, 0x35A18Cu);
    ctx->pc = 0x35A188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A184u;
            // 0x35a188: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A18Cu; }
        if (ctx->pc != 0x35A18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A18Cu; }
        if (ctx->pc != 0x35A18Cu) { return; }
    }
    ctx->pc = 0x35A18Cu;
label_35a18c:
    // 0x35a18c: 0x551825  or          $v1, $v0, $s5
    ctx->pc = 0x35a18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x35a190: 0x240202d8  addiu       $v0, $zero, 0x2D8
    ctx->pc = 0x35a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
    // 0x35a194: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x35a194u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x35a198: 0x1010  mfhi        $v0
    ctx->pc = 0x35a198u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35a19c: 0x24420444  addiu       $v0, $v0, 0x444
    ctx->pc = 0x35a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1092));
    // 0x35a1a0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A1A0u;
    {
        const bool branch_taken_0x35a1a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35a1a0) {
            ctx->pc = 0x35A1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A1A0u;
            // 0x35a1a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A1B4u;
            goto label_35a1b4;
        }
    }
    ctx->pc = 0x35A1A8u;
    // 0x35a1a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a1ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35A1ACu;
    {
        const bool branch_taken_0x35a1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A1ACu;
            // 0x35a1b0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a1ac) {
            ctx->pc = 0x35A1CCu;
            goto label_35a1cc;
        }
    }
    ctx->pc = 0x35A1B4u;
label_35a1b4:
    // 0x35a1b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35a1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35a1b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35a1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35a1bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a1bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a1c0: 0x0  nop
    ctx->pc = 0x35a1c0u;
    // NOP
    // 0x35a1c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35a1c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35a1c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x35a1c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_35a1cc:
    // 0x35a1cc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x35a1ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x35a1d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35a1d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35a1d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35a1d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35a1d8: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x35A1D8u;
    SET_GPR_U32(ctx, 31, 0x35A1E0u);
    ctx->pc = 0x35A1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A1D8u;
            // 0x35a1dc: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A1E0u; }
        if (ctx->pc != 0x35A1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A1E0u; }
        if (ctx->pc != 0x35A1E0u) { return; }
    }
    ctx->pc = 0x35A1E0u;
label_35a1e0:
    // 0x35a1e0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35a1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35a1e4: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x35A1E4u;
    SET_GPR_U32(ctx, 31, 0x35A1ECu);
    ctx->pc = 0x35A1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A1E4u;
            // 0x35a1e8: 0x2af40  sll         $s5, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A1ECu; }
        if (ctx->pc != 0x35A1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A1ECu; }
        if (ctx->pc != 0x35A1ECu) { return; }
    }
    ctx->pc = 0x35A1ECu;
label_35a1ec:
    // 0x35a1ec: 0x552025  or          $a0, $v0, $s5
    ctx->pc = 0x35a1ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x35a1f0: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x35a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x35a1f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35a1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35a1f8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A1F8u;
    {
        const bool branch_taken_0x35a1f8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x35a1f8) {
            ctx->pc = 0x35A1FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A1F8u;
            // 0x35a1fc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A20Cu;
            goto label_35a20c;
        }
    }
    ctx->pc = 0x35A200u;
    // 0x35a200: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x35a200u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a204: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35A204u;
    {
        const bool branch_taken_0x35a204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A204u;
            // 0x35a208: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a204) {
            ctx->pc = 0x35A224u;
            goto label_35a224;
        }
    }
    ctx->pc = 0x35A20Cu;
label_35a20c:
    // 0x35a20c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x35a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x35a210: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35a210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35a214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a218: 0x0  nop
    ctx->pc = 0x35a218u;
    // NOP
    // 0x35a21c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35a21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35a220: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x35a220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_35a224:
    // 0x35a224: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35a224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35a228: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35a228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35a22c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a230: 0x0  nop
    ctx->pc = 0x35a230u;
    // NOP
    // 0x35a234: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35a234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35a238: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x35a238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x35a23c: 0x0  nop
    ctx->pc = 0x35a23cu;
    // NOP
label_35a240:
    // 0x35a240: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x35a240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x35a244: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35a244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x35a248: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x35a248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x35a24c: 0x8c430e48  lw          $v1, 0xE48($v0)
    ctx->pc = 0x35a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
    // 0x35a250: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x35a250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x35a254: 0x27a700ac  addiu       $a3, $sp, 0xAC
    ctx->pc = 0x35a254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x35a258: 0xafb100ac  sw          $s1, 0xAC($sp)
    ctx->pc = 0x35a258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
    // 0x35a25c: 0x24626ab0  addiu       $v0, $v1, 0x6AB0
    ctx->pc = 0x35a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27312));
    // 0x35a260: 0x24656aa4  addiu       $a1, $v1, 0x6AA4
    ctx->pc = 0x35a260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27300));
    // 0x35a264: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x35A264u;
    SET_GPR_U32(ctx, 31, 0x35A26Cu);
    ctx->pc = 0x35A268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A264u;
            // 0x35a268: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A26Cu; }
        if (ctx->pc != 0x35A26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A26Cu; }
        if (ctx->pc != 0x35A26Cu) { return; }
    }
    ctx->pc = 0x35A26Cu;
label_35a26c:
    // 0x35a26c: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x35a26cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x35a270: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x35a270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x35a274: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x35a274u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_35a278:
    // 0x35a278: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a27c: 0x2e030064  sltiu       $v1, $s0, 0x64
    ctx->pc = 0x35a27cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x35a280: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35A280u;
    {
        const bool branch_taken_0x35a280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A280u;
            // 0x35a284: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a280) {
            ctx->pc = 0x35A28Cu;
            goto label_35a28c;
        }
    }
    ctx->pc = 0x35A288u;
    // 0x35a288: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x35a288u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_35a28c:
    // 0x35a28c: 0x5460ff87  bnel        $v1, $zero, . + 4 + (-0x79 << 2)
    ctx->pc = 0x35A28Cu;
    {
        const bool branch_taken_0x35a28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a28c) {
            ctx->pc = 0x35A290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A28Cu;
            // 0x35a290: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A0ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35a0ac;
        }
    }
    ctx->pc = 0x35A294u;
    // 0x35a294: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x35a294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35a298: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x35a298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x35a29c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x35a29cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35a2a0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x35a2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35a2a4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35a2a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35a2a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a2ac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35a2acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35a2b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35a2b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35a2b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35a2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35a2b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35a2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35a2bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35a2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a2c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35a2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x35A2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A2C4u;
            // 0x35a2c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35A2CCu;
    // 0x35a2cc: 0x0  nop
    ctx->pc = 0x35a2ccu;
    // NOP
}
