#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AE110
// Address: 0x3ae110 - 0x3ae290
void sub_003AE110_0x3ae110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE110_0x3ae110");
#endif

    switch (ctx->pc) {
        case 0x3ae278u: goto label_3ae278;
        default: break;
    }

    ctx->pc = 0x3ae110u;

    // 0x3ae110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae114: 0x3c0d0067  lui         $t5, 0x67
    ctx->pc = 0x3ae114u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)103 << 16));
    // 0x3ae118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae11c: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x3ae11cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
    // 0x3ae120: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x3ae120u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ae124: 0x25ad9bc0  addiu       $t5, $t5, -0x6440
    ctx->pc = 0x3ae124u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294941632));
    // 0x3ae128: 0x8d030d70  lw          $v1, 0xD70($t0)
    ctx->pc = 0x3ae128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3440)));
    // 0x3ae12c: 0x256b2100  addiu       $t3, $t3, 0x2100
    ctx->pc = 0x3ae12cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8448));
    // 0x3ae130: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x3ae130u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ae134: 0x918f0014  lbu         $t7, 0x14($t4)
    ctx->pc = 0x3ae134u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x3ae138: 0x246a00e8  addiu       $t2, $v1, 0xE8
    ctx->pc = 0x3ae138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
    // 0x3ae13c: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x3ae13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x3ae140: 0x1e7c018  mult        $t8, $t7, $a3
    ctx->pc = 0x3ae140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x3ae144: 0x91ce0116  lbu         $t6, 0x116($t6)
    ctx->pc = 0x3ae144u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 278)));
    // 0x3ae148: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ae148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ae14c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x3ae14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x3ae150: 0x918f0015  lbu         $t7, 0x15($t4)
    ctx->pc = 0x3ae150u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 21)));
    // 0x3ae154: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ae154u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae158: 0x0  nop
    ctx->pc = 0x3ae158u;
    // NOP
    // 0x3ae15c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3ae15cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3ae160: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x3ae160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x3ae164: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3ae164u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae168: 0x4600043  bltz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x3AE168u;
    {
        const bool branch_taken_0x3ae168 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3AE16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE168u;
            // 0x3ae16c: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae168) {
            ctx->pc = 0x3AE278u;
            goto label_3ae278;
        }
    }
    ctx->pc = 0x3AE170u;
    // 0x3ae170: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3ae170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x3ae174: 0x8d060da0  lw          $a2, 0xDA0($t0)
    ctx->pc = 0x3ae174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3488)));
    // 0x3ae178: 0x8ca5f520  lw          $a1, -0xAE0($a1)
    ctx->pc = 0x3ae178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294964512)));
    // 0x3ae17c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3ae17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3ae180: 0x54a0003e  bnel        $a1, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x3AE180u;
    {
        const bool branch_taken_0x3ae180 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae180) {
            ctx->pc = 0x3AE184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE180u;
            // 0x3ae184: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE27Cu;
            goto label_3ae27c;
        }
    }
    ctx->pc = 0x3AE188u;
    // 0x3ae188: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3ae188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ae18c: 0x14e50009  bne         $a3, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AE18Cu;
    {
        const bool branch_taken_0x3ae18c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ae18c) {
            ctx->pc = 0x3AE1B4u;
            goto label_3ae1b4;
        }
    }
    ctx->pc = 0x3AE194u;
    // 0x3ae194: 0x91450020  lbu         $a1, 0x20($t2)
    ctx->pc = 0x3ae194u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x3ae198: 0x91860016  lbu         $a2, 0x16($t4)
    ctx->pc = 0x3ae198u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 22)));
    // 0x3ae19c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ae19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ae1a0: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x3ae1a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3ae1a4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ae1a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae1a8: 0x0  nop
    ctx->pc = 0x3ae1a8u;
    // NOP
    // 0x3ae1ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ae1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ae1b0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3ae1b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3ae1b4:
    // 0x3ae1b4: 0x4600030  bltz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3AE1B4u;
    {
        const bool branch_taken_0x3ae1b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3ae1b4) {
            ctx->pc = 0x3AE278u;
            goto label_3ae278;
        }
    }
    ctx->pc = 0x3AE1BCu;
    // 0x3ae1bc: 0x31c200ff  andi        $v0, $t6, 0xFF
    ctx->pc = 0x3ae1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x3ae1c0: 0x312500ff  andi        $a1, $t1, 0xFF
    ctx->pc = 0x3ae1c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x3ae1c4: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x3ae1c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3ae1c8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE1C8u;
    {
        const bool branch_taken_0x3ae1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae1c8) {
            ctx->pc = 0x3AE1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE1C8u;
            // 0x3ae1cc: 0x91870016  lbu         $a3, 0x16($t4) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE1D8u;
            goto label_3ae1d8;
        }
    }
    ctx->pc = 0x3AE1D0u;
    // 0x3ae1d0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3ae1d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae1d4: 0x91870016  lbu         $a3, 0x16($t4)
    ctx->pc = 0x3ae1d4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 22)));
