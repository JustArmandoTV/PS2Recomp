#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C58C0
// Address: 0x4c58c0 - 0x4c5a50
void sub_004C58C0_0x4c58c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C58C0_0x4c58c0");
#endif

    switch (ctx->pc) {
        case 0x4c58c0u: goto label_4c58c0;
        case 0x4c58c4u: goto label_4c58c4;
        case 0x4c58c8u: goto label_4c58c8;
        case 0x4c58ccu: goto label_4c58cc;
        case 0x4c58d0u: goto label_4c58d0;
        case 0x4c58d4u: goto label_4c58d4;
        case 0x4c58d8u: goto label_4c58d8;
        case 0x4c58dcu: goto label_4c58dc;
        case 0x4c58e0u: goto label_4c58e0;
        case 0x4c58e4u: goto label_4c58e4;
        case 0x4c58e8u: goto label_4c58e8;
        case 0x4c58ecu: goto label_4c58ec;
        case 0x4c58f0u: goto label_4c58f0;
        case 0x4c58f4u: goto label_4c58f4;
        case 0x4c58f8u: goto label_4c58f8;
        case 0x4c58fcu: goto label_4c58fc;
        case 0x4c5900u: goto label_4c5900;
        case 0x4c5904u: goto label_4c5904;
        case 0x4c5908u: goto label_4c5908;
        case 0x4c590cu: goto label_4c590c;
        case 0x4c5910u: goto label_4c5910;
        case 0x4c5914u: goto label_4c5914;
        case 0x4c5918u: goto label_4c5918;
        case 0x4c591cu: goto label_4c591c;
        case 0x4c5920u: goto label_4c5920;
        case 0x4c5924u: goto label_4c5924;
        case 0x4c5928u: goto label_4c5928;
        case 0x4c592cu: goto label_4c592c;
        case 0x4c5930u: goto label_4c5930;
        case 0x4c5934u: goto label_4c5934;
        case 0x4c5938u: goto label_4c5938;
        case 0x4c593cu: goto label_4c593c;
        case 0x4c5940u: goto label_4c5940;
        case 0x4c5944u: goto label_4c5944;
        case 0x4c5948u: goto label_4c5948;
        case 0x4c594cu: goto label_4c594c;
        case 0x4c5950u: goto label_4c5950;
        case 0x4c5954u: goto label_4c5954;
        case 0x4c5958u: goto label_4c5958;
        case 0x4c595cu: goto label_4c595c;
        case 0x4c5960u: goto label_4c5960;
        case 0x4c5964u: goto label_4c5964;
        case 0x4c5968u: goto label_4c5968;
        case 0x4c596cu: goto label_4c596c;
        case 0x4c5970u: goto label_4c5970;
        case 0x4c5974u: goto label_4c5974;
        case 0x4c5978u: goto label_4c5978;
        case 0x4c597cu: goto label_4c597c;
        case 0x4c5980u: goto label_4c5980;
        case 0x4c5984u: goto label_4c5984;
        case 0x4c5988u: goto label_4c5988;
        case 0x4c598cu: goto label_4c598c;
        case 0x4c5990u: goto label_4c5990;
        case 0x4c5994u: goto label_4c5994;
        case 0x4c5998u: goto label_4c5998;
        case 0x4c599cu: goto label_4c599c;
        case 0x4c59a0u: goto label_4c59a0;
        case 0x4c59a4u: goto label_4c59a4;
        case 0x4c59a8u: goto label_4c59a8;
        case 0x4c59acu: goto label_4c59ac;
        case 0x4c59b0u: goto label_4c59b0;
        case 0x4c59b4u: goto label_4c59b4;
        case 0x4c59b8u: goto label_4c59b8;
        case 0x4c59bcu: goto label_4c59bc;
        case 0x4c59c0u: goto label_4c59c0;
        case 0x4c59c4u: goto label_4c59c4;
        case 0x4c59c8u: goto label_4c59c8;
        case 0x4c59ccu: goto label_4c59cc;
        case 0x4c59d0u: goto label_4c59d0;
        case 0x4c59d4u: goto label_4c59d4;
        case 0x4c59d8u: goto label_4c59d8;
        case 0x4c59dcu: goto label_4c59dc;
        case 0x4c59e0u: goto label_4c59e0;
        case 0x4c59e4u: goto label_4c59e4;
        case 0x4c59e8u: goto label_4c59e8;
        case 0x4c59ecu: goto label_4c59ec;
        case 0x4c59f0u: goto label_4c59f0;
        case 0x4c59f4u: goto label_4c59f4;
        case 0x4c59f8u: goto label_4c59f8;
        case 0x4c59fcu: goto label_4c59fc;
        case 0x4c5a00u: goto label_4c5a00;
        case 0x4c5a04u: goto label_4c5a04;
        case 0x4c5a08u: goto label_4c5a08;
        case 0x4c5a0cu: goto label_4c5a0c;
        case 0x4c5a10u: goto label_4c5a10;
        case 0x4c5a14u: goto label_4c5a14;
        case 0x4c5a18u: goto label_4c5a18;
        case 0x4c5a1cu: goto label_4c5a1c;
        case 0x4c5a20u: goto label_4c5a20;
        case 0x4c5a24u: goto label_4c5a24;
        case 0x4c5a28u: goto label_4c5a28;
        case 0x4c5a2cu: goto label_4c5a2c;
        case 0x4c5a30u: goto label_4c5a30;
        case 0x4c5a34u: goto label_4c5a34;
        case 0x4c5a38u: goto label_4c5a38;
        case 0x4c5a3cu: goto label_4c5a3c;
        case 0x4c5a40u: goto label_4c5a40;
        case 0x4c5a44u: goto label_4c5a44;
        case 0x4c5a48u: goto label_4c5a48;
        case 0x4c5a4cu: goto label_4c5a4c;
        default: break;
    }

    ctx->pc = 0x4c58c0u;

