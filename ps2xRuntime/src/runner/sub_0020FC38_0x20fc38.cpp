#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020FC38
// Address: 0x20fc38 - 0x210688
void sub_0020FC38_0x20fc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FC38_0x20fc38");
#endif

    switch (ctx->pc) {
        case 0x20fd08u: goto label_20fd08;
        case 0x20fd88u: goto label_20fd88;
        case 0x20fda8u: goto label_20fda8;
        case 0x20fe00u: goto label_20fe00;
        case 0x20ff00u: goto label_20ff00;
        case 0x20ff20u: goto label_20ff20;
        case 0x210020u: goto label_210020;
        case 0x2100a8u: goto label_2100a8;
        case 0x2100fcu: goto label_2100fc;
        case 0x21010cu: goto label_21010c;
        case 0x210230u: goto label_210230;
        case 0x2102a0u: goto label_2102a0;
        case 0x2104c8u: goto label_2104c8;
        case 0x210538u: goto label_210538;
        case 0x210644u: goto label_210644;
        default: break;
    }

    ctx->pc = 0x20fc38u;

    // 0x20fc38: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x20fc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x20fc3c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x20fc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x20fc40: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x20fc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x20fc44: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x20fc44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc48: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x20fc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x20fc4c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x20fc4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc50: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x20fc50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x20fc54: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x20fc54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc58: 0xafa900f0  sw          $t1, 0xF0($sp)
    ctx->pc = 0x20fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 9));
    // 0x20fc5c: 0x240a001b  addiu       $t2, $zero, 0x1B
    ctx->pc = 0x20fc5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20fc60: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x20fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x20fc64: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x20fc64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x20fc68: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x20fc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x20fc6c: 0x4be002ec  vsub.xyzw   $vf11, $vf0, $vf0
    ctx->pc = 0x20fc6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x20fc70: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x20fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x20fc74: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x20fc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x20fc78: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x20fc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x20fc7c: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x20fc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x20fc80: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x20fc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x20fc84: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x20fc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x20fc88: 0x8d360000  lw          $s6, 0x0($t1)
    ctx->pc = 0x20fc88u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20fc8c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x20fc8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x20fc90: 0xa6de0002  sh          $fp, 0x2($s6)
    ctx->pc = 0x20fc90u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 30));
    // 0x20fc94: 0x26c70010  addiu       $a3, $s6, 0x10
    ctx->pc = 0x20fc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x20fc98: 0x3529fff0  ori         $t1, $t1, 0xFFF0
    ctx->pc = 0x20fc98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65520);
    // 0x20fc9c: 0xa2ca0000  sb          $t2, 0x0($s6)
    ctx->pc = 0x20fc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x20fca0: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x20fca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x20fca4: 0xe6cc0008  swc1        $f12, 0x8($s6)
    ctx->pc = 0x20fca4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x20fca8: 0x683018  mult        $a2, $v1, $t0
    ctx->pc = 0x20fca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x20fcac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20fcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fcb0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x20fcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20fcb4: 0x884018  mult        $t0, $a0, $t0
    ctx->pc = 0x20fcb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x20fcb8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x20fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x20fcbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20fcc0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x20fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x20fcc4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20fcc8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x20fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x20fccc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20fcd0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20fcd4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x20fcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20fcd8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20fcdc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x20fcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20fce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20fce4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x20fce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x20fce8: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x20fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20fcec: 0xe6cd000c  swc1        $f13, 0xC($s6)
    ctx->pc = 0x20fcecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x20fcf0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x20fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20fcf4: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x20fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x20fcf8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x20fcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x20fcfc: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FCFCu;
    {
        const bool branch_taken_0x20fcfc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x20FD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCFCu;
            // 0x20fd00: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcfc) {
            ctx->pc = 0x20FD20u;
            goto label_20fd20;
        }
    }
    ctx->pc = 0x20FD04u;
    // 0x20fd04: 0x0  nop
    ctx->pc = 0x20fd04u;
    // NOP
label_20fd08:
    // 0x20fd08: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x20fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x20fd0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20fd10: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x20fd10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x20fd14: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x20fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x20fd18: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20FD18u;
    {
        const bool branch_taken_0x20fd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FD18u;
            // 0x20fd1c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd18) {
            ctx->pc = 0x20FD08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fd08;
        }
    }
    ctx->pc = 0x20FD20u;
