#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214C60
// Address: 0x214c60 - 0x2153a8
void sub_00214C60_0x214c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214C60_0x214c60");
#endif

    switch (ctx->pc) {
        case 0x214e18u: goto label_214e18;
        case 0x214e28u: goto label_214e28;
        case 0x214e70u: goto label_214e70;
        case 0x214e88u: goto label_214e88;
        case 0x214e98u: goto label_214e98;
        case 0x214edcu: goto label_214edc;
        case 0x214f08u: goto label_214f08;
        case 0x214f10u: goto label_214f10;
        case 0x214f38u: goto label_214f38;
        case 0x214f50u: goto label_214f50;
        case 0x214f64u: goto label_214f64;
        case 0x214f78u: goto label_214f78;
        case 0x214f80u: goto label_214f80;
        case 0x214fa4u: goto label_214fa4;
        case 0x214fbcu: goto label_214fbc;
        case 0x214fd0u: goto label_214fd0;
        case 0x215018u: goto label_215018;
        default: break;
    }

    ctx->pc = 0x214c60u;

    // 0x214c60: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x214c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x214c64: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x214c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x214c68: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x214c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x214c6c: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x214c6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x214c70: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x214c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x214c74: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x214c74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c78: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x214c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x214c7c: 0x240e0090  addiu       $t6, $zero, 0x90
    ctx->pc = 0x214c7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x214c80: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x214c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x214c84: 0x241803c0  addiu       $t8, $zero, 0x3C0
    ctx->pc = 0x214c84u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x214c88: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x214c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x214c8c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x214c8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214c90: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x214c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x214c94: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x214c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x214c98: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x214c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x214c9c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x214c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x214ca0: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x214ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x214ca4: 0x94fe0004  lhu         $fp, 0x4($a3)
    ctx->pc = 0x214ca4u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x214ca8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x214ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x214cac: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x214cacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x214cb0: 0x8faf00ac  lw          $t7, 0xAC($sp)
    ctx->pc = 0x214cb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x214cb4: 0x6c6818  mult        $t5, $v1, $t4
    ctx->pc = 0x214cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x214cb8: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x214cb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cbc: 0x1200013  mtlo        $t1
    ctx->pc = 0x214cbcu;
    ctx->lo = GPR_U64(ctx, 9);
    // 0x214cc0: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x214cc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cc4: 0x706e1000  madd        $v0, $v1, $t6
    ctx->pc = 0x214cc4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x214cc8: 0x240903c0  addiu       $t1, $zero, 0x3C0
    ctx->pc = 0x214cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x214ccc: 0x3b940  sll         $s7, $v1, 5
    ctx->pc = 0x214cccu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x214cd0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x214cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cd4: 0x699018  mult        $s2, $v1, $t1
    ctx->pc = 0x214cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x214cd8: 0x16cb018  mult        $s6, $t3, $t4
    ctx->pc = 0x214cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x214cdc: 0x26f50020  addiu       $s5, $s7, 0x20
    ctx->pc = 0x214cdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x214ce0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x214ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ce4: 0x1e00013  mtlo        $t7
    ctx->pc = 0x214ce4u;
    ctx->lo = GPR_U64(ctx, 15);
    // 0x214ce8: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x214ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x214cec: 0x716e4800  madd        $t1, $t3, $t6
    ctx->pc = 0x214cecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 14); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x214cf0: 0x240d03c0  addiu       $t5, $zero, 0x3C0
    ctx->pc = 0x214cf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x214cf4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x214cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x214cf8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x214cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cfc: 0x16da018  mult        $s4, $t3, $t5
    ctx->pc = 0x214cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x214d00: 0x14cc818  mult        $t9, $t2, $t4
    ctx->pc = 0x214d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x214d04: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x214d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x214d08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x214d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x214d0c: 0x1e00013  mtlo        $t7
    ctx->pc = 0x214d0cu;
    ctx->lo = GPR_U64(ctx, 15);
    // 0x214d10: 0x8fb500ac  lw          $s5, 0xAC($sp)
    ctx->pc = 0x214d10u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x214d14: 0x714e6800  madd        $t5, $t2, $t6
    ctx->pc = 0x214d14u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x214d18: 0x1364821  addu        $t1, $t1, $s6
    ctx->pc = 0x214d18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 22)));
    // 0x214d1c: 0x1344821  addu        $t1, $t1, $s4
    ctx->pc = 0x214d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x214d20: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x214d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x214d24: 0x1587818  mult        $t7, $t2, $t8
    ctx->pc = 0x214d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x214d28: 0x241403c0  addiu       $s4, $zero, 0x3C0
    ctx->pc = 0x214d28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x214d2c: 0x20cc018  mult        $t8, $s0, $t4
    ctx->pc = 0x214d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x214d30: 0xb5940  sll         $t3, $t3, 5
    ctx->pc = 0x214d30u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x214d34: 0x2a00013  mtlo        $s5
    ctx->pc = 0x214d34u;
    ctx->lo = GPR_U64(ctx, 21);
    // 0x214d38: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x214d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214d3c: 0x720e9000  madd        $s2, $s0, $t6
    ctx->pc = 0x214d3cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x214d40: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x214d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214d44: 0x1b96821  addu        $t5, $t5, $t9
    ctx->pc = 0x214d44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
    // 0x214d48: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x214d48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x214d4c: 0x2148018  mult        $s0, $s0, $s4
    ctx->pc = 0x214d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x214d50: 0x22c6018  mult        $t4, $s1, $t4
    ctx->pc = 0x214d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x214d54: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x214d54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d58: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x214d58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d5c: 0x2800013  mtlo        $s4
    ctx->pc = 0x214d5cu;
    ctx->lo = GPR_U64(ctx, 20);
    // 0x214d60: 0x2589021  addu        $s2, $s2, $t8
    ctx->pc = 0x214d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 24)));
    // 0x214d64: 0x722e8800  madd        $s1, $s1, $t6
    ctx->pc = 0x214d64u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 14); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x214d68: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x214d68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x214d6c: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x214d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x214d70: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x214d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x214d74: 0x2800013  mtlo        $s4
    ctx->pc = 0x214d74u;
    ctx->lo = GPR_U64(ctx, 20);
    // 0x214d78: 0x1aa6821  addu        $t5, $t5, $t2
    ctx->pc = 0x214d78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x214d7c: 0x726e9800  madd        $s3, $s3, $t6
    ctx->pc = 0x214d7cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x214d80: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x214d80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x214d84: 0x437021  addu        $t6, $v0, $v1
    ctx->pc = 0x214d84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214d88: 0x22c8821  addu        $s1, $s1, $t4
    ctx->pc = 0x214d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
    // 0x214d8c: 0x25620020  addiu       $v0, $t3, 0x20
    ctx->pc = 0x214d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x214d90: 0x27b80094  addiu       $t8, $sp, 0x94
    ctx->pc = 0x214d90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x214d94: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x214d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x214d98: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x214d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x214d9c: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x214d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x214da0: 0x25c20004  addiu       $v0, $t6, 0x4
    ctx->pc = 0x214da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x214da4: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x214da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x214da8: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x214da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x214dac: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x214dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x214db0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x214db0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214db4: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x214db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x214db8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x214db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x214dbc: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x214dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
    // 0x214dc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x214dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214dc4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x214dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x214dc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x214dc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214dcc: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x214dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x214dd0: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x214dd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x214dd4: 0xafb500c4  sw          $s5, 0xC4($sp)
    ctx->pc = 0x214dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 21));
    // 0x214dd8: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x214dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x214ddc: 0xafb800c8  sw          $t8, 0xC8($sp)
    ctx->pc = 0x214ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 24));
    // 0x214de0: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x214de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x214de4: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x214de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x214de8: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x214de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x214dec: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x214decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x214df0: 0xafbe0004  sw          $fp, 0x4($sp)
    ctx->pc = 0x214df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
    // 0x214df4: 0xafa700d4  sw          $a3, 0xD4($sp)
    ctx->pc = 0x214df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 7));
    // 0x214df8: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x214df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x214dfc: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x214dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214e00: 0xafb30014  sw          $s3, 0x14($sp)
    ctx->pc = 0x214e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
    // 0x214e04: 0x13c00016  beqz        $fp, . + 4 + (0x16 << 2)
    ctx->pc = 0x214E04u;
    {
        const bool branch_taken_0x214e04 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214E04u;
            // 0x214e08: 0xafb6001c  sw          $s6, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e04) {
            ctx->pc = 0x214E60u;
            goto label_214e60;
        }
    }
    ctx->pc = 0x214E0Cu;
    // 0x214e0c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x214e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e10: 0x25c70010  addiu       $a3, $t6, 0x10
    ctx->pc = 0x214e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x214e14: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x214e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_214e18:
    // 0x214e18: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x214e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x214e1c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x214e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x214e20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x214e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214e24: 0x0  nop
    ctx->pc = 0x214e24u;
    // NOP