label_3ae1d8:
    // 0x3ae1d8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3ae1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3ae1dc: 0xc4409b38  lwc1        $f0, -0x64C8($v0)
    ctx->pc = 0x3ae1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae1e0: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x3ae1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x3ae1e4: 0xc584001c  lwc1        $f4, 0x1C($t4)
    ctx->pc = 0x3ae1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ae1e8: 0x312500ff  andi        $a1, $t1, 0xFF
    ctx->pc = 0x3ae1e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x3ae1ec: 0xe35018  mult        $t2, $a3, $v1
    ctx->pc = 0x3ae1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3ae1f0: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x3ae1f0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3ae1f4: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x3ae1f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ae1f8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3ae1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3ae1fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3ae1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3ae200: 0x85680002  lh          $t0, 0x2($t3)
    ctx->pc = 0x3ae200u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3ae204: 0x90840085  lbu         $a0, 0x85($a0)
    ctx->pc = 0x3ae204u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 133)));
    // 0x3ae208: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3ae208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3ae20c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ae20cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae210: 0xa33025  or          $a2, $a1, $v1
    ctx->pc = 0x3ae210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3ae214: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x3ae214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3ae218: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3ae218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3ae21c: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3ae21cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae220: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ae220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ae224: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ae224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ae228: 0x1a52821  addu        $a1, $t5, $a1
    ctx->pc = 0x3ae228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x3ae22c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x3ae22cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3ae230: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x3ae230u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3ae234: 0xc4409b3c  lwc1        $f0, -0x64C4($v0)
    ctx->pc = 0x3ae234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae238: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae23c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3ae23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3ae240: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3ae240u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3ae244: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ae244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ae248: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3ae248u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae24c: 0x0  nop
    ctx->pc = 0x3ae24cu;
    // NOP
    // 0x3ae250: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ae250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3ae254: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ae254u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae258: 0x0  nop
    ctx->pc = 0x3ae258u;
    // NOP
    // 0x3ae25c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ae25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3ae260: 0x46030b01  sub.s       $f12, $f1, $f3
    ctx->pc = 0x3ae260u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3ae264: 0x46030b80  add.s       $f14, $f1, $f3
    ctx->pc = 0x3ae264u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3ae268: 0x46022b41  sub.s       $f13, $f5, $f2
    ctx->pc = 0x3ae268u;
    ctx->f[13] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x3ae26c: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x3ae26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3ae270: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AE270u;
    SET_GPR_U32(ctx, 31, 0x3AE278u);
    ctx->pc = 0x3AE274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE270u;
            // 0x3ae274: 0x46022bc0  add.s       $f15, $f5, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE278u; }
        if (ctx->pc != 0x3AE278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE278u; }
        if (ctx->pc != 0x3AE278u) { return; }
    }
    ctx->pc = 0x3AE278u;
label_3ae278:
    // 0x3ae278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ae27c:
    // 0x3ae27c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE27Cu;
            // 0x3ae280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AE284u;
    // 0x3ae284: 0x0  nop
    ctx->pc = 0x3ae284u;
    // NOP
    // 0x3ae288: 0x0  nop
    ctx->pc = 0x3ae288u;
    // NOP
    // 0x3ae28c: 0x0  nop
    ctx->pc = 0x3ae28cu;
    // NOP
}
