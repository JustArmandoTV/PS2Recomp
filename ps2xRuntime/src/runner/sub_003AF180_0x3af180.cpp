#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AF180
// Address: 0x3af180 - 0x3af9e0
void sub_003AF180_0x3af180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF180_0x3af180");
#endif

    switch (ctx->pc) {
        case 0x3af490u: goto label_3af490;
        case 0x3af578u: goto label_3af578;
        case 0x3af630u: goto label_3af630;
        case 0x3af714u: goto label_3af714;
        case 0x3af804u: goto label_3af804;
        case 0x3af8ecu: goto label_3af8ec;
        case 0x3af9a4u: goto label_3af9a4;
        default: break;
    }

    ctx->pc = 0x3af180u;

    // 0x3af180: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3af180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3af184: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3af184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3af188: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3af188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3af18c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3af18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3af190: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3af190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3af194: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x3af194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af198: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3af198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3af19c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3af19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3af1a0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3af1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x3af1a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3af1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3af1a8: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x3af1a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
    // 0x3af1ac: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3af1acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3af1b0: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3af1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x3af1b4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3af1b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3af1b8: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x3af1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    // 0x3af1bc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3af1bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3af1c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3af1c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3af1c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3af1c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3af1c8: 0x90830080  lbu         $v1, 0x80($a0)
    ctx->pc = 0x3af1c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3af1cc: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x3af1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3af1d0: 0x34900  sll         $t1, $v1, 4
    ctx->pc = 0x3af1d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3af1d4: 0x92230010  lbu         $v1, 0x10($s1)
    ctx->pc = 0x3af1d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3af1d8: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x3af1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af1dc: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x3af1dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3af1e0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF1E0u;
    {
        const bool branch_taken_0x3af1e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3AF1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF1E0u;
            // 0x3af1e4: 0x2495821  addu        $t3, $s2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af1e0) {
            ctx->pc = 0x3AF1F4u;
            goto label_3af1f4;
        }
    }
    ctx->pc = 0x3AF1E8u;
    // 0x3af1e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3af1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af1ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF1ECu;
    {
        const bool branch_taken_0x3af1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF1ECu;
            // 0x3af1f0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af1ec) {
            ctx->pc = 0x3AF210u;
            goto label_3af210;
        }
    }
    ctx->pc = 0x3AF1F4u;
label_3af1f4:
    // 0x3af1f4: 0x35042  srl         $t2, $v1, 1
    ctx->pc = 0x3af1f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3af1f8: 0x30690001  andi        $t1, $v1, 0x1
    ctx->pc = 0x3af1f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3af1fc: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x3af1fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x3af200: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3af200u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af204: 0x0  nop
    ctx->pc = 0x3af204u;
    // NOP
    // 0x3af208: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3af208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3af20c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3af20cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3af210:
    // 0x3af210: 0x3c094040  lui         $t1, 0x4040
    ctx->pc = 0x3af210u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16448 << 16));
    // 0x3af214: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x3af214u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3af218: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF218u;
    {
        const bool branch_taken_0x3af218 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF218u;
            // 0x3af21c: 0x46000902  mul.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af218) {
            ctx->pc = 0x3AF22Cu;
            goto label_3af22c;
        }
    }
    ctx->pc = 0x3AF220u;
    // 0x3af220: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3af220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af224: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF224u;
    {
        const bool branch_taken_0x3af224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF224u;
            // 0x3af228: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af224) {
            ctx->pc = 0x3AF248u;
            goto label_3af248;
        }
    }
    ctx->pc = 0x3AF22Cu;
