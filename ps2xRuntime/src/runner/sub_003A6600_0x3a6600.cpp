#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A6600
// Address: 0x3a6600 - 0x3a6b30
void sub_003A6600_0x3a6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6600_0x3a6600");
#endif

    switch (ctx->pc) {
        case 0x3a6738u: goto label_3a6738;
        case 0x3a67acu: goto label_3a67ac;
        case 0x3a6838u: goto label_3a6838;
        case 0x3a68b0u: goto label_3a68b0;
        case 0x3a694cu: goto label_3a694c;
        case 0x3a69c4u: goto label_3a69c4;
        case 0x3a6a20u: goto label_3a6a20;
        default: break;
    }

    ctx->pc = 0x3a6600u;

    // 0x3a6600: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a6600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3a6604: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3a6604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3a6608: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3a6608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3a660c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3a660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3a6610: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3a6610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3a6614: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x3a6614u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
    // 0x3a6618: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3a6618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3a661c: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x3a661cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
    // 0x3a6620: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a6620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a6624: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a6624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6628: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a6628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a662c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3a662cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6630: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3a6630u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3a6634: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3a6634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6638: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3a6638u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3a663c: 0x2694a6e0  addiu       $s4, $s4, -0x5920
    ctx->pc = 0x3a663cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944480));
    // 0x3a6640: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3a6640u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3a6644: 0x2673210c  addiu       $s3, $s3, 0x210C
    ctx->pc = 0x3a6644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8460));
    // 0x3a6648: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a6648u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3a664c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a664cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3a6650: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x3a6650u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a6654: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x3a6654u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x3a6658: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3a6658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a665c: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x3a665cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3a6660: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x3a6660u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3a6664: 0x90630116  lbu         $v1, 0x116($v1)
    ctx->pc = 0x3a6664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
    // 0x3a6668: 0x85240002  lh          $a0, 0x2($t1)
    ctx->pc = 0x3a6668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3a666c: 0x1073818  mult        $a3, $t0, $a3
    ctx->pc = 0x3a666cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3a6670: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3a6670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a6674: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3a6674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3a6678: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a6678u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a667c: 0x0  nop
    ctx->pc = 0x3a667cu;
    // NOP
    // 0x3a6680: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3a6680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x3a6684: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x3a6684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3a6688: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a6688u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a668c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A668Cu;
    {
        const bool branch_taken_0x3a668c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A668Cu;
            // 0x3a6690: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a668c) {
            ctx->pc = 0x3A6698u;
            goto label_3a6698;
        }
    }
    ctx->pc = 0x3A6694u;
    // 0x3a6694: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3a6694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a6698:
    // 0x3a6698: 0x52300087  beql        $s1, $s0, . + 4 + (0x87 << 2)
    ctx->pc = 0x3A6698u;
    {
        const bool branch_taken_0x3a6698 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x3a6698) {
            ctx->pc = 0x3A669Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6698u;
            // 0x3a669c: 0x2a210003  slti        $at, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A68B8u;
            goto label_3a68b8;
        }
    }
    ctx->pc = 0x3A66A0u;
    // 0x3a66a0: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x3a66a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a66a4: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A66A4u;
    {
        const bool branch_taken_0x3a66a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a66a4) {
            ctx->pc = 0x3A66A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A66A4u;
            // 0x3a66a8: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A66BCu;
            goto label_3a66bc;
        }
    }
    ctx->pc = 0x3A66ACu;
    // 0x3a66ac: 0x2603000a  addiu       $v1, $s0, 0xA
    ctx->pc = 0x3a66acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x3a66b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a66b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a66b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A66B4u;
    {
        const bool branch_taken_0x3a66b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A66B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A66B4u;
            // 0x3a66b8: 0x2832821  addu        $a1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a66b4) {
            ctx->pc = 0x3A66C4u;
            goto label_3a66c4;
        }
    }
    ctx->pc = 0x3A66BCu;