label_214e28:
    // 0x214e28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x214e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214e2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x214e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x214e30: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x214e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214e34: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x214e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x214e38: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x214e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214e3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x214e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x214e40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x214e40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x214e44: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x214e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x214e48: 0x461fff7  bgez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x214E48u;
    {
        const bool branch_taken_0x214e48 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x214E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214E48u;
            // 0x214e4c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e48) {
            ctx->pc = 0x214E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214e28;
        }
    }
    ctx->pc = 0x214E50u;
    // 0x214e50: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x214e50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e54: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x214e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x214e58: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x214E58u;
    {
        const bool branch_taken_0x214e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214E58u;
            // 0x214e5c: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e58) {
            ctx->pc = 0x214E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214e18;
        }
    }
    ctx->pc = 0x214E60u;
label_214e60:
    // 0x214e60: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x214e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x214e64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x214e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e68: 0xc0844f4  jal         func_2113D0
    ctx->pc = 0x214E68u;
    SET_GPR_U32(ctx, 31, 0x214E70u);
    ctx->pc = 0x214E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214E68u;
            // 0x214e6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2113D0u;
    if (runtime->hasFunction(0x2113D0u)) {
        auto targetFn = runtime->lookupFunction(0x2113D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E70u; }
        if (ctx->pc != 0x214E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002113D0_0x2113d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E70u; }
        if (ctx->pc != 0x214E70u) { return; }
    }
    ctx->pc = 0x214E70u;