label_4c58c0:
    // 0x4c58c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c58c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c58c4:
    // 0x4c58c4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x4c58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4c58c8:
    // 0x4c58c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4c58c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4c58cc:
    // 0x4c58cc: 0x3c053f9c  lui         $a1, 0x3F9C
    ctx->pc = 0x4c58ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16284 << 16));
label_4c58d0:
    // 0x4c58d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4c58d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4c58d4:
    // 0x4c58d4: 0x34a528f6  ori         $a1, $a1, 0x28F6
    ctx->pc = 0x4c58d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10486);
label_4c58d8:
    // 0x4c58d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4c58d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4c58dc:
    // 0x4c58dc: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x4c58dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4c58e0:
    // 0x4c58e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4c58e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4c58e4:
    // 0x4c58e4: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4c58e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4c58e8:
    // 0x4c58e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c58e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c58ec:
    // 0x4c58ec: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x4c58ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_4c58f0:
    // 0x4c58f0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4c58f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4c58f4:
    // 0x4c58f4: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x4c58f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
label_4c58f8:
    // 0x4c58f8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4c58f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4c58fc:
    // 0x4c58fc: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x4c58fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
label_4c5900:
    // 0x4c5900: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4c5900u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4c5904:
    // 0x4c5904: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c5904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c5908:
    // 0x4c5908: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x4c5908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c590c:
    // 0x4c590c: 0x8cc30d70  lw          $v1, 0xD70($a2)
    ctx->pc = 0x4c590cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3440)));
label_4c5910:
    // 0x4c5910: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x4c5910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c5914:
    // 0x4c5914: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4c5914u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5918:
    // 0x4c5918: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4c5918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4c591c:
    // 0x4c591c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4c591cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4c5920:
    // 0x4c5920: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x4c5920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_4c5924:
    // 0x4c5924: 0x84e60018  lh          $a2, 0x18($a3)
    ctx->pc = 0x4c5924u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
label_4c5928:
    // 0x4c5928: 0x90b00116  lbu         $s0, 0x116($a1)
    ctx->pc = 0x4c5928u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 278)));