label_3a66bc:
    // 0x3a66bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a66c0: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x3a66c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3a66c4:
    // 0x3a66c4: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x3a66c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a66c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3a66c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a66cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a66d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a66d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a66d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a66d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a66d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a66d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a66dc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a66e0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a66e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a66e4: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x3a66e4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a66e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a66ec: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3a66ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3a66f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a66f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a66f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a66f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a66f8: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x3a66f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a66fc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3a66fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a6700: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a6700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a6704: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x3a6704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3a6708: 0x46000e02  mul.s       $f24, $f1, $f0
    ctx->pc = 0x3a6708u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a670c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a670cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6710: 0x0  nop
    ctx->pc = 0x3a6710u;
    // NOP
    // 0x3a6714: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a6714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a6718: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a6718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a671c: 0x4618ab01  sub.s       $f12, $f21, $f24
    ctx->pc = 0x3a671cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[24]);
    // 0x3a6720: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a6720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a6724: 0x46000dc2  mul.s       $f23, $f1, $f0
    ctx->pc = 0x3a6724u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a6728: 0x4617a341  sub.s       $f13, $f20, $f23
    ctx->pc = 0x3a6728u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
    // 0x3a672c: 0x4618ab80  add.s       $f14, $f21, $f24
    ctx->pc = 0x3a672cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x3a6730: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A6730u;
    SET_GPR_U32(ctx, 31, 0x3A6738u);
    ctx->pc = 0x3A6734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6730u;
            // 0x3a6734: 0x4617a3c0  add.s       $f15, $f20, $f23 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6738u; }
        if (ctx->pc != 0x3A6738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6738u; }
        if (ctx->pc != 0x3A6738u) { return; }
    }
    ctx->pc = 0x3A6738u;
label_3a6738:
    // 0x3a6738: 0x4618ab00  add.s       $f12, $f21, $f24
    ctx->pc = 0x3a6738u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x3a673c: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x3a673cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a6740: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A6740u;
    {
        const bool branch_taken_0x3a6740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6740u;
            // 0x3a6744: 0x4617a3c0  add.s       $f15, $f20, $f23 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6740) {
            ctx->pc = 0x3A6758u;
            goto label_3a6758;
        }
    }
    ctx->pc = 0x3A6748u;
    // 0x3a6748: 0x2602000d  addiu       $v0, $s0, 0xD
    ctx->pc = 0x3a6748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x3a674c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a674cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A6750u;
    {
        const bool branch_taken_0x3a6750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6750u;
            // 0x3a6754: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6750) {
            ctx->pc = 0x3A675Cu;
            goto label_3a675c;
        }
    }
    ctx->pc = 0x3A6758u;
label_3a6758:
    // 0x3a6758: 0x26850100  addiu       $a1, $s4, 0x100
    ctx->pc = 0x3a6758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_3a675c:
    // 0x3a675c: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x3a675cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a6760: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a6760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6764: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x3a6764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a6768: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3a6768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3a676c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3a676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a6770: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a6770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6774: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a6774u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a677c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a677cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a6780: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a6780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6784: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3a6784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6788: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3a6788u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3a678c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3a678cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3a6790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6794: 0x0  nop
    ctx->pc = 0x3a6794u;
    // NOP
    // 0x3a6798: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a6798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a679c: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x3a679cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x3a67a0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a67a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a67a4: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A67A4u;
    SET_GPR_U32(ctx, 31, 0x3A67ACu);
    ctx->pc = 0x3A67A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A67A4u;
            // 0x3a67a8: 0x46026380  add.s       $f14, $f12, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A67ACu; }
        if (ctx->pc != 0x3A67ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A67ACu; }
        if (ctx->pc != 0x3A67ACu) { return; }
    }
    ctx->pc = 0x3A67ACu;
