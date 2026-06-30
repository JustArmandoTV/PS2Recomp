#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283CE0
// Address: 0x283ce0 - 0x284f40
void sub_00283CE0_0x283ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283CE0_0x283ce0");
#endif

    switch (ctx->pc) {
        case 0x283d80u: goto label_283d80;
        case 0x283df4u: goto label_283df4;
        case 0x283e8cu: goto label_283e8c;
        case 0x283f2cu: goto label_283f2c;
        case 0x28407cu: goto label_28407c;
        case 0x284128u: goto label_284128;
        case 0x28417cu: goto label_28417c;
        case 0x2841d0u: goto label_2841d0;
        case 0x2841e0u: goto label_2841e0;
        case 0x28421cu: goto label_28421c;
        case 0x28427cu: goto label_28427c;
        case 0x2842d8u: goto label_2842d8;
        case 0x284300u: goto label_284300;
        case 0x284350u: goto label_284350;
        case 0x2843f8u: goto label_2843f8;
        case 0x284430u: goto label_284430;
        case 0x284484u: goto label_284484;
        case 0x2844b0u: goto label_2844b0;
        case 0x2844e8u: goto label_2844e8;
        case 0x28453cu: goto label_28453c;
        case 0x284568u: goto label_284568;
        case 0x2845a0u: goto label_2845a0;
        case 0x2845dcu: goto label_2845dc;
        case 0x284634u: goto label_284634;
        case 0x2847f4u: goto label_2847f4;
        case 0x284808u: goto label_284808;
        case 0x284918u: goto label_284918;
        case 0x2849b0u: goto label_2849b0;
        case 0x284e70u: goto label_284e70;
        case 0x284ea8u: goto label_284ea8;
        case 0x284ebcu: goto label_284ebc;
        case 0x284ed0u: goto label_284ed0;
        default: break;
    }

    ctx->pc = 0x283ce0u;

    // 0x283ce0: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x283ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x283ce4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x283ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x283ce8: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x283ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x283cec: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x283cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x283cf0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x283cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x283cf4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x283cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x283cf8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x283cf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283cfc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x283cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x283d00: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x283d00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d04: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x283d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x283d08: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x283d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x283d0c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x283d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x283d10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x283d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x283d14: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x283d14u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x283d18: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x283d18u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x283d1c: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x283d1cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x283d20: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x283d20u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x283d24: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x283d24u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x283d28: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x283d28u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x283d2c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x283d2cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x283d30: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x283d30u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x283d34: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x283d34u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x283d38: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x283d38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x283d3c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x283d3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x283d40: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x283d40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x283d44: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x283d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
    // 0x283d48: 0xafa50158  sw          $a1, 0x158($sp)
    ctx->pc = 0x283d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 5));
    // 0x283d4c: 0xafa70150  sw          $a3, 0x150($sp)
    ctx->pc = 0x283d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
    // 0x283d50: 0xafa8014c  sw          $t0, 0x14C($sp)
    ctx->pc = 0x283d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 8));
    // 0x283d54: 0xafab0148  sw          $t3, 0x148($sp)
    ctx->pc = 0x283d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 11));
    // 0x283d58: 0xafa60154  sw          $a2, 0x154($sp)
    ctx->pc = 0x283d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 6));
    // 0x283d5c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x283d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x283d60: 0x8cd30004  lw          $s3, 0x4($a2)
    ctx->pc = 0x283d60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x283d64: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x283d64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x283d68: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x283d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283d6c: 0x1020014e  beqz        $at, . + 4 + (0x14E << 2)
    ctx->pc = 0x283D6Cu;
    {
        const bool branch_taken_0x283d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283D6Cu;
            // 0x283d70: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d6c) {
            ctx->pc = 0x2842A8u;
            goto label_2842a8;
        }
    }
    ctx->pc = 0x283D74u;
    // 0x283d74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x283d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x283d78: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x283d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x283d7c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x283d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_283d80:
    // 0x283d80: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x283d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x283d84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x283d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x283d88: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x283d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x283d8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x283d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x283d90: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x283d90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283d94: 0xa7a20120  sh          $v0, 0x120($sp)
    ctx->pc = 0x283d94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x283d98: 0x947e0004  lhu         $fp, 0x4($v1)
    ctx->pc = 0x283d98u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x283d9c: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x283d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x283da0: 0x2de082a  slt         $at, $s6, $fp
    ctx->pc = 0x283da0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x283da4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x283da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x283da8: 0x10200135  beqz        $at, . + 4 + (0x135 << 2)
    ctx->pc = 0x283DA8u;
    {
        const bool branch_taken_0x283da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283DA8u;
            // 0x283dac: 0x94570004  lhu         $s7, 0x4($v0) (Delay Slot)
        SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283da8) {
            ctx->pc = 0x284280u;
            goto label_284280;
        }
    }
    ctx->pc = 0x283DB0u;
    // 0x283db0: 0x2d7082a  slt         $at, $s6, $s7
    ctx->pc = 0x283db0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x283db4: 0x10200132  beqz        $at, . + 4 + (0x132 << 2)
    ctx->pc = 0x283DB4u;
    {
        const bool branch_taken_0x283db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x283db4) {
            ctx->pc = 0x284280u;
            goto label_284280;
        }
    }
    ctx->pc = 0x283DBCu;
    // 0x283dbc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x283dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x283dc0: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x283dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x283dc4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x283dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x283dc8: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x283dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x283dcc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x283dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x283dd0: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x283dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x283dd4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x283DD4u;
    {
        const bool branch_taken_0x283dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x283dd4) {
            ctx->pc = 0x283DF8u;
            goto label_283df8;
        }
    }
    ctx->pc = 0x283DDCu;
    // 0x283ddc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x283ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x283de0: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x283de0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x283de4: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x283de4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x283de8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x283de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283dec: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x283DECu;
    SET_GPR_U32(ctx, 31, 0x283DF4u);
    ctx->pc = 0x283DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283DECu;
            // 0x283df0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283DF4u; }
        if (ctx->pc != 0x283DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283DF4u; }
        if (ctx->pc != 0x283DF4u) { return; }
    }
    ctx->pc = 0x283DF4u;
label_283df4:
    // 0x283df4: 0x0  nop
    ctx->pc = 0x283df4u;
    // NOP
label_283df8:
    // 0x283df8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x283df8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x283dfc: 0x97a20120  lhu         $v0, 0x120($sp)
    ctx->pc = 0x283dfcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x283e00: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x283e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x283e04: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x283e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x283e08: 0x114900  sll         $t1, $s1, 4
    ctx->pc = 0x283e08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x283e0c: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x283e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x283e10: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x283e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x283e14: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x283e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283e18: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x283e18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x283e1c: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x283e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x283e20: 0x262f021  addu        $fp, $s3, $v0
    ctx->pc = 0x283e20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x283e24: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x283e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x283e28: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x283e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x283e2c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x283e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x283e30: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x283e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x283e34: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x283e34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x283e38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283e3c: 0x1098021  addu        $s0, $t0, $t1
    ctx->pc = 0x283e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x283e40: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x283e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x283e44: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x283e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283e48: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x283e48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x283e4c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x283e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x283e50: 0x97c70000  lhu         $a3, 0x0($fp)
    ctx->pc = 0x283e50u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x283e54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283e58: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x283e58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x283e5c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x283e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x283e60: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x283e60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283e64: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x283e64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x283e68: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x283e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x283e6c: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x283e6cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283e70: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x283e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x283e74: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x283e74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x283e78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283e7c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x283e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x283e80: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x283e80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283e84: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x283E84u;
    SET_GPR_U32(ctx, 31, 0x283E8Cu);
    ctx->pc = 0x283E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283E84u;
            // 0x283e88: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E8Cu; }
        if (ctx->pc != 0x283E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E8Cu; }
        if (ctx->pc != 0x283E8Cu) { return; }
    }
    ctx->pc = 0x283E8Cu;
label_283e8c:
    // 0x283e8c: 0x27a20204  addiu       $v0, $sp, 0x204
    ctx->pc = 0x283e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x283e90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x283e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283e94: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x283e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283e98: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x283e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x283e9c: 0x27a20208  addiu       $v0, $sp, 0x208
    ctx->pc = 0x283e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x283ea0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x283ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283ea4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x283ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x283ea8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x283ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x283eac: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x283eacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283eb0: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x283eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x283eb4: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x283eb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283eb8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x283EB8u;
    {
        const bool branch_taken_0x283eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283eb8) {
            ctx->pc = 0x283EE0u;
            goto label_283ee0;
        }
    }
    ctx->pc = 0x283EC0u;
    // 0x283ec0: 0x0  nop
    ctx->pc = 0x283ec0u;
    // NOP
    // 0x283ec4: 0x0  nop
    ctx->pc = 0x283ec4u;
    // NOP
    // 0x283ec8: 0x4600a0d6  rsqrt.s     $f3, $f20, $f0
    ctx->pc = 0x283ec8u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[20]);
    // 0x283ecc: 0x0  nop
    ctx->pc = 0x283eccu;
    // NOP
    // 0x283ed0: 0x0  nop
    ctx->pc = 0x283ed0u;
    // NOP
    // 0x283ed4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283ED4u;
    {
        const bool branch_taken_0x283ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ed4) {
            ctx->pc = 0x283EE0u;
            goto label_283ee0;
        }
    }
    ctx->pc = 0x283EDCu;
    // 0x283edc: 0x0  nop
    ctx->pc = 0x283edcu;
    // NOP