label_4c592c:
    // 0x4c592c: 0x8484000a  lh          $a0, 0xA($a0)
    ctx->pc = 0x4c592cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_4c5930:
    // 0x4c5930: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c5930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4c5934:
    // 0x4c5934: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x4c5934u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4c5938:
    // 0x4c5938: 0x84e5001a  lh          $a1, 0x1A($a3)
    ctx->pc = 0x4c5938u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
label_4c593c:
    // 0x4c593c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4c593cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5940:
    // 0x4c5940: 0x0  nop
    ctx->pc = 0x4c5940u;
    // NOP
label_4c5944:
    // 0x4c5944: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x4c5944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_4c5948:
    // 0x4c5948: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4c5948u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c594c:
    // 0x4c594c: 0x0  nop
    ctx->pc = 0x4c594cu;
    // NOP
label_4c5950:
    // 0x4c5950: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4c5950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4c5954:
    // 0x4c5954: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4c5954u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5958:
    // 0x4c5958: 0x0  nop
    ctx->pc = 0x4c5958u;
    // NOP
label_4c595c:
    // 0x4c595c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4c595cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4c5960:
    // 0x4c5960: 0x460002e  bltz        $v1, . + 4 + (0x2E << 2)
label_4c5964:
    if (ctx->pc == 0x4C5964u) {
        ctx->pc = 0x4C5964u;
            // 0x4c5964: 0x46000dc0  add.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4C5968u;
        goto label_4c5968;
    }
    ctx->pc = 0x4C5960u;
    {
        const bool branch_taken_0x4c5960 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4C5964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5960u;
            // 0x4c5964: 0x46000dc0  add.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5960) {
            ctx->pc = 0x4C5A1Cu;
            goto label_4c5a1c;
        }
    }
    ctx->pc = 0x4C5968u;
label_4c5968:
    // 0x4c5968: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c5968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c596c:
    // 0x4c596c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4c596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4c5970:
    // 0x4c5970: 0xc0506ac  jal         func_141AB0
label_4c5974:
    if (ctx->pc == 0x4C5974u) {
        ctx->pc = 0x4C5974u;
            // 0x4c5974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5978u;
        goto label_4c5978;
    }
    ctx->pc = 0x4C5970u;
    SET_GPR_U32(ctx, 31, 0x4C5978u);
    ctx->pc = 0x4C5974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5970u;
            // 0x4c5974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5978u; }
        if (ctx->pc != 0x4C5978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5978u; }
        if (ctx->pc != 0x4C5978u) { return; }
    }
    ctx->pc = 0x4C5978u;
label_4c5978:
    // 0x4c5978: 0xc6420428  lwc1        $f2, 0x428($s2)
    ctx->pc = 0x4c5978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c597c:
    // 0x4c597c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4c597cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4c5980:
    // 0x4c5980: 0xc640042c  lwc1        $f0, 0x42C($s2)
    ctx->pc = 0x4c5980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c5984:
    // 0x4c5984: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4c5984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5988:
    // 0x4c5988: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4c5988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c598c:
    // 0x4c598c: 0x26530420  addiu       $s3, $s2, 0x420
    ctx->pc = 0x4c598cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
label_4c5990:
    // 0x4c5990: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c5990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c5994:
    // 0x4c5994: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x4c5994u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_4c5998:
    // 0x4c5998: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4c5998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4c599c:
    // 0x4c599c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c599cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c59a0:
    // 0x4c59a0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4c59a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_4c59a4:
    // 0x4c59a4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c59a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c59a8:
    // 0x4c59a8: 0x46020d82  mul.s       $f22, $f1, $f2
    ctx->pc = 0x4c59a8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4c59ac:
    // 0x4c59ac: 0x320f809  jalr        $t9