label_3a67ac:
    // 0x3a67ac: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x3a67acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a67b0: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A67B0u;
    {
        const bool branch_taken_0x3a67b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a67b0) {
            ctx->pc = 0x3A67B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A67B0u;
            // 0x3a67b4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A67C8u;
            goto label_3a67c8;
        }
    }
    ctx->pc = 0x3A67B8u;
    // 0x3a67b8: 0x2622000a  addiu       $v0, $s1, 0xA
    ctx->pc = 0x3a67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x3a67bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a67c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A67C0u;
    {
        const bool branch_taken_0x3a67c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A67C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A67C0u;
            // 0x3a67c4: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67c0) {
            ctx->pc = 0x3A67D0u;
            goto label_3a67d0;
        }
    }
    ctx->pc = 0x3A67C8u;
label_3a67c8:
    // 0x3a67c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a67cc: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x3a67ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3a67d0:
    // 0x3a67d0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3a67d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a67d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a67d8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a67d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a67dc: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x3a67dcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a67e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a67e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a67e4: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3a67e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3a67e8: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x3a67e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x3a67ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a67f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a67f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a67f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a67f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a67f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a67fc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3a67fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x3a6800: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x3a6800u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a6804: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x3a6804u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a6808: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a6808u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a680c: 0x0  nop
    ctx->pc = 0x3a680cu;
    // NOP
    // 0x3a6810: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a6810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a6814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6818: 0x0  nop
    ctx->pc = 0x3a6818u;
    // NOP
    // 0x3a681c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a681cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a6820: 0x4617ab01  sub.s       $f12, $f21, $f23
    ctx->pc = 0x3a6820u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x3a6824: 0x4616a341  sub.s       $f13, $f20, $f22
    ctx->pc = 0x3a6824u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x3a6828: 0x4617ab80  add.s       $f14, $f21, $f23
    ctx->pc = 0x3a6828u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x3a682c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a682cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a6830: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A6830u;
    SET_GPR_U32(ctx, 31, 0x3A6838u);
    ctx->pc = 0x3A6834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6830u;
            // 0x3a6834: 0x4616a3c0  add.s       $f15, $f20, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6838u; }
        if (ctx->pc != 0x3A6838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6838u; }
        if (ctx->pc != 0x3A6838u) { return; }
    }
    ctx->pc = 0x3A6838u;
label_3a6838:
    // 0x3a6838: 0x4617ab00  add.s       $f12, $f21, $f23
    ctx->pc = 0x3a6838u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x3a683c: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x3a683cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a6840: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A6840u;
    {
        const bool branch_taken_0x3a6840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6840u;
            // 0x3a6844: 0x4616a3c0  add.s       $f15, $f20, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6840) {
            ctx->pc = 0x3A6858u;
            goto label_3a6858;
        }
    }
    ctx->pc = 0x3A6848u;
    // 0x3a6848: 0x2622000d  addiu       $v0, $s1, 0xD
    ctx->pc = 0x3a6848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13));
    // 0x3a684c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a684cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6850: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A6850u;
    {
        const bool branch_taken_0x3a6850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6850u;
            // 0x3a6854: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6850) {
            ctx->pc = 0x3A685Cu;
            goto label_3a685c;
        }
    }
    ctx->pc = 0x3A6858u;
label_3a6858:
    // 0x3a6858: 0x26850100  addiu       $a1, $s4, 0x100
    ctx->pc = 0x3a6858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_3a685c:
    // 0x3a685c: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x3a685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a6860: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a6860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6864: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3a6864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6868: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x3a6868u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a686c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6870: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3a6870u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3a6874: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a6874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6878: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a6878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a687c: 0x46030882  mul.s       $f2, $f1, $f3
    ctx->pc = 0x3a687cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3a6880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6884: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x3a6884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a6888: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a6888u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a688c: 0x0  nop
    ctx->pc = 0x3a688cu;
    // NOP
    // 0x3a6890: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a6890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a6894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6898: 0x0  nop
    ctx->pc = 0x3a6898u;
    // NOP
    // 0x3a689c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a689cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a68a0: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x3a68a0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x3a68a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a68a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a68a8: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A68A8u;
    SET_GPR_U32(ctx, 31, 0x3A68B0u);
    ctx->pc = 0x3A68ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A68A8u;
            // 0x3a68ac: 0x46026380  add.s       $f14, $f12, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A68B0u; }
        if (ctx->pc != 0x3A68B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A68B0u; }
        if (ctx->pc != 0x3A68B0u) { return; }
    }
    ctx->pc = 0x3A68B0u;