label_20fd20:
    // 0x20fd20: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x20fd20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x20fd24: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x20fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x20fd28: 0x26c50010  addiu       $a1, $s6, 0x10
    ctx->pc = 0x20fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x20fd2c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x20fd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20fd30: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x20fd30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20fd34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20fd34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20fd3c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x20fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20fd40: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20fd44: 0xfbab0000  sqc2        $vf11, 0x0($sp)
    ctx->pc = 0x20fd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x20fd48: 0x24940010  addiu       $s4, $a0, 0x10
    ctx->pc = 0x20fd48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20fd4c: 0xfbab0010  sqc2        $vf11, 0x10($sp)
    ctx->pc = 0x20fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x20fd50: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x20fd50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20fd54: 0xfbab0020  sqc2        $vf11, 0x20($sp)
    ctx->pc = 0x20fd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x20fd58: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x20fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20fd5c: 0xfbab0030  sqc2        $vf11, 0x30($sp)
    ctx->pc = 0x20fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x20fd60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20fd64: 0xfbab0040  sqc2        $vf11, 0x40($sp)
    ctx->pc = 0x20fd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x20fd68: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x20fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x20fd6c: 0x1bc000f6  blez        $fp, . + 4 + (0xF6 << 2)
    ctx->pc = 0x20FD6Cu;
    {
        const bool branch_taken_0x20fd6c = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x20FD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FD6Cu;
            // 0x20fd70: 0xfbab0050  sqc2        $vf11, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[11]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd6c) {
            ctx->pc = 0x210148u;
            goto label_210148;
        }
    }
    ctx->pc = 0x20FD74u;
    // 0x20fd74: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x20fd74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20fd78: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x20fd7c: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x20fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
    // 0x20fd80: 0x48375800  qmfc2.ni    $s7, $vf11
    ctx->pc = 0x20fd80u;
    SET_GPR_VEC(ctx, 23, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x20fd84: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x20fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_20fd88:
    // 0x20fd88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20fd8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd90: 0x2426818  mult        $t5, $s2, $v0
    ctx->pc = 0x20fd90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x20fd94: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x20fd94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20fd98: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x20fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20fd9c: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x20fd9cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x20fda0: 0x1a21018  mult        $v0, $t5, $v0
    ctx->pc = 0x20fda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20fda4: 0x548821  addu        $s1, $v0, $s4
    ctx->pc = 0x20fda4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_20fda8:
    // 0x20fda8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x20fda8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fdac: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x20fdacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20fdb0: 0x55900  sll         $t3, $a1, 4
    ctx->pc = 0x20fdb0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20fdb4: 0x56080  sll         $t4, $a1, 2
    ctx->pc = 0x20fdb4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20fdb8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20FDB8u;
    {
        const bool branch_taken_0x20fdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FDB8u;
            // 0x20fdbc: 0x24ae0001  addiu       $t6, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fdb8) {
            ctx->pc = 0x20FE94u;
            goto label_20fe94;
        }
    }
    ctx->pc = 0x20FDC0u;
    // 0x20fdc0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x20fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20fdc4: 0x1a51021  addu        $v0, $t5, $a1
    ctx->pc = 0x20fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x20fdc8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x20fdc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20fdcc: 0x3ac3021  addu        $a2, $sp, $t4
    ctx->pc = 0x20fdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
    // 0x20fdd0: 0x3ab2021  addu        $a0, $sp, $t3
    ctx->pc = 0x20fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 11)));
    // 0x20fdd4: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x20fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20fdd8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x20fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20fddc: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x20fddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20fde0: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x20fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x20fde4: 0x1623021  addu        $a2, $t3, $v0
    ctx->pc = 0x20fde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x20fde8: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x20fdec: 0x744021  addu        $t0, $v1, $s4
    ctx->pc = 0x20fdecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x20fdf0: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x20fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x20fdf4: 0x1e24821  addu        $t1, $t7, $v0
    ctx->pc = 0x20fdf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x20fdf8: 0x1833821  addu        $a3, $t4, $v1
    ctx->pc = 0x20fdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x20fdfc: 0x0  nop
    ctx->pc = 0x20fdfcu;
    // NOP
label_20fe00:
    // 0x20fe00: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x20fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20fe04: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x20fe04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x20fe08: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x20fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x20fe0c: 0x29440003  slti        $a0, $t2, 0x3
    ctx->pc = 0x20fe0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20fe10: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x20fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x20fe14: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x20fe14u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20fe18: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x20fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x20fe1c: 0xd8680030  lqc2        $vf8, 0x30($v1)
    ctx->pc = 0x20fe1cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x20fe20: 0xd8490030  lqc2        $vf9, 0x30($v0)
    ctx->pc = 0x20fe20u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x20fe24: 0x4be80103  vaddw.xyzw  $vf4, $vf0, $vf8w
    ctx->pc = 0x20fe24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20fe28: 0xd8a70010  lqc2        $vf7, 0x10($a1)
    ctx->pc = 0x20fe28u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x20fe2c: 0x4be90143  vaddw.xyzw  $vf5, $vf0, $vf9w
    ctx->pc = 0x20fe2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20fe30: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x20fe30u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x20fe34: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x20fe34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20fe38: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x20fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x20fe3c: 0xd9020010  lqc2        $vf2, 0x10($t0)
    ctx->pc = 0x20fe3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x20fe40: 0x4bea18ea  vmul.xyzw   $vf3, $vf3, $vf10
    ctx->pc = 0x20fe40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20fe44: 0xd9010020  lqc2        $vf1, 0x20($t0)
    ctx->pc = 0x20fe44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x20fe48: 0x4be710aa  vmul.xyzw   $vf2, $vf2, $vf7
    ctx->pc = 0x20fe48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20fe4c: 0x4be6086a  vmul.xyzw   $vf1, $vf1, $vf6
    ctx->pc = 0x20fe4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fe50: 0x4be3296a  vmul.xyzw   $vf5, $vf5, $vf3
    ctx->pc = 0x20fe50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20fe54: 0x4be9086a  vmul.xyzw   $vf1, $vf1, $vf9
    ctx->pc = 0x20fe54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fe58: 0x4be3212a  vmul.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x20fe58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20fe5c: 0x4be810aa  vmul.xyzw   $vf2, $vf2, $vf8
    ctx->pc = 0x20fe5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20fe60: 0x4be52128  vadd.xyzw   $vf4, $vf4, $vf5
    ctx->pc = 0x20fe60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20fe64: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x20fe64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20fe68: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x20fe68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20fe6c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20fe6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fe70: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20fe70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fe74: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20fe74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fe78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20fe78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fe7c: 0x0  nop
    ctx->pc = 0x20fe7cu;
    // NOP
    // 0x20fe80: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x20fe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x20fe84: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20fe84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20fe88: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x20fe88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x20fe8c: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x20FE8Cu;
    {
        const bool branch_taken_0x20fe8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE8Cu;
            // 0x20fe90: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe8c) {
            ctx->pc = 0x20FE00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fe00;
        }
    }
    ctx->pc = 0x20FE94u;