label_214e70:
    // 0x214e70: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x214e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x214e74: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x214E74u;
    {
        const bool branch_taken_0x214e74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x214E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214E74u;
            // 0x214e78: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e74) {
            ctx->pc = 0x214F08u;
            goto label_214f08;
        }
    }
    ctx->pc = 0x214E7Cu;
    // 0x214e7c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x214e7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214e80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x214e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e84: 0x0  nop
    ctx->pc = 0x214e84u;
    // NOP
label_214e88:
    // 0x214e88: 0x119980  sll         $s3, $s1, 6
    ctx->pc = 0x214e88u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x214e8c: 0x26340001  addiu       $s4, $s1, 0x1
    ctx->pc = 0x214e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x214e90: 0x119140  sll         $s2, $s1, 5
    ctx->pc = 0x214e90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x214e94: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x214e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_214e98:
    // 0x214e98: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x214e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x214e9c: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x214e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x214ea0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x214ea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214ea4: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x214ea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x214ea8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x214ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x214eac: 0x14550006  bne         $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x214EACu;
    {
        const bool branch_taken_0x214eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x214EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214EACu;
            // 0x214eb0: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214eac) {
            ctx->pc = 0x214EC8u;
            goto label_214ec8;
        }
    }
    ctx->pc = 0x214EB4u;
    // 0x214eb4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x214eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x214eb8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x214eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x214ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x214ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214ec0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x214EC0u;
    {
        const bool branch_taken_0x214ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214EC0u;
            // 0x214ec4: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ec0) {
            ctx->pc = 0x214EDCu;
            goto label_214edc;
        }
    }
    ctx->pc = 0x214EC8u;