label_283ee0:
    // 0x283ee0: 0x27a20204  addiu       $v0, $sp, 0x204
    ctx->pc = 0x283ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x283ee4: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x283ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283ee8: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x283ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x283eec: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x283eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x283ef0: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x283ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x283ef4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x283ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x283ef8: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x283ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x283efc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x283efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283f00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x283f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x283f04: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x283f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x283f08: 0x27a20208  addiu       $v0, $sp, 0x208
    ctx->pc = 0x283f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x283f0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x283f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283f10: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x283f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x283f14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x283f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x283f18: 0x27a2020c  addiu       $v0, $sp, 0x20C
    ctx->pc = 0x283f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
    // 0x283f1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x283f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283f20: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x283f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x283f24: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x283F24u;
    SET_GPR_U32(ctx, 31, 0x283F2Cu);
    ctx->pc = 0x283F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283F24u;
            // 0x283f28: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F2Cu; }
        if (ctx->pc != 0x283F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F2Cu; }
        if (ctx->pc != 0x283F2Cu) { return; }
    }
    ctx->pc = 0x283F2Cu;
label_283f2c:
    // 0x283f2c: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x283f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    // 0x283f30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x283f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283f34: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x283f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283f38: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x283f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x283f3c: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x283f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x283f40: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x283f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283f44: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x283f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x283f48: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x283f48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x283f4c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x283f4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283f50: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x283f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x283f54: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x283f54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283f58: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x283F58u;
    {
        const bool branch_taken_0x283f58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283f58) {
            ctx->pc = 0x283F80u;
            goto label_283f80;
        }
    }
    ctx->pc = 0x283F60u;
    // 0x283f60: 0x0  nop
    ctx->pc = 0x283f60u;
    // NOP
    // 0x283f64: 0x0  nop
    ctx->pc = 0x283f64u;
    // NOP
    // 0x283f68: 0x4600a0d6  rsqrt.s     $f3, $f20, $f0
    ctx->pc = 0x283f68u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[20]);
    // 0x283f6c: 0x0  nop
    ctx->pc = 0x283f6cu;
    // NOP
    // 0x283f70: 0x0  nop
    ctx->pc = 0x283f70u;
    // NOP
    // 0x283f74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283F74u;
    {
        const bool branch_taken_0x283f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283f74) {
            ctx->pc = 0x283F80u;
            goto label_283f80;
        }
    }
    ctx->pc = 0x283F7Cu;
    // 0x283f7c: 0x0  nop
    ctx->pc = 0x283f7cu;
    // NOP
label_283f80:
    // 0x283f80: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x283f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    // 0x283f84: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x283f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283f88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x283f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283f8c: 0x0  nop
    ctx->pc = 0x283f8cu;
    // NOP
    // 0x283f90: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x283f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x283f94: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x283f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x283f98: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x283f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283f9c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x283f9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x283fa0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x283fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x283fa4: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x283fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x283fa8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x283fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283fac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x283facu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x283fb0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x283fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x283fb4: 0x27a201fc  addiu       $v0, $sp, 0x1FC
    ctx->pc = 0x283fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
    // 0x283fb8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x283fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283fbc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x283fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x283fc0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x283fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x283fc4: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x283fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x283fc8: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x283fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283fcc: 0xc7a201f0  lwc1        $f2, 0x1F0($sp)
    ctx->pc = 0x283fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283fd0: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x283fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283fd4: 0x27a20208  addiu       $v0, $sp, 0x208
    ctx->pc = 0x283fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x283fd8: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x283fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x283fdc: 0x27a20204  addiu       $v0, $sp, 0x204
    ctx->pc = 0x283fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x283fe0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x283fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x283fe4: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x283fe4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x283fe8: 0x460409dd  msub.s      $f7, $f1, $f4
    ctx->pc = 0x283fe8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x283fec: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x283fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    // 0x283ff0: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x283ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x283ff4: 0x4606081a  mula.s      $f1, $f6
    ctx->pc = 0x283ff4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x283ff8: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x283ff8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x283ffc: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x283ffcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x284000: 0x4606285d  msub.s      $f1, $f5, $f6
    ctx->pc = 0x284000u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
    // 0x284004: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x284004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x284008: 0xe6070004  swc1        $f7, 0x4($s0)
    ctx->pc = 0x284008u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28400c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x28400cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x284010: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x284010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x284014: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x284014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284018: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x284018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28401c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x28401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284020: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x284020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x284024: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x284024u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x284028: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x284028u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x28402c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x28402cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x284030: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x284030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284034: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x284034u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x284038: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x284038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28403c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x28403Cu;
    {
        const bool branch_taken_0x28403c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28403c) {
            ctx->pc = 0x284088u;
            goto label_284088;
        }
    }
    ctx->pc = 0x284044u;
    // 0x284044: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x284044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x284048: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x284048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x28404c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x284050: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x284050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x284054: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x284054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x284058: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x284058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28405c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x28405Cu;
    {
        const bool branch_taken_0x28405c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28405c) {
            ctx->pc = 0x284080u;
            goto label_284080;
        }
    }
    ctx->pc = 0x284064u;
    // 0x284064: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x284064u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x284068: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x284068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28406c: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x28406cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x284070: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x284070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284074: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x284074u;
    SET_GPR_U32(ctx, 31, 0x28407Cu);
    ctx->pc = 0x284078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284074u;
            // 0x284078: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28407Cu; }
        if (ctx->pc != 0x28407Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28407Cu; }
        if (ctx->pc != 0x28407Cu) { return; }
    }
    ctx->pc = 0x28407Cu;
label_28407c:
    // 0x28407c: 0x0  nop
    ctx->pc = 0x28407cu;
    // NOP
label_284080:
    // 0x284080: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x284080u;
    {
        const bool branch_taken_0x284080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284080u;
            // 0x284084: 0xae900004  sw          $s0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284080) {
            ctx->pc = 0x284280u;
            goto label_284280;
        }
    }
    ctx->pc = 0x284088u;
label_284088:
    // 0x284088: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x284088u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28408c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28408Cu;
    {
        const bool branch_taken_0x28408c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28408c) {
            ctx->pc = 0x2840B0u;
            goto label_2840b0;
        }
    }
    ctx->pc = 0x284094u;
    // 0x284094: 0x0  nop
    ctx->pc = 0x284094u;
    // NOP
    // 0x284098: 0x0  nop
    ctx->pc = 0x284098u;
    // NOP
    // 0x28409c: 0x4602a016  rsqrt.s     $f0, $f20, $f2
    ctx->pc = 0x28409cu;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[20]);
    // 0x2840a0: 0x0  nop
    ctx->pc = 0x2840a0u;
    // NOP
    // 0x2840a4: 0x0  nop
    ctx->pc = 0x2840a4u;
    // NOP
    // 0x2840a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2840A8u;
    {
        const bool branch_taken_0x2840a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2840a8) {
            ctx->pc = 0x2840B0u;
            goto label_2840b0;
        }
    }
    ctx->pc = 0x2840B0u;
label_2840b0:
    // 0x2840b0: 0x27a20234  addiu       $v0, $sp, 0x234
    ctx->pc = 0x2840b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x2840b4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2840b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2840b8: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2840b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2840bc: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2840bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2840c0: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x2840c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2840c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2840c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2840c8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2840c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2840cc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2840ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2840d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2840d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2840d4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2840d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2840d8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2840d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2840dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2840dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2840e0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2840e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2840e4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2840e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2840e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2840e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2840ec: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2840ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2840f0: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2840f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2840f4: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x2840f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2840f8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2840f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2840fc: 0xc7a20230  lwc1        $f2, 0x230($sp)
    ctx->pc = 0x2840fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284100: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x284100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284104: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x284104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x284108: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x284108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28410c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x28410cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x284110: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x284110u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x284114: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x284114u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x284118: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x284118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x28411c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28411cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284120: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x284120u;
    SET_GPR_U32(ctx, 31, 0x284128u);
    ctx->pc = 0x284124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284120u;
            // 0x284124: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284128u; }
        if (ctx->pc != 0x284128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284128u; }
        if (ctx->pc != 0x284128u) { return; }
    }
    ctx->pc = 0x284128u;
label_284128:
    // 0x284128: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x284128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28412c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28412cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x284130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x284130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284134: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x284134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x284138: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x284138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x28413c: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x28413cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x284140: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x284140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x284144: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284148: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x284148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x28414c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28414cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284150: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284154: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x284154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x284158: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x284158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x28415c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284160: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284164: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x284164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x284168: 0x27a201dc  addiu       $v0, $sp, 0x1DC
    ctx->pc = 0x284168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x28416c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284170: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284174: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x284174u;
    SET_GPR_U32(ctx, 31, 0x28417Cu);
    ctx->pc = 0x284178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284174u;
            // 0x284178: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28417Cu; }
        if (ctx->pc != 0x28417Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28417Cu; }
        if (ctx->pc != 0x28417Cu) { return; }
    }
    ctx->pc = 0x28417Cu;