label_3a68b0:
    // 0x3a68b0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3A68B0u;
    {
        const bool branch_taken_0x3a68b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A68B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A68B0u;
            // 0x3a68b4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a68b0) {
            ctx->pc = 0x3A69C8u;
            goto label_3a69c8;
        }
    }
    ctx->pc = 0x3A68B8u;
label_3a68b8:
    // 0x3a68b8: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A68B8u;
    {
        const bool branch_taken_0x3a68b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a68b8) {
            ctx->pc = 0x3A68BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A68B8u;
            // 0x3a68bc: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A68D0u;
            goto label_3a68d0;
        }
    }
    ctx->pc = 0x3A68C0u;
    // 0x3a68c0: 0x2623000a  addiu       $v1, $s1, 0xA
    ctx->pc = 0x3a68c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x3a68c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a68c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A68C8u;
    {
        const bool branch_taken_0x3a68c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A68CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A68C8u;
            // 0x3a68cc: 0x2832821  addu        $a1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a68c8) {
            ctx->pc = 0x3A68D8u;
            goto label_3a68d8;
        }
    }
    ctx->pc = 0x3A68D0u;
label_3a68d0:
    // 0x3a68d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a68d4: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x3a68d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3a68d8:
    // 0x3a68d8: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x3a68d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a68dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3a68dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a68e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a68e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a68e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a68e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a68e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a68ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a68ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a68f0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a68f4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a68f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a68f8: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x3a68f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a68fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6900: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3a6900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3a6904: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a6904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6908: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a6908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a690c: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x3a690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a6910: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3a6910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a6914: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a6914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a6918: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x3a6918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3a691c: 0x46000dc2  mul.s       $f23, $f1, $f0
    ctx->pc = 0x3a691cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a6920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a6924: 0x0  nop
    ctx->pc = 0x3a6924u;
    // NOP
    // 0x3a6928: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a6928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a692c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6930: 0x4617ab01  sub.s       $f12, $f21, $f23
    ctx->pc = 0x3a6930u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x3a6934: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a6934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a6938: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x3a6938u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a693c: 0x4616a341  sub.s       $f13, $f20, $f22
    ctx->pc = 0x3a693cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x3a6940: 0x4617ab80  add.s       $f14, $f21, $f23
    ctx->pc = 0x3a6940u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x3a6944: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A6944u;
    SET_GPR_U32(ctx, 31, 0x3A694Cu);
    ctx->pc = 0x3A6948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6944u;
            // 0x3a6948: 0x4616a3c0  add.s       $f15, $f20, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A694Cu; }
        if (ctx->pc != 0x3A694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A694Cu; }
        if (ctx->pc != 0x3A694Cu) { return; }
    }
    ctx->pc = 0x3A694Cu;
label_3a694c:
    // 0x3a694c: 0x4617ab00  add.s       $f12, $f21, $f23
    ctx->pc = 0x3a694cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x3a6950: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x3a6950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a6954: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A6954u;
    {
        const bool branch_taken_0x3a6954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6954u;
            // 0x3a6958: 0x4616a3c0  add.s       $f15, $f20, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6954) {
            ctx->pc = 0x3A696Cu;
            goto label_3a696c;
        }
    }
    ctx->pc = 0x3A695Cu;
    // 0x3a695c: 0x2622000d  addiu       $v0, $s1, 0xD
    ctx->pc = 0x3a695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13));
    // 0x3a6960: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a6960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6964: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A6964u;
    {
        const bool branch_taken_0x3a6964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6964u;
            // 0x3a6968: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6964) {
            ctx->pc = 0x3A6970u;
            goto label_3a6970;
        }
    }
    ctx->pc = 0x3A696Cu;