label_214ec8:
    // 0x214ec8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214EC8u;
    {
        const bool branch_taken_0x214ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214EC8u;
            // 0x214ecc: 0x8fa7002c  lw          $a3, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ec8) {
            ctx->pc = 0x214EDCu;
            goto label_214edc;
        }
    }
    ctx->pc = 0x214ED0u;
    // 0x214ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ed4: 0xc0847c2  jal         func_211F08
    ctx->pc = 0x214ED4u;
    SET_GPR_U32(ctx, 31, 0x214EDCu);
    ctx->pc = 0x214ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214ED4u;
            // 0x214ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211F08u;
    if (runtime->hasFunction(0x211F08u)) {
        auto targetFn = runtime->lookupFunction(0x211F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EDCu; }
        if (ctx->pc != 0x214EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211F08_0x211f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EDCu; }
        if (ctx->pc != 0x214EDCu) { return; }
    }
    ctx->pc = 0x214EDCu;
label_214edc:
    // 0x214edc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x214edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x214ee0: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x214ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x214ee4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x214EE4u;
    {
        const bool branch_taken_0x214ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214EE4u;
            // 0x214ee8: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ee4) {
            ctx->pc = 0x214E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214e98;
        }
    }
    ctx->pc = 0x214EECu;
    // 0x214eec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x214eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x214ef0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x214ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ef4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x214ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x214ef8: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x214EF8u;
    {
        const bool branch_taken_0x214ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214ef8) {
            ctx->pc = 0x214EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214EF8u;
            // 0x214efc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214e88;
        }
    }
    ctx->pc = 0x214F00u;
    // 0x214f00: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x214f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214f04: 0x0  nop
    ctx->pc = 0x214f04u;
    // NOP
label_214f08:
    // 0x214f08: 0xc0845ba  jal         func_2116E8
    ctx->pc = 0x214F08u;
    SET_GPR_U32(ctx, 31, 0x214F10u);
    ctx->pc = 0x214F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F08u;
            // 0x214f0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2116E8u;
    if (runtime->hasFunction(0x2116E8u)) {
        auto targetFn = runtime->lookupFunction(0x2116E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F10u; }
        if (ctx->pc != 0x214F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002116E8_0x2116e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F10u; }
        if (ctx->pc != 0x214F10u) { return; }
    }
    ctx->pc = 0x214F10u;
label_214f10:
    // 0x214f10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x214f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214f14: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x214f14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x214f18: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x214f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x214f1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x214f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f20: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x214f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x214f24: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x214f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f28: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x214f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x214f2c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x214f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x214f30: 0xc08467a  jal         func_2119E8
    ctx->pc = 0x214F30u;
    SET_GPR_U32(ctx, 31, 0x214F38u);
    ctx->pc = 0x214F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F30u;
            // 0x214f34: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2119E8u;
    if (runtime->hasFunction(0x2119E8u)) {
        auto targetFn = runtime->lookupFunction(0x2119E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F38u; }
        if (ctx->pc != 0x214F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002119E8_0x2119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F38u; }
        if (ctx->pc != 0x214F38u) { return; }
    }
    ctx->pc = 0x214F38u;
label_214f38:
    // 0x214f38: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x214f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x214f3c: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x214F3Cu;
    {
        const bool branch_taken_0x214f3c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x214F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214F3Cu;
            // 0x214f40: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f3c) {
            ctx->pc = 0x214F6Cu;
            goto label_214f6c;
        }
    }
    ctx->pc = 0x214F44u;
    // 0x214f44: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x214f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x214f48: 0xc084368  jal         func_210DA0
    ctx->pc = 0x214F48u;
    SET_GPR_U32(ctx, 31, 0x214F50u);
    ctx->pc = 0x214F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F48u;
            // 0x214f4c: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210DA0u;
    if (runtime->hasFunction(0x210DA0u)) {
        auto targetFn = runtime->lookupFunction(0x210DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F50u; }
        if (ctx->pc != 0x214F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210DA0_0x210da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F50u; }
        if (ctx->pc != 0x214F50u) { return; }
    }
    ctx->pc = 0x214F50u;
label_214f50:
    // 0x214f50: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x214f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x214f54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f58: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x214f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x214f5c: 0xc084576  jal         func_2115D8
    ctx->pc = 0x214F5Cu;
    SET_GPR_U32(ctx, 31, 0x214F64u);
    ctx->pc = 0x214F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F5Cu;
            // 0x214f60: 0x8fa7002c  lw          $a3, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2115D8u;
    if (runtime->hasFunction(0x2115D8u)) {
        auto targetFn = runtime->lookupFunction(0x2115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F64u; }
        if (ctx->pc != 0x214F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002115D8_0x2115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F64u; }
        if (ctx->pc != 0x214F64u) { return; }
    }
    ctx->pc = 0x214F64u;