label_28417c:
    // 0x28417c: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x28417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284180: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x284180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x284184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x284184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284188: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x284188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x28418c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x28418cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x284190: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x284190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x284194: 0x27a201c4  addiu       $v0, $sp, 0x1C4
    ctx->pc = 0x284194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x284198: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28419c: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x28419cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2841a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2841a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2841a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2841a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2841a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2841a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2841ac: 0x27a201c8  addiu       $v0, $sp, 0x1C8
    ctx->pc = 0x2841acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x2841b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2841b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2841b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2841b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2841b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2841b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2841bc: 0x27a201cc  addiu       $v0, $sp, 0x1CC
    ctx->pc = 0x2841bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x2841c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2841c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2841c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2841c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2841c8: 0xc0a2970  jal         func_28A5C0
    ctx->pc = 0x2841C8u;
    SET_GPR_U32(ctx, 31, 0x2841D0u);
    ctx->pc = 0x2841CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2841C8u;
            // 0x2841cc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A5C0u;
    if (runtime->hasFunction(0x28A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2841D0u; }
        if (ctx->pc != 0x2841D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A5C0_0x28a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2841D0u; }
        if (ctx->pc != 0x2841D0u) { return; }
    }
    ctx->pc = 0x2841D0u;
label_2841d0:
    // 0x2841d0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2841d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2841d4: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2841d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2841d8: 0xc0a2970  jal         func_28A5C0
    ctx->pc = 0x2841D8u;
    SET_GPR_U32(ctx, 31, 0x2841E0u);
    ctx->pc = 0x2841DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2841D8u;
            // 0x2841dc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A5C0u;
    if (runtime->hasFunction(0x28A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2841E0u; }
        if (ctx->pc != 0x2841E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A5C0_0x28a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2841E0u; }
        if (ctx->pc != 0x2841E0u) { return; }
    }
    ctx->pc = 0x2841E0u;
label_2841e0:
    // 0x2841e0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2841e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2841e4: 0x8c570004  lw          $s7, 0x4($v0)
    ctx->pc = 0x2841e4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2841e8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2841e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2841ec: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x2841ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2841f0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2841f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2841f4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2841f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2841f8: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x2841f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2841fc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2841FCu;
    {
        const bool branch_taken_0x2841fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2841fc) {
            ctx->pc = 0x284220u;
            goto label_284220;
        }
    }
    ctx->pc = 0x284204u;
    // 0x284204: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x284204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x284208: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x284208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28420c: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x28420cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x284210: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x284210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x284214: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x284214u;
    SET_GPR_U32(ctx, 31, 0x28421Cu);
    ctx->pc = 0x284218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284214u;
            // 0x284218: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28421Cu; }
        if (ctx->pc != 0x28421Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28421Cu; }
        if (ctx->pc != 0x28421Cu) { return; }
    }
    ctx->pc = 0x28421Cu;
label_28421c:
    // 0x28421c: 0x0  nop
    ctx->pc = 0x28421cu;
    // NOP
label_284220:
    // 0x284220: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x284220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x284224: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x284224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x284228: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x284228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x28422c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x28422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x284230: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x284230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284234: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x284234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284238: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x284238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28423c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28423cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x284240: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x284240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284244: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x284244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x284248: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x284248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28424c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28424cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x284250: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x284250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284254: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x284254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x284258: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x284258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x28425c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x284260: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x284260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x284264: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x284264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x284268: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x284268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x28426c: 0xac9e0014  sw          $fp, 0x14($a0)
    ctx->pc = 0x28426cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 30));
    // 0x284270: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x284270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x284274: 0xc0a2824  jal         func_28A090
    ctx->pc = 0x284274u;
    SET_GPR_U32(ctx, 31, 0x28427Cu);
    ctx->pc = 0x284278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284274u;
            // 0x284278: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A090u;
    if (runtime->hasFunction(0x28A090u)) {
        auto targetFn = runtime->lookupFunction(0x28A090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28427Cu; }
        if (ctx->pc != 0x28427Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A090_0x28a090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28427Cu; }
        if (ctx->pc != 0x28427Cu) { return; }
    }
    ctx->pc = 0x28427Cu;
label_28427c:
    // 0x28427c: 0x0  nop
    ctx->pc = 0x28427cu;
    // NOP
label_284280:
    // 0x284280: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x284280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x284284: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x284284u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x284288: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x284288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x28428c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x28428cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x284290: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x284290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x284294: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x284294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x284298: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x284298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28429c: 0x1440feb8  bnez        $v0, . + 4 + (-0x148 << 2)
    ctx->pc = 0x28429Cu;
    {
        const bool branch_taken_0x28429c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28429c) {
            ctx->pc = 0x283D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283d80;
        }
    }
    ctx->pc = 0x2842A4u;
    // 0x2842a4: 0x0  nop
    ctx->pc = 0x2842a4u;
    // NOP
label_2842a8:
    // 0x2842a8: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x2842a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2842ac: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2842acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2842b0: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x2842b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x2842b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2842b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2842b8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2842b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2842bc: 0x102000f2  beqz        $at, . + 4 + (0xF2 << 2)
    ctx->pc = 0x2842BCu;
    {
        const bool branch_taken_0x2842bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2842bc) {
            ctx->pc = 0x284688u;
            goto label_284688;
        }
    }
    ctx->pc = 0x2842C4u;
    // 0x2842c4: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x2842c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x2842c8: 0x27b101b4  addiu       $s1, $sp, 0x1B4
    ctx->pc = 0x2842c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x2842cc: 0x27b70190  addiu       $s7, $sp, 0x190
    ctx->pc = 0x2842ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2842d0: 0x27b601b0  addiu       $s6, $sp, 0x1B0
    ctx->pc = 0x2842d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2842d4: 0x27b001b8  addiu       $s0, $sp, 0x1B8
    ctx->pc = 0x2842d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_2842d8:
    // 0x2842d8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2842d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2842dc: 0x245e0001  addiu       $fp, $v0, 0x1
    ctx->pc = 0x2842dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2842e0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2842e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2842e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2842e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2842e8: 0x3c3082a  slt         $at, $fp, $v1
    ctx->pc = 0x2842e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2842ec: 0x102000dc  beqz        $at, . + 4 + (0xDC << 2)
    ctx->pc = 0x2842ECu;
    {
        const bool branch_taken_0x2842ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2842ec) {
            ctx->pc = 0x284660u;
            goto label_284660;
        }
    }
    ctx->pc = 0x2842F4u;
    // 0x2842f4: 0x1e1140  sll         $v0, $fp, 5
    ctx->pc = 0x2842f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x2842f8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2842f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2842fc: 0x0  nop
    ctx->pc = 0x2842fcu;
    // NOP
label_284300:
    // 0x284300: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x284300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x284304: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x284304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x284308: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x284308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x28430c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x28430cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x284310: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x284310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284314: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x284314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x284318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28431c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28431cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284320: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x284320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x284324: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x284324u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x284328: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x284328u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x28432c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x28432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x284330: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x284330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284334: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x284334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x284338: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x284338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28433c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28433cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284340: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x284340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x284344: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x284344u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x284348: 0xc0a2970  jal         func_28A5C0
    ctx->pc = 0x284348u;
    SET_GPR_U32(ctx, 31, 0x284350u);
    ctx->pc = 0x28434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284348u;
            // 0x28434c: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A5C0u;
    if (runtime->hasFunction(0x28A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284350u; }
        if (ctx->pc != 0x284350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A5C0_0x28a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284350u; }
        if (ctx->pc != 0x284350u) { return; }
    }
    ctx->pc = 0x284350u;
label_284350:
    // 0x284350: 0x27a20174  addiu       $v0, $sp, 0x174
    ctx->pc = 0x284350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x284354: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x284354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x284358: 0xc7a20170  lwc1        $f2, 0x170($sp)
    ctx->pc = 0x284358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28435c: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x28435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x284360: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x284360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284364: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x284364u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x284368: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x284368u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x28436c: 0x27a2017c  addiu       $v0, $sp, 0x17C
    ctx->pc = 0x28436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x284370: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284374: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x284374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x284378: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x284378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28437c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x28437cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x284380: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x284380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x284384: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x284384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284388: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x284388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28438c: 0x450000aa  bc1f        . + 4 + (0xAA << 2)
    ctx->pc = 0x28438Cu;
    {
        const bool branch_taken_0x28438c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28438c) {
            ctx->pc = 0x284638u;
            goto label_284638;
        }
    }
    ctx->pc = 0x284394u;
    // 0x284394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284398: 0x27a40264  addiu       $a0, $sp, 0x264
    ctx->pc = 0x284398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
    // 0x28439c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x28439cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2843a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2843a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843a4: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x2843a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2843a8: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x2843a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x2843ac: 0x27aa01a0  addiu       $t2, $sp, 0x1A0
    ctx->pc = 0x2843acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2843b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2843b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2843b4: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2843b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2843b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2843b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2843bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2843bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2843c0: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x2843c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x2843c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2843c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2843c8: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x2843c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2843cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2843ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2843d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2843d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2843d4: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x2843d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x2843d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2843d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2843dc: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2843dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2843e0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x2843e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2843e4: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x2843e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2843e8: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x2843e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2843ec: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2843ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2843f0: 0xc0a2844  jal         func_28A110
    ctx->pc = 0x2843F0u;
    SET_GPR_U32(ctx, 31, 0x2843F8u);
    ctx->pc = 0x2843F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2843F0u;
            // 0x2843f4: 0x27ab0180  addiu       $t3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A110u;
    if (runtime->hasFunction(0x28A110u)) {
        auto targetFn = runtime->lookupFunction(0x28A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2843F8u; }
        if (ctx->pc != 0x2843F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A110_0x28a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2843F8u; }
        if (ctx->pc != 0x2843F8u) { return; }
    }
    ctx->pc = 0x2843F8u;