label_3af22c:
    // 0x3af22c: 0x25042  srl         $t2, $v0, 1
    ctx->pc = 0x3af22cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af230: 0x30490001  andi        $t1, $v0, 0x1
    ctx->pc = 0x3af230u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af234: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x3af234u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x3af238: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3af238u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af23c: 0x0  nop
    ctx->pc = 0x3af23cu;
    // NOP
    // 0x3af240: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3af240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3af244: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3af244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3af248:
    // 0x3af248: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3af248u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3af24c: 0x3c094090  lui         $t1, 0x4090
    ctx->pc = 0x3af24cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16528 << 16));
    // 0x3af250: 0x922a0001  lbu         $t2, 0x1($s1)
    ctx->pc = 0x3af250u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3af254: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x3af254u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af258: 0x0  nop
    ctx->pc = 0x3af258u;
    // NOP
    // 0x3af25c: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x3af25cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3af260: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3af260u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af264: 0x0  nop
    ctx->pc = 0x3af264u;
    // NOP
    // 0x3af268: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3af268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3af26c: 0x4604191c  madd.s      $f4, $f3, $f4
    ctx->pc = 0x3af26cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x3af270: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3af270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3af274: 0x0  nop
    ctx->pc = 0x3af274u;
    // NOP
    // 0x3af278: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x3af278u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3af27c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x3af27cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af280: 0x0  nop
    ctx->pc = 0x3af280u;
    // NOP
    // 0x3af284: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3af284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3af288: 0xc5620008  lwc1        $f2, 0x8($t3)
    ctx->pc = 0x3af288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3af28c: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF28Cu;
    {
        const bool branch_taken_0x3af28c = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x3AF290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF28Cu;
            // 0x3af290: 0x4601161c  madd.s      $f24, $f2, $f1 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af28c) {
            ctx->pc = 0x3AF2A0u;
            goto label_3af2a0;
        }
    }
    ctx->pc = 0x3AF294u;
    // 0x3af294: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3af294u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af298: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF298u;
    {
        const bool branch_taken_0x3af298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF298u;
            // 0x3af29c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af298) {
            ctx->pc = 0x3AF2BCu;
            goto label_3af2bc;
        }
    }
    ctx->pc = 0x3AF2A0u;
label_3af2a0:
    // 0x3af2a0: 0xa4842  srl         $t1, $t2, 1
    ctx->pc = 0x3af2a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x3af2a4: 0x31450001  andi        $a1, $t2, 0x1
    ctx->pc = 0x3af2a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x3af2a8: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x3af2a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x3af2ac: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x3af2acu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af2b0: 0x0  nop
    ctx->pc = 0x3af2b0u;
    // NOP
    // 0x3af2b4: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3af2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3af2b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3af2b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3af2bc:
    // 0x3af2bc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3af2bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af2c0: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x3af2c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3af2c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3af2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3af2c8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF2C8u;
    {
        const bool branch_taken_0x3af2c8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3AF2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF2C8u;
            // 0x3af2cc: 0x46020880  add.s       $f2, $f1, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af2c8) {
            ctx->pc = 0x3AF2DCu;
            goto label_3af2dc;
        }
    }
    ctx->pc = 0x3AF2D0u;
    // 0x3af2d0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3af2d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af2d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF2D4u;
    {
        const bool branch_taken_0x3af2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF2D4u;
            // 0x3af2d8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af2d4) {
            ctx->pc = 0x3AF2F8u;
            goto label_3af2f8;
        }
    }
    ctx->pc = 0x3AF2DCu;
label_3af2dc:
    // 0x3af2dc: 0x53042  srl         $a2, $a1, 1
    ctx->pc = 0x3af2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3af2e0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3af2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3af2e4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3af2e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3af2e8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3af2e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af2ec: 0x0  nop
    ctx->pc = 0x3af2ecu;
    // NOP
    // 0x3af2f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3af2f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3af2f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3af2f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3af2f8:
    // 0x3af2f8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3af2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3af2fc: 0x90860116  lbu         $a2, 0x116($a0)
    ctx->pc = 0x3af2fcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 278)));
    // 0x3af300: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF300u;
    {
        const bool branch_taken_0x3af300 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3AF304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF300u;
            // 0x3af304: 0x460115c1  sub.s       $f23, $f2, $f1 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af300) {
            ctx->pc = 0x3AF314u;
            goto label_3af314;
        }
    }
    ctx->pc = 0x3AF308u;
    // 0x3af308: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3af308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af30c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF30Cu;
    {
        const bool branch_taken_0x3af30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF30Cu;
            // 0x3af310: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af30c) {
            ctx->pc = 0x3AF330u;
            goto label_3af330;
        }
    }
    ctx->pc = 0x3AF314u;
label_3af314:
    // 0x3af314: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x3af314u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3af318: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x3af318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3af31c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3af31cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3af320: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3af320u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af324: 0x0  nop
    ctx->pc = 0x3af324u;
    // NOP
    // 0x3af328: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3af328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3af32c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3af32cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3af330:
    // 0x3af330: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF330u;
    {
        const bool branch_taken_0x3af330 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF330u;
            // 0x3af334: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af330) {
            ctx->pc = 0x3AF344u;
            goto label_3af344;
        }
    }
    ctx->pc = 0x3AF338u;
    // 0x3af338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3af338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af33c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF33Cu;
    {
        const bool branch_taken_0x3af33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF33Cu;
            // 0x3af340: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af33c) {
            ctx->pc = 0x3AF360u;
            goto label_3af360;
        }
    }
    ctx->pc = 0x3AF344u;