label_20fe94:
    // 0x20fe94: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x20fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x20fe98: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x20fe98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe9c: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x20fe9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20fea0: 0x8b1021  addu        $v0, $a0, $t3
    ctx->pc = 0x20fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x20fea4: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x20fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x20fea8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20feac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x20feacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x20feb0: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x20FEB0u;
    {
        const bool branch_taken_0x20feb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FEB0u;
            // 0x20feb4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20feb0) {
            ctx->pc = 0x20FDA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fda8;
        }
    }
    ctx->pc = 0x20FEB8u;
    // 0x20feb8: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x20feb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x20febc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x20febcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x20fec0: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x20fec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20fec4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x20fec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x20fec8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x20FEC8u;
    {
        const bool branch_taken_0x20fec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FEC8u;
            // 0x20fecc: 0x7fb700b0  sq          $s7, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fec8) {
            ctx->pc = 0x20FF98u;
            goto label_20ff98;
        }
    }
    ctx->pc = 0x20FED0u;
    // 0x20fed0: 0x25a40003  addiu       $a0, $t5, 0x3
    ctx->pc = 0x20fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x20fed4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x20fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20fed8: 0x8fa700f4  lw          $a3, 0xF4($sp)
    ctx->pc = 0x20fed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x20fedc: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x20fedcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20fee0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x20fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x20fee4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fee8: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x20fee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20feec: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x20feecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20fef0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x20fef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x20fef4: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x20fef4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20fef8: 0x1a51021  addu        $v0, $t5, $a1
    ctx->pc = 0x20fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x20fefc: 0x0  nop
    ctx->pc = 0x20fefcu;
    // NOP
label_20ff00:
    // 0x20ff00: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ff04: 0x4b3818  mult        $a3, $v0, $t3
    ctx->pc = 0x20ff04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x20ff08: 0x24a90001  addiu       $t1, $a1, 0x1
    ctx->pc = 0x20ff08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20ff0c: 0x1432821  addu        $a1, $t2, $v1
    ctx->pc = 0x20ff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x20ff10: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x20ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x20ff14: 0xf43021  addu        $a2, $a3, $s4
    ctx->pc = 0x20ff14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x20ff18: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20ff18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ff1c: 0x0  nop
    ctx->pc = 0x20ff1cu;
    // NOP
label_20ff20:
    // 0x20ff20: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20ff24: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20ff24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x20ff28: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x20ff28u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ff2c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x20ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x20ff30: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x20ff30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20ff34: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x20ff34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x20ff38: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x20ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20ff3c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x20ff3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20ff40: 0x4be4003f  vaddaw.xyzw $ACC, $vf0, $vf4w
    ctx->pc = 0x20ff40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x20ff44: 0x4be000cf  vmsubw.xyzw $vf3, $vf0, $vf0w
    ctx->pc = 0x20ff44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20ff48: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x20ff48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x20ff4c: 0x4be610aa  vmul.xyzw   $vf2, $vf2, $vf6
    ctx->pc = 0x20ff4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ff50: 0x4be5086a  vmul.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x20ff50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ff54: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x20ff54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20ff58: 0x4be4086a  vmul.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x20ff58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ff5c: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x20ff5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ff60: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x20ff60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ff64: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x20ff64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ff68: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x20ff68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20ff6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ff6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ff70: 0x0  nop
    ctx->pc = 0x20ff70u;
    // NOP
    // 0x20ff74: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x20ff74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x20ff78: 0x4e1ffe9  bgez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x20FF78u;
    {
        const bool branch_taken_0x20ff78 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x20FF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FF78u;
            // 0x20ff7c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff78) {
            ctx->pc = 0x20FF20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ff20;
        }
    }
    ctx->pc = 0x20FF80u;
    // 0x20ff80: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x20ff80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff84: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x20ff84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20ff88: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x20FF88u;
    {
        const bool branch_taken_0x20ff88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FF88u;
            // 0x20ff8c: 0x1a51021  addu        $v0, $t5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff88) {
            ctx->pc = 0x20FF00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ff00;
        }
    }
    ctx->pc = 0x20FF90u;
    // 0x20ff90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20FF90u;
    {
        const bool branch_taken_0x20ff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FF90u;
            // 0x20ff94: 0x24030090  addiu       $v1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff90) {
            ctx->pc = 0x20FFA8u;
            goto label_20ffa8;
        }
    }
    ctx->pc = 0x20FF98u;