label_2843f8:
    // 0x2843f8: 0x27a20264  addiu       $v0, $sp, 0x264
    ctx->pc = 0x2843f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
    // 0x2843fc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2843fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284400: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x284400u;
    {
        const bool branch_taken_0x284400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284400) {
            ctx->pc = 0x284440u;
            goto label_284440;
        }
    }
    ctx->pc = 0x284408u;
    // 0x284408: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x284408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x28440c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x28440cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x284410: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x284410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x284414: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x284414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x284418: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x284418u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28441c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284420: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x284420u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284424: 0x27aa01a0  addiu       $t2, $sp, 0x1A0
    ctx->pc = 0x284424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x284428: 0xc0a2844  jal         func_28A110
    ctx->pc = 0x284428u;
    SET_GPR_U32(ctx, 31, 0x284430u);
    ctx->pc = 0x28442Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284428u;
            // 0x28442c: 0x27ab0180  addiu       $t3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A110u;
    if (runtime->hasFunction(0x28A110u)) {
        auto targetFn = runtime->lookupFunction(0x28A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284430u; }
        if (ctx->pc != 0x284430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A110_0x28a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284430u; }
        if (ctx->pc != 0x284430u) { return; }
    }
    ctx->pc = 0x284430u;
label_284430:
    // 0x284430: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x284430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x284434: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x284434u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284438: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x284438u;
    {
        const bool branch_taken_0x284438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284438) {
            ctx->pc = 0x284488u;
            goto label_284488;
        }
    }
    ctx->pc = 0x284440u;
label_284440:
    // 0x284440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284444: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x284444u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x284448: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x284448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x28444c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x28444cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x284450: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x284450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284454: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x284454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284458: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x284458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28445c: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x28445cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x284460: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x284460u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284464: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x284464u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284468: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x284468u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28446c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28446cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x284470: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x284470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x284474: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x284474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284478: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x284478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x28447c: 0xc0a13d0  jal         func_284F40
    ctx->pc = 0x28447Cu;
    SET_GPR_U32(ctx, 31, 0x284484u);
    ctx->pc = 0x284480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28447Cu;
            // 0x284480: 0x2423821  addu        $a3, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F40u;
    if (runtime->hasFunction(0x284F40u)) {
        auto targetFn = runtime->lookupFunction(0x284F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284484u; }
        if (ctx->pc != 0x284484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F40_0x284f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284484u; }
        if (ctx->pc != 0x284484u) { return; }
    }
    ctx->pc = 0x284484u;
label_284484:
    // 0x284484: 0x0  nop
    ctx->pc = 0x284484u;
    // NOP
label_284488:
    // 0x284488: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x284488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x28448c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x28448cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x284490: 0x27a4025c  addiu       $a0, $sp, 0x25C
    ctx->pc = 0x284490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x284494: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x284494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x284498: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x284498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28449c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x28449cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2844a0: 0x27aa01a0  addiu       $t2, $sp, 0x1A0
    ctx->pc = 0x2844a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2844a4: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2844a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2844a8: 0xc0a2844  jal         func_28A110
    ctx->pc = 0x2844A8u;
    SET_GPR_U32(ctx, 31, 0x2844B0u);
    ctx->pc = 0x2844ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2844A8u;
            // 0x2844ac: 0x27ab0180  addiu       $t3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A110u;
    if (runtime->hasFunction(0x28A110u)) {
        auto targetFn = runtime->lookupFunction(0x28A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2844B0u; }
        if (ctx->pc != 0x2844B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A110_0x28a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2844B0u; }
        if (ctx->pc != 0x2844B0u) { return; }
    }
    ctx->pc = 0x2844B0u;
label_2844b0:
    // 0x2844b0: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x2844b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x2844b4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2844b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2844b8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2844B8u;
    {
        const bool branch_taken_0x2844b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2844b8) {
            ctx->pc = 0x2844F8u;
            goto label_2844f8;
        }
    }
    ctx->pc = 0x2844C0u;
    // 0x2844c0: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x2844c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x2844c4: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x2844c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2844c8: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x2844c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2844cc: 0x27a40258  addiu       $a0, $sp, 0x258
    ctx->pc = 0x2844ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x2844d0: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x2844d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2844d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2844d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844d8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2844d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2844dc: 0x27aa01a0  addiu       $t2, $sp, 0x1A0
    ctx->pc = 0x2844dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2844e0: 0xc0a2844  jal         func_28A110
    ctx->pc = 0x2844E0u;
    SET_GPR_U32(ctx, 31, 0x2844E8u);
    ctx->pc = 0x2844E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2844E0u;
            // 0x2844e4: 0x27ab0180  addiu       $t3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A110u;
    if (runtime->hasFunction(0x28A110u)) {
        auto targetFn = runtime->lookupFunction(0x28A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2844E8u; }
        if (ctx->pc != 0x2844E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A110_0x28a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2844E8u; }
        if (ctx->pc != 0x2844E8u) { return; }
    }
    ctx->pc = 0x2844E8u;
label_2844e8:
    // 0x2844e8: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x2844e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x2844ec: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2844ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2844f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2844F0u;
    {
        const bool branch_taken_0x2844f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2844f0) {
            ctx->pc = 0x284540u;
            goto label_284540;
        }
    }
    ctx->pc = 0x2844F8u;
label_2844f8:
    // 0x2844f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2844f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2844fc: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2844fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x284500: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x284500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x284504: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x284504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x284508: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x284508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28450c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284510: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x284510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284514: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x284514u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x284518: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x284518u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28451c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x28451cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284520: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x284520u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x284524: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x284524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x284528: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x284528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x28452c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28452cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284530: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x284530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x284534: 0xc0a13d0  jal         func_284F40
    ctx->pc = 0x284534u;
    SET_GPR_U32(ctx, 31, 0x28453Cu);
    ctx->pc = 0x284538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284534u;
            // 0x284538: 0x2423821  addu        $a3, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F40u;
    if (runtime->hasFunction(0x284F40u)) {
        auto targetFn = runtime->lookupFunction(0x284F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28453Cu; }
        if (ctx->pc != 0x28453Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F40_0x284f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28453Cu; }
        if (ctx->pc != 0x28453Cu) { return; }
    }
    ctx->pc = 0x28453Cu;
label_28453c:
    // 0x28453c: 0x0  nop
    ctx->pc = 0x28453cu;
    // NOP
label_284540:
    // 0x284540: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x284540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x284544: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x284544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284548: 0x27a40254  addiu       $a0, $sp, 0x254
    ctx->pc = 0x284548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x28454c: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x28454cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x284550: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x284550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284554: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x284554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284558: 0x27aa01a0  addiu       $t2, $sp, 0x1A0
    ctx->pc = 0x284558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x28455c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x28455cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284560: 0xc0a2844  jal         func_28A110
    ctx->pc = 0x284560u;
    SET_GPR_U32(ctx, 31, 0x284568u);
    ctx->pc = 0x284564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284560u;
            // 0x284564: 0x27ab0180  addiu       $t3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A110u;
    if (runtime->hasFunction(0x28A110u)) {
        auto targetFn = runtime->lookupFunction(0x28A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284568u; }
        if (ctx->pc != 0x284568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A110_0x28a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284568u; }
        if (ctx->pc != 0x284568u) { return; }
    }
    ctx->pc = 0x284568u;
label_284568:
    // 0x284568: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x284568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x28456c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x28456cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284570: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x284570u;
    {
        const bool branch_taken_0x284570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284570) {
            ctx->pc = 0x2845F0u;
            goto label_2845f0;
        }
    }
    ctx->pc = 0x284578u;
    // 0x284578: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x284578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x28457c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x28457cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284580: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x284580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x284584: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x284584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x284588: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x284588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28458c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28458cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284590: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x284590u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284594: 0x27aa01a0  addiu       $t2, $sp, 0x1A0
    ctx->pc = 0x284594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x284598: 0xc0a2844  jal         func_28A110
    ctx->pc = 0x284598u;
    SET_GPR_U32(ctx, 31, 0x2845A0u);
    ctx->pc = 0x28459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284598u;
            // 0x28459c: 0x27ab0180  addiu       $t3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A110u;
    if (runtime->hasFunction(0x28A110u)) {
        auto targetFn = runtime->lookupFunction(0x28A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845A0u; }
        if (ctx->pc != 0x2845A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A110_0x28a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845A0u; }
        if (ctx->pc != 0x2845A0u) { return; }
    }
    ctx->pc = 0x2845A0u;