label_3af344:
    // 0x3af344: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x3af344u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af34c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3af34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3af350: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3af350u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af354: 0x0  nop
    ctx->pc = 0x3af354u;
    // NOP
    // 0x3af358: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3af358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3af35c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3af35cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3af360:
    // 0x3af360: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3af360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af364: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AF364u;
    {
        const bool branch_taken_0x3af364 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AF368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF364u;
            // 0x3af368: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af364) {
            ctx->pc = 0x3AF370u;
            goto label_3af370;
        }
    }
    ctx->pc = 0x3AF36Cu;
    // 0x3af36c: 0x4604c601  sub.s       $f24, $f24, $f4
    ctx->pc = 0x3af36cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[4]);
label_3af370:
    // 0x3af370: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x3af370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x3af374: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF374u;
    {
        const bool branch_taken_0x3af374 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3af374) {
            ctx->pc = 0x3AF378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF374u;
            // 0x3af378: 0x22842  srl         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AF388u;
            goto label_3af388;
        }
    }
    ctx->pc = 0x3AF37Cu;
    // 0x3af37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af380: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AF380u;
    {
        const bool branch_taken_0x3af380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF380u;
            // 0x3af384: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af380) {
            ctx->pc = 0x3AF3A0u;
            goto label_3af3a0;
        }
    }
    ctx->pc = 0x3AF388u;
label_3af388:
    // 0x3af388: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x3af388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af38c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3af38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3af390: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3af390u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af394: 0x0  nop
    ctx->pc = 0x3af394u;
    // NOP
    // 0x3af398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af39c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af39cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af3a0:
    // 0x3af3a0: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x3af3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
    // 0x3af3a4: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x3af3a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3af3a8: 0x3487851f  ori         $a3, $a0, 0x851F
    ctx->pc = 0x3af3a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
    // 0x3af3ac: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x3af3acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x3af3b0: 0xe80018  mult        $zero, $a3, $t0
    ctx->pc = 0x3af3b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3af3b4: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x3af3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3af3b8: 0xa49825  or          $s3, $a1, $a0
    ctx->pc = 0x3af3b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3af3bc: 0x4600bd81  sub.s       $f22, $f23, $f0
    ctx->pc = 0x3af3bcu;
    ctx->f[22] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x3af3c0: 0x2010  mfhi        $a0
    ctx->pc = 0x3af3c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3af3c4: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x3af3c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x3af3c8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x3af3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3af3cc: 0x24c4000d  addiu       $a0, $a2, 0xD
    ctx->pc = 0x3af3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 13));
    // 0x3af3d0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3af3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3af3d4: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x3af3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3af3d8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3af3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3af3dc: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x3af3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3af3e0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x3af3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3af3e4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3af3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3af3e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3af3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3af3ec: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF3ECu;
    {
        const bool branch_taken_0x3af3ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3AF3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF3ECu;
            // 0x3af3f0: 0x104a823  subu        $s5, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af3ec) {
            ctx->pc = 0x3AF400u;
            goto label_3af400;
        }
    }
    ctx->pc = 0x3AF3F4u;
    // 0x3af3f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af3f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF3F8u;
    {
        const bool branch_taken_0x3af3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF3F8u;
            // 0x3af3fc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af3f8) {
            ctx->pc = 0x3AF41Cu;
            goto label_3af41c;
        }
    }
    ctx->pc = 0x3AF400u;
label_3af400:
    // 0x3af400: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3af400u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3af404: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3af404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3af408: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3af408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3af40c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3af40cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af410: 0x0  nop
    ctx->pc = 0x3af410u;
    // NOP
    // 0x3af414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af418: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af41c:
    // 0x3af41c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF41Cu;
    {
        const bool branch_taken_0x3af41c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF41Cu;
            // 0x3af420: 0x4600c380  add.s       $f14, $f24, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af41c) {
            ctx->pc = 0x3AF430u;
            goto label_3af430;
        }
    }
    ctx->pc = 0x3AF424u;
    // 0x3af424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af428: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF428u;
    {
        const bool branch_taken_0x3af428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF428u;
            // 0x3af42c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af428) {
            ctx->pc = 0x3AF44Cu;
            goto label_3af44c;
        }
    }
    ctx->pc = 0x3AF430u;