label_20ff98:
    // 0x20ff98: 0xfbab0090  sqc2        $vf11, 0x90($sp)
    ctx->pc = 0x20ff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x20ff9c: 0xfbab00a0  sqc2        $vf11, 0xA0($sp)
    ctx->pc = 0x20ff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x20ffa0: 0xfbab00b0  sqc2        $vf11, 0xB0($sp)
    ctx->pc = 0x20ffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x20ffa4: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x20ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_20ffa8:
    // 0x20ffa8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x20ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ffac: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x20ffacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20ffb0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x20ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20ffb4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x20ffb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20ffb8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x20ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x20ffbc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x20ffbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20ffc0: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x20ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x20ffc4: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x20ffc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20ffc8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x20ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ffcc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x20ffccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x20ffd0: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x20ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x20ffd4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x20ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ffd8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x20ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x20ffdc: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x20ffdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x20ffe0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x20ffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x20ffe4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x20ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x20ffe8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x20ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ffec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x20ffecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x20fff0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x20fff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fff4: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x20fff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20fff8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x20fff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fffc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x20fffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x210000: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x210000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210004: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x210004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x210008: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x210008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21000c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x21000cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x210010: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x210010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210014: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x210014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x210018: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x210018u;
    SET_GPR_U32(ctx, 31, 0x210020u);
    ctx->pc = 0x21001Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210018u;
            // 0x21001c: 0xfbab0100  sqc2        $vf11, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[11]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210020u; }
        if (ctx->pc != 0x210020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210020u; }
        if (ctx->pc != 0x210020u) { return; }
    }
    ctx->pc = 0x210020u;
label_210020:
    // 0x210020: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x210020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x210024: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x210024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x210028: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x210028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21002c: 0x2433018  mult        $a2, $s2, $v1
    ctx->pc = 0x21002cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x210030: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x210030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x210034: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x210034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x210038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x210038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21003c: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x21003cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x210040: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x210040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x210044: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x210044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x210048: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x210048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x21004c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x21004cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x210050: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x210050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x210054: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x210054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x210058: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x210058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21005c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x21005cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x210060: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x210060u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x210064: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x210064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210068: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x210068u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x21006c: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x21006cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x210070: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x210070u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x210074: 0xdba300c0  lqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x210074u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x210078: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x210078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21007c: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x21007cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210080: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x210080u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x210084: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x210084u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210088: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x210088u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x21008c: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x21008cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x210090: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x210090u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210094: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x210094u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210098: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x210098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x21009c: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x21009cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2100a0: 0xf8830020  sqc2        $vf3, 0x20($a0)
    ctx->pc = 0x2100a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2100a4: 0xdbab0100  lqc2        $vf11, 0x100($sp)
    ctx->pc = 0x2100a4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2100a8:
    // 0x2100a8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2100a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2100ac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2100acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2100b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2100b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2100b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2100b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2100b8: 0x0  nop
    ctx->pc = 0x2100b8u;
    // NOP
    // 0x2100bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2100BCu;
    {
        const bool branch_taken_0x2100bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2100C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2100BCu;
            // 0x2100c0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100bc) {
            ctx->pc = 0x2100C8u;
            goto label_2100c8;
        }
    }
    ctx->pc = 0x2100C4u;
    // 0x2100c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2100c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2100c8:
    // 0x2100c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2100c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2100cc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2100ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2100d0: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x2100d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2100d4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2100D4u;
    {
        const bool branch_taken_0x2100d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2100D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2100D4u;
            // 0x2100d8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100d4) {
            ctx->pc = 0x2100A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2100a8;
        }
    }
    ctx->pc = 0x2100DCu;
    // 0x2100dc: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x2100dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2100e0: 0xfbab0100  sqc2        $vf11, 0x100($sp)
    ctx->pc = 0x2100e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x2100e4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2100e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2100e8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2100e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100ec: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x2100ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2100f0: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x2100f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2100f4: 0xc0a3304  jal         func_28CC10
    ctx->pc = 0x2100F4u;
    SET_GPR_U32(ctx, 31, 0x2100FCu);
    ctx->pc = 0x2100F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2100F4u;
            // 0x2100f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC10u;
    if (runtime->hasFunction(0x28CC10u)) {
        auto targetFn = runtime->lookupFunction(0x28CC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100FCu; }
        if (ctx->pc != 0x2100FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC10_0x28cc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100FCu; }
        if (ctx->pc != 0x2100FCu) { return; }
    }
    ctx->pc = 0x2100FCu;
label_2100fc:
    // 0x2100fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2100fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210100: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x210104: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x210104u;
    SET_GPR_U32(ctx, 31, 0x21010Cu);
    ctx->pc = 0x210108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210104u;
            // 0x210108: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21010Cu; }
        if (ctx->pc != 0x21010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21010Cu; }
        if (ctx->pc != 0x21010Cu) { return; }
    }
    ctx->pc = 0x21010Cu;