label_2845a0:
    // 0x2845a0: 0x27a20250  addiu       $v0, $sp, 0x250
    ctx->pc = 0x2845a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2845a4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2845a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2845a8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2845A8u;
    {
        const bool branch_taken_0x2845a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2845a8) {
            ctx->pc = 0x2845F0u;
            goto label_2845f0;
        }
    }
    ctx->pc = 0x2845B0u;
    // 0x2845b0: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2845b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2845b4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2845b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2845b8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2845b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2845bc: 0x27a4024c  addiu       $a0, $sp, 0x24C
    ctx->pc = 0x2845bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x2845c0: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x2845c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2845c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2845c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2845c8: 0x27aa01a0  addiu       $t2, $sp, 0x1A0
    ctx->pc = 0x2845c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2845cc: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x2845ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x2845d0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2845d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2845d4: 0xc0a2844  jal         func_28A110
    ctx->pc = 0x2845D4u;
    SET_GPR_U32(ctx, 31, 0x2845DCu);
    ctx->pc = 0x2845D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2845D4u;
            // 0x2845d8: 0x27ab0180  addiu       $t3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A110u;
    if (runtime->hasFunction(0x28A110u)) {
        auto targetFn = runtime->lookupFunction(0x28A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845DCu; }
        if (ctx->pc != 0x2845DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A110_0x28a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845DCu; }
        if (ctx->pc != 0x2845DCu) { return; }
    }
    ctx->pc = 0x2845DCu;
label_2845dc:
    // 0x2845dc: 0x27a2024c  addiu       $v0, $sp, 0x24C
    ctx->pc = 0x2845dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x2845e0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2845e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2845e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2845E4u;
    {
        const bool branch_taken_0x2845e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2845e4) {
            ctx->pc = 0x284638u;
            goto label_284638;
        }
    }
    ctx->pc = 0x2845ECu;
    // 0x2845ec: 0x0  nop
    ctx->pc = 0x2845ecu;
    // NOP
label_2845f0:
    // 0x2845f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2845f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2845f4: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2845f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2845f8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2845f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2845fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2845fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x284600: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x284600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284604: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x284604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284608: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x284608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x28460c: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x28460cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x284610: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x284610u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284614: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x284614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284618: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x284618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28461c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28461cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x284620: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x284620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x284624: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x284624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284628: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x284628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x28462c: 0xc0a13d0  jal         func_284F40
    ctx->pc = 0x28462Cu;
    SET_GPR_U32(ctx, 31, 0x284634u);
    ctx->pc = 0x284630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28462Cu;
            // 0x284630: 0x2423821  addu        $a3, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F40u;
    if (runtime->hasFunction(0x284F40u)) {
        auto targetFn = runtime->lookupFunction(0x284F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284634u; }
        if (ctx->pc != 0x284634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F40_0x284f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284634u; }
        if (ctx->pc != 0x284634u) { return; }
    }
    ctx->pc = 0x284634u;
label_284634:
    // 0x284634: 0x0  nop
    ctx->pc = 0x284634u;
    // NOP
label_284638:
    // 0x284638: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x284638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28463c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x28463cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x284640: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x284640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x284644: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x284644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x284648: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x284648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28464c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x284650: 0x3c3102a  slt         $v0, $fp, $v1
    ctx->pc = 0x284650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x284654: 0x1440ff2a  bnez        $v0, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x284654u;
    {
        const bool branch_taken_0x284654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284654) {
            ctx->pc = 0x284300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284300;
        }
    }
    ctx->pc = 0x28465Cu;
    // 0x28465c: 0x0  nop
    ctx->pc = 0x28465cu;
    // NOP
label_284660:
    // 0x284660: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x284660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x284664: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x284664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x284668: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x284668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x28466c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x28466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x284670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x284670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x284674: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x284674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x284678: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x284678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28467c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28467cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x284680: 0x1440ff15  bnez        $v0, . + 4 + (-0xEB << 2)
    ctx->pc = 0x284680u;
    {
        const bool branch_taken_0x284680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284680) {
            ctx->pc = 0x2842D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2842d8;
        }
    }
    ctx->pc = 0x284688u;
label_284688:
    // 0x284688: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x284688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28468c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x28468Cu;
    {
        const bool branch_taken_0x28468c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28468c) {
            ctx->pc = 0x2847E0u;
            goto label_2847e0;
        }
    }
    ctx->pc = 0x284694u;
    // 0x284694: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x284694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x284698: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28469c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2846a0: 0xc4470004  lwc1        $f7, 0x4($v0)
    ctx->pc = 0x2846a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2846a4: 0xc4450014  lwc1        $f5, 0x14($v0)
    ctx->pc = 0x2846a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2846a8: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x2846a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2846ac: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2846acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2846b0: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x2846b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2846b4: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x2846b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2846b8: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x2846b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2846bc: 0x46053a41  sub.s       $f9, $f7, $f5
    ctx->pc = 0x2846bcu;
    ctx->f[9] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x2846c0: 0x46014281  sub.s       $f10, $f8, $f1
    ctx->pc = 0x2846c0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x2846c4: 0x46034141  sub.s       $f5, $f8, $f3
    ctx->pc = 0x2846c4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x2846c8: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x2846c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2846cc: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2846ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2846d0: 0x460238c1  sub.s       $f3, $f7, $f2
    ctx->pc = 0x2846d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x2846d4: 0x46043101  sub.s       $f4, $f6, $f4
    ctx->pc = 0x2846d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x2846d8: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x2846d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2846dc: 0x46013081  sub.s       $f2, $f6, $f1
    ctx->pc = 0x2846dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x2846e0: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x2846e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x2846e4: 0x4603205d  msub.s      $f1, $f4, $f3
    ctx->pc = 0x2846e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x2846e8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2846e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2846ec: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x2846ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2846f0: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x2846f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2846f4: 0x4602505d  msub.s      $f1, $f10, $f2
    ctx->pc = 0x2846f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
    // 0x2846f8: 0x4603501a  mula.s      $f10, $f3
    ctx->pc = 0x2846f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x2846fc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2846fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x284700: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x284700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x284704: 0x4605485d  msub.s      $f1, $f9, $f5
    ctx->pc = 0x284704u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
    // 0x284708: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x284708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28470c: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x28470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x284710: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x284710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x284714: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x284714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x284718: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x284718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28471c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x28471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284720: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x284720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284724: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x284724u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x284728: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x284728u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x28472c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x28472cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x284730: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x284730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x284734: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x284734u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284738: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x284738u;
    {
        const bool branch_taken_0x284738 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284738) {
            ctx->pc = 0x284760u;
            goto label_284760;
        }
    }
    ctx->pc = 0x284740u;
    // 0x284740: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x284740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x284744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284748: 0x0  nop
    ctx->pc = 0x284748u;
    // NOP
    // 0x28474c: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x28474cu;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x284750: 0x0  nop
    ctx->pc = 0x284750u;
    // NOP
    // 0x284754: 0x0  nop
    ctx->pc = 0x284754u;
    // NOP
    // 0x284758: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x284758u;
    {
        const bool branch_taken_0x284758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284758) {
            ctx->pc = 0x284760u;
            goto label_284760;
        }
    }
    ctx->pc = 0x284760u;
label_284760:
    // 0x284760: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x284760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x284764: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x284764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284768: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x284768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28476c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x28476cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x284770: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x284770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x284774: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x284774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284778: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x284778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28477c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x28477cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x284780: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x284780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x284784: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x284784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x284788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28478c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x28478cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x284790: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x284790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x284794: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x284794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284798: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28479c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x28479cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2847a0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2847a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2847a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2847a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2847a8: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x2847a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2847ac: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2847acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2847b0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2847b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2847b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2847b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2847b8: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x2847b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2847bc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2847bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2847c0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2847c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2847c4: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2847c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2847c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2847c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2847cc: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x2847ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2847d0: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x2847d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x2847d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2847d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2847d8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2847d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2847dc: 0x0  nop
    ctx->pc = 0x2847dcu;
    // NOP
label_2847e0:
    // 0x2847e0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2847e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2847e4: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2847e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2847e8: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x2847e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x2847ec: 0xc0a2a40  jal         func_28A900
    ctx->pc = 0x2847ECu;
    SET_GPR_U32(ctx, 31, 0x2847F4u);
    ctx->pc = 0x2847F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2847ECu;
            // 0x2847f0: 0x24c6a520  addiu       $a2, $a2, -0x5AE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A900u;
    if (runtime->hasFunction(0x28A900u)) {
        auto targetFn = runtime->lookupFunction(0x28A900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2847F4u; }
        if (ctx->pc != 0x2847F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A900_0x28a900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2847F4u; }
        if (ctx->pc != 0x2847F4u) { return; }
    }
    ctx->pc = 0x2847F4u;