label_3af430:
    // 0x3af430: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af430u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af434: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af438: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af43c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af43cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af440: 0x0  nop
    ctx->pc = 0x3af440u;
    // NOP
    // 0x3af444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af448: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af44c:
    // 0x3af44c: 0x4600b3c0  add.s       $f15, $f22, $f0
    ctx->pc = 0x3af44cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x3af450: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3af450u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3af454: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3af454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3af458: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3af458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3af45c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3af460: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3af460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af464: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3af464u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af468: 0x0  nop
    ctx->pc = 0x3af468u;
    // NOP
    // 0x3af46c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3af46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3af470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3af470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af478: 0x0  nop
    ctx->pc = 0x3af478u;
    // NOP
    // 0x3af47c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3af47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3af480: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3af480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x3af484: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3af484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3af488: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AF488u;
    SET_GPR_U32(ctx, 31, 0x3AF490u);
    ctx->pc = 0x3AF48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF488u;
            // 0x3af48c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF490u; }
        if (ctx->pc != 0x3AF490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF490u; }
        if (ctx->pc != 0x3AF490u) { return; }
    }
    ctx->pc = 0x3AF490u;
label_3af490:
    // 0x3af490: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3af490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3af494: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x3af494u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x3af498: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3af498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3af49c: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x3af49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3af4a0: 0x4614c600  add.s       $f24, $f24, $f20
    ctx->pc = 0x3af4a0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
    // 0x3af4a4: 0x0  nop
    ctx->pc = 0x3af4a4u;
    // NOP
    // 0x3af4a8: 0x1810  mfhi        $v1
    ctx->pc = 0x3af4a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3af4ac: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x3af4acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3af4b0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3af4b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3af4b4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3af4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3af4b8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3af4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3af4bc: 0x24a3000d  addiu       $v1, $a1, 0xD
    ctx->pc = 0x3af4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
    // 0x3af4c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3af4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3af4c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3af4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3af4c8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3af4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3af4cc: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x3af4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3af4d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF4D0u;
    {
        const bool branch_taken_0x3af4d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF4D0u;
            // 0x3af4d4: 0x2a4a823  subu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af4d0) {
            ctx->pc = 0x3AF4E4u;
            goto label_3af4e4;
        }
    }
    ctx->pc = 0x3AF4D8u;
    // 0x3af4d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af4d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af4dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF4DCu;
    {
        const bool branch_taken_0x3af4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF4DCu;
            // 0x3af4e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af4dc) {
            ctx->pc = 0x3AF500u;
            goto label_3af500;
        }
    }
    ctx->pc = 0x3AF4E4u;
label_3af4e4:
    // 0x3af4e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af4e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af4ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af4f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af4f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af4f4: 0x0  nop
    ctx->pc = 0x3af4f4u;
    // NOP
    // 0x3af4f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af4fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af500:
    // 0x3af500: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x3af500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x3af504: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF504u;
    {
        const bool branch_taken_0x3af504 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF504u;
            // 0x3af508: 0x4600c380  add.s       $f14, $f24, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af504) {
            ctx->pc = 0x3AF518u;
            goto label_3af518;
        }
    }
    ctx->pc = 0x3AF50Cu;
    // 0x3af50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af510: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF510u;
    {
        const bool branch_taken_0x3af510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF510u;
            // 0x3af514: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af510) {
            ctx->pc = 0x3AF534u;
            goto label_3af534;
        }
    }
    ctx->pc = 0x3AF518u;
label_3af518:
    // 0x3af518: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af518u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af51c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af520: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af528: 0x0  nop
    ctx->pc = 0x3af528u;
    // NOP
    // 0x3af52c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af530: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af534:
    // 0x3af534: 0x4600b3c0  add.s       $f15, $f22, $f0
    ctx->pc = 0x3af534u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x3af538: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3af538u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3af53c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3af53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3af540: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3af540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3af544: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3af548: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3af548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af54c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3af54cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af550: 0x0  nop
    ctx->pc = 0x3af550u;
    // NOP
    // 0x3af554: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3af554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3af558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3af558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af55c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af560: 0x0  nop
    ctx->pc = 0x3af560u;
    // NOP
    // 0x3af564: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3af564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3af568: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3af568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x3af56c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3af56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3af570: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AF570u;
    SET_GPR_U32(ctx, 31, 0x3AF578u);
    ctx->pc = 0x3AF574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF570u;
            // 0x3af574: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF578u; }
        if (ctx->pc != 0x3AF578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF578u; }
        if (ctx->pc != 0x3AF578u) { return; }
    }
    ctx->pc = 0x3AF578u;