label_21010c:
    // 0x21010c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x21010cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x210110: 0x25e282a  slt         $a1, $s2, $fp
    ctx->pc = 0x210110u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x210114: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x210114u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x210118: 0x7ba40090  lq          $a0, 0x90($sp)
    ctx->pc = 0x210118u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21011c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x210120: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x210120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x210124: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x210124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x210128: 0xdbab0100  lqc2        $vf11, 0x100($sp)
    ctx->pc = 0x210128u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21012c: 0x7a220060  lq          $v0, 0x60($s1)
    ctx->pc = 0x21012cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x210130: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x210130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x210134: 0x7a230070  lq          $v1, 0x70($s1)
    ctx->pc = 0x210134u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x210138: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x210138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x21013c: 0x7a220080  lq          $v0, 0x80($s1)
    ctx->pc = 0x21013cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x210140: 0x14a0ff11  bnez        $a1, . + 4 + (-0xEF << 2)
    ctx->pc = 0x210140u;
    {
        const bool branch_taken_0x210140 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x210144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210140u;
            // 0x210144: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210140) {
            ctx->pc = 0x20FD88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fd88;
        }
    }
    ctx->pc = 0x210148u;
label_210148:
    // 0x210148: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x210148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21014c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x21014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x210150: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x210150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x210154: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x210154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x210158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21015c: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x21015cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x210160: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x210160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x210164: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x210164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x210168: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x210168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x21016c: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x21016cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x210170: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x210170u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x210174: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x210174u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x210178: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x210178u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x21017c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x21017cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x210180: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x210180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x210184: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x210184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x210188: 0x3e00008  jr          $ra
    ctx->pc = 0x210188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210188u;
            // 0x21018c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x210190u;
    // 0x210190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210194: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x210194u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210198: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x210198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21019c: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x21019cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2101a0: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x2101a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x2101a4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2101a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101a8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2101a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2101ac: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x2101acu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101b0: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x2101b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2101b4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2101b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2101b8: 0x3508fff0  ori         $t0, $t0, 0xFFF0
    ctx->pc = 0x2101b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65520);
    // 0x2101bc: 0x240c001a  addiu       $t4, $zero, 0x1A
    ctx->pc = 0x2101bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2101c0: 0xa5d80002  sh          $t8, 0x2($t6)
    ctx->pc = 0x2101c0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 24));
    // 0x2101c4: 0x25c20010  addiu       $v0, $t6, 0x10
    ctx->pc = 0x2101c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x2101c8: 0xa1cc0000  sb          $t4, 0x0($t6)
    ctx->pc = 0x2101c8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x2101cc: 0x3303ffff  andi        $v1, $t8, 0xFFFF
    ctx->pc = 0x2101ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x2101d0: 0xe5cc0008  swc1        $f12, 0x8($t6)
    ctx->pc = 0x2101d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2101d4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2101d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101d8: 0x6b4818  mult        $t1, $v1, $t3
    ctx->pc = 0x2101d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2101dc: 0x8b6818  mult        $t5, $a0, $t3
    ctx->pc = 0x2101dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2101e0: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x2101e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2101e4: 0x675018  mult        $t2, $v1, $a3
    ctx->pc = 0x2101e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2101e8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2101e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2101ec: 0x873818  mult        $a3, $a0, $a3
    ctx->pc = 0x2101ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2101f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2101f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2101f4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2101f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2101f8: 0xe5cd000c  swc1        $f13, 0xC($t6)
    ctx->pc = 0x2101f8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x2101fc: 0x1a22021  addu        $a0, $t5, $v0
    ctx->pc = 0x2101fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x210200: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x210200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x210204: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x210204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x210208: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x210208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x21020c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210210: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x210210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x210214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210218: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x210218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x21021c: 0x27030001  addiu       $v1, $t8, 0x1
    ctx->pc = 0x21021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x210220: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x210220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x210224: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x210224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x210228: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x210228u;
    {
        const bool branch_taken_0x210228 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x21022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210228u;
            // 0x21022c: 0xadc20004  sw          $v0, 0x4($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210228) {
            ctx->pc = 0x210248u;
            goto label_210248;
        }
    }
    ctx->pc = 0x210230u;
label_210230:
    // 0x210230: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x210230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210234: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x210234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x210238: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x210238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x21023c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21023cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x210240: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x210240u;
    {
        const bool branch_taken_0x210240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210240u;
            // 0x210244: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210240) {
            ctx->pc = 0x210230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210230;
        }
    }
    ctx->pc = 0x210248u;
label_210248:
    // 0x210248: 0x95c20002  lhu         $v0, 0x2($t6)
    ctx->pc = 0x210248u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x21024c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x21024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x210250: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x210250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x210254: 0x25c60010  addiu       $a2, $t6, 0x10
    ctx->pc = 0x210254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x210258: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x210258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21025c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x21025cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x210260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210264: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x210264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210268: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x210268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x21026c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x210270: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x210270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x210274: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x210274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210278: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x210278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x21027c: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x21027cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
    // 0x210280: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x210280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x210284: 0x1b000045  blez        $t8, . + 4 + (0x45 << 2)
    ctx->pc = 0x210284u;
    {
        const bool branch_taken_0x210284 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x210288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210284u;
            // 0x210288: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210284) {
            ctx->pc = 0x21039Cu;
            goto label_21039c;
        }
    }
    ctx->pc = 0x21028Cu;
    // 0x21028c: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x21028cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x210290: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x210290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x210294: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x210294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210298: 0x2709ffff  addiu       $t1, $t8, -0x1
    ctx->pc = 0x210298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x21029c: 0x0  nop
    ctx->pc = 0x21029cu;
    // NOP