label_2847f4:
    // 0x2847f4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x2847f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2847f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2847f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847fc: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x2847fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284800: 0xc0a0ab4  jal         func_282AD0
    ctx->pc = 0x284800u;
    SET_GPR_U32(ctx, 31, 0x284808u);
    ctx->pc = 0x284804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284800u;
            // 0x284804: 0x27a5026c  addiu       $a1, $sp, 0x26C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AD0u;
    if (runtime->hasFunction(0x282AD0u)) {
        auto targetFn = runtime->lookupFunction(0x282AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284808u; }
        if (ctx->pc != 0x284808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282AD0_0x282ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284808u; }
        if (ctx->pc != 0x284808u) { return; }
    }
    ctx->pc = 0x284808u;
label_284808:
    // 0x284808: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x284808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x28480c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x28480cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x284810: 0x10200183  beqz        $at, . + 4 + (0x183 << 2)
    ctx->pc = 0x284810u;
    {
        const bool branch_taken_0x284810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x284810) {
            ctx->pc = 0x284E20u;
            goto label_284e20;
        }
    }
    ctx->pc = 0x284818u;
    // 0x284818: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x284818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x28481c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x28481cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x284820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284824: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x284824u;
    {
        const bool branch_taken_0x284824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284824) {
            ctx->pc = 0x284880u;
            goto label_284880;
        }
    }
    ctx->pc = 0x28482Cu;
    // 0x28482c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x28482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x284830: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x284830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284834: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x284834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x284838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x284838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28483c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28483cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284844: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x284844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x284848: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x284848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28484c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284854: 0xc45f0000  lwc1        $f31, 0x0($v0)
    ctx->pc = 0x284854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x284858: 0xc45e0004  lwc1        $f30, 0x4($v0)
    ctx->pc = 0x284858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x28485c: 0xc45d0008  lwc1        $f29, 0x8($v0)
    ctx->pc = 0x28485cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x284860: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x284860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284864: 0x4600ff00  add.s       $f28, $f31, $f0
    ctx->pc = 0x284864u;
    ctx->f[28] = FPU_ADD_S(ctx->f[31], ctx->f[0]);
    // 0x284868: 0x4601e800  add.s       $f0, $f29, $f1
    ctx->pc = 0x284868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[29], ctx->f[1]);
    // 0x28486c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x28486cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x284870: 0x4601f6c0  add.s       $f27, $f30, $f1
    ctx->pc = 0x284870u;
    ctx->f[27] = FPU_ADD_S(ctx->f[30], ctx->f[1]);
    // 0x284874: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x284874u;
    {
        const bool branch_taken_0x284874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284874u;
            // 0x284878: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284874) {
            ctx->pc = 0x2848D8u;
            goto label_2848d8;
        }
    }
    ctx->pc = 0x28487Cu;
    // 0x28487c: 0x0  nop
    ctx->pc = 0x28487cu;
    // NOP
label_284880:
    // 0x284880: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x284880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x284884: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x284884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x284888: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x284888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28488c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x28488cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x284890: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x284890u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x284894: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x284894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x284898: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x284898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28489c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28489cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2848a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2848a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2848a4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2848a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2848a8: 0xc47f0000  lwc1        $f31, 0x0($v1)
    ctx->pc = 0x2848a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2848ac: 0xc47e0004  lwc1        $f30, 0x4($v1)
    ctx->pc = 0x2848acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2848b0: 0xc47d0008  lwc1        $f29, 0x8($v1)
    ctx->pc = 0x2848b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2848b4: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2848b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2848b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2848b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2848bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2848bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2848c0: 0xc45c0000  lwc1        $f28, 0x0($v0)
    ctx->pc = 0x2848c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2848c4: 0xc45b0004  lwc1        $f27, 0x4($v0)
    ctx->pc = 0x2848c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2848c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2848c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2848cc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2848ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2848d0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2848d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2848d4: 0x0  nop
    ctx->pc = 0x2848d4u;
    // NOP
label_2848d8:
    // 0x2848d8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2848d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2848dc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2848dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2848e0: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x2848e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x2848e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2848e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2848e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2848e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848ec: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x2848ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2848f0: 0x27a60164  addiu       $a2, $sp, 0x164
    ctx->pc = 0x2848f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x2848f4: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x2848f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2848f8: 0x27a4016c  addiu       $a0, $sp, 0x16C
    ctx->pc = 0x2848f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x2848fc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2848fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x284900: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x284900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284904: 0x461cfe81  sub.s       $f26, $f31, $f28
    ctx->pc = 0x284904u;
    ctx->f[26] = FPU_SUB_S(ctx->f[31], ctx->f[28]);
    // 0x284908: 0x461bf641  sub.s       $f25, $f30, $f27
    ctx->pc = 0x284908u;
    ctx->f[25] = FPU_SUB_S(ctx->f[30], ctx->f[27]);
    // 0x28490c: 0x4600ee01  sub.s       $f24, $f29, $f0
    ctx->pc = 0x28490cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[29], ctx->f[0]);
    // 0x284910: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x284910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x284914: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x284914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_284918:
    // 0x284918: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x284918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x28491c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x28491cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x284920: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x284920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x284924: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x284924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x284928: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x284928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x28492c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x28492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284930: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x284930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284934: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x284934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284938: 0x4603c802  mul.s       $f0, $f25, $f3
    ctx->pc = 0x284938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[3]);
    // 0x28493c: 0x4601d042  mul.s       $f1, $f26, $f1
    ctx->pc = 0x28493cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[1]);
    // 0x284940: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x284940u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x284944: 0x4602c01c  madd.s      $f0, $f24, $f2
    ctx->pc = 0x284944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[2]));
    // 0x284948: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x284948u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x28494c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x28494cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284950: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x284950u;
    {
        const bool branch_taken_0x284950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x284954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284950u;
            // 0x284954: 0xc7a40160  lwc1        $f4, 0x160($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284950) {
            ctx->pc = 0x284968u;
            goto label_284968;
        }
    }
    ctx->pc = 0x284958u;
    // 0x284958: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x284958u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x28495c: 0x460025c6  mov.s       $f23, $f4
    ctx->pc = 0x28495cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[4]);
    // 0x284960: 0x46001d86  mov.s       $f22, $f3
    ctx->pc = 0x284960u;
    ctx->f[22] = FPU_MOV_S(ctx->f[3]);
    // 0x284964: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x284964u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
label_284968:
    // 0x284968: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x284968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x28496c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x28496cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x284970: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x284970u;
    {
        const bool branch_taken_0x284970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284970u;
            // 0x284974: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284970) {
            ctx->pc = 0x284918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284918;
        }
    }
    ctx->pc = 0x284978u;
    // 0x284978: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x284978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x28497c: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x28497cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x284980: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x284980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x284984: 0x26020006  addiu       $v0, $s0, 0x6
    ctx->pc = 0x284984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x284988: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x284988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28498c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x28498cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x284990: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x284990u;
    {
        const bool branch_taken_0x284990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x284990) {
            ctx->pc = 0x2849B0u;
            goto label_2849b0;
        }
    }
    ctx->pc = 0x284998u;
    // 0x284998: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x284998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28499c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x28499cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2849a0: 0x41280a  movz        $a1, $v0, $at
    ctx->pc = 0x2849a0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x2849a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2849a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849a8: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x2849A8u;
    SET_GPR_U32(ctx, 31, 0x2849B0u);
    ctx->pc = 0x2849ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2849A8u;
            // 0x2849ac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849B0u; }
        if (ctx->pc != 0x2849B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849B0u; }
        if (ctx->pc != 0x2849B0u) { return; }
    }
    ctx->pc = 0x2849B0u;
label_2849b0:
    // 0x2849b0: 0x26020006  addiu       $v0, $s0, 0x6
    ctx->pc = 0x2849b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2849b4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2849b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2849b8: 0x4615c81a  mula.s      $f25, $f21
    ctx->pc = 0x2849b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x2849bc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2849bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2849c0: 0x4616c09d  msub.s      $f2, $f24, $f22
    ctx->pc = 0x2849c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[22]));
    // 0x2849c4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2849c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2849c8: 0x4617c01a  mula.s      $f24, $f23
    ctx->pc = 0x2849c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x2849cc: 0x4615d05d  msub.s      $f1, $f26, $f21
    ctx->pc = 0x2849ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[21]));
    // 0x2849d0: 0x4616d01a  mula.s      $f26, $f22
    ctx->pc = 0x2849d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[22]);
    // 0x2849d4: 0x4617c81d  msub.s      $f0, $f25, $f23
    ctx->pc = 0x2849d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[23]));
    // 0x2849d8: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2849d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2849dc: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x2849dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2849e0: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2849e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2849e4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2849e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2849e8: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x2849e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x2849ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2849ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2849f0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2849f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2849f4: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2849f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2849f8: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x2849f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2849fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2849fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x284a00: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x284a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x284a04: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x284a04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x284a08: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x284a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x284a0c: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x284a0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284a10: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x284A10u;
    {
        const bool branch_taken_0x284a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284a10) {
            ctx->pc = 0x284A38u;
            goto label_284a38;
        }
    }
    ctx->pc = 0x284A18u;
    // 0x284a18: 0x0  nop
    ctx->pc = 0x284a18u;
    // NOP
    // 0x284a1c: 0x0  nop
    ctx->pc = 0x284a1cu;
    // NOP
    // 0x284a20: 0x4600a0d6  rsqrt.s     $f3, $f20, $f0
    ctx->pc = 0x284a20u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[20]);
    // 0x284a24: 0x0  nop
    ctx->pc = 0x284a24u;
    // NOP
    // 0x284a28: 0x0  nop
    ctx->pc = 0x284a28u;
    // NOP
    // 0x284a2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x284A2Cu;
    {
        const bool branch_taken_0x284a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284a2c) {
            ctx->pc = 0x284A38u;
            goto label_284a38;
        }
    }
    ctx->pc = 0x284A34u;
    // 0x284a34: 0x0  nop
    ctx->pc = 0x284a34u;
    // NOP