label_3af578:
    // 0x3af578: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x3af578u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3af57c: 0x4614c600  add.s       $f24, $f24, $f20
    ctx->pc = 0x3af57cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
    // 0x3af580: 0x26a3000d  addiu       $v1, $s5, 0xD
    ctx->pc = 0x3af580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 13));
    // 0x3af584: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3af584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3af588: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF588u;
    {
        const bool branch_taken_0x3af588 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF588u;
            // 0x3af58c: 0x2432821  addu        $a1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af588) {
            ctx->pc = 0x3AF59Cu;
            goto label_3af59c;
        }
    }
    ctx->pc = 0x3AF590u;
    // 0x3af590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af594: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF594u;
    {
        const bool branch_taken_0x3af594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF594u;
            // 0x3af598: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af594) {
            ctx->pc = 0x3AF5B8u;
            goto label_3af5b8;
        }
    }
    ctx->pc = 0x3AF59Cu;
label_3af59c:
    // 0x3af59c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af5a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af5a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af5a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af5a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af5ac: 0x0  nop
    ctx->pc = 0x3af5acu;
    // NOP
    // 0x3af5b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af5b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af5b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af5b8:
    // 0x3af5b8: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x3af5b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x3af5bc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF5BCu;
    {
        const bool branch_taken_0x3af5bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF5BCu;
            // 0x3af5c0: 0x4600c380  add.s       $f14, $f24, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af5bc) {
            ctx->pc = 0x3AF5D0u;
            goto label_3af5d0;
        }
    }
    ctx->pc = 0x3AF5C4u;
    // 0x3af5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af5c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF5C8u;
    {
        const bool branch_taken_0x3af5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF5C8u;
            // 0x3af5cc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af5c8) {
            ctx->pc = 0x3AF5ECu;
            goto label_3af5ec;
        }
    }
    ctx->pc = 0x3AF5D0u;
label_3af5d0:
    // 0x3af5d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af5d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af5d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af5dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af5dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af5e0: 0x0  nop
    ctx->pc = 0x3af5e0u;
    // NOP
    // 0x3af5e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af5e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af5e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af5ec:
    // 0x3af5ec: 0x4600b3c0  add.s       $f15, $f22, $f0
    ctx->pc = 0x3af5ecu;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x3af5f0: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3af5f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3af5f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3af5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3af5f8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3af5f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3af5fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3af600: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3af600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af604: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3af604u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af608: 0x0  nop
    ctx->pc = 0x3af608u;
    // NOP
    // 0x3af60c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3af60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3af610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3af610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af618: 0x0  nop
    ctx->pc = 0x3af618u;
    // NOP
    // 0x3af61c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3af61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3af620: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3af620u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3af624: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3af624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3af628: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AF628u;
    SET_GPR_U32(ctx, 31, 0x3AF630u);
    ctx->pc = 0x3AF62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF628u;
            // 0x3af62c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF630u; }
        if (ctx->pc != 0x3AF630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF630u; }
        if (ctx->pc != 0x3AF630u) { return; }
    }
    ctx->pc = 0x3AF630u;
label_3af630:
    // 0x3af630: 0x68000dc  bltz        $s4, . + 4 + (0xDC << 2)
    ctx->pc = 0x3AF630u;
    {
        const bool branch_taken_0x3af630 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3AF634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF630u;
            // 0x3af634: 0x4614c600  add.s       $f24, $f24, $f20 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af630) {
            ctx->pc = 0x3AF9A4u;
            goto label_3af9a4;
        }
    }
    ctx->pc = 0x3AF638u;
    // 0x3af638: 0x92240013  lbu         $a0, 0x13($s1)
    ctx->pc = 0x3af638u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x3af63c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF63Cu;
    {
        const bool branch_taken_0x3af63c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3af63c) {
            ctx->pc = 0x3AF640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF63Cu;
            // 0x3af640: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AF650u;
            goto label_3af650;
        }
    }
    ctx->pc = 0x3AF644u;
    // 0x3af644: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3af644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af648: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AF648u;
    {
        const bool branch_taken_0x3af648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF648u;
            // 0x3af64c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af648) {
            ctx->pc = 0x3AF668u;
            goto label_3af668;
        }
    }
    ctx->pc = 0x3AF650u;