label_2102a0:
    // 0x2102a0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2102a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2102a4: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x2102a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2102a8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2102a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2102ac: 0x3231821  addu        $v1, $t9, $v1
    ctx->pc = 0x2102acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x2102b0: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x2102b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2102b4: 0x3221021  addu        $v0, $t9, $v0
    ctx->pc = 0x2102b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x2102b8: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x2102b8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2102bc: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2102bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2102c0: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x2102c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2102c4: 0xd8630030  lqc2        $vf3, 0x30($v1)
    ctx->pc = 0x2102c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2102c8: 0x4be6306a  vmul.xyzw   $vf1, $vf6, $vf6
    ctx->pc = 0x2102c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2102cc: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x2102ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2102d0: 0x4be5086a  vmul.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x2102d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2102d4: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x2102d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2102d8: 0x4be518e8  vadd.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x2102d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2102dc: 0x4a221b3c  vmove.w     $vf2, $vf3
    ctx->pc = 0x2102dcu;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x2102e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2102e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2102e4: 0x4a2210c2  vaddz.w     $vf3, $vf2, $vf2z
    ctx->pc = 0x2102e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2102e8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x2102e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2102ec: 0x4b030843  vaddw.x     $vf1, $vf1, $vf3w
    ctx->pc = 0x2102ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2102f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2102f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2102f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2102f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2102f8: 0x0  nop
    ctx->pc = 0x2102f8u;
    // NOP
    // 0x2102fc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2102fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x210300: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x210300u;
    {
        const bool branch_taken_0x210300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x210304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210300u;
            // 0x210304: 0x460e00c0  add.s       $f3, $f0, $f14 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210300) {
            ctx->pc = 0x210340u;
            goto label_210340;
        }
    }
    ctx->pc = 0x210308u;
    // 0x210308: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x210308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21030c: 0x4be5003f  vaddaw.xyzw $ACC, $vf0, $vf5w
    ctx->pc = 0x21030cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x210310: 0x4be0010f  vmsubw.xyzw $vf4, $vf0, $vf0w
    ctx->pc = 0x210310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x210314: 0xd8a30030  lqc2        $vf3, 0x30($a1)
    ctx->pc = 0x210314u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x210318: 0xd8a10040  lqc2        $vf1, 0x40($a1)
    ctx->pc = 0x210318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x21031c: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x21031cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210320: 0x4be1306a  vmul.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x210320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210324: 0x4be2212a  vmul.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x210324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x210328: 0x4be5086a  vmul.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x210328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21032c: 0x4be4086c  vsub.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x21032cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210330: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x210330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210334: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x210334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210338: 0x482d1000  qmfc2.ni    $t5, $vf2
    ctx->pc = 0x210338u;
    SET_GPR_VEC(ctx, 13, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21033c: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x21033cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_210340:
    // 0x210340: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x210340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x210344: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x210344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x210348: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x210348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x21034c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21034cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210350: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x210350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x210354: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x210354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210358: 0x0  nop
    ctx->pc = 0x210358u;
    // NOP
    // 0x21035c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21035Cu;
    {
        const bool branch_taken_0x21035c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21035Cu;
            // 0x210360: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21035c) {
            ctx->pc = 0x210368u;
            goto label_210368;
        }
    }
    ctx->pc = 0x210364u;
    // 0x210364: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x210364u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_210368:
    // 0x210368: 0x0  nop
    ctx->pc = 0x210368u;
    // NOP
    // 0x21036c: 0x0  nop
    ctx->pc = 0x21036cu;
    // NOP
    // 0x210370: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x210370u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
    // 0x210374: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x210374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x210378: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x210378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21037c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x21037cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x210380: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x210380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x210384: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x210384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x210388: 0x118102a  slt         $v0, $t0, $t8
    ctx->pc = 0x210388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x21038c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x21038cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x210390: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x210390u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x210394: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x210394u;
    {
        const bool branch_taken_0x210394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210394u;
            // 0x210398: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210394) {
            ctx->pc = 0x2102A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2102a0;
        }
    }
    ctx->pc = 0x21039Cu;