label_3a696c:
    // 0x3a696c: 0x26850100  addiu       $a1, $s4, 0x100
    ctx->pc = 0x3a696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_3a6970:
    // 0x3a6970: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x3a6970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a6974: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a6974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6978: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3a6978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a697c: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x3a697cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a6980: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a6980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6984: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3a6984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3a6988: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a6988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a698c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a698cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6990: 0x46030882  mul.s       $f2, $f1, $f3
    ctx->pc = 0x3a6990u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3a6994: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6998: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x3a6998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a699c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a699cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a69a0: 0x0  nop
    ctx->pc = 0x3a69a0u;
    // NOP
    // 0x3a69a4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a69a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a69a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a69a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a69ac: 0x0  nop
    ctx->pc = 0x3a69acu;
    // NOP
    // 0x3a69b0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a69b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a69b4: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x3a69b4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x3a69b8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a69b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a69bc: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A69BCu;
    SET_GPR_U32(ctx, 31, 0x3A69C4u);
    ctx->pc = 0x3A69C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A69BCu;
            // 0x3a69c0: 0x46026380  add.s       $f14, $f12, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A69C4u; }
        if (ctx->pc != 0x3A69C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A69C4u; }
        if (ctx->pc != 0x3A69C4u) { return; }
    }
    ctx->pc = 0x3A69C4u;
label_3a69c4:
    // 0x3a69c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3a69c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3a69c8:
    // 0x3a69c8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3a69c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3a69cc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3a69ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a69d0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3a69d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3a69d4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3a69d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a69d8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3a69d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a69dc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3a69dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a69e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a69e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a69e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3a69e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a69e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a69ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a69ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a69f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a69f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a69f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A69F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A69F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A69F4u;
            // 0x3a69f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A69FCu;
    // 0x3a69fc: 0x0  nop
    ctx->pc = 0x3a69fcu;
    // NOP
    // 0x3a6a00: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a6a04: 0x3c0a00af  lui         $t2, 0xAF
    ctx->pc = 0x3a6a04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)175 << 16));
    // 0x3a6a08: 0x8c688a08  lw          $t0, -0x75F8($v1)
    ctx->pc = 0x3a6a08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3a6a0c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a6a0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a10: 0x2487000c  addiu       $a3, $a0, 0xC
    ctx->pc = 0x3a6a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x3a6a14: 0x254a0e80  addiu       $t2, $t2, 0xE80
    ctx->pc = 0x3a6a14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3712));
    // 0x3a6a18: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3a6a18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a1c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a6a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a6a20:
    // 0x3a6a20: 0xc4e10024  lwc1        $f1, 0x24($a3)
    ctx->pc = 0x3a6a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6a24: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x3a6a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x3a6a28: 0xc5200044  lwc1        $f0, 0x44($t1)
    ctx->pc = 0x3a6a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6a2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a6a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a6a30: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x3A6A30u;
    {
        const bool branch_taken_0x3a6a30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A6A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6A30u;
            // 0x3a6a34: 0x2526003c  addiu       $a2, $t1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6a30) {
            ctx->pc = 0x3A6A70u;
            goto label_3a6a70;
        }
    }
    ctx->pc = 0x3A6A38u;
    // 0x3a6a38: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3a6a38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3a6a3c: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x3a6a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6a40: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x3a6a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6a44: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x3a6a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x3a6a48: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x3a6a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3a6a4c: 0xc4e10024  lwc1        $f1, 0x24($a3)
    ctx->pc = 0x3a6a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6a50: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3a6a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6a54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a6a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a6a58: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x3A6A58u;
    {
        const bool branch_taken_0x3a6a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a6a58) {
            ctx->pc = 0x3A6AB0u;
            goto label_3a6ab0;
        }
    }
    ctx->pc = 0x3A6A60u;
    // 0x3a6a60: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x3a6a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3a6a64: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3a6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3a6a68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3A6A68u;
    {
        const bool branch_taken_0x3a6a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6A68u;
            // 0x3a6a6c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6a68) {
            ctx->pc = 0x3A6AB0u;
            goto label_3a6ab0;
        }
    }
    ctx->pc = 0x3A6A70u;