label_4c59b0:
    if (ctx->pc == 0x4C59B0u) {
        ctx->pc = 0x4C59B0u;
            // 0x4c59b0: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4C59B4u;
        goto label_4c59b4;
    }
    ctx->pc = 0x4C59ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C59B4u);
        ctx->pc = 0x4C59B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C59ACu;
            // 0x4c59b0: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C59B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C59B4u; }
            if (ctx->pc != 0x4C59B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4C59B4u;
label_4c59b4:
    // 0x4c59b4: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x4c59b4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c59b8:
    // 0x4c59b8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x4c59b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4c59bc:
    // 0x4c59bc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c59c0:
    // 0x4c59c0: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x4c59c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c59c4:
    // 0x4c59c4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4c59c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c59c8:
    // 0x4c59c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c59c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c59cc:
    // 0x4c59cc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4c59ccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c59d0:
    // 0x4c59d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c59d4:
    // 0x4c59d4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c59d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c59d8:
    // 0x4c59d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c59d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c59dc:
    // 0x4c59dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c59dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c59e0:
    // 0x4c59e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4c59e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c59e4:
    // 0x4c59e4: 0x0  nop
    ctx->pc = 0x4c59e4u;
    // NOP
label_4c59e8:
    // 0x4c59e8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c59e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c59ec:
    // 0x4c59ec: 0x4616a301  sub.s       $f12, $f20, $f22
    ctx->pc = 0x4c59ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_4c59f0:
    // 0x4c59f0: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x4c59f0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_4c59f4:
    // 0x4c59f4: 0x4615bb41  sub.s       $f13, $f23, $f21
    ctx->pc = 0x4c59f4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_4c59f8:
    // 0x4c59f8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c59f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c59fc:
    // 0x4c59fc: 0xc0bc284  jal         func_2F0A10
label_4c5a00:
    if (ctx->pc == 0x4C5A00u) {
        ctx->pc = 0x4C5A00u;
            // 0x4c5a00: 0x4615bbc0  add.s       $f15, $f23, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
        ctx->pc = 0x4C5A04u;
        goto label_4c5a04;
    }
    ctx->pc = 0x4C59FCu;
    SET_GPR_U32(ctx, 31, 0x4C5A04u);
    ctx->pc = 0x4C5A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C59FCu;
            // 0x4c5a00: 0x4615bbc0  add.s       $f15, $f23, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5A04u; }
        if (ctx->pc != 0x4C5A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5A04u; }
        if (ctx->pc != 0x4C5A04u) { return; }
    }
    ctx->pc = 0x4C5A04u;
label_4c5a04:
    // 0x4c5a04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c5a08:
    // 0x4c5a08: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4c5a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4c5a0c:
    // 0x4c5a0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c5a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c5a10:
    // 0x4c5a10: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c5a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c5a14:
    // 0x4c5a14: 0x320f809  jalr        $t9
label_4c5a18:
    if (ctx->pc == 0x4C5A18u) {
        ctx->pc = 0x4C5A1Cu;
        goto label_4c5a1c;
    }
    ctx->pc = 0x4C5A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C5A1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C5A1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C5A1Cu; }
            if (ctx->pc != 0x4C5A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C5A1Cu;
label_4c5a1c:
    // 0x4c5a1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4c5a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c5a20:
    // 0x4c5a20: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4c5a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4c5a24:
    // 0x4c5a24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4c5a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c5a28:
    // 0x4c5a28: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4c5a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4c5a2c:
    // 0x4c5a2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4c5a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c5a30:
    // 0x4c5a30: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4c5a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4c5a34:
    // 0x4c5a34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4c5a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c5a38:
    // 0x4c5a38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c5a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c5a3c:
    // 0x4c5a3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c5a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c5a40:
    // 0x4c5a40: 0x3e00008  jr          $ra
label_4c5a44:
    if (ctx->pc == 0x4C5A44u) {
        ctx->pc = 0x4C5A44u;
            // 0x4c5a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C5A48u;
        goto label_4c5a48;
    }
    ctx->pc = 0x4C5A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5A40u;
            // 0x4c5a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C5A48u;
label_4c5a48:
    // 0x4c5a48: 0x0  nop
    ctx->pc = 0x4c5a48u;
    // NOP
label_4c5a4c:
    // 0x4c5a4c: 0x0  nop
    ctx->pc = 0x4c5a4cu;
    // NOP
}