label_3af650:
    // 0x3af650: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3af650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3af654: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af65c: 0x0  nop
    ctx->pc = 0x3af65cu;
    // NOP
    // 0x3af660: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af664: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af668:
    // 0x3af668: 0x4600bd01  sub.s       $f20, $f23, $f0
    ctx->pc = 0x3af668u;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x3af66c: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x3af66cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3af670: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF670u;
    {
        const bool branch_taken_0x3af670 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF670u;
            // 0x3af674: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af670) {
            ctx->pc = 0x3AF684u;
            goto label_3af684;
        }
    }
    ctx->pc = 0x3AF678u;
    // 0x3af678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af67c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF67Cu;
    {
        const bool branch_taken_0x3af67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF67Cu;
            // 0x3af680: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af67c) {
            ctx->pc = 0x3AF6A0u;
            goto label_3af6a0;
        }
    }
    ctx->pc = 0x3AF684u;
label_3af684:
    // 0x3af684: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af684u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af688: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af68c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af694: 0x0  nop
    ctx->pc = 0x3af694u;
    // NOP
    // 0x3af698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af69c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af69cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af6a0:
    // 0x3af6a0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF6A0u;
    {
        const bool branch_taken_0x3af6a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AF6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF6A0u;
            // 0x3af6a4: 0x4600c380  add.s       $f14, $f24, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af6a0) {
            ctx->pc = 0x3AF6B4u;
            goto label_3af6b4;
        }
    }
    ctx->pc = 0x3AF6A8u;
    // 0x3af6a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3af6a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af6ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF6ACu;
    {
        const bool branch_taken_0x3af6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF6ACu;
            // 0x3af6b0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af6ac) {
            ctx->pc = 0x3AF6D0u;
            goto label_3af6d0;
        }
    }
    ctx->pc = 0x3AF6B4u;
label_3af6b4:
    // 0x3af6b4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3af6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3af6b8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3af6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3af6bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af6c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af6c4: 0x0  nop
    ctx->pc = 0x3af6c4u;
    // NOP
    // 0x3af6c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af6cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af6d0:
    // 0x3af6d0: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3af6d0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3af6d4: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3af6d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3af6d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3af6dc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3af6dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3af6e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3af6e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3af6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af6e8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3af6e8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af6ec: 0x0  nop
    ctx->pc = 0x3af6ecu;
    // NOP
    // 0x3af6f0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3af6f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3af6f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3af6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af6f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af6f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af6fc: 0x0  nop
    ctx->pc = 0x3af6fcu;
    // NOP
    // 0x3af700: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3af700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3af704: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3af704u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x3af708: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3af708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3af70c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AF70Cu;
    SET_GPR_U32(ctx, 31, 0x3AF714u);
    ctx->pc = 0x3AF710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF70Cu;
            // 0x3af710: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF714u; }
        if (ctx->pc != 0x3AF714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF714u; }
        if (ctx->pc != 0x3AF714u) { return; }
    }
    ctx->pc = 0x3AF714u;
label_3af714:
    // 0x3af714: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x3af714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x3af718: 0x1427c2  srl         $a0, $s4, 31
    ctx->pc = 0x3af718u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x3af71c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x3af71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x3af720: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x3af720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3af724: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x3af724u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x3af728: 0x0  nop
    ctx->pc = 0x3af728u;
    // NOP
    // 0x3af72c: 0x1810  mfhi        $v1
    ctx->pc = 0x3af72cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3af730: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x3af730u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3af734: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x3af734u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x3af738: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3af738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3af73c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3af73cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3af740: 0x24a3000d  addiu       $v1, $a1, 0xD
    ctx->pc = 0x3af740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
    // 0x3af744: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3af744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3af748: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3af748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3af74c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x3af74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3af750: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3af750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3af754: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3af754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3af758: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3af758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3af75c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF75Cu;
    {
        const bool branch_taken_0x3af75c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF75Cu;
            // 0x3af760: 0x283a023  subu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af75c) {
            ctx->pc = 0x3AF770u;
            goto label_3af770;
        }
    }
    ctx->pc = 0x3AF764u;
    // 0x3af764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af768: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF768u;
    {
        const bool branch_taken_0x3af768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF768u;
            // 0x3af76c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af768) {
            ctx->pc = 0x3AF78Cu;
            goto label_3af78c;
        }
    }
    ctx->pc = 0x3AF770u;