label_214f64:
    // 0x214f64: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x214F64u;
    {
        const bool branch_taken_0x214f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214F64u;
            // 0x214f68: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f64) {
            ctx->pc = 0x214F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214f08;
        }
    }
    ctx->pc = 0x214F6Cu;
label_214f6c:
    // 0x214f6c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x214f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214f70: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x214f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214f74: 0x0  nop
    ctx->pc = 0x214f74u;
    // NOP
label_214f78:
    // 0x214f78: 0xc0845ba  jal         func_2116E8
    ctx->pc = 0x214F78u;
    SET_GPR_U32(ctx, 31, 0x214F80u);
    ctx->pc = 0x214F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F78u;
            // 0x214f7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2116E8u;
    if (runtime->hasFunction(0x2116E8u)) {
        auto targetFn = runtime->lookupFunction(0x2116E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F80u; }
        if (ctx->pc != 0x214F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002116E8_0x2116e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F80u; }
        if (ctx->pc != 0x214F80u) { return; }
    }
    ctx->pc = 0x214F80u;
label_214f80:
    // 0x214f80: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x214f80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x214f84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x214f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f88: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x214f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x214f8c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x214f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x214f90: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x214f90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x214f94: 0xafb0009c  sw          $s0, 0x9C($sp)
    ctx->pc = 0x214f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 16));
    // 0x214f98: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x214f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
    // 0x214f9c: 0xc0845f4  jal         func_2117D0
    ctx->pc = 0x214F9Cu;
    SET_GPR_U32(ctx, 31, 0x214FA4u);
    ctx->pc = 0x214FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F9Cu;
            // 0x214fa0: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2117D0u;
    if (runtime->hasFunction(0x2117D0u)) {
        auto targetFn = runtime->lookupFunction(0x2117D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FA4u; }
        if (ctx->pc != 0x214FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002117D0_0x2117d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FA4u; }
        if (ctx->pc != 0x214FA4u) { return; }
    }
    ctx->pc = 0x214FA4u;
label_214fa4:
    // 0x214fa4: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x214fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x214fa8: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x214FA8u;
    {
        const bool branch_taken_0x214fa8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x214FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214FA8u;
            // 0x214fac: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fa8) {
            ctx->pc = 0x214FD8u;
            goto label_214fd8;
        }
    }
    ctx->pc = 0x214FB0u;
    // 0x214fb0: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x214fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x214fb4: 0xc084368  jal         func_210DA0
    ctx->pc = 0x214FB4u;
    SET_GPR_U32(ctx, 31, 0x214FBCu);
    ctx->pc = 0x214FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214FB4u;
            // 0x214fb8: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210DA0u;
    if (runtime->hasFunction(0x210DA0u)) {
        auto targetFn = runtime->lookupFunction(0x210DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FBCu; }
        if (ctx->pc != 0x214FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210DA0_0x210da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FBCu; }
        if (ctx->pc != 0x214FBCu) { return; }
    }
    ctx->pc = 0x214FBCu;
label_214fbc:
    // 0x214fbc: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x214fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x214fc0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x214fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x214fc4: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x214fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x214fc8: 0xc0847c2  jal         func_211F08
    ctx->pc = 0x214FC8u;
    SET_GPR_U32(ctx, 31, 0x214FD0u);
    ctx->pc = 0x214FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214FC8u;
            // 0x214fcc: 0x8fa7002c  lw          $a3, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211F08u;
    if (runtime->hasFunction(0x211F08u)) {
        auto targetFn = runtime->lookupFunction(0x211F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FD0u; }
        if (ctx->pc != 0x214FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211F08_0x211f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FD0u; }
        if (ctx->pc != 0x214FD0u) { return; }
    }
    ctx->pc = 0x214FD0u;