label_284a38:
    // 0x284a38: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x284a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x284a3c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x284a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284a40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x284a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284a48: 0x0  nop
    ctx->pc = 0x284a48u;
    // NOP
    // 0x284a4c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x284a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x284a50: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x284a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x284a54: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x284a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284a58: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x284a58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x284a5c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x284a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x284a60: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x284a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284a64: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x284a64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x284a68: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x284a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x284a6c: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x284a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284a70: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x284a70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x284a74: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x284a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x284a78: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x284a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284a7c: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x284a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284a80: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x284a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284a84: 0x461f18c2  mul.s       $f3, $f3, $f31
    ctx->pc = 0x284a84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[31]);
    // 0x284a88: 0x461e1082  mul.s       $f2, $f2, $f30
    ctx->pc = 0x284a88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x284a8c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x284a8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x284a90: 0x461d085c  madd.s      $f1, $f1, $f29
    ctx->pc = 0x284a90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[29]));
    // 0x284a94: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x284a94u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x284a98: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x284a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x284a9c: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x284a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284aa0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x284aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x284aa4: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x284aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284aa8: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x284aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x284aac: 0x4602c81a  mula.s      $f25, $f2
    ctx->pc = 0x284aacu;
    ctx->f[31] = FPU_MUL_S(ctx->f[25], ctx->f[2]);
    // 0x284ab0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x284ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284ab4: 0x4603c05d  msub.s      $f1, $f24, $f3
    ctx->pc = 0x284ab4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[3]));
    // 0x284ab8: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x284ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x284abc: 0x4604c01a  mula.s      $f24, $f4
    ctx->pc = 0x284abcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[24], ctx->f[4]);
    // 0x284ac0: 0x4602d05d  msub.s      $f1, $f26, $f2
    ctx->pc = 0x284ac0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[2]));
    // 0x284ac4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x284ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x284ac8: 0x4603d01a  mula.s      $f26, $f3
    ctx->pc = 0x284ac8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[3]);
    // 0x284acc: 0x4604c85d  msub.s      $f1, $f25, $f4
    ctx->pc = 0x284accu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[4]));
    // 0x284ad0: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x284ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x284ad4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x284ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x284ad8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x284ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284adc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x284adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284ae0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x284ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284ae4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x284ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x284ae8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x284ae8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x284aec: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x284aecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x284af0: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x284af0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x284af4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x284af4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284af8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x284AF8u;
    {
        const bool branch_taken_0x284af8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284af8) {
            ctx->pc = 0x284B20u;
            goto label_284b20;
        }
    }
    ctx->pc = 0x284B00u;
    // 0x284b00: 0x0  nop
    ctx->pc = 0x284b00u;
    // NOP
    // 0x284b04: 0x0  nop
    ctx->pc = 0x284b04u;
    // NOP
    // 0x284b08: 0x4601a016  rsqrt.s     $f0, $f20, $f1
    ctx->pc = 0x284b08u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[20]);
    // 0x284b0c: 0x0  nop
    ctx->pc = 0x284b0cu;
    // NOP
    // 0x284b10: 0x0  nop
    ctx->pc = 0x284b10u;
    // NOP
    // 0x284b14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x284B14u;
    {
        const bool branch_taken_0x284b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284b14) {
            ctx->pc = 0x284B20u;
            goto label_284b20;
        }
    }
    ctx->pc = 0x284B1Cu;
    // 0x284b1c: 0x0  nop
    ctx->pc = 0x284b1cu;
    // NOP
label_284b20:
    // 0x284b20: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x284b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x284b24: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x284b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284b28: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x284b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x284b2c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x284b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284b30: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x284b30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x284b34: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x284b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x284b38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x284b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284b3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x284b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284b40: 0x0  nop
    ctx->pc = 0x284b40u;
    // NOP
    // 0x284b44: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x284b44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x284b48: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x284b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x284b4c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x284b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284b50: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x284b50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x284b54: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x284b54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x284b58: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x284b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284b5c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x284b5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x284b60: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x284b60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x284b64: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x284b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284b68: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x284b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x284b6c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x284b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x284b70: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x284b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284b74: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x284b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284b78: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x284b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284b7c: 0x461f18c2  mul.s       $f3, $f3, $f31
    ctx->pc = 0x284b7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[31]);
    // 0x284b80: 0x461e1082  mul.s       $f2, $f2, $f30
    ctx->pc = 0x284b80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x284b84: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x284b84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x284b88: 0x461d001c  madd.s      $f0, $f0, $f29
    ctx->pc = 0x284b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[29]));
    // 0x284b8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284b8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284b90: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x284b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x284b94: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x284b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x284b98: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x284b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284b9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x284b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x284ba0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284ba0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284ba4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x284ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x284ba8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x284ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284bac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284bacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284bb0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x284bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x284bb4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x284bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284bb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284bb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284bbc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x284bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x284bc0: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x284bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284bc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284bc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284bc8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x284bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x284bcc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284bd0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x284bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284bd4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x284bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284bd8: 0x461f18c2  mul.s       $f3, $f3, $f31
    ctx->pc = 0x284bd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[31]);
    // 0x284bdc: 0x461e1082  mul.s       $f2, $f2, $f30
    ctx->pc = 0x284bdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x284be0: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x284be0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x284be4: 0x461d001c  madd.s      $f0, $f0, $f29
    ctx->pc = 0x284be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[29]));
    // 0x284be8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284be8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284bec: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x284becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x284bf0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x284bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x284bf4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x284bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284bf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x284bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x284bfc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284bfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284c00: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x284c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x284c04: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x284c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284c08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284c08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284c0c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x284c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x284c10: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x284c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284c14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284c14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284c18: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x284c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x284c1c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x284c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284c20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284c20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284c24: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x284c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x284c28: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284c2c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x284c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284c30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x284c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284c34: 0x461f18c2  mul.s       $f3, $f3, $f31
    ctx->pc = 0x284c34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[31]);
    // 0x284c38: 0x461e1082  mul.s       $f2, $f2, $f30
    ctx->pc = 0x284c38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x284c3c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x284c3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x284c40: 0x461d001c  madd.s      $f0, $f0, $f29
    ctx->pc = 0x284c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[29]));
    // 0x284c44: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284c44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284c48: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x284c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x284c4c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x284c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x284c50: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x284c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284c54: 0xe4ba0000  swc1        $f26, 0x0($a1)
    ctx->pc = 0x284c54u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x284c58: 0xe4b90004  swc1        $f25, 0x4($a1)
    ctx->pc = 0x284c58u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x284c5c: 0xe4b80008  swc1        $f24, 0x8($a1)
    ctx->pc = 0x284c5cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x284c60: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x284c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284c64: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x284c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x284c68: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x284c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284c6c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x284c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284c70: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x284c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284c74: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x284c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x284c78: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x284c78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x284c7c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x284c7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x284c80: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x284c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x284c84: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x284c84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284c88: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x284C88u;
    {
        const bool branch_taken_0x284c88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284c88) {
            ctx->pc = 0x284CB0u;
            goto label_284cb0;
        }
    }
    ctx->pc = 0x284C90u;
    // 0x284c90: 0x0  nop
    ctx->pc = 0x284c90u;
    // NOP
    // 0x284c94: 0x0  nop
    ctx->pc = 0x284c94u;
    // NOP
    // 0x284c98: 0x4600a056  rsqrt.s     $f1, $f20, $f0
    ctx->pc = 0x284c98u;
    ctx->f[1] = 1.0f / sqrtf(ctx->f[20]);
    // 0x284c9c: 0x0  nop
    ctx->pc = 0x284c9cu;
    // NOP
    // 0x284ca0: 0x0  nop
    ctx->pc = 0x284ca0u;
    // NOP
    // 0x284ca4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x284CA4u;
    {
        const bool branch_taken_0x284ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284ca4) {
            ctx->pc = 0x284CB0u;
            goto label_284cb0;
        }
    }
    ctx->pc = 0x284CACu;
    // 0x284cac: 0x0  nop
    ctx->pc = 0x284cacu;
    // NOP