label_3af770:
    // 0x3af770: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af770u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af774: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af778: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af77c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af780: 0x0  nop
    ctx->pc = 0x3af780u;
    // NOP
    // 0x3af784: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af788: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af78c:
    // 0x3af78c: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x3af78cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x3af790: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF790u;
    {
        const bool branch_taken_0x3af790 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF790u;
            // 0x3af794: 0x4600c380  add.s       $f14, $f24, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af790) {
            ctx->pc = 0x3AF7A4u;
            goto label_3af7a4;
        }
    }
    ctx->pc = 0x3AF798u;
    // 0x3af798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af79c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF79Cu;
    {
        const bool branch_taken_0x3af79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF79Cu;
            // 0x3af7a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af79c) {
            ctx->pc = 0x3AF7C0u;
            goto label_3af7c0;
        }
    }
    ctx->pc = 0x3AF7A4u;
label_3af7a4:
    // 0x3af7a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af7a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af7ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af7b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af7b4: 0x0  nop
    ctx->pc = 0x3af7b4u;
    // NOP
    // 0x3af7b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af7b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af7bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af7bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af7c0:
    // 0x3af7c0: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3af7c0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3af7c4: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3af7c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3af7c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3af7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3af7cc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3af7ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3af7d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3af7d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3af7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af7d8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3af7d8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af7dc: 0x0  nop
    ctx->pc = 0x3af7dcu;
    // NOP
    // 0x3af7e0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3af7e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3af7e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3af7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af7e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af7e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af7ec: 0x0  nop
    ctx->pc = 0x3af7ecu;
    // NOP
    // 0x3af7f0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3af7f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3af7f4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3af7f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x3af7f8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3af7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3af7fc: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AF7FCu;
    SET_GPR_U32(ctx, 31, 0x3AF804u);
    ctx->pc = 0x3AF800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF7FCu;
            // 0x3af800: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF804u; }
        if (ctx->pc != 0x3AF804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF804u; }
        if (ctx->pc != 0x3AF804u) { return; }
    }
    ctx->pc = 0x3AF804u;
label_3af804:
    // 0x3af804: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3af804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3af808: 0x1427c2  srl         $a0, $s4, 31
    ctx->pc = 0x3af808u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x3af80c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3af80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3af810: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x3af810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3af814: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x3af814u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x3af818: 0x0  nop
    ctx->pc = 0x3af818u;
    // NOP
    // 0x3af81c: 0x1810  mfhi        $v1
    ctx->pc = 0x3af81cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3af820: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x3af820u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3af824: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3af824u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3af828: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3af828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3af82c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3af82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3af830: 0x24a3000d  addiu       $v1, $a1, 0xD
    ctx->pc = 0x3af830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
    // 0x3af834: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3af834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3af838: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3af838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3af83c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3af83cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3af840: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x3af840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3af844: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF844u;
    {
        const bool branch_taken_0x3af844 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF844u;
            // 0x3af848: 0x284a023  subu        $s4, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af844) {
            ctx->pc = 0x3AF858u;
            goto label_3af858;
        }
    }
    ctx->pc = 0x3AF84Cu;
    // 0x3af84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af850: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF850u;
    {
        const bool branch_taken_0x3af850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF850u;
            // 0x3af854: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af850) {
            ctx->pc = 0x3AF874u;
            goto label_3af874;
        }
    }
    ctx->pc = 0x3AF858u;
label_3af858:
    // 0x3af858: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af860: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af868: 0x0  nop
    ctx->pc = 0x3af868u;
    // NOP
    // 0x3af86c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af870: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af874:
    // 0x3af874: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x3af874u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x3af878: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF878u;
    {
        const bool branch_taken_0x3af878 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF878u;
            // 0x3af87c: 0x4600c380  add.s       $f14, $f24, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af878) {
            ctx->pc = 0x3AF88Cu;
            goto label_3af88c;
        }
    }
    ctx->pc = 0x3AF880u;
    // 0x3af880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF884u;
    {
        const bool branch_taken_0x3af884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF884u;
            // 0x3af888: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af884) {
            ctx->pc = 0x3AF8A8u;
            goto label_3af8a8;
        }
    }
    ctx->pc = 0x3AF88Cu;