label_21039c:
    // 0x21039c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2103a0: 0x8dc30004  lw          $v1, 0x4($t6)
    ctx->pc = 0x2103a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2103a4: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x2103a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2103a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2103a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2103ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2103acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2103b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2103b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2103b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2103B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2103B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2103B4u;
            // 0x2103b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2103BCu;
    // 0x2103bc: 0x0  nop
    ctx->pc = 0x2103bcu;
    // NOP
    // 0x2103c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2103c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2103c4: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x2103c4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103c8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2103c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2103cc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2103ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2103d0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2103d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2103d4: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2103d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2103d8: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2103d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x2103dc: 0x240703c0  addiu       $a3, $zero, 0x3C0
    ctx->pc = 0x2103dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x2103e0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2103e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2103e4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2103e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2103e8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2103e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2103ec: 0x3529fff0  ori         $t1, $t1, 0xFFF0
    ctx->pc = 0x2103ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65520);
    // 0x2103f0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2103f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2103f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2103f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2103f8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2103f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2103fc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2103fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x210400: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x210400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x210404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x210404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x210408: 0x8cd50000  lw          $s5, 0x0($a2)
    ctx->pc = 0x210408u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21040c: 0x8f170000  lw          $s7, 0x0($t8)
    ctx->pc = 0x21040cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x210410: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x210410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x210414: 0x8f19001c  lw          $t9, 0x1C($t8)
    ctx->pc = 0x210414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x210418: 0x26a20020  addiu       $v0, $s5, 0x20
    ctx->pc = 0x210418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x21041c: 0xc7000004  lwc1        $f0, 0x4($t8)
    ctx->pc = 0x21041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210420: 0x26f00001  addiu       $s0, $s7, 0x1
    ctx->pc = 0x210420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x210424: 0xc7010008  lwc1        $f1, 0x8($t8)
    ctx->pc = 0x210424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210428: 0x8f1e0024  lw          $fp, 0x24($t8)
    ctx->pc = 0x210428u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x21042c: 0x8f0f002c  lw          $t7, 0x2C($t8)
    ctx->pc = 0x21042cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 44)));
    // 0x210430: 0xa6b70004  sh          $s7, 0x4($s5)
    ctx->pc = 0x210430u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 23));
    // 0x210434: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x210434u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x210438: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x210438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x21043c: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x21043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x210440: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x210440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210444: 0x654018  mult        $t0, $v1, $a1
    ctx->pc = 0x210444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x210448: 0x858818  mult        $s1, $a0, $a1
    ctx->pc = 0x210448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x21044c: 0x36140  sll         $t4, $v1, 5
    ctx->pc = 0x21044cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x210450: 0x666818  mult        $t5, $v1, $a2
    ctx->pc = 0x210450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x210454: 0x258b0020  addiu       $t3, $t4, 0x20
    ctx->pc = 0x210454u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x210458: 0x675018  mult        $t2, $v1, $a3
    ctx->pc = 0x210458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x21045c: 0x37080  sll         $t6, $v1, 2
    ctx->pc = 0x21045cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x210460: 0x863018  mult        $a2, $a0, $a2
    ctx->pc = 0x210460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x210464: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x210464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x210468: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x210468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21046c: 0x873818  mult        $a3, $a0, $a3
    ctx->pc = 0x21046cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x210470: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x210470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x210474: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x210474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x210478: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x210478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x21047c: 0x24880020  addiu       $t0, $a0, 0x20
    ctx->pc = 0x21047cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210480: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x210480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x210484: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x210484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x210488: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x210488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x21048c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x21048cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x210490: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x210490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x210494: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x210494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x210498: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x210498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x21049c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x21049cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2104a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2104a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2104a4: 0xe6a1001c  swc1        $f1, 0x1C($s5)
    ctx->pc = 0x2104a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x2104a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2104a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2104ac: 0xaeaf0008  sw          $t7, 0x8($s5)
    ctx->pc = 0x2104acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
    // 0x2104b0: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x2104b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2104b4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2104b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2104b8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2104b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2104bc: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2104BCu;
    {
        const bool branch_taken_0x2104bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2104C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2104BCu;
            // 0x2104c0: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104bc) {
            ctx->pc = 0x2104E0u;
            goto label_2104e0;
        }
    }
    ctx->pc = 0x2104C4u;
    // 0x2104c4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2104c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2104c8:
    // 0x2104c8: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x2104c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2104cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2104ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2104d0: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x2104d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x2104d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2104d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2104d8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2104D8u;
    {
        const bool branch_taken_0x2104d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2104DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2104D8u;
            // 0x2104dc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104d8) {
            ctx->pc = 0x2104C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2104c8;
        }
    }
    ctx->pc = 0x2104E0u;