label_284cb0:
    // 0x284cb0: 0x26020005  addiu       $v0, $s0, 0x5
    ctx->pc = 0x284cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x284cb4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x284cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284cb8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x284cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284cbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284cc0: 0x0  nop
    ctx->pc = 0x284cc0u;
    // NOP
    // 0x284cc4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x284cc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x284cc8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x284cc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x284ccc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x284cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284cd0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x284cd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x284cd4: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x284cd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x284cd8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x284cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284cdc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x284cdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x284ce0: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x284ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x284ce4: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x284ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284ce8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x284ce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x284cec: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x284cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x284cf0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x284cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284cf4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x284cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284cf8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x284cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284cfc: 0x461f18c2  mul.s       $f3, $f3, $f31
    ctx->pc = 0x284cfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[31]);
    // 0x284d00: 0x461e1082  mul.s       $f2, $f2, $f30
    ctx->pc = 0x284d00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x284d04: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x284d04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x284d08: 0x461d085c  madd.s      $f1, $f1, $f29
    ctx->pc = 0x284d08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[29]));
    // 0x284d0c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x284d0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x284d10: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x284d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x284d14: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x284d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x284d18: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x284d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284d1c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x284d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284d20: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x284d20u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x284d24: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x284d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x284d28: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x284d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284d2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x284d2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x284d30: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x284d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x284d34: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x284d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284d38: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x284d38u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x284d3c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x284d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x284d40: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x284d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284d44: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x284d44u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x284d48: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x284d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x284d4c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x284d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284d50: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x284d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284d54: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x284d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284d58: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x284d58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x284d5c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x284d5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x284d60: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x284d60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x284d64: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x284d64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x284d68: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x284d68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284d6c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x284D6Cu;
    {
        const bool branch_taken_0x284d6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284d6c) {
            ctx->pc = 0x284D90u;
            goto label_284d90;
        }
    }
    ctx->pc = 0x284D74u;
    // 0x284d74: 0x0  nop
    ctx->pc = 0x284d74u;
    // NOP
    // 0x284d78: 0x0  nop
    ctx->pc = 0x284d78u;
    // NOP
    // 0x284d7c: 0x4601a016  rsqrt.s     $f0, $f20, $f1
    ctx->pc = 0x284d7cu;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[20]);
    // 0x284d80: 0x0  nop
    ctx->pc = 0x284d80u;
    // NOP
    // 0x284d84: 0x0  nop
    ctx->pc = 0x284d84u;
    // NOP
    // 0x284d88: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x284D88u;
    {
        const bool branch_taken_0x284d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284d88) {
            ctx->pc = 0x284D90u;
            goto label_284d90;
        }
    }
    ctx->pc = 0x284D90u;
label_284d90:
    // 0x284d90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x284d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284d94: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x284d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284d98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x284d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284d9c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x284d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x284da0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x284da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284da4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x284da4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284da8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x284da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x284dac: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x284dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284db0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x284db0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284db4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x284db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x284db8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x284db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284dbc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284dc0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x284dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x284dc4: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x284dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x284dc8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x284dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x284dcc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x284DCCu;
    {
        const bool branch_taken_0x284dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x284dcc) {
            ctx->pc = 0x284DF8u;
            goto label_284df8;
        }
    }
    ctx->pc = 0x284DD4u;
    // 0x284dd4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x284dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284dd8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x284dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284ddc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x284ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284de0: 0x461f1082  mul.s       $f2, $f2, $f31
    ctx->pc = 0x284de0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[31]);
    // 0x284de4: 0x461e0842  mul.s       $f1, $f1, $f30
    ctx->pc = 0x284de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[30]);
    // 0x284de8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x284de8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x284dec: 0x461d001c  madd.s      $f0, $f0, $f29
    ctx->pc = 0x284decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[29]));
    // 0x284df0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x284DF0u;
    {
        const bool branch_taken_0x284df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284DF0u;
            // 0x284df4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284df0) {
            ctx->pc = 0x284E1Cu;
            goto label_284e1c;
        }
    }
    ctx->pc = 0x284DF8u;
label_284df8:
    // 0x284df8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x284df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284dfc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x284dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284e00: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x284e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284e04: 0x461c1082  mul.s       $f2, $f2, $f28
    ctx->pc = 0x284e04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[28]);
    // 0x284e08: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x284e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x284e0c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x284e0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x284e10: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x284e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284e14: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x284e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x284e18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284e18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_284e1c:
    // 0x284e1c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x284e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_284e20:
    // 0x284e20: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x284e20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x284e24: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x284E24u;
    {
        const bool branch_taken_0x284e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284e24) {
            ctx->pc = 0x284EA8u;
            goto label_284ea8;
        }
    }
    ctx->pc = 0x284E2Cu;
    // 0x284e2c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x284e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x284e30: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x284e30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x284e34: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x284E34u;
    {
        const bool branch_taken_0x284e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284e34) {
            ctx->pc = 0x284EA8u;
            goto label_284ea8;
        }
    }
    ctx->pc = 0x284E3Cu;
    // 0x284e3c: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x284e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x284e40: 0x27b00248  addiu       $s0, $sp, 0x248
    ctx->pc = 0x284e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x284e44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x284e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x284e48: 0x27a70240  addiu       $a3, $sp, 0x240
    ctx->pc = 0x284e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x284e4c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x284e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x284e50: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x284e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
    // 0x284e54: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x284e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
    // 0x284e58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x284e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x284e5c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x284e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x284e60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x284e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284e64: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x284e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x284e68: 0xc0a0758  jal         func_281D60
    ctx->pc = 0x284E68u;
    SET_GPR_U32(ctx, 31, 0x284E70u);
    ctx->pc = 0x284E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284E68u;
            // 0x284e6c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281D60u;
    if (runtime->hasFunction(0x281D60u)) {
        auto targetFn = runtime->lookupFunction(0x281D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E70u; }
        if (ctx->pc != 0x284E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281D60_0x281d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E70u; }
        if (ctx->pc != 0x284E70u) { return; }
    }
    ctx->pc = 0x284E70u;
label_284e70:
    // 0x284e70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x284e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x284e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x284e78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x284e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x284e7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x284E7Cu;
    {
        const bool branch_taken_0x284e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284e7c) {
            ctx->pc = 0x284EA8u;
            goto label_284ea8;
        }
    }
    ctx->pc = 0x284E84u;
    // 0x284e84: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x284e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x284e88: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x284e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x284e8c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x284e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x284e90: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x284e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x284e94: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x284e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x284e98: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x284e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x284e9c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x284e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x284ea0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x284EA0u;
    SET_GPR_U32(ctx, 31, 0x284EA8u);
    ctx->pc = 0x284EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284EA0u;
            // 0x284ea4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284EA8u; }
        if (ctx->pc != 0x284EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284EA8u; }
        if (ctx->pc != 0x284EA8u) { return; }
    }
    ctx->pc = 0x284EA8u;
label_284ea8:
    // 0x284ea8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x284ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x284eac: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x284eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x284eb0: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x284eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x284eb4: 0xc0a2a40  jal         func_28A900
    ctx->pc = 0x284EB4u;
    SET_GPR_U32(ctx, 31, 0x284EBCu);
    ctx->pc = 0x284EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284EB4u;
            // 0x284eb8: 0x24c6a520  addiu       $a2, $a2, -0x5AE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A900u;
    if (runtime->hasFunction(0x28A900u)) {
        auto targetFn = runtime->lookupFunction(0x28A900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284EBCu; }
        if (ctx->pc != 0x284EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A900_0x28a900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284EBCu; }
        if (ctx->pc != 0x284EBCu) { return; }
    }
    ctx->pc = 0x284EBCu;
label_284ebc:
    // 0x284ebc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x284ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x284ec0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x284ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ec4: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x284ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284ec8: 0xc0a0ab4  jal         func_282AD0
    ctx->pc = 0x284EC8u;
    SET_GPR_U32(ctx, 31, 0x284ED0u);
    ctx->pc = 0x284ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284EC8u;
            // 0x284ecc: 0x27a50268  addiu       $a1, $sp, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AD0u;
    if (runtime->hasFunction(0x282AD0u)) {
        auto targetFn = runtime->lookupFunction(0x282AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284ED0u; }
        if (ctx->pc != 0x284ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282AD0_0x282ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284ED0u; }
        if (ctx->pc != 0x284ED0u) { return; }
    }
    ctx->pc = 0x284ED0u;
label_284ed0:
    // 0x284ed0: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x284ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x284ed4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x284ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284ed8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x284ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x284edc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x284edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x284ee0: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x284ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x284ee4: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x284ee4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x284ee8: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x284ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x284eec: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x284eecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x284ef0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x284ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x284ef4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x284ef4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x284ef8: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x284ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x284efc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x284efcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x284f00: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x284f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x284f04: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x284f04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x284f08: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x284f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x284f0c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x284f0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284f10: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x284f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x284f14: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x284f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284f18: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x284f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x284f1c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x284f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284f20: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x284f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x284f24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x284f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284f28: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x284f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x284f2c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x284f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x284f30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x284f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x284f34: 0x3e00008  jr          $ra
    ctx->pc = 0x284F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F34u;
            // 0x284f38: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284F3Cu;
    // 0x284f3c: 0x0  nop
    ctx->pc = 0x284f3cu;
    // NOP
}