label_3af88c:
    // 0x3af88c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af890: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af894: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af89c: 0x0  nop
    ctx->pc = 0x3af89cu;
    // NOP
    // 0x3af8a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af8a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af8a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af8a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af8a8:
    // 0x3af8a8: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3af8a8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3af8ac: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3af8acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3af8b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3af8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3af8b4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3af8b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3af8b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3af8bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3af8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af8c0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3af8c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af8c4: 0x0  nop
    ctx->pc = 0x3af8c4u;
    // NOP
    // 0x3af8c8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3af8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3af8cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3af8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af8d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af8d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af8d4: 0x0  nop
    ctx->pc = 0x3af8d4u;
    // NOP
    // 0x3af8d8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3af8d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3af8dc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3af8dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x3af8e0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3af8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3af8e4: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AF8E4u;
    SET_GPR_U32(ctx, 31, 0x3AF8ECu);
    ctx->pc = 0x3AF8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF8E4u;
            // 0x3af8e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF8ECu; }
        if (ctx->pc != 0x3AF8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF8ECu; }
        if (ctx->pc != 0x3AF8ECu) { return; }
    }
    ctx->pc = 0x3AF8ECu;
label_3af8ec:
    // 0x3af8ec: 0x2682000d  addiu       $v0, $s4, 0xD
    ctx->pc = 0x3af8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 13));
    // 0x3af8f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3af8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3af8f4: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x3af8f4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x3af8f8: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x3af8f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3af8fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF8FCu;
    {
        const bool branch_taken_0x3af8fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF8FCu;
            // 0x3af900: 0x2432821  addu        $a1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af8fc) {
            ctx->pc = 0x3AF910u;
            goto label_3af910;
        }
    }
    ctx->pc = 0x3AF904u;
    // 0x3af904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af908: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF908u;
    {
        const bool branch_taken_0x3af908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF908u;
            // 0x3af90c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af908) {
            ctx->pc = 0x3AF92Cu;
            goto label_3af92c;
        }
    }
    ctx->pc = 0x3AF910u;
label_3af910:
    // 0x3af910: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af910u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af914: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af918: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af91c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af91cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af920: 0x0  nop
    ctx->pc = 0x3af920u;
    // NOP
    // 0x3af924: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af928: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af92c:
    // 0x3af92c: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x3af92cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x3af930: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF930u;
    {
        const bool branch_taken_0x3af930 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AF934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF930u;
            // 0x3af934: 0x4600c380  add.s       $f14, $f24, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af930) {
            ctx->pc = 0x3AF944u;
            goto label_3af944;
        }
    }
    ctx->pc = 0x3AF938u;
    // 0x3af938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af93c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF93Cu;
    {
        const bool branch_taken_0x3af93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF93Cu;
            // 0x3af940: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af93c) {
            ctx->pc = 0x3AF960u;
            goto label_3af960;
        }
    }
    ctx->pc = 0x3AF944u;
label_3af944:
    // 0x3af944: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3af944u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3af948: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af94c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af954: 0x0  nop
    ctx->pc = 0x3af954u;
    // NOP
    // 0x3af958: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af95c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3af95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3af960:
    // 0x3af960: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3af960u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3af964: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3af964u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3af968: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3af968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3af96c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3af96cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3af970: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3af970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af974: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3af978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3af978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af97c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3af97cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af980: 0x0  nop
    ctx->pc = 0x3af980u;
    // NOP
    // 0x3af984: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3af984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3af988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af98c: 0x0  nop
    ctx->pc = 0x3af98cu;
    // NOP
    // 0x3af990: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3af990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3af994: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3af994u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x3af998: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3af998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3af99c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AF99Cu;
    SET_GPR_U32(ctx, 31, 0x3AF9A4u);
    ctx->pc = 0x3AF9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF99Cu;
            // 0x3af9a0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF9A4u; }
        if (ctx->pc != 0x3AF9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF9A4u; }
        if (ctx->pc != 0x3AF9A4u) { return; }
    }
    ctx->pc = 0x3AF9A4u;
label_3af9a4:
    // 0x3af9a4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3af9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3af9a8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3af9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3af9ac: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3af9acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3af9b0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3af9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3af9b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3af9b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3af9b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3af9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3af9bc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3af9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3af9c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3af9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3af9c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3af9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af9c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3af9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3af9cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3af9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af9d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3af9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF9D4u;
            // 0x3af9d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AF9DCu;
    // 0x3af9dc: 0x0  nop
    ctx->pc = 0x3af9dcu;
    // NOP
}