label_2104e0:
    // 0x2104e0: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x2104e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2104e4: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x2104e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2104e8: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2104e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2104ec: 0x240603c0  addiu       $a2, $zero, 0x3C0
    ctx->pc = 0x2104ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x2104f0: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x2104f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2104f4: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x2104f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2104f8: 0x26a20020  addiu       $v0, $s5, 0x20
    ctx->pc = 0x2104f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2104fc: 0x34140  sll         $t0, $v1, 5
    ctx->pc = 0x2104fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x210500: 0x663018  mult        $a2, $v1, $a2
    ctx->pc = 0x210500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x210504: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x210504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210508: 0x25070020  addiu       $a3, $t0, 0x20
    ctx->pc = 0x210508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x21050c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21050cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x210510: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x210510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x210514: 0x270b000c  addiu       $t3, $t8, 0xC
    ctx->pc = 0x210514u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 12));
    // 0x210518: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x210518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21051c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x210520: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x210520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x210524: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x210524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x210528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21052c: 0x1ae00026  blez        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x21052Cu;
    {
        const bool branch_taken_0x21052c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x210530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21052Cu;
            // 0x210530: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21052c) {
            ctx->pc = 0x2105C8u;
            goto label_2105c8;
        }
    }
    ctx->pc = 0x210534u;
    // 0x210534: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x210534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_210538:
    // 0x210538: 0x6bc40007  ldl         $a0, 0x7($fp)
    ctx->pc = 0x210538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21053c: 0x6fc40000  ldr         $a0, 0x0($fp)
    ctx->pc = 0x21053cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x210540: 0x6bc5000f  ldl         $a1, 0xF($fp)
    ctx->pc = 0x210540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x210544: 0x6fc50008  ldr         $a1, 0x8($fp)
    ctx->pc = 0x210544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x210548: 0x6bc60017  ldl         $a2, 0x17($fp)
    ctx->pc = 0x210548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21054c: 0x6fc60010  ldr         $a2, 0x10($fp)
    ctx->pc = 0x21054cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x210550: 0x6bc7001f  ldl         $a3, 0x1F($fp)
    ctx->pc = 0x210550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x210554: 0x6fc70018  ldr         $a3, 0x18($fp)
    ctx->pc = 0x210554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x210558: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x210558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21055c: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x21055cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x210560: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x210560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x210564: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x210564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x210568: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x210568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21056c: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x21056cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x210570: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x210570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x210574: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x210574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x210578: 0x6bc40027  ldl         $a0, 0x27($fp)
    ctx->pc = 0x210578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21057c: 0x6fc40020  ldr         $a0, 0x20($fp)
    ctx->pc = 0x21057cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x210580: 0x6bc5002f  ldl         $a1, 0x2F($fp)
    ctx->pc = 0x210580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x210584: 0x6fc50028  ldr         $a1, 0x28($fp)
    ctx->pc = 0x210584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x210588: 0x6bc60037  ldl         $a2, 0x37($fp)
    ctx->pc = 0x210588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21058c: 0x6fc60030  ldr         $a2, 0x30($fp)
    ctx->pc = 0x21058cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x210590: 0x6bc7003f  ldl         $a3, 0x3F($fp)
    ctx->pc = 0x210590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x210594: 0x6fc70038  ldr         $a3, 0x38($fp)
    ctx->pc = 0x210594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x210598: 0xb0440027  sdl         $a0, 0x27($v0)
    ctx->pc = 0x210598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21059c: 0xb4440020  sdr         $a0, 0x20($v0)
    ctx->pc = 0x21059cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2105a0: 0xb045002f  sdl         $a1, 0x2F($v0)
    ctx->pc = 0x2105a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2105a4: 0xb4450028  sdr         $a1, 0x28($v0)
    ctx->pc = 0x2105a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2105a8: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x2105a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2105ac: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x2105acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2105b0: 0xb047003f  sdl         $a3, 0x3F($v0)
    ctx->pc = 0x2105b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2105b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2105b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2105b8: 0xb4470038  sdr         $a3, 0x38($v0)
    ctx->pc = 0x2105b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2105bc: 0x27de0040  addiu       $fp, $fp, 0x40
    ctx->pc = 0x2105bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x2105c0: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2105C0u;
    {
        const bool branch_taken_0x2105c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2105C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2105C0u;
            // 0x2105c4: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2105c0) {
            ctx->pc = 0x210538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210538;
        }
    }
    ctx->pc = 0x2105C8u;
label_2105c8:
    // 0x2105c8: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x2105c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2105cc: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2105ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2105d0: 0xc7000028  lwc1        $f0, 0x28($t8)
    ctx->pc = 0x2105d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2105d4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x2105d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2105d8: 0x482018  mult        $a0, $v0, $t0
    ctx->pc = 0x2105d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2105dc: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2105dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2105e0: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x2105e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x2105e4: 0x26940  sll         $t5, $v0, 5
    ctx->pc = 0x2105e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2105e8: 0x240c03c0  addiu       $t4, $zero, 0x3C0
    ctx->pc = 0x2105e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x2105ec: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2105ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105f0: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x2105f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2105f4: 0x25a60020  addiu       $a2, $t5, 0x20
    ctx->pc = 0x2105f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x2105f8: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x2105f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2105fc: 0x2ec6018  mult        $t4, $s7, $t4
    ctx->pc = 0x2105fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x210600: 0x8f04002c  lw          $a0, 0x2C($t8)
    ctx->pc = 0x210600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 44)));
    // 0x210604: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x210604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x210608: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x210608u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21060c: 0xaea40008  sw          $a0, 0x8($s5)
    ctx->pc = 0x21060cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
    // 0x210610: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x210610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x210614: 0x2e81018  mult        $v0, $s7, $t0
    ctx->pc = 0x210614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x210618: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x210618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x21061c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210620: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x210620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x210624: 0x8f040000  lw          $a0, 0x0($t8)
    ctx->pc = 0x210624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x210628: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x210628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21062c: 0x8f0a0020  lw          $t2, 0x20($t8)
    ctx->pc = 0x21062cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x210630: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x210630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x210634: 0x8f060024  lw          $a2, 0x24($t8)
    ctx->pc = 0x210634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x210638: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x210638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x21063c: 0xc0841a2  jal         func_210688
    ctx->pc = 0x21063Cu;
    SET_GPR_U32(ctx, 31, 0x210644u);
    ctx->pc = 0x210640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21063Cu;
            // 0x210640: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210688u;
    if (runtime->hasFunction(0x210688u)) {
        auto targetFn = runtime->lookupFunction(0x210688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210644u; }
        if (ctx->pc != 0x210644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210688_0x210688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210644u; }
        if (ctx->pc != 0x210644u) { return; }
    }
    ctx->pc = 0x210644u;
label_210644:
    // 0x210644: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x210644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210648: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x210648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x21064c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x210650: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x210650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x210654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210658: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x210658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21065c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x21065cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x210660: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x210660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x210664: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x210664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210668: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x210668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21066c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x21066cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210670: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x210670u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210674: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x210674u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x210678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21067c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21067cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x210680: 0x3e00008  jr          $ra
    ctx->pc = 0x210680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210680u;
            // 0x210684: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x210688u;
}