label_3a6a70:
    // 0x3a6a70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a6a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a6a74: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x3A6A74u;
    {
        const bool branch_taken_0x3a6a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a6a74) {
            ctx->pc = 0x3A6AB0u;
            goto label_3a6ab0;
        }
    }
    ctx->pc = 0x3A6A7Cu;
    // 0x3a6a7c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3a6a7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3a6a80: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x3a6a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6a84: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x3a6a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6a88: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x3a6a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x3a6a8c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x3a6a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3a6a90: 0xc4e10024  lwc1        $f1, 0x24($a3)
    ctx->pc = 0x3a6a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6a94: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3a6a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6a98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a6a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a6a9c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6A9Cu;
    {
        const bool branch_taken_0x3a6a9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a6a9c) {
            ctx->pc = 0x3A6AB0u;
            goto label_3a6ab0;
        }
    }
    ctx->pc = 0x3A6AA4u;
    // 0x3a6aa4: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x3a6aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3a6aa8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3a6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3a6aac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3a6aacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_3a6ab0:
    // 0x3a6ab0: 0x80a50e3f  lb          $a1, 0xE3F($a1)
    ctx->pc = 0x3a6ab0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3647)));
    // 0x3a6ab4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3a6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3a6ab8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x3a6ab8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3a6abc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A6ABCu;
    {
        const bool branch_taken_0x3a6abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6abc) {
            ctx->pc = 0x3A6AE0u;
            goto label_3a6ae0;
        }
    }
    ctx->pc = 0x3A6AC4u;
    // 0x3a6ac4: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x3a6ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6ac8: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x3a6ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3a6acc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3a6accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3a6ad0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3a6ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3a6ad4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A6AD4u;
    {
        const bool branch_taken_0x3a6ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6AD4u;
            // 0x3a6ad8: 0xacc50004  sw          $a1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6ad4) {
            ctx->pc = 0x3A6B00u;
            goto label_3a6b00;
        }
    }
    ctx->pc = 0x3A6ADCu;
    // 0x3a6adc: 0x0  nop
    ctx->pc = 0x3a6adcu;
    // NOP
label_3a6ae0:
    // 0x3a6ae0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3a6ae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a6ae4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6AE4u;
    {
        const bool branch_taken_0x3a6ae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6ae4) {
            ctx->pc = 0x3A6B00u;
            goto label_3a6b00;
        }
    }
    ctx->pc = 0x3A6AECu;
    // 0x3a6aec: 0xc4e0002c  lwc1        $f0, 0x2C($a3)
    ctx->pc = 0x3a6aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6af0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x3a6af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3a6af4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3a6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3a6af8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3a6af8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3a6afc: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x3a6afcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_3a6b00:
    // 0x3a6b00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3a6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6b04: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3a6b04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3a6b08: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3a6b08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3a6b0c: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3a6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x3a6b10: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x3a6b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3a6b14: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x3A6B14u;
    {
        const bool branch_taken_0x3a6b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6B14u;
            // 0x3a6b18: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b14) {
            ctx->pc = 0x3A6A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a6a20;
        }
    }
    ctx->pc = 0x3A6B1Cu;
    // 0x3a6b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A6B24u;
    // 0x3a6b24: 0x0  nop
    ctx->pc = 0x3a6b24u;
    // NOP
    // 0x3a6b28: 0x0  nop
    ctx->pc = 0x3a6b28u;
    // NOP
    // 0x3a6b2c: 0x0  nop
    ctx->pc = 0x3a6b2cu;
    // NOP
}