label_214fd0:
    // 0x214fd0: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x214FD0u;
    {
        const bool branch_taken_0x214fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214FD0u;
            // 0x214fd4: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fd0) {
            ctx->pc = 0x214F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214f78;
        }
    }
    ctx->pc = 0x214FD8u;
label_214fd8:
    // 0x214fd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x214fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214fdc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x214fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x214fe0: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x214fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x214fe4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x214fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x214fe8: 0x246affff  addiu       $t2, $v1, -0x1
    ctx->pc = 0x214fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x214fec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x214fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x214ff0: 0x54000e0  bltz        $t2, . + 4 + (0xE0 << 2)
    ctx->pc = 0x214FF0u;
    {
        const bool branch_taken_0x214ff0 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x214FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214FF0u;
            // 0x214ff4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ff0) {
            ctx->pc = 0x215374u;
            goto label_215374;
        }
    }
    ctx->pc = 0x214FF8u;
    // 0x214ff8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x214ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x214ffc: 0xa2140  sll         $a0, $t2, 5
    ctx->pc = 0x214ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x215000: 0x1426018  mult        $t4, $t2, $v0
    ctx->pc = 0x215000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x215004: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x215004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x215008: 0x856821  addu        $t5, $a0, $a1
    ctx->pc = 0x215008u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21500c: 0x6a5821  addu        $t3, $v1, $t2
    ctx->pc = 0x21500cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x215010: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x215010u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x215014: 0x0  nop
    ctx->pc = 0x215014u;
    // NOP
label_215018:
    // 0x215018: 0x240203c0  addiu       $v0, $zero, 0x3C0
    ctx->pc = 0x215018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x21501c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x21501cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215020: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x215020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x215024: 0xdba60030  lqc2        $vf6, 0x30($sp)
    ctx->pc = 0x215024u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215028: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x215028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21502c: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x21502cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x215030: 0xdba70040  lqc2        $vf7, 0x40($sp)
    ctx->pc = 0x215030u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215034: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x215034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x215038: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x215038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21503c: 0x1442018  mult        $a0, $t2, $a0
    ctx->pc = 0x21503cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x215040: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x215040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x215044: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x215044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x215048: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x215048u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21504c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x21504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x215050: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x215050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x215054: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x215054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x215058: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x215058u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21505c: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x21505cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x215060: 0x4be629bc  vmulax.xyzw $ACC, $vf5, $vf6x
    ctx->pc = 0x215060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x215064: 0x4be610bd  vmadday.xyzw $ACC, $vf2, $vf6y
    ctx->pc = 0x215064u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x215068: 0x4be6094a  vmaddz.xyzw $vf5, $vf1, $vf6z
    ctx->pc = 0x215068u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21506c: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x21506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x215070: 0xd8620020  lqc2        $vf2, 0x20($v1)
    ctx->pc = 0x215070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x215074: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x215074u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x215078: 0xd8430030  lqc2        $vf3, 0x30($v0)
    ctx->pc = 0x215078u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21507c: 0x4be719bc  vmulax.xyzw $ACC, $vf3, $vf7x
    ctx->pc = 0x21507cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x215080: 0x4be708bd  vmadday.xyzw $ACC, $vf1, $vf7y
    ctx->pc = 0x215080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x215084: 0x4be710ca  vmaddz.xyzw $vf3, $vf2, $vf7z
    ctx->pc = 0x215084u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215088: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x215088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x21508c: 0x4be518e8  vadd.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x21508cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x215090: 0xd8a40020  lqc2        $vf4, 0x20($a1)
    ctx->pc = 0x215090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x215094: 0xd8420060  lqc2        $vf2, 0x60($v0)
    ctx->pc = 0x215094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x215098: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x215098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x21509c: 0x4be611bc  vmulax.xyzw $ACC, $vf2, $vf6x
    ctx->pc = 0x21509cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2150a0: 0x4be608bd  vmadday.xyzw $ACC, $vf1, $vf6y
    ctx->pc = 0x2150a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2150a4: 0x4be6218a  vmaddz.xyzw $vf6, $vf4, $vf6z
    ctx->pc = 0x2150a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2150a8: 0xfba60080  sqc2        $vf6, 0x80($sp)
    ctx->pc = 0x2150a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2150ac: 0xd8c20020  lqc2        $vf2, 0x20($a2)
    ctx->pc = 0x2150acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2150b0: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x2150b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2150b4: 0xd8440090  lqc2        $vf4, 0x90($v0)
    ctx->pc = 0x2150b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2150b8: 0x4be721bc  vmulax.xyzw $ACC, $vf4, $vf7x
    ctx->pc = 0x2150b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2150bc: 0x4be708bd  vmadday.xyzw $ACC, $vf1, $vf7y
    ctx->pc = 0x2150bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2150c0: 0x4be711ca  vmaddz.xyzw $vf7, $vf2, $vf7z
    ctx->pc = 0x2150c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2150c4: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x2150c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2150c8: 0x4be43b3c  vmove.xyzw  $vf4, $vf7
    ctx->pc = 0x2150c8u;
    ctx->vu0_vf[4] = ctx->vu0_vf[7];
    // 0x2150cc: 0xfba70060  sqc2        $vf7, 0x60($sp)
    ctx->pc = 0x2150ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2150d0: 0x4be62128  vadd.xyzw   $vf4, $vf4, $vf6
    ctx->pc = 0x2150d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2150d4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2150d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2150d8: 0xd9a20000  lqc2        $vf2, 0x0($t5)
    ctx->pc = 0x2150d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2150dc: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x2150dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2150e0: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x2150e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2150e4: 0xd9a10010  lqc2        $vf1, 0x10($t5)
    ctx->pc = 0x2150e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x2150e8: 0x4be4086c  vsub.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x2150e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2150ec: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2150ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2150f0: 0x8ce90004  lw          $t1, 0x4($a3)
    ctx->pc = 0x2150f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2150f4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2150f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2150f8: 0x2c94821  addu        $t1, $s6, $t1
    ctx->pc = 0x2150f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x2150fc: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x2150fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x215100: 0xd8da0010  lqc2        $vf26, 0x10($a2)
    ctx->pc = 0x215100u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x215104: 0xd8db0020  lqc2        $vf27, 0x20($a2)
    ctx->pc = 0x215104u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x215108: 0xd8dc0030  lqc2        $vf28, 0x30($a2)
    ctx->pc = 0x215108u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x21510c: 0xd93d0010  lqc2        $vf29, 0x10($t1)
    ctx->pc = 0x21510cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x215110: 0xd93e0020  lqc2        $vf30, 0x20($t1)
    ctx->pc = 0x215110u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x215114: 0xd93f0030  lqc2        $vf31, 0x30($t1)
    ctx->pc = 0x215114u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x215118: 0x16e1018  mult        $v0, $t3, $t6
    ctx->pc = 0x215118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21511c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215120: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x215120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x215124: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x215124u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x215128: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x215128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21512c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x21512cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215130: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x215130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x215134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215138: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x215138u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21513c: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x21513cu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215140: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x215140u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x215144: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x215144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x215148: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x215148u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x21514c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x21514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215150: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x215150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215154: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x215154u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215158: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21515c: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x21515cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x215160: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x215160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x215164: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x215164u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x215168: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x215168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21516c: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x21516cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x215170: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x215170u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x215174: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x215174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x215178: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x215178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21517c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x21517cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x215180: 0x16e1018  mult        $v0, $t3, $t6
    ctx->pc = 0x215180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x215184: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x215184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215188: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x215188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21518c: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x21518cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x215190: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x215190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x215194: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x215194u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21519c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21519cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2151a0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2151a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2151a4: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x2151a4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2151a8: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x2151a8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2151ac: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x2151acu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2151b0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2151b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2151b4: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x2151b4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2151b8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2151b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2151bc: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x2151bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2151c0: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x2151c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2151c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2151c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2151c8: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x2151c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2151cc: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x2151ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2151d0: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x2151d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2151d4: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x2151d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2151d8: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x2151d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x2151dc: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x2151dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2151e0: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x2151e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x2151e4: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x2151e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2151e8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2151e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2151ec: 0x16e1018  mult        $v0, $t3, $t6
    ctx->pc = 0x2151ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2151f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2151f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2151f4: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2151f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2151f8: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x2151f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2151fc: 0x4b010042  vaddz.x     $vf1, $vf0, $vf1z
    ctx->pc = 0x2151fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x215200: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x215200u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215208: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x215208u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21520c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x21520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x215210: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x215210u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215214: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x215214u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215218: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x215218u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x21521c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x21521cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x215220: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x215220u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x215224: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x215224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215228: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x215228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21522c: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x21522cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215230: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215230u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215234: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x215234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x215238: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x215238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21523c: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x21523cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x215240: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x215240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215244: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x215244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x215248: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x215248u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21524c: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x21524cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x215250: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x215250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x215254: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x215254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x215258: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x215258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21525c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x21525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x215260: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x215260u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215264: 0x482f0800  qmfc2.ni    $t7, $vf1
    ctx->pc = 0x215264u;
    SET_GPR_VEC(ctx, 15, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215268: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x215268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x21526c: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x21526cu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215270: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x215270u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215274: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x215274u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215278: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x215278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x21527c: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x21527cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x215280: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x215280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215284: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x215284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215288: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x215288u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21528c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21528cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215290: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x215290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215294: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x215294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215298: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x215298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x21529c: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x21529cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2152a0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2152a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2152a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2152a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2152a8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x2152a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2152ac: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2152acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2152b0: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x2152b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2152b4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2152b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2152b8: 0x48340800  qmfc2.ni    $s4, $vf1
    ctx->pc = 0x2152b8u;
    SET_GPR_VEC(ctx, 20, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2152bc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2152bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2152c0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2152c0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2152c4: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x2152c4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2152c8: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x2152c8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2152cc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2152ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2152d0: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x2152d0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2152d4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2152d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2152d8: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x2152d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2152dc: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x2152dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2152e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2152e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2152e4: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x2152e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2152e8: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x2152e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2152ec: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x2152ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x2152f0: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x2152f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2152f4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2152f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2152f8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2152f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2152fc: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2152fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x215300: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x215300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215304: 0x4b010042  vaddz.x     $vf1, $vf0, $vf1z
    ctx->pc = 0x215304u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x215308: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x215308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x21530c: 0x48350800  qmfc2.ni    $s5, $vf1
    ctx->pc = 0x21530cu;
    SET_GPR_VEC(ctx, 21, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215310: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x215310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x215314: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x215314u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215318: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x215318u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21531c: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x21531cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215320: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x215320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x215324: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x215324u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x215328: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x215328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21532c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x21532cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215330: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x215330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215334: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215338: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x215338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21533c: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x21533cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215340: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x215340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x215344: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x215344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x215348: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x215348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x21534c: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x21534cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x215350: 0xf8da0010  sqc2        $vf26, 0x10($a2)
    ctx->pc = 0x215350u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x215354: 0xf8db0020  sqc2        $vf27, 0x20($a2)
    ctx->pc = 0x215354u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x215358: 0xf93d0010  sqc2        $vf29, 0x10($t1)
    ctx->pc = 0x215358u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x21535c: 0xf93e0020  sqc2        $vf30, 0x20($t1)
    ctx->pc = 0x21535cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x215360: 0x258cffa0  addiu       $t4, $t4, -0x60
    ctx->pc = 0x215360u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967200));
    // 0x215364: 0x25adffe0  addiu       $t5, $t5, -0x20
    ctx->pc = 0x215364u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967264));
    // 0x215368: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x215368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x21536c: 0x541ff2a  bgez        $t2, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x21536Cu;
    {
        const bool branch_taken_0x21536c = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x215370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21536Cu;
            // 0x215370: 0x256bfffd  addiu       $t3, $t3, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21536c) {
            ctx->pc = 0x215018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215018;
        }
    }
    ctx->pc = 0x215374u;
label_215374:
    // 0x215374: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x215374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x215378: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x215378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x21537c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x21537cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x215380: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x215380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x215384: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x215384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x215388: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x215388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x21538c: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x21538cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x215390: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x215390u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x215394: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x215394u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x215398: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x215398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21539c: 0x3e00008  jr          $ra
    ctx->pc = 0x21539Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2153A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21539Cu;
            // 0x2153a0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2153A4u;
    // 0x2153a4: 0x0  nop
    ctx->pc = 0x2153a4u;
    // NOP
}
